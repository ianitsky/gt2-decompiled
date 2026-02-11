// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_010.h"
#include <stdint.h>
#include <stddef.h>

// CONCAT11 macro: Concatenate 1 byte with 1 byte into a 16-bit value
#define CONCAT11(byte1, byte2) \
    (((uint16_t)(byte1) << 8) | ((uint16_t)(byte2)))

// CONCAT12 macro: Concatenate 1 byte with 1 word (16-bit) into a 32-bit value
#define CONCAT12(byte1, word2) \
    (((uint)(byte1) << 16) | ((uint)(word2)))

// Forward declarations for functions used in this file
void FUN_8007fe8c(undefined4 *renderStructure);
void FUN_8007fec8(undefined4 *renderStructure);
void FUN_8007b008(int, int);
void FUN_8007b994(undefined *, int, int);
void FUN_8007b8a0(int, undefined2, undefined2, int);
uint FUN_8007b8f8(int, int, int);
void FUN_80063ef4(int, undefined *);
undefined2 *FUN_80080450(undefined4, undefined4);
void FUN_arcade__80026760(undefined *);
void FUN_arcade__800265d4(undefined *, int, undefined4);
void FUN_arcade__8002667c(undefined *);
void FUN_8007af60(int);
int FUN_8008d180(int);
void FUN_8007b1d4(int, int);
void FUN_8007b050(int, undefined *);
void FUN_8007b0c4(int, int);
void FUN_8007b14c(int, int);
void FUN_8007b320(int, int, int, int, int, undefined4, int);

// External labels (function addresses)
extern void LAB_arcade__80026fb8(void);
extern void LAB_arcade__80027010(void);
extern void LAB_arcade__80015ab4(void);
extern void LAB_arcade__80017a14(void);
extern void LAB_arcade__8004f612_2(void);
extern void LAB_arcade__8004f606_2(void);
extern void LAB_arcade__8004f60a_2(void);

// Global variable declarations
extern undefined4 DAT_80129850;
extern undefined4 DAT_801cd554;
extern undefined4 DAT_arcade__8004f5fc;
extern undefined4 DAT_arcade__8004f600;
extern undefined4 DAT_80123810;
extern undefined4 DAT_arcade__8004f604;
extern undefined4 DAT_800f8775;
extern undefined DAT_800efd60[];
extern undefined DAT_800efdb9;
extern undefined4 DAT_arcade__8004f67c;
extern undefined4 DAT_80129840;
extern undefined4 DAT_800f8661;
extern undefined4 DAT_arcade__8004f6ac;
extern undefined4 DAT_arcade__8004f698;
extern undefined4 DAT_800f866d;
extern undefined4 DAT_arcade__8004f6b4;
extern undefined4 DAT_800f867a;
extern undefined4 DAT_800f8698;
extern undefined4 DAT_800f8675;
extern undefined4 DAT_800f8693;
extern undefined4 DAT_800f8688;
extern undefined4 DAT_800f86bb;
extern undefined4 DAT_800f86aa;
extern undefined4 DAT_800f871b;
extern undefined4 DAT_arcade__8004f610;
extern void LAB_arcade__8004f634(void);
extern void LAB_arcade__80027108(void);
extern void LAB_arcade__8004f650(void);
extern void LAB_arcade__800454e0(void);
extern void LAB_arcade__80027128(void);
extern undefined4 DAT_arcade__8004f65c;
extern undefined4 DAT_800f8634;
extern undefined4 DAT_800f8647;
extern undefined4 DAT_800f8652;
extern undefined4 DAT_arcade__8004f6e0;
extern void *PTR_LAB_arcade__800454e0_arcade__8004f618;
extern void *PTR_PTR_DAT_80093124;

void FUN_arcade__80013af8(undefined4 param_1,undefined4 param_2)

{

  FUN_arcade__8001804c((undefined *)&DAT_80129850,param_1,param_2);
  return;
}

void FUN_arcade__80013b28(undefined4 param_1)

{

  FUN_arcade__8001805c((undefined *)&DAT_80129850);
  return;
}

void FUN_arcade__80013b50(void)

{

  FUN_arcade__800181b8((char *)&DAT_80129850, 0, 0, 0);
  return;
}

undefined4 * FUN_arcade__80013b7c(undefined4 *param_1)

{
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fe8c(param_1);

  *param_1 = (undefined4)(uintptr_t)&LAB_arcade__80026fb8;
  return param_1;
}

void FUN_arcade__80013bb0(undefined4 *param_1)

{

  *param_1 = (undefined4)(uintptr_t)&LAB_arcade__80026fb8;
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fec8(param_1);
  return;
}

void FUN_arcade__80013bd8(int param_1,undefined4 param_2)

{

  *(undefined *)(param_1 + 0x210) = 0;

  *(undefined4 *)(param_1 + 0x1d0) = param_2;
  return;
}

void FUN_arcade__8001448c(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;

  param_3[2] = 0x160;
  param_2[2] = 0x160;
  param_3[3] = 0x1e0;
  param_2[3] = 0x1e0;

  if (*(char *)(param_1 + 0x214) == '\0') {

    *param_3 = 0;
    *param_2 = 0;

    iVar1 = *(short *)(param_1 + 0x212) * 200;
    if (iVar1 < 0) {

      iVar1 = iVar1 + 0xf;
    }
    param_2[1] = (short)(iVar1 >> 4);

    param_3[1] = (*(short *)(param_1 + 0x212) + -0x10) * 5;
    return;
  }

  *param_3 = 0;
  *param_2 = 0;

  param_3[1] = (0x10 - *(short *)(param_1 + 0x212)) * 5;

  iVar1 = *(short *)(param_1 + 0x212) * -200;
  if (iVar1 < 0) {

    iVar1 = iVar1 + 0xf;
  }
  param_2[1] = (short)(iVar1 >> 4);
  return;
}

void FUN_arcade__80014708(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined auStack_30 [24];

  puVar4 = (undefined4 *)(param_1 + 8);
  puVar2 = &DAT_1f800000;

  do {
    puVar5 = puVar2;
    puVar3 = puVar4;

    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];

    *puVar5 = *puVar3;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;

    puVar4 = puVar3 + 4;
    puVar2 = puVar5 + 4;
  } while (puVar4 != (undefined4 *)(param_1 + 0x68));

  uVar8 = puVar3[5];
  puVar5[4] = *puVar4;
  puVar5[5] = uVar8;

  iVar7 = *(int *)(param_2 + 0xc);
  cVar1 = *(char *)(param_2 + 4);

  DAT_1f8003ac = *(undefined2 *)(param_2 + 6);
  DAT_1f800398 = 0;
  DAT_1f80039c = (uint)*(byte *)(param_2 + 1) << 0x18;
  DAT_1f8003a0 = (uint)*(byte *)(param_2 + 2) << 0x10;

  uVar6 = (uint)CONCAT12(cVar1,CONCAT11(cVar1,cVar1));
  DAT_1f8003a4 = uVar6 | 0x26000000;
  DAT_1f8003a8 = uVar6 | 0x2e000000;
  DAT_1f8003ae = *(ushort *)(param_2 + 8) | 0x20;

  if (cVar1 == '\0') {
    DAT_1f800399 = 0;
  }
  else {
    DAT_1f800399 = 0xff;
  }

  FUN_8007b008(0x1f800000,param_2 + 0x10);
  FUN_8007b994(auStack_30,param_1 + 0x7c,param_2 + 0x10);

  iVar7 = *(int *)(iVar7 + 0x870);
  FUN_8007b8a0(0x1f800000,*(undefined2 *)(iVar7 + 0x4e),*(undefined2 *)(iVar7 + 0x4c),0xc);

  DAT_1f800070 = *(undefined4 *)(iVar7 + 0x14);
  DAT_1f800074 = *(undefined4 *)(iVar7 + 0x18);
  DAT_1f800068 = DAT_801c93ec;
  DAT_1f80006c = (undefined4 **)(DAT_801c93f0 + -0x2000);

  uVar6 = FUN_8007b8f8(0x1f800000,iVar7 + 0x3c,iVar7 + 0x44);
  if ((uVar6 & 0x1f) == 0) {
    FUN_80063ef4(iVar7,auStack_30);
  }

  DAT_801c93ec = DAT_1f800068;
  return;
}

undefined4 * FUN_arcade__80014898(undefined4 *param_1)

{
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fe8c(param_1);

  *param_1 = (undefined4)(uintptr_t)&LAB_arcade__80027010;
  return param_1;
}

void FUN_arcade__800148cc(undefined4 *param_1)

{

  *param_1 = (undefined4)(uintptr_t)&LAB_arcade__80027010;
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fec8(param_1);
  return;
}

void FUN_arcade__80014be0
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
               int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  FUN_8007af60(param_2);

  iVar1 = (param_7 * 0x6e) / 100;

  iVar2 = 0x400;
  if (0x800 < param_4) {
    iVar2 = 0xc00;
  }

  iVar2 = FUN_8008d180(iVar2 - param_4);
  param_5 = param_5 * iVar2;
  if (param_5 < 0) {
    param_5 = param_5 + 0x3ff;
  }
  param_5 = param_5 >> 10;

  if (param_4 < 0x801) {
    param_4 = param_4 * 0x6d4;
    if (param_4 < 0) {
      param_4 = param_4 + 0x7ff;
    }
    iVar2 = (param_4 >> 0xb) + 0x96;
  }
  else {
    iVar2 = (param_4 + -0x800) * 0x6d4;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7ff;
    }
    iVar2 = (iVar2 >> 0xb) + 0x896;
  }

  if (param_3 == 1) {
    FUN_8007b1d4(param_2,param_5);

    local_30 = 0x28f;
    local_2c = 0xffffe667;
    local_28 = 0xfffa0000;
    FUN_8007b050(param_2,&local_30);
    FUN_8007b0c4(param_2,0x14);
    FUN_8007b14c(param_2,iVar2);
    uVar3 = 300;
  }
  else if (param_3 < 2) {
    if (param_3 != 0) {
      return;
    }

    FUN_8007b1d4(param_2,param_5);

    local_30 = 0;
    local_2c = 0;
    local_28 = 0xfffb0000;
    FUN_8007b050(param_2,&local_30);
    FUN_8007b0c4(param_2,0x96);
    FUN_8007b14c(param_2,iVar2);
    uVar3 = 300;
  }
  else if (param_3 == 2) {
    FUN_8007b1d4(param_2,param_5);

    local_30 = 0xffffb0a4;
    local_2c = 0xffff8ccd;
    local_28 = 0xfffb0000;
    FUN_8007b050(param_2,&local_30);
    FUN_8007b14c(param_2,iVar2);
    uVar3 = 300;
  }
  else {
    if (param_3 != 3) {
      return;
    }

    FUN_8007b1d4(param_2,param_5);

    local_2c = 0x3333;
    local_30 = 0;
    local_28 = 0xfffc0000;
    FUN_8007b050(param_2,&local_30);
    FUN_8007b0c4(param_2,0x96);
    FUN_8007b14c(param_2,iVar2);
    uVar3 = 200;
  }

  FUN_8007b320(param_1,-param_6,param_6,iVar1,-iVar1,uVar3,0x7fff);
  return;
}

undefined4 FUN_arcade__80015750(int param_1,undefined4 param_2,undefined4 param_3)

{

  if (*(char *)(param_1 + 0x70) == '\0') {

    *(undefined *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = param_2;
    *(undefined4 *)(param_1 + 0x78) = param_3;
    return 1;
  }
  return 0;
}

void FUN_arcade__8001577c(int param_1)

{

  if (*(char *)(param_1 + 0x70) != '\0') {

    (**(code **)(param_1 + 0x74))();

    *(undefined *)(param_1 + 0x70) = 0;
  }
  return;
}

void FUN_arcade__800157c0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;

  uVar2 = *(undefined4 *)(param_1 + *(char *)(param_1 + 0x210) * 4 + 0x1d0);

  bVar1 = *(char *)(param_1 + 0x210) + 1;

  *(byte *)(param_1 + 0x210) = bVar1;

  *(undefined4 *)(param_1 + 0x1cc) = uVar2;

  *(undefined4 *)(param_1 + ((int)((uint)bVar1 << 0x18) >> 0x16) + 0x1d0) = param_2;
  return;
}

int FUN_arcade__800157f4(int param_1)

{
  char cVar1;

  if (0 < *(char *)(param_1 + 0x210)) {

    cVar1 = *(char *)(param_1 + 0x210) + -1;

    *(undefined4 *)(param_1 + 0x1cc) =
         *(undefined4 *)(param_1 + *(char *)(param_1 + 0x210) * 4 + 0x1d0);

    *(char *)(param_1 + 0x210) = cVar1;
    return (int)cVar1;
  }
  return -1;
}

void FUN_arcade__80015834(undefined *param_1)

{

  *param_1 = 0;

  param_1[1] = 0;
  return;
}

bool FUN_arcade__80015840(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;

  cVar1 = *param_1;

  if (cVar1 == '\0') {

    FUN_8007cfdc(param_2,param_3,param_4,0);

    *param_1 = '\x01';

    param_1[1] = '\x03';
  }

  return cVar1 == '\0';
}

undefined4 FUN_arcade__8001589c(char *param_1)

{
  int iVar1;

  if (param_1[1] == '\x05') {

    iVar1 = FUN_8007c570();
    if (iVar1 != 1) {
      return 0;
    }

    param_1[1] = param_1[1] + '\x01';
  }
  else if (param_1[1] != '\x06') {

    if ((*param_1 == '\0') && (DAT_801f0676 == '\0')) {

      param_1[1] = '\0';
      return 1;
    }

    *param_1 = '\x01';
    param_1[1] = '\x05';
    return 0;
  }

  param_1[1] = '\0';
  *param_1 = '\0';
  return 1;
}

undefined4 FUN_arcade__80015960(undefined *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;

  *param_2 = 0xffffffff;
  uVar2 = 1;

  switch(param_1[1]) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    if (DAT_801f0676 == '\0') goto switchD_arcade__800159a8_caseD_3;

    iVar1 = FUN_8007c570();
    if (iVar1 != 1) {
      return 1;
    }
    param_1[1] = param_1[1] + '\x01';
  case 2:
    param_1[1] = param_1[1] + '\x01';
  case 3:
    goto switchD_arcade__800159a8_caseD_3;
  case 4:
    *param_2 = DAT_801f0564;
    if (DAT_801f0676 != '\0') {
      return 1;
    }

    iVar1 = FUN_80081c94();
    if (iVar1 != 0) {
      param_1[1] = 3;
      return 1;
    }
    uVar2 = 2;
    param_1[1] = 0;
    break;
  case 5:

    iVar1 = FUN_8007c570();
    if (iVar1 != 1) {
      return 1;
    }
    param_1[1] = param_1[1] + '\x01';
  case 6:
    uVar2 = 2;
    param_1[1] = 0;
    break;
  default:
    goto switchD_arcade__800159a8_caseD_7;
  }
  *param_1 = 0;
switchD_arcade__800159a8_caseD_7:
  return uVar2;

switchD_arcade__800159a8_caseD_3:

  FUN_80081c5c();

  iVar1 = FUN_8007c4ec(7);
  if (iVar1 == 0) {
    return 1;
  }
  param_1[1] = 4;
  return 1;
}

void FUN_arcade__80015dd4(int param_1,int param_2)

{
  undefined auStack_208 [512];

  if (param_2 < 0) {
    param_2 = (int)*(char *)(param_1 + 0xd);
  }

  *(char *)(param_1 + 0xd) = (char)param_2;

  FUN_80067960(auStack_208,*(int *)(param_1 + 0x44) + param_2 * 0x240 + 0x20,0,0);

  FUN_80067824(auStack_208,(int)*(char *)(param_1 + 0xc),0);

  if (*(char *)(param_1 + 0x11) != '\0') {
    FUN_800678e8(*(undefined4 *)(param_1 + 0x50),(int)*(char *)(param_1 + 0xc),1);
  }
  return;
}

void FUN_arcade__80015e5c(int param_1)

{

  FUN_arcade__80015dd4(param_1,(int)*(char *)(param_1 + 0xd));

  *(undefined *)(param_1 + 0x21) = 0;
  return;
}

uint FUN_arcade__80015e8c(int param_1)

{

  if (*(char *)(param_1 + 0xe) != '\0') {

    return (uint)**(ushort **)(param_1 + 0x44);
  }

  return 0xffffffff;
}

