#include "disk_path.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <libgen.h>
#include <limits.h>
#include <errno.h>

#ifdef __linux__
#include <linux/limits.h>
#endif
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif

static int path_has_suffix(const char* path, const char* suffix) {
    size_t plen = strlen(path);
    size_t slen = strlen(suffix);
    if (plen < slen) return 0;
    return strcasecmp(path + plen - slen, suffix) == 0;
}

static int get_executable_dir(char* out, size_t out_size) {
    char exe[PATH_MAX];
    ssize_t n = readlink("/proc/self/exe", exe, sizeof(exe) - 1);
    if (n <= 0) return -1;
    exe[n] = '\0';
    char* d = dirname(exe);
    if (!d) return -1;
    if ((size_t)snprintf(out, out_size, "%s", d) >= out_size) return -1;
    return 0;
}

static int try_open(const char* path) {
    FILE* f = fopen(path, "rb");
    if (f) {
        fclose(f);
        return 1;
    }
    return 0;
}

/* Create a temporary CUE file for a raw .iso (single track MODE1/2352). */
static int create_cue_for_iso(const char* iso_path, char* cue_out, size_t cue_out_size) {
    char iso_abs[PATH_MAX];
    if (realpath(iso_path, iso_abs) == NULL) {
        if (strlen(iso_path) < PATH_MAX - 1)
            strncpy(iso_abs, iso_path, PATH_MAX - 1);
        iso_abs[PATH_MAX - 1] = '\0';
    }
    int pid = (int)getpid();
    int n = snprintf(cue_out, cue_out_size, "/tmp/gt2_disk_%d.cue", pid);
    if (n < 0 || (size_t)n >= cue_out_size) return -1;
    FILE* f = fopen(cue_out, "w");
    if (!f) return -1;
    fprintf(f, "FILE \"%s\" BINARY\n", iso_abs);
    fprintf(f, "  TRACK 01 MODE1/2352\n");
    fprintf(f, "    INDEX 01 00:00:00\n");
    fclose(f);
    return 0;
}

int gt2_resolve_disk_path(int argc, char** argv, char* out_path, size_t out_size) {
    if (!out_path || out_size == 0) return -1;
    out_path[0] = '\0';

    /* 1. Command line: -iso, -cue, -disk or first positional */
    for (int i = 1; i < argc; i++) {
        const char* arg = argv[i];
        if (strcmp(arg, "-iso") == 0 || strcmp(arg, "-cue") == 0 || strcmp(arg, "-disk") == 0) {
            if (i + 1 >= argc) {
                fprintf(stderr, "GT2: %s requires a path argument\n", arg);
                return -1;
            }
            const char* path = argv[i + 1];
            if (path[0] == '\0') return -1;
            if (path_has_suffix(path, ".iso")) {
                if (create_cue_for_iso(path, out_path, out_size) != 0) {
                    fprintf(stderr, "GT2: Failed to create CUE for ISO: %s\n", path);
                    return -1;
                }
                return 0;
            }
            if (try_open(path)) {
                strncpy(out_path, path, out_size - 1);
                out_path[out_size - 1] = '\0';
                return 0;
            }
            fprintf(stderr, "GT2: Disk file not found: %s\n", path);
            return -1;
        }
        if (arg[0] != '-') {
            /* First positional argument as path */
            if (path_has_suffix(arg, ".iso")) {
                if (create_cue_for_iso(arg, out_path, out_size) != 0) {
                    fprintf(stderr, "GT2: Failed to create CUE for ISO: %s\n", arg);
                    return -1;
                }
                return 0;
            }
            if (try_open(arg)) {
                strncpy(out_path, arg, out_size - 1);
                out_path[out_size - 1] = '\0';
                return 0;
            }
            fprintf(stderr, "GT2: Disk file not found: %s\n", arg);
            return -1;
        }
    }

    /* 2. Next to executable */
    char exe_dir[PATH_MAX];
    if (get_executable_dir(exe_dir, sizeof(exe_dir)) != 0) return 1;

    const char* defaults[] = {
        "scus_944.88.cue", "scus_944.88.iso",
        "gt2.cue", "gt2.iso",
        "disk.cue", "disk.iso",
        NULL
    };
    for (const char** p = defaults; *p; p++) {
        char candidate[PATH_MAX];
        int n = snprintf(candidate, sizeof(candidate), "%s/%s", exe_dir, *p);
        if (n < 0 || (size_t)n >= sizeof(candidate)) continue;
        if (!try_open(candidate)) continue;
        if (path_has_suffix(*p, ".iso")) {
            if (create_cue_for_iso(candidate, out_path, out_size) != 0) continue;
        } else {
            strncpy(out_path, candidate, out_size - 1);
            out_path[out_size - 1] = '\0';
        }
        return 0;
    }

    return 1; /* No disk specified, optional */
}
