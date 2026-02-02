/*
 * GTE (Geometry Transform Engine) software implementation.
 * Ported from Noah (https://github.com/yaz0r/Noah) NoahLib/kernel/gte.cpp to C.
 * Uses gt2_types.h (SVECTOR, VECTOR, MATRIX). See gte_impl.h for API.
 */

#include "gte_impl.h"
#include "gt2_types.h"
#include <stdint.h>
#include <string.h>

/* 32-bit register as union for byte/half/word access (little-endian) */
typedef union {
    uint32_t d;
    int32_t sd;
    struct {
        uint16_t l, h;
    } w;
    struct {
        int16_t l, h;
    } sw;
    struct {
        uint8_t b0, b1, b2, b3;
    } b;
} GTE_PAIR;

static GTE_PAIR CP2D[32];
static GTE_PAIR CP2C[32];

#define GTE_SF(op) (((op) >> 19) & 1)
#define GTE_MX(op) (((op) >> 17) & 3)
#define GTE_V(op) (((op) >> 15) & 3)
#define GTE_CV(op) (((op) >> 13) & 3)
#define GTE_LM(op) (((op) >> 10) & 1)
#define GTE_FUNCT(op) ((op) & 63)

/* Data regs (CP2D) - access via macros */
#define VX0   (CP2D[0].sw.l)
#define VY0   (CP2D[0].sw.h)
#define VZ0   (CP2D[1].sw.l)
#define VX1   (CP2D[2].w.l)
#define VY1   (CP2D[2].w.h)
#define VZ1   (CP2D[3].w.l)
#define VX2   (CP2D[4].w.l)
#define VY2   (CP2D[4].w.h)
#define VZ2   (CP2D[5].w.l)
#define OTZ   (CP2D[7].w.l)
#define IR0   (CP2D[8].sw.l)
#define IR1   (CP2D[9].sw.l)
#define IR2   (CP2D[10].sw.l)
#define IR3   (CP2D[11].sw.l)
#define SXY0  (CP2D[12].d)
#define SX0   (CP2D[12].sw.l)
#define SY0   (CP2D[12].sw.h)
#define SXY1  (CP2D[13].d)
#define SX1   (CP2D[13].sw.l)
#define SY1   (CP2D[13].sw.h)
#define SXY2  (CP2D[14].d)
#define SX2   (CP2D[14].sw.l)
#define SY2   (CP2D[14].sw.h)
#define SZ0   (CP2D[16].w.l)
#define SZ1   (CP2D[17].w.l)
#define SZ2   (CP2D[18].w.l)
#define SZ3   (CP2D[19].w.l)
#define MAC0  (CP2D[24].sd)
#define MAC1  (CP2D[25].sd)
#define MAC2  (CP2D[26].sd)
#define MAC3  (CP2D[27].sd)
#define LZCR  (CP2D[31].d)

/* Control regs (CP2C) */
#define R11   (CP2C[0].sw.l)
#define R12   (CP2C[0].sw.h)
#define R13   (CP2C[1].sw.l)
#define R21   (CP2C[1].sw.h)
#define R22   (CP2C[2].sw.l)
#define R23   (CP2C[2].sw.h)
#define R31   (CP2C[3].sw.l)
#define R32   (CP2C[3].sw.h)
#define R33   (CP2C[4].sw.l)
#define TRX   (CP2C[5].sd)
#define TRY   (CP2C[6].sd)
#define TRZ   (CP2C[7].sd)
#define OFX   (CP2C[24].sd)
#define OFY   (CP2C[25].sd)
#define H     (CP2C[26].sw.l)
#define DQA   (CP2C[27].sw.l)
#define DQB   (CP2C[28].sd)
#define ZSF3  (CP2C[29].sw.l)
#define ZSF4  (CP2C[30].sw.l)
#define FLAG  (CP2C[31].d)

/* RGB/CODE in CP2D[6] */
#define R     (CP2D[6].b.b0)
#define G     (CP2D[6].b.b1)
#define B     (CP2D[6].b.b2)
#define CODE  (CP2D[6].b.b3)
#define RGB0  (CP2D[20].d)
#define R0    (CP2D[20].b.b0)
#define G0    (CP2D[20].b.b1)
#define B0    (CP2D[20].b.b2)
#define CD0   (CP2D[20].b.b3)
#define RGB1  (CP2D[21].d)
#define R1    (CP2D[21].b.b0)
#define G1    (CP2D[21].b.b1)
#define B1    (CP2D[21].b.b2)
#define CD1   (CP2D[21].b.b3)
#define RGB2  (CP2D[22].d)
#define R2    (CP2D[22].b.b0)
#define G2    (CP2D[22].b.b1)
#define B2    (CP2D[22].b.b2)
#define CD2   (CP2D[22].b.b3)