void FUN_arcade__80015eb8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;

  iVar2 = FUN_arcade__80015e8c(0);

  if (*(char *)(param_1 + 0xe) != '\0') {

    param_2 = param_2 + *(char *)(param_1 + 0xd);
    bVar1 = param_2 < iVar2;

    if (param_2 < 0) {
      param_2 = param_2 + iVar2;
      do {
        bVar1 = param_2 < 0;
        param_2 = param_2 + iVar2;
      } while (bVar1);
      param_2 = param_2 - iVar2;
      bVar1 = param_2 < iVar2;
    }

    while (param_2 = param_2 - iVar2, !bVar1) {
      bVar1 = param_2 < iVar2;
    }

    *(char *)(param_1 + 0xd) = (char)param_2 + (char)iVar2;

    *(undefined *)(param_1 + 0x21) = 1;
  }
  return;
}

void FUN_arcade__80015f40(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined auStack_e8 [2];
  short local_e6;
  short local_e0;
  short local_da;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined local_b8;
  undefined local_b7;
  undefined local_b6;
  undefined local_b5;
  undefined local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined auStack_a8 [96];
  undefined auStack_48 [32];

  if (*(char *)(param_1 + 7) != '\0') {

    FUN_8007af60(auStack_e8);

    FUN_8007b14c(auStack_e8,-(int)*(short *)(param_4 + 0xae));
    FUN_8007b0c4(auStack_e8,-(int)*(short *)(param_4 + 0xac));

    local_c8 = *(undefined4 *)(param_4 + 0xa0);
    local_c4 = *(undefined4 *)(param_4 + 0xa4);
    local_c0 = *(undefined4 *)(param_4 + 0xa8);
    FUN_8007b050(auStack_e8,&local_c8);

    iVar1 = param_4 + 4;

    *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_4 + 0xc0);
    *(undefined2 *)(param_4 + 6) = *(undefined2 *)(param_4 + 0xc2);
    *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_4 + 0xc4);
    *(undefined2 *)(param_4 + 10) = *(undefined2 *)(param_4 + 0xc6);

    FUN_8007b320(iVar1,(int)*(short *)(param_4 + 200),(int)*(short *)(param_4 + 0xca),
                 (int)*(short *)(param_4 + 0xcc),(int)*(short *)(param_4 + 0xce),
                 (int)*(short *)(param_4 + 0xd0),(int)*(short *)(param_4 + 0xd2));

    FUN_8007b374(iVar1,auStack_e8,*(undefined4 *)(param_2 + 8),0x10);

    local_b8 = 1;
    local_b7 = 0;
    local_b6 = 0;
    local_b5 = 1;

    local_ac = *(undefined4 *)(param_1 + 0x20);
    local_b2 = *param_1;
    local_b0 = param_1[1];
    local_b4 = 0x40;

    FUN_8007af60(auStack_a8);

    local_c4 = FUN_80061544(local_ac);
    local_c8 = 0;
    local_c0 = 0;
    FUN_8007b050(auStack_a8,&local_c8);

    FUN_80061490(&local_b8);

    FUN_8007af60(auStack_48);

    FUN_80067444(iVar1,&local_b8,0);

    if (*(char *)(param_4 + 0xd4) != '\0') {

      FUN_8007af60(auStack_e8);

      FUN_8007b0c4(auStack_e8,-(int)*(short *)(param_4 + 0xac));

      local_c8 = *(undefined4 *)(param_4 + 0xa0);
      local_c4 = *(undefined4 *)(param_4 + 0xa4);
      local_c0 = *(undefined4 *)(param_4 + 0xa8);
      FUN_8007b050(auStack_e8,&local_c8);

      FUN_8007b374(iVar1,auStack_e8,*(undefined4 *)(param_2 + 8),0x10);

      FUN_arcade__80016b7c
                (param_1 + 0x2c,*(int *)(param_2 + 8) + 0xa0,iVar1,*(char *)(param_4 + 0xd5) != '\0'
                 ,*(undefined4 *)(param_4 + 0xd8));
    }

    if (param_3 != 0) {

      local_b5 = 0;
      local_b8 = 2;
      local_b7 = 0;

      FUN_8007af60(auStack_e8);

      FUN_8007b14c(auStack_e8,-(int)*(short *)(param_4 + 0xae));
      FUN_8007b0c4(auStack_e8,(int)*(short *)(param_4 + 0xac));

      local_c8 = *(undefined4 *)(param_4 + 0xa0);
      local_c4 = *(undefined4 *)(param_4 + 0xa4);
      local_c0 = *(undefined4 *)(param_4 + 0xa8);
      FUN_8007b050(auStack_e8,&local_c8);

      local_e6 = -local_e6;
      local_da = -local_da;
      local_e0 = -local_e0;

      FUN_8007b374(iVar1,auStack_e8,*(undefined4 *)(param_3 + 8),0x10);

      FUN_8007af60(auStack_a8);

      local_c4 = FUN_80061544(local_ac);
      local_c8 = 0;
      local_c0 = 0;
      FUN_8007b050(auStack_a8,&local_c8);
    }
  }
  return;
}

void FUN_arcade__80016234
               (undefined2 *param_1,undefined4 *param_2,undefined param_3,undefined2 param_4,
               undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  *param_1 = param_4;
  *(undefined *)(param_1 + 6) = param_3;
  param_1[1] = param_5;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];

  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x22) = uVar1;

  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar3;

  uVar1 = param_2[5];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2a) = uVar1;

  *(undefined *)(param_1 + 7) = 0;
  *(undefined *)((int)param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined *)((int)param_1 + 0x19) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)((int)param_1 + 0x1d) = 0;
  param_1[2] = 0;
  *(undefined *)((int)param_1 + 0x21) = 0;
  *(undefined *)((int)param_1 + 0xd) = 0;

  FUN_arcade__80016ad4((int *)(param_1 + 0x2c));
  return;
}

void FUN_arcade__800162c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_8005d950(param_3);

  FUN_arcade__800165e8(param_1,param_2);

  uVar1 = *(undefined2 *)(iVar2 + 4);

  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined *)(param_1 + 0x1e) = 0;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;

  *(undefined2 *)(param_1 + 4) = uVar1;

  uVar3 = FUN_8005d79c(uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar3;

  uVar3 = FUN_8005d79c(*(ushort *)(param_1 + 4) + 1);
  *(undefined4 *)(param_1 + 0x30) = uVar3;

  *(undefined4 *)(param_1 + 0x38) = 0;

  *(undefined *)(param_1 + 0x10) = 1;
  *(undefined *)(param_1 + 0x11) = 0;
  return;
}

void FUN_arcade__80016368(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined auStack_28 [4];
  int local_24;

  uVar9 = *(undefined4 *)(&DAT_801cd554 + param_3 * 0x2014 + param_4 * 0x52 + 0x48);
  iVar10 = *(int *)(&DAT_801cd554 + param_3 * 0x2014 + param_4 * 0x52 + 4);
  uVar11 = *(uint *)(&DAT_801cd554 + param_3 * 0x2014 + param_4 * 0x52 + 6);

  FUN_arcade__800162c0(param_1,param_2,uVar9);

  *(undefined *)(param_1 + 0xd) = 0;

  iVar3 = FUN_80060bec(uVar9,auStack_28,&local_24);
  iVar4 = 0;
  if (0 < iVar3) {
    do {

      if (*(char *)(local_24 + iVar4) == iVar10) {
        *(char *)(param_1 + 0xd) = (char)iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }

  puVar6 = (undefined4 *)(param_1 + 400);
  puVar5 = (undefined4 *)(&DAT_801cd554 + param_3 * 0x2014 + param_4 * 0x52 + 6);
  do {

    uVar9 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar9;
    puVar6[2] = uVar7;
    puVar6[3] = uVar8;
    puVar5 = puVar5 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar5 != (undefined4 *)(&DAT_801cd554 + param_3 * 0x2014 + param_4 * 0x52 + 0x46));
  *puVar6 = *puVar5;

  *(undefined2 *)(param_1 + 0x444) = 2;

  *(byte *)(param_1 + 0x29e) =
       (byte)((ushort)(&DAT_801cd554)[param_3 * 0x2014 + param_4 * 0x52 + 0x4c] >> 0xd);

  uVar1 = (&DAT_801cd554)[param_3 * 0x2014 + param_4 * 0x52 + 0x4c];
  *(undefined2 *)(param_1 + 0x3d6) = 0;
  *(ushort *)(param_1 + 0x26e) = uVar1 & 0x1fff;

  uVar1 = (&DAT_801cd554)[param_3 * 0x2014 + param_4 * 0x52 + 0x4e];
  *(undefined2 *)(param_1 + 0x3da) = 0;
  *(ushort *)(param_1 + 0x3d4) = uVar1 & 0x3fff;

  uVar2 = (&DAT_801cd554)[param_3 * 0x2014 + param_4 * 0x52 + 0x4d];
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined2 *)(param_1 + 0x3d8) = uVar2;

  if ((uVar11 & 0xffffe0ff) != 0) {

    *(undefined *)(param_1 + 0x11) = 1;
    uVar9 = FUN_80060d74();
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    uVar9 = FUN_8005d79c();
    *(undefined4 *)(param_1 + 0x38) = uVar9;
    *(ushort *)(param_1 + 0x444) = (ushort)(uVar11 >> 8) & 0x1f;
  }
  return;
}

void FUN_arcade__8001654c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_18 [4];
  undefined auStack_14 [4];

  uVar1 = FUN_80060924(param_3);

  FUN_arcade__800162c0(param_1,param_2,uVar1);

  iVar2 = FUN_80060bec(uVar1,auStack_18,auStack_14);

  *(char *)(param_1 + 0xd) = (char)(param_4 % iVar2);

  FUN_80076954(uVar1,param_1 + 400);

  FUN_800771ac(param_1 + 400,param_1 + 0x214);

  *(undefined2 *)(param_1 + 0x444) = 2;
  *(undefined4 *)(param_1 + 0x440) = 1;
  return;
}

void FUN_arcade__800165e8(int param_1,undefined4 param_2)

{

  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;

  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_arcade__8001577c(param_2);
  }

  *(undefined *)(param_1 + 0x19) = 0;

  if (*(char *)(param_1 + 0x1c) != '\0') {
    *(undefined *)(param_1 + 0x1d) = 1;
  }

  *(undefined *)(param_1 + 0x10) = 0;
  return;
}

void FUN_arcade__80016640(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20 [2];

  iVar4 = param_2 + 0x224;

  if ((*(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1d)) != 0) {

    *(undefined *)(param_2 + 0x224) = 0;
    *(undefined *)(param_2 + 0x225) = 0;
    *(undefined *)(param_1 + 0x1d) = 0;
    *(undefined *)(param_2 + 0x226) = 0;
    *(undefined *)(param_1 + 0x1c) = 0;
    return;
  }

  if ((*(char *)(param_1 + 0x19) != '\0') &&
     (iVar2 = FUN_arcade__80015750(param_2,&LAB_arcade__80015ab4,param_1), iVar2 != 0)) {

    *(undefined *)(param_1 + 0x18) = 1;
    *(undefined *)(param_1 + 0x19) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }

  switch((int)((*(byte *)(param_1 + 0x10) - 1) * 0x1000000) >> 0x18) {
  case 0:

    if ((*(char *)(param_1 + 0xf) == '\0') && (*(int *)(param_1 + 0x440) != 0)) {
      FUN_80075930(param_1 + 0x214,param_1 + 0x3d4);
    }
    *(undefined *)(param_1 + 0xf) = 1;

    if (*(char *)(param_1 + 0x1d) != '\0') {
      return;
    }
    if (*(char *)(param_2 + 0x226) != '\0') {
      return;
    }

    *(undefined *)(param_2 + 0x226) = 1;
    cVar1 = *(char *)(param_1 + 0x10);
    *(undefined *)(param_1 + 0x1c) = 1;
    *(undefined *)(param_1 + 0x19) = 1;
    *(undefined *)(param_1 + 0x1a) = 0;
    *(undefined *)(param_1 + 0x1b) = 0;
    break;
  case 1:

    iVar2 = FUN_8005d74c(*(undefined2 *)(param_1 + 4));
    iVar2 = DAT_801c93e8 + iVar2;
    uVar3 = FUN_8005d79c(*(undefined2 *)(param_1 + 4));

    iVar2 = FUN_arcade__80015840(iVar4,*(undefined4 *)(param_1 + 0x48),iVar2,uVar3);
    if (iVar2 == 0) {
      return;
    }
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x01';

  case 2:

    iVar2 = FUN_8005d79c(*(undefined2 *)(param_1 + 4));
    iVar4 = FUN_arcade__80015960(iVar4,local_20);

    if (local_20[0] < 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      *(int *)(param_1 + 0x24) = iVar2 - local_20[0];
    }

    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0x10) = 2;
      return;
    }
    if (iVar4 != 2) {
      return;
    }

    cVar1 = *(char *)(param_1 + 0x10);
    *(undefined *)(param_1 + 0x1e) = 1;
    break;
  case 3:

    iVar2 = FUN_8005d74c(*(ushort *)(param_1 + 4) + 1);
    iVar2 = DAT_801c93e8 + iVar2;
    uVar3 = FUN_8005d79c(*(ushort *)(param_1 + 4) + 1);

    iVar2 = FUN_arcade__80015840(iVar4,*(undefined4 *)(param_1 + 0x4c),iVar2,uVar3);
    if (iVar2 == 0) {
      return;
    }
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x01';

  case 4:

    iVar2 = FUN_8005d79c(*(ushort *)(param_1 + 4) + 1);
    iVar4 = FUN_arcade__80015960(iVar4,local_20);

    if (local_20[0] < 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(int *)(param_1 + 0x2c) = iVar2 - local_20[0];
    }

    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0x10) = 4;
      return;
    }
    if (iVar4 != 2) {
      return;
    }

    *(undefined *)(param_1 + 0x1f) = 1;
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x01';

    if (*(char *)(param_1 + 0x11) != '\0') {
      return;
    }

    *(undefined *)(param_2 + 0x226) = 0;
    *(undefined *)(param_1 + 0x1c) = 0;
    *(undefined *)(param_1 + 0x10) = 8;
    return;
  case 5:

    iVar2 = FUN_8005d74c(*(undefined4 *)(param_1 + 0x14));
    iVar2 = DAT_801c93e8 + iVar2;
    uVar3 = FUN_8005d79c(*(undefined4 *)(param_1 + 0x14));

    iVar2 = FUN_arcade__80015840(iVar4,*(undefined4 *)(param_1 + 0x50),iVar2,uVar3);
    if (iVar2 == 0) {
      return;
    }
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x01';

  case 6:

    iVar2 = FUN_8005d79c(*(undefined4 *)(param_1 + 0x14));
    iVar4 = FUN_arcade__80015960(iVar4,local_20);

    if (local_20[0] < 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      *(int *)(param_1 + 0x34) = iVar2 - local_20[0];
    }

    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0x10) = 6;
      return;
    }
    if (iVar4 != 2) {
      return;
    }

    *(undefined *)(param_2 + 0x226) = 0;
    cVar1 = *(char *)(param_1 + 0x10);
    *(undefined *)(param_1 + 0x1c) = 0;
    *(undefined *)(param_1 + 0x20) = 1;
    break;

  case 7:

    if (*(char *)(param_1 + 0x1a) == '\0') {
      return;
    }
    *(undefined *)(param_1 + 0xe) = 1;

  default:
    *(undefined *)(param_1 + 0x10) = 0;
    return;
  }

  *(char *)(param_1 + 0x10) = cVar1 + '\x01';
  return;
}

void FUN_arcade__800169f4(void)

{

  DAT_arcade__8004f5fc = 0x17d0;

  DAT_arcade__8004f600 = 9000;
  return;
}

void FUN_arcade__80016a10(void)

{

  DAT_arcade__8004f5fc = 3000;

  DAT_arcade__8004f600 = 5000;
  return;
}

undefined4 FUN_arcade__80016a2c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;

  bVar1 = *(byte *)(param_1 + 0x29e);

  if (bVar1 == 2) {
    uVar2 = 2;
  }
  else if (bVar1 < 3) {
    uVar2 = 0;
    if (bVar1 == 0) {
      uVar2 = 1;
    }
  }
  else if (bVar1 == 3) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    if (bVar1 == 4) {
      uVar2 = 4;
    }
  }
  return uVar2;
}

void FUN_arcade__80016a98(int param_1,undefined2 *param_2)

{

  param_2[4] = *(undefined2 *)(param_1 + 0x26e);

  param_2[1] = *(undefined2 *)(param_1 + 0x3d6);

  *param_2 = *(undefined2 *)(param_1 + 0x3d4);

  param_2[3] = *(undefined2 *)(param_1 + 0x3da);

  param_2[2] = *(undefined2 *)(param_1 + 0x3d8);
  return;
}

