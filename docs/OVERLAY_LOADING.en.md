# GT2 Overlay Loading System

## Overview

GT2 uses an overlay system to load game modules dynamically from CD-ROM due to the 2MB RAM limit. Overlays are compressed (DEFLATE) and loaded on demand.

## Main Overlay File

- **gt2.ovl**: Main overlay file on CD, contains multiple game modules (menus, race, arcade, etc.)

## Overlay Loading Functions

| Function | Suggested Name | File | Purpose |
|----------|----------------|------|---------|
| load_gt2_overlay_file | LoadGT2OverlayFile | part_001 | Loads gt2.ovl from CD, allocates buffer, copies data |
| FUN_8005d9bc | ClearOverlayBuffer | part_001 | Clears main overlay buffer (0x120654 bytes) |
| FUN_8005d9f0 | InvokeOverlayInitCallback | part_001 | Calls init callback before overlay load |
| FUN_8005da3c | InitializeOverlayByIndex | part_001 | Loads overlay by index (config from PTR_LAB_80091174) |
| FUN_8005da7c | LoadOverlayWithConfig | part_001 | Full load: copy CD → decompress → flush cache → clear |
| FUN_8005dad8 | PrepareAndLoadOverlay | part_001 | Simplified load when data already set up |
| FUN_80082fac | ProcessOverlayData | part_007 | Decompresses DEFLATE stream (calls FUN_800847d0) |
| FUN_800847d0 | InflateDeflateStream | part_007 | DEFLATE decompression (RFC 1951) |

## Loading Flow

```
FUN_8005d6e0 (main entry)
  → FUN_8005d9f0 (invoke callback)
  → FUN_8005da3c(1) (load overlay index 1)
    → FUN_8005da7c(param_1, config, 0,0,0,0)
      → FUN_8005dad8(param_1)
        → FUN_8007ab74 (copy from CD to buffer)
        → FUN_80082fac(dest, load_gt2_overlay_file)
          → FUN_800847d0 (DEFLATE decompress)
        → FlushCache
        → FUN_8005d9bc (clear buffer)
```

## Key Globals

- **DAT_801c93e0**: Decompressed size
- **DAT_801c93d0**: Load address (CD sector base)
- **DAT_801c93e8**: Base memory address
- **DAT_800a8d5c**: Main overlay buffer
- **DAT_801ef61c**: Overlay offset table (per overlay index)
- **PTR_LAB_80091174**: Overlay configuration array
- **DAT_801c942c**: Overlay init callback

## Usage Contexts

1. **Game startup** (FUN_8005d6e0): Loads main overlay via FUN_8005da3c(1)
2. **Graphics init** (FUN_80010e14 loop): FUN_80082fac with PTR_LAB_8003322a config
3. **Arcade/global** (part_009, part_012): FUN_80082fac with custom loaders