#define VX(n) ((n) < 3 ? (int16_t)CP2D[(n) << 1].sw.l : IR1)
#define VY(n) ((n) < 3 ? (int16_t)CP2D[(n) << 1].sw.h : IR2)
#define VZ(n) ((n) < 3 ? (int16_t)CP2D[((n) << 1) + 1].sw.l : IR3)

/* Matrix row access: mx 0=R, 1=L1, 2=L2 */
#define MX11(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8].sw.l : (int32_t)(-R << 4))
#define MX12(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8].sw.h : (int32_t)(R << 4))
#define MX13(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 1].sw.l : (int32_t)IR0)
#define MX21(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 1].sw.h : (int32_t)R13)
#define MX22(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 2].sw.l : (int32_t)R13)
#define MX23(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 2].sw.h : (int32_t)R13)
#define MX31(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 3].sw.l : (int32_t)R22)
#define MX32(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 3].sw.h : (int32_t)R22)
#define MX33(n) ((n) < 3 ? (int16_t)CP2C[(n) * 8 + 4].sw.l : (int32_t)R22)
#define CV1(n) ((n) < 3 ? (int32_t)CP2C[(n) * 8 + 5].sd : 0)
#define CV2(n) ((n) < 3 ? (int32_t)CP2C[(n) * 8 + 6].sd : 0)
#define CV3(n) ((n) < 3 ? (int32_t)CP2C[(n) * 8 + 7].sd : 0)

static int s_sf;
static int64_t s_mac0;
static int64_t s_mac3;

#define S64(val) (val##LL)

static int normalizeGTERegIndex(int reg)
{
    if (reg >= 32) {
        reg >>= 8;
        reg /= 0x8;
    }
    return reg;
}

void gte_setCopControlWord(int cop, int reg, uint32_t value)
{
    (void)cop;
    reg = normalizeGTERegIndex(reg);
    switch (reg) {
    case 4:
    case 12:
    case 20:
    case 26:
    case 27:
    case 29:
    case 30:
        value = (uint32_t)(int32_t)(int16_t)value;
        break;
    case 31:
        value = value & 0x7ffff000u;
        if ((value & 0x7f87e000u) != 0)
            value |= 0x80000000u;
        break;
    default:
        break;
    }
    CP2C[reg].d = value;
}

static uint32_t gte_leadingzerocount(uint32_t lzcs)
{
    uint32_t lzcr = 0;
    if ((lzcs & 0x80000000u) == 0)
        lzcs = ~lzcs;
    while ((lzcs & 0x80000000u) != 0) {
        lzcr++;
        lzcs <<= 1;
    }
    return lzcr;
}

void gte_setCopReg(int cop, int reg, uint32_t value)
{
    (void)cop;
    reg = normalizeGTERegIndex(reg);
    switch (reg) {
    case 15:
        SXY0 = SXY1;
        SXY1 = SXY2;
        SXY2 = value;
        break;
    case 28:
        IR1 = (int16_t)((value & 0x1f) << 7);
        IR2 = (int16_t)((value & 0x3e0) << 2);
        IR3 = (int16_t)((value & 0x7c00) >> 3);
        break;
    case 30:
        CP2D[31].d = gte_leadingzerocount(value);
        return;
    case 31:
        return;
    default:
        break;
    }
    CP2D[reg].d = value;
}

void gte_setCopReg64(int cop, int reg, uint32_t lo, uint32_t hi)
{
    (void)cop;
    (void)reg;
    (void)lo;
    (void)hi;
    /* Pack two 16-bit into one reg; used for XY. */
    reg = normalizeGTERegIndex(reg);
    CP2D[reg].sw.l = (int16_t)(lo & 0xffffu);
    CP2D[reg].sw.h = (int16_t)(hi & 0xffffu);
}

int32_t gte_getCopControlWord(int cop, int reg)
{
    (void)cop;
    return CP2C[normalizeGTERegIndex(reg)].sd;
}

