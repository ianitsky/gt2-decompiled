# GT2 Decompiled - Build Guide

## Overview

This project contains decompiled source code from Gran Turismo 2 (GT2) for PlayStation 1, adapted to compile on Linux.

## Requirements

- CMake 3.20 or higher
- GCC or Clang compiler with C11 support
- Make or Ninja build system
- Linux operating system

## Building

### Basic Build

```bash
mkdir -p build
cd build
cmake ..
make
```

The executable will be created as `build/src/gt2_executable` (or `gt2`).

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