void FUN_arcade__80016ad4(int *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;

  iVar5 = 0;
  piVar4 = param_1;

  do {

    uVar3 = (iVar5 << 0xc) / 0x18 & 0xfff;

    sVar1 = DAT_80093150[uVar3 + 0x400];
    sVar2 = DAT_80093150[uVar3];

    iVar5 = iVar5 + 1;

    piVar4[1] = 0;

    *piVar4 = (sVar1 * 0x400 >> 0xc) << 8;

    piVar4[2] = (sVar2 * 0x400 >> 0xc) << 8;

    piVar4 = piVar4 + 3;
  } while (iVar5 < 0x19);

  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  return;
}

void FUN_arcade__80016b7c(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;

  puVar6 = &DAT_1f800000;

  iVar3 = 0x30;
  if (param_4 != 0) {
    iVar3 = 0x32;
  }

  FUN_8007e5e0(param_3 + 8,0x1f800000,param_1,0x1a);

  iVar7 = 0;
  puVar5 = (undefined2 *)((int)&DAT_1f800000 + 2);

  do {

    iVar4 = (int)(short)DAT_1f8000cc;
    if ((int)(short)DAT_1f8000cc < (int)(short)puVar5[1]) {
      iVar4 = (int)(short)puVar5[1];
    }
    if (iVar4 < (short)puVar5[5]) {
      iVar4 = (int)(short)puVar5[5];
    }

    iVar4 = param_2 + iVar4 * 4;
    puVar2 = (uint *)FUN_8007e708(iVar4);

    *puVar2 = iVar3 << 0x18 | param_5;
    *(undefined2 *)(puVar2 + 1) = (undefined2)DAT_1f8000c8;
    uVar1 = *(undefined2 *)((char *)&DAT_1f8000c8 + 2);
    puVar2[2] = 0;
    *(undefined2 *)((int)puVar2 + 6) = uVar1;
    *(undefined2 *)(puVar2 + 3) = *(undefined2 *)puVar6;
    uVar1 = *puVar5;
    puVar6 = puVar6 + 2;
    puVar2[4] = 0;
    *(undefined2 *)((int)puVar2 + 0xe) = uVar1;
    puVar5 = puVar5 + 4;
    *(undefined2 *)(puVar2 + 5) = *(undefined2 *)puVar6;

    iVar7 = iVar7 + 1;

    *(undefined2 *)((int)puVar2 + 0x16) = *puVar5;

    FUN_8007da44(iVar4,0x200);

  } while (iVar7 < 0x18);
  return;
}

void FUN_arcade__80016cc0(ushort *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;

  sVar2 = (short)param_2 * 0x80;

  if (param_3 < 0) {
    iVar5 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar5 = *(int *)(param_1 + 2) + *(int *)(*(int *)(param_1 + 2) + param_3 * 4 + 4);
  }

  sVar1 = (*param_1 & 0x10) * 0x10;
  local_26 = sVar1 + sVar2;

  uVar4 = (undefined2)(((int)(short)*param_1 & 0xfU) << 6);

  local_24 = *(undefined2 *)(iVar5 + 0x10);
  local_22 = *(undefined2 *)(iVar5 + 0x12);
  local_28 = uVar4;

  FUN_8007bc1c(iVar5,&local_28);

  local_26 = sVar1 + sVar2 + 1;

  iVar3 = iVar5 + 8 + *(int *)(iVar5 + 8);

  local_24 = *(undefined2 *)(iVar3 + 8);
  local_22 = *(undefined2 *)(iVar3 + 10);
  local_28 = uVar4;

  FUN_8007bc58(iVar5,&local_28);

  param_1[param_2 + 5] = *(short *)(iVar3 + 8) << 2;
  param_1[param_2 + 7] = *(ushort *)(iVar3 + 10);

  *(undefined *)((int)param_1 + param_2 + 0x1c) = 1;
  *(undefined *)((int)param_1 + param_2 + 0x22) = 0;
  return;
}

void FUN_arcade__80016de4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  iVar2 = param_1;

  do {

    if (*(char *)(param_1 + iVar1 + 0x22) != '\0') {

      if (*(short *)(iVar2 + 0x1e) < 0) {
        param_2 = 1;
      }

      if (param_2 != 0) {
        FUN_arcade__80016cc0((ushort *)param_1, iVar1, 0);
      }
    }

    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar1 < 2);
  return;
}

void FUN_arcade__80016e70
               (undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{

  *param_1 = param_2;

  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;

  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x27) = 0;

  FUN_arcade__80016ea0(0);
  return;
}

void FUN_arcade__80016ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = param_1;

  do {

    *(undefined4 *)(iVar3 + 0x14) = 0;

    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;

    *(undefined *)(iVar1 + 0x1c) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;

    iVar3 = iVar3 + 4;
  } while (iVar2 < 2);

  *(undefined *)(param_1 + 8) = 0;

  if (*(char *)(param_1 + 0x26) != '\0') {
    *(undefined *)(param_1 + 0x27) = 1;
  }

  *(undefined *)(param_1 + 0x25) = 0;
  return;
}

void FUN_arcade__80016ee8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  uVar1 = (int)*(char *)(param_1 + 8) + 1U & 1;

  iVar2 = param_1 + uVar1;
  iVar3 = param_1 + uVar1 * 4;

  *(char *)(param_1 + 8) = (char)uVar1;

  if (*(char *)(iVar2 + 0x1c) == '\0' || *(int *)(iVar3 + 0x14) != param_3) {

    FUN_arcade__80016fb4(0);

    *(undefined *)(iVar2 + 0x1c) = 0;
    *(int *)(iVar3 + 0x14) = param_3;

    if (param_2 < 0) {

      *(undefined *)(param_1 + 0x25) = 1;
      *(undefined2 *)(param_1 + uVar1 * 2 + 0x1e) = 0xffff;
    }
    else {

      *(undefined *)(iVar2 + 0x22) = 1;
      *(short *)(param_1 + uVar1 * 2 + 0x1e) = (short)param_2;
    }
  }
  return;
}

void FUN_arcade__80016fb4(int param_1)

{

  if (*(char *)(param_1 + 0x26) != '\0') {
    *(undefined *)(param_1 + 0x27) = 1;
  }

  *(undefined *)(param_1 + 0x25) = 0;
  return;
}

void FUN_arcade__80016fd0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined auStack_20 [8];

  if ((*(byte *)(param_1 + 0x26) & *(byte *)(param_1 + 0x27)) != 0) {

    *(undefined *)(param_2 + 0x224) = 0;
    *(undefined *)(param_2 + 0x225) = 0;
    *(undefined *)(param_1 + 0x27) = 0;
    *(undefined *)(param_2 + 0x226) = 0;
    *(undefined *)(param_1 + 0x26) = 0;
  }

  cVar1 = *(char *)(param_1 + 0x25);

  if (cVar1 == '\x02') {

    iVar3 = FUN_8005d950(*(undefined4 *)(param_1 + *(char *)(param_1 + 8) * 4 + 0x14));
    iVar4 = *(ushort *)(iVar3 + 6) + 1;
    iVar3 = FUN_8005d74c(iVar4);
    iVar3 = DAT_801c93e8 + iVar3;
    uVar2 = FUN_8005d79c(iVar4);

    iVar3 = FUN_arcade__80015840(param_2 + 0x224,*(undefined4 *)(param_1 + 0x28),iVar3,uVar2);
    if (iVar3 == 0) {
      return;
    }
  }
  else {

    if (cVar1 < '\x03') {
      if (cVar1 != '\x01') {
        *(undefined *)(param_1 + 0x25) = 0;
        return;
      }

      if (*(char *)(param_1 + 0x27) != '\0') {
        return;
      }
      if (*(char *)(param_2 + 0x226) != '\0') {
        return;
      }

      *(undefined *)(param_2 + 0x226) = 1;
      cVar1 = *(char *)(param_1 + 0x25);
      *(undefined *)(param_1 + 0x26) = 1;
      goto LAB_arcade__80017134;
    }

    if (cVar1 != '\x03') {
      *(undefined *)(param_1 + 0x25) = 0;
      return;
    }

    iVar3 = FUN_arcade__80015960(param_2 + 0x224,auStack_20);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x25) = 2;
      return;
    }
    if (iVar3 != 2) {
      return;
    }

    *(undefined *)(param_2 + 0x226) = 0;
    *(undefined *)(param_1 + 0x26) = 0;
    *(undefined *)(param_1 + *(char *)(param_1 + 8) + 0x22) = 1;
  }

  cVar1 = *(char *)(param_1 + 0x25);
LAB_arcade__80017134:
  *(char *)(param_1 + 0x25) = cVar1 + '\x01';
  return;
}

void FUN_arcade__80017158
               (ushort *param_1,undefined4 param_2,int param_3,short param_4,short param_5,
               uint param_6,int param_7,int param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  ushort uVar12;

  iVar9 = 0;
  uVar2 = *param_1;
  puVar10 = param_1;

  do {
    iVar11 = iVar9;

    if (*(int *)(puVar10 + 10) == param_3 && *(char *)((int)param_1 + iVar9 + 0x1c) == '\x01') {
      break;
    }
    iVar9 = iVar9 + 1;
    puVar10 = puVar10 + 2;
    iVar11 = -1;
  } while (iVar9 < 2);

  if (-1 < iVar11) {

    cVar5 = (char)iVar11 * -0x80;
    uVar3 = param_1[iVar11 + 5];
    uVar4 = param_1[iVar11 + 7];

    uVar12 = (ushort)(((int)(short)uVar2 & 0x10U) << 10) |
             (uVar2 & 0xf) * 4 + (short)iVar11 * 0x2000;

    if (param_8 < 1) {

      psVar8 = (short *)FUN_80081478(param_2,param_6 | param_6 << 8 | param_6 << 0x10);

      *psVar8 = param_4 - ((short)uVar3 >> 1);
      psVar8[1] = param_5 + 2;

      if (param_7 != 0) {
        psVar8[1] = param_5 - ((short)uVar4 >> 1);
      }

      psVar8[3] = uVar12;
      *(undefined *)(psVar8 + 2) = 0;
      *(char *)((int)psVar8 + 5) = cVar5 + '\x01';
      psVar8[4] = uVar3;
      psVar8[5] = uVar4;

      FUN_8007da44(param_2,(int)(short)uVar2);
    }
    else {

      iVar9 = FUN_8007e864(param_2,param_6 | param_6 << 8 | param_6 << 0x10);

      sVar7 = (short)((uint)((short)uVar3 * param_8) >> 8);
      sVar6 = param_4 - sVar7;

      *(short *)(iVar9 + 0x14) = sVar6;
      *(short *)(iVar9 + 4) = sVar6;
      param_4 = param_4 + sVar7;
      *(short *)(iVar9 + 0x1c) = param_4;
      *(short *)(iVar9 + 0xc) = param_4;

      if (param_7 == 0) {

        *(short *)(iVar9 + 0xe) = param_5 + 2;
        *(short *)(iVar9 + 6) = param_5 + 2;
        sVar7 = (short)((short)uVar4 * param_8 >> 7) + 2;
      }
      else {

        sVar7 = (short)((uint)((short)uVar4 * param_8) >> 8);
        *(short *)(iVar9 + 0xe) = param_5 - sVar7;
        *(short *)(iVar9 + 6) = param_5 - sVar7;
      }

      *(short *)(iVar9 + 0x1e) = param_5 + sVar7;
      *(short *)(iVar9 + 0x16) = param_5 + sVar7;

      *(undefined *)(iVar9 + 0x18) = 0;
      *(undefined *)(iVar9 + 8) = 0;
      cVar1 = *(char *)(param_1 + iVar11 + 5);
      *(char *)(iVar9 + 0x11) = cVar5 + '\x01';
      *(char *)(iVar9 + 9) = cVar5 + '\x01';
      *(char *)(iVar9 + 0x20) = cVar1 + -1;
      *(char *)(iVar9 + 0x10) = cVar1 + -1;
      cVar1 = *(char *)(param_1 + iVar11 + 7);
      *(ushort *)(iVar9 + 10) = uVar12;
      *(ushort *)(iVar9 + 0x12) = uVar2;
      *(char *)(iVar9 + 0x21) = cVar1 + cVar5;
      *(char *)(iVar9 + 0x19) = cVar1 + cVar5;
    }
  }
  return;
}

void FUN_arcade__800173d4(undefined *param_1)

{

  *param_1 = 0;

  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

void FUN_arcade__800173e0(undefined *param_1,undefined4 param_2)

{

  *param_1 = 1;

  *(undefined2 *)(param_1 + 2) = 1;

  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

void FUN_arcade__800173f8(int param_1)

{

  *(undefined2 *)(param_1 + 2) = 0xffff;
  return;
}

void FUN_arcade__80017404(char *param_1)

{

  if (*param_1 == '\x01') {

    if (*(ushort *)(param_1 + 2) - 1 < 0xb) {
      *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) + 1;
    }

    if (((*(short *)(param_1 + 2) < -0xb ^ 1) & (uint)(int)*(short *)(param_1 + 2) >> 0x1f) != 0) {
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
    }
  }
  return;
}

void FUN_arcade__800174a4
               (char *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_60 [64];

  if (*param_1 == '\x01') {

    iVar2 = (int)*(short *)(param_1 + 2);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xc;
    }

    *(undefined4 *)(param_3 + 0x10) = param_2;
    *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | 0x200000;

    FUN_8007da80(param_3,&DAT_80123810);

    uVar1 = FUN_8006b548(&DAT_arcade__8004f604,&LAB_arcade__8004f612_2,(iVar2 << 7) / 0xc,0x80);
    *(undefined4 *)(param_3 + 0x14) = uVar1;

    FUN_8008cf34(auStack_60,&DAT_800f8775,(int)**(short **)(param_1 + 4));
    FUN_8006b184(param_3,auStack_60,param_4,param_5,1,0xfffffffe,0);

    FUN_8008cf34(auStack_60,&DAT_800f8775,(int)*(short *)(*(int *)(param_1 + 4) + 4));
    FUN_8006b184(param_3,auStack_60,param_4,param_5 + param_6,1,0xfffffffe,0);
  }
  return;
}

void FUN_arcade__80017608(undefined *param_1)

{

  *param_1 = 0;

  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

void FUN_arcade__80017614(undefined *param_1,undefined4 param_2)

{

  *(undefined2 *)(param_1 + 2) = 1;

  *param_1 = 1;

  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

void FUN_arcade__80017628(int param_1)

{

  *(undefined2 *)(param_1 + 2) = 0xffff;
  return;
}

void FUN_arcade__80017634(char *param_1)

{

  if (*param_1 == '\x01') {

    if (*(ushort *)(param_1 + 2) - 1 < 0xb) {
      *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) + 1;
    }

    if (((*(short *)(param_1 + 2) < -0xb ^ 1) & (uint)(int)*(short *)(param_1 + 2) >> 0x1f) != 0) {
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
    }
  }
  return;
}

void FUN_arcade__800176d4(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined auStack_130 [256];
  int local_30;

  local_30 = param_5;

  if (*param_1 == '\x01') {

    iVar6 = (int)*(short *)(param_1 + 2);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xc;
    }

    *(undefined4 *)(param_3 + 0x10) = param_2;
    *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | 0x200000;

    iVar6 = (iVar6 << 7) / 0xc;

    FUN_8007da80(param_3,&DAT_80123810);

    uVar2 = FUN_8006b548(&DAT_arcade__8004f604,&LAB_arcade__8004f606_2,iVar6,0x80);
    *(undefined4 *)(param_3 + 0x14) = uVar2;

    for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {

      uVar2 = **(undefined4 **)(param_1 + 4);
      if (iVar5 < 4) {
        uVar2 = FUN_8005dd94(*(undefined4 **)(param_1 + 4),iVar5);
      }

      if (iVar5 == 4) {
        uVar3 = FUN_8006b548(&DAT_arcade__8004f604,&LAB_arcade__8004f60a_2,iVar6,0x80);
        *(undefined4 *)(param_3 + 0x14) = uVar3;
      }

      FUN_80068734(auStack_130,uVar2);
      FUN_8006b3f4(param_3,auStack_130,param_4,param_5 + 0x30,6,5,0,0);
      param_4 = param_4 + 0x3c;
    }

    param_4 = param_4 + -0x39;

    if (**(int **)(param_1 + 4) == -1) {

      uVar2 = FUN_8006b548(&DAT_arcade__8004f604,&DAT_arcade__8004f610,iVar6,0x80);
      *(undefined4 *)(param_3 + 0x14) = uVar2;

      FUN_8006ae28(param_3,&DAT_800f871b,param_4,param_5 + 0x18,1);
    }
    else {

      uVar2 = FUN_80060ae8((*(int **)(param_1 + 4))[5]);
      uVar3 = FUN_8006b548(&DAT_arcade__8004f604,&DAT_arcade__8004f610,iVar6,0x80);
      *(undefined4 *)(param_3 + 0x14) = uVar3;

      sVar1 = FUN_8006ae28(param_3,uVar2,param_4,param_5 + 0x18,1);
      psVar4 = (short *)FUN_8007d024(param_2,uVar3);
      *psVar4 = ((short)param_4 - sVar1) + -8;
      psVar4[1] = (short)param_5 + 0xc;
      psVar4[2] = 4;
      psVar4[3] = 6;
      FUN_8007da44(param_2,0x220);

      iVar5 = *(int *)(param_1 + 4);
      uVar2 = FUN_8006b548(&DAT_arcade__8004f604,&DAT_arcade__8004f610,iVar6,0x80);
      *(undefined4 *)(param_3 + 0x14) = uVar2;
      sVar1 = FUN_8006ae28(param_3,iVar5 + 0x18,param_4,local_30,1);
      psVar4 = (short *)FUN_8007d024(param_2,uVar2);
      *psVar4 = ((short)param_4 - sVar1) + -8;
      psVar4[1] = (short)local_30 + -0xc;
      psVar4[2] = 4;
      psVar4[3] = 6;
      FUN_8007da44(param_2,0x220);
    }
  }
  return;
}