static int32_t LIM(int32_t value, int32_t max, int32_t min, uint32_t flag)
{
    if (value > max) {
        FLAG |= flag;
        return max;
    }
    if (value < min) {
        FLAG |= flag;
        return min;
    }
    return value;
}

uint32_t gte_getCopReg(int cop, int reg)
{
    (void)cop;
    reg = normalizeGTERegIndex(reg);
    switch (reg) {
    case 1:
    case 3:
    case 5:
    case 8:
    case 9:
    case 10:
    case 11:
        CP2D[reg].d = (uint32_t)(int32_t)CP2D[reg].sw.l;
        break;
    case 7:
    case 16:
    case 17:
    case 18:
    case 19:
        CP2D[reg].d = (uint32_t)CP2D[reg].w.l;
        break;
    case 15:
        CP2D[reg].d = SXY2;
        break;
    case 28:
    case 29:
        CP2D[reg].d = (uint32_t)(LIM(IR1 >> 7, 0x1f, 0, 0) |
                                 (LIM(IR2 >> 7, 0x1f, 0, 0) << 5) |
                                 (LIM(IR3 >> 7, 0x1f, 0, 0) << 10));
        break;
    default:
        break;
    }
    return (uint32_t)CP2D[reg].sd;
}

static int64_t gte_shift(int64_t a, int sf)
{
    if (sf > 0)
        return a >> 12;
    if (sf < 0)
        return a << 12;
    return a;
}

static int32_t BOUNDS(int64_t value, int max_flag, int min_flag)
{
    if (value > S64(0x7ffffffffff))
        FLAG |= (uint32_t)max_flag;
    if (value < S64(-0x80000000000))
        FLAG |= (uint32_t)min_flag;
    return (int32_t)gte_shift(value, s_sf);
}

static const uint8_t gte_div_table[] = {
    0xff, 0xfd, 0xfb, 0xf9, 0xf7, 0xf5, 0xf3, 0xf1, 0xef, 0xee, 0xec, 0xea,
    0xe8, 0xe6, 0xe4, 0xe3, 0xe1, 0xdf, 0xdd, 0xdc, 0xda, 0xd8, 0xd6, 0xd5,
    0xd3, 0xd1, 0xd0, 0xce, 0xcd, 0xcb, 0xc9, 0xc8, 0xc6, 0xc5, 0xc3, 0xc1,
    0xc0, 0xbe, 0xbd, 0xbb, 0xba, 0xb8, 0xb7, 0xb5, 0xb4, 0xb2, 0xb1, 0xb0,
    0xae, 0xad, 0xab, 0xaa, 0xa9, 0xa7, 0xa6, 0xa4, 0xa3, 0xa2, 0xa0, 0x9f,
    0x9e, 0x9c, 0x9b, 0x9a, 0x99, 0x97, 0x96, 0x95, 0x94, 0x92, 0x91, 0x90,
    0x8f, 0x8d, 0x8c, 0x8b, 0x8a, 0x89, 0x87, 0x86, 0x85, 0x84, 0x83, 0x82,
    0x81, 0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x7a, 0x79, 0x78, 0x77, 0x75, 0x74,
    0x73, 0x72, 0x71, 0x70, 0x6f, 0x6e, 0x6d, 0x6c, 0x6b, 0x6a, 0x69, 0x68,
    0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60, 0x5f, 0x5e, 0x5d, 0x5d,
    0x5c, 0x5b, 0x5a, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x53, 0x52,
    0x51, 0x50, 0x4f, 0x4e, 0x4d, 0x4d, 0x4c, 0x4b, 0x4a, 0x49, 0x48, 0x48,
    0x47, 0x46, 0x45, 0x44, 0x43, 0x43, 0x42, 0x41, 0x40, 0x3f, 0x3f, 0x3e,
    0x3d, 0x3c, 0x3c, 0x3b, 0x3a, 0x39, 0x39, 0x38, 0x37, 0x36, 0x36, 0x35,
    0x34, 0x33, 0x33, 0x32, 0x31, 0x31, 0x30, 0x2f, 0x2e, 0x2e, 0x2d, 0x2c,
    0x2c, 0x2b, 0x2a, 0x2a, 0x29, 0x28, 0x28, 0x27, 0x26, 0x26, 0x25, 0x24,
    0x24, 0x23, 0x22, 0x22, 0x21, 0x20, 0x20, 0x1f, 0x1e, 0x1e, 0x1d, 0x1d,
    0x1c, 0x1b, 0x1b, 0x1a, 0x19, 0x19, 0x18, 0x18, 0x17, 0x16, 0x16, 0x15,
    0x15, 0x14, 0x14, 0x13, 0x12, 0x12, 0x11, 0x11, 0x10, 0x0f, 0x0f, 0x0e,
    0x0e, 0x0d, 0x0d, 0x0c, 0x0c, 0x0b, 0x0a, 0x0a, 0x09, 0x09, 0x08, 0x08,
    0x07, 0x07, 0x06, 0x06, 0x05, 0x05, 0x04, 0x04, 0x03, 0x03, 0x02, 0x02,
    0x01, 0x01, 0x00, 0x00, 0x00
};

