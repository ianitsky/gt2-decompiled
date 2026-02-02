#ifndef DISK_PATH_H
#define DISK_PATH_H

#include <stddef.h>

#define GT2_DISK_PATH_MAX 1024

/**
 * Resolve disk image path for PSY-Z CD emulation.
 *
 * Uses (in order):
 * 1. Command line: -iso <path>, -cue <path>, -disk <path>, or first positional arg
 * 2. Next to executable: scus_944.88.cue, scus_944.88.iso, gt2.cue, gt2.iso, disk.cue, disk.iso
 *
 * For .iso paths, a temporary CUE file is created (MODE1/2352 single track) and
 * out_path is set to that CUE path; psyz expects CUE format.
 *
 * @param argc  Argument count from main()
 * @param argv  Argument vector from main()
 * @param out_path  Buffer to receive the resolved path (CUE file path)
 * @param out_size  Size of out_path (use GT2_DISK_PATH_MAX)
 * @return  0 path set (call Psyz_SetDiskPath(out_path)); 1 no disk (optional); -1 error
 */
int gt2_resolve_disk_path(int argc, char** argv, char* out_path, size_t out_size);

#endif