void FUN_arcade__80017b7c
               (undefined2 *param_1,undefined2 param_2,int *param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;

  iVar5 = 0;

  *param_1 = param_2;
  *(int **)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[8] = 0;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)((int)param_1 + 0x1b) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)((int)param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 6) = param_5;

  piVar4 = param_3;
  while (bVar2 = iVar5 < *param_3, iVar5 = iVar5 + 1, bVar2) {
    piVar1 = piVar4 + 4;
    piVar4 = piVar4 + 4;

    uVar3 = FUN_80083004((int)param_3 + *piVar1);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    param_1 = param_1 + 2;
  }
  return;
}

void FUN_arcade__80017c1c(int param_1,undefined4 param_2,undefined4 param_3)

{

  FUN_arcade__80017c80(0, 0);

  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined2 *)(param_1 + 0x10) = 1;
  *(undefined *)(param_1 + 0x19) = 0;
  *(undefined *)(param_1 + 0x18) = 0;
  return;
}

void FUN_arcade__80017c60(void)

{

  FUN_arcade__80017c1c(0, 0, 0);
  return;
}

void FUN_arcade__80017c80(int param_1,undefined4 param_2)

{

  *(undefined *)(param_1 + 0x18) = 0;

  if (*(char *)(param_1 + 0x1a) != '\0') {
    FUN_arcade__8001577c(param_2);
  }

  *(undefined *)(param_1 + 0x1b) = 0;

  if (*(char *)(param_1 + 0x1e) != '\0') {
    *(undefined *)(param_1 + 0x1f) = 1;
  }

  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}

int FUN_arcade__80017cd4(int param_1,int param_2)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;

  ppiVar1 = (int **)(param_1 + 4);
  iVar3 = 0;

  while( true ) {

    if (**ppiVar1 <= iVar3) {
      return 0;
    }

    piVar2 = (int *)(param_1 + 0x20);
    param_1 = param_1 + 4;

    if (*piVar2 == param_2) break;

    iVar3 = iVar3 + 1;
  }

  return iVar3;
}

void FUN_arcade__80017d18(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined auStack_20 [8];

  if ((*(byte *)(param_1 + 0x1e) & *(byte *)(param_1 + 0x1f)) != 0) {

    *(undefined *)(param_2 + 0x224) = 0;
    *(undefined *)(param_2 + 0x225) = 0;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_2 + 0x226) = 0;
    *(undefined *)(param_1 + 0x1e) = 0;
    return;
  }

  if ((*(char *)(param_1 + 0x1b) != '\0') &&
     (iVar2 = FUN_arcade__80015750(param_2,&LAB_arcade__80017a14,param_1), iVar2 != 0)) {

    *(undefined *)(param_1 + 0x1a) = 1;
    *(undefined *)(param_1 + 0x1b) = 0;
  }

  switch((int)((*(ushort *)(param_1 + 0x10) - 1) * 0x10000) >> 0x10) {
  case 0:

    if (*(char *)(param_1 + 0x1f) != '\0') {
      return;
    }
    if (*(char *)(param_2 + 0x226) != '\0') {
      return;
    }

    *(undefined *)(param_2 + 0x226) = 1;
    *(undefined *)(param_1 + 0x1e) = 1;
    *(undefined *)(param_1 + 0x1b) = 1;
    *(undefined *)(param_1 + 0x1c) = 0;
    *(undefined *)(param_1 + 0x1d) = 0;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    return;

  case 1:
    break;

  case 2:
    goto switchD_arcade__80017dcc_caseD_2;

  case 3:
    if (*(char *)(param_1 + 0x1c) == '\0') {
      return;
    }

  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    sVar1 = *(short *)(param_1 + 0x10);
    goto LAB_arcade__80017ed8;

  case 10:
    *(undefined *)(param_1 + 0x18) = 1;

  default:
    *(undefined2 *)(param_1 + 0x10) = 0;
    return;
  }

  iVar2 = FUN_arcade__80017cd4(param_1,*(undefined4 *)(param_1 + 0x14));
  iVar3 = FUN_8005d718(0x21);
  iVar2 = *(int *)(param_1 + 4) + iVar2 * 0x10;

  iVar2 = FUN_arcade__80015840
                    (param_2 + 0x224,*(undefined4 *)(param_1 + 8),
                     DAT_801c93e8 + iVar3 + *(int *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 8));
  if (iVar2 == 0) {
    return;
  }

  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;

switchD_arcade__80017dcc_caseD_2:

  iVar2 = FUN_arcade__80015960(param_2 + 0x224,auStack_20);
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + 0x10) = 2;
  }
  else if (iVar2 == 2) {

    *(undefined *)(param_2 + 0x226) = 0;
    sVar1 = *(short *)(param_1 + 0x10);
    *(undefined *)(param_1 + 0x1e) = 0;
    *(undefined *)(param_1 + 0x19) = 1;

LAB_arcade__80017ed8:
    *(short *)(param_1 + 0x10) = sVar1 + 1;
  }
  return;
}

void FUN_arcade__80017f0c
               (short *param_1,undefined4 param_2,short param_3,short param_4,uint param_5)

{
  short sVar1;
  short *psVar2;

  sVar1 = *param_1;

  if (*(char *)(param_1 + 0xc) != '\0') {

    psVar2 = (short *)FUN_80081478(param_2,param_5 | param_5 << 8 | param_5 << 0x10);

    *psVar2 = param_3 + -0x1c;
    psVar2[1] = param_4 + -100;

    *(undefined *)((int)psVar2 + 5) = 1;
    psVar2[4] = 0xbc;

    psVar2[3] = (ushort)(((int)sVar1 & 0x10U) << 10) | (ushort)(((int)sVar1 & 0xfU) << 2);
    *(undefined *)(psVar2 + 2) = 0;
    psVar2[5] = 200;

    FUN_8007da44(param_2);
  }
  return;
}

void FUN_arcade__8001802c(undefined *param_1,undefined4 param_2)

{

  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *param_1 = 0;
  return;
}

void FUN_arcade__8001804c(undefined *param_1,undefined4 param_2,undefined2 param_3)

{

  *(undefined2 *)(param_1 + 8) = param_3;
  *param_1 = 1;
  return;
}

void FUN_arcade__8001805c(undefined *param_1)

{

  if (param_1[1] != '\0') {
    param_1[2] = 1;
  }

  *param_1 = 0;
  return;
}

void FUN_arcade__80018078(char *param_1,int param_2)

{
  char cVar1;

  if ((byte)(param_1[1] & param_1[2]) != 0) {

    if (param_1[3] != '\0') {
      FUN_arcade__80026760(&DAT_800efd60);
      param_1[3] = '\0';
    }

    *(undefined *)(param_2 + 0x226) = 0;
    param_1[1] = '\0';
    param_1[2] = '\0';
    return;
  }

  cVar1 = *param_1;

  if (cVar1 == '\x02') {

    FUN_arcade__800265d4(&DAT_800efd60,(int)*(short *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
    cVar1 = *param_1;
    param_1[3] = '\x01';
  }
  else {
    if ('\x02' < cVar1) {
      if (cVar1 == '\x03') {
        return;
      }
      *param_1 = '\0';
      return;
    }

    if (cVar1 != '\x01') {
      *param_1 = '\0';
      return;
    }

    if (param_1[2] != 0) {
      return;
    }
    if (*(char *)(param_2 + 0x226) != '\0') {
      return;
    }

    *(undefined *)(param_2 + 0x226) = 1;
    cVar1 = *param_1;
    param_1[1] = '\x01';
  }

  *param_1 = cVar1 + '\x01';
  return;
}

void FUN_arcade__80018170(char *param_1)

{

  if ((*param_1 == '\x03') && ((param_1[3] & 1U) != 0)) {
    FUN_arcade__8002667c(&DAT_800efd60);
  }
  return;
}

void FUN_arcade__800181b8(char *param_1,undefined4 param_2,undefined2 param_3,short param_4)

{
  undefined2 *puVar1;

  if (*param_1 == '\x03' && DAT_800efdb9 != '\0') {

    puVar1 = (undefined2 *)FUN_80080450(param_2,0x1808080);

    *puVar1 = 0x11a;
    puVar1[5] = param_4 + 4;
    puVar1[8] = 0x70;
    puVar1[4] = param_3;
    *(undefined *)(puVar1 + 6) = 0;
    *(undefined *)((int)puVar1 + 0xd) = 0;
    puVar1[7] = 0;
    puVar1[9] = 0x60;
  }
  return;
}

void FUN_arcade__8001824c(undefined2 *param_1)

{

  param_1[0x42] = 0xffff;
  *param_1 = 0;
  return;
}

void FUN_arcade__8001825c(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;

  iVar2 = 0;

  if (0 < param_2 && param_3 != (undefined2 *)0x0) {

    *(undefined2 *)(param_1 + 0x84) = 0;
    *(short *)(param_1 + 2) = (short)param_2;

    if (0 < param_2) {
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        iVar2 = iVar2 + 1;
        *(undefined2 *)(param_1 + 4) = uVar1;
        param_1 = param_1 + 2;
      } while (iVar2 < param_2);
    }
  }
  return;
}

void FUN_arcade__800182a0(int param_1)

{

  *(undefined2 *)(param_1 + 0x84) = 0xffef;
  return;
}

void FUN_arcade__800182ac(int param_1)

{
  short sVar1;

  if (*(short *)(param_1 + 0x84) < 0) {
    if (*(short *)(param_1 + 0x84) < -1) {
      *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) + 1;
      return;
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 0x84) + 1;
    *(short *)(param_1 + 0x84) = sVar1;

    if (0x20 < sVar1) {
      *(undefined2 *)(param_1 + 0x84) = 0x20;
    }
  }
  return;
}

void FUN_arcade__800182f4(undefined2 *param_1,undefined2 param_2)

{

  *param_1 = param_2;
  return;
}

void FUN_arcade__800182fc(short *param_1,undefined4 param_2,short param_3,short param_4)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short local_38;
  short local_36;
  undefined2 local_34;
  undefined2 local_32;
  uint local_30;
  uint local_2c;

  if (-1 < param_1[0x42]) {

    sVar10 = param_3 + -1;
    iVar7 = 0;
    param_4 = param_4 + param_1[1] * -10;
    psVar9 = param_1;

    for (iVar8 = 0; iVar8 < param_1[1]; iVar8 = iVar8 + 1) {

      iVar1 = (int)param_1[0x42] - iVar7 / (int)param_1[1];
      if (-1 < iVar1) {
        iVar1 = 8 - iVar1;
        if (iVar1 < 0) {
          iVar1 = 0;
        }

        uVar4 = (uint)(ushort)psVar9[2];
        iVar11 = ((uVar4 & 0x1f) * -8 + 0xff) * iVar1;
        uVar5 = (uVar4 & 0x3e0) >> 2;
        uVar6 = (uVar4 & 0xf800) >> 7;

        if (iVar11 < 0) {
          iVar11 = iVar11 + 7;
        }

        iVar12 = (0xff - uVar5) * iVar1;
        uVar4 = (uVar4 & 0x1f) * 8 + (iVar11 >> 3);

        if (iVar12 < 0) {
          iVar12 = iVar12 + 7;
        }

        iVar1 = (0xff - uVar6) * iVar1;
        iVar11 = uVar5 + (iVar12 >> 3);

        if (iVar1 < 0) {
          iVar1 = iVar1 + 7;
        }
        iVar1 = uVar6 + (iVar1 >> 3);

        local_34 = 8;
        local_30 = uVar4 | iVar11 * 0x100 | iVar1 * 0x10000;
        local_2c = (int)uVar4 >> 2 | (iVar11 >> 2) << 8 | (iVar1 >> 2) << 0x10;
        local_32 = 6;
        local_38 = param_3;
        local_36 = param_4;

        FUN_8006b6e4(param_2,&local_38);
        psVar2 = (short *)FUN_8007d024(param_2,0);

        psVar2[2] = 8;
        *psVar2 = param_3;
        psVar2[1] = param_4;
        psVar2[3] = 6;

        uVar4 = 0x28;
        if (iVar8 == *param_1) {
          uVar4 = 0x80;
        }

        iVar1 = FUN_8007e738(param_2,uVar4 | uVar4 << 8 | uVar4 << 0x10);

        *(short *)(iVar1 + 0xc) = param_3 + 8;
        *(short *)(iVar1 + 8) = param_3 + 8;
        sVar3 = param_4 + -1;
        *(short *)(iVar1 + 0x16) = sVar3;
        *(short *)(iVar1 + 10) = sVar3;
        *(short *)(iVar1 + 6) = sVar3;
        *(short *)(iVar1 + 0x14) = sVar10;
        *(short *)(iVar1 + 0x10) = sVar10;
        *(short *)(iVar1 + 4) = sVar10;
        *(short *)(iVar1 + 0x12) = param_4 + 6;
        *(short *)(iVar1 + 0xe) = param_4 + 6;
      }

      param_4 = param_4 + 10;
      psVar9 = psVar9 + 1;
      iVar7 = iVar7 + 0x18;
    }

    FUN_8007da44(param_2,0x20);
  }
  return;
}

void FUN_arcade__80018548(undefined2 *param_1,undefined4 param_2)

{

  *param_1 = 0xffff;
  FUN_arcade__80019fe4(param_1 + 2,&DAT_arcade__8004f67c);
  *(undefined4 *)(param_1 + 0x12) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

void FUN_arcade__800185a0(undefined2 *param_1)

{

  *param_1 = 0;
  FUN_arcade__8001a0f4(param_1 + 2,0xffffffff);
  return;
}

void FUN_arcade__800185c8(undefined2 *param_1)

{

  *param_1 = 0xffff;
  FUN_arcade__8001a18c(param_1 + 2);
  return;
}

void FUN_arcade__800185f0(short *param_1)

{
  short sVar1;

  FUN_arcade__8001a1c4(param_1 + 2);

  if (*param_1 < 0) {
    if (*param_1 < -1) {
      *param_1 = *param_1 + 1;
    }
  }
  else {

    sVar1 = *param_1 + 1;
    *param_1 = sVar1;

    if (0x20 < sVar1) {
      *param_1 = 0x20;
    }
  }
  return;
}

void FUN_arcade__80018658
               (short *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               int param_6)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  param_1[10] = (short)param_3 + -4;
  param_1[0xb] = (short)param_4;
  FUN_arcade__8001a220(param_1 + 2,param_2,param_5);

  if (-1 < *param_1) {

    if (param_6 < 0) {

      iVar2 = 8 - *param_1;
      if (iVar2 < 0) {
        iVar2 = 0;
      }

      iVar7 = iVar2 * 0x90;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 7;
      }
      iVar8 = iVar2 * 0xb4;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 7;
      }
      iVar2 = iVar2 * 0xd2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }

      FUN_8007da80(param_5,&DAT_80129840);
      *(uint *)(param_5 + 0x14) =
           (iVar7 >> 3) + 0x6fU | ((iVar8 >> 3) + 0x4b) * 0x100 | ((iVar2 >> 3) + 0x2d) * 0x10000 |
           0x2000000;
      *(undefined4 *)(param_5 + 0x10) = param_2;
      *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) & 0xff9fffff | 0x200000;
      FUN_8006ac90(param_5,&DAT_800f8661,param_3,param_4,1);
    }

    iVar2 = 0;
    sVar6 = (short)param_4 + -0xc;
    iVar7 = 0;

    do {

      iVar8 = (int)*param_1 - iVar7 / 10;
      if (-1 < iVar8) {
        iVar8 = 8 - iVar8;
        if (iVar8 < 0) {
          iVar8 = 0;
        }

        iVar5 = 0xde;
        if (iVar2 < 8) {
          iVar4 = 0x6f;
          iVar3 = 0x10;
        }
        else {
          iVar5 = 0xf2;
          iVar4 = 0xb;
          iVar3 = 0xb;
        }

        iVar9 = -iVar5;

        if (param_6 <= iVar2) {
          iVar5 = 0;
          iVar4 = 0;
          iVar3 = 0;
          iVar8 = 0;
          iVar9 = 0;
        }

        iVar9 = (iVar9 + 0xff) * iVar8;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 7;
        }
        iVar10 = (0xff - iVar4) * iVar8;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 7;
        }
        iVar8 = (0xff - iVar3) * iVar8;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 7;
        }

        puVar1 = (undefined2 *)
                 FUN_8007d024(param_2,iVar5 + (iVar9 >> 3) | (iVar4 + (iVar10 >> 3)) * 0x100 |
                                      (iVar3 + (iVar8 >> 3)) * 0x10000 | 0x2000000);

        puVar1[2] = 4;
        *puVar1 = (short)param_3;
        puVar1[1] = sVar6;
        puVar1[3] = 0xc;
        FUN_8007da44(param_2,0x20);
      }

      puVar1 = (undefined2 *)FUN_8007d024(param_2,0x2081020);
      puVar1[2] = 4;
      *puVar1 = (short)param_3;
      puVar1[1] = sVar6;
      puVar1[3] = 0xc;
      FUN_8007da44(param_2,0);

      iVar7 = iVar7 + 0x18;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 5;
    } while (iVar2 < 10);
  }
  return;
}