static uint32_t gte_divide(uint16_t numerator, uint16_t denominator)
{
    if (numerator >= (uint32_t)(denominator * 2)) {
        int shift = (int)gte_leadingzerocount(denominator) - 16;
        int r1 = (denominator << shift) & 0x7fff;
        int r2 = (int)gte_div_table[((r1 + 0x40) >> 7)] + 0x101;
        int r3 = ((0x80 - (r2 * (r1 + 0x8000))) >> 8) & 0x1ffff;
        uint32_t reciprocal = (uint32_t)(((r2 * r3) + 0x80) >> 8);
        return (uint32_t)((((uint64_t)reciprocal * ((uint64_t)numerator << shift)) + 0x8000) >> 16);
    }
    return 0xffffffffu;
}

static int32_t A1(int64_t a)
{
    return BOUNDS(a, (1 << 31) | (1 << 30), (1 << 31) | (1 << 27));
}
static int32_t A2(int64_t a)
{
    return BOUNDS(a, (1 << 31) | (1 << 29), (1 << 31) | (1 << 26));
}
static int32_t A3(int64_t a)
{
    s_mac3 = a;
    return BOUNDS(a, (1 << 31) | (1 << 28), (1 << 31) | (1 << 25));
}

static int32_t Lm_B1(int32_t a, int lm)
{
    return LIM(a, 0x7fff, -0x8000 * !lm, (1u << 31) | (1u << 24));
}
static int32_t Lm_B2(int32_t a, int lm)
{
    return LIM(a, 0x7fff, -0x8000 * !lm, (1u << 31) | (1u << 23));
}
static int32_t Lm_B3(int32_t a, int lm)
{
    return LIM(a, 0x7fff, -0x8000 * !lm, (1u << 22));
}
static int32_t Lm_B3_sf(int64_t value, int sf, int lm)
{
    int32_t value_sf = (int32_t)gte_shift(value, sf);
    int32_t value_12 = (int32_t)gte_shift(value, 1);
    int max = 0x7fff;
    int min = 0;
    if (lm == 0)
        min = -0x8000;
    if (value_12 < -0x8000 || value_12 > 0x7fff)
        FLAG |= (1u << 22);
    if (value_sf > max)
        return max;
    if (value_sf < min)
        return min;
    return value_sf;
}

static int32_t Lm_C1(int32_t a) { return LIM(a, 0x00ff, 0x0000, (1u << 21)); }
static int32_t Lm_C2(int32_t a) { return LIM(a, 0x00ff, 0x0000, (1u << 20)); }
static int32_t Lm_C3(int32_t a) { return LIM(a, 0x00ff, 0x0000, (1u << 19)); }
static int32_t Lm_D(int64_t a, int sf)
{
    return LIM((int32_t)gte_shift(a, sf), 0xffff, 0x0000, (1u << 31) | (1u << 18));
}
static uint32_t Lm_E(uint32_t result)
{
    if (result == 0xffffffffu) {
        FLAG |= (1u << 31) | (1u << 17);
        return 0x1ffffu;
    }
    if (result > 0x1ffffu)
        return 0x1ffffu;
    return result;
}
static int64_t F(int64_t a)
{
    s_mac0 = a;
    if (a > S64(0x7fffffff))
        FLAG |= (1u << 31) | (1u << 16);
    if (a < S64(-0x80000000))
        FLAG |= (1u << 31) | (1u << 15);
    return a;
}
static int32_t Lm_G1(int64_t a)
{
    if (a > 0x3ff) {
        FLAG |= (1u << 31) | (1u << 14);
        return 0x3ff;
    }
    if (a < -0x400) {
        FLAG |= (1u << 31) | (1u << 14);
        return -0x400;
    }
    return (int32_t)a;
}
static int32_t Lm_G2(int64_t a)
{
    if (a > 0x3ff) {
        FLAG |= (1u << 31) | (1u << 13);
        return 0x3ff;
    }
    if (a < -0x400) {
        FLAG |= (1u << 31) | (1u << 13);
        return -0x400;
    }
    return (int32_t)a;
}
static int32_t Lm_H(int64_t value, int sf)
{
    int64_t value_sf = gte_shift(value, sf);
    int32_t value_12 = (int32_t)gte_shift(value, 1);
    if (value_sf < 0 || value_sf > 0x1000)
        FLAG |= (1u << 12);
    if (value_12 > 0x1000)
        return 0x1000;
    if (value_12 < 0)
        return 0;
    return value_12;
}

