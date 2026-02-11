#include "cd_reader.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Raw CD sector layout (Mode 2 XA Form 1):
 *   12 bytes sync, 4 bytes header, 8 bytes sub-header,
 *   2048 bytes user data, 4 bytes EDC, 276 bytes ECC  = 2352 total  */
#define RAW_SECTOR_SIZE   2352
#define USER_DATA_OFFSET  24
#define USER_DATA_SIZE    2048

static FILE *g_bin_file = NULL;
static long  g_bin_size = 0;

/* ------------------------------------------------------------------ */
/* CUE parser: extract the first FILE "..." line to find the BIN path */
/* ------------------------------------------------------------------ */
static int parse_cue_for_bin(const char *cue_path, char *bin_path, size_t bin_size)
{
    FILE *cue = fopen(cue_path, "r");
    if (!cue) {
        fprintf(stderr, "[cd_reader] Failed to open CUE file: %s\n", cue_path);
        return -1;
    }

    char line[2048];
    int found = 0;

    while (fgets(line, sizeof(line), cue)) {
        /* Look for: FILE "something" BINARY */
        char *p = line;
        while (*p && isspace((unsigned char)*p)) p++;

        if (strncasecmp(p, "FILE", 4) != 0) continue;
        p += 4;
        while (*p && isspace((unsigned char)*p)) p++;

        char quote = *p;
        if (quote != '"' && quote != '\'') continue;
        p++;

        char *end = strchr(p, quote);
        if (!end) continue;

        size_t name_len = (size_t)(end - p);

        /* If the path is relative, resolve it relative to the CUE directory */
        if (p[0] != '/') {
            /* Copy CUE directory */
            const char *last_sep = strrchr(cue_path, '/');
            size_t dir_len = last_sep ? (size_t)(last_sep - cue_path + 1) : 0;
            if (dir_len + name_len + 1 > bin_size) {
                fclose(cue);
                return -1;
            }
            memcpy(bin_path, cue_path, dir_len);
            memcpy(bin_path + dir_len, p, name_len);
            bin_path[dir_len + name_len] = '\0';
        } else {
            if (name_len + 1 > bin_size) {
                fclose(cue);
                return -1;
            }
            memcpy(bin_path, p, name_len);
            bin_path[name_len] = '\0';
        }

        found = 1;
        break;
    }

    fclose(cue);
    return found ? 0 : -1;
}

/* ------------------------------------------------------------------ */
/* Public API                                                          */
/* ------------------------------------------------------------------ */

int gt2_cd_reader_init(const char *cue_path)
{
    if (g_bin_file) {
        gt2_cd_reader_close();
    }

    char bin_path[2048];
    if (parse_cue_for_bin(cue_path, bin_path, sizeof(bin_path)) != 0) {
        fprintf(stderr, "[cd_reader] Could not find BIN file in CUE: %s\n", cue_path);
        return -1;
    }

    g_bin_file = fopen(bin_path, "rb");
    if (!g_bin_file) {
        fprintf(stderr, "[cd_reader] Failed to open BIN file: %s\n", bin_path);
        return -1;
    }

    /* Determine file size */
    fseek(g_bin_file, 0, SEEK_END);
    g_bin_size = ftell(g_bin_file);
    fseek(g_bin_file, 0, SEEK_SET);

    long total_sectors = g_bin_size / RAW_SECTOR_SIZE;
    fprintf(stderr, "[cd_reader] Opened BIN: %s (%ld bytes, %ld sectors)\n",
            bin_path, g_bin_size, total_sectors);

    return 0;
}

int gt2_cd_read_sectors(void *buffer, int start_sector, int num_bytes)
{
    if (!g_bin_file || !buffer || num_bytes <= 0) {
        return -1;
    }

    unsigned char *dst = (unsigned char *)buffer;
    int bytes_read = 0;
    int sector = start_sector;

    while (bytes_read < num_bytes) {
        long file_offset = (long)sector * RAW_SECTOR_SIZE + USER_DATA_OFFSET;

        if (file_offset + USER_DATA_SIZE > g_bin_size) {
            /* Past end of BIN – zero-fill remaining and stop */
            int remain = num_bytes - bytes_read;
            memset(dst, 0, (size_t)remain);
            bytes_read += remain;
            break;
        }

        if (fseek(g_bin_file, file_offset, SEEK_SET) != 0) {
            return -1;
        }

        int to_read = num_bytes - bytes_read;
        if (to_read > USER_DATA_SIZE) {
            to_read = USER_DATA_SIZE;
        }

        size_t got = fread(dst, 1, (size_t)to_read, g_bin_file);
        if (got == 0) {
            /* Read error or unexpected EOF */
            break;
        }

        dst += got;
        bytes_read += (int)got;
        sector++;
    }

    return bytes_read;
}

int gt2_cd_reader_is_ready(void)
{
    return g_bin_file != NULL;
}

void gt2_cd_reader_close(void)
{
    if (g_bin_file) {
        fclose(g_bin_file);
        g_bin_file = NULL;
        g_bin_size = 0;
    }
}
