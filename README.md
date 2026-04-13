# Gran Turismo 2 (GT2) - PlayStation 1 Decompilation Project

This repository contains the decompiled source code of **Gran Turismo 2 (Arcade mode only)** for the PlayStation 1, reverse-engineered using [Ghidra](https://ghidra-sre.org/).

## Overview

Gran Turismo 2  is a racing game developed by Polyphony Digital and published by Sony Computer Entertainment for the PlayStation 1. This project aims to decompile and refactor the original game code to better understand its internal workings for studies.

## Decompilation Process

The original PlayStation 1 executable (`scus_944.88`) was analyzed and decompiled using Ghidra, a software reverse engineering framework developed by the National Security Agency (NSA).

## Building

This project can be compiled for Linux (or WSL on Windows) using CMake. See [BUILD.md](BUILD.md) for detailed build instructions.

### Requirements

- CMake 3.20+
- GCC / G++ with C11 support and **32-bit multilib** (`gcc-multilib`, `g++-multilib`)
- Make or Ninja
- SDL3 dependencies (X11, ALSA, OpenGL ES) — **32-bit versions required** (`:i386`)

### Building on Linux / WSL (Ubuntu 24.04)

#### 1. Install dependencies

```bash
# Add i386 (32-bit) architecture support
sudo dpkg --add-architecture i386
sudo apt-get update

# Build tools
sudo apt-get install -y gcc g++ gcc-multilib g++-multilib cmake make

# SDL3 / X11 / audio / graphics — 32-bit versions
sudo apt-get install -y \
  libx11-dev:i386 libxext-dev:i386 libxrandr-dev:i386 \
  libxcursor-dev:i386 libxfixes-dev:i386 libxi-dev:i386 \
  libxss-dev:i386 libxkbcommon-dev:i386 \
  libasound2-dev:i386 \
  libwayland-dev:i386 \
  libgles2-mesa-dev:i386
```

> **Why i386?** The project compiles in 32-bit mode (`-m32`) to match the PS1's ILP32
> architecture, so all linked libraries must also be 32-bit.

#### 2. Configure and build

> **Important (WSL users):** Always create the build directory inside the WSL
> filesystem (e.g. `~/gt2-build`), **not** under `/mnt/c/...`. CMake's
> `try_compile` steps fail on Windows-mounted paths.

```bash
# Create build directory in the native Linux filesystem
mkdir -p ~/gt2-build
cd ~/gt2-build

# Configure — pass 32-bit OpenGL paths explicitly so SDL3 enables GLX support
cmake \
  -DOPENGL_opengl_LIBRARY=/usr/lib/i386-linux-gnu/libOpenGL.so \
  -DOPENGL_glx_LIBRARY=/usr/lib/i386-linux-gnu/libGLX.so \
  -DOPENGL_INCLUDE_DIR=/usr/include \
  /path/to/gt2-decompiled
  # e.g.: /mnt/c/Users/<you>/Documents/Projects/gt2-decompiled

# Compile (use all available CPU cores)
make -j$(nproc)
```

> **Why explicit OpenGL paths?** CMake's `find_package(OpenGL)` defaults to 64-bit
> library paths. Without these overrides SDL3 silently disables desktop OpenGL (GLX)
> and falls back to EGL-only, which fails at runtime on WSL.

The executable is generated at `~/gt2-build/src/gt2`.

#### 3. Build types

```bash
cmake -DCMAKE_BUILD_TYPE=Debug   ..   # debug symbols, no optimisation (default)
cmake -DCMAKE_BUILD_TYPE=Release ..   # -O2, no debug symbols
```

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