static void RTPS_impl(uint32_t function)
{
    int lm = GTE_LM(function);
    int32_t h_over_sz3;
    MAC1 = A1((int64_t)((int64_t)TRX << 12) + (R11 * VX0) + (R12 * VY0) + (R13 * VZ0));
    MAC2 = A2((int64_t)((int64_t)TRY << 12) + (R21 * VX0) + (R22 * VY0) + (R23 * VZ0));
    MAC3 = A3((int64_t)((int64_t)TRZ << 12) + (R31 * VX0) + (R32 * VY0) + (R33 * VZ0));
    IR1 = (int16_t)Lm_B1(MAC1, lm);
    IR2 = (int16_t)Lm_B2(MAC2, lm);
    IR3 = (int16_t)Lm_B3_sf(s_mac3, s_sf, lm);
    SZ0 = SZ1;
    SZ1 = SZ2;
    SZ2 = SZ3;
    SZ3 = (uint16_t)Lm_D(s_mac3, 1);
    h_over_sz3 = (int32_t)Lm_E(gte_divide((uint16_t)H, SZ3));
    SXY0 = SXY1;
    SXY1 = SXY2;
    SX2 = (int16_t)Lm_G1(F((int64_t)OFX + ((int64_t)IR1 * h_over_sz3)) >> 16);
    SY2 = (int16_t)Lm_G2(F((int64_t)OFY + ((int64_t)IR2 * h_over_sz3)) >> 16);
    MAC0 = F((int64_t)DQB + ((int64_t)DQA * h_over_sz3));
    IR0 = (int16_t)Lm_H(s_mac0, 1);
}

static void RTPT_impl(uint32_t function)
{
    int lm = GTE_LM(function);
    int v;
    int32_t h_over_sz3;
    for (v = 0; v < 3; v++) {
        MAC1 = A1((int64_t)((int64_t)TRX << 12) + (R11 * VX(v)) + (R12 * VY(v)) + (R13 * VZ(v)));
        MAC2 = A2((int64_t)((int64_t)TRY << 12) + (R21 * VX(v)) + (R22 * VY(v)) + (R23 * VZ(v)));
        MAC3 = A3((int64_t)((int64_t)TRZ << 12) + (R31 * VX(v)) + (R32 * VY(v)) + (R33 * VZ(v)));
        IR1 = (int16_t)Lm_B1(MAC1, lm);
        IR2 = (int16_t)Lm_B2(MAC2, lm);
        IR3 = (int16_t)Lm_B3_sf(s_mac3, s_sf, lm);
        SZ0 = SZ1;
        SZ1 = SZ2;
        SZ2 = SZ3;
        SZ3 = (uint16_t)Lm_D(s_mac3, 1);
        h_over_sz3 = (int32_t)Lm_E(gte_divide((uint16_t)H, SZ3));
        SXY0 = SXY1;
        SXY1 = SXY2;
        SX2 = (int16_t)Lm_G1(F((int64_t)OFX + ((int64_t)IR1 * h_over_sz3)) >> 16);
        SY2 = (int16_t)Lm_G2(F((int64_t)OFY + ((int64_t)IR2 * h_over_sz3)) >> 16);
    }
    MAC0 = F((int64_t)DQB + ((int64_t)DQA * h_over_sz3));
    IR0 = (int16_t)Lm_H(s_mac0, 1);
}