void FUN_arcade__8001894c(int param_1)

{

  DAT_arcade__8004f6ac = 0xc0c0c0;
  FUN_arcade__80019fe4(param_1,&DAT_arcade__8004f698);
  *(undefined **)(param_1 + 0x20) = &DAT_800f866d;
  FUN_arcade__80019fe4(param_1 + 0x2c,&DAT_arcade__8004f6b4);
  *(undefined **)(param_1 + 0x4c) = &DAT_800f866d;

  DAT_arcade__8004f6ac = 0x3e8ede;
  FUN_arcade__80019fe4(param_1 + 0x98,&DAT_arcade__8004f698);
  *(undefined **)(param_1 + 0xb8) = &DAT_800f867a;
  FUN_arcade__80019fe4(param_1 + 0xc4,&DAT_arcade__8004f6b4);
  *(undefined **)(param_1 + 0xe4) = &DAT_800f867a;

  DAT_arcade__8004f6ac = 0xf08e3c;
  FUN_arcade__80019fe4((undefined *)(param_1 + 0x170), (undefined *)(param_1 + 0x170));
  *(undefined **)(param_1 + 400) = &DAT_800f8698;
  FUN_arcade__80019fe4(param_1 + 0x19c,&DAT_arcade__8004f6b4);
  *(undefined **)(param_1 + 0x1bc) = &DAT_800f8698;

  *(undefined2 *)(param_1 + 0x24c) = 0xffff;
  return;
}

void FUN_arcade__80018a58(int param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;

  *(undefined **)(param_1 + 0x20) = &DAT_800f866d;
  FUN_arcade__8001a0f4(param_1,0xffffffff);
  FUN_8008cf34(param_1 + 0x58,&DAT_800f8675,(param_2[4] * 0x561e) / 10000);
  *(int *)(param_1 + 0x4c) = param_1 + 0x58;
  FUN_arcade__8001a0f4(param_1 + 0x2c,0xffffffff);

  *(undefined **)(param_1 + 0xb8) = &DAT_800f867a;
  FUN_arcade__8001a0f4(param_1 + 0x98,0xffffffff);

  if (param_2[1] == 0) {
    FUN_8008cf34(param_1 + 0xf0,&DAT_800f8693,(*param_2 * 1000) / 0x3f6);
  }
  else {
    FUN_8008cf34(param_1 + 0xf0,&DAT_800f8688,(*param_2 * 1000) / 0x3f6);
  }
  *(int *)(param_1 + 0xe4) = param_1 + 0xf0;
  FUN_arcade__8001a0f4(param_1 + 0xc4,0xffffffff);

  *(undefined **)(param_1 + 400) = &DAT_800f8698;
  FUN_arcade__8001a0f4(param_1 + 0x170,0xffffffff);

  if (param_2[2] == 0) {
    FUN_8008cf34(param_1 + 0x1c8,"-----");
    goto LAB_arcade__80018d28;
  }

  puVar4 = (undefined *)(int)param_2[3];
  iVar1 = (param_2[2] * 0x11a89) / 10000;

  if ((int)puVar4 < 0) {
    iVar2 = iVar1 - iVar1 % 10;
    iVar3 = (int)((ulonglong)((longlong)iVar2 * 0x66666667) >> 0x20);
    puVar4 = (undefined *)-(int)puVar4;
    pcVar5 = &DAT_800f86bb;
LAB_arcade__80018d10:
    iVar2 = (iVar3 >> 2) - (iVar2 >> 0x1f);
  }
  else {

    if (puVar4 != (undefined *)0x0) {
      iVar2 = iVar1 - iVar1 % 10;
      iVar3 = (int)((ulonglong)((longlong)iVar2 * 0x66666667) >> 0x20);
      pcVar5 = &DAT_800f86aa;
      goto LAB_arcade__80018d10;
    }

    puVar4 = &DAT_800f85a6;
    pcVar5 = "%d.%d%s";
    iVar2 = iVar1 / 10;
  }

  FUN_8008cf34(param_1 + 0x1c8,pcVar5,iVar2,iVar1 % 10,puVar4);
LAB_arcade__80018d28:
  *(int *)(param_1 + 0x1bc) = param_1 + 0x1c8;
  FUN_arcade__8001a0f4(param_1 + 0x19c,0xffffffff);

  iVar1 = FUN_arcade__8001a9ec(param_1,param_3);
  iVar2 = FUN_arcade__8001a9ec(param_1 + 0x98,param_3);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_arcade__8001a9ec(param_1 + 0x170,param_3);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }

  iVar2 = FUN_arcade__8001a9ec(param_1 + 0x2c,param_3);
  iVar3 = FUN_arcade__8001a9ec(param_1 + 0xc4,param_3);
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = FUN_arcade__8001a9ec(param_1 + 0x19c,param_3);
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }

  *(short *)(param_1 + 0x248) = (short)iVar1;
  *(short *)(param_1 + 0x24a) = (short)iVar2;
  *(undefined2 *)(param_1 + 0x24c) = 0;
  return;
}

void FUN_arcade__80018dfc(int param_1)

{

  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  *(undefined2 *)(param_1 + 0x50) = 0xffff;
  *(undefined2 *)(param_1 + 0xbc) = 0xffff;
  *(undefined2 *)(param_1 + 0xe8) = 0xffff;
  *(undefined2 *)(param_1 + 0x194) = 0xffff;
  *(undefined2 *)(param_1 + 0x1c0) = 0xffff;
  *(undefined2 *)(param_1 + 0x24c) = 0xffff;
  return;
}

void FUN_arcade__80018e20(int param_1)

{

  if (-1 < *(short *)(param_1 + 0x24c)) {

    FUN_arcade__8001a18c(0);
    FUN_arcade__8001a18c(param_1 + 0x2c);
    FUN_arcade__8001a18c(param_1 + 0x98);
    FUN_arcade__8001a18c(param_1 + 0xc4);
    FUN_arcade__8001a18c(param_1 + 0x170);
    FUN_arcade__8001a18c(param_1 + 0x19c);

    *(undefined2 *)(param_1 + 0x24c) = 0xffff;
  }
  return;
}

void FUN_arcade__80018e88(int param_1)

{

  FUN_arcade__8001a1c4(0);
  FUN_arcade__8001a1c4(param_1 + 0x2c);
  FUN_arcade__8001a1c4(param_1 + 0x98);
  FUN_arcade__8001a1c4(param_1 + 0xc4);
  FUN_arcade__8001a1c4(param_1 + 0x170);
  FUN_arcade__8001a1c4(param_1 + 0x19c);
  return;
}

void FUN_arcade__80018ed4
               (int param_1,undefined4 param_2,short param_3,short param_4,undefined4 param_5)

{
  short *psVar1;
  short sVar2;
  short sVar3;

  *(short *)(param_1 + 0x12) = param_4;
  param_3 = param_3 - *(short *)(param_1 + 0x24a);
  sVar2 = param_3 + -3;
  *(short *)(param_1 + 0x10) = sVar2;
  FUN_arcade__8001a220(param_1,param_2,param_5);

  sVar3 = param_3 + 2;
  *(short *)(param_1 + 0x3c) = sVar3;
  *(short *)(param_1 + 0x3e) = param_4;
  FUN_arcade__8001a220(param_1 + 0x2c,param_2,param_5);

  *(short *)(param_1 + 0xa8) = sVar2;
  *(short *)(param_1 + 0xaa) = param_4 + 0x10;
  FUN_arcade__8001a220(param_1 + 0x98,param_2,param_5);

  *(short *)(param_1 + 0xd4) = sVar3;
  *(short *)(param_1 + 0xd6) = param_4 + 0x10;
  FUN_arcade__8001a220(param_1 + 0xc4,param_2,param_5);

  *(short *)(param_1 + 0x180) = sVar2;
  *(short *)(param_1 + 0x182) = param_4 + 0x20;
  FUN_arcade__8001a220(param_1 + 0x170,param_2,param_5);

  *(short *)(param_1 + 0x1ac) = sVar3;
  *(short *)(param_1 + 0x1ae) = param_4 + 0x20;
  FUN_arcade__8001a220(param_1 + 0x19c,param_2,param_5);

  if (-1 < *(short *)(param_1 + 0x24c)) {

    psVar1 = (short *)FUN_8007f7f4(param_2,0x3e3e3e);
    *psVar1 = (param_3 - *(short *)(param_1 + 0x248)) + -5;
    sVar2 = *(short *)(param_1 + 0x24a);
    psVar1[3] = param_4 + -0xf;
    psVar1[1] = param_4 + -0xf;
    psVar1[2] = sVar2 + param_3 + 4;

    psVar1 = (short *)FUN_8007f7f4(param_2,0x3e3e3e);
    *psVar1 = (param_3 - *(short *)(param_1 + 0x248)) + -5;
    sVar2 = *(short *)(param_1 + 0x24a);
    psVar1[3] = param_4 + 0x24;
    psVar1[1] = param_4 + 0x24;
    psVar1[2] = sVar2 + param_3 + 4;
  }
  return;
}

void FUN_arcade__80019064(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_34;

  local_38 = 0x250;
  local_34 = 0x6f0;
  iVar1 = 0x118;
  iVar5 = 0;
  iVar9 = 0x88;
  iVar4 = 0;
  iVar8 = 0x58;
  iVar7 = 0;
  iVar3 = param_1;

  for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {

    *(undefined *)(param_1 + iVar6 + 0xc7c) = 0;

    FUN_arcade__80019fe4(iVar3,&LAB_arcade__8004f634);
    *(undefined **)(iVar3 + 0x20) = &LAB_arcade__80027108;

    FUN_arcade__8001c118(param_1 + iVar8,&LAB_arcade__8004f650);
    *(undefined **)(iVar7 + param_1 + 0x68) = &LAB_arcade__800454e0;

    FUN_arcade__800121e0(param_1 + iVar9,&DAT_arcade__8004f65c);

    *(int *)(iVar4 + param_1 + 0xb0) = iVar5 + param_1 + 0x9fc;
    *(int *)(iVar4 + param_1 + 0xb4) = iVar5 + param_1 + 0xb3c;

    iVar2 = param_1 + iVar1;
    FUN_arcade__80018548(iVar2,&DAT_800f8634);
    FUN_arcade__80018548(iVar2 + 0x34,&DAT_800f8647);
    FUN_arcade__80018548(iVar2 + 0x68,&DAT_800f8652);

    FUN_arcade__8001824c(param_1 + local_34);
    FUN_arcade__8001894c(param_1 + local_38);

    iVar5 = iVar5 + 0xa0;
    iVar9 = iVar9 + 0x44;
    iVar4 = iVar4 + 0x44;
    iVar8 = iVar8 + 0x18;
    iVar7 = iVar7 + 0x18;
    local_38 = local_38 + 0x250;
    iVar3 = iVar3 + 0x2c;
    local_34 = local_34 + 0x86;
    iVar1 = iVar1 + 0x9c;
  }

  *(undefined *)(param_1 + 0xc7e) = 0;
  return;
}

void FUN_arcade__80019210(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = (int)*(char *)(param_1 + 0xc7e);

  if (*(char *)(param_1 + iVar2 + 0xc7c) != '\0') {

    FUN_arcade__8001a18c(param_1 + iVar2 * 0x2c);

    FUN_arcade__8001c1c4(param_1 + iVar2 * 0x18 + 0x58);

    FUN_arcade__800122ec(param_1 + iVar2 * 0x44 + 0x88);

    iVar1 = param_1 + iVar2 * 0x9c + 0x118;
    FUN_arcade__800185c8(iVar1);
    FUN_arcade__800185c8(iVar1 + 0x34);
    FUN_arcade__800185c8(iVar1 + 0x68);

    FUN_arcade__800182a0(param_1 + iVar2 * 0x86 + 0x6f0);
    FUN_arcade__80018e20(param_1 + iVar2 * 0x250 + 0x250);
  }
  return;
}

void FUN_arcade__8001930c(int param_1)

{

  FUN_arcade__800182f4((undefined2 *)(param_1 + *(char *)(param_1 + 0xc7e) * 0x86 + 0x6f0), 0);
  return;
}

void FUN_arcade__8001934c(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = (int)*(char *)(param_1 + 0xc7e);

  if (*(char *)(param_1 + iVar2 + 0xc7c) != '\0') {

    FUN_arcade__8001a18c(param_1 + iVar2 * 0x2c);

    FUN_arcade__8001c1c4(param_1 + iVar2 * 0x18 + 0x58);

    FUN_arcade__800122ec(param_1 + iVar2 * 0x44 + 0x88);

    iVar1 = param_1 + iVar2 * 0x9c + 0x118;
    FUN_arcade__800185c8(iVar1);
    FUN_arcade__800185c8(iVar1 + 0x34);
    FUN_arcade__800185c8(iVar1 + 0x68);

    FUN_arcade__800182a0(param_1 + iVar2 * 0x86 + 0x6f0);
    FUN_arcade__80018e20(param_1 + iVar2 * 0x250 + 0x250);

    *(undefined *)(param_1 + iVar2 + 0xc7c) = 0;
  }

  iVar2 = iVar2 + 1;
  iVar1 = iVar2 * 2;

  if (1 < iVar2) {
    iVar2 = 0;
    iVar1 = 0;
  }

  *(char *)(param_1 + 0xc7e) = (char)iVar2;

  *(undefined2 *)(((iVar1 + iVar2) * 4 - iVar2) * 4 + param_1 + 0x24) = 0xffff;
  *(undefined2 *)((iVar1 + iVar2) * 8 + param_1 + 0x6c) = 0xffff;

  FUN_arcade__80018dfc(param_1 + iVar2 * 0x250 + 0x250);
  *(undefined *)(param_1 + iVar2 + 0xc7c) = 0;
  return;
}

int FUN_arcade__800194c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{

  if (param_2 < 0) {
    return -1;
  }

  if (param_1 <= param_2) {
    return param_4;
  }

  if (param_1 < param_3) {

    return param_4 + ((param_5 - param_4) * (param_1 - param_2)) / (param_3 - param_2);
  }

  return param_5;
}

