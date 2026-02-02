#ifndef GT2_GTE_IMPL_H
#define GT2_GTE_IMPL_H

/*
 * Internal GTE (Geometry Transform Engine) implementation API.
 * Ported from Noah (https://github.com/yaz0r/Noah) gte.cpp to C.
 * Used by gte_stubs.c wrappers. Decompiled code calls the stub API in gte_stubs.h.
 */

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct SVECTOR;
struct VECTOR;
struct MATRIX;

/* Coprocessor 2 register access (used by decompiled code) */
void gte_setCopReg(int cop, int reg, uint32_t value);
void gte_setCopReg64(int cop, int reg, uint32_t lo, uint32_t hi);
uint32_t gte_getCopReg(int cop, int reg);
void gte_setCopControlWord(int cop, int reg, uint32_t value);
int32_t gte_getCopControlWord(int cop, int reg);

/* Load data registers */
void gte_impl_ldVXY0(const struct SVECTOR *v);
void gte_impl_ldVZ0(int16_t z);
void gte_impl_ldVXY1(const struct SVECTOR *v);
void gte_impl_ldVZ1(int16_t z);
void gte_impl_ldVXY2(const struct SVECTOR *v);
void gte_impl_ldVZ2(int16_t z);
void gte_impl_ldv0(const struct SVECTOR *v);
void gte_impl_ldv3(const struct SVECTOR *v0, const struct SVECTOR *v1, const struct SVECTOR *v2);
void gte_impl_ldIR0(int32_t value);
void gte_impl_ldR11R12(int32_t value);
void gte_impl_ldR13R21(int32_t value);
void gte_impl_ldR22R23(int32_t value);
void gte_impl_ldR31R32(int32_t value);
void gte_impl_ldR33(int32_t value);
void gte_impl_ldTRX(int32_t value);
void gte_impl_ldTRY(int32_t value);
void gte_impl_ldTRZ(int32_t value);
void gte_impl_ldOFX(int32_t value);
void gte_impl_ldOFY(int32_t value);
void gte_impl_ldH(uint32_t value);
void gte_impl_ldDQA(int32_t value);
void gte_impl_ldDQB(int32_t value);
void gte_impl_ldZSF3(int32_t value);
void gte_impl_ldZSF4(int32_t value);
void gte_impl_ldLZCS(uint32_t value);

/* Store / read results */
int32_t gte_impl_stIR1(void);
int32_t gte_impl_stIR2(void);
int32_t gte_impl_stIR3(void);
int32_t gte_impl_stMAC0(void);
int32_t gte_impl_stFLAG(void);
int32_t gte_impl_stSXY0(void);
int32_t gte_impl_stSXY1(void);
int32_t gte_impl_stSXY2(void);
int32_t gte_impl_stSZ3(void);
uint32_t gte_impl_stLZCR(void);
void gte_impl_stsxy(int16_t *sx, int16_t *sy);
void gte_impl_read_sz_fifo3(int16_t *sz0, int16_t *sz1, int16_t *sz2);

/* GTE instructions (opcode selects sf/lm; we use default) */
void gte_impl_rtps(void);
void gte_impl_rtpt(void);
void gte_impl_rtv0(void);
void gte_impl_rtv1(void);
void gte_impl_rtv2(void);
void gte_impl_nclip(void);
void gte_impl_mvmva(int mx, int v, int cv, int lm);
void gte_impl_avsz3(void);
void gte_impl_avsz4(void);
void gte_impl_op(void);
void gte_impl_sqr(int lm);
void gte_impl_gpf(int lm);
void gte_impl_llir(void);
void gte_impl_lcv0(void);
void gte_impl_lcv1(void);
void gte_impl_stlvnl(struct VECTOR *out);

#ifdef __cplusplus
}
#endif

#endif /* GT2_GTE_IMPL_H */
