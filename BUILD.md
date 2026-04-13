# GT2 Decompiled - Build Guide

## Overview

This project contains decompiled source code from Gran Turismo 2 (GT2) for PlayStation 1, adapted to compile on Linux.

## Requirements

- CMake 3.20 or higher
- GCC / G++ with C11 support and **32-bit multilib** (`gcc-multilib`, `g++-multilib`)
- Make or Ninja build system
- Linux operating system (or WSL 2 on Windows)
- SDL3 build dependencies — **32-bit (`:i386`) versions required**

## Installing Dependencies (Ubuntu / Debian)

The project compiles in 32-bit mode (`-m32`) to match the PS1's ILP32 architecture.
All development libraries must therefore be the 32-bit variants.

```bash
# 1. Enable the i386 (32-bit) architecture
sudo dpkg --add-architecture i386
sudo apt-get update

# 2. Compiler + build tools
sudo apt-get install -y gcc g++ gcc-multilib g++-multilib cmake make

# 3. SDL3 dependencies — 32-bit versions
sudo apt-get install -y \
  libx11-dev:i386 libxext-dev:i386 libxrandr-dev:i386 \
  libxcursor-dev:i386 libxfixes-dev:i386 libxi-dev:i386 \
  libxss-dev:i386 libxkbcommon-dev:i386 \
  libasound2-dev:i386 \
  libwayland-dev:i386 \
  libgles2-mesa-dev:i386
```

## Building

### WSL (Windows Subsystem for Linux) — Important Note

When building from WSL, **always create the build directory inside the WSL
filesystem** (e.g. `~/gt2-build`). Using a Windows-mounted path (`/mnt/c/...`)
causes CMake's `try_compile` steps to fail silently.

```bash
mkdir -p ~/gt2-build
cd ~/gt2-build

# Pass the 32-bit OpenGL paths explicitly so SDL3 enables GLX (desktop OpenGL) support
cmake \
  -DOPENGL_opengl_LIBRARY=/usr/lib/i386-linux-gnu/libOpenGL.so \
  -DOPENGL_glx_LIBRARY=/usr/lib/i386-linux-gnu/libGLX.so \
  -DOPENGL_INCLUDE_DIR=/usr/include \
  /mnt/c/Users/<you>/Documents/Projects/gt2-decompiled

make -j$(nproc)
```

> **Why explicit OpenGL paths?** CMake's `find_package(OpenGL)` defaults to 64-bit
> library paths. Without the overrides above, SDL3 silently disables `SDL_OPENGL`
> (desktop OpenGL / GLX) and falls back to EGL-only, which fails at runtime on WSL.

### Basic Build (native Linux)

```bash
mkdir -p build
cd build
cmake \
  -DOPENGL_opengl_LIBRARY=/usr/lib/i386-linux-gnu/libOpenGL.so \
  -DOPENGL_glx_LIBRARY=/usr/lib/i386-linux-gnu/libGLX.so \
  -DOPENGL_INCLUDE_DIR=/usr/include \
  ..
make -j$(nproc)
```

The executable will be created as `build/src/gt2`.

### Running with a disk image (ISO / CUE)

CD emulation is provided by PSY-Z. You can run the game with a disk image instead of a physical CD.

**1. Image next to the executable**

Place one of these in the same directory as the `gt2` binary:

- `scus_944.88.cue` (and the referenced `.bin`), or `scus_944.88.iso`
- `gt2.cue` / `gt2.iso`
- `disk.cue` / `disk.iso`

Then run:

```bash
./gt2
```

**2. Command line**

```bash
./gt2 -iso /path/to/scus_944.88.iso
./gt2 -cue /path/to/scus_944.88.cue
./gt2 -disk /path/to/disk.cue
./gt2 /path/to/scus_944.88.cue
```

**Formats:** CUE+BIN (use a `.cue` that references your data file) or raw `.iso` (a temporary CUE is generated). For 2048-byte sector ISOs, use a CUE file.

### Build Types

You can specify different build types:

```bash
# Debug build (default)
cmake -DCMAKE_BUILD_TYPE=Debug ..

# Release build
cmake -DCMAKE_BUILD_TYPE=Release ..

# RelWithDebInfo build
cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ..

# MinSizeRel build
cmake -DCMAKE_BUILD_TYPE=MinSizeRel ..
```

### Clean Build

```bash
rm -rf build
mkdir build
cd build
cmake ..
make
```

## Project Structure

```
GT2/_decompiled/
├── CMakeLists.txt          # Main CMake configuration
├── include/                 # Public headers
│   ├── gt2_types.h         # Common type definitions
│   ├── gt2_global_vars_clean.h  # Global variable declarations
│   └── ps1_stubs.h         # PlayStation 1 function stubs
├── src/
│   ├── decompiled/         # Decompiled source files (25 parts)
│   │   ├── scus_944.88_part_001.c through part_025.c
│   │   └── gt2_global_vars.c  # Global variable definitions
│   ├── platform/          # Platform-specific code
│   │   ├── linux_main.c   # Linux entry point
│   │   └── ps1_stubs.c    # PS1 function implementations (stubs)
│   └── CMakeLists.txt      # Source build configuration
└── build/                  # Build directory (gitignored)
```

## Compilation Flags

The project uses the following compilation flags:

### Debug
- `-Wall -Wextra -Wpedantic` - Enable all warnings
- `-g -O0` - Debug symbols, no optimization
- `-DDEBUG` - Debug macro

### Release
- `-Wall -Wextra -Wpedantic` - Enable all warnings
- `-O2` - Optimization level 2
- `-DNDEBUG` - No debug assertions

### Additional Warnings
- `-Wunused-variable` - Warn about unused variables
- `-Wunused-function` - Warn about unused functions
- `-Wstrict-prototypes` - Require strict function prototypes
- `-Wmissing-prototypes` - Warn about missing prototypes

## Troubleshooting

### Common Issues

1. **Missing global variables**: If you see errors about undeclared `DAT_*` variables, add them to `include/gt2_global_vars_clean.h` and `src/decompiled/gt2_global_vars.c`.

2. **Missing function declarations**: If functions are not found, check if they're declared in the appropriate header file or if stubs need to be created in `src/platform/ps1_stubs.c`.

3. **Type mismatches**: The decompiled code may have type inconsistencies. Check `include/gt2_types.h` for type definitions.

4. **PS1-specific functions**: Many PlayStation 1 specific functions are stubbed in `src/platform/ps1_stubs.c`. These return default values and log calls when `ps1_stub_debug` is enabled.

### Enabling Stub Debugging

To see PS1 stub function calls, set the debug flag:

```c
extern int ps1_stub_debug;
ps1_stub_debug = 1;
```

## Entry Point

The entry point is `main()` in `src/platform/linux_main.c`, which calls the original `start()` function from the decompiled code.

## Notes

- This is decompiled code, so some variable names and function signatures may be incorrect
- Many PlayStation 1 specific functions are stubbed and return default values
- Global variables are declared in headers and defined in `gt2_global_vars.c`
- The code may have bugs from the decompilation process that need to be fixed incrementally

## Development

When adding new code:
- Follow the existing code style
- Use `.clang-format` for formatting
- Add declarations to appropriate headers
- Update this documentation as needed
