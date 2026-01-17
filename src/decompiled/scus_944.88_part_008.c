// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_008.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Forward declarations for functions used in this file
void FUN_8008de24(void);
void FUN_8008c918(void);
void FUN_8008c948(void);
void ResetCallback(void);
int ReadInitPadFlag(void);
void ChangeClearPAD(int);
void VSync(int);
void ChangeClearRCnt(int, int);
void SysDeqIntRP(int, void *);
void SysEnqIntRP(int, void *);
void FlushCache(void);
void DeliverEvent(uint, uint);
int CD_init(void);
void CD_initvol(void);
undefined4 CD_cw(byte, byte *, undefined *, int);
undefined4 CD_sync(int, undefined *);
void CD_flush(void);
int CheckCallback(void);
int DMACallback(int, func *);
undefined4 FUN_80088124(void);
void FUN_800881b4(void);
void FUN_80088b34(undefined4);
bool FUN_80088b54(void);
void FUN_80088ac0(int, undefined);
void FUN_80088aac(int);
void FUN_80088b00(int, undefined);
void FUN_8008e00c(char *);
void FUN_800881dc(int, undefined, undefined4, undefined);
int FUN_800884e0(int);
undefined4 FUN_80088518(int *, int);
void FUN_800881ec(int);
uint FUN_80087ea8(int, undefined);
uint FUN_80087c84(int, int);
undefined * PDDIRRES_OBJ_594(uint);
int S_016_OBJ_38C(void);
undefined4 FUN_80087860(int);
void FUN_80087b94(int);
undefined4 * FUN_80086020(void);
void FUN_80085b3c(undefined4 *, undefined4, undefined4);
void FUN_80085b78(undefined4 *, undefined4);
void FUN_800859fc(void);
void FUN_80085990(void);
// _exit is a standard library function - don't redeclare
// void _exit(void);
void bzero(void *, size_t);

// External variables that need to be declared
extern undefined *PTR_DAT_800a7110;
extern undefined4 DAT_801c9410;
extern undefined4 DAT_801c9414;
extern undefined4 DAT_801f0d20;
extern undefined4 DAT_801c9408;
extern undefined4 DAT_800a7528;
extern undefined4 DAT_800a7568;
extern undefined4 DAT_800a75ac;
extern undefined4 DAT_800a7524;
extern undefined4 DAT_800a75a8;
extern undefined4 DAT_800a76d4;
extern undefined4 DAT_800a76e8;
extern undefined4 DAT_800a76d0;
extern undefined4 DAT_800a76fc;
// Function pointer types for pad callbacks
typedef void (*code_int)(int);
typedef int (*code_int_ret)(int);
typedef void (*code_ptr)(undefined4 *);
typedef int (*code_void_ret)(void);
typedef undefined * (*code_uint_ptr)(uint);

extern code_ptr DAT_800a76a0;
extern code_uint_ptr DAT_800a76b0;
typedef int (*code_int_ret_int)(int);
extern code_int_ret_int DAT_800a76b8;
extern code_int DAT_800a76bc;
extern code_int DAT_800a76c0;
extern code_int DAT_800a769c;
extern undefined4 DAT_800a76dc;
extern undefined4 DAT_800a76e0;
extern undefined4 DAT_800a76e4;
extern undefined4 DAT_800a76a4;
extern undefined4 DAT_800a76a8;
extern undefined4 DAT_800a76b4;
extern undefined4 DAT_801c9424;
extern undefined4 DAT_801c9420;
extern undefined4 DAT_801c9598;
extern undefined4 DAT_801c95a8;
extern undefined4 DAT_801c95bc;
extern undefined4 DAT_801c95c0;
extern undefined4 DAT_801c95c4;
extern undefined4 DAT_801c95c8;
extern undefined4 DAT_801c96b8;
extern undefined4 DAT_801c9604;
extern undefined4 DAT_801c9608;
extern undefined4 DAT_801c96f4;
extern undefined4 DAT_801c96f8;
extern undefined4 DAT_801c97a8;
extern undefined4 DAT_801c97f0;
extern undefined4 DAT_801c97cb;
extern undefined4 DAT_801c9813;
extern undefined4 DAT_800a76f4;
extern undefined4 DAT_800a7718;
extern undefined4 DAT_800a7724;
extern code **PTR_LAB_800a7724;
typedef void (*code_int_ptr)(int, void *);
extern code_int_ptr DAT_800a780c;
extern code_int_ptr DAT_800a7810;
extern undefined4 DAT_800a7754;
extern undefined4 DAT_800a7758;
extern undefined4 DAT_800a7818;
extern undefined4 DAT_800a7820;
extern undefined4 DAT_800a781c;
extern undefined4 DAT_800a7824;
extern undefined4 DAT_800a7828;
extern undefined4 DAT_800a7829;
extern undefined4 DAT_800a7ae8;
extern undefined4 DAT_800a7ae9;
extern undefined4 DAT_800a7aea;
extern undefined4 DAT_800a7950;
extern undefined4 DAT_800a7764;
extern undefined4 DAT_800a78d0;
extern undefined4 DAT_800a79d0;
extern undefined4 DAT_801c9838;
extern undefined4 DAT_801c9840;
extern undefined4 DAT_801c9848;
extern undefined4 DAT_801c9850;
extern undefined4 DAT_801c9854;
extern undefined4 DAT_801c9858;
extern undefined4 *PTR_s_CdlSync_800a7830;
extern undefined4 *PTR_s_NoIntr_800a78b0;
extern undefined4 LAB_80090a7c;
extern undefined4 LAB_80090a4c;
extern undefined4 LAB_80090a64;
extern undefined4 DAT_80090ad4;
extern undefined4 LAB_000000a0;
extern undefined4 SUB_000000b0;
extern undefined4 PATCH_OBJ_44;
extern undefined4 PATCH_OBJ_B4;
extern undefined4 PATCH_OBJ_C8;
extern undefined4 DAT_0000df80;
extern undefined4 *_DAT_0000dffc;
extern undefined4 DAT_80087128;
extern undefined4 LAB_800885ec;
extern undefined4 LAB_80088694;
extern undefined4 LAB_80090a7c;
extern undefined4 LAB_80090a4c;
extern undefined4 LAB_80090a64;
extern undefined4 LAB_80090ad4;
extern undefined4 LAB_000000a0;
extern undefined4 SUB_000000b0;
extern undefined4 PATCH_OBJ_44;
extern undefined4 PATCH_OBJ_B4;
extern undefined4 PATCH_OBJ_C8;
extern undefined4 DAT_0000df80;
extern undefined4 *_DAT_0000dffc;
extern undefined4 DAT_80087128;
extern undefined4 LAB_800885ec;
extern undefined4 LAB_80088694;
extern undefined4 LAB_80090a7c;
extern undefined4 LAB_80090a4c;
extern undefined4 LAB_80090a64;
extern undefined4 LAB_80090ad4;
extern undefined4 LAB_000000a0;
extern undefined4 SUB_000000b0;
extern undefined4 PATCH_OBJ_44;
extern undefined4 PATCH_OBJ_B4;
extern undefined4 PATCH_OBJ_C8;
extern undefined4 DAT_0000df80;
extern undefined4 *_DAT_0000dffc;
extern undefined4 DAT_80087128;
extern undefined4 LAB_800885ec;
extern undefined4 LAB_80088694;

// Hardware register stubs (PS1 hardware - will be stubbed)
extern uint DMA_MDEC_IN_CHCR;
extern uint DMA_MDEC_OUT_CHCR;
extern uint DMA_MDEC_IN_MADR;
extern uint DMA_MDEC_OUT_MADR;
extern uint DMA_MDEC_IN_BCR;
extern uint DMA_MDEC_OUT_BCR;
extern uint DMA_DPCR;
extern uint MDEC_REG0;
extern uint MDEC_REG1;
extern uint JOY_MCD_CTRL;
extern uint JOY_MCD_MODE;
extern uint JOY_MCD_BAUD;
extern uint JOY_MCD_STAT;
extern bitfield_32_t JOY_MCD_DATA;
extern uint CDROM_REG0;
extern uint CDROM_REG1;
extern uint CDROM_REG2;
extern uint CDROM_REG3;
extern uint _I_STAT;
extern uint _I_MASK;

int FUN_80085858(uint inputValue)

{
  uint baseValue;
  int resultValue;

  baseValue = (int)((inputValue & 0xff00) + 0x2100) >> 1 ^ 0xa000;

  if ((inputValue & 0x100) == 0) {
    resultValue = baseValue - 2;
  }
  else {

    resultValue = (baseValue + 0x20) - (uint)((inputValue & 0xff) < 0x60);
  }

  return resultValue + (inputValue & 0xff);
}

int FUN_80085890(int inputValue)

{
  int baseOffset;

  baseOffset = 0;

  if (0x5a < inputValue) {
    baseOffset = 0x80;

    if (inputValue < 0xa5) {
      return 0x80;
    }

    inputValue = inputValue + -0xa5;
  }

  return (inputValue << 7) / 0x5b + baseOffset;
}

void FUN_80085974(undefined4 param)

{
  code **functionPointer;
  int functionCount;

  FUN_80085990();

  _exit(0);

  functionCount = *(int *)PTR_DAT_800a7110;
  functionPointer = (code **)PTR_DAT_800a7110;

  while (functionCount != 0) {
    PTR_DAT_800a7110 = (undefined *)(functionPointer + 1);
    (**functionPointer)();
    functionPointer = (code **)PTR_DAT_800a7110;
    functionCount = *(int *)PTR_DAT_800a7110;
  }

  PTR_DAT_800a7110 = (undefined *)functionPointer;
  return;
}

void FUN_80085990(void)

{
  code **functionPointer;
  int functionCount;

  functionCount = *(int *)PTR_DAT_800a7110;
  functionPointer = (code **)PTR_DAT_800a7110;

  while (functionCount != 0) {
    PTR_DAT_800a7110 = (undefined *)(functionPointer + 1);
    (**functionPointer)();
    functionPointer = (code **)PTR_DAT_800a7110;
    functionCount = *(int *)PTR_DAT_800a7110;
  }

  PTR_DAT_800a7110 = (undefined *)functionPointer;
  return;
}

void FUN_800859fc(void)

{
  int *currentPointer;
  code *functionToCall;
  int functionCount;
  int offset;
  code **functionArray;

  functionCount = DAT_801c9410;

  if ((DAT_801c9410 == -1) && (functionCount = 0, DAT_801c9414 != 0)) {
    offset = 4;
    do {
      currentPointer = (int *)((int)&DAT_801c9414 + offset);
      functionCount = functionCount + 1;
      offset = offset + 4;
    } while (*currentPointer != 0);
  }

  if (functionCount != 0) {
    functionArray = (code **)(&DAT_801c9410 + functionCount);
    do {
      functionToCall = *functionArray;
      functionArray = functionArray + -1;
      functionCount = functionCount + -1;
      (*functionToCall)();
    } while (functionCount != 0);
  }
  return;
}

void FUN_80085a98(void)

{

  if (DAT_801c93b0 == 0) {
    DAT_801c93b0 = 1;
    FUN_800859fc();
  }
  return;
}

void FUN_80085ac8(int objectPointer, uint typeFlags)

{

  *(undefined **)(objectPointer + 4) = &LAB_80090a7c;

  if ((typeFlags & 1) != 0) {
    FUN_80086060(1);
  }
  return;
}

void FUN_80085b3c(undefined4 *typeInfo, undefined4 typeName, undefined4 additionalInfo)

{
  if (typeInfo != (undefined4 *)0x0) {

    typeInfo[1] = &LAB_80090a7c;
    *typeInfo = typeName;

    typeInfo[1] = &LAB_80090a4c;
    typeInfo[2] = additionalInfo;
  }
  return;
}

void FUN_80085b78(undefined4 *typeInfo, undefined4 typeName)

{
  if (typeInfo != (undefined4 *)0x0) {

    typeInfo[1] = &LAB_80090a7c;
    *typeInfo = typeName;

    typeInfo[1] = &LAB_80090a64;
  }
  return;
}

undefined4 * FUN_80085f74(void)

{

  if (DAT_801f0d20 == 0) {
    FUN_80086020();
    FUN_80085b3c(&DAT_801f0d20, "16__user_type_info", &DAT_801c9408);
  }
  return &DAT_801f0d20;
}

undefined4 * FUN_80086020(void)

{

  if (DAT_801c9408 == 0) {
    FUN_80085b78(&DAT_801c9408, "9type_info");
  }
  return &DAT_801c9408;
}

void FUN_80086060(int typeFlag)

{
  if (typeFlag != 0) {
    FUN_8008de24();
  }
  return;
}

