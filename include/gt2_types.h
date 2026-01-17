#ifndef GT2_TYPES_H
#define GT2_TYPES_H

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

// Basic type definitions for PS1 compatibility
typedef unsigned char   undefined;
typedef unsigned char   byte;
typedef unsigned int    dword;
typedef unsigned char   uchar;
typedef unsigned long   ulong;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long undefined8;
typedef unsigned short  word;
typedef unsigned short  wchar16;
typedef uchar           u_char;
typedef ulong           u_long;
typedef uint32_t        uint;
typedef unsigned short  ushort;

// Platform-specific size_t compatibility
// On PS1, size_t was typically ulong (32-bit)
// On Linux, we use standard size_t from stddef.h, but keep ulong for compatibility

// Platform-specific size_t compatibility
// On PS1, size_t was typically ulong (32-bit)
// On Linux, we use standard size_t from stddef.h

// Matrix and Vector structures (PS1 graphics types)
typedef struct MATRIX MATRIX, *PMATRIX;
typedef struct VECTOR VECTOR, *PVECTOR;
typedef struct SVECTOR SVECTOR, *PSVECTOR;
typedef struct CVECTOR CVECTOR, *PCVECTOR;
typedef struct DVECTOR DVECTOR, *PDVECTOR;
typedef struct VERTC VERTC, *PVERTC;
typedef struct DECDCTENV DECDCTENV, *PDECDCTENV;

// 3x3 rotation matrix with translation vector
struct MATRIX {
    short m[3][3];
    long t[3];
};

// 3D vector (long precision)
struct VECTOR {
    long vx;
    long vy;
    long vz;
    long pad;
};

// 3D short vector
struct SVECTOR {
    short vx;
    short vy;
    short vz;
    short pad;
};

// Color vector (RGBA)
struct CVECTOR {
    u_char r;
    u_char g;
    u_char b;
    u_char cd;
};

// 2D vector
struct DVECTOR {
    short vx;
    short vy;
};

// Vertex with texture coordinates and color
struct VERTC {
    short vx;
    short vy;
    short vz;
    u_char tu;
    u_char tv;
    struct CVECTOR col;
};

// DCT environment for JPEG/MDEC decoding
struct DECDCTENV {
    u_char iq_y[64];
    u_char iq_c[64];
    short dct[64];
};

// Function pointer type (used in PS1 BIOS)
typedef void (*func)(void);

#endif /* GT2_TYPES_H */