void FUN_arcade__80019518
               (int param_1,int param_2,ushort *param_3,undefined *param_4,short *param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined uVar1;
  undefined uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_340 [64];
  int local_240 [64];
  int local_140 [64];
  uint local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_30;

  uVar7 = (uint)DAT_801c98e0;
  iVar12 = (int)*(char *)(param_1 + 0xc7e);

  FUN_arcade__80011bb0(param_1 + iVar12 * 0x100 + 0x7fc,(*param_5 * 1000) / 0x3f6);
  FUN_8008d020(param_1 + iVar12 * 0x100 + 0x7fc,&DAT_800f85a3);
  iVar4 = iVar12 * 0x2c + param_1;
  *(int *)(iVar4 + 0x20) = iVar12 * 0x100 + param_1 + 0x7fc;
  FUN_arcade__8001a0f4(iVar4,0xffffffff);

  *(undefined **)(iVar12 * 0x18 + param_1 + 0x68) =
       ((undefined *)(&PTR_LAB_arcade__800454e0_arcade__8004f618))[uVar7] + param_2 * 0xc;
  FUN_arcade__8001c1b0(param_1 + iVar12 * 0x18 + 0x58);

  iVar4 = param_1 + iVar12 * 0x9c + 0x118;
  iVar5 = param_1 + iVar12 * 3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  *(undefined *)(iVar5 + 0x110) = *param_4;
  *(undefined *)(iVar5 + 0x111) = uVar1;
  *(undefined *)(iVar5 + 0x112) = uVar2;

  FUN_arcade__800185a0(iVar4);
  FUN_arcade__800185a0(iVar4 + 0x34);
  FUN_arcade__800185a0(iVar4 + 0x68);

  iVar4 = iVar12 * 0x44;
  FUN_arcade__8001825c(param_1 + iVar12 * 0x86 + 0x6f0,param_6,param_7);
  FUN_arcade__80018a58(param_1 + iVar12 * 0x250 + 0x250,param_5,param_8);

  if (param_3 == (ushort *)0x0) {
    FUN_arcade__800122e0(param_1 + iVar4 + 0x88);
  }
  else {

    *(ushort *)(iVar4 + param_1 + 0xa8) = param_3[param_3[5] + 5];
    *(short *)(iVar4 + param_1 + 0xaa) = (short)((*param_5 * 1000) / 0x3f6);
    iVar5 = 0;
    *(short *)(iVar4 + param_1 + 0xac) = (short)((param_5[2] * 0x11a89) / 10000);
    FUN_arcade__800122a4(param_1 + iVar4 + 0x88);

    local_40 = (uint)param_3[5];
    local_140[0] = -1;
    local_240[0] = -1;
    local_340[0] = -1;

    if (local_40 != 0) {
      iVar4 = 1;
      iVar8 = iVar5;
      do {
        iVar5 = iVar4;
        local_340[iVar5] = (int)(short)param_3[iVar8 + 6];
        local_240[iVar5] =
             ((((int)(short)param_3[iVar8 + 0x16] * (int)*param_5) / (int)(uint)*param_3) * 1000) /
             0x3f6;
        local_140[iVar5] =
             ((((int)(short)param_3[iVar8 + 0x26] * (int)param_5[2]) / (int)(uint)param_3[2]) *
             0x11a89) / 10000;
        iVar4 = iVar5 + 1;
        iVar8 = iVar5;
      } while (iVar5 < (int)local_40);
    }

    iVar11 = 1;
    iVar5 = iVar5 + 1;
    iVar8 = 0;
    local_34 = local_340;
    local_3c = local_240;
    local_38 = local_140;
    iVar4 = 0;
    local_30 = iVar12 * 0xa0;
    local_40 = local_40 + 1;
    local_340[iVar5] = -1;
    iVar9 = 0;
    local_240[iVar5] = -1;
    piVar10 = local_340 + 1;
    local_140[iVar5] = -1;

    do {
      if (*piVar10 < iVar4) {
        iVar9 = iVar9 + 4;
        iVar11 = iVar11 + 1;
        piVar10 = piVar10 + 1;
        if ((int)local_40 <= iVar11) break;
      }
      else {

        puVar6 = (undefined4 *)((int)local_34 + iVar9);
        uVar3 = FUN_arcade__800194c0
                          (iVar4,*puVar6,*piVar10,*(undefined4 *)((int)local_3c + iVar9),
                           local_3c[iVar11]);
        iVar8 = iVar8 + 1;
        iVar5 = param_1 + local_30;
        *(undefined2 *)(iVar5 + 0x9fc) = uVar3;
        local_30 = local_30 + 2;
        uVar3 = FUN_arcade__800194c0
                          (iVar4,*puVar6,*piVar10,*(undefined4 *)((int)local_38 + iVar9),
                           local_38[iVar11]);
        *(undefined2 *)(iVar5 + 0xb3c) = uVar3;
        iVar4 = iVar4 + 0xfa;
      }
    } while (iVar8 < 0x4f);

    if (iVar8 < 0x50) {
      iVar4 = iVar8 * 2 + iVar12 * 0xa0;
      do {
        iVar8 = iVar8 + 1;
        *(undefined2 *)(param_1 + iVar4 + 0x9fc) = 0xffff;
        *(undefined2 *)(param_1 + iVar4 + 0xb3c) = 0xffff;
        iVar4 = iVar4 + 2;
      } while (iVar8 < 0x50);
    }
  }

  *(undefined *)(param_1 + iVar12 + 0xc7c) = 1;
  return;
}

void FUN_arcade__80019a9c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar8 = 0;
  iVar7 = 0x250;
  iVar6 = 0x6f0;
  iVar5 = 0x118;
  iVar4 = 0x88;
  iVar3 = 0x58;
  iVar2 = param_1;

  do {
    FUN_arcade__8001a1c4(iVar2);
    FUN_arcade__8001c1d8(param_1 + iVar3);
    FUN_arcade__80012308(param_1 + iVar4);
    iVar1 = param_1 + iVar5;
    FUN_arcade__800185f0(iVar1);
    FUN_arcade__800185f0(iVar1 + 0x34);
    FUN_arcade__800185f0(iVar1 + 0x68);
    FUN_arcade__800182ac(param_1 + iVar6);
    FUN_arcade__80018e88(param_1 + iVar7);

    iVar7 = iVar7 + 0x250;
    iVar6 = iVar6 + 0x86;
    iVar5 = iVar5 + 0x9c;
    iVar4 = iVar4 + 0x44;
    iVar3 = iVar3 + 0x18;
    iVar8 = iVar8 + 1;
    iVar2 = iVar2 + 0x2c;
  } while (iVar8 < 2);
  return;
}

void FUN_arcade__80019b80
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short local_50;
  short local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  sVar3 = (short)param_3;
  local_50 = sVar3 + 1;
  sVar4 = (short)param_4;
  local_4c = sVar4 + 0xc;
  local_44 = 0x250;
  local_40 = 0x6f0;
  local_38 = 0x118;
  local_34 = 0x88;
  iVar8 = 0;
  local_30 = 0x58;
  local_3c = 0;
  iVar6 = param_1;
  iVar7 = param_1;

  for (iVar9 = 0; iVar9 < 2; iVar9 = iVar9 + 1) {
    bVar2 = iVar9 == *(char *)(param_1 + 0xc7e);
    if (param_6 == 0) {
      bVar2 = !bVar2;
    }
    if (bVar2) {
      switch(param_7) {
      case 0:
        *(short *)(iVar7 + 0x10) = local_50;
        *(short *)(iVar7 + 0x12) = local_4c;
        FUN_arcade__8001a220(iVar7,param_2,param_5);
        iVar5 = iVar8 + param_1;
        sVar1 = *(short *)(*(int *)(iVar5 + 0x68) + 4);
        *(short *)(iVar5 + 0x62) = sVar4;
        *(short *)(iVar5 + 0x60) = (sVar3 - (sVar1 >> 1)) + -1;
        FUN_arcade__8001c234(param_1 + local_30,param_2);
        break;
      case 1:
        *(short *)(local_3c + param_1 + 0x8a) = sVar3;
        *(short *)(local_3c + param_1 + 0x8c) = sVar4;
        FUN_arcade__80013050(param_1 + local_34,param_2,param_5);
        break;
      case 2:
        iVar5 = param_1 + local_38;
        FUN_arcade__80018658(iVar5,param_2,param_3,param_4,param_5,(int)*(char *)(iVar6 + 0x110));
        FUN_arcade__80018658
                  (iVar5 + 0x34,param_2,param_3,param_4 + 0x10,param_5,(int)*(char *)(iVar6 + 0x111)
                  );
        FUN_arcade__80018658
                  (iVar5 + 0x68,param_2,param_3,param_4 + 0x20,param_5,(int)*(char *)(iVar6 + 0x112)
                  );
        break;
      case 3:
        FUN_arcade__800182fc(param_1 + local_40,param_2,param_3,param_4);
        break;
      case 4:
        FUN_arcade__80018ed4(param_1 + local_44,param_2,param_3,param_4,param_5);
      }
    }

    local_44 = local_44 + 0x250;
    local_40 = local_40 + 0x86;
    iVar6 = iVar6 + 3;
    local_3c = local_3c + 0x44;
    iVar8 = iVar8 + 0x18;
    local_38 = local_38 + 0x9c;
    iVar7 = iVar7 + 0x2c;
    local_34 = local_34 + 0x44;
    local_30 = local_30 + 0x18;
  }
  return;
}

int FUN_arcade__80019e60(int param_1,int param_2)

{
  int iVar1;

  iVar1 = 0x88b9;
  if (0 < param_1 * param_1) {
    iVar1 = (param_2 * 300000) / (param_1 * param_1);
  }
  return iVar1;
}

void FUN_arcade__80019ea4(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;

  uVar1 = FUN_8005e874(param_2,0x2d);
  *(undefined *)(param_1 + 1) = uVar1;
  *(byte *)(param_1 + 3) = (byte)((ushort)*(undefined2 *)(param_2 + 0x94) >> 0xd);
  *(ushort *)(param_1 + 4) = *(ushort *)(param_2 + 0x98) & 0x3fff;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x96);
  *(ushort *)(param_1 + 8) = *(ushort *)(param_2 + 0x94) & 0x1fff;

  *(undefined *)(param_1 + 2) = 3;

  iVar2 = FUN_arcade__80019e60((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 8));

  if (iVar2 < 0x2ae5) {
    *(undefined *)(param_1 + 2) = 2;
  }
  if (iVar2 < 0x170c) {
    *(undefined *)(param_1 + 2) = 1;
  }
  if (iVar2 < 0xe10) {
    *(undefined *)(param_1 + 2) = 0;
  }
  return;
}

void FUN_arcade__80019f60(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = 8;
  uVar1 = *param_2;
  iVar2 = 4;
  param_1[1] = 0;
  *(undefined2 **)(param_1 + 2) = param_2;
  *param_1 = uVar1;

  for (iVar4 = 0; iVar4 < 100; iVar4 = iVar4 + 1) {
    FUN_arcade__80019ea4((int)param_1 + iVar3,(int)param_2 + iVar2);
    iVar3 = iVar3 + 10;
    iVar2 = iVar2 + 0xa4;
  }
  return;
}

void FUN_arcade__80019fe4(undefined *param_1,undefined *param_2)

{
  if (param_2 == (undefined *)0x0) {

    *param_1 = 0x80;
    param_1[1] = 2;
    *(undefined2 *)(param_1 + 2) = 0x1e;
    *(undefined2 *)(param_1 + 6) = 0x1e;
    param_1[10] = 1;
    *(undefined2 *)(param_1 + 4) = 0x10;
    *(undefined2 *)(param_1 + 8) = 0x10;
    param_1[0xb] = 0x10;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined ***)(param_1 + 0x1c) = &PTR_PTR_DAT_80093124;
    *(undefined4 *)(param_1 + 0x14) = 0xffffff;
    *(undefined4 *)(param_1 + 0x18) = 0xffffff;
  }
  else {

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xe];
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }

  *(undefined **)(param_1 + 0x20) = &LAB_arcade__80027128;
  param_1[0xe] = 0x80;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  return;
}

void FUN_arcade__8001a0f4(byte *param_1,int param_2)

{
  short sVar1;

  *(undefined2 *)(param_1 + 0x24) = 0;
  sVar1 = FUN_8008cfc4(*(undefined4 *)(param_1 + 0x20));
  *(short *)(param_1 + 0x28) = sVar1;
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 2) + (short)((int)sVar1 / (int)(uint)*param_1);

  if (-1 < param_2) {
    *(short *)(param_1 + 0x26) = (short)param_2;
  }
  return;
}

void FUN_arcade__8001a158(int param_1)

{
  FUN_arcade__8001a0f4(param_1,0xffffffff);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + 0x26);
  return;
}

void FUN_arcade__8001a18c(int param_1)

{
  undefined2 uVar1;

  *(ushort *)(param_1 + 0x24) = ~*(ushort *)(param_1 + 2);
  uVar1 = FUN_8008cfc4(*(undefined4 *)(param_1 + 0x20));
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  return;
}

void FUN_arcade__8001a1c4(int param_1)

{
  short sVar1;

  if (*(short *)(param_1 + 0x24) < 0) {
    if (*(short *)(param_1 + 0x24) < -1) {
      *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + 1;
    *(short *)(param_1 + 0x24) = sVar1;
    if ((int)*(short *)(param_1 + 0x26) + (int)*(short *)(param_1 + 6) <= (int)sVar1) {
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + 0x26);
      return;
    }
  }
  return;
}

void FUN_arcade__8001a220(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;

  local_50 = *(byte **)(param_1 + 0x20);
  local_58 = (int)*(short *)(param_1 + 0x24) * (uint)*param_1;
  local_54 = (uint)*(ushort *)(param_1 + 0xc);
  FUN_8007da80(param_3,*(undefined4 *)(param_1 + 0x1c));
  local_48 = (int)*(short *)(param_1 + 0x10);
  bVar1 = param_1[0xb];
  local_40 = (uint)*(byte *)(param_3 + 8);
  local_44 = (int)*(short *)(param_1 + 0x12);

  if ((local_54 & 0x180) == 0x80) {
    iVar4 = FUN_arcade__8001a9ec(param_1,param_3);
    local_48 = local_48 - (iVar4 >> 1);
  }
  else if ((local_54 & 0x180) == 0x100) {
    iVar4 = FUN_arcade__8001a9ec(param_1,param_3);
    local_48 = local_48 - iVar4;
  }

  local_3c = 1;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    local_3c = 2;
  }

  iVar4 = (int)*(short *)(param_1 + 0x24);
  if (iVar4 < 0) {
    if (iVar4 < -1) {
      iVar4 = *(short *)(param_1 + 2) + 1 + iVar4;
      iVar5 = FUN_arcade__8001a9ec(param_1,param_3);
      iVar12 = (int)*(short *)(param_1 + 2);
      sVar3 = (short)((int)(char)bVar1 >> 1);
      local_62 = sVar3 - (short)((((int)(char)bVar1 >> 1) * iVar4) / iVar12);
      local_64 = (short)((iVar5 * iVar4) / iVar12);
      local_68 = (short)local_48 + local_64;
      local_66 = ((short)local_44 - sVar3) - local_62;
      local_62 = local_62 * 2;
      local_5c = (uint)param_1[0x14] + (int)(-(uint)param_1[0x14] * iVar4) / iVar12 |
                 ((uint)param_1[0x15] + (int)(-(uint)param_1[0x15] * iVar4) / iVar12) * 0x100 |
                 ((uint)param_1[0x16] + (int)(-(uint)param_1[0x16] * iVar4) / iVar12) * 0x10000;
      local_60 = 0;
      sVar3 = (short)((*(short *)(param_1 + 4) * iVar4) / iVar12);
      local_64 = (sVar3 + (short)iVar5) - local_64;
      local_38 = local_5c;
      FUN_arcade__80011b18(param_2,&local_68);
      local_5c = 0;
      local_68 = (short)local_48 - sVar3;
      local_60 = local_38;
      FUN_arcade__80011b18(param_2,&local_68);
      FUN_8007da44(param_2,0x20);
    }
  }
  else {

    local_34 = (local_54 >> 4 & 2) << 0x18;
    local_30 = (local_54 & 3) << 0x15;

    for (local_4c = 0; uVar7 = local_40, local_4c < *(short *)(param_1 + 0x28);
        local_4c = local_4c + 1) {
      uVar14 = local_54 >> 6 & 1;

      if ((int)*(short *)(param_1 + 0x24) < (int)*(short *)(param_1 + 0x26)) {
        iVar4 = local_58 / (int)(uint)*param_1;
        iVar5 = iVar4;
      }
      else {
        local_58 = 1;
        iVar4 = (int)*(short *)(param_1 + 8);
        uVar14 = 0;
        iVar5 = (int)*(short *)(param_1 + 2);
        if ((local_54 & 8) != 0) {
          iVar4 = ((int)*(short *)(param_1 + 0x24) - (int)*(short *)(param_1 + 0x26)) -
                  local_4c / (int)(uint)param_1[1];
          iVar5 = iVar4;
        }
      }

      if (local_58 < 1) {
        return;
      }

      iVar12 = (int)*(short *)(param_1 + 2);
      if (iVar12 < iVar5) {
        uVar14 = 0;
        iVar5 = iVar12;
      }
      if (iVar5 < 0) {
        iVar5 = iVar12;
      }
      iVar5 = iVar12 - iVar5;

      if (*(short *)(param_1 + 0x24) < *(short *)(param_1 + 0x26)) {
        uVar11 = (uint)param_1[0x15];
        iVar15 = (int)((param_1[0x19] - uVar11) * iVar5) / iVar12;
        uVar10 = (uint)param_1[0x16];
        iVar12 = (int)((param_1[0x1a] - uVar10) * iVar5) / iVar12;
        iVar4 = (uint)param_1[0x14] +
                (int)(((uint)param_1[0x18] - (uint)param_1[0x14]) * iVar5) / iVar12;
      }
      else {
        iVar12 = (int)*(short *)(param_1 + 8);
        if (iVar12 < iVar4) {
          iVar4 = iVar12;
        }
        if (iVar4 < 0) {
          iVar4 = iVar12;
        }
        iVar4 = iVar12 - iVar4;
        uVar11 = (uint)param_1[0x15];
        iVar15 = (int)((param_1[0x19] - uVar11) * iVar4) / iVar12;
        uVar10 = (uint)param_1[0x16];
        iVar12 = (int)((param_1[0x1a] - uVar10) * iVar4) / iVar12;
        iVar4 = (uint)param_1[0x14] +
                (int)(((uint)param_1[0x18] - (uint)param_1[0x14]) * iVar4) / iVar12;
      }

      uVar6 = (uint)param_1[0xe];
      uVar13 = (int)(iVar4 * uVar6) >> 8;
      iVar4 = (int)((uVar11 + iVar15) * uVar6) >> 8;
      iVar12 = (int)((uVar10 + iVar12) * uVar6) >> 8;
      local_38 = uVar13 | iVar4 << 8 | iVar12 << 0x10;

      bVar1 = *local_50;
      bVar2 = *local_50;

      if ((char)bVar1 == 0x20) {
        iVar15 = local_40 + (int)(char)param_1[10];
      }
      else {

        *(int *)(param_3 + 0x10) = param_2 + 4;
        *(uint *)(param_3 + 0x14) = local_38 | local_34;
        *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | local_30;

        if ((local_54 & 0x10) == 0) {
          if ((byte)(bVar2 - 0x30) < 10) {
            FUN_8007dd3c(param_3,bVar1 | 0x200,
                         local_48 + ((int)(local_40 + (int)(char)param_1[10]) >> 1),local_44);
          }
          else {
            FUN_8007dd3c(param_3,bVar1,local_48,local_44);
            uVar7 = FUN_8007dc78(param_3,(int)(char)bVar1,(int)(char)local_50[1]);
          }
        }
        else {
          FUN_8007dd3c(param_3,bVar1 | 0x100,local_48,local_44);
          uVar7 = local_40;
        }
        iVar15 = uVar7 + (int)(char)param_1[10];

        if (uVar14 != 0) {
          iVar8 = (int)*(short *)(param_1 + 2);
          iVar16 = (*(short *)(param_1 + 4) * iVar5) / iVar8;
          *(int *)(param_3 + 0x10) = param_2;
          *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | 0x200000;
          *(uint *)(param_3 + 0x14) =
               (int)(uVar13 * iVar5) / iVar8 | (iVar4 * iVar5) / iVar8 << 8 |
               (iVar12 * iVar5) / iVar8 << 0x10 | 0x2000000;
          FUN_8007dd3c(param_3,bVar2,local_48 - iVar16,local_44);
          FUN_8007dd3c(param_3,bVar2,local_48 + iVar16,local_44);
        }
      }

      if ((local_54 & 4) != 0) {
        puVar9 = (undefined2 *)FUN_8007d024(param_2,local_38 << 1);
        *puVar9 = (undefined2)local_48;
        puVar9[2] = (short)iVar15;
        puVar9[1] = (undefined2)local_44;
        puVar9[3] = (undefined2)local_3c;
      }

      local_50 = local_50 + 1;
      local_48 = local_48 + iVar15;
      local_58 = local_58 + -1;
    }
  }
  return;
}