undefined8 FUN_80086084(uint dividendLow, uint dividendHigh, uint divisorLow, uint divisorHigh)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint param_1;
  uint param_2;
  uint param_3;
  uint param_4;

  // Map parameters to local variables for compatibility with decompiled code
  param_1 = dividendLow;
  param_2 = dividendHigh;
  param_3 = divisorLow;
  param_4 = divisorHigh;

  uVar6 = 0;

  if ((int)param_2 < 0) {
    uVar6 = 0xffffffff;
    param_1 = -param_1;
    param_2 = -(uint)(param_1 != 0) - param_2;
  }

  if ((int)param_4 < 0) {
    uVar6 = ~uVar6;
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar5 = (param_3 < 0x100 ^ 1) << 3;
      }
      else {
        iVar5 = 0x18;
        if (param_3 < 0x1000000) {
          iVar5 = 0x10;
        }
      }
      uVar3 = 0x20 - ((uint)(byte)(&DAT_80090ad4)[param_3 >> iVar5] + iVar5);
      if (uVar3 == 0) {
        param_2 = param_2 - param_3;
        uVar8 = 1;
      }
      else {
        param_3 = param_3 << (uVar3 & 0x1f);
        uVar4 = param_2 >> (0x20 - uVar3 & 0x1f);
        uVar7 = param_2 << (uVar3 & 0x1f) | param_1 >> (0x20 - uVar3 & 0x1f);
        param_1 = param_1 << (uVar3 & 0x1f);
        uVar3 = param_3 >> 0x10;
        uVar2 = uVar4 / uVar3;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        uVar9 = uVar2 * (param_3 & 0xffff);
        uVar8 = uVar4 % uVar3 << 0x10 | uVar7 >> 0x10;
        uVar4 = uVar2;
        if (uVar8 < uVar9) {
          uVar8 = uVar8 + param_3;
          uVar4 = uVar2 - 1;
          if ((param_3 <= uVar8) && (uVar8 < uVar9)) {
            uVar4 = uVar2 - 2;
            uVar8 = uVar8 + param_3;
          }
        }
        uVar2 = (uVar8 - uVar9) / uVar3;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        uVar10 = uVar2 * (param_3 & 0xffff);
        param_2 = (uVar8 - uVar9) % uVar3 << 0x10 | uVar7 & 0xffff;
        uVar8 = uVar2;
        if (param_2 < uVar10) {
          param_2 = param_2 + param_3;
          uVar8 = uVar2 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar10)) {
            uVar8 = uVar2 - 2;
            param_2 = param_2 + param_3;
          }
        }
        uVar8 = uVar4 << 0x10 | uVar8;
        param_2 = param_2 - uVar10;
      }
      uVar3 = param_3 >> 0x10;
      uVar7 = param_2 / uVar3;
      if (uVar3 == 0) {
        trap(0x1c00);
      }
      uVar9 = uVar7 * (param_3 & 0xffff);
      uVar2 = param_2 % uVar3 << 0x10 | param_1 >> 0x10;
      uVar4 = uVar7;
      if (uVar2 < uVar9) {
        uVar2 = uVar2 + param_3;
        uVar4 = uVar7 - 1;
        if ((param_3 <= uVar2) && (uVar2 < uVar9)) {
          uVar4 = uVar7 - 2;
          uVar2 = uVar2 + param_3;
        }
      }
      uVar7 = (uVar2 - uVar9) / uVar3;
      if (uVar3 == 0) {
        trap(0x1c00);
      }
      uVar10 = uVar7 * (param_3 & 0xffff);
      uVar2 = (uVar2 - uVar9) % uVar3 << 0x10 | param_1 & 0xffff;
      uVar9 = uVar2 + param_3;
      uVar3 = uVar7;
      if (((uVar2 < uVar10) && (uVar3 = uVar7 - 1, param_3 <= uVar9)) && (uVar9 < uVar10)) {
        uVar3 = uVar7 - 2;
      }
      uVar3 = uVar4 << 0x10 | uVar3;
      goto LAB_80086628;
    }
    if (param_3 < 0x10000) {
      iVar5 = (param_3 < 0x100 ^ 1) << 3;
    }
    else {
      iVar5 = 0x18;
      if (param_3 < 0x1000000) {
        iVar5 = 0x10;
      }
    }
    uVar3 = 0x20 - ((uint)(byte)(&DAT_80090ad4)[param_3 >> iVar5] + iVar5);
    if (uVar3 != 0) {
      param_3 = param_3 << (uVar3 & 0x1f);
      param_2 = param_2 << (uVar3 & 0x1f) | param_1 >> (0x20 - uVar3 & 0x1f);
      param_1 = param_1 << (uVar3 & 0x1f);
    }
    uVar3 = param_3 >> 0x10;
    uVar7 = param_2 / uVar3;
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    uVar8 = uVar7 * (param_3 & 0xffff);
    uVar2 = param_2 % uVar3 << 0x10 | param_1 >> 0x10;
    uVar4 = uVar7;
    if (uVar2 < uVar8) {
      uVar2 = uVar2 + param_3;
      uVar4 = uVar7 - 1;
      if ((param_3 <= uVar2) && (uVar2 < uVar8)) {
        uVar4 = uVar7 - 2;
        uVar2 = uVar2 + param_3;
      }
    }
    uVar7 = (uVar2 - uVar8) / uVar3;
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    uVar9 = uVar7 * (param_3 & 0xffff);
    uVar2 = (uVar2 - uVar8) % uVar3 << 0x10 | param_1 & 0xffff;
    uVar8 = uVar2 + param_3;
    uVar3 = uVar7;
    if (((uVar2 < uVar9) && (uVar3 = uVar7 - 1, param_3 <= uVar8)) && (uVar8 < uVar9)) {
      uVar3 = uVar7 - 2;
    }
    uVar3 = uVar4 << 0x10 | uVar3;
  }
  else if (param_2 < param_4) {
    uVar3 = 0;
  }
  else {
    if (param_4 < 0x10000) {
      iVar5 = (param_4 < 0x100 ^ 1) << 3;
    }
    else {
      iVar5 = 0x18;
      if (param_4 < 0x1000000) {
        iVar5 = 0x10;
      }
    }
    uVar7 = 0x20 - ((uint)(byte)(&DAT_80090ad4)[param_4 >> iVar5] + iVar5);
    uVar3 = 0x20 - uVar7;
    if (uVar7 == 0) {
      uVar3 = 1;
      if ((param_2 <= param_4) && (uVar3 = 0, param_3 <= param_1)) {
        uVar3 = 1;
      }
    }
    else {
      uVar8 = param_4 << (uVar7 & 0x1f) | param_3 >> (uVar3 & 0x1f);
      uVar2 = param_2 >> (uVar3 & 0x1f);
      uVar3 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar3 & 0x1f);
      uVar4 = uVar8 >> 0x10;
      uVar9 = uVar2 / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar11 = uVar9 * (uVar8 & 0xffff);
      uVar10 = uVar2 % uVar4 << 0x10 | uVar3 >> 0x10;
      uVar2 = uVar9;
      if (uVar10 < uVar11) {
        uVar10 = uVar10 + uVar8;
        uVar2 = uVar9 - 1;
        if ((uVar8 <= uVar10) && (uVar10 < uVar11)) {
          uVar2 = uVar9 - 2;
          uVar10 = uVar10 + uVar8;
        }
      }
      uVar9 = (uVar10 - uVar11) / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar12 = uVar9 * (uVar8 & 0xffff);
      uVar4 = (uVar10 - uVar11) % uVar4 << 0x10 | uVar3 & 0xffff;
      uVar3 = uVar9;
      if (uVar4 < uVar12) {
        uVar4 = uVar4 + uVar8;
        uVar3 = uVar9 - 1;
        if ((uVar8 <= uVar4) && (uVar4 < uVar12)) {
          uVar3 = uVar9 - 2;
          uVar4 = uVar4 + uVar8;
        }
      }
      uVar3 = uVar2 << 0x10 | uVar3;
      lVar1 = (ulonglong)uVar3 * (ulonglong)(param_3 << (uVar7 & 0x1f));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar2 <= uVar4 - uVar12) &&
         ((uVar8 = 0, uVar2 != uVar4 - uVar12 || ((uint)lVar1 <= param_1 << (uVar7 & 0x1f)))))
      goto LAB_80086628;
      uVar3 = uVar3 - 1;
    }
  }
  uVar8 = 0;
LAB_80086628:
  if (uVar6 != 0) {
    uVar3 = -uVar3;
    uVar8 = -(uint)(uVar3 != 0) - uVar8;
  }
  return CONCAT44(uVar8, uVar3);
}

void DecDCTReset(int resetMode)

{
  if (resetMode == 0) {
    ResetCallback();
  }
  LIBPRESS_OBJ_2C0(resetMode);
  return;
}

DECDCTENV * DecDCTGetEnv(DECDCTENV *environment)

{
  undefined4 dataValue;
  int counter;
  undefined4 *sourcePointer;
  DECDCTENV *envPointer;
  u_char *iqCPointer;
  short *dctPointer;

  sourcePointer = &DAT_800a7528;
  counter = 0xf;
  envPointer = environment;
  do {
    dataValue = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *(undefined4 *)envPointer->iq_y = dataValue;
    envPointer = (DECDCTENV *)(envPointer->iq_y + 4);
  } while (counter != -1);

  iqCPointer = environment->iq_c;
  sourcePointer = &DAT_800a7568;
  counter = 0xf;
  do {
    dataValue = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *(undefined4 *)iqCPointer = dataValue;
    iqCPointer = iqCPointer + 4;
  } while (counter != -1);

  dctPointer = environment->dct;
  sourcePointer = &DAT_800a75ac;
  counter = 0x1f;
  do {
    dataValue = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *(undefined4 *)dctPointer = dataValue;
    dctPointer = dctPointer + 2;
  } while (counter != -1);

  return environment;
}

DECDCTENV * DecDCTPutEnv(DECDCTENV *environment)

