#ifndef PS1_STUBS_H
#define PS1_STUBS_H

#include "gt2_types.h"
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

// CD-ROM functions
int CdControl(u_char command, u_char *parameters, u_char *result);
int CdControlB(u_char command, u_char *parameters, u_char *result);
int CdControlF(u_char command, u_char *parameters);
int CdGetSector(void *memoryAddress, int sectorSize);
int CdInit(void);

// Pad (controller) functions
int PadGetState(int portNumber);
int PadInfoAct(int portNumber, int actionIndex, int infoType);
int PadSetActAlign(int portNumber, uchar *actionData);

// Memory card functions
long StartCARD(void);
long StopCARD(void);
long _card_clear(long channelNumber);
long _card_info(long channelNumber);
long _card_read(long channelNumber, long blockNumber, uchar *buffer);
long _card_write(long channelNumber, long blockNumber, uchar *buffer);

// DCT/JPEG decoding functions
int DecDCTinCallback(func *callbackFunction);
int DecDCTinSync(int syncMode);
int DecDCToutCallback(func *callbackFunction);
int DecDCToutSync(int syncMode);
void DecDCTReset(int resetMode);
void DecDCTin(u_long *buffer, int decodeMode);
void DecDCTout(u_long *outputBuffer, int bufferSize);

// BIOS functions (stubs)
undefined4 BIOS_1_OBJ_0(void);
undefined4 BIOS_1_OBJ_64(byte *commandData);
undefined4 BIOS_1_OBJ_69C(void);
undefined4 BIOS_1_OBJ_6CC(void);
undefined4 BIOS_1_OBJ_91C(void);
undefined4 BIOS_1_OBJ_94C(void);
void BIOS_1_OBJ_264(void);
void BIOS_1_OBJ_364(void);
void BIOS_1_OBJ_3B0(void);
void BIOS_1_OBJ_430(void);
void BIOS_1_OBJ_4B0(void);
void BIOS_1_OBJ_550(void);
void BIOS_1_OBJ_7B4(void);
void BIOS_1_OBJ_A7C(void);

// CD functions (low-level)
undefined4 CD_cw(byte command, byte *parameters, undefined *resultBuffer, int blockingMode);
undefined4 CD_ready(int readyMode, undefined *resultBuffer);
undefined4 CD_sync(int syncMode, undefined *resultBuffer);
void CD_getsector(void);

// Event functions
undefined4 EVENT_OBJ_90(void);
void EVENT_OBJ_11C(void);
void EVENT_OBJ_80(void);
void EVENT_OBJ_BC(void);
void EVENT_OBJ_CC(void);
void EVENT_OBJ_F4(void);

// Other PS1-specific functions
// Note: FUN_80085974, FUN_8008ce08, and FUN_8005d6e0 are implemented in decompiled code
// They are declared in the decompiled headers, not here

// VSync and Pad initialization
int VSyncCallback(func *callbackFunction);
int PadInitDirect(void *padStructure1, void *padStructure2);
void FUN_80085990(void);
void FUN_800859fc(void);
void FUN_80085a98(void);
void FUN_80085ac8(int objectPointer, uint typeFlags);
void FUN_80085b3c(undefined4 *typeInfo, undefined4 typeName, undefined4 additionalInfo);
void FUN_80085b78(undefined4 *typeInfo, undefined4 typeName);
void FUN_80086060(int typeFlag);
void FUN_800870b8(void);

// GTE (Geometry Transform Engine) functions
void setCopReg(int copNumber, undefined4 registerNumber, undefined4 value, undefined4 unused);
void gte_ldZSF3(undefined4 value);
void gte_ldZSF4(undefined4 value);
void gte_ldH(undefined4 value);
void gte_ldDQA(undefined4 value);
void gte_ldDQB(undefined4 value);
void gte_ldOFX(undefined4 value);
void gte_ldOFY(undefined4 value);

// Debug flag for stub logging
extern int ps1_stub_debug;

#ifdef __cplusplus
}
#endif

#endif /* PS1_STUBS_H */
