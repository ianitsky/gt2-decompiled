# Collect all decompiled source files
file(GLOB DECOMPILED_SOURCES "decompiled/scus_944.88_part_*.c")
list(APPEND DECOMPILED_SOURCES "decompiled/gt2_global_vars.c")

# Platform-specific sources
set(PLATFORM_SOURCES
    platform/linux_main.c
    platform/ps1_stubs.c
    platform/gte_stubs.c
)

# Create library for decompiled code
add_library(gt2_decompiled STATIC ${DECOMPILED_SOURCES})

target_include_directories(gt2_decompiled
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/decompiled
)

target_compile_features(gt2_decompiled PUBLIC c_std_11)

# Create library for platform code
add_library(gt2_platform STATIC ${PLATFORM_SOURCES})

target_include_directories(gt2_platform
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/platform
)

target_compile_features(gt2_platform PUBLIC c_std_11)

# Link platform library to decompiled library (for stubs)
target_link_libraries(gt2_decompiled PRIVATE gt2_platform)

# Create executable
add_executable(gt2_executable ${CMAKE_CURRENT_SOURCE_DIR}/platform/linux_main.c)

target_include_directories(gt2_executable
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/platform
)

target_compile_features(gt2_executable PUBLIC c_std_11)

# Link libraries
target_link_libraries(gt2_executable
    PRIVATE
        gt2_decompiled
        gt2_platform
        psyz
)

# Set output name
set_target_properties(gt2_executable PROPERTIES OUTPUT_NAME "gt2")