{
  undefined4 dataValue;
  int counter;
  DECDCTENV *envPointer;
  u_char *iqCPointer;
  undefined4 *destinationPointer;

  destinationPointer = &DAT_800a7528;
  counter = 0xf;
  envPointer = environment;
  do {
    iqCPointer = envPointer->iq_y;
    envPointer = (DECDCTENV *)(envPointer->iq_y + 4);
    counter = counter + -1;
    *destinationPointer = *(undefined4 *)iqCPointer;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  destinationPointer = &DAT_800a7568;
  iqCPointer = environment->iq_c;
  counter = 0xf;
  do {
    dataValue = *(undefined4 *)iqCPointer;
    iqCPointer = iqCPointer + 4;
    counter = counter + -1;
    *destinationPointer = dataValue;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  LIBPRESS_OBJ_3B0(&DAT_800a7524, 0x20);
  LIBPRESS_OBJ_3B0(&DAT_800a75a8, 0x20);

  return environment;
}

void DecDCTin(u_long *buffer, int decodeMode)

{

  if ((decodeMode & 1U) != 0) {
    LIBPRESS_OBJ_188(buffer, 0);
    return;
  }

  *buffer = *buffer | 0x8000000;

  if ((decodeMode & 2U) != 0) {
    LIBPRESS_OBJ_1B4((undefined4 *)buffer);
    return;
  }

  *buffer = *buffer & 0xfdffffff;
  LIBPRESS_OBJ_3B0((dword *)buffer, *(undefined2 *)buffer);
  return;
}

void LIBPRESS_OBJ_188(uint *bufferPointer, uint processFlags)

{
  uint hardwareValue = 0;  // Hardware value stub

  *bufferPointer = hardwareValue;

  if ((processFlags & 2) != 0) {
    LIBPRESS_OBJ_1B4((undefined4 *)bufferPointer);
    return;
  }

  *bufferPointer = *bufferPointer & 0xfdffffff;
  LIBPRESS_OBJ_3B0((dword *)bufferPointer, *(undefined2 *)bufferPointer);
  return;
}

void LIBPRESS_OBJ_1B4(undefined4 *bufferPointer)

{
  undefined4 hardwareValue = 0;  // Hardware value stub

  *bufferPointer = hardwareValue;

  LIBPRESS_OBJ_3B0((dword *)bufferPointer, *(undefined2 *)bufferPointer);
  return;
}

void DecDCTout(u_long *outputBuffer, int bufferSize)

{
  LIBPRESS_OBJ_440((dword)outputBuffer, (uint)bufferSize);
  return;
}

int DecDCTinSync(int syncMode)

{
  int syncResult;
  uint hardwareStatus;

  if (syncMode == 0) {
    LIBPRESS_OBJ_4CC();
    LIBPRESS_OBJ_220();
    syncResult = 0;  // LIBPRESS_OBJ_220 returns void
    return syncResult;
  }

  hardwareStatus = LIBPRESS_OBJ_5F4();
  return hardwareStatus >> 0x1d & 1;
}

void LIBPRESS_OBJ_220(void)

{
  return;
}

int DecDCToutSync(int syncMode)

{
  int syncResult;

  if (syncMode == 0) {
    LIBPRESS_OBJ_560();
    LIBPRESS_OBJ_268();
    syncResult = 0;  // LIBPRESS_OBJ_268 returns void
    return syncResult;
  }

  return DMA_MDEC_OUT_CHCR >> 0x18 & 1;
}

void LIBPRESS_OBJ_268(void)

{
  return;
}

int DecDCTinCallback(func *callbackFunction)

{
  int callbackResult;

  callbackResult = DMACallback(0, callbackFunction);
  return callbackResult;
}

int DecDCToutCallback(func *callbackFunction)

{
  int callbackResult;

  callbackResult = DMACallback(1, callbackFunction);
  return callbackResult;
}

void LIBPRESS_OBJ_2C0(int resetMode)

{
  if (resetMode == 0) {

    DMA_MDEC_IN_CHCR = 0;
    DMA_MDEC_OUT_CHCR = 0;
    MDEC_REG1 = 0x60000000;

    LIBPRESS_OBJ_3B0(&DAT_800a7524, 0x20);
    LIBPRESS_OBJ_3B0(&DAT_800a75a8, 0x20);
    LIBPRESS_OBJ_3A0();
    return;
  }

  if (resetMode != 1) {
    LIBPRESS_OBJ_394();
    return;
  }

  DMA_MDEC_IN_CHCR = 0;
  DMA_MDEC_OUT_CHCR = 0;
  MDEC_REG1 = 0x60000000;
  LIBPRESS_OBJ_3A0();
  return;
}

void LIBPRESS_OBJ_394(void)

{
  printf("MDEC_rest:bad option(%d)\n");
  return;
}

void LIBPRESS_OBJ_3A0(void)

{
  return;
}

void LIBPRESS_OBJ_3B0(dword *dataBuffer, uint dataSize)

{
  LIBPRESS_OBJ_4CC();

  DMA_DPCR = DMA_DPCR | 0x88;
  DMA_MDEC_IN_MADR = (dword)(dataBuffer + 1);
  DMA_MDEC_IN_BCR = (dataSize >> 5) << 0x10 | 0x20;
  MDEC_REG0 = *dataBuffer;
  DMA_MDEC_IN_CHCR = 0x1000201;

  return;
}

void LIBPRESS_OBJ_440(dword outputBuffer, uint bufferSize)

{
  LIBPRESS_OBJ_560();

  DMA_DPCR = DMA_DPCR | 0x88;
  DMA_MDEC_OUT_MADR = outputBuffer;
  DMA_MDEC_OUT_BCR = (bufferSize >> 5) << 0x10 | 0x20;
  DMA_MDEC_OUT_CHCR = 0x1000200;

  return;
}

undefined4 LIBPRESS_OBJ_4CC(void)

{
  undefined4 timeoutResult;
  int timeoutCounter;

  timeoutCounter = 0x100000;

  do {

    if ((MDEC_REG1 & 0x20000000) == 0) {
      return 0;
    }
    timeoutCounter = timeoutCounter + -1;
  } while (timeoutCounter != -1);

  LIBPRESS_OBJ_60C("MDEC_in_sync");
  LIBPRESS_OBJ_550();
  timeoutResult = 0;
  return timeoutResult;
}

void LIBPRESS_OBJ_550(void)

{
  return;
}

undefined4 LIBPRESS_OBJ_560(void)

{
  undefined4 timeoutResult;
  int timeoutCounter;

  timeoutCounter = 0x100000;

  do {

    if ((DMA_MDEC_OUT_CHCR & 0x1000000) == 0) {
      return 0;
    }
    timeoutCounter = timeoutCounter + -1;
  } while (timeoutCounter != -1);

  LIBPRESS_OBJ_60C("MDEC_out_sync");
  LIBPRESS_OBJ_5E4();
  timeoutResult = 0;
  return timeoutResult;
}

void LIBPRESS_OBJ_5E4(void)

{
  return;
}

dword LIBPRESS_OBJ_5F4(void)

{
  return MDEC_REG1;
}

undefined4 LIBPRESS_OBJ_60C(undefined4 timeoutMessage)

{
  printf("%s timeout:\n", timeoutMessage);

  DMA_MDEC_IN_CHCR = 0;
  DMA_MDEC_OUT_CHCR = 0;
  MDEC_REG1 = 0x60000000;

  return 0;
}

void InitCARD(long initValue)

{
  int interruptStatus;
  int padInitFlag;

  ChangeClearPAD(0);
  VSync(0);

  FUN_8008c918();
  interruptStatus = 0;
  padInitFlag = ReadInitPadFlag();

  if (padInitFlag == 0) {
    initValue = 0;
  }

  InitCARD2();
  _copy_memcard_patch();
  _patch_card();
  _patch_card2();
  _patch_card_info();

  if (interruptStatus == 1) {
    FUN_8008c948();
  }
  return;
}

long StartCARD(void)

{
  int interruptStatus;

  FUN_8008c918();
  interruptStatus = 0;

  StartCARD2();

  ChangeClearPAD(0);

  if (interruptStatus == 1) {
    FUN_8008c948();
  }
  return 0;
}

long StopCARD(void)

{

  StopCARD2();

  FUN_800870b8();

  return 0;
}

void _bu_init(void)

{

  (*(code *)(void *)&LAB_000000a0)();
  return;
}

long _card_clear(long channelNumber)

{
  long clearResult;

  _new_card();

  clearResult = _card_write(channelNumber, 0x3f, (uchar *)0x0);

  return clearResult;
}

long _card_info(long channelNumber)

{
  long cardInfo;

  (*(code *)(void *)&LAB_000000a0)();
  cardInfo = 0;

  return cardInfo;
}

long _card_read(long channelNumber, long blockNumber, uchar *buffer)

{
  long readResult;

  (*(code *)(void *)&SUB_000000b0)();
  readResult = 0;

  return readResult;
}

long _card_write(long channelNumber, long blockNumber, uchar *buffer)

{
  long writeResult;

  (*(code *)(void *)&SUB_000000b0)();
  writeResult = 0;

  return writeResult;
}

void InitCARD2(void)

{

  (*(code *)(void *)&SUB_000000b0)();
  return;
}

void _patch_card_info(void)

{
  int cardStructure;
  undefined4 returnAddress;

  DAT_801c9598 = returnAddress;

  (*(code *)&SUB_000000b0)();
  cardStructure = 0;

  *(undefined4 *)(*(int *)(cardStructure + 0x16c) + 0x1988) = 0;

  FlushCache();
  return;
}

void _patch_card(void)

{
  int cardStructure;
  undefined4 *patchData;
  undefined4 returnAddress;

  DAT_801c9598 = returnAddress;

  FUN_8008c918();

  (*(code *)&SUB_000000b0)();
  cardStructure = 0;

  _DAT_0000dffc = (undefined4 *)
       (*(int *)(*(int *)(cardStructure + 0x18) + 0x70) * 0x10000 +
        (*(uint *)(*(int *)(cardStructure + 0x18) + 0x74) & 0xffff) + 0x28);

  patchData = &PATCH_OBJ_B4;
  do {
    *_DAT_0000dffc = *patchData;
    patchData = patchData + 1;
    _DAT_0000dffc = _DAT_0000dffc + 1;
  } while (patchData != &PATCH_OBJ_C8);

  FlushCache();
  return;
}

void _patch_card2(void)

{
  int cardStructure;
  undefined4 *patchData;
  undefined4 returnAddress;

  DAT_801c9598 = returnAddress;

  FUN_8008c918();

  (*(code *)(void *)&SUB_000000b0)();
  cardStructure = 0;
  cardStructure = *(int *)(cardStructure + 0x16c);

  patchData = &PATCH_OBJ_C8;
  do {
    *(undefined4 *)(cardStructure + 0x9c8) = *patchData;
    patchData = patchData + 1;
    cardStructure = cardStructure + 4;
  } while (patchData != (undefined4 *)_patch_card);

  FlushCache();
  return;
}

void _copy_memcard_patch(void)

{
  undefined4 *destinationPointer;
  undefined4 *sourcePointer;

  destinationPointer = (undefined4 *)&DAT_0000df80;
  sourcePointer = &PATCH_OBJ_44;

  do {
    *destinationPointer = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    destinationPointer = destinationPointer + 1;
  } while (sourcePointer != &PATCH_OBJ_B4);

  return;
}

void StartCARD2(void)

{

  (*(code *)(void *)&SUB_000000b0)();
  return;
}

void StopCARD2(void)

{

  (*(code *)(void *)&SUB_000000b0)();
  return;
}

void FUN_800870b8(void)

{
  int cardStructure;
  undefined4 *patchData;
  undefined4 returnAddress;

  DAT_801c95a8 = returnAddress;

  FUN_8008c918();

  (*(code *)(void *)&SUB_000000b0)();
  cardStructure = 0;
  cardStructure = *(int *)(cardStructure + 0x18);

  patchData = &DAT_80087128;
  do {
    *(undefined4 *)(cardStructure + 0x70) = *patchData;
    patchData = patchData + 1;
    cardStructure = cardStructure + 4;
  } while (patchData != (undefined4 *)0x80087134);

  FlushCache();
  FUN_8008c948();
  return;
}

void _new_card(void)

{

  (*(code *)(void *)&SUB_000000b0)();
  return;
}

void PadInitDirect(uchar *port1Buffer, uchar *port2Buffer)

{
  int counter;
  undefined *dataPointer;
  int *padStructure;
  int currentPort;
  int portIndex;

  DAT_800a76d4 = 0;
  DAT_800a76e8 = 0;
  _padInitDirPort();

  currentPort = DAT_800a76d0;
  portIndex = 0;
  padStructure = (int *)(DAT_800a76d0 + 0x30);

  *(uchar **)(DAT_800a76d0 + 0x30) = port1Buffer;
  *(uchar **)(currentPort + 0x120) = port2Buffer;

  do {
    dataPointer = (undefined *)(currentPort + 0x5d);
    padStructure[-9] = 0;
    padStructure[-8] = currentPort;
    *(undefined *)*padStructure = 0xff;

    counter = 5;
    *(undefined *)(*padStructure + 1) = 0;

    do {
      *dataPointer = 0xff;
      counter = counter + -1;
      dataPointer = dataPointer + 1;
    } while (-1 < counter);

    portIndex = portIndex + 1;
    padStructure = padStructure + 0x3c;
    currentPort = currentPort + 0xf0;
  } while (portIndex < 2);

  DAT_800a76d4 = 1;
  return;
}

void PadStartCom(void)

{
  DAT_800a76d4 = 0;
  FUN_8008c918();

  SysDeqIntRP(2, &DAT_800a76fc);
  SysEnqIntRP(2, &DAT_800a76fc);

  _I_STAT = 0xfffffffe;
  _I_MASK = _I_MASK | 1;
  ChangeClearRCnt(3, 0);

  FUN_8008c948();

  if (DAT_800a76a0 != NULL) {
    (*DAT_800a76a0)((undefined4 *)DAT_800a76d0);
  }
  if (DAT_800a76a0 != NULL) {
    (*DAT_800a76a0)((undefined4 *)(DAT_800a76d0 + 0xf0));
  }

  DAT_801c9424 = 0;
  DAT_801c9420 = 0;
  DAT_800a76d4 = 1;
  return;
}

void PadStopCom(void)

{
  FUN_8008c918();
  ChangeClearRCnt(3, 1);
  SysDeqIntRP(2, &DAT_800a76fc);
  FUN_8008c948();
  return;
}

int PadGetState(int portNumber)

{
  byte padState;
  int padStructure;
  uint returnState;

  padStructure = (int)(*DAT_800a76b0)(0);

  if ((((*(char *)(padStructure + 0x37) == '\0') && (*(char *)(padStructure + 0x38) == '\0')) &&
      ((padStructure == *(int *)(padStructure + 0x10) || (*(char *)(padStructure + 0x39) == '\0')))) &&
     (**(char **)(padStructure + 0x30) == '\0')) {

    returnState = (uint)*(byte *)(padStructure + 0x49);
  }
  else {

    padState = *(byte *)(padStructure + 0x49);

    if (padState == 3) {
      PDENT2_OBJ_BC();
      returnState = 3;  // PDENT2_OBJ_BC returns void
      return returnState;
    }

    if (padState < 4) {
      returnState = 1;
      if (padState != 2) {
        returnState = (uint)PDENT2_OBJ_B8();
        return returnState;
      }
    }
    else {
      returnState = 4;
      if (padState != 6) {
        returnState = (uint)PDENT2_OBJ_B8();
        return returnState;
      }
    }
  }
  return returnState;
}

undefined PDENT2_OBJ_B8(void)

{
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure from context

  return *(undefined *)(padStructure + 0x49);
}

void PDENT2_OBJ_BC(void)

{
  return;
}

int PadInfoAct(int portNumber, int actionIndex, int infoType)

{
  int padStructure;

  padStructure = (int)(*DAT_800a76b0)(0);

  if (-1 < actionIndex) {
    if (actionIndex < (int)(uint)*(byte *)(padStructure + 0xe9)) {

      switch(infoType) {
      case 1:
        PDENT4_OBJ_C0();
        return 0;  // PDENT4_OBJ_C0 returns void
      case 2:
        PDENT4_OBJ_C0();
        return 0;  // PDENT4_OBJ_C0 returns void
      case 3:
        PDENT4_OBJ_C0();
        return 0;  // PDENT4_OBJ_C0 returns void
      case 4:
        PDENT4_OBJ_C0();
        return 0;  // PDENT4_OBJ_C0 returns void
      case 5:
        PDENT4_OBJ_C0();
        return 0;  // PDENT4_OBJ_C0 returns void
      }
    }
    return 0;
  }

  PDENT4_OBJ_C0();
  return 0;  // PDENT4_OBJ_C0 returns void
}

void PDENT4_OBJ_80(void)

{
  PDENT4_OBJ_C0();
  return;
}

void PDENT4_OBJ_8C(void)

{
  PDENT4_OBJ_C0();
  return;
}

void PDENT4_OBJ_98(void)

{
  PDENT4_OBJ_C0();
  return;
}

void PDENT4_OBJ_A4(void)

{
  PDENT4_OBJ_C0();
  return;
}

void PDENT4_OBJ_B0(void)

{
  PDENT4_OBJ_C0();
  return;
}

void PDENT4_OBJ_C0(void)

{
  return;
}

void PadSetAct(int portNumber, uchar *actionData, int actionType)

{
  int padStructure;

  padStructure = (int)(*DAT_800a76b0)(0);
  *(uchar **)(padStructure + 0x28) = actionData;
  *(char *)(padStructure + 0x34) = (char)actionType;
  return;
}

int PadSetActAlign(int portNumber, uchar *actionData)

{
  int padStructure;
  int alignmentResult;

  padStructure = (int)(*DAT_800a76b0)(0);

  alignmentResult = (*DAT_800a76b8)(padStructure);

  if (alignmentResult == 0) {

    *(undefined *)(padStructure + 0x46) = 1;
    *(code **)(padStructure + 0x14) = PDCMD2_OBJ_7C;
    *(uchar **)(padStructure + 0x20) = actionData;
    *(code **)(padStructure + 0x18) = PDCMD2_OBJ_A4;
  }

  return (uint)(alignmentResult == 0);
}

void PDCMD2_OBJ_7C(int padStructure)

{

  FUN_800881dc(padStructure, 0x4d, *(undefined4 *)(padStructure + 0x20), 6);
  return;
}

undefined4 PDCMD2_OBJ_A4(int padStructure)

{
  byte dataByte;
  undefined4 errorResult;
  int counter;
  int index;
  byte *dataBuffer;
  int matchCount;
  uint actionIndex;
  uint expectedCount;
  int dataOffset;

  actionIndex = 0;

  if (*(char *)(padStructure + 0xe9) != '\0') {
    dataOffset = 0;

    do {

      dataBuffer = *(byte **)(padStructure + 0x20);
      matchCount = 0;
      counter = 5;

      do {
        dataByte = *dataBuffer;
        dataBuffer = dataBuffer + 1;
        if (dataByte == actionIndex) {
          matchCount = matchCount + 1;
        }
        counter = counter + -1;
      } while (-1 < counter);

      expectedCount = (uint)*(byte *)(dataOffset + *(int *)(padStructure + 4) + 2);

      dataBuffer = *(byte **)(padStructure + 0x20);
      index = 0;
      counter = padStructure;

      if (expectedCount == 0) {
        expectedCount = 1;
      }

      do {
        dataByte = *dataBuffer;
        dataBuffer = dataBuffer + 1;

        if (dataByte == actionIndex) {

          if (matchCount < (int)expectedCount) {
            *(undefined *)(counter + 0x5d) = 0xff;
            errorResult = PDCMD2_OBJ_138(padStructure, dataBuffer, index, matchCount);
            return errorResult;
          }
          *(char *)(counter + 0x5d) = (char)actionIndex;
        }

        index = index + 1;
        counter = counter + 1;
      } while (index < 6);

      actionIndex = actionIndex + 1;
      dataOffset = dataOffset + 5;
    } while ((int)actionIndex < (int)(uint)*(byte *)(padStructure + 0xe9));
  }

  *(undefined *)(padStructure + 0x46) = 0xfe;
  return 0;
}

undefined4 PDCMD2_OBJ_138(int padStructure, byte *dataBuffer, int bufferIndex, int matchCount)

{
  byte dataByte;
  undefined4 errorResult;
  int counter;
  int currentIndex = bufferIndex;  // Initialize current index
  byte *bufferPointer;
  uint actionIndex = 0;  // Initialize action index
  uint expectedCount;
  int dataOffset = 0;  // Initialize data offset
  undefined errorCode = 0xff;  // Initialize error code

  while( true ) {
    do {
      currentIndex = currentIndex + 1;
      bufferIndex = bufferIndex + 1;

      if (5 < currentIndex) {
        actionIndex = actionIndex + 1;
        dataOffset = dataOffset + 5;

        if ((int)(uint)*(byte *)(padStructure + 0xe9) <= (int)actionIndex) {
          *(undefined *)(padStructure + 0x46) = 0xfe;
          return 0;
        }

        bufferPointer = *(byte **)(padStructure + 0x20);
        matchCount = 0;
        counter = 5;

        do {
          dataByte = *bufferPointer;
          bufferPointer = bufferPointer + 1;
          if (dataByte == actionIndex) {
            matchCount = matchCount + 1;
          }
          counter = counter + -1;
        } while (-1 < counter);

        expectedCount = (uint)*(byte *)(dataOffset + *(int *)(padStructure + 4) + 2);
        dataBuffer = *(byte **)(padStructure + 0x20);
        currentIndex = 0;
        bufferIndex = padStructure;

        if (expectedCount == 0) {
          expectedCount = 1;
        }
      }

      dataByte = *dataBuffer;
      dataBuffer = dataBuffer + 1;
    } while (dataByte != actionIndex);

    if (matchCount < (int)expectedCount) break;

    *(char *)(bufferIndex + 0x5d) = (char)actionIndex;
  }

  *(undefined *)(bufferIndex + 0x5d) = errorCode;
  errorResult = PDCMD2_OBJ_138(padStructure, dataBuffer, bufferIndex, matchCount);
  return errorResult;
}

undefined4 FUN_80087860(int padStructure)

{
  code_int callbackFunction;
  int timeoutCounter;
  undefined4 baudRate;

  JOY_MCD_CTRL = 0;
  JOY_MCD_MODE = 0xd;
  JOY_MCD_BAUD = 0x88;

  baudRate = 0x91;

  if (*(char *)(padStructure + 0xe8) == '\b') {
    baudRate = 0x50;
  }

  FUN_80088b34(baudRate);
  JOY_MCD_CTRL = 0x1003;

  if (DAT_800a76dc != 0) {
    JOY_MCD_CTRL = 0x3003;
  }

  timeoutCounter = *(int *)(&DAT_800a76f4 + DAT_800a76dc * 4);
  callbackFunction = DAT_800a76bc;

  if (-1 < timeoutCounter) {

    while (DAT_800a76bc = callbackFunction, 0 < timeoutCounter) {
      timeoutCounter = *(int *)(&DAT_800a76f4 + DAT_800a76dc * 4) + -1;
      *(int *)(&DAT_800a76f4 + DAT_800a76dc * 4) = timeoutCounter;
      if (DAT_800a76bc != NULL) {
        (*DAT_800a76bc)(*(int *)(padStructure + 0xc) + timeoutCounter * 0xf0);
      }
      callbackFunction = DAT_800a76bc;
      timeoutCounter = *(int *)(&DAT_800a76f4 + DAT_800a76dc * 4);
    }

    if (*(int *)(&DAT_800a76f4 + DAT_800a76dc * 4) == 0) {
      *(int *)(&DAT_800a76f4 + DAT_800a76dc * 4) = -1;
      if (callbackFunction != NULL) {
        (*callbackFunction)(padStructure);
      }
      if (DAT_800a76c0 != NULL) {
        (*DAT_800a76c0)(padStructure);
      }
    }
  }

  if (((ushort)JOY_MCD_STAT & 0x200) != 0) {
    JOY_MCD_CTRL = JOY_MCD_CTRL | 0x10;

    if (((ushort)JOY_MCD_STAT & 0x200) != 0) {

      do {
        timeoutCounter = FUN_80088b54();
      } while (timeoutCounter == 0);

      JOY_MCD_DATA.bytes._0_1_ = 1;
      FUN_80088b34(2000);
      timeoutCounter = FUN_80088124();
      if (timeoutCounter == 0) {
        return 0;
      }

      FUN_800881b4();
      FUN_80088b34(0x1ae);

      do {
        if ((_I_STAT & 0x80) != 0) {

          JOY_MCD_DATA.bytes._0_1_ = 0x42;
          FUN_80088b34(0x1ae);  // FUN_80088b34 requires parameter
          timeoutCounter = FUN_80088124();
          if (timeoutCounter == 0) {
            return 0;
          }

          FUN_800881b4();
          FUN_80088b34(0x1ae);

          do {
            if ((_I_STAT & 0x80) != 0) {

              JOY_MCD_DATA.bytes._0_1_ = 1;
              FUN_80088b34(0x1ae);  // FUN_80088b34 requires parameter
              timeoutCounter = FUN_80088124();
              if (timeoutCounter == 0) {
                return 0;
              }
              FUN_800881b4();
              return 0;
            }
            timeoutCounter = FUN_80088b54() ? 1 : 0;  // FUN_80088b54 returns bool, no parameter
          } while (timeoutCounter == 0);
          return 0;
        }
        timeoutCounter = FUN_80088b54() ? 1 : 0;  // FUN_80088b54 returns bool, no parameter
      } while (timeoutCounter == 0);
      return 0;
    }
    _I_STAT = 0xffffff7f;
  }

  if (*(char *)(padStructure + 0x50) == '\0') {
    return 1;
  }
  if (*(char *)(padStructure + 0x37) != '\0') {
    return 0;
  }
  return 1;
}

void FUN_80087b94(int padStructure)

{
  code **commandFunction;
  int commandResult;

  commandFunction = (code **)((char *)&PTR_LAB_800a7724 + DAT_800a76e0 * sizeof(code *));
  DAT_800a76e0 = DAT_800a76e0 + 1;

  if (commandFunction != NULL && *commandFunction != NULL) {
    (**commandFunction)();
    commandResult = 0;
  } else {
    commandResult = 0;
  }

  if (commandResult < 0) {
    if (DAT_800a769c != NULL) {
      (*DAT_800a769c)(commandResult);
    }
  }
  else {

    if ((DAT_800a76e0 != 0) && ((DAT_800a76e0 != 3 || (**(char **)(padStructure + 0x3c) != -0x80)))) {

      FUN_80088b34(0x3c);
      commandResult = FUN_80088124();
      if (commandResult == 0) {
        if (DAT_800a769c != NULL) {
          (*DAT_800a769c)(0xfffffffd);
        }
      }
    }

    if (4 < DAT_800a76e0) {
      DAT_800a76e0 = DAT_800a76e0 + -1;
    }
  }
  return;
}

uint FUN_80087c84(int padStructure, int dataValue)

{
  byte receivedData;
  byte dataByte;
  byte responseData;
  int timeoutResult;
  uint interruptStatus;
  word baudRate;

  receivedData = (byte)JOY_MCD_DATA.value;
  dataByte = (byte)dataValue;

  if (dataValue < 0) {

    *(undefined *)(padStructure + 0x44) = 0xff;
    *(undefined *)(padStructure + 0x45) = 1;
    **(byte **)(padStructure + 0x40) = ~dataByte;

    do {
    } while (((ushort)JOY_MCD_STAT & 1) == 0);

    do {
      timeoutResult = FUN_80088b54();
      responseData = ~dataByte;
    } while (timeoutResult == 0);
  }
  else {

    baudRate = 0x88;

    if (((int)(uint)**(byte **)(padStructure + 0x3c) >> 4 == 8) && (8 < *(byte *)(padStructure + 0x44))) {
      baudRate = 0x22;
    }

    DAT_801c95bc = (uint)(ushort)TMR_SYSCLOCK_VAL;
    DAT_801c95c4 = (uint)(ushort)TMR_SYSCLOCK_MODE._0_2_;
    DAT_801c95c0 = 0x1ae;

    do {
    } while (((ushort)JOY_MCD_STAT & 2) == 0);

    interruptStatus = _I_STAT & 0x80;
    JOY_MCD_BAUD = baudRate;

    while (interruptStatus == 0) {
      timeoutResult = FUN_80088b54();
      if (timeoutResult != 0) {
        return 0xffffffec;
      }
      interruptStatus = _I_STAT & 0x80;
    }

    if (baudRate == 0x22) {
      _I_STAT = 0xffffff7f;
      JOY_MCD_CTRL = JOY_MCD_CTRL | 0x10;
    }

    JOY_MCD_DATA.bytes._0_1_ = dataByte;
    *(char *)(padStructure + 0x45) = *(char *)(padStructure + 0x45) + '\x01';

    *(byte *)(*(int *)(padStructure + 0x3c) + (uint)*(byte *)(padStructure + 0x44)) = receivedData;
    *(char *)(padStructure + 0x44) = *(char *)(padStructure + 0x44) + '\x01';

    responseData = (byte)JOY_MCD_DATA.value;
  }

  JOY_MCD_DATA.bytes._0_1_ = responseData;
  return (uint)receivedData;
}

uint FUN_80087ea8(int padStructure, undefined dataByte)

{
  byte receivedData;
  uint dataValue;
  uint currentTime;
  int timeDifference;
  word baudRate;

  baudRate = 0x88;

  if (((int)(uint)**(byte **)(padStructure + 0x3c) >> 4 == 8) && (8 < *(byte *)(padStructure + 0x44))) {
    baudRate = 0x22;
  }

  do {
  } while (((ushort)JOY_MCD_STAT & 2) == 0);

  FUN_80088b34(400);

  receivedData = (byte)JOY_MCD_DATA.value;
  dataValue = (uint)(byte)JOY_MCD_DATA.value;
  JOY_MCD_BAUD = baudRate;

  if ((*(char *)(padStructure + 0x44) == '\0') && ((int)dataValue >> 4 == 8)) {
    JOY_MCD_BAUD = 0x22;
  }

  do {

    if ((_I_STAT & 0x80) != 0) {

      if ((*(char *)(padStructure + 0xe8) != '\b') && (DAT_800a76e0 == 2)) {
        FUN_80088b34(0x3c);
        do {
          timeDifference = FUN_80088b54();
        } while (timeDifference == 0);
      }

      if ((DAT_800a76e0 == 3) && (dataValue == 0x80)) {
        _I_STAT = 0xffffff7f;
        JOY_MCD_CTRL = JOY_MCD_CTRL | 0x10;
      }

      JOY_MCD_DATA.bytes._0_1_ = dataByte;
      *(char *)(padStructure + 0x45) = *(char *)(padStructure + 0x45) + '\x01';

      if (*(char *)(padStructure + 0x44) != -1) {
        *(byte *)(*(int *)(padStructure + 0x3c) + (uint)*(byte *)(padStructure + 0x44)) = receivedData;
      }
      *(char *)(padStructure + 0x44) = *(char *)(padStructure + 0x44) + '\x01';
      return dataValue;
    }

    currentTime = (uint)(ushort)TMR_SYSCLOCK_VAL;
    if ((int)currentTime < DAT_801c95bc) {

      if ((ushort)TMR_SYSCLOCK_MAX._0_2_ == 0) {
        currentTime = currentTime + 0x10000;
      }
      else {
        currentTime = (ushort)TMR_SYSCLOCK_MAX._0_2_ + currentTime;
      }
    }

    timeDifference = currentTime - DAT_801c95bc;

    if (((ushort)TMR_SYSCLOCK_MODE._0_2_ & 0x200) == 0) {
      timeDifference = timeDifference >> 3;
    }
  } while (timeDifference < DAT_801c95c0);

  return 0xfffffffe;
}

void FUN_80088000(int startTime, int timeoutValue, ushort *timerValue, ushort *timerMode)

{
  uint currentTime;
  int timeDifference;
  uint *statusRegister = &_I_STAT;  // Initialize status register pointer
  ushort *timerRegister = timerValue;  // Initialize timer register pointer
  int timerMax = (ushort)TMR_SYSCLOCK_MAX._0_2_;  // Initialize timer max
  int padStructure = 0;  // Initialize pad structure (will be set from context)
  int dataValue = 0;  // Initialize data value
  undefined dataByte = 0;  // Initialize data byte

  timeDifference = 0;  // Initialize time difference

  do {

    if (timeoutValue <= timeDifference) {
      return;
    }

    while( true ) {

      if ((*statusRegister & 0x80) != 0) {

        if ((*(char *)(padStructure + 0xe8) != '\b') && (DAT_800a76e0 == 2)) {
          FUN_80088b34(0x3c);
          do {
            timeDifference = FUN_80088b54();
          } while (timeDifference == 0);
        }

        if ((DAT_800a76e0 == 3) && (dataValue == 0x80)) {
          _I_STAT = 0xffffff7f;
          JOY_MCD_CTRL = JOY_MCD_CTRL | 0x10;
        }

        JOY_MCD_DATA.bytes._0_1_ = dataByte;
        *(char *)(padStructure + 0x45) = *(char *)(padStructure + 0x45) + '\x01';

        if (*(char *)(padStructure + 0x44) != -1) {
          *(char *)(*(int *)(padStructure + 0x3c) + (uint)*(byte *)(padStructure + 0x44)) = (char)dataValue;
        }
        *(char *)(padStructure + 0x44) = *(char *)(padStructure + 0x44) + '\x01';
        return;
      }

      currentTime = (uint)*timerRegister;
      if ((int)currentTime < startTime) {

        if (*timerValue == 0) {
          currentTime = currentTime + timerMax;
        }
        else {
          currentTime = *timerValue + currentTime;
        }
      }

      timeDifference = currentTime - startTime;

      if ((*timerMode & 0x200) != 0) break;
      if (timeoutValue <= timeDifference >> 3) {
        return;
      }
    }
  } while( true );
}

undefined4 FUN_80088124(void)

{
  ushort statusFlag;
  int timeoutResult;

  _I_STAT = 0xffffff7f;
  statusFlag = (ushort)JOY_MCD_STAT & 0x80;

  while( true ) {
    if (statusFlag == 0) {

      JOY_MCD_CTRL = JOY_MCD_CTRL | 0x10;
      return 1;
    }

    timeoutResult = FUN_80088b54();
    if (timeoutResult != 0) break;

    statusFlag = (ushort)JOY_MCD_STAT & 0x80;
  }
  return 0;
}

void FUN_800881b4(void)

{

  do {
  } while (((ushort)JOY_MCD_STAT & 2) == 0);
  return;
}

void FUN_800881dc(int padStructure, undefined commandByte, undefined4 dataPointer, undefined statusByte)

{
  *(undefined *)(padStructure + 0x37) = commandByte;
  *(undefined4 *)(padStructure + 0x2c) = dataPointer;
  *(undefined *)(padStructure + 0x36) = statusByte;
  return;
}

void FUN_800881ec(int padStructure)

{
  byte currentState;

  currentState = *(byte *)(padStructure + 0x46);

  if (currentState == 3) {

    FUN_80088ac0(padStructure, *(undefined *)(padStructure + 0xe4));
  }
  else if (currentState < 4) {
    if (currentState == 2) {

      FUN_80088aac(padStructure);
    }
  }
  else if (currentState == 4) {

    FUN_80088b00(padStructure, *(undefined *)(padStructure + 0x47));
  }
  return;
}

undefined4 FUN_80088270(int padStructure)

{
  byte currentState;
  undefined dataByte;
  byte statusByte;
  short checksumValue;
  int dataBuffer;

  currentState = *(byte *)(padStructure + 0x46);

  if (currentState == 3) {

    dataBuffer = *(int *)(padStructure + 0x3c);

    if (*(char *)(dataBuffer + 2) != '\0') {
      return 0;
    }
    if (*(char *)(dataBuffer + 3) != '\0') {
      return 0;
    }

    checksumValue = (ushort)*(byte *)(dataBuffer + 5) + (ushort)*(byte *)(dataBuffer + 4) * 0x100;
    *(short *)(padStructure + 0xe6) = checksumValue;

    if (*(short *)(padStructure + 0xee) == checksumValue) {
      *(undefined2 *)(padStructure + 0xee) = 0xffff;
      *(undefined *)(padStructure + 0xeb) = 0;
      *(undefined *)(padStructure + 0x47) = 0;
      return 1;
    }
    *(short *)(padStructure + 0xee) = checksumValue;
  }
  else if (currentState < 4) {
    if (currentState != 2) {
      return 1;
    }

    dataBuffer = *(int *)(padStructure + 0x3c);

    if (*(char *)(dataBuffer + 7) != '\0') {
      return 0;
    }

    if ((((*(char *)(padStructure + 0xe3) == *(char *)(dataBuffer + 3)) &&
         (*(char *)(padStructure + 0xe4) == *(char *)(dataBuffer + 4))) &&
        (*(char *)(padStructure + 0xe9) == *(char *)(dataBuffer + 5))) &&
       (*(char *)(padStructure + 0xea) == *(char *)(dataBuffer + 6))) {
      *(undefined2 *)(padStructure + 0xee) = 0;
    }
    else {
      *(undefined2 *)(padStructure + 0xee) = 0xffff;
    }

    *(undefined *)(padStructure + 0xe3) = *(undefined *)(*(int *)(padStructure + 0x3c) + 3);
    dataByte = *(undefined *)(*(int *)(padStructure + 0x3c) + 4);
    *(undefined2 *)(padStructure + 0xe6) = 0;
    *(undefined *)(padStructure + 0xe4) = dataByte;
    *(undefined *)(padStructure + 0xe9) = *(undefined *)(*(int *)(padStructure + 0x3c) + 5);
    dataByte = *(undefined *)(*(int *)(padStructure + 0x3c) + 6);
    *(undefined2 *)(padStructure + 0xec) = 0;
    *(undefined *)(padStructure + 0xea) = dataByte;

    if (*(short *)(padStructure + 0xee) == 0) {
      *(undefined *)(padStructure + 0xeb) = 0;
      return 1;
    }
  }
  else {
    if (currentState != 4) {
      return 1;
    }

    dataBuffer = *(int *)(padStructure + 0x3c);

    if (*(char *)(dataBuffer + 2) != '\0') {
      return 0;
    }
    if (*(char *)(dataBuffer + 3) != '\0') {
      return 0;
    }

    statusByte = *(byte *)(dataBuffer + 4);
    dataByte = *(char *)(padStructure + 0x47) + 1;
    *(byte *)(padStructure + 0x47) = dataByte;

    *(ushort *)(padStructure + 0xec) = *(short *)(padStructure + 0xec) + 8 + (statusByte + 3 & 0x1fc);

    if (*(byte *)(padStructure + 0xea) <= dataByte) {
      dataBuffer = FUN_800884e0(padStructure);
      if (dataBuffer < 0x81) {
        if (*(short *)(padStructure + 0xee) != *(short *)(padStructure + 0xec)) {
          *(short *)(padStructure + 0xee) = *(short *)(padStructure + 0xec);
          *(undefined *)(padStructure + 0x47) = 0;
          *(undefined2 *)(padStructure + 0xec) = 0;
          return 0;
        }
        *(undefined2 *)(padStructure + 0xee) = 0;
        *(undefined *)(padStructure + 0xeb) = 0;
        *(undefined *)(padStructure + 0x46) = 0xff;
        FUN_80088518((int *)padStructure, (int)padStructure + 99);
        *(undefined *)(padStructure + 0x46) = 2;
      }
      else {
        (*DAT_800a76a0)(padStructure);
        *(undefined *)(padStructure + 0x46) = 0xfe;
        *(undefined *)(padStructure + 0x49) = 2;
      }
    }
  }
  return 0;
}

int FUN_800884e0(int padStructure)

{

  return ((int)(*(byte *)(padStructure + 0xe3) + 1) >> 1) * 4 +
         ((uint)*(byte *)(padStructure + 0xe9) * 5 + 3 & 0xffc) + 4 + (uint)*(ushort *)(padStructure + 0xec);
}

undefined4 FUN_80088518(int *padStructure, int bufferSize)

{
  int alignmentResult;

  if (bufferSize != 0) {

    if (padStructure[1] != 0) {
      return 0;
    }

    alignmentResult = (*DAT_800a76b8)(padStructure);
    if (alignmentResult == 0) {

      *(undefined *)((int)padStructure + 0x49) = 4;
      *(undefined *)((int)padStructure + 0x46) = 1;

      padStructure[5] = (int)&LAB_800885ec;
      padStructure[6] = (int)&LAB_80088694;

      alignmentResult = (bufferSize + 3 >> 2) * 4;
      *padStructure = alignmentResult;
      *(undefined *)((int)padStructure + 0x47) = 0;

      alignmentResult = alignmentResult + ((int)(*(byte *)((int)padStructure + 0xe3) + 1) >> 1) * 4;
      padStructure[1] = alignmentResult;
      padStructure[2] = alignmentResult + ((uint)*(byte *)((int)padStructure + 0xe9) * 5 + 3 & 0xffc);

      return 1;
    }
  }
  return 0;
}

void FUN_80088a8c(int padStructure, undefined commandByte)

{
  *(undefined *)(padStructure + 0x37) = 0x43;
  *(int *)(padStructure + 0x2c) = padStructure + 0x24;
  *(undefined *)(padStructure + 0x24) = commandByte;
  *(undefined *)(padStructure + 0x36) = 1;
  return;
}

void FUN_80088aac(int padStructure)

{
  *(undefined *)(padStructure + 0x37) = 0x45;
  *(undefined4 *)(padStructure + 0x2c) = 0;
  *(undefined *)(padStructure + 0x36) = 0;
  return;
}

void FUN_80088ac0(int padStructure, undefined commandByte)

{

  *(undefined *)(padStructure + 0x37) = 0x4c;
  *(int *)(padStructure + 0x2c) = padStructure + 0x24;
  *(undefined *)(padStructure + 0x24) = commandByte;
  *(undefined *)(padStructure + 0x36) = 1;
  return;
}

void FUN_80088ae0(int padStructure, undefined commandByte)

{
  *(undefined *)(padStructure + 0x37) = 0x46;
  *(int *)(padStructure + 0x2c) = padStructure + 0x24;
  *(undefined *)(padStructure + 0x24) = commandByte;
  *(undefined *)(padStructure + 0x36) = 1;
  return;
}

void FUN_80088b00(int padStructure, undefined commandByte)

{
  *(undefined *)(padStructure + 0x37) = 0x47;
  *(int *)(padStructure + 0x2c) = padStructure + 0x24;
  *(undefined *)(padStructure + 0x24) = commandByte;
  *(undefined *)(padStructure + 0x36) = 1;
  return;
}

void FUN_80088b20(int padStructure)

{
  *(undefined *)(padStructure + 0x37) = 0x4b;
  *(undefined4 *)(padStructure + 0x2c) = 0;
  *(undefined *)(padStructure + 0x36) = 0;
  return;
}

void FUN_80088b34(undefined4 timeoutValue)

{
  DAT_801c95c0 = timeoutValue;
  DAT_801c95bc = (uint)(ushort)TMR_SYSCLOCK_VAL;
  return;
}

bool FUN_80088b54(void)

{
  int timeDifference;
  uint currentTime;

  currentTime = (uint)(ushort)TMR_SYSCLOCK_VAL;

  if ((int)currentTime < DAT_801c95bc) {
    if ((ushort)TMR_SYSCLOCK_MAX._0_2_ == 0) {
      currentTime = currentTime + 0x10000;
    }
    else {
      currentTime = currentTime + (ushort)TMR_SYSCLOCK_MAX._0_2_;
    }
  }

  if (((ushort)TMR_SYSCLOCK_MODE._0_2_ & 0x200) == 0) {
    timeDifference = (int)(currentTime - DAT_801c95bc) >> 3;
  }
  else {
    timeDifference = currentTime - DAT_801c95bc;
  }

  return DAT_801c95c0 <= timeDifference;
}

void _padInitDirPort(void)

{

  bzero(&DAT_801c95c8, 0x1e0);

  DAT_801c9604 = &DAT_801c97a8;
  DAT_801c9608 = &DAT_801c97f0;
  DAT_801c96f4 = &DAT_801c97cb;
  DAT_801c96f8 = &DAT_801c9813;
  DAT_800a76d0 = &DAT_801c95c8;

  DAT_800a769c = PDDIRRES_OBJ_158;
  DAT_800a76a0 = PDDIRRES_OBJ_F0;
  DAT_800a76a4 = PDDIRRES_OBJ_25C;
  DAT_800a76a8 = PDDIRRES_OBJ_318;
  DAT_800a76b0 = PDDIRRES_OBJ_594;
  DAT_800a76c0 = PDDIRRES_OBJ_24C;
  DAT_800a76b4 = PDDIRRES_OBJ_5B4;
  DAT_800a76b8 = PDDIRRES_OBJ_A10;
  DAT_800a76bc = PDDIRRES_OBJ_6C4;

  return;
}

void PDDIRRES_OBJ_F0(undefined4 *padStructure)

{
  int counter;
  undefined *dataPointer;

  if (*(char *)((int)padStructure + 0x49) != '\0') {
    dataPointer = (undefined *)((int)padStructure + 0x5d);
    counter = 5;

    *(undefined *)((int)padStructure + 0x49) = 0;
    *(undefined *)((int)padStructure + 0x46) = 0;
    *(undefined2 *)((int)padStructure + 0xe6) = 0;
    padStructure[5] = 0;
    padStructure[6] = 0;
    *(undefined *)((int)padStructure + 0xe3) = 0;
    *(undefined *)(padStructure + 0x39) = 0;
    *(undefined2 *)((int)padStructure + 0xe6) = 0;
    *(undefined *)((int)padStructure + 0xe9) = 0;
    *(undefined *)((int)padStructure + 0xea) = 0;
    *padStructure = 0;
    padStructure[1] = 0;
    padStructure[2] = 0;

    do {
      *dataPointer = 0xff;
      counter = counter + -1;
      dataPointer = dataPointer + 1;
    } while (-1 < counter);
  }
  return;
}

void PDDIRRES_OBJ_158(int errorCode)

{
  int structureOffset;

  structureOffset = DAT_800a76dc * 0xf0;

  if (errorCode != -9) {
    if (errorCode == 0) {

      *(undefined4 *)(&DAT_800a76f4 + DAT_800a76dc * 4) = 0;
      PDDIRRES_OBJ_1CC();
      return;
    }

    _dirFailAuto(&DAT_801c95c8 + structureOffset);
    PDDIRRES_OBJ_24C(&DAT_801c95c8 + structureOffset);
  }

  DAT_800a76e0 = 0;
  JOY_MCD_CTRL = 0;
  DAT_800a76dc = DAT_800a76dc + 1;

  if (1 < DAT_800a76dc) {
    return;
  }

  FUN_80087860(&DAT_801c95c8 + DAT_800a76dc * 0xf0);
  PDDIRRES_OBJ_228(0, 0);  // PDDIRRES_OBJ_228 requires parameters
  return;
}

void PDDIRRES_OBJ_1CC(void)

{
  int structureBase = (int)&DAT_801c95c8;  // Initialize structure base

  DAT_800a76e0 = 0;
  JOY_MCD_CTRL = 0;
  DAT_800a76dc = DAT_800a76dc + 1;

  if (1 < DAT_800a76dc) {
    return;
  }

  structureBase = DAT_800a76dc * 0xf0 + structureBase;
  FUN_80087860(structureBase);
  PDDIRRES_OBJ_228(0, 0);
  return;
}

void PDDIRRES_OBJ_228(undefined4 statusValue, int errorCode)

{
  int loopFlag = 0;  // Initialize loop flag
  int structureOffset;
  int structureBase = (int)&DAT_801c95c8;  // Initialize structure base
  int errorThreshold = -9;  // Initialize error threshold
  int maxErrorCode = 0;  // Initialize max error code

  while( true ) {
    if (loopFlag != 0) {
      return;
    }

    structureOffset = DAT_800a76dc * 0xf0 + structureBase;

    if (errorCode != errorThreshold) {
      if (errorCode == 0) {

        *(undefined4 *)(DAT_800a76dc * 4 + structureBase) = 0;
        PDDIRRES_OBJ_1CC();
        return;
      }

      _dirFailAuto(structureOffset);
      PDDIRRES_OBJ_24C(structureOffset);
    }

    DAT_800a76e0 = 0;
    JOY_MCD_CTRL = 0;
    DAT_800a76dc = DAT_800a76dc + 1;
    loopFlag = 1;

    if (DAT_800a76dc < 2) break;
    errorCode = 0xffff;
  }

  FUN_80087860(DAT_800a76dc * 0xf0 + structureBase);
  PDDIRRES_OBJ_228(0, 0);
  return;
}

void PDDIRRES_OBJ_24C(int padStructure)

{
  undefined previousCommand;

  previousCommand = *(undefined *)(padStructure + 0x37);
  *(undefined *)(padStructure + 0x37) = 0;
  *(undefined *)(padStructure + 0x38) = previousCommand;
  return;
}

undefined4 PDDIRRES_OBJ_25C(int padStructure)

{
  undefined4 validationResult;
  int dataIndex;

  dataIndex = *(byte *)(padStructure + 0x45) - 3;

  if (*(char *)(padStructure + 0x37) == '\0') {

    if (((5 < dataIndex) || (validationResult = 0, *(char *)(padStructure + dataIndex + 0x57) != '\0')) &&
       (validationResult = 0, dataIndex < (int)(uint)*(byte *)(padStructure + 0x34))) {
      PDDIRRES_OBJ_310();  // PDDIRRES_OBJ_310 returns void
      validationResult = 0;
      return validationResult;
    }
  }
  else {
    if (*(char *)(padStructure + 0x37) != 'M') {

      validationResult = (undefined4)PDDIRRES_OBJ_2EC(padStructure);
      return validationResult;
    }

    validationResult = 0xff;
    if (dataIndex < (int)(uint)*(byte *)(padStructure + 0x36)) {
      PDDIRRES_OBJ_2C0();  // PDDIRRES_OBJ_2C0 returns void
      validationResult = 0xff;
      return validationResult;
    }
  }
  return validationResult;
}

void PDDIRRES_OBJ_2C0(void)

{
  PDDIRRES_OBJ_310();
  return;
}

undefined PDDIRRES_OBJ_2EC(int padStructure)

{
  undefined dataByte;
  int dataIndex = *(byte *)(padStructure + 0x45) - 3;  // Initialize data index

  dataByte = 0;

  if (dataIndex < (int)(uint)*(byte *)(padStructure + 0x36)) {
    dataByte = *(undefined *)(*(int *)(padStructure + 0x2c) + dataIndex);
  }
  return dataByte;
}

void PDDIRRES_OBJ_310(void)

{
  return;
}

void PDDIRRES_OBJ_318(int padStructure)

{
  int counter;
  byte *dataBuffer;
  byte *actionBuffer;
  bool matchFound;
  byte actionMask;
  uint actionIndex;
  uint maxActions;
  int dataOffset;

  bzero((uchar *)(padStructure + 0x57), 6);

  if ((*(short *)(padStructure + 0xe6) == 0) || (*(int *)(padStructure + 0x28) == 0)) {

    if (((*(byte *)(padStructure + 0xe8) - 4 < 2) || (*(byte *)(padStructure + 0xe8) == 7)) &&
       ((*(short *)(padStructure + 0xe6) == 0 && (1 < *(byte *)(padStructure + 0x34))))) {

      if ((((**(byte **)(padStructure + 0x28) & 0xc0) == 0x40) &&
          (((*(byte **)(padStructure + 0x28))[1] & 1) != 0)) && (DAT_800a76e4 + 10 < 0x3d)) {
        *(undefined *)(padStructure + 0x58) = 1;
        *(undefined *)(padStructure + 0x57) = 1;
        DAT_800a76e4 = DAT_800a76e4 + 10;
        PDDIRRES_OBJ_584();
        return;
      }
    }
    else {

      if (*(char *)(padStructure + 0xe8) == '\x03') {
        *(undefined *)(padStructure + 0x57) = 1;
        PDDIRRES_OBJ_584();
        return;
      }

      if (*(short *)(padStructure + 0xe6) == 0) {
        counter = 5;
        padStructure = padStructure + 5;
        do {
          *(undefined *)(padStructure + 0x57) = 1;
          counter = counter + -1;
          padStructure = padStructure + -1;
        } while (-1 < counter);
      }
    }
  }
  else {

    maxActions = 6;
    if (*(byte *)(padStructure + 0x34) < 7) {
      maxActions = (uint)*(byte *)(padStructure + 0x34);
    }

    actionIndex = 0;
    if (*(char *)(padStructure + 0xe9) != '\0') {
      dataOffset = 0;

      do {
        matchFound = false;
        actionMask = 1;

        if (*(char *)(dataOffset + *(int *)(padStructure + 4) + 2) != '\0') {
          actionMask = 0xff;
        }

        actionBuffer = (byte *)(padStructure + 0x5d);
        dataBuffer = *(byte **)(padStructure + 0x28);
        counter = 0;

        if (maxActions != 0) {
          do {

            if ((*actionBuffer == actionIndex) && ((*dataBuffer & actionMask) != 0)) {
              matchFound = true;
              break;
            }
            actionBuffer = actionBuffer + 1;
            counter = counter + 1;
            dataBuffer = dataBuffer + 1;
          } while (counter < (int)maxActions);
        }

        if ((matchFound) &&
           (counter = DAT_800a76e4 + (uint)*(byte *)(dataOffset + *(int *)(padStructure + 4) + 3), counter < 0x3d)
           ) {
          DAT_800a76e4 = counter;
          PDDIRRES_OBJ_438(0, 0, 1);  // PDDIRRES_OBJ_438 requires parameters
          return;
        }

        actionIndex = actionIndex + 1;
        dataOffset = dataOffset + 5;

        if ((int)(uint)*(byte *)(padStructure + 0xe9) <= (int)actionIndex) {
          PDDIRRES_OBJ_584();
          return;
        }
      } while( true );
    }
  }
  return;
}

void PDDIRRES_OBJ_3EC(undefined4 statusValue, undefined4 dataValue, int actionFlag)

{
  int counter;
  byte *dataBuffer;
  byte *actionBuffer;
  byte actionMask;
  uint actionIndex = 0;  // Initialize action index
  int maxActions = 6;  // Initialize max actions
  int dataOffset = 0;  // Initialize data offset
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure

  do {
    do {

      if ((actionFlag != 0) &&
         (counter = DAT_800a76e4 + (uint)*(byte *)(dataOffset + *(int *)(padStructure + 4) + 3), counter < 0x3d))
      {
        DAT_800a76e4 = counter;
        PDDIRRES_OBJ_438(0, 0, actionFlag);
        return;
      }

      actionIndex = actionIndex + 1;
      dataOffset = dataOffset + 5;

      if ((int)(uint)*(byte *)(padStructure + 0xe9) <= (int)actionIndex) {
        PDDIRRES_OBJ_584();
        return;
      }

      actionFlag = 0;
      actionMask = 1;

      if (*(char *)(dataOffset + *(int *)(padStructure + 4) + 2) != '\0') {
        actionMask = 0xff;
      }

      actionBuffer = (byte *)(padStructure + 0x5d);
      dataBuffer = *(byte **)(padStructure + 0x28);
      counter = 0;
    } while (maxActions == 0);

    do {
      if ((*actionBuffer == actionIndex) && ((*dataBuffer & actionMask) != 0)) {
        actionFlag = 1;
        break;
      }
      actionBuffer = actionBuffer + 1;
      counter = counter + 1;
      dataBuffer = dataBuffer + 1;
    } while (counter < maxActions);
  } while( true );
}

void PDDIRRES_OBJ_438(undefined4 statusValue, undefined4 dataValue, int actionFlag)

{
  int counter;
  undefined *statusPointer;
  byte *actionBuffer;
  byte *dataBuffer;
  bool matchFound;
  byte actionMask;
  uint actionIndex = 0;  // Initialize action index
  int maxActions = 6;  // Initialize max actions
  int dataOffset = 0;  // Initialize data offset
  undefined statusByte = 1;  // Initialize status byte
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure

  do {

    if (actionFlag != 0) {
      actionBuffer = (byte *)(padStructure + 0x5d);
      statusPointer = (undefined *)(padStructure + 0x57);
      counter = 0;

      if (maxActions != 0) {
        do {

          actionMask = *actionBuffer;
          actionBuffer = actionBuffer + 1;

          if (actionMask == actionIndex) {
            *statusPointer = statusByte;
          }
          counter = counter + 1;
          statusPointer = statusPointer + 1;
        } while (counter < maxActions);
      }
    }

    do {

      actionIndex = actionIndex + 1;
      dataOffset = dataOffset + 5;

      if ((int)(uint)*(byte *)(padStructure + 0xe9) <= (int)actionIndex) {
        PDDIRRES_OBJ_584();
        return;
      }

      matchFound = false;
      actionMask = 1;

      if (*(char *)(dataOffset + *(int *)(padStructure + 4) + 2) != '\0') {
        actionMask = 0xff;
      }

      actionBuffer = (byte *)(padStructure + 0x5d);
      dataBuffer = *(byte **)(padStructure + 0x28);
      counter = 0;

      if (maxActions != 0) {
        do {

          if ((*actionBuffer == actionIndex) && ((*dataBuffer & actionMask) != 0)) {
            matchFound = true;
            break;
          }
          actionBuffer = actionBuffer + 1;
          counter = counter + 1;
          dataBuffer = dataBuffer + 1;
        } while (counter < maxActions);
      }
    } while (!matchFound);

    counter = DAT_800a76e4 + (uint)*(byte *)(dataOffset + *(int *)(padStructure + 4) + 3);
    if (counter < 0x3d) {
      DAT_800a76e4 = counter;
      PDDIRRES_OBJ_438(0, 0, actionFlag);
      return;
    }
    actionFlag = 0;
  } while( true );
}

void PDDIRRES_OBJ_584(void)

{
  return;
}

undefined * PDDIRRES_OBJ_594(uint controlIndex)

{
  undefined *structurePointer;

  structurePointer = &DAT_801c95c8;

  if ((controlIndex & 0xf0) != 0) {
    structurePointer = &DAT_801c96b8;
  }
  return structurePointer;
}

undefined4 PDDIRRES_OBJ_5B4(int padStructure)

{
  byte currentState;
  undefined4 result;

  if (**(char **)(padStructure + 0x3c) == -0xd) {

    if ((*(char *)(padStructure + 0xe8) == '\0') || (*(char *)(padStructure + 0x46) == -1))
    goto PDDIRRES_OBJ_678;

    if (*(char *)(padStructure + 0x49) == '\x02') {
      (*DAT_800a76a0)(padStructure);
    }
  }

  currentState = *(byte *)(padStructure + 0x46);

  if (currentState == 1) {

    FUN_80088a8c(padStructure, 1);
    PDDIRRES_OBJ_6B4();
    result = 0;
    return result;
  }

  if (currentState < 2) {
    if (currentState != 0) {

      result = PDDIRRES_OBJ_688();
      return result;
    }
  }
  else {
    if (currentState == 0xfe) {

PDDIRRES_OBJ_678:
      FUN_80088a8c(padStructure, 0);
      PDDIRRES_OBJ_6B4();
      result = 0;
      return result;
    }
    if (currentState != 0xff) {

      result = PDDIRRES_OBJ_688();
      return result;
    }
  }
  return 0;
}

undefined4 PDDIRRES_OBJ_688(void)

{
  undefined4 result;
  int padStructure;

  if (*(code **)(padStructure + 0x14) != (code *)0x0) {
    (**(code **)(padStructure + 0x14))();
    PDDIRRES_OBJ_6B4();
    result = 0;
    return result;
  }

  FUN_800881ec(padStructure);
  return 0;
}

void PDDIRRES_OBJ_6B4(void)

{
  return;
}

void PDDIRRES_OBJ_6C4(int padStructure)

{
  char previousType;
  byte newType;
  int counter;

  if ((**(byte **)(padStructure + 0x3c) & 0xf0) == 0) {

    **(undefined **)(padStructure + 0x30) = 0xff;
    *(undefined *)(*(int *)(padStructure + 0x30) + 1) = 0;
    *(undefined *)(padStructure + 0xe8) = 0;
    *(undefined *)(padStructure + 0x35) = 0;
    if (DAT_800a76a0 != NULL) {
      (*DAT_800a76a0)((undefined4 *)padStructure);
    }
    PDDIRRES_OBJ_920();
    return;
  }

  previousType = *(char *)(padStructure + 0xe8);
  newType = **(byte **)(padStructure + 0x3c) >> 4;
  *(byte *)(padStructure + 0xe8) = newType;

  if (newType == 0xf) {

    *(char *)(padStructure + 0xe8) = previousType;
    PDDIRRES_OBJ_7AC(0, (uint)newType);
    return;
  }

  **(undefined **)(padStructure + 0x30) = 0;
  counter = 2;
  *(undefined *)(*(int *)(padStructure + 0x30) + 1) = **(undefined **)(padStructure + 0x3c);
  *(undefined *)(padStructure + 0x35) = *(undefined *)(padStructure + 0x44);

  if (2 < *(byte *)(padStructure + 0x44)) {
    do {
      *(undefined *)(*(int *)(padStructure + 0x30) + counter) =
           *(undefined *)(*(int *)(padStructure + 0x3c) + counter);
      counter = counter + 1;
    } while (counter < (int)(uint)*(byte *)(padStructure + 0x44));
  }

  if (((*(char *)(*(int *)(padStructure + 0x3c) + 1) == '\0') &&
      (((*(char *)(padStructure + 0x46) != '\x01' || (*(int *)(padStructure + 0x14) != 0)) &&
       (*(char *)(padStructure + 0x50) == '\0')))) || (*(char *)(padStructure + 0xe8) != previousType)) {
    (*DAT_800a76a0)(padStructure);
  }

  previousType = *(char *)(padStructure + 0x46);
  *(undefined *)(padStructure + 0x4a) = 0;

  if ((previousType == -1) || ((previousType != '\0' && (*(char *)(padStructure + 0x37) == '\0')))) {
    return;
  }

  if (((byte)(previousType - 2U) < 0xfc) && (**(char **)(padStructure + 0x3c) != -0xd)) {
    (*DAT_800a76a0)(padStructure);
    PDDIRRES_OBJ_920();
    return;
  }

  newType = *(byte *)(padStructure + 0x46);

  if (newType == 1) {

    *(undefined *)(padStructure + 0x47) = 0;
    *(char *)(padStructure + 0x46) = *(char *)(padStructure + 0x46) + '\x01';
    PDDIRRES_OBJ_920();
    return;
  }

  if (newType < 2) {
    if (newType != 0) {

      PDDIRRES_OBJ_8E8();
      return;
    }

    *(undefined *)(padStructure + 0x49) = 1;
    PDDIRRES_OBJ_8D4();
    return;
  }

  if (newType != 0xfe) {

    PDDIRRES_OBJ_8E8();
    return;
  }

  *(undefined *)(padStructure + 0x46) = 0xff;
  PDDIRRES_OBJ_920();
  return;
}

void PDDIRRES_OBJ_7AC(undefined4 statusValue, uint expectedType)

{
  char currentState;
  byte stateValue;
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure from context

  if (((*(char *)(*(int *)(padStructure + 0x3c) + 1) == '\0') &&
      (((*(char *)(padStructure + 0x46) != '\x01' || (*(int *)(padStructure + 0x14) != 0)) &&
       (*(char *)(padStructure + 0x50) == '\0')))) || (*(byte *)(padStructure + 0xe8) != expectedType)) {
    if (DAT_800a76a0 != NULL) {
      (*DAT_800a76a0)((undefined4 *)padStructure);
    }
  }

  currentState = *(char *)(padStructure + 0x46);
  *(undefined *)(padStructure + 0x4a) = 0;

  if ((currentState == -1) || ((currentState != '\0' && (*(char *)(padStructure + 0x37) == '\0')))) {
    return;
  }

  if (((byte)(currentState - 2U) < 0xfc) && (**(char **)(padStructure + 0x3c) != -0xd)) {
    if (DAT_800a76a0 != NULL) {
      (*DAT_800a76a0)((undefined4 *)padStructure);
    }
    PDDIRRES_OBJ_920();
    return;
  }

  stateValue = *(byte *)(padStructure + 0x46);

  if (stateValue == 1) {

    *(undefined *)(padStructure + 0x47) = 0;
    *(char *)(padStructure + 0x46) = *(char *)(padStructure + 0x46) + '\x01';
    PDDIRRES_OBJ_920();
    return;
  }

  if (stateValue < 2) {
    if (stateValue != 0) {

      PDDIRRES_OBJ_8E8();
      return;
    }

    *(undefined *)(padStructure + 0x49) = 1;
    PDDIRRES_OBJ_8D4();
    return;
  }

  if (stateValue != 0xfe) {

    PDDIRRES_OBJ_8E8();
    return;
  }

  *(undefined *)(padStructure + 0x46) = 0xff;
  PDDIRRES_OBJ_920();
  return;
}

void PDDIRRES_OBJ_8D4(void)

{
  char currentState = 0;  // Initialize current state
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure from context

  *(char *)(padStructure + 0x46) = currentState + '\x01';
  PDDIRRES_OBJ_920();
  return;
}

void PDDIRRES_OBJ_8E8(void)

{
  char stateIncrement;
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure from context

  if (*(code **)(padStructure + 0x18) != (code *)0x0) {
    (**(code **)(padStructure + 0x18))();
    PDDIRRES_OBJ_910();
    return;
  }

  stateIncrement = (char)FUN_80088270(padStructure);
  *(char *)(padStructure + 0x46) = *(char *)(padStructure + 0x46) + stateIncrement;
  return;
}

void PDDIRRES_OBJ_910(void)

{
  char stateIncrement = 1;  // Initialize state increment
  int padStructure = (int)&DAT_801c95c8;  // Initialize pad structure from context

  *(char *)(padStructure + 0x46) = *(char *)(padStructure + 0x46) + stateIncrement;
  return;
}

void PDDIRRES_OBJ_920(void)

{
  return;
}

void _dirFailAuto(int padStructure)

{
  byte retryCount;

  *(int *)(padStructure + 0x4c) = *(int *)(padStructure + 0x4c) + 1;

  if (*(char *)(padStructure + 0x46) == '\0') {

PDDIRRES_OBJ_9C8:
    if (**(char **)(padStructure + 0x3c) != -0xd) {

      **(undefined **)(padStructure + 0x30) = 0xff;
      *(undefined *)(*(int *)(padStructure + 0x30) + 1) = 0;
      *(undefined *)(padStructure + 0xe8) = 0;
      *(undefined *)(padStructure + 0x35) = 0;
    }
    return;
  }

  if (*(char *)(padStructure + 0x46) == '\x01') {

    retryCount = *(byte *)(padStructure + 0x4a);
    if (10 < retryCount) {

      *(undefined *)(padStructure + 0x49) = 2;
      *(undefined *)(padStructure + 0x46) = 0xff;
      PDDIRRES_OBJ_A00();
      return;
    }
  }
  else {

    retryCount = *(byte *)(padStructure + 0x4a);
    if (10 < retryCount) {

      if (*(char *)(padStructure + 0x49) != '\0') {
        (*DAT_800a76a0)(padStructure);
      }
      goto PDDIRRES_OBJ_9C8;
    }
  }

  *(byte *)(padStructure + 0x4a) = retryCount + 1;
  PDDIRRES_OBJ_A00();
  return;
}

void PDDIRRES_OBJ_A00(void)

{
  return;
}

undefined4 PDDIRRES_OBJ_A10(int padStructure)

{
  undefined4 alignmentResult;

  if ((*(short *)(padStructure + 0xe6) == 0) || (alignmentResult = 0, *(char *)(padStructure + 0x46) != -1)) {
    alignmentResult = 1;
  }
  return alignmentResult;
}

int CdGetSector(void *memoryAddress, int sectorSize)

{
  int sectorResult;

  CD_getsector();
  sectorResult = 0;
  return (uint)(sectorResult == 0);
}

int CdInit(void)

{
  int initResult;
  int retryCount;

  retryCount = 4;

  do {
    initResult = EVENT_OBJ_90();

    if (initResult == 1) {

      DAT_800a780c = EVENT_OBJ_CC;
      DAT_800a7810 = EVENT_OBJ_F4;
      DAT_800a7754 = EVENT_OBJ_11C;
      DAT_800a7758 = 0;

      EVENT_OBJ_80();
      initResult = 0;
      return initResult;
    }
    retryCount = retryCount + -1;
  } while (retryCount != -1);

  printf("CdInit: Init failed\n");
  return 0;
}

void EVENT_OBJ_80(void)

{
  return;
}

undefined4 EVENT_OBJ_90(void)

{
  int initResult;
  undefined4 volumeResult;

  initResult = CD_init();
  if (initResult == 0) {
    CD_initvol();
    EVENT_OBJ_BC();
    volumeResult = 0;
    return volumeResult;
  }
  return 0;
}

void EVENT_OBJ_BC(void)

{
  return;
}

void EVENT_OBJ_CC(void)

{
  DeliverEvent(0xf0000003, 0x20);
  return;
}

void EVENT_OBJ_F4(void)

{
  DeliverEvent(0xf0000003, 0x40);
  return;
}

void EVENT_OBJ_11C(void)

{
  DeliverEvent(0xf0000003, 0x40);
  return;
}

undefined4 FUN_8008a088(undefined4 syncCallback)

{
  undefined4 previousCallback;

  previousCallback = DAT_800a780c;

  DAT_800a780c = syncCallback;

  return previousCallback;
}

undefined4 FUN_8008a0a8(undefined4 readyCallback)

{
  undefined4 previousCallback;

  previousCallback = DAT_800a7810;

  DAT_800a7810 = readyCallback;

  return previousCallback;
}

int CdControl(u_char command, u_char *parameters, u_char *result)

{
  undefined4 savedCallback;
  int commandResult;
  int retryCount;

  savedCallback = DAT_800a780c;
  retryCount = 3;

  while( true ) {
    DAT_800a780c = 0;

    if ((command != 1) && (((byte)DAT_800a7818 & 0x10) != 0)) {
      CD_cw(1, 0, 0, 0);
    }

    if ((((parameters == (u_char *)0x0) || (*(int *)((int)&DAT_800a7764 + (uint)command * 4) == 0)) ||
        (commandResult = CD_cw(2, parameters, (undefined *)result, 0), commandResult == 0)) &&
       (DAT_800a780c = savedCallback, commandResult = CD_cw(command, parameters, (undefined *)result, 0), commandResult == 0)) break;

    retryCount = retryCount + -1;
    if (retryCount == -1) {
      DAT_800a780c = savedCallback;
      return 0;
    }
  }
  return 1;
}

int CdControlF(u_char command, u_char *parameters)

{
  undefined4 savedCallback;
  int commandResult;
  int retryCount;

  savedCallback = DAT_800a780c;
  retryCount = 3;

  while( true ) {
    DAT_800a780c = 0;

    if ((command != 1) && (((byte)DAT_800a7818 & 0x10) != 0)) {
      CD_cw(1, 0, 0, 0);
    }

    if ((((parameters == (u_char *)0x0) || (*(int *)((int)&DAT_800a7764 + (uint)command * 4) == 0)) ||
        (commandResult = CD_cw(2, parameters, NULL, 0), commandResult == 0)) &&
       (DAT_800a780c = savedCallback, commandResult = CD_cw(command, parameters, NULL, 1), commandResult == 0)) break;

    retryCount = retryCount + -1;
    if (retryCount == -1) {
      DAT_800a780c = savedCallback;
      return 0;
    }
  }
  return 1;
}

int CdControlB(u_char command, u_char *parameters, u_char *result)

{
  undefined4 savedCallback;
  int commandResult;
  int syncResult;
  int retryCount;

  savedCallback = DAT_800a780c;
  retryCount = 3;

  do {
    DAT_800a780c = 0;

    if ((command != 1) && (((byte)DAT_800a7818 & 0x10) != 0)) {
      CD_cw(1, 0, 0, 0);
    }

    if (((parameters == (u_char *)0x0) || (*(int *)((int)&DAT_800a7764 + (uint)command * 4) == 0)) ||
       (commandResult = CD_cw(2, parameters, (undefined *)result, 0), commandResult == 0)) {
      DAT_800a780c = savedCallback;
      commandResult = CD_cw(command, parameters, (undefined *)result, 0);
      syncResult = 0;
      if (commandResult == 0) break;
    }

    retryCount = retryCount + -1;
    syncResult = -1;
    DAT_800a780c = savedCallback;
  } while (retryCount != -1);

  if (syncResult != 0) {
    return 0;
  }

  CD_sync(0, (undefined *)result);
  retryCount = S_016_OBJ_38C();
  return retryCount;
}

int S_016_OBJ_38C(void)

{
  return 1;  // Return success
}

void CD_getsector(void)

{

  do {
  } while( true );
}

undefined4 BIOS_1_OBJ_0(void)

{
  undefined4 cdromStatus;
  byte commandData = 0;  // Initialize command data

  CDROM_REG0 = 1;

  if ((CDROM_REG3 & 7) != 0) {
    cdromStatus = BIOS_1_OBJ_64(&commandData);
    return cdromStatus;
  }
  return 0;
}

undefined4 BIOS_1_OBJ_64(byte *commandData)

{
  undefined dataByte;
  undefined4 result;
  byte *dataBuffer;
  undefined1 *targetBuffer;
  undefined4 *sourceBuffer;
  int dataIndex;
  int dataCount;
  uint statusFlags = 0;  // Initialize status flags
  byte commandType = 0;  // Initialize command type
  byte statusByte = 0;  // Initialize status byte
  byte additionalStatus = 0;  // Initialize additional status
  undefined stackBuffer[8];  // Stack buffer for data

  while (dataIndex = 0, commandType != (*commandData & 7)) {
    commandType = *commandData & 7;
  }

  do {
    dataBuffer = (byte *)(stackBuffer + dataIndex);
    dataCount = dataIndex;
    if ((CDROM_REG0 & 0x20) == 0) break;
    dataIndex = dataIndex + 1;
    *dataBuffer = (byte)CDROM_REG1;
    dataCount = dataIndex;
  } while (dataIndex < 8);

  for (; dataIndex < 8; dataIndex = dataIndex + 1) {
    stackBuffer[dataIndex] = 0;
  }

  CDROM_REG0 = 1;
  CDROM_REG3 = 7;
  CDROM_REG2 = 7;

  if ((commandType != 3) || (*(int *)((int)&DAT_800a79d0 + (uint)DAT_800a7829 * 4) != 0)) {

    if (((DAT_800a7818 & 0x10) == 0) && ((statusByte & 0x10) != 0)) {
      DAT_800a7820 = DAT_800a7820 + 1;
    }
    DAT_800a7818 = (uint)statusByte;
    DAT_800a781c = (uint)additionalStatus;
    statusFlags = DAT_800a7818 & 0x1d;
  }

  switch(commandType) {
  case 1:

    if ((statusFlags != 0) && (dataCount == 1)) {
      statusFlags = 0;
    }
    DAT_800a7ae9 = 1;
    if (statusFlags != 0) {
      DAT_800a7ae9 = 5;
    }

    targetBuffer = &DAT_801c9840;
    sourceBuffer = (undefined4 *)stackBuffer;
    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);

    CDROM_REG0 = 0;
    CDROM_REG3 = 0;
    BIOS_1_OBJ_550();
    result = 0;
    return result;

  case 2:

    DAT_800a7ae8 = 2;
    if (statusFlags != 0) {
      DAT_800a7ae8 = 5;
    }

    targetBuffer = &DAT_801c9838;
    sourceBuffer = (undefined4 *)stackBuffer;
    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);

    BIOS_1_OBJ_550();
    result = 0;
    return result;

  case 3:

    break;

  case 4:

    targetBuffer = (undefined1 *)&DAT_801c9848;
    DAT_800a7aea = 4;
    sourceBuffer = (undefined4 *)stackBuffer;
    DAT_800a7ae9 = 4;

    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);

    targetBuffer = &DAT_801c9840;
    sourceBuffer = (undefined4 *)stackBuffer;
    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);

    BIOS_1_OBJ_550();
    result = 0;
    return result;

  case 5:

    targetBuffer = &DAT_801c9838;
    DAT_800a7ae9 = 5;
    sourceBuffer = (undefined4 *)stackBuffer;
    DAT_800a7ae8 = 5;

    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);

    targetBuffer = &DAT_801c9840;
    sourceBuffer = (undefined4 *)stackBuffer;
    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);

    BIOS_1_OBJ_550();
    result = 0;
    return result;

  default:

    FUN_8008e00c("CDROM: unknown intr");
    printf("(%d)\n", (uint)commandType);
    return 0;
  }

  if (statusFlags != 0) {

    DAT_800a7ae8 = 5;
    targetBuffer = (undefined1 *)&DAT_801c9838;
    sourceBuffer = (undefined4 *)stackBuffer;
    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);
    BIOS_1_OBJ_550();
    result = 0;
    return result;
  }

  if (*(int *)((int)&DAT_800a78d0 + (uint)DAT_800a7829 * 4) == 0) {

  DAT_800a7ae8 = 2;
  targetBuffer = (undefined1 *)&DAT_801c9838;
  sourceBuffer = (undefined4 *)stackBuffer;
    dataIndex = 7;
    do {
      dataByte = *(undefined *)sourceBuffer;
      sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
      dataIndex = dataIndex + -1;
      *targetBuffer = dataByte;
      targetBuffer = targetBuffer + 1;
    } while (dataIndex != -1);
    BIOS_1_OBJ_550();
    result = 0;
    return result;
  }

    DAT_800a7ae8 = 3;
    targetBuffer = (undefined1 *)&DAT_801c9838;
    sourceBuffer = (undefined4 *)stackBuffer;
  dataIndex = 7;
  do {
    dataByte = *(undefined *)sourceBuffer;
    sourceBuffer = (undefined4 *)((int)sourceBuffer + 1);
    dataIndex = dataIndex + -1;
    *targetBuffer = dataByte;
    targetBuffer = targetBuffer + 1;
  } while (dataIndex != -1);
  BIOS_1_OBJ_550();
  result = 0;
  return result;
}

