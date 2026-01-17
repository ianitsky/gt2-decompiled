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
typedef unsigned char   undefined3[3];  // 3-byte type (used in PS1 code)
typedef unsigned int    undefined4;
typedef unsigned long long undefined8;
typedef long long longlong;
typedef unsigned long long ulonglong;
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
typedef func f;  // Alias for compatibility with decompiled code
typedef void (*code)(void);  // Code pointer type used in decompiled code
typedef uint (*code_uint)(void);  // Code pointer type that returns uint

// Function pointer type for callbacks with variable arguments
// Used for function pointers stored in structures that can be called with 1-3 arguments
typedef int (*code_varargs)(int, void*, int);  // Variable argument function pointer type

// Anonymous structure types for Ghidra decompiled code
// These represent structures with bitfield access patterns
typedef struct {
    unsigned char _0_1_ : 1;
    unsigned char _1_1_ : 1;
    unsigned char _2_1_ : 1;
    unsigned char _3_1_ : 1;
    unsigned char _4_1_ : 1;
    unsigned char _5_1_ : 1;
    unsigned char _6_1_ : 1;
    unsigned char _7_1_ : 1;
} bitfield_8_t;

typedef struct {
    unsigned short _0_2_ : 16;
    unsigned short _2_2_ : 16;  // Field starting at offset 2, 2 bytes wide
} bitfield_16_t;

// Structure for 4-byte field access with _3_1_ field (byte at offset 3)
typedef union {
    uint value;
    struct {
        unsigned char _0_1_;
        unsigned char _1_1_;
        unsigned char _2_1_;
        unsigned char _3_1_;  // Byte at offset 3
    } bytes;
} bitfield_32_t;

// Structure for 3-byte field access
typedef struct {
    unsigned char _0_3_[3];
} bitfield_24_t;

// Ghidra decompiler macros for structure field access
// SUB43(ptr, offset): Extract 3 bytes from pointer at offset
// Used to copy 3 bytes to _0_3_ field: memcpy(&struct._0_3_, SUB43(ptr, offset), 3)
#define SUB43(ptr, offset) ((char *)(ptr) + (offset))

// CONCAT13(byte1, bytes3): Concatenate 1 byte with 3 bytes
// bytes3 can be undefined3 array or bitfield_24_t._0_3_
#define CONCAT13(byte1, bytes3) \
    (((uint)(byte1) << 24) | \
     ((uint)((bytes3)[0]) << 16) | \
     ((uint)((bytes3)[1]) << 8) | \
     ((uint)((bytes3)[2])))

// CONCAT22(word1, word2): Concatenate 2 words (16-bit values) into a 32-bit value
#define CONCAT22(word1, word2) \
    (((uint)(word1) << 16) | ((uint)(word2)))

// CONCAT44(word1, word2): Concatenate 2 words (32-bit values) into a 64-bit value
#define CONCAT44(word1, word2) \
    (((ulonglong)(word1) << 32) | ((ulonglong)(word2) & 0xffffffffULL))

#endif /* GT2_TYPES_H */
