# Gran Turismo 2 (GT2) - PlayStation 1 Decompilation Project

This repository contains the decompiled source code of **Gran Turismo 2 (Arcade mode only)** for the PlayStation 1, reverse-engineered using [Ghidra](https://ghidra-sre.org/).

## Overview

Gran Turismo 2  is a racing game developed by Polyphony Digital and published by Sony Computer Entertainment for the PlayStation 1. This project aims to decompile and refactor the original game code to better understand its internal workings for studies.

## Decompilation Process

The original PlayStation 1 executable (`scus_944.88`) was analyzed and decompiled using Ghidra, a software reverse engineering framework developed by the National Security Agency (NSA).

## Building

This project can be compiled for Linux using CMake. See [BUILD.md](BUILD.md) for detailed build instructions.

### Quick Start

```bash
mkdir -p build
cd build
cmake ..
make
```

The executable will be created as `build/gt2` (or `build/src/gt2` depending on your CMake setup).

### Requirements

- CMake 3.20+
- GCC or Clang with C11 support
- Make or Ninja

## Usage (disk image / ISO)

The game uses PSY-Z for CD emulation. You can run it with a disk image (CUE or ISO) instead of a physical CD.

### Option 1: Image next to the executable

Place one of these files in the **same directory** as the `gt2` binary, then run without arguments:

- `scus_944.88.cue` (and the `.bin` file it references), or `scus_944.88.iso`
- `gt2.cue` / `gt2.iso`
- `disk.cue` / `disk.iso`

```bash
cd build
cp /path/to/your/scus_944.88.cue .
cp /path/to/your/scus_944.88.bin .   # if using CUE+BIN
./gt2
```

### Option 2: Command line

Pass the image path explicitly:

```bash
./gt2 -iso /path/to/scus_944.88.iso
./gt2 -cue /path/to/scus_944.88.cue
./gt2 -disk /path/to/disk.cue
./gt2 /path/to/scus_944.88.cue
```

### Formats

- **CUE + BIN**: Use a `.cue` file that references your data file (e.g. `.bin`). PSY-Z expects CUE format.
- **Raw ISO**: A single `.iso` file is supported; a temporary CUE (single track MODE1/2352) is created automatically. For 2048-byte sector ISOs, use a CUE file that describes the layout instead.

## Project Structure

- `include/` - Public headers (types, global variables, stubs)
- `src/decompiled/` - Decompiled source files (25 parts)
- `src/platform/` - Platform-specific code (Linux entry point, PS1 stubs)
- `build/` - Build directory (gitignored)

## Debugging

The project is configured for debugging with VS Code and GDB:

### VS Code Setup

1. **Open in VS Code:**
   ```bash
   code .
   ```

2. **Debug with Build:**
   - Press F5 or go to Run → Start Debugging
   - Select "Debug GT2 (Build + Debug)" - this will build and debug automatically

3. **Debug Existing Build:**
   - Select "Debug GT2 (Debug Only)" - this debugs without rebuilding

### Manual Debugging

1. **Build in Debug mode:**
   ```bash
   cd build
   cmake .. -DCMAKE_BUILD_TYPE=Debug
   make -j$(nproc)
   ```

2. **Debug with GDB directly:**
   ```bash
   gdb ./build/src/gt2
   (gdb) run
   ```

### VS Code Tasks

Available tasks (Ctrl+Shift+P → "Tasks: Run Task"):
- `build-all`: Configure CMake and build (default build task)
- `configure`: Configure CMake for Debug build
- `build`: Build without configuring
- `clean`: Clean build files

**Note:** The decompiled code may contain segmentation faults or other issues. Use debugging to identify and fix problems in the reverse-engineered code.

## Notes

- The code is decompiled and may contain bugs or incorrect variable names
- PlayStation 1 specific functions are stubbed for Linux compatibility
- Global variables are declared in headers and defined in `gt2_global_vars.c`
- See BUILD.md for detailed build instructions and troubleshooting

## Disclaimer

This project is for educational and research purposes only. The decompiled code is provided as-is for the purpose of understanding game mechanics and reverse engineering techniques. This project is not affiliated with Sony Computer Entertainment or Polyphony Digital.