void BIOS_1_OBJ_264(void)

{
  undefined dataByte;
  undefined1 *destinationPointer;
  int counter;
  undefined *sourcePointer;
  int statusFlags = 0;  // Initialize status flags
  undefined stackBuffer[8];  // Stack buffer for data

  if (statusFlags != 0) {

    DAT_800a7ae8 = 5;
    destinationPointer = (undefined1 *)&DAT_801c9838;
    sourcePointer = stackBuffer;
    counter = 7;
    do {
      dataByte = *sourcePointer;
      sourcePointer = sourcePointer + 1;
      counter = counter + -1;
      *destinationPointer = dataByte;
      destinationPointer = destinationPointer + 1;
    } while (counter != -1);
    BIOS_1_OBJ_550();
    return;
  }

  if (*(int *)((int)&DAT_800a78d0 + (uint)DAT_800a7829 * 4) != 0) {

    DAT_800a7ae8 = 3;
    destinationPointer = &DAT_801c9838;
    sourcePointer = stackBuffer;
    counter = 7;
    do {
      dataByte = *sourcePointer;
      sourcePointer = sourcePointer + 1;
      counter = counter + -1;
      *destinationPointer = dataByte;
      destinationPointer = destinationPointer + 1;
    } while (counter != -1);
    BIOS_1_OBJ_550();
    return;
  }

  DAT_800a7ae8 = 2;
  destinationPointer = &DAT_801c9838;
  sourcePointer = stackBuffer;
  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);
  BIOS_1_OBJ_550();
  return;
}