static void MVMVA_impl(uint32_t function)
{
    int mx = GTE_MX(function);
    int v = GTE_V(function);
    int cv = GTE_CV(function);
    int lm = GTE_LM(function);
    if (cv == 2) {
        MAC1 = A1((int64_t)(MX12(mx) * VY(v)) + (MX13(mx) * VZ(v)));
        MAC2 = A2((int64_t)(MX22(mx) * VY(v)) + (MX23(mx) * VZ(v)));
        MAC3 = A3((int64_t)(MX32(mx) * VY(v)) + (MX33(mx) * VZ(v)));
        (void)Lm_B1(A1(((int64_t)CV1(cv) << 12) + (MX11(mx) * VX(v))), 0);
        (void)Lm_B2(A2(((int64_t)CV2(cv) << 12) + (MX21(mx) * VX(v))), 0);
        (void)Lm_B3(A3(((int64_t)CV3(cv) << 12) + (MX31(mx) * VX(v))), 0);
    } else {
        MAC1 = A1((int64_t)((int64_t)CV1(cv) << 12) + (MX11(mx) * VX(v)) + (MX12(mx) * VY(v)) + (MX13(mx) * VZ(v)));
        MAC2 = A2((int64_t)((int64_t)CV2(cv) << 12) + (MX21(mx) * VX(v)) + (MX22(mx) * VY(v)) + (MX23(mx) * VZ(v)));
        MAC3 = A3((int64_t)((int64_t)CV3(cv) << 12) + (MX31(mx) * VX(v)) + (MX32(mx) * VY(v)) + (MX33(mx) * VZ(v)));
    }
    IR1 = (int16_t)Lm_B1(MAC1, lm);
    IR2 = (int16_t)Lm_B2(MAC2, lm);
    IR3 = (int16_t)Lm_B3(MAC3, lm);
}

static void OP_impl(uint32_t function)
{
    int lm = GTE_LM(function);
    MAC1 = A1((int64_t)(R22 * IR3) - (R33 * IR2));
    MAC2 = A2((int64_t)(R33 * IR1) - (R11 * IR3));
    MAC3 = A3((int64_t)(R11 * IR2) - (R22 * IR1));
    IR1 = (int16_t)Lm_B1(MAC1, lm);
    IR2 = (int16_t)Lm_B2(MAC2, lm);
    IR3 = (int16_t)Lm_B3(MAC3, lm);
}

static void AVSZ3_impl(uint32_t function)
{
    (void)function;
    MAC0 = F((int64_t)(ZSF3 * SZ1) + (ZSF3 * SZ2) + (ZSF3 * SZ3));
    OTZ = (uint16_t)Lm_D(s_mac0, 1);
}

static void AVSZ4_impl(uint32_t function)
{
    (void)function;
    MAC0 = F((int64_t)(ZSF4 * SZ0) + (ZSF4 * SZ1) + (ZSF4 * SZ2) + (ZSF4 * SZ3));
    OTZ = (uint16_t)Lm_D(s_mac0, 1);
}

static void SQR_impl(uint32_t function)
{
    int lm = GTE_LM(function);
    MAC1 = A1((int64_t)IR1 * IR1);
    MAC2 = A2((int64_t)IR2 * IR2);
    MAC3 = A3((int64_t)IR3 * IR3);
    IR1 = (int16_t)Lm_B1(MAC1, lm);
    IR2 = (int16_t)Lm_B2(MAC2, lm);
    IR3 = (int16_t)Lm_B3(MAC3, lm);
}

static void NCLIP_impl(uint32_t function)
{
    (void)function;
    MAC0 = F((int64_t)(SX0 * SY1) + (SX1 * SY2) + (SX2 * SY0) - (SX0 * SY2) - (SX1 * SY0) - (SX2 * SY1));
}

static void GPF_impl(uint32_t function)
{
    int lm = GTE_LM(function);
    MAC1 = A1((int64_t)IR0 * IR1);
    MAC2 = A2((int64_t)IR0 * IR2);
    MAC3 = A3((int64_t)IR0 * IR3);
    IR1 = (int16_t)Lm_B1(MAC1, lm);
    IR2 = (int16_t)Lm_B2(MAC2, lm);
    IR3 = (int16_t)Lm_B3(MAC3, lm);
    RGB0 = RGB1;
    RGB1 = RGB2;
    CD2 = CODE;
    R2 = (uint8_t)Lm_C1(MAC1 >> 4);
    G2 = (uint8_t)Lm_C2(MAC2 >> 4);
    B2 = (uint8_t)Lm_C3(MAC3 >> 4);
}