int FUN_arcade__8001a9ec(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;

  iVar5 = 0;
  pbVar6 = *(byte **)(param_1 + 0x20);
  FUN_8007da80(param_2,*(undefined4 *)(param_1 + 0x1c));
  bVar2 = *pbVar6;
  bVar3 = *(byte *)(param_2 + 8);
  bVar1 = *pbVar6;

  while (bVar1 != 0) {
    pbVar6 = pbVar6 + 1;
    uVar4 = (uint)bVar3;
    if ((9 < bVar2 - 0x30) && ((char)bVar2 != 0x20)) {
      uVar4 = FUN_8007dc78(param_2,(int)(char)bVar2,(int)(char)*pbVar6);
    }
    bVar2 = *pbVar6;
    iVar5 = iVar5 + uVar4 + (int)*(char *)(param_1 + 10);
    bVar1 = *pbVar6;
  }
  return iVar5;
}

void FUN_arcade__8001aab4(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined uVar2;
  undefined uVar3;
  ushort uVar4;
  undefined4 uVar5;

  uVar5 = param_2[5];
  uVar4 = *(ushort *)((int)param_2 + 0xe) & 0xc;

  if ((*(ushort *)((int)param_2 + 0xe) & 0xc) == 0) {
    uVar3 = 0x50;
    uVar2 = 0xc;
  }
  else {
    uVar2 = 0xc;
    if (uVar4 == 8) {
      uVar3 = 0x60;
      uVar2 = 0x18;
    }
    else {
      uVar3 = 0x50;
      if (uVar4 == 0xc) {
        uVar3 = 0x80;
        uVar2 = 0x18;
      }
    }
  }

  *(undefined *)(param_1 + 0x8b) = uVar3;
  *(undefined *)(param_1 + 0x8a) = uVar2;
  DAT_arcade__8004f6e0 = uVar5;

  FUN_arcade__80019fe4((undefined *)(param_1 + 4), (undefined *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  FUN_arcade__80019fe4(param_1 + 0x30,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar2 = *(undefined *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x3c) = 0x40;
  *(undefined *)(param_1 + 0x3a) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = param_2[1];

  FUN_arcade__80019fe4(param_1 + 0x5c,0);
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  uVar2 = *(undefined *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x68) = 0x40;
  *(undefined *)(param_1 + 0x66) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = param_2[2];

  *(undefined *)(param_1 + 0x88) = *(undefined *)(param_2 + 3);
  uVar1 = *(undefined2 *)((int)param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x8c) = 0xffff;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined *)(param_1 + 0x89) = 0;
  *(undefined2 *)(param_1 + 0x90) = uVar1;
  return;
}

void FUN_arcade__8001abf4(int param_1)

{
  FUN_arcade__8001a0f4(param_1 + 4,0x3c);
  FUN_arcade__8001a0f4(param_1 + 0x30,0xffffffff);
  FUN_arcade__8001a0f4(param_1 + 0x5c,0xffffffff);
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  return;
}

void FUN_arcade__8001ac5c(int param_1)

{
  *(undefined2 *)(param_1 + 0x8c) = 0xffef;
  FUN_arcade__8001a18c(param_1 + 4);
  return;
}

int FUN_arcade__8001ac84(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = -2;
  if (*(short *)(param_1 + 0x8c) < 0) {
    if (*(short *)(param_1 + 0x8c) < -1) {
      *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + 1;
    }
    FUN_arcade__8001a1c4(param_1 + 4);
    iVar4 = -2;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x8c) + 1;
    *(short *)(param_1 + 0x8c) = sVar1;
    if (0x47 < sVar1) {
      *(undefined2 *)(param_1 + 0x8c) = 0xc;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xff7f;
    }
    if (0 < *(short *)(param_1 + 0x8e)) {
      *(short *)(param_1 + 0x8e) = *(short *)(param_1 + 0x8e) + -1;
    }
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_2 + 4);
      iVar2 = (int)*(char *)(param_1 + 0x88);
      if ((uVar3 & 4) != 0) {
        iVar2 = 0;
      }
      if ((uVar3 & 8) != 0) {
        iVar2 = 1;
      }
      if (iVar2 != *(char *)(param_1 + 0x88)) {
        iVar4 = -3;
        if (0xb < *(short *)(param_1 + 0x8c)) {
          *(undefined2 *)(param_1 + 0x8c) = 0xc;
        }
        *(undefined2 *)(param_1 + 0x8e) = 6;
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) | 0x80;
      }
      *(char *)(param_1 + 0x88) = (char)iVar2;
      if ((uVar3 & 0xa00) != 0) {
        iVar4 = iVar2;
      }
      if ((uVar3 & 0x500) != 0) {
        iVar4 = -1;
      }
    }
    FUN_arcade__8001a1c4(param_1 + 4);
    FUN_arcade__8001a1c4(param_1 + 0x30);
    FUN_arcade__8001a1c4(param_1 + 0x5c);
  }
  return iVar4;
}

void FUN_arcade__8001adc4(short *param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  short local_50;
  short local_4e;
  short local_4c;
  ushort local_4a;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;

  uVar16 = 0x7f;
  iVar7 = 0;
  local_38 = 0xfffffffe;
  uVar2 = param_1[0x48];
  local_40 = (uint)uVar2;
  sVar10 = -2;
  if ((uVar2 & 8) != 0) {
    local_38 = 0xfffffffc;
    sVar10 = -4;
  }

  iVar6 = (int)param_1[0x46];
  if (iVar6 < 0) {
    if (iVar6 < -1) {
      iVar7 = (iVar6 + 0x11) * 0xff;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xf;
      }
      uVar8 = 0xff - (iVar7 >> 4);
      uVar16 = uVar8;
      uVar9 = 0;
      if ((uVar2 & 1) != 0) {
        uVar16 = 0;
        uVar9 = uVar8;
      }
      uVar8 = uVar16;
      uVar11 = 0;
      local_48 = uVar9;
      local_44 = 0;
      if (*(char *)(param_1 + 0x44) != '\0') {
        local_48 = 0;
        uVar8 = 0;
        uVar11 = uVar16;
        local_44 = uVar9;
      }
      iVar7 = (uint)*(byte *)((int)param_1 + 0x8b) * (iVar6 + 0x11);
      local_48 = local_48 | uVar8 << 0x10;
      local_44 = local_44 | uVar11 << 0x10;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xf;
      }
      local_50 = (ushort)*(byte *)((int)param_1 + 0x8b) - (short)(iVar7 >> 4);
      local_4c = local_50 * 2;
      local_50 = *param_1 - local_50;
      local_4e = param_1[1];
      local_4a = (ushort)*(byte *)(param_1 + 0x45);
      FUN_arcade__80011b18(param_2,&local_50);
      FUN_8007da44(param_2,0x20);
      iVar7 = FUN_arcade__8001a9ec(param_1 + 2,param_3);
      param_1[10] = *param_1 - (short)(iVar7 >> 1);
      param_1[0xb] = param_1[1] + (short)local_38;
      FUN_arcade__8001a220(param_1 + 2,param_2,param_3);
    }
  }
  else {

    if (iVar6 < 0xc) {
      uVar16 = (iVar6 * 0x7f) / 0xc;
      iVar7 = (int)((uint)*(byte *)((int)param_1 + 0x8b) * 2 * (0xc - iVar6)) / 0xc;
    }
    if ((uVar2 & 2) != 0) {
      iVar7 = -iVar7;
    }
    uVar9 = uVar16 | uVar16 << 8 | uVar16 << 0x10;
    sVar1 = param_1[1];
    iVar7 = *param_1 + iVar7;
    iVar6 = iVar7 - (uint)*(byte *)((int)param_1 + 0x8b);
    iVar15 = iVar7 + (uint)*(byte *)((int)param_1 + 0x8b);
    local_3c = (int)sVar1 + (uint)*(byte *)(param_1 + 0x45);

    psVar3 = (short *)FUN_8007f7f4(param_2,uVar9);
    sVar13 = (short)iVar6;
    *psVar3 = sVar13;
    sVar14 = (short)iVar15;
    psVar3[2] = sVar14;
    psVar3[1] = sVar1;
    psVar3[3] = sVar1;
    psVar3 = (short *)FUN_8007f7f4(param_2,uVar9);
    *psVar3 = sVar13;
    psVar3[2] = sVar14;
    psVar3[1] = (short)local_3c;
    psVar3[3] = (short)local_3c;
    psVar3 = (short *)FUN_8007f7f4(param_2,uVar9);
    *psVar3 = sVar13;
    psVar3[2] = sVar13;
    psVar3[1] = sVar1;
    psVar3[3] = (short)local_3c;
    psVar3 = (short *)FUN_8007f7f4(param_2,uVar9);
    sVar12 = (short)iVar7;
    *psVar3 = sVar12;
    psVar3[2] = sVar12;
    psVar3[1] = sVar1;
    psVar3[3] = (short)local_3c;
    psVar3 = (short *)FUN_8007f7f4(param_2,uVar9);
    *psVar3 = sVar14;
    psVar3[2] = sVar14;
    psVar3[1] = sVar1;
    psVar3[3] = (short)local_3c;

    iVar4 = FUN_arcade__8001a9ec(param_1 + 2,param_3);
    param_1[0xb] = sVar1 + (short)local_38;
    param_1[10] = *param_1 - (short)(iVar4 >> 1);
    FUN_arcade__8001a220(param_1 + 2,param_2,param_3);

    if (-1 < param_1[0x46]) {
      iVar4 = FUN_arcade__8001a9ec(param_1 + 0x18,param_3);
      *(char *)(param_1 + 0x1f) = (char)uVar16;
      sVar10 = (short)local_3c + sVar10;
      param_1[0x21] = sVar10;
      param_1[0x20] = sVar13 + (short)((int)((uint)*(byte *)((int)param_1 + 0x8b) - iVar4) >> 1);
      FUN_arcade__8001a220(param_1 + 0x18,param_2,param_3);
      iVar4 = FUN_arcade__8001a9ec(param_1 + 0x2e,param_3);
      param_1[0x37] = sVar10;
      *(char *)(param_1 + 0x35) = (char)uVar16;
      param_1[0x36] = sVar12 + (short)((int)((uint)*(byte *)((int)param_1 + 0x8b) - iVar4) >> 1);
      FUN_arcade__8001a220(param_1 + 0x2e,param_2,param_3);
    }

    local_30 = (int)((uint)*(byte *)((int)param_1 + 0x8b) * (int)param_1[0x47]) / 6;
    iVar4 = iVar7;
    if (*(char *)(param_1 + 0x44) != '\0') {
      local_30 = -local_30;
      iVar6 = iVar7;
      iVar4 = iVar15;
    }
    local_30 = iVar7 + local_30;

    if ((param_1[0x46] < 0xc) || (iVar15 = (param_1[0x46] + -0xc) * -4 + 0x3c, iVar15 < 0)) {
      iVar15 = 0;
    }
    uVar16 = (int)(uVar16 * 0xff) >> 7;
    iVar18 = iVar15 * 0x80;
    if ((local_40 & 0x80) != 0) {
      iVar18 = iVar15 * 0xff;
    }
    uVar9 = iVar18 / 0x3c;
    uVar8 = uVar16;
    uVar11 = uVar9;
    uVar17 = uVar16 << 0x10;
    if ((local_40 & 1) != 0) {
      uVar8 = uVar9;
      uVar11 = uVar16;
      uVar17 = uVar16;
    }
    param_2 = param_2 + 4;
    local_34 = iVar7;

    if (0 < param_1[0x47]) {
      puVar5 = (uint *)FUN_8007e0b0(param_2);
      uVar16 = uVar11 | uVar9 * 0x100 | uVar8 << 0x10 | 0x3a000000;
      puVar5[4] = uVar16;
      *puVar5 = uVar16;
      puVar5[6] = uVar17;
      puVar5[2] = uVar17;
      *(undefined2 *)(puVar5 + 5) = (undefined2)local_34;
      *(undefined2 *)(puVar5 + 1) = (undefined2)local_34;
      *(undefined2 *)(puVar5 + 7) = (undefined2)local_30;
      *(short *)((int)puVar5 + 0xe) = sVar1;
      *(short *)((int)puVar5 + 6) = sVar1;
      *(undefined2 *)(puVar5 + 3) = (undefined2)local_30;
      *(short *)((int)puVar5 + 0x1e) = (short)local_3c;
      *(short *)((int)puVar5 + 0x16) = (short)local_3c;
    }

    iVar7 = FUN_8007d060(param_2,uVar11 | uVar9 * 0x100 | uVar8 << 0x10 | 0x2000000);
    *(short *)(iVar7 + 0xc) = (short)iVar6;
    *(short *)(iVar7 + 4) = (short)iVar6;
    *(short *)(iVar7 + 0x10) = (short)iVar4;
    *(short *)(iVar7 + 8) = (short)iVar4;
    *(short *)(iVar7 + 10) = sVar1;
    *(short *)(iVar7 + 6) = sVar1;
    *(short *)(iVar7 + 0x12) = (short)local_3c;
    *(short *)(iVar7 + 0xe) = (short)local_3c;
    FUN_8007da44(param_2,0x20);
  }
  return;
}

