cmake_minimum_required(VERSION 3.20)
project(GT2Decompiled C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Build options
option(BUILD_TESTS "Build tests" OFF)
option(BUILD_DOCS "Build documentation" OFF)

# Build types
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Compiler flags
set(CMAKE_C_FLAGS_DEBUG "-Wall -Wextra -Wpedantic -g -O0 -DDEBUG")
set(CMAKE_C_FLAGS_RELEASE "-Wall -Wextra -Wpedantic -O2 -DNDEBUG")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "-Wall -Wextra -Wpedantic -O2 -g -DNDEBUG")
set(CMAKE_C_FLAGS_MINSIZEREL "-Wall -Wextra -Wpedantic -Os -DNDEBUG")

# Additional warning flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-error -Wunused-variable -Wunused-function -Wstrict-prototypes -Wmissing-prototypes -D__psyz -Wno-int-conversion -Wno-pointer-sign -Wno-char-subscripts -Wno-sign-compare -Wno-parentheses -Wno-pointer-to-int-cast -Wno-int-to-pointer-cast -Wno-incompatible-pointer-types -Wno-implicit-function-declaration")

# Linker flags to allow undefined symbols (for incomplete decompiled code)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--unresolved-symbols=ignore-all -no-pie")

# Disable PIE for executable (needed for decompiled code with absolute addresses)
set(CMAKE_POSITION_INDEPENDENT_CODE OFF)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src/external/psyz/psyz/include)
# Add subdirectories
add_subdirectory(src)
add_subdirectory(src/external/psyz/psyz)