static void copFunction(int cop, uint32_t function)
{
    int fc = GTE_FUNCT(function);
    (void)cop;
    s_sf = GTE_SF(function);
    FLAG = 0;
    switch (fc) {
    case 0x01:
        RTPS_impl(function);
        return;
    case 0x06:
        NCLIP_impl(function);
        return;
    case 0x0C:
        OP_impl(function);
        return;
    case 0x12:
        MVMVA_impl(function);
        return;
    case 0x28:
        SQR_impl(function);
        return;
    case 0x2D:
        AVSZ3_impl(function);
        return;
    case 0x2E:
        AVSZ4_impl(function);
        return;
    case 0x30:
        RTPT_impl(function);
        return;
    case 0x3D:
        GPF_impl(function);
        return;
    default:
        break;
    }
}

/* --- Public gte_impl API --- */

static inline uint32_t pack_xy(int16_t x, int16_t y)
{
    return (uint32_t)(uint16_t)x | ((uint32_t)(uint16_t)y << 16);
}

void gte_impl_ldVXY0(const struct SVECTOR *v)
{
    if (v) {
        CP2D[0].d = pack_xy(v->vx, v->vy);
    }
}

void gte_impl_ldVZ0(int16_t z)
{
    CP2D[1].sw.l = z;
}

void gte_impl_ldVXY1(const struct SVECTOR *v)
{
    if (v) {
        CP2D[2].d = pack_xy(v->vx, v->vy);
    }
}

void gte_impl_ldVZ1(int16_t z)
{
    CP2D[3].sw.l = z;
}

void gte_impl_ldVXY2(const struct SVECTOR *v)
{
    if (v) {
        CP2D[4].d = pack_xy(v->vx, v->vy);
    }
}

void gte_impl_ldVZ2(int16_t z)
{
    CP2D[5].sw.l = z;
}

void gte_impl_ldv0(const struct SVECTOR *v)
{
    if (v) {
        gte_impl_ldVXY0(v);
        gte_impl_ldVZ0(v->vz);
    }
}

void gte_impl_ldv3(const struct SVECTOR *v0, const struct SVECTOR *v1, const struct SVECTOR *v2)
{
    if (v0) {
        gte_impl_ldVXY0(v0);
        gte_impl_ldVZ0(v0->vz);
    }
    if (v1) {
        gte_impl_ldVXY1(v1);
        gte_impl_ldVZ1(v1->vz);
    }
    if (v2) {
        gte_impl_ldVXY2(v2);
        gte_impl_ldVZ2(v2->vz);
    }
}

void gte_impl_ldIR0(int32_t value)
{
    CP2D[8].sw.l = (int16_t)value;
}

void gte_impl_ldR11R12(int32_t value)
{
    gte_setCopControlWord(2, 0, (uint32_t)value);
}

void gte_impl_ldR13R21(int32_t value)
{
    gte_setCopControlWord(2, 0x800, (uint32_t)value);
}

void gte_impl_ldR22R23(int32_t value)
{
    gte_setCopControlWord(2, 0x1000, (uint32_t)value);
}

void gte_impl_ldR31R32(int32_t value)
{
    gte_setCopControlWord(2, 0x1800, (uint32_t)value);
}

void gte_impl_ldR33(int32_t value)
{
    gte_setCopControlWord(2, 0x2000, (uint32_t)value);
}

void gte_impl_ldTRX(int32_t value)
{
    CP2C[5].sd = value;
}

void gte_impl_ldTRY(int32_t value)
{
    CP2C[6].sd = value;
}

void gte_impl_ldTRZ(int32_t value)
{
    CP2C[7].sd = value;
}

void gte_impl_ldOFX(int32_t value)
{
    CP2C[24].sd = value;
}

void gte_impl_ldOFY(int32_t value)
{
    CP2C[25].sd = value;
}

void gte_impl_ldH(uint32_t value)
{
    CP2C[26].sw.l = (int16_t)(value & 0xffffu);
}

void gte_impl_ldDQA(int32_t value)
{
    CP2C[27].sw.l = (int16_t)value;
}

