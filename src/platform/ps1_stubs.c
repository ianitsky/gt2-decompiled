#include "ps1_stubs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Debug flag - set to 1 to enable stub logging
int ps1_stub_debug = 0;

#define STUB_LOG(fmt, ...) \
    do { \
        if (ps1_stub_debug) { \
            fprintf(stderr, "[PS1_STUB] " fmt "\n", ##__VA_ARGS__); \
        } \
    } while (0)

// ============================================================================
// CD-ROM Functions
// ============================================================================

int CdControl(u_char command, u_char *parameters, u_char *result) {
    STUB_LOG("CdControl(command=0x%02x)", command);
    if (result != NULL) {
        memset(result, 0, 8);
    }
    return 0; // Success
}

int CdControlB(u_char command, u_char *parameters, u_char *result) {
    STUB_LOG("CdControlB(command=0x%02x)", command);
    if (result != NULL) {
        memset(result, 0, 8);
    }
    return 0;
}

int CdControlF(u_char command, u_char *parameters) {
    STUB_LOG("CdControlF(command=0x%02x)", command);
    return 0;
}

int CdGetSector(void *memoryAddress, int sectorSize) {
    STUB_LOG("CdGetSector(size=%d)", sectorSize);
    if (memoryAddress != NULL) {
        memset(memoryAddress, 0, sectorSize);
    }
    return 0;
}

int CdInit(void) {
    STUB_LOG("CdInit()");
    return 0;
}

// ============================================================================
// Pad (Controller) Functions
// ============================================================================

int PadGetState(int portNumber) {
    STUB_LOG("PadGetState(port=%d)", portNumber);
    // Return no pad connected state
    return 0x7; // No pad connected
}

int PadInfoAct(int portNumber, int actionIndex, int infoType) {
    STUB_LOG("PadInfoAct(port=%d, action=%d, type=%d)", portNumber, actionIndex, infoType);
    return 0;
}

int PadSetActAlign(int portNumber, uchar *actionData) {
    STUB_LOG("PadSetActAlign(port=%d)", portNumber);
    return 0;
}

// ============================================================================
// Memory Card Functions
// ============================================================================

long StartCARD(void) {
    STUB_LOG("StartCARD()");
    return 0;
}

long StopCARD(void) {
    STUB_LOG("StopCARD()");
    return 0;
}

long _card_clear(long channelNumber) {
    STUB_LOG("_card_clear(channel=%ld)", channelNumber);
    return 0;
}

long _card_info(long channelNumber) {
    STUB_LOG("_card_info(channel=%ld)", channelNumber);
    return 0;
}

long _card_read(long channelNumber, long blockNumber, uchar *buffer) {
    STUB_LOG("_card_read(channel=%ld, block=%ld)", channelNumber, blockNumber);
    if (buffer != NULL) {
        memset(buffer, 0, 128); // Standard PS1 memory card block size
    }
    return 0;
}

long _card_write(long channelNumber, long blockNumber, uchar *buffer) {
    STUB_LOG("_card_write(channel=%ld, block=%ld)", channelNumber, blockNumber);
    return 0;
}

// ============================================================================
// DCT/JPEG Decoding Functions
// ============================================================================

int DecDCTinCallback(func *callbackFunction) {
    STUB_LOG("DecDCTinCallback()");
    return 0;
}

int DecDCTinSync(int syncMode) {
    STUB_LOG("DecDCTinSync(mode=%d)", syncMode);
    return 0;
}

int DecDCToutCallback(func *callbackFunction) {
    STUB_LOG("DecDCToutCallback()");
    return 0;
}

int DecDCToutSync(int syncMode) {
    STUB_LOG("DecDCToutSync(mode=%d)", syncMode);
    return 0;
}

void DecDCTReset(int resetMode) {
    STUB_LOG("DecDCTReset(mode=%d)", resetMode);
}

void DecDCTin(u_long *buffer, int decodeMode) {
    STUB_LOG("DecDCTin(mode=%d)", decodeMode);
}

void DecDCTout(u_long *outputBuffer, int bufferSize) {
    STUB_LOG("DecDCTout(size=%d)", bufferSize);
}

// ============================================================================
// BIOS Functions
// ============================================================================

undefined4 BIOS_1_OBJ_0(void) {
    STUB_LOG("BIOS_1_OBJ_0()");
    return 0;
}

undefined4 BIOS_1_OBJ_64(byte *commandData) {
    STUB_LOG("BIOS_1_OBJ_64()");
    return 0;
}

undefined4 BIOS_1_OBJ_69C(void) {
    STUB_LOG("BIOS_1_OBJ_69C()");
    return 0;
}

undefined4 BIOS_1_OBJ_6CC(void) {
    STUB_LOG("BIOS_1_OBJ_6CC()");
    return 0;
}

undefined4 BIOS_1_OBJ_91C(void) {
    STUB_LOG("BIOS_1_OBJ_91C()");
    return 0;
}

undefined4 BIOS_1_OBJ_94C(void) {
    STUB_LOG("BIOS_1_OBJ_94C()");
    return 0;
}

void BIOS_1_OBJ_264(void) {
    STUB_LOG("BIOS_1_OBJ_264()");
}

void BIOS_1_OBJ_364(void) {
    STUB_LOG("BIOS_1_OBJ_364()");
}

void BIOS_1_OBJ_3B0(void) {
    STUB_LOG("BIOS_1_OBJ_3B0()");
}

void BIOS_1_OBJ_430(void) {
    STUB_LOG("BIOS_1_OBJ_430()");
}

void BIOS_1_OBJ_4B0(void) {
    STUB_LOG("BIOS_1_OBJ_4B0()");
}

void BIOS_1_OBJ_550(void) {
    STUB_LOG("BIOS_1_OBJ_550()");
}

void BIOS_1_OBJ_7B4(void) {
    STUB_LOG("BIOS_1_OBJ_7B4()");
}

void BIOS_1_OBJ_A7C(void) {
    STUB_LOG("BIOS_1_OBJ_A7C()");
}

// ============================================================================
// CD Functions (Low-level)
// ============================================================================

undefined4 CD_cw(byte command, byte *parameters, undefined *resultBuffer, int blockingMode) {
    STUB_LOG("CD_cw(command=0x%02x, blocking=%d)", command, blockingMode);
    return 0;
}

undefined4 CD_ready(int readyMode, undefined *resultBuffer) {
    STUB_LOG("CD_ready(mode=%d)", readyMode);
    return 0;
}

undefined4 CD_sync(int syncMode, undefined *resultBuffer) {
    STUB_LOG("CD_sync(mode=%d)", syncMode);
    return 0;
}

void CD_getsector(void) {
    STUB_LOG("CD_getsector()");
}

// ============================================================================
// Event Functions
// ============================================================================

undefined4 EVENT_OBJ_90(void) {
    STUB_LOG("EVENT_OBJ_90()");
    return 0;
}

void EVENT_OBJ_11C(void) {
    STUB_LOG("EVENT_OBJ_11C()");
}

void EVENT_OBJ_80(void) {
    STUB_LOG("EVENT_OBJ_80()");
}

void EVENT_OBJ_BC(void) {
    STUB_LOG("EVENT_OBJ_BC()");
}

void EVENT_OBJ_CC(void) {
    STUB_LOG("EVENT_OBJ_CC()");
}

void EVENT_OBJ_F4(void) {
    STUB_LOG("EVENT_OBJ_F4()");
}

// ============================================================================
// Other PS1-specific Functions
// ============================================================================

void FUN_80085974(void) {
    STUB_LOG("FUN_80085974()");
}

void FUN_80085990(void) {
    STUB_LOG("FUN_80085990()");
}

void FUN_800859fc(void) {
    STUB_LOG("FUN_800859fc()");
}

void FUN_80085a98(void) {
    STUB_LOG("FUN_80085a98()");
}

void FUN_80085ac8(int objectPointer, uint typeFlags) {
    STUB_LOG("FUN_80085ac8(object=0x%x, flags=0x%x)", objectPointer, typeFlags);
}

void FUN_80085b3c(undefined4 *typeInfo, undefined4 typeName, undefined4 additionalInfo) {
    STUB_LOG("FUN_80085b3c()");
}

void FUN_80085b78(undefined4 *typeInfo, undefined4 typeName) {
    STUB_LOG("FUN_80085b78()");
}

void FUN_80086060(int typeFlag) {
    STUB_LOG("FUN_80086060(flag=%d)", typeFlag);
}

void FUN_800870b8(void) {
    STUB_LOG("FUN_800870b8()");
}

// Note: FUN_80085974 is implemented in decompiled code (scus_944.88_part_008.c)
// This stub is only used if the decompiled implementation is not available
void FUN_80085974_stub(undefined4 param) {
    STUB_LOG("FUN_80085974_stub(param=0x%x)", param);
}

void FUN_8008ce08(void) {
    STUB_LOG("FUN_8008ce08()");
}

undefined4 FUN_8005d6e0(undefined4 param_1, undefined4 param_2) {
    STUB_LOG("FUN_8005d6e0(param1=0x%x, param2=0x%x)", param_1, param_2);
    return 0;
}

void VSyncCallback(func *callbackFunction) {
    STUB_LOG("VSyncCallback(callback=%p)", (void*)callbackFunction);
    if (callbackFunction != NULL) {
        (*callbackFunction)();
    }
}

int PadInitDirect(void *padStructure1, void *padStructure2) {
    STUB_LOG("PadInitDirect(pad1=%p, pad2=%p)", padStructure1, padStructure2);
    return 0;
}