void BIOS_1_OBJ_364(void)

{
  undefined dataByte;
  undefined1 *destinationPointer;
  int counter;
  undefined *sourcePointer;
  int commandType = 0;  // Initialize command type
  undefined stackBuffer[8];  // Stack buffer for data

  DAT_800a7ae8 = 2;
  if (commandType != 0) {
    DAT_800a7ae8 = 5;
  }

  destinationPointer = (undefined1 *)&DAT_801c9838;
  sourcePointer = stackBuffer;
  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  BIOS_1_OBJ_550();
  return;
}

void BIOS_1_OBJ_3B0(void)

{
  undefined dataByte;
  undefined1 *destinationPointer;
  int counter;
  undefined *sourcePointer;
  int commandMode = 0;  // Initialize command mode
  int commandType = 0;  // Initialize command type
  undefined stackBuffer[8];  // Stack buffer for data

  if ((commandType != 0) && (commandMode == 1)) {
    commandType = 0;
  }

  DAT_800a7ae9 = 1;
  if (commandType != 0) {
    DAT_800a7ae9 = 5;
  }

  destinationPointer = &DAT_801c9840;
  sourcePointer = stackBuffer;
  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  CDROM_REG0 = 0;
  CDROM_REG3 = 0;

  BIOS_1_OBJ_550();
  return;
}