void gte_impl_ldDQB(int32_t value)
{
    CP2C[28].sd = value;
}

void gte_impl_ldZSF3(int32_t value)
{
    CP2C[29].sw.l = (int16_t)value;
}

void gte_impl_ldZSF4(int32_t value)
{
    CP2C[30].sw.l = (int16_t)value;
}

void gte_impl_ldLZCS(uint32_t value)
{
    CP2D[30].d = value;
    CP2D[31].d = gte_leadingzerocount(value);
}

int32_t gte_impl_stIR1(void) { return IR1; }
int32_t gte_impl_stIR2(void) { return IR2; }
int32_t gte_impl_stIR3(void) { return IR3; }
int32_t gte_impl_stMAC0(void) { return (int32_t)MAC0; }
int32_t gte_impl_stFLAG(void) { return (int32_t)FLAG; }
int32_t gte_impl_stSXY0(void) { return (int32_t)SXY0; }
int32_t gte_impl_stSXY1(void) { return (int32_t)SXY1; }
int32_t gte_impl_stSXY2(void) { return (int32_t)SXY2; }
int32_t gte_impl_stSZ3(void) { return (int32_t)SZ3; }
uint32_t gte_impl_stLZCR(void) { return LZCR; }

void gte_impl_stsxy(int16_t *sx, int16_t *sy)
{
    if (sx)
        *sx = SX2;
    if (sy)
        *sy = SY2;
}

void gte_impl_read_sz_fifo3(int16_t *sz0, int16_t *sz1, int16_t *sz2)
{
    if (sz0)
        *sz0 = (int16_t)(uint16_t)SZ1;
    if (sz1)
        *sz1 = (int16_t)(uint16_t)SZ2;
    if (sz2)
        *sz2 = (int16_t)(uint16_t)SZ3;
}

void gte_impl_rtps(void)
{
    copFunction(2, 0x180001u);
}

void gte_impl_rtpt(void)
{
    copFunction(2, 0x280030u);
}

void gte_impl_rtv0(void)
{
    copFunction(2, 0x486012u);
}

void gte_impl_rtv1(void)
{
    copFunction(2, 0x488012u);
}

void gte_impl_rtv2(void)
{
    copFunction(2, 0x48a012u);
}

void gte_impl_nclip(void)
{
    copFunction(2, 0x1400006u);
}

void gte_impl_mvmva(int mx, int v, int cv, int lm)
{
    uint32_t op = (uint32_t)((mx << 17) | (v << 15) | (cv << 13) | (lm << 10) | 0x12);
    copFunction(2, op);
}

void gte_impl_avsz3(void)
{
    copFunction(2, 0x158002Du);
}

void gte_impl_avsz4(void)
{
    copFunction(2, 0x158002Eu);
}

void gte_impl_op(void)
{
    copFunction(2, 0x0170000Cu);
}

void gte_impl_sqr(int lm)
{
    copFunction(2, (uint32_t)((lm << 10) | 0x28));
}

void gte_impl_gpf(int lm)
{
    copFunction(2, (uint32_t)((lm << 10) | 0x3D));
}

void gte_impl_llir(void)
{
    /* Load IR from MAC (copy MAC1,2,3 to IR1,2,3) - no separate op in Noah; often done by MVMVA. */
    IR1 = (int16_t)Lm_B1(MAC1, 1);
    IR2 = (int16_t)Lm_B2(MAC2, 1);
    IR3 = (int16_t)Lm_B3(MAC3, 1);
}

void gte_impl_lcv0(void)
{
    /* Copy MAC to IR (sf applied) */
    IR1 = (int16_t)Lm_B1((int32_t)gte_shift((int64_t)MAC1, s_sf), 1);
    IR2 = (int16_t)Lm_B2((int32_t)gte_shift((int64_t)MAC2, s_sf), 1);
    IR3 = (int16_t)Lm_B3_sf((int64_t)MAC3, s_sf, 1);
}

void gte_impl_lcv1(void)
{
    gte_impl_lcv0();
}

void gte_impl_stlvnl(struct VECTOR *out)
{
    if (out) {
        out->vx = (long)gte_getCopReg(2, 0x800 * 25);
        out->vy = (long)gte_getCopReg(2, 0x800 * 26);
        out->vz = (long)gte_getCopReg(2, 0x800 * 27);
    }
}
