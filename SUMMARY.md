# Gran Turismo 2 Decompilation Project Summary

This document provides a comprehensive summary of all documentation files in the GT2 decompilation project, organized by file type and content focus.

## Project Documentation

### README.md
Provides an overview of the Gran Turismo 2 (GT2) decompilation project, including:
- Project purpose: Reverse-engineering GT2 for PlayStation 1 using Ghidra
- Decompilation process and tools used
- Build instructions overview
- Project structure (include/, src/, build/)
- Notes on code quality and PS1-specific stubs
- Disclaimer for educational/research purposes only

### BUILD.md
Detailed build guide for compiling the decompiled GT2 code on Linux:
- Requirements: CMake 3.20+, GCC/Clang with C11, Linux OS
- Build types: Debug, Release, RelWithDebInfo, MinSizeRel
- Compilation flags and warnings
- Troubleshooting common issues (missing variables, function declarations, type mismatches)
- Entry point and development notes
- Project structure details

## Car Physics System Documentation

### car_physics_system.en.md
Comprehensive English documentation of the car physics system in Gran Turismo 2:
- Main loop function coordinating all physics processing
- Sequential processing functions for collisions and integration
- Physics integration functions using Euler method
- Detection and calculation functions for collisions
- Auxiliary functions for fixed-point arithmetic
- Vehicle physics systems organized by execution phases:
  - Phase 1: Main loop and coordination (physics coordination, vertical physics, aerodynamics, traction systems)
  - Phase 2: Collisions and integration (track/vehicle collisions, physics integration)
  - Phase 3: Wheels and surface (transformation matrices, collision matrices, traction/friction)
  - Phase 4: Steering and movement (suspension, steering processing, chassis height, force transmission)
  - Phase 5: Engine and control (engine/transmission, input/control, brake system)
  - Phase 6: Effects and auxiliaries (slipstream system)
- Detailed function documentation with parameters, calculations, and utility
- Execution flowcharts and quick reference tables
- Memory offset tables for vehicle structures, wheel structures, and main vehicle structure

### car_physics_system.br.md
Portuguese version of the car physics system documentation, covering the same comprehensive content as the English version but in Portuguese language.

## Executable Parts Documentation

The following files document functions in the decompiled SCUS-944.88 executable parts, each covering specific systems and modules:

### scus_944_88_part_006.en.md
Documents functions in scus_944.88_part_006.c covering:
- Audio systems (SPU - Sound Processing Unit)
- Graphics systems (GPU - Graphics Processing Unit)
- Geometry systems (GTE - Geometry Transformation Engine)
- Data loading and initialization modules
- Function overviews with parameters, processing details, and cross-references

### scus_944_88_part_007.en.md
Documents functions in scus_944.88_part_007.c covering:
- Rendering systems and GPU operations
- System initialization and setup
- Input control and gamepad handling
- 3D graphics and geometry processing
- GTE (Geometry Transformation Engine) modules
- Function overviews with parameters, processing details, and cross-references

### scus_944_88_part_008.en.md
Documents functions in scus_944.88_part_008.c covering:
- MDEC (Motion DECoder) video decompression
- Memory card management and file operations
- Gamepad control and input processing
- CD-ROM drive control and data reading
- Function overviews with parameters, processing details, and cross-references

### scus_944_88_part_009.en.md
Documents functions in scus_944.88_part_009.c covering:
- System initialization and interrupt handling
- VSync (Vertical Synchronization) processing
- DMA (Direct Memory Access) operations
- Control systems and input management
- String formatting and memory utilities
- Memory management and CD-ROM functions
- Function overviews with parameters, processing details, and cross-references

### scus_944_88_part_010.en.md
Documents functions in scus_944.88_part_010.c covering:
- Arcade mode state management
- Rendering and graphics processing
- Car data handling and management
- User interface and menu systems
- Animation and visual effects
- Resource management and loading
- Text display and localization
- Function overviews with parameters, processing details, and cross-references

## Documentation Structure and Coverage

### Bilingual Support
- English versions (.en.md) provide primary documentation
- Portuguese versions (.br.md) offer alternative language coverage
- Car physics system has both English and Portuguese documentation

### Content Organization
- Each executable part documentation follows consistent structure:
  - Function signatures and file locations
  - Parameter descriptions
  - Processing logic and calculations
  - Cross-references to related functions
  - Memory offsets and data structures where applicable

### Technical Depth
- Car physics documentation provides extensive technical detail including:
  - Mathematical calculations and algorithms
  - Execution flowcharts and diagrams
  - Memory layout and offset tables
  - System integration and dependencies
  - Performance considerations and optimizations

### Coverage Areas
- **Project Management**: Setup, building, and development
- **Physics Simulation**: Complete vehicle dynamics system
- **Hardware Interfaces**: PS1-specific systems (GPU, SPU, GTE, MDEC, etc.)
- **Game Systems**: Arcade mode, UI, resource management
- **Low-level Operations**: Memory management, DMA, interrupts

This summary provides a high-level overview of all documentation, highlighting the main topics, key findings, and structural organization of each document while maintaining focus on their primary coverage areas.</content>
<parameter name="filePath">/home/ianitsky/Personal Documents/Projects/GT2Remake/GT2/_decompiled/SUMMARY.md