void BIOS_1_OBJ_430(void)

{
  undefined dataByte;
  int counter;
  undefined1 *destinationPointer;
  undefined *sourcePointer;
  undefined stackBuffer[8];  // Stack buffer for data

  destinationPointer = (undefined1 *)&DAT_801c9848;
  DAT_800a7aea = 4;
  sourcePointer = stackBuffer;
  DAT_800a7ae9 = 4;

  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  destinationPointer = &DAT_801c9840;
  sourcePointer = stackBuffer;
  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  BIOS_1_OBJ_550();
  return;
}

void BIOS_1_OBJ_4B0(void)

{
  undefined dataByte;
  int counter;
  undefined1 *destinationPointer;
  undefined *sourcePointer;
  undefined stackBuffer[8];  // Stack buffer for data

  destinationPointer = (undefined1 *)&DAT_801c9838;
  DAT_800a7ae9 = 5;
  sourcePointer = stackBuffer;
  DAT_800a7ae8 = 5;
  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  destinationPointer = &DAT_801c9840;
  sourcePointer = stackBuffer;
  counter = 7;
  do {
    dataByte = *sourcePointer;
    sourcePointer = sourcePointer + 1;
    counter = counter + -1;
    *destinationPointer = dataByte;
    destinationPointer = destinationPointer + 1;
  } while (counter != -1);

  BIOS_1_OBJ_550();
  return;
}

