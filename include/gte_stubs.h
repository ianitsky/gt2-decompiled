#ifndef GT2_GTE_STUBS_H
#define GT2_GTE_STUBS_H

/*
 * GTE (Geometry Transform Engine) stub prototypes for cross-platform build.
 *
 * Why stubs instead of psyz libgte?
 * - The decompiled GT2 code calls low-level GTE *instructions* as C functions
 *   (e.g. gte_stSXY2, gte_ldVXY0, gte_rtpt_b). On real PS1 these were inline
 *   assembly (cop2) or SDK macros that expanded to one instruction each.
 * - psyz (src/external/psyz) provides a *high-level* GTE API: SetRotMatrix,
 *   RotTrans, ReadSXSYfifo, etc. It does not export C functions for each
 *   low-level instruction. When built with __psyz, its gte_* macros (gte_rtps,
 *   gte_ldv0, etc.) are defined as no-ops; the high-level API is the intended
 *   interface.
 * - The decompiled code does not use that high-level API; it uses the
 *   instruction-level sequence. So we cannot replace these calls with psyz
 *   without either refactoring the decompiled code to use SetRotMatrix/RotTrans
 *   etc., or adding low-level gte_* implementations (e.g. in our code or in
 *   psyz; we cannot modify src/external/psyz).
 * Implemented by gte.c (C port of Noah GTE). Stubs in gte_stubs.c forward to gte_impl_*.
 *
 * Reference implementation (low-level GTE in C++):
 *   Noah (PS1 emulator): https://github.com/yaz0r/Noah
 *   gte.cpp: https://github.com/yaz0r/Noah/blob/2178207b73f37a190416688aa0c7e15133ff4a29/NoahLib/kernel/gte.cpp
 * That code implements setCopReg/getCopReg, RTPS/RTPT/NCLIP/MVMVA/AVSZ3/AVSZ4,
 * and wrappers like gte_ldVXY0, gte_rtpt, gte_nclip, gte_stSXY2, gte_stIR1, etc.
 * To use it here we would need to either:
 *   - Port the GTE logic to C (same algorithms, our types and no C++), or
 *   - Build Noah's GTE as a C++ unit and provide C wrappers (including _b
 *     variants like gte_rtpt_b -> gte_rtpt) and setCopReg/getCopReg.
 * Check Noah's license before reusing and add proper attribution.
 *
 * Implemented by gte.c (ported from Noah); gte_stubs.c provides wrappers.
 */

#include "gt2_types.h"

/* Return-value GTE ops (decompiled code uses their return values) */
int gte_stIR1(void);
int gte_stIR2(void);
int gte_stIR3(void);
int gte_stFLAG(void);
int gte_stMAC0(void);
int gte_stSXY0(void);
int gte_stSXY1(void);
int gte_stSXY2(void);
int gte_stSZ3(void);
unsigned int gte_stLZCR(void);

/* Load/store with parameters (decompiled code passes pointers or packed values) */
void gte_ldVXY0(undefined4 *ptr);
void gte_ldVZ0(int z_or_ptr);
void gte_ldVXY2(undefined4 *ptr);
void gte_ldVZ2(int z_or_ptr);
void gte_rtpt_b(void);
void gte_nclip_b(void);
void gte_rtps_b(void);
void gte_stVXY0(void);
void gte_stVZ0(void);
void gte_stVXY2(void);
void gte_stVZ2(void);
void gte_stVXY1(void);
void gte_stVZ1(void);
void gte_stSXY(void);
void gte_ldSXY0(void);
void gte_ldSXY1(void);
void gte_ldSXY2(void);
void gte_stRGB0(void);
void gte_stRGB1(void);
void gte_stRGB2(void);
void gte_llir_b(void);
void gte_lcv1_b(void);
void gte_ldtr(void);
void gte_ldR11R12(undefined4 value);
void gte_ldR13R21(undefined4 value);
void gte_ldR22R23(undefined4 value);
void gte_ldR31R32(undefined4 value);
void gte_ldR33(undefined4 value);
void gte_ldSXYP(void);
void gte_stsxy(void);
void gte_stopz(void);
void read_sz_fifo3(undefined4 *z0, undefined4 *z1, undefined4 *z2);
void read_sz_fifo4(void);
void gte_ldTRX(undefined4 value);
void gte_ldTRY(undefined4 value);
void gte_ldTRZ(undefined4 value);
void gte_ldsv_(void);
void gte_rtirtr_b(void);
void gte_ldv0(void);
void gte_ldLZCS(undefined4 value);
void gte_ldVXY1(undefined4 *ptr);
void gte_ldVZ1(int z_or_ptr);
void gte_ldOFY(undefined4 value);

void halt_baddata(void);
void halt_unimplemented(void);

/* Coprocessor register access (used by decompiled code) */
undefined4 getCopReg(undefined4 cop, undefined4 reg);
void SUB_000000b0(void);  /* B0 vector for psyz; game uses gt2_b0_callback */
void trap(void);
void prefetch(void);
void func_0x80410040(void);
void CONCAT11(void);

#endif /* GT2_GTE_STUBS_H */