void FUN_arcade__8001b37c(byte *param_1)

{
  int iVar1;

  if ((*param_1 & 1) == 0) {

    iVar1 = *(int *)(param_1 + 4);
    FUN_arcade__80019fe4(iVar1,*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0xc);
  }
  else if ((*param_1 & 1) == 1) {

    iVar1 = *(int *)(param_1 + 4);
    FUN_arcade__8001c118(iVar1,*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

void FUN_arcade__8001b400(byte *param_1)

{
  int iVar1;

  if ((*param_1 & 1) == 0) {

    iVar1 = *(int *)(param_1 + 4);
    *(undefined2 *)(iVar1 + 6) = 0x3c;
    *(undefined2 *)(iVar1 + 8) = 0x78;
    FUN_arcade__8001a0f4(iVar1,0xffffffff);
  }
  else if ((*param_1 & 1) == 1) {

    FUN_arcade__8001c1b0(*(undefined4 *)(param_1 + 4));
  }
  return;
}

void FUN_arcade__8001b46c(byte *param_1)

{

  if ((*param_1 & 1) == 0) {

    FUN_arcade__8001a1c4(*(undefined4 *)(param_1 + 4));
  }
  else if ((*param_1 & 1) == 1) {

    FUN_arcade__8001c1d8(*(undefined4 *)(param_1 + 4));
  }
  return;
}

void FUN_arcade__8001b4c8(byte *param_1)

{

  if ((*param_1 & 1) == 0) {

    FUN_arcade__8001a18c(*(undefined4 *)(param_1 + 4));
  }
  else if ((*param_1 & 1) == 1) {

    FUN_arcade__8001c1c4(*(undefined4 *)(param_1 + 4));
  }
  return;
}

void FUN_arcade__8001b524(byte *param_1)

{

  if ((*param_1 & 1) == 0) {

    FUN_arcade__8001a220((byte *)*(undefined4 *)(param_1 + 4), 0, 0);
  }
  else if ((*param_1 & 1) == 1) {

    FUN_arcade__8001c234(*(undefined4 *)(param_1 + 4));
  }
  return;
}

void FUN_arcade__8001b580(byte *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;

  if ((*param_1 & 1) == 0) {

    iVar1 = *(int *)(param_1 + 4);
    *(undefined2 *)(iVar1 + 0x10) = param_2;
    *(undefined2 *)(iVar1 + 0x12) = param_3;
    return;
  }
  if ((*param_1 & 1) != 1) {
    return;
  }

  iVar1 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar1 + 8) = param_2;
  *(undefined2 *)(iVar1 + 10) = param_3;
  return;
}

void FUN_arcade__8001b5cc(byte *param_1,undefined param_2)

{

  if ((*param_1 & 1) == 0) {

    *(undefined *)(*(int *)(param_1 + 4) + 0xe) = param_2;
    return;
  }
  if ((*param_1 & 1) != 1) {
    return;
  }

  *(undefined *)(*(int *)(param_1 + 4) + 0xc) = param_2;
  return;
}

void FUN_arcade__8001b608(char *param_1)

{

  if (*param_1 == '\0') {

    *(ushort *)(*(int *)(param_1 + 4) + 0xc) = *(ushort *)(*(int *)(param_1 + 4) + 0xc) | 8;
    FUN_arcade__8001a158(0);
  }
  else if (*param_1 == '\x01') {

    *(byte *)(*(int *)(param_1 + 4) + 4) = *(byte *)(*(int *)(param_1 + 4) + 4) | 1;
    FUN_arcade__8001c1b8();
  }
  return;
}

void FUN_arcade__8001b680(byte *param_1)

{

  if ((*param_1 & 1) == 0) {

    *(ushort *)(*(int *)(param_1 + 4) + 0xc) = *(ushort *)(*(int *)(param_1 + 4) + 0xc) & 0xf7;
    return;
  }
  if ((*param_1 & 1) != 1) {
    return;
  }

  *(byte *)(*(int *)(param_1 + 4) + 4) = *(byte *)(*(int *)(param_1 + 4) + 4) & 0xfe;
  return;
}

void FUN_arcade__8001b6dc(char *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  param_1[0x14] = '\0';
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = '\0';
  *(undefined2 *)(param_1 + 0x1a) = 6;

  if ('\0' < *param_1) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      FUN_arcade__8001b37c(*(int *)(param_1 + 0xc) + iVar1);
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *param_1);
  }
  return;
}

void FUN_arcade__8001b760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = (int)*(char *)(param_1 + 0x14) - (int)*(char *)(param_1 + 2);
  *(undefined2 *)(param_1 + 0x1c) = 0;

  if (iVar3 < 0) {
    iVar3 = 0;
  }

  iVar1 = 0;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_arcade__8001b400(*(int *)(param_1 + 0xc) + iVar2);
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < iVar3);
  }

  *(undefined2 *)(param_1 + 0x1a) = 6;
  *(char *)(param_1 + 0x15) = (char)iVar3;
  *(undefined2 *)(param_1 + 0x18) = 0x1e;
  return;
}

void FUN_arcade__8001b7f0(char *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffbf;

  if ('\0' < *param_1) {
    iVar2 = 0;
    do {

      if (iVar1 != param_1[0x14]) {
        FUN_arcade__8001b4c8(*(int *)(param_1 + 0xc) + iVar2);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < *param_1);
  }
  return;
}

undefined4 FUN_arcade__8001b868(char *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;

  uVar7 = 0xfffffffe;
  iVar4 = 0;

  if ('\0' < *param_1) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      FUN_arcade__8001b46c(*(int *)(param_1 + 0xc) + iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar4 < *param_1);
  }

  sVar1 = *(short *)(param_1 + 0x1c);
  if (*(short *)(param_1 + 0x1c) < 0) {
    if (*(short *)(param_1 + 0x1c) != -1) {
      *(short *)(param_1 + 0x1c) = sVar1 + 1;
      uVar7 = 0xfffffffe;
      if ((short)(sVar1 + 1) == -0x3a) {
        FUN_arcade__8001b4c8(*(int *)(param_1 + 0xc) + param_1[0x14] * 0x14);
        uVar7 = 0xfffffffe;
      }
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 0x16);
    sVar2 = *(short *)(param_1 + 0x16);
    if (sVar1 < 0) {
      *(short *)(param_1 + 0x16) = sVar2 + 1;
      sVar1 = *(short *)(param_1 + 0x16);
      sVar2 = *(short *)(param_1 + 0x16);
    }
    if (0 < sVar1) {
      *(short *)(param_1 + 0x16) = sVar2 + -1;
    }

    sVar1 = *(short *)(param_1 + 0x18);
    *(short *)(param_1 + 0x18) = sVar1 + 1;
    if (0x3c < (short)(sVar1 + 1)) {
      *(undefined2 *)(param_1 + 0x18) = 0;
    }

    sVar1 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = sVar1 + 1;
    if (0x2d < (short)(sVar1 + 1)) {
      *(undefined2 *)(param_1 + 0x1c) = 0;
    }

    if (param_2 != 0) {
      uVar6 = *(uint *)(param_2 + 4);
      if ((uVar6 & 0x500) == 0) {
        iVar4 = (int)param_1[0x14];
        if ((uVar6 & 0xa00) == 0) {
          uVar6 = uVar6 | *(uint *)(param_2 + 0xc);
          iVar5 = iVar4;

          if ((uVar6 & 1) != 0) {
            iVar5 = iVar4 + -1;
            FUN_arcade__8001b680(*(int *)(param_1 + 0xc) + iVar4 * 0x14);
            *(undefined2 *)(param_1 + 0x16) = 0xfff8;
            if ((iVar5 < 0) && (iVar5 = 0, (param_1[1] & 4U) != 0)) {
              iVar5 = *param_1 + -1;
            }
            uVar7 = 0xfffffffd;
            FUN_arcade__8001b608(*(int *)(param_1 + 0xc) + iVar5 * 0x14);
            *(undefined2 *)(param_1 + 0x18) = 0;
          }
          iVar4 = iVar5;

          if ((uVar6 & 2) != 0) {
            iVar4 = iVar5 + 1;
            FUN_arcade__8001b680(*(int *)(param_1 + 0xc) + iVar5 * 0x14);
            *(undefined2 *)(param_1 + 0x16) = 8;
            if ((*param_1 <= iVar4) && (iVar4 = *param_1 + -1, (param_1[1] & 4U) != 0)) {
              iVar4 = 0;
            }
            uVar7 = 0xfffffffd;
            FUN_arcade__8001b608(*(int *)(param_1 + 0xc) + iVar4 * 0x14);
            *(undefined2 *)(param_1 + 0x18) = 0;
          }
          param_1[0x14] = (char)iVar4;
        }
        else {

          pcVar3 = (char *)(*(int *)(param_1 + 0xc) + iVar4 * 0x14);
          uVar7 = 0xfffffffc;
          if (-1 < *pcVar3) {
            uVar7 = *(undefined4 *)(pcVar3 + 0x10);
          }
        }
      }
      else {
        uVar7 = 0xffffffff;
      }
    }

    if ((param_1[0x15] < *param_1) &&
       (sVar1 = *(short *)(param_1 + 0x1a), *(short *)(param_1 + 0x1a) = sVar1 + -1, sVar1 == 1)) {
      FUN_arcade__8001b400(*(int *)(param_1 + 0xc) + param_1[0x15] * 0x14);
      *(undefined2 *)(param_1 + 0x1a) = 6;
      param_1[0x15] = param_1[0x15] + '\x01';
    }
  }
  return uVar7;
}

void FUN_arcade__8001bb88(char *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  iVar7 = (int)*(short *)(param_1 + 0x16);
  local_34 = (int)*(short *)(param_1 + 8) + (int)*(short *)(param_1 + 6);
  iVar15 = iVar7 * local_34;
  local_48 = 0xffffffff;
  bVar1 = param_1[2];
  local_44 = 0xffffffff;
  iVar5 = (uint)bVar1 << 0x18;
  iVar13 = iVar5 >> 0x18;
  uVar14 = (uint)param_1[0x14];
  iVar8 = (int)*(short *)(param_1 + 0x12);

  if (iVar15 < 0) {
    iVar15 = iVar15 + 7;
  }
  iVar15 = iVar8 + (iVar15 >> 3);

  local_3c = iVar7 * 0x80;
  iVar5 = iVar5 >> 0x19;
  iVar9 = iVar13 - iVar5;

  if (local_3c < 0) {
    local_3c = local_3c + 7;
  }
  local_3c = local_3c >> 3;
  if (local_3c < 0) {
    local_3c = -local_3c;
  }

  uVar11 = uVar14 - iVar5;
  local_40 = 0x80 - local_3c;
  iVar6 = (int)*param_1;

  if (iVar6 <= (int)(uVar11 + iVar13)) {
    uVar11 = iVar6 - iVar13;
  }
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }

  local_38 = iVar13;
  if (iVar7 < 0) {
    local_44 = uVar14 + iVar9;
    local_48 = uVar14 - iVar5;

    if (iVar6 - iVar13 <= (int)(uVar14 - iVar5)) {
      local_48 = 0xffffffff;
    }
    if ((int)local_44 < iVar13) {
      local_44 = 0xffffffff;
    }

    local_38 = iVar13 + 1;

    if (uVar14 == iVar6 - 1U) {
      local_48 = iVar6 - iVar13;
      if (iVar6 <= iVar13) {
        local_48 = 0xffffffff;
        iVar15 = iVar8;
        local_38 = iVar13;
      }
    }
    else if ((int)uVar14 < iVar5 || iVar6 - iVar9 <= (int)uVar14) {
      iVar15 = iVar8;
      local_38 = iVar13;
    }
  }

  uVar12 = uVar11;
  if (0 < *(short *)(param_1 + 0x16)) {
    local_48 = (uVar14 + iVar9) - 1;
    local_44 = (uVar14 - iVar5) - 1;

    if ((int)local_48 < iVar13) {
      local_48 = 0xffffffff;
    }
    iVar7 = (int)*param_1;
    if (iVar7 - iVar13 <= (int)local_44) {
      local_44 = 0xffffffff;
    }

    iVar15 = iVar15 - local_34;

    if (uVar14 == 0) {
      local_48 = iVar13 - 1;
      uVar12 = 0xffffffff;
      local_38 = iVar13 + 1;
      if (iVar7 <= iVar13) {
        iVar15 = (int)*(short *)(param_1 + 0x12);
        local_48 = 0xffffffff;
        uVar12 = 0;
        local_38 = iVar13;
      }
    }
    else {
      uVar12 = uVar11 - 1;
      local_38 = local_38 + 1;
      if ((int)uVar14 <= iVar5 || iVar7 - iVar9 < (int)uVar14) {
        iVar15 = (int)*(short *)(param_1 + 0x12);
        uVar12 = uVar11;
        local_38 = iVar13;
      }
    }
  }

  local_30 = uVar12 * 0x14;
  local_38 = local_38 + uVar12;

  for (uVar11 = uVar12; (int)uVar11 < local_38; uVar11 = uVar11 + 1) {

    if ((~uVar11 >> 0x1f & (uint)((int)uVar11 < (int)*param_1)) != 0) {
      pbVar10 = (byte *)(*(int *)(param_1 + 0xc) + local_30);
      iVar5 = (int)*(short *)(pbVar10 + 2);
      if (iVar5 < 1) {
        iVar5 = (int)*(short *)(param_1 + 6);
      }

      if ((((uint)(uVar11 == uVar14) & (uint)~(int)*(short *)(param_1 + 0x1c) >> 0x1f) != 0) &&
         ((*pbVar10 & 1) == 1)) {
        local_58 = *(undefined2 *)(param_1 + 0x10);
        local_56 = (undefined2)iVar15;
        local_54 = *(undefined2 *)(param_1 + 4);
        local_52 = (undefined2)iVar5;
        local_50 = 0x7071e;
        local_4c = 0x17175e;
        if (-1 < (char)*pbVar10) {
          local_50 = 0x1e1e1e;
          local_4c = 0x5e5e5e;
        }

        FUN_8006b814(param_2,&local_58,(*(short *)(param_1 + 0x18) * 0x80) / 0x3c);
      }

      iVar7 = 0x20;
      if (-1 < (char)*pbVar10) {
        iVar7 = 0x80;
      }
      if (uVar11 == local_48) {
        iVar7 = iVar7 * local_40 >> 7;
      }
      if (uVar11 == local_44) {
        iVar7 = iVar7 * local_3c >> 7;
      }

      FUN_arcade__8001b5cc(pbVar10,iVar7);
      FUN_arcade__8001b580(pbVar10,(int)*(short *)(param_1 + 0x10),iVar15 + (iVar5 >> 1));
      FUN_arcade__8001b524(pbVar10);
      iVar15 = iVar15 + *(short *)(param_1 + 8) + iVar5;
    }
    local_30 = local_30 + 0x14;
  }

  if (-1 < *(short *)(param_1 + 0x1c)) {
    iVar15 = 0x28 - *(short *)(param_1 + 0x1c);
    sVar2 = *(short *)(param_1 + 0x10);

    if (10 < iVar15) {
      iVar15 = 10;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    uVar14 = (iVar15 * 0xff) / 10;

    if (0 < (int)uVar12) {
      iVar15 = FUN_8007e0e0(param_2,uVar14 | ((int)uVar14 >> 1) << 8 | 0x2000000);
      sVar3 = *(short *)(param_1 + 0x12);
      sVar4 = *(short *)(param_1 + 8);
      *(short *)(iVar15 + 8) = sVar2 + 6;
      *(short *)(iVar15 + 4) = sVar2;
      *(short *)(iVar15 + 0xc) = sVar2 + -6;
      sVar3 = sVar3 - sVar4;
      *(short *)(iVar15 + 6) = sVar3 + -10;
      *(short *)(iVar15 + 10) = sVar3;
      *(short *)(iVar15 + 0xe) = sVar3;
    }

    if (local_38 < *param_1) {
      iVar15 = FUN_8007e0e0(param_2,uVar14 | ((int)uVar14 >> 1) << 8 | 0x2000000);
      sVar3 = *(short *)(param_1 + 0x12);
      *(short *)(iVar15 + 8) = sVar2 + -6;
      *(short *)(iVar15 + 4) = sVar2;
      *(short *)(iVar15 + 0xc) = sVar2 + 6;
      sVar3 = sVar3 + (short)local_34 * (short)(char)bVar1;
      *(short *)(iVar15 + 6) = sVar3 + 10;
      *(short *)(iVar15 + 10) = sVar3;
      *(short *)(iVar15 + 0xe) = sVar3;
    }
    FUN_8007da44(param_2,0x20);
  }
  return;
}