void BIOS_1_OBJ_550(void)

{
  return;
}

undefined4 CD_sync(int syncMode, undefined *resultBuffer)

{
  undefined dataByte;
  bool timeoutFlag;
  int currentTime;
  undefined4 result;
  uint cdromStatus;
  undefined1 *bufferPointer;
  byte registerValue;

  VSync(-1);
  currentTime = 0;
  DAT_801c9850 = currentTime + 0x3c0;
  DAT_801c9854 = 0;
  DAT_801c9858 = "CD_sync";

  while( true ) {
    VSync(-1);
  currentTime = 0;

    if ((DAT_801c9850 < currentTime) ||
       (currentTime = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = currentTime, timeoutFlag)) {

      FUN_8008e00c("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858, (&PTR_s_CdlSync_800a7830)[DAT_800a7829],
             (&PTR_s_NoIntr_800a78b0)[DAT_800a7ae8], (&PTR_s_NoIntr_800a78b0)[DAT_800a7ae9]);
      CD_flush();
      result = BIOS_1_OBJ_69C();
      return result;
    }

    currentTime = CheckCallback();
    registerValue = CDROM_REG0;

    if (currentTime != 0) {
      registerValue = CDROM_REG0 & 3;

      while( true ) {
        cdromStatus = BIOS_1_OBJ_0();
        if (cdromStatus == 0) break;

        if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
          (*DAT_800a7810)(DAT_800a7ae9, &DAT_801c9840);
        }

        if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
          (*DAT_800a780c)(DAT_800a7ae8, &DAT_801c9838);
        }
      }
    }

    CDROM_REG0 = registerValue;

    if ((DAT_800a7ae8 == 2) || (DAT_800a7ae8 == 5)) break;

    if (syncMode != 0) {
      return 0;
    }
  }

  DAT_800a7ae8 = 2;
  bufferPointer = &DAT_801c9838;
  currentTime = 7;

  if (resultBuffer != (undefined *)0x0) {
    do {
      dataByte = *bufferPointer;
      bufferPointer = bufferPointer + 1;
      currentTime = currentTime + -1;
      *resultBuffer = dataByte;
      resultBuffer = resultBuffer + 1;
    } while (currentTime != -1);
  }

  BIOS_1_OBJ_7B4();
  result = 0;
  return result;
}

undefined4 BIOS_1_OBJ_69C(void)

{
  undefined dataByte;
  bool timeoutFlag;
  int callbackResult = 0;  // Initialize callback result
  int currentTime;
  uint cdromStatus;
  undefined4 result;
  undefined1 *bufferPointer;
  byte registerValue;
  byte *statusPointer = (byte *)&DAT_800a7ae8;  // Initialize status pointer
  uint expectedStatus = 2;  // Initialize expected status
  int stringTableOffset = (int)&PTR_s_NoIntr_800a78b0;  // Initialize string table offset
  undefined *readyStatusPointer = (undefined *)&DAT_800a7ae9;  // Initialize ready status pointer
  int nonBlockingMode = 0;  // Initialize non-blocking mode
  undefined *resultBuffer = NULL;  // Initialize result buffer
  int stringTableBase = (int)&PTR_s_CdlSync_800a7830;  // Initialize string table base

  while( true ) {
    if (callbackResult != 0) {
      return 0xffffffff;
    }

    currentTime = CheckCallback();
    registerValue = CDROM_REG0;

    if (currentTime != 0) {
      registerValue = CDROM_REG0 & 3;

      while( true ) {
        cdromStatus = BIOS_1_OBJ_0();
        if (cdromStatus == 0) break;

        if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
          (*DAT_800a7810)(*readyStatusPointer, &DAT_801c9840);
        }

        if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
          (*DAT_800a780c)(*statusPointer, &DAT_801c9838);
        }
      }
    }

    CDROM_REG0 = registerValue;

    if ((*statusPointer == expectedStatus) || (*statusPointer == 5)) {
      *statusPointer = (byte)expectedStatus;
      bufferPointer = &DAT_801c9838;
      currentTime = 7;

      if (resultBuffer != (undefined *)0x0) {
        do {
          dataByte = *bufferPointer;
          bufferPointer = bufferPointer + 1;
          currentTime = currentTime + -1;
          *resultBuffer = dataByte;
          resultBuffer = resultBuffer + 1;
        } while (currentTime != -1);
      }

      BIOS_1_OBJ_7B4();
      result = 0;
      return result;
    }

    if (nonBlockingMode != 0) {
      return 0;
    }

    VSync(-1);
  currentTime = 0;
    if ((DAT_801c9850 < currentTime) ||
       (currentTime = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = currentTime, timeoutFlag))
    break;

    callbackResult = 0;
  }

  FUN_8008e00c("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858,
         *(undefined4 *)((uint)DAT_800a7829 * 4 + stringTableBase),
         *(undefined4 *)((uint)*statusPointer * 4 + stringTableOffset));
  CD_flush();
  result = BIOS_1_OBJ_69C();
  return result;
}

undefined4 BIOS_1_OBJ_6CC(void)

