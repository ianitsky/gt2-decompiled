/*
 * GTE stub wrappers: decompiled code calls these; they forward to gte.c (Noah port).
 */

#include "gte_stubs.h"
#include "gte_impl.h"
#include "gt2_types.h"
#include "ps1_stubs.h"
#include <stdint.h>

/* Helper: treat decompiled int as either 16-bit value or pointer to short */
static int16_t gte_z_from_arg(int z_or_ptr)
{
    int32_t v = (int32_t)z_or_ptr;
    if (v >= -32768 && v <= 32767)
        return (int16_t)v;
    return *(int16_t *)(uintptr_t)z_or_ptr;
}

/* Helper: treat decompiled pointer as SVECTOR (may be packed xy in one word) */
static void gte_ldVXY0_from_ptr(undefined4 *ptr)
{
    SVECTOR v;
    if (!ptr)
        return;
    /* Decompiled code sometimes passes packed (y<<16)|x */
    v.vx = (short)(uint16_t)(*(uint32_t *)ptr & 0xffffu);
    v.vy = (short)(uint16_t)((*(uint32_t *)ptr >> 16) & 0xffffu);
    v.vz = 0;
    gte_impl_ldVXY0(&v);
}

static void gte_ldVXY1_from_ptr(undefined4 *ptr)
{
    SVECTOR v;
    if (!ptr)
        return;
    v.vx = (short)(uint16_t)(*(uint32_t *)ptr & 0xffffu);
    v.vy = (short)(uint16_t)((*(uint32_t *)ptr >> 16) & 0xffffu);
    v.vz = 0;
    gte_impl_ldVXY1(&v);
}

static void gte_ldVXY2_from_ptr(undefined4 *ptr)
{
    SVECTOR v;
    if (!ptr)
        return;
    v.vx = (short)(uint16_t)(*(uint32_t *)ptr & 0xffffu);
    v.vy = (short)(uint16_t)((*(uint32_t *)ptr >> 16) & 0xffffu);
    v.vz = 0;
    gte_impl_ldVXY2(&v);
}

/* Return-value GTE ops */
int gte_stIR1(void) { return gte_impl_stIR1(); }
int gte_stIR2(void) { return gte_impl_stIR2(); }
int gte_stIR3(void) { return gte_impl_stIR3(); }
int gte_stFLAG(void) { return gte_impl_stFLAG(); }
int gte_stMAC0(void) { return gte_impl_stMAC0(); }
int gte_stSXY0(void) { return gte_impl_stSXY0(); }
int gte_stSXY1(void) { return gte_impl_stSXY1(); }
int gte_stSXY2(void) { return gte_impl_stSXY2(); }
int gte_stSZ3(void) { return gte_impl_stSZ3(); }
unsigned int gte_stLZCR(void) { return gte_impl_stLZCR(); }

/* Load/store with parameters */
void gte_ldVXY0(undefined4 *ptr) { gte_ldVXY0_from_ptr(ptr); }
void gte_ldVZ0(int z_or_ptr) { gte_impl_ldVZ0(gte_z_from_arg(z_or_ptr)); }
void gte_ldVXY2(undefined4 *ptr) { gte_ldVXY2_from_ptr(ptr); }
void gte_ldVZ2(int z_or_ptr) { gte_impl_ldVZ2(gte_z_from_arg(z_or_ptr)); }
void gte_ldVXY1(undefined4 *ptr) { gte_ldVXY1_from_ptr(ptr); }
void gte_ldVZ1(int z_or_ptr) { gte_impl_ldVZ1(gte_z_from_arg(z_or_ptr)); }

void gte_rtpt_b(void) { gte_impl_rtpt(); }
void gte_nclip_b(void) { gte_impl_nclip(); }
void gte_rtps_b(void) { gte_impl_rtps(); }

void gte_stVXY0(void) { (void)gte_impl_stSXY0(); }
void gte_stVZ0(void) { /* store MAC0 to Z output; impl has stlvnl for vector */ }
void gte_stVXY2(void) { (void)gte_impl_stSXY2(); }
void gte_stVZ2(void) { }
void gte_stVXY1(void) { (void)gte_impl_stSXY1(); }
void gte_stVZ1(void) { }
void gte_stSXY(void) { (void)gte_impl_stSXY2(); }
void gte_ldSXY0(void) { }
void gte_ldSXY1(void) { }
void gte_ldSXY2(void) { }
void gte_stRGB0(void) { }
void gte_stRGB1(void) { }
void gte_stRGB2(void) { }
void gte_llir_b(void) { gte_impl_llir(); }
void gte_lcv1_b(void) { gte_impl_lcv1(); }
void gte_ldtr(void) { }
void gte_ldR11R12(undefined4 value) { gte_impl_ldR11R12((int32_t)value); }
void gte_ldR13R21(undefined4 value) { gte_impl_ldR13R21((int32_t)value); }
void gte_ldR22R23(undefined4 value) { gte_impl_ldR22R23((int32_t)value); }
void gte_ldR31R32(undefined4 value) { gte_impl_ldR31R32((int32_t)value); }
void gte_ldR33(undefined4 value) { gte_impl_ldR33((int32_t)value); }
void gte_ldSXYP(void) { }
void gte_stsxy(void) { gte_impl_stsxy(NULL, NULL); }
void gte_stopz(void) { }
void read_sz_fifo3(undefined4 *z0, undefined4 *z1, undefined4 *z2)
{
    int16_t s0, s1, s2;
    gte_impl_read_sz_fifo3(&s0, &s1, &s2);
    if (z0) *z0 = (undefined4)(uint16_t)s0;
    if (z1) *z1 = (undefined4)(uint16_t)s1;
    if (z2) *z2 = (undefined4)(uint16_t)s2;
}
void read_sz_fifo4(void) { }
void gte_ldTRX(undefined4 value) { gte_impl_ldTRX((int32_t)value); }
void gte_ldTRY(undefined4 value) { gte_impl_ldTRY((int32_t)value); }
void gte_ldTRZ(undefined4 value) { gte_impl_ldTRZ((int32_t)value); }
void gte_ldsv_(void) { }
void gte_rtirtr_b(void) { }
void gte_ldv0(void) { }
void gte_ldLZCS(undefined4 value) { gte_impl_ldLZCS((uint32_t)value); }
void gte_ldOFY(undefined4 value) { gte_impl_ldOFY((int32_t)value); }

void halt_baddata(void) { }
void halt_unimplemented(void) { }

undefined4 getCopReg(undefined4 cop, undefined4 reg)
{
    return (undefined4)gte_getCopReg((int)cop, (int)reg);
}

void setCopReg(int copNumber, undefined4 registerNumber, undefined4 value, undefined4 unused)
{
    (void)unused;
    if (copNumber == 2)
        gte_setCopReg(2, (int)registerNumber, (uint32_t)value);
}

void SUB_000000b0(void) { }
void trap(void) { }
void prefetch(void) { }
void func_0x80410040(void) { }
void CONCAT11(void) { }
