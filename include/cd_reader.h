#ifndef CD_READER_H
#define CD_READER_H

#include <stddef.h>

/**
 * Platform-level CD sector reader.
 *
 * Reads raw 2352-byte sectors from a BIN file (referenced by a CUE sheet)
 * and extracts 2048-byte ISO 9660 user data from each sector.
 *
 * This bypasses the PS1 CD state machine (which relies on hardware interrupts)
 * and provides synchronous sector reads for the decompiled code on Linux.
 */

/**
 * Initialize the CD reader from a CUE file path.
 * Parses the CUE to locate the BIN data file and opens it.
 *
 * @param cue_path  Path to the CUE sheet
 * @return  0 on success, -1 on error
 */
int gt2_cd_reader_init(const char *cue_path);

/**
 * Read user data from CD sectors into a buffer.
 *
 * Each logical sector is 2048 bytes of user data extracted from 2352-byte
 * raw sectors in the BIN file (Mode 2 XA: 24-byte header skipped).
 *
 * @param buffer        Destination buffer (must be at least num_bytes)
 * @param start_sector  First sector to read (logical sector number)
 * @param num_bytes     Number of bytes to read (will be rounded up to
 *                      full 2048-byte sectors internally)
 * @return  Number of bytes actually read, or -1 on error
 */
int gt2_cd_read_sectors(void *buffer, int start_sector, int num_bytes);

/**
 * Check whether the CD reader has been initialized and a BIN file is open.
 *
 * @return  1 if ready, 0 otherwise
 */
int gt2_cd_reader_is_ready(void);

/**
 * Close the BIN file and release resources.
 */
void gt2_cd_reader_close(void);

#endif /* CD_READER_H */