{
  undefined dataByte;
  bool timeoutFlag;
  byte registerValue;
  uint cdromStatus;
  undefined4 result;
  int currentTime;
  undefined1 *bufferPointer;
  byte savedRegisterValue = 0;  // Initialize saved register value
  byte *statusPointer = (byte *)&DAT_800a7ae8;  // Initialize status pointer
  uint expectedStatus = 2;  // Initialize expected status
  int stringTableOffset = (int)&PTR_s_NoIntr_800a78b0;  // Initialize string table offset
  undefined *readyStatusPointer = (undefined *)&DAT_800a7ae9;  // Initialize ready status pointer
  int nonBlockingMode = 0;  // Initialize non-blocking mode
  undefined *resultBuffer = NULL;  // Initialize result buffer
  int stringTableBase = (int)&PTR_s_CdlSync_800a7830;  // Initialize string table base

  do {

    while( true ) {
      cdromStatus = BIOS_1_OBJ_0();
      registerValue = savedRegisterValue;
      if (cdromStatus == 0) break;

      if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
        (*DAT_800a7810)(*readyStatusPointer, &DAT_801c9840);
      }

      if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
        (*DAT_800a780c)(*statusPointer, &DAT_801c9838);
      }
    }

    do {
      CDROM_REG0 = registerValue;

      if ((*statusPointer == expectedStatus) || (*statusPointer == 5)) {
        *statusPointer = (byte)expectedStatus;
        bufferPointer = &DAT_801c9838;
        currentTime = 7;

        if (resultBuffer != (undefined *)0x0) {
          do {
            dataByte = *bufferPointer;
            bufferPointer = bufferPointer + 1;
            currentTime = currentTime + -1;
            *resultBuffer = dataByte;
            resultBuffer = resultBuffer + 1;
          } while (currentTime != -1);
        }

        BIOS_1_OBJ_7B4();
        result = 0;
        return result;
      }

      if (nonBlockingMode != 0) {
        return 0;
      }

      VSync(-1);
  currentTime = 0;
      if ((DAT_801c9850 < currentTime) ||
         (currentTime = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = currentTime, timeoutFlag)) {

        FUN_8008e00c("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858,
               *(undefined4 *)((uint)DAT_800a7829 * 4 + stringTableBase),
               *(undefined4 *)((uint)*statusPointer * 4 + stringTableOffset));
        CD_flush();
        result = BIOS_1_OBJ_69C();
        return result;
      }

      currentTime = CheckCallback();
      registerValue = CDROM_REG0;
    } while (currentTime == 0);

    savedRegisterValue = CDROM_REG0 & 3;
  } while( true );
}

void BIOS_1_OBJ_7B4(void)

{
  return;
}

undefined4 CD_ready(int readyMode, undefined *resultBuffer)

{
  undefined dataByte;
  bool timeoutFlag;
  int currentTime;
  undefined4 result;
  uint cdromStatus;
  undefined1 *sourcePointer;
  byte registerValue;

  VSync(-1);
  currentTime = 0;
  DAT_801c9850 = currentTime + 0x3c0;
  DAT_801c9854 = 0;
  DAT_801c9858 = "CD_ready";

  while( true ) {
    VSync(-1);
  currentTime = 0;

    if ((DAT_801c9850 < currentTime) ||
       (currentTime = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = currentTime, timeoutFlag)) {

      FUN_8008e00c("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858, (&PTR_s_CdlSync_800a7830)[DAT_800a7829],
             (&PTR_s_NoIntr_800a78b0)[DAT_800a7ae8], (&PTR_s_NoIntr_800a78b0)[DAT_800a7ae9]);
      CD_flush();
      result = BIOS_1_OBJ_91C();
      return result;
    }

    currentTime = CheckCallback();
    registerValue = CDROM_REG0;

    if (currentTime != 0) {
      registerValue = CDROM_REG0 & 3;

      while( true ) {
        cdromStatus = BIOS_1_OBJ_0();
        if (cdromStatus == 0) break;

        if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
          (*DAT_800a7810)(DAT_800a7ae9, &DAT_801c9840);
        }

        if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
          (*DAT_800a780c)(DAT_800a7ae8, &DAT_801c9838);
        }
      }
    }

    CDROM_REG0 = registerValue;

    if (DAT_800a7aea != '\0') break;

    if (DAT_800a7ae9 != 0) {
      DAT_800a7ae9 = 0;
      sourcePointer = &DAT_801c9840;
      currentTime = 7;

      if (resultBuffer != (undefined *)0x0) {
        do {
          dataByte = *sourcePointer;
          sourcePointer = sourcePointer + 1;
          currentTime = currentTime + -1;
          *resultBuffer = dataByte;
          resultBuffer = resultBuffer + 1;
        } while (currentTime != -1);
      }
      goto BIOS_1_OBJ_A6C;
    }

    if (readyMode != 0) {
      return 0;
    }
  }

  DAT_800a7aea = '\0';
  sourcePointer = &DAT_801c9848;

  if (resultBuffer != (undefined *)0x0) {
    currentTime = 7;
    do {
      dataByte = *sourcePointer;
      sourcePointer = sourcePointer + 1;
      currentTime = currentTime + -1;
      *resultBuffer = dataByte;
      resultBuffer = resultBuffer + 1;
    } while (currentTime != -1);
    BIOS_1_OBJ_A7C();
    result = 0;
    return result;
  }

BIOS_1_OBJ_A6C:
  BIOS_1_OBJ_A7C();
  result = 0;
  return result;
}

undefined4 BIOS_1_OBJ_91C(void)

{
  undefined dataByte;
  bool timeoutFlag;
  int errorCode = 0;  // Initialize error code
  int callbackResult;
  uint cdromStatus;
  undefined4 timeoutResult;
  undefined1 *sourcePointer;
  byte cdromRegister;
  byte *syncBuffer = (byte *)&DAT_800a7ae8;  // Initialize sync buffer
  undefined *resultBuffer = NULL;  // Initialize result buffer
  char *statusFlag = (char *)&DAT_800a7aea;  // Initialize status flag
  int errorTable = (int)&PTR_s_NoIntr_800a78b0;  // Initialize error table
  undefined *readyBuffer = (undefined *)&DAT_800a7ae9;  // Initialize ready buffer
  int timeoutCounter = 0;  // Initialize timeout counter
  int errorTable2 = (int)&PTR_s_CdlSync_800a7830;  // Initialize error table 2

  while( true ) {
    if (errorCode != 0) {
      return 0xffffffff;
    }

    callbackResult = CheckCallback();
    cdromRegister = CDROM_REG0;

    if (callbackResult != 0) {
      cdromRegister = CDROM_REG0 & 3;

      while( true ) {
        cdromStatus = BIOS_1_OBJ_0();
        if (cdromStatus == 0) break;

        if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
          (*DAT_800a7810)(*readyBuffer, &DAT_801c9840);
        }

        if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
          (*DAT_800a780c)(*syncBuffer, &DAT_801c9838);
        }
      }
    }

    CDROM_REG0 = cdromRegister;

    if (*statusFlag != '\0') break;

    if (statusFlag[-1] != '\0') {
      syncBuffer[1] = 0;
      sourcePointer = &DAT_801c9840;
      callbackResult = 7;

      if (resultBuffer != (undefined *)0x0) {
        do {
          dataByte = *sourcePointer;
          sourcePointer = sourcePointer + 1;
          callbackResult = callbackResult + -1;
          *resultBuffer = dataByte;
          resultBuffer = resultBuffer + 1;
        } while (callbackResult != -1);
      }
      goto BIOS_1_OBJ_A6C;
    }

    if (timeoutCounter != 0) {
      return 0;
    }

    VSync(-1);
    callbackResult = 0;
    if ((DAT_801c9850 < callbackResult) ||
       (callbackResult = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = callbackResult, timeoutFlag)) {

      FUN_8008e00c("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858,
             *(undefined4 *)((uint)DAT_800a7829 * 4 + errorTable2),
             *(undefined4 *)((uint)*syncBuffer * 4 + errorTable));
      CD_flush();
      timeoutResult = BIOS_1_OBJ_91C();
      return timeoutResult;
    }
    errorCode = 0;
  }

  syncBuffer[2] = 0;
  sourcePointer = &DAT_801c9848;

  if (resultBuffer != (undefined *)0x0) {
    callbackResult = 7;
    do {
      dataByte = *sourcePointer;
      sourcePointer = sourcePointer + 1;
      callbackResult = callbackResult + -1;
      *resultBuffer = dataByte;
      resultBuffer = resultBuffer + 1;
    } while (callbackResult != -1);
    BIOS_1_OBJ_A7C();
    timeoutResult = 0;
    return timeoutResult;
  }

BIOS_1_OBJ_A6C:
  BIOS_1_OBJ_A7C();
  timeoutResult = 0;
  return timeoutResult;
}

undefined4 BIOS_1_OBJ_94C(void)

{
  undefined dataByte;
  bool timeoutFlag;
  byte registerValue;
  uint cdromStatus;
  undefined4 result;
  int currentTime;
  undefined1 *sourcePointer;
  byte savedRegisterValue = 0;  // Initialize saved register value
  byte *syncBuffer = (byte *)&DAT_800a7ae8;  // Initialize sync buffer
  undefined *resultBuffer = NULL;  // Initialize result buffer
  char *statusFlag = (char *)&DAT_800a7aea;  // Initialize status flag
  int stringTableOffset = (int)&PTR_s_NoIntr_800a78b0;  // Initialize string table offset
  undefined *readyBuffer = (undefined *)&DAT_800a7ae9;  // Initialize ready buffer
  int nonBlockingMode = 0;  // Initialize non-blocking mode
  int stringTableBase = (int)&PTR_s_CdlSync_800a7830;  // Initialize string table base

  do {

    while( true ) {
      cdromStatus = BIOS_1_OBJ_0();
      registerValue = savedRegisterValue;
      if (cdromStatus == 0) break;

      if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
        (*DAT_800a7810)(*readyBuffer, &DAT_801c9840);
      }

      if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
        (*DAT_800a780c)(*syncBuffer, &DAT_801c9838);
      }
    }

    do {
      CDROM_REG0 = registerValue;

      if (*statusFlag != '\0') {
        syncBuffer[2] = 0;
        sourcePointer = &DAT_801c9848;

        if (resultBuffer != (undefined *)0x0) {
          currentTime = 7;
          do {
            dataByte = *sourcePointer;
            sourcePointer = sourcePointer + 1;
            currentTime = currentTime + -1;
            *resultBuffer = dataByte;
            resultBuffer = resultBuffer + 1;
          } while (currentTime != -1);
          BIOS_1_OBJ_A7C();
          result = 0;
          return result;
        }
        goto BIOS_1_OBJ_A6C;
      }

      if (statusFlag[-1] != '\0') {
        syncBuffer[1] = 0;
        sourcePointer = &DAT_801c9840;

        if (resultBuffer != (undefined *)0x0) {
          currentTime = 7;
          do {
            dataByte = *sourcePointer;
            sourcePointer = sourcePointer + 1;
            currentTime = currentTime + -1;
            *resultBuffer = dataByte;
            resultBuffer = resultBuffer + 1;
          } while (currentTime != -1);
        }
BIOS_1_OBJ_A6C:
        BIOS_1_OBJ_A7C();
        result = 0;
        return result;
      }

      if (nonBlockingMode != 0) {
        return 0;
      }

      VSync(-1);
  currentTime = 0;
      if ((DAT_801c9850 < currentTime) ||
         (currentTime = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = currentTime, timeoutFlag)) {

        FUN_8008e00c("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858,
               *(undefined4 *)((uint)DAT_800a7829 * 4 + stringTableBase),
               *(undefined4 *)((uint)*syncBuffer * 4 + stringTableOffset));
        CD_flush();
        result = BIOS_1_OBJ_91C();
        return result;
      }

      currentTime = CheckCallback();
      registerValue = CDROM_REG0;
    } while (currentTime == 0);

    savedRegisterValue = CDROM_REG0 & 3;
  } while( true );
}

void BIOS_1_OBJ_A7C(void)

{
  return;
}

undefined4 CD_cw(byte command, byte *parameters, undefined *resultBuffer, int blockingMode)

{
  undefined dataByte;
  bool timeoutFlag;
  undefined4 result;
  byte *parameterPointer;
  uint cdromStatus;
  int currentTime;
  int parameterIndex;
  int parameterCount;
  undefined1 *sourcePointer;
  byte registerValue;
  extern int LAB_800a7a4e_2[];  // External array for command parameter counts

  if ((*(int *)((int)&LAB_800a7a4e_2 + (uint)command * 4) == 0) || (parameters != (byte *)0x0)) {
    CD_sync(0, 0);

    if (command == 2) {
      parameterIndex = 0;
      parameterPointer = parameters;
      do {
        (&DAT_800a7824)[parameterIndex] = *parameterPointer;
        parameterIndex = parameterIndex + 1;
        parameterPointer = parameters + parameterIndex;
      } while (parameterIndex < 4);
    }

    if (command == 0xe) {
      DAT_800a7828 = *parameters;
    }

    parameterIndex = (uint)command * 4;
    DAT_800a7ae8 = 0;

    if (*(int *)((int)&DAT_800a7950 + parameterIndex) != 0) {
      DAT_800a7ae9 = 0;
    }

    CDROM_REG0 = 0;
    parameterCount = 0;
    parameterPointer = parameters;

    if (0 < *(int *)((int)&LAB_800a7a4e_2 + parameterIndex)) {
      do {
        CDROM_REG2 = *parameterPointer;
        parameterCount = parameterCount + 1;
        parameterPointer = parameters + parameterCount;
      } while (parameterCount < *(int *)((int)&LAB_800a7a4e_2 + parameterIndex));
    }

    result = 0;
    DAT_800a7829 = command;
    CDROM_REG1 = command;

    if (blockingMode == 0) {

      VSync(-1);
  currentTime = 0;
      DAT_801c9850 = currentTime + 0x3c0;
      DAT_801c9854 = 0;
      DAT_801c9858 = "CD_cw";
      registerValue = CDROM_REG0;

      while (CDROM_REG0 = registerValue, DAT_800a7ae8 == 0) {
        VSync(-1);
  currentTime = 0;

        if ((DAT_801c9850 < currentTime) ||
           (currentTime = DAT_801c9854 + 1, timeoutFlag = 0x3c0000 < DAT_801c9854, DAT_801c9854 = currentTime, timeoutFlag)) {

          FUN_8008e00c("CD timeout: ");
          printf("%s:(%s) Sync=%s, Ready=%s\n", DAT_801c9858, (&PTR_s_CdlSync_800a7830)[DAT_800a7829],
                 (&PTR_s_NoIntr_800a78b0)[DAT_800a7ae8], (&PTR_s_NoIntr_800a78b0)[DAT_800a7ae9]);
          CD_flush();
          result = BIOS_1_OBJ_D78();
          return result;
        }

        currentTime = CheckCallback();
        registerValue = CDROM_REG0;

        if (currentTime != 0) {
          registerValue = CDROM_REG0 & 3;

          while( true ) {
            cdromStatus = BIOS_1_OBJ_0();
            if (cdromStatus == 0) break;

            if (((cdromStatus & 4) != 0) && (DAT_800a7810 != (code *)0x0)) {
              (*DAT_800a7810)(DAT_800a7ae9, &DAT_801c9840);
            }

            if (((cdromStatus & 2) != 0) && (DAT_800a780c != (code *)0x0)) {
              (*DAT_800a780c)(DAT_800a7ae8, &DAT_801c9838);
            }
          }
        }
      }

      sourcePointer = &DAT_801c9838;
      currentTime = 7;
      if (resultBuffer != (undefined *)0x0) {
        do {
          dataByte = *sourcePointer;
          sourcePointer = sourcePointer + 1;
          currentTime = currentTime + -1;
          *resultBuffer = dataByte;
          resultBuffer = resultBuffer + 1;
        } while (currentTime != -1);
      }

      result = 0;
      if (DAT_800a7ae8 == 5) {
        result = 0xffffffff;
      }
    }
  }
  else {
    result = 0xfffffffe;
  }
  return result;
}
