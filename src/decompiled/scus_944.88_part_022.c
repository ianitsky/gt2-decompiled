// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_022.h"

// External declarations for overlay0 variables
extern undefined4 DAT_overlay0__80046ef4;
extern undefined4 DAT_overlay0__80046f64;
extern undefined4 DAT_overlay0__80046f70;
extern undefined4 DAT_overlay0__80046f74;
extern undefined4 DAT_overlay0__80046f7c;
extern undefined4 DAT_overlay0__80046f80;
extern undefined4 DAT_overlay0__80046f6c;
extern undefined4 DAT_overlay0__80046f78;
extern undefined4 DAT_overlay0__80046f84;
extern undefined4 DAT_overlay0__80046f88[];
extern undefined4 DAT_overlay0__80046f98[];
extern undefined4 DAT_overlay0__80046fa8[];

// External declarations for missing variables (will be added to gt2_global_vars_clean.h)
extern undefined4 DAT_800a9520;
extern undefined4 DAT_801c86ac;
extern undefined4 DAT_801c86ae;
extern undefined4 DAT_801c86b0;
extern undefined4 DAT_801c86a8;
extern undefined4 DAT_801c86aa;
extern undefined4 DAT_1f80001c;
extern undefined2 DAT_80093950[];
extern short DAT_80093150[0x800];
extern undefined4 DAT_800a9688;
extern undefined1 DAT_800af231;
extern undefined4 DAT_800aa1c8;
extern undefined4 DAT_800a96b4;
extern undefined4 DAT_800aa1f4;
extern bitfield_8_union_t DAT_801c98b4;
extern undefined4 DAT_800a9e04;
extern undefined4 DAT_801c8578;
extern undefined4 DAT_801c8577;
extern undefined4 *DAT_800b4a44;
extern undefined4 UNK_800a9d1c;
extern undefined4 UNK_800a9d24;
extern undefined4 UNK_800a9d2c;
extern undefined4 DAT_800a9d34;
extern undefined4 DAT_800a9d10;
extern undefined4 DAT_800a9d38;
extern undefined4 DAT_800a9d14;
extern undefined4 DAT_800a9d3c;
extern undefined4 UNK_800a9d40;
extern undefined4 UNK_800a9d48;
extern undefined4 UNK_800a9d50;
extern undefined4 DAT_800a9cb8;
extern undefined4 DAT_801c8740;
extern undefined4 DAT_801c8744;
extern undefined4 DAT_801c874c;
extern undefined4 DAT_801c8610;
extern undefined4 DAT_801c8650;
extern undefined4 DAT_801c8670;
extern undefined4 DAT_801c8608;
extern undefined4 DAT_801c856c;
extern undefined4 DAT_800a9500;
extern undefined4 DAT_1f800020;
extern bitfield_8_union_t DAT_801c98b8;
extern undefined4 DAT_801c98bc;
extern undefined4 DAT_801c8570;
extern undefined4 DAT_801c8579;
extern undefined4 DAT_801c857d;
extern undefined4 DAT_800af232;
extern undefined4 DAT_overlay0__80046eb8;
extern undefined4 LAB_overlay0__80046eba;
extern undefined4 LAB_overlay0__80046ebe_2;
extern undefined4 LAB_overlay0__80046ebe;
extern undefined4 LAB_overlay0__80046eba_2;
extern undefined4 LAB_overlay0__80046ec2;
extern undefined4 LAB_overlay0__80046ec2_2;
extern undefined4 DAT_overlay0__80046ec6;
extern undefined4 DAT_overlay0__80046ec8;
extern undefined4 DAT_1f800018;
extern undefined4 DAT_1f800028;
extern undefined4 DAT_801c8568;
extern undefined4 LAB_overlay0__80046c94;
extern undefined4 LAB_overlay0__80046c9c;

// Forward declarations for functions used but not yet declared
void FUN_overlay0__80044ea4(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6);
undefined4 FUN_overlay0__800450a0(undefined4 param_1);

// Aliases for DAT_1f800090 array access
#define DAT_1f800090 _DAT_1f800090
// DAT_1f800092 is offset +2 bytes from DAT_1f800090 (used as array of shorts)
// Access via: ((short *)((char *)&_DAT_1f800090 + 2))
#define DAT_1f800092_base ((short *)((char *)&_DAT_1f800090 + 2))

int FUN_overlay0__8003d7b8(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;

  pbVar2 = (byte *)(param_2 * 2 + param_1 + 0x26);

  uVar1 = (uint)*pbVar2;

  return (uVar1 / 100) * 60000 + (uVar1 % 100) * 1000 + (uint)pbVar2[1] * 10;
}

int FUN_overlay0__8003d848(ushort *param_1,short param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;

  psVar6 = *(short **)(param_1 + 2);
  psVar2 = *(short **)(param_1 + 4);
  uVar5 = *param_1 - 1 & 0xffff;

  if (param_2 <= *psVar6) {
    return (int)*psVar2;
  }

  if (psVar6[uVar5] <= param_2) {
    return (int)psVar2[uVar5];
  }

  uVar1 = 1;
  if (1 < uVar5) {
    do {

      if (param_2 < psVar6[uVar1 & 0xffff]) break;
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffff) < uVar5);
  }

  iVar4 = (int)(psVar2 + (uVar1 & 0xffff))[-1];
  iVar3 = (int)(psVar6 + (uVar1 & 0xffff))[-1];

  return iVar4 + ((param_2 - iVar3) * (psVar2[uVar1 & 0xffff] - iVar4)) /
                 (psVar6[uVar1 & 0xffff] - iVar3);
}

undefined4
FUN_overlay0__8003d940(ushort *param_1,int param_2,short param_3,short *param_4,short *param_5)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;

  psVar6 = *(short **)(param_1 + 2);
  psVar8 = *(short **)(param_1 + 4);
  psVar9 = *(short **)(param_2 + 8);
  uVar3 = *param_1 - 1 & 0xffff;

  if (*psVar6 < param_3) {

    if (param_3 < psVar6[uVar3]) {

      uVar4 = 1;
      if (1 < uVar3) {
        uVar1 = 1;
        do {

          if (param_3 < psVar6[uVar1]) break;
          uVar4 = uVar4 + 1;
          uVar1 = uVar4 & 0xffff;
        } while ((uVar4 & 0xffff) < uVar3);
      }
      uVar4 = uVar4 & 0xffff;

      psVar8 = psVar8 + uVar4;
      iVar7 = (int)(psVar6 + uVar4)[-1];
      iVar5 = param_3 - iVar7;
      iVar7 = psVar6[uVar4] - iVar7;
      psVar9 = psVar9 + uVar4;

      *param_4 = psVar8[-1] + (short)((iVar5 * ((int)*psVar8 - (int)psVar8[-1])) / iVar7);
      *param_5 = psVar9[-1] + (short)((iVar5 * ((int)psVar9[0] - (int)psVar9[-1])) / iVar7);
      return 1;
    }

    *param_4 = psVar8[uVar3];
    sVar2 = psVar9[uVar3];
  }
  else {

    *param_4 = *psVar8;
    sVar2 = *psVar9;
  }
  *param_5 = sVar2;
  return 1;
}

void FUN_overlay0__8003daa8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;

  iVar3 = *(int *)(param_1 + 0x6a4);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }

  if (*(short *)(param_1 + 0x774) == 0) {

    iVar4 = DAT_1f800000;
    if (DAT_1f800000 < 0) {
      iVar4 = DAT_1f800000 + 0x3f;
    }

    iVar4 = (uint)*(ushort *)(param_1 + 0x776) - (iVar4 >> 6);
    *(short *)(param_1 + 0x776) = (short)iVar4;

    if (iVar4 * 0x10000 < 0) {
      *(undefined2 *)(param_1 + 0x776) = 0;
    }
  }
  else {

    iVar4 = (uint)*(ushort *)(param_1 + 0x776) +
            (*(short *)(param_1 + 0x774) * DAT_1f800000 >> 0x10);
    *(short *)(param_1 + 0x776) = (short)iVar4;

    if (0x1000 < iVar4 * 0x10000 >> 0x10) {
      *(undefined2 *)(param_1 + 0x776) = 0x1000;
    }
  }

  iVar3 = (DAT_overlay0__80046ef4 +
          ((0x1000 - DAT_overlay0__80046ef4) * (0x1000 - *(short *)(param_1 + 0x776)) >> 0xc)) *
          ((iVar3 >> 5) * (iVar3 >> 5) >> 0xc) >> 0xc;

  sVar5 = (short)(*(int *)(param_1 + 0x43c) * iVar3 >> 0xc);

  if (-1 < *(int *)(param_1 + 0x6a4)) {
    sVar5 = -sVar5;
  }

  *(short *)(param_1 + 0x71a) = sVar5;

  iVar6 = 0;
  iVar4 = param_1;
  while (bVar2 = iVar6 < 2, iVar6 = iVar6 + 1, bVar2) {
    piVar1 = (int *)(iVar4 + 0x440);
    iVar4 = iVar4 + 4;

    *(int *)(param_1 + 0x71c) = *piVar1 * iVar3 >> 0xc;
    param_1 = param_1 + 4;
  }
  return;
}

void FUN_overlay0__8003dbe8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_10 [4];

  local_10[1] = (int)*(short *)(param_1 + 0x1fe);
  piVar2 = local_10;
  piVar6 = local_10;
  local_10[0] = local_10[1];
  local_10[3] = (int)*(short *)(param_1 + 0x2d6);
  local_10[2] = local_10[3];

  if ((short)(&DAT_1f800090)[(uint)*(byte *)(param_1 + 0x45c) * 0x48] != 0) {

    iVar1 = 0x1000 - ((short)(&DAT_1f800090)[(uint)*(byte *)(param_1 + 0x45c) * 0x48] * 100) / 100;
    if (iVar1 < 0) {
      iVar1 = 0;
    }

    local_10[0] = iVar1 * local_10[1] >> 0xc;

    if (*(int *)(param_1 + 0x64c) < 1) {

      local_10[2] = iVar1 * local_10[3] >> 0xc;
    }
    else {

      local_10[1] = local_10[0];
      local_10[3] = iVar1 * local_10[3] >> 0xc;
    }

    iVar1 = 0;
    do {
      if (0x1000 < *piVar2) {
        *piVar2 = 0x1000;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 4);
  }

  if ((param_2 != 0) &&
     (0 < DAT_1f800092_base[(uint)*(byte *)(param_1 + 0x45c) * 0x48] - param_3)) {

    iVar1 = param_1 + 0x4c8;
    if (*(int *)(param_1 + 0x64c) < 1) {
      iVar1 = param_1 + 0x460;
    }

    iVar4 = (int)*(short *)(iVar1 + 0x60) +
            (param_2 * (DAT_1f800092_base[(uint)*(byte *)(param_1 + 0x45c) * 0x48] - param_3)
            >> 9);
    if (0x1000 < iVar4) {
      iVar4 = 0x1000;
    }
    *(short *)(iVar1 + 0x60) = (short)iVar4;
  }

  iVar1 = 0x460;
  for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {
    iVar4 = param_1 + iVar1;

    if (*(short *)(iVar4 + 0x60) != 0) {

      iVar3 = (*(int *)(iVar4 + 0x34) * (int)*(short *)(param_1 + (uVar5 & 0xfffffffe) + 0x42c) >>
              0xc) * (0x1000 - (((int)*(short *)(iVar4 + 0x44) - *piVar6) *
                               ((int)*(short *)(iVar4 + 0x2a) *
                                *(int *)(param_1 + (uVar5 >> 1) * 4 + 0x424) >> 0xc) >> 0xc)) >>
              0xc;

      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x1000 < iVar3) {
        iVar3 = 0x1000;
      }

      iVar3 = iVar3 * *(short *)(iVar4 + 0x60) >> 0xc;
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      *(short *)(iVar4 + 0x60) = (short)iVar3;
    }
    piVar6 = piVar6 + 1;
    iVar1 = iVar1 + 0x68;
  }
  return;
}

void FUN_overlay0__8003de68(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if (((*(char *)(param_1 + 0x619) == '\x01') && (0 < *(int *)(param_1 + 0x710))) &&
     (iVar4 = 0x1000, *(short *)(param_1 + 0x708) != 0)) {
    iVar5 = 0x1000;
    iVar8 = param_1;

    for (iVar7 = 0; iVar7 < 2; iVar7 = iVar7 + 1) {
      bVar1 = *(byte *)(param_1 + 0x370);

      if (bVar1 == 1) {

        if (iVar7 != 1) goto LAB_overlay0__8003df14;
      }
      else {
        if (bVar1 < 2) {
          if (bVar1 == 0) {

LAB_overlay0__8003def8:
            if (iVar7 == 0) goto LAB_overlay0__8003df64;
          }
        }
        else if (bVar1 == 5) goto LAB_overlay0__8003def8;

LAB_overlay0__8003df14:
        for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {

          iVar2 = param_1 + (iVar7 * 2 + iVar6) * 0x68;
          iVar3 = (int)*(short *)(iVar2 + 0x4a4);

          if ((*(int *)(iVar2 + 0x468) != 0) && (iVar3 < iVar4)) {
            iVar5 = (int)*(short *)(iVar8 + 0x1fc);
            iVar4 = iVar3;
          }
        }
      }
LAB_overlay0__8003df64:
      iVar8 = iVar8 + 0xd8;
    }

    iVar4 = FUN_8007596c(iVar4 - (iVar5 * param_3 >> 0xc), param_2 * (0x1000 - param_4) >> 0xc);
    iVar4 = iVar4 + 0x1000;

    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x1000 < iVar4) {
      iVar4 = 0x1000;
    }

    *(short *)(param_1 + 0x708) = (short)(iVar4 * *(short *)(param_1 + 0x708) >> 0xc);
  }
  return;
}

int FUN_overlay0__8003dfdc(int param_1,int param_2,int param_3)

{
  int iVar1;

  if (param_1 < 0) {
    param_1 = -param_1;
  }

  if (param_1 - param_3 < 0) {
    return 0x1000;
  }

  iVar1 = (param_1 - param_3) * param_2 >> 0xc;

  if (iVar1 < 0x1001) {
    return 0x1000 - iVar1;
  }
  return 0;
}

void FUN_overlay0__8003e020(int param_1,ushort *param_2)

{
  undefined uVar1;

  if ((*param_2 & 1) == 0) {

    if (param_2[1] == 0) {
      *(undefined *)(param_1 + 0x768) = 0;
      goto LAB_overlay0__8003e07c;
    }
    uVar1 = 100;
    if ((short)param_2[1] < 1) {
      uVar1 = 0x9c;
    }
  }
  else {

    uVar1 = (undefined)((short)param_2[1] * 0x19 >> 10);
  }
  *(undefined *)(param_1 + 0x768) = uVar1;

LAB_overlay0__8003e07c:
  if ((*param_2 & 2) == 0) {

    if (param_2[3] == 0) {
      *(undefined *)(param_1 + 0x6fd) = 0;
      return;
    }
  }
  else if (param_2[3] != 0x1000) {

    *(undefined *)(param_1 + 0x6fd) = 0;
  }
  return;
}

void FUN_overlay0__8003e0c4(int param_1,int param_2)

{
  ushort *puVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined auStack_38 [16];

  bVar4 = DAT_800a9520 != 0;
  iVar18 = param_1;

  for (iVar19 = 0; iVar19 < param_2; iVar19 = iVar19 + 1) {
    *(bool *)(iVar18 + 0x744) = bVar4;

    iVar7 = FUN_overlay0__80012378();
    if ((iVar7 != 0) && (*(char *)(iVar18 + 0x48a) == '\x02')) {
      bVar5 = FUN_overlay0__8003faec();
      *(byte *)(iVar18 + 0x744) = *(byte *)(iVar18 + 0x744) | bVar5;
    }

    if (*(short *)(iVar18 + 0x76a) != 0) {
      *(short *)(iVar18 + 0x76a) = *(short *)(iVar18 + 0x76a) + -1;
    }
    if (*(short *)(iVar18 + 0x7ba) != 0) {
      *(short *)(iVar18 + 0x7ba) = *(short *)(iVar18 + 0x7ba) + -1;
    }

    cVar2 = *(char *)(iVar18 + 0x791);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(iVar18 + 0x791) = cVar2 + -1;
    }

    FUN_overlay0__8004232c(iVar18 + 0x2c);
    iVar18 = iVar18 + 0xb40;
  }

  iVar19 = 0;
  bVar4 = 0 < param_2;
  iVar18 = param_1;
  while (bVar4) {
    DAT_1f800000 = (int)*(short *)(iVar18 + 0x72a);
    iVar19 = iVar19 + 1;
    FUN_overlay0__8003daa8(iVar18);
    bVar4 = iVar19 < param_2;
    iVar18 = iVar18 + 0xb40;
  }

  iVar18 = param_1;
  for (iVar19 = 0; iVar19 < param_2; iVar19 = iVar19 + 1) {

    uVar8 = FUN_80075d2c(iVar18 + 0xa8,*(undefined4 *)(iVar18 + 0x650));
    *(undefined4 *)(iVar18 + 0x73c) = uVar8;

    uVar8 = FUN_80075bf4(*(undefined4 *)(iVar18 + 0x138),*(undefined4 *)(iVar18 + 0x650));
    *(undefined4 *)(iVar18 + 0x740) = uVar8;
    iVar18 = iVar18 + 0xb40;
  }

  FUN_overlay0__80039a4c(param_1,param_2);
  FUN_overlay0__80039de8(param_1,param_2);

  iVar7 = 0x364;
  iVar18 = param_1;
  for (iVar19 = 0; iVar19 < param_2; iVar19 = iVar19 + 1) {

    FUN_overlay0__8003c250(auStack_38,iVar18);
    iVar16 = iVar18 + 0x2c;
    DAT_1f800000 = (int)*(short *)(iVar18 + 0x72a);
    *(undefined *)(iVar18 + 0x729) = 1;

    if (*(char *)(iVar18 + 0x489) == '\0') {

      FUN_overlay0__8003e020(iVar16,auStack_38);

      if ((*(char *)(iVar18 + 0x7b2) != '\0') &&
         (puVar12 = auStack_38, *(short *)(iVar18 + 0x7ba) == 0)) goto LAB_overlay0__8003e304;

      FUN_overlay0__8002fb18(iVar16,auStack_38,iVar7 + 0x1f800000,iVar19);

      uVar10 = 0;
      *(undefined2 *)(iVar18 + 0x734) = *(undefined2 *)(iVar18 + 0x63c);
      do {
        uVar10 = uVar10 + 1;
        *(undefined2 *)(iVar16 + 0x4c0) = *(undefined2 *)(iVar18 + 0x63e);
        iVar16 = iVar16 + 0x68;
      } while (uVar10 < 4);
    }
    else if (*(char *)(iVar18 + 0x489) == '\x02') {

      puVar12 = (undefined *)0x0;
LAB_overlay0__8003e304:
      FUN_overlay0__80038540(iVar16,puVar12,iVar19);
    }
    iVar7 = iVar7 + 4;
    iVar18 = iVar18 + 0xb40;
  }

  iVar7 = 0;
  iVar18 = param_1;
  for (iVar19 = 0; iVar16 = iVar18 + 0x2c, iVar19 < param_2; iVar19 = iVar19 + 1) {

    iVar9 = (int)*(short *)(iVar18 + 0x638);
    if (iVar9 < 0) {

      *(short *)(iVar18 + 0x498) = -(short)(-iVar9 * (int)*(short *)(iVar18 + 0x92) >> 0xc);
      sVar6 = -(short)(-iVar9 * (int)*(short *)(iVar18 + 0x90) >> 0xc);
    }
    else {

      *(short *)(iVar18 + 0x498) = (short)(iVar9 * *(short *)(iVar18 + 0x90) >> 0xc);
      sVar6 = (short)(iVar9 * *(short *)(iVar18 + 0x92) >> 0xc);
    }
    *(short *)(iVar18 + 0x500) = sVar6;

    iVar14 = 0x68;
    *(undefined2 *)(iVar18 + 0x568) = 0;
    *(undefined2 *)(iVar18 + 0x5d0) = 0;
    iVar9 = iVar16;
    iVar13 = iVar16;

    for (iVar15 = 0; iVar11 = iVar16 + iVar14, iVar15 < 2; iVar15 = iVar15 + 1) {
      iVar14 = iVar14 + 0xd0;
      sVar6 = *(short *)(iVar13 + 0x36c);
      iVar13 = iVar13 + 2;
      *(short *)(iVar9 + 0x46c) = *(short *)(iVar9 + 0x46c) - sVar6;
      iVar9 = iVar9 + 0xd0;
      *(short *)(iVar11 + 0x46c) = *(short *)(iVar11 + 0x46c) + sVar6;
    }

    iVar13 = FUN_overlay0__800419e8(iVar16);
    uVar10 = 0;
    iVar9 = iVar7;
    if (iVar13 == 2) {

      *(ushort *)(iVar18 + 0x498) = *(short *)(iVar18 + 0x498) - (ushort)*(byte *)(iVar18 + 0x4ae);
      *(ushort *)(iVar18 + 0x500) = *(short *)(iVar18 + 0x500) + (ushort)*(byte *)(iVar18 + 0x516);
      *(ushort *)(iVar18 + 0x568) = *(short *)(iVar18 + 0x568) + (ushort)*(byte *)(iVar18 + 0x57e);
      *(ushort *)(iVar18 + 0x5d0) = *(short *)(iVar18 + 0x5d0) - (ushort)*(byte *)(iVar18 + 0x5e6);
    }

    for (; uVar10 < 4; uVar10 = uVar10 + 1) {

      *(undefined2 *)((int)&DAT_1f80001c + iVar9 + 2) =
           DAT_80093950[*(ushort *)(iVar16 + 0x46c) & 0xfff];
      puVar1 = (ushort *)(iVar16 + 0x46c);
      iVar16 = iVar16 + 0x68;
      *(undefined2 *)((int)&DAT_1f80001c + iVar9) = DAT_80093150[*puVar1 & 0xfff];
      iVar9 = iVar9 + 0x1c;
    }
    iVar7 = iVar7 + 0x90;
    iVar18 = iVar18 + 0xb40;
  }

  FUN_overlay0__80039778(param_1,param_2);

  iVar19 = 0x1f800000;
  iVar18 = param_1;
  for (iVar7 = 0; iVar7 < param_2; iVar7 = iVar7 + 1) {

    *(undefined2 *)(iVar19 + 0x90) = 0;
    *(undefined2 *)(iVar19 + 0x92) = 0;

    if (0 < *(int *)(iVar18 + 0x6d0)) {

      uVar10 = (uint)*(short *)(iVar18 + 0x638);
      uVar17 = *(uint *)(iVar18 + 0x678);

      if (-1 < (int)(uVar10 * uVar17)) {

        if ((int)uVar10 < 0) {
          uVar10 = -uVar10;
          uVar17 = -uVar17;
        }

        uVar10 = FUN_80075bf4(*(int *)(iVar18 + 0x6d0),(int)(short)DAT_80093150[uVar10 & 0xfff]);
        iVar16 = *(short *)(iVar18 + 0x3c) * 0x6488;
        iVar16 = FUN_80086084(uVar10 << 0xc,((int)uVar10 >> 0x1f) << 0xc | uVar10 >> 0x14,
                              iVar16 >> 0xc,iVar16 >> 0x1f);
        iVar9 = iVar16 << 7;

        if ((iVar16 != 0) && ((int)uVar17 < iVar9)) {
          sVar6 = FUN_80086084(uVar17 << 0xc,((int)uVar17 >> 0x1f) << 0xc | uVar17 >> 0x14,iVar9,
                               iVar9 >> 0x1f);
          *(short *)(iVar19 + 0x90) = 0x1000 - sVar6;
        }
      }

      iVar16 = FUN_80081af0(-*(int *)(iVar18 + 0x6d4),*(undefined4 *)(iVar18 + 0x6d0));
      if (iVar16 != 0) {

        if (iVar16 < 1) {
          iVar16 = -iVar16;
          if (-1 < *(int *)(iVar18 + 0x678)) goto LAB_overlay0__8003e634;
        }
        else if (*(int *)(iVar18 + 0x678) < 1) {
LAB_overlay0__8003e634:

          if (-1 < *(int *)(iVar18 + 0x6d0)) {
            FUN_overlay0__8003c360(*(int *)(iVar18 + 0x6d0),*(undefined4 *)(iVar18 + 0x6d4));
            iVar16 = FUN_80075c54(iVar16,*(undefined4 *)(iVar18 + 0x6d0),2);
            if (-1 < iVar16) {

              if (0x1000 < iVar16) {
                iVar16 = 0x1000;
              }
              *(short *)(iVar19 + 0x92) = (short)iVar16;
            }
          }
        }
      }
    }
    iVar19 = iVar19 + 0x90;
    iVar18 = iVar18 + 0xb40;
  }

  iVar19 = 0;
  iVar18 = param_1;
  do {
    iVar7 = iVar18 + 0x2c;

    if (param_2 <= iVar19) {

      FUN_overlay0__80039fc8(param_1,param_2);
      FUN_overlay0__80030330(param_1,param_2);
      return;
    }

    if (*(char *)(iVar18 + 0x489) == '\0') {

      if ((*(char *)(iVar18 + 0x7b2) != '\0') && (*(short *)(iVar18 + 0x7ba) == 0))
      goto LAB_overlay0__8003e750;

      if (*(short *)(iVar18 + 0x480) != 0) {

        uVar8 = FUN_overlay0__8003dfdc
                          ((int)*(short *)(iVar18 + 0x676),(int)*(short *)(iVar18 + 0x480),0x400);

        if (*(char *)(iVar18 + 0x644) == '\0') {
          iVar16 = 0;
        }
        else {

          iVar16 = (int)*(short *)(iVar18 + 0x72c) * (int)*(short *)(iVar18 + 0x482) >> 0xc;
        }

        FUN_overlay0__8003de68(iVar7,*(undefined4 *)(iVar18 + 0x47c),uVar8,iVar16);
      }

      sVar6 = *(short *)(iVar18 + 0x484);
      sVar3 = *(short *)(iVar18 + 0x486);
LAB_overlay0__8003e794:

      FUN_overlay0__8003dbe8(iVar7,(int)sVar6,(int)sVar3);
    }
    else if (*(char *)(iVar18 + 0x489) == '\x02') {

LAB_overlay0__8003e750:
      uVar10 = (uint)*(byte *)(iVar18 + 0x49);

      uVar8 = FUN_overlay0__8003dfdc
                        ((int)*(short *)(iVar18 + 0x676),(int)(short)(&DAT_801c86ac)[uVar10 * 0x14],
                         (int)(short)(&DAT_801c86ae)[uVar10 * 0x14]);

      FUN_overlay0__8003de68(iVar7,(&DAT_801c86b0)[uVar10 * 10],uVar8,0);

      sVar6 = (&DAT_801c86a8)[uVar10 * 0x14];
      sVar3 = (&DAT_801c86aa)[uVar10 * 0x14];
      goto LAB_overlay0__8003e794;
    }

    iVar18 = iVar18 + 0xb40;
    iVar19 = iVar19 + 1;
  } while( true );
}

void FUN_overlay0__8003e7ec(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;

  iVar3 = FUN_8007596c(*(int *)(param_1 + 0x530) - *(int *)(param_1 + 0x460),
                       (int)*(short *)(param_1 + 0x14));
  iVar3 = *(int *)(param_1 + 0x460) + iVar3;

  iVar4 = FUN_8007596c(*(int *)(param_1 + 0x598) - *(int *)(param_1 + 0x4c8),
                       (int)*(short *)(param_1 + 0x14));
  iVar4 = *(int *)(param_1 + 0x4c8) + iVar4;

  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_1 + 0x660);
  *(int *)(param_1 + 0x688) = (iVar3 + iVar4) / 2;

  uVar1 = FUN_80081af0(((*(int *)(param_1 + 0x460) + *(int *)(param_1 + 0x4c8)) -
                       (*(int *)(param_1 + 0x530) + *(int *)(param_1 + 0x598))) / 2,
                       (int)*(short *)(param_1 + 0x10));
  *(undefined2 *)(param_1 + 0x6f4) = uVar1;

  sVar2 = FUN_80081af0(iVar3 - iVar4,(int)*(short *)(param_1 + 0x12));
  *(short *)(param_1 + 0x6f6) = sVar2;

  FUN_overlay0__80044ea4
            (param_1 + 0x68c,param_1 + 0x694,param_1 + 0x69c,(int)*(short *)(param_1 + 0x6f4),
             (int)sVar2,(int)*(short *)(param_1 + 0x648));
  return;
}

void FUN_overlay0__8003e8e4(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  if (DAT_800a9520 == 0) {
    FUN_overlay0__80043ae0(param_1, param_2);
  }

  iVar9 = 0;
  bVar1 = 0 < param_2;
  iVar8 = param_1;
  while (bVar1) {
    DAT_1f800000 = (int)*(short *)(iVar8 + 0x72a);
    iVar9 = iVar9 + 1;
    FUN_overlay0__800426f0(iVar8);
    bVar1 = iVar9 < param_2;
    iVar8 = iVar8 + 0xb40;
  }

  iVar8 = param_1;
  for (iVar9 = 0; iVar9 < param_2; iVar9 = iVar9 + 1) {

    iVar7 = (int)*(short *)(iVar8 + 0x674);
    iVar4 = (uint)DAT_801c9990 * 4;
    iVar10 = *(int *)(&LAB_overlay0__80046c94 + iVar4);
    iVar4 = *(int *)(&LAB_overlay0__80046c9c + iVar4);

    if ((DAT_801c9990 == 1) &&
       (iVar5 = FUN_overlay0__8003c360
                          (*(undefined4 *)(iVar8 + 0x654),*(undefined4 *)(iVar8 + 0x658)),
       0x8e3 < iVar5)) {

      iVar7 = FUN_80081af0(-*(int *)(iVar8 + 0x654),*(undefined4 *)(iVar8 + 0x658));
    }

    iVar7 = FUN_overlay0__800450e0(iVar7,(int)*(short *)(iVar8 + 0x774));
    iVar4 = iVar7 * iVar10 + (int)*(short *)(iVar8 + 0x776) * -iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }

    sVar2 = FUN_8007598c(DAT_1f800000,((int)*(short *)(iVar8 + 0x77e) + (iVar4 >> 0xc)) / 2);
    *(short *)(iVar8 + 0x77e) = (short)(iVar4 >> 0xc);
    *(short *)(iVar8 + 0x776) = *(short *)(iVar8 + 0x776) + sVar2;
    iVar4 = FUN_8007598c((int)*(short *)(iVar8 + 0x776),DAT_1f800000);
    iVar4 = (uint)*(ushort *)(iVar8 + 0x774) + iVar4;
    *(short *)(iVar8 + 0x774) = (short)iVar4;
    sVar2 = FUN_overlay0__800450a0(iVar4 * 0x10000 >> 0x10);
    *(short *)(iVar8 + 0x774) = sVar2;
    uVar3 = FUN_overlay0__800450e0((int)*(short *)(iVar8 + 0x674),(int)sVar2);
    *(undefined2 *)(iVar8 + 0x766) = uVar3;

    uVar6 = FUN_overlay0__800450e0((int)*(short *)(iVar8 + 0x670),(int)*(short *)(iVar8 + 0x778));
    iVar4 = FUN_8007596c(uVar6,0x14000);
    iVar7 = FUN_8007596c((int)*(short *)(iVar8 + 0x77a),0xa000);
    iVar4 = FUN_8007598c(iVar4 - iVar7,DAT_1f800000);
    iVar4 = (uint)*(ushort *)(iVar8 + 0x77a) + iVar4;
    *(short *)(iVar8 + 0x77a) = (short)iVar4;
    iVar4 = FUN_8007598c(iVar4 * 0x10000 >> 0x10,DAT_1f800000);
    iVar4 = (uint)*(ushort *)(iVar8 + 0x778) + iVar4;
    *(short *)(iVar8 + 0x778) = (short)iVar4;
    sVar2 = FUN_overlay0__800450a0(iVar4 * 0x10000 >> 0x10);
    *(short *)(iVar8 + 0x778) = sVar2;
    uVar3 = FUN_overlay0__800450e0((int)*(short *)(iVar8 + 0x670),(int)sVar2);
    *(undefined2 *)(iVar8 + 0x768) = uVar3;
    iVar8 = iVar8 + 0xb40;
  }

  iVar8 = param_1;
  for (iVar9 = 0; iVar9 < param_2; iVar9 = iVar9 + 1) {
    FUN_overlay0__8004335c(iVar8 + 0x2c);
    iVar8 = iVar8 + 0xb40;
  }

  iVar9 = 0;
  bVar1 = 0 < param_2;
  iVar8 = param_1;
  while (bVar1) {
    iVar9 = iVar9 + 1;

    FUN_overlay0__80044ea4
              (iVar8 + 0x694,iVar8 + 0x69c,iVar8 + 0x6a4,(int)*(short *)(iVar8 + 0x670),
               (int)*(short *)(iVar8 + 0x672),(int)*(short *)(iVar8 + 0x674));
    bVar1 = iVar9 < param_2;
    iVar8 = iVar8 + 0xb40;
  }

  iVar8 = param_1;
  for (iVar9 = 0; iVar9 < param_2; iVar9 = iVar9 + 1) {
    FUN_overlay0__8003e7ec(iVar8 + 0x2c);
    iVar8 = iVar8 + 0xb40;
  }

  FUN_overlay0__800306c0(param_1,param_2);
  return;
}

void FUN_overlay0__8003ebf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;

  puVar6 = &DAT_800a9688;
  uVar5 = (uint)DAT_800af231;

  FUN_overlay0__8003e0c4(&DAT_800a9688,uVar5);

  if (DAT_800a9520 == 0) {
    FUN_overlay0__80034480(&DAT_800a9688,uVar5);
  }

  FUN_overlay0__80043388(&DAT_800a9688,uVar5);
  FUN_overlay0__800434dc(&DAT_800a9688,uVar5);
  FUN_overlay0__80043578(&DAT_800a9688,uVar5);
  FUN_overlay0__8003e8e4(&DAT_800a9688,uVar5);
  FUN_overlay0__8003cf94(&DAT_800a9688,uVar5);
  FUN_overlay0__8003d168();

  iVar3 = 0;
  puVar1 = puVar6;
  if (DAT_801d5866 == 3) {

    for (; iVar3 < (int)uVar5; iVar3 = iVar3 + 1) {
      FUN_overlay0__8003d5f8(puVar1 + 0xb);
      puVar1 = puVar1 + 0x2d0;
    }
  }

  iVar3 = FUN_overlay0__80012378();
  if (iVar3 == 0) {
    iVar3 = 0;
    if (uVar5 != 0) {

      do {
        FUN_overlay0__800133f0(puVar6);
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 0x2d0;
      } while (iVar3 < (int)uVar5);
    }
  }
  else {

    FUN_overlay0__800133f0(&DAT_800a9688);
    if (uVar5 == 2) {
      FUN_overlay0__8003f2f0(1);
      FUN_overlay0__800133f0(&DAT_800aa1c8);
    }
  }

  FUN_overlay0__80042568(&DAT_800a9688,uVar5);

  iVar3 = FUN_overlay0__80012378();
  if ((iVar3 != 0) && (uVar5 == 2)) {
    FUN_overlay0__8003f548(1);
  }

  if (DAT_801d5866 != 2) {
    if (DAT_801d5866 < 3) {
      if (DAT_801d5866 != 0) {
        return;
      }
      FUN_overlay0__80042038(&DAT_800a96b4,&DAT_800aa1f4);
      return;
    }
    if ((DAT_801d5866 != 4) && (DAT_801d5866 != 0xc)) {
      return;
    }
  }

  iVar3 = 1;
  if (DAT_801c98b4.bytes._2_1_ == '\0') {

    puVar6 = &DAT_800aa1c8;
    if (1 < uVar5) {
      do {
        FUN_overlay0__80042230(&DAT_800a96b4,puVar6 + 0xb);
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 0x2d0;
      } while (iVar3 < (int)uVar5);
    }
  }
  else {

    if (0 < DAT_800a9e04 + -1) {
      iVar3 = 1;
      iVar4 = 0;
      do {
        iVar2 = iVar3;

        FUN_overlay0__80042230
                  (&DAT_800a96b4 + (char)(&DAT_801c8578)[iVar2] * 0x2d0,
                   &DAT_800a96b4 + (char)(&DAT_801c8578)[iVar4] * 0x2d0);
        iVar3 = iVar2 + 1;
        iVar4 = iVar2;
      } while (iVar2 < DAT_800a9e04 + -1);
    }

    for (iVar3 = (int)DAT_800a9e04; iVar3 < (int)uVar5; iVar3 = iVar3 + 1) {

      FUN_overlay0__80042230
                (&DAT_800a96b4 + (char)(&DAT_801c8577)[iVar3] * 0x2d0,
                 &DAT_800a96b4 + (char)(&DAT_801c8578)[iVar3] * 0x2d0);
    }
  }

  return;
}

int FUN_overlay0__8003ef18(byte *param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = 0;
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + (uint)*param_1;
    param_1 = param_1 + 1;
  } while (uVar1 < 0xd8);
  return iVar2;
}

bool FUN_overlay0__8003ef40(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;

  puVar4 = (undefined *)FUN_overlay0__80012360();
  iVar5 = FUN_overlay0__80012304();
  *puVar4 = 3;

  FUN_overlay0__800124b0();

  iVar6 = FUN_overlay0__8003ef18(iVar5 + 8);
  if (iVar6 == 0) {
    puVar4[1] = 0;
  }

  cVar1 = puVar4[1];

  if (cVar1 != '\0') {

    FUN_8008ce30(puVar4 + 6,0,0x33c);
    puVar4[1] = 1;

    uVar2 = *(undefined *)(param_1 + 0x45e);
    uVar3 = *(undefined *)(param_1 + 0x45c);

    FUN_overlay0__8003519c(param_1,iVar5 + 8);

    *(undefined *)(param_1 + 0x45e) = uVar2;
    *(undefined *)(param_1 + 0x45c) = uVar3;
  }
  return cVar1 != '\0';
}

undefined4 FUN_overlay0__8003eff0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_overlay0__800450a0(param_2);
  iVar2 = FUN_overlay0__800450a0(param_4);

  if (iVar1 - iVar2 < 0x800) {

    if (iVar1 - iVar2 < -0x800) {
      iVar1 = iVar1 + 0x1000;
    }
  }
  else {

    iVar2 = iVar2 + 0x1000;
  }

  iVar1 = param_1 * iVar1 + param_3 * iVar2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  return FUN_overlay0__800450a0(iVar1 >> 0xc);
}

void FUN_overlay0__8003f09c(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  puVar2 = (undefined4 *)(param_2 + 0x65c);
  puVar3 = param_1;

  do {
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  } while (puVar2 != (undefined4 *)(param_2 + 0x67c));

  *puVar3 = *puVar2;
  puVar2 = param_1 + 9;
  puVar3 = (undefined4 *)(param_2 + 0x680);

  do {
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    *puVar2 = *puVar3;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar3 = puVar3 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar3 != (undefined4 *)(param_2 + 0x6a0));

  iVar5 = 0;
  *puVar2 = *puVar3;
  param_1[0x12] = *(undefined4 *)(param_2 + 0x604);

  puVar3 = param_1;
  iVar4 = param_2;
  do {
    puVar1 = (undefined2 *)(iVar4 + 0x644);
    iVar4 = iVar4 + 2;
    iVar5 = iVar5 + 1;
    *(undefined2 *)(puVar3 + 0x14) = *puVar1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while (iVar5 < 3);

  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x6f4);
  *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)(param_2 + 0x6f6);
  return;
}

void FUN_overlay0__8003f16c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  puVar2 = (undefined4 *)(param_1 + 0x65c);
  puVar1 = param_2;

  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != param_2 + 8);

  *puVar2 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x680);
  puVar1 = param_2 + 9;

  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != param_2 + 0x11);

  *puVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x604) = param_2[0x12];
  return;
}

int FUN_overlay0__8003f200(short param_1,int param_2,short param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = *DAT_800b4a44;

  if (param_2 + iVar3 / 2 < param_4) {

    iVar1 = FUN_80075a5c((int)param_1);
    param_4 = param_4 - iVar3;
  }
  else {

    if (param_2 <= param_4 + iVar3 / 2) {

      iVar3 = FUN_80075a5c((int)param_1);
      iVar1 = FUN_80075a5c((int)param_3,param_4);
      return iVar3 + iVar1;
    }

    iVar1 = FUN_80075a5c((int)param_1,param_2 - iVar3);
  }

  iVar2 = FUN_80075a5c((int)param_3,param_4);
  iVar1 = iVar1 + iVar2;

  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar3;
  }

  return iVar1;
}

void FUN_overlay0__8003f2f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;

  iVar2 = FUN_overlay0__800122c4();
  iVar6 = param_1 * 0xb40;
  puVar9 = &DAT_800a96b4 + param_1 * 0x2d0;
  iVar12 = 0;

  puVar13 = (undefined4 *)(iVar2 + (1 - *(short *)(iVar2 + 0xb8)) * 0x5c);
  puVar14 = (undefined4 *)(iVar2 + *(short *)(iVar2 + 0xb8) * 0x5c);

  FUN_overlay0__8003f09c(puVar13,puVar9);
  uVar1 = *(ushort *)(iVar2 + 0xbe);

  puVar8 = puVar13;
  puVar11 = puVar14;
  do {
    uVar7 = *puVar11;
    puVar11 = puVar11 + 1;
    iVar12 = iVar12 + 1;
    iVar2 = FUN_80075a5c((int)((0x1000 - (uint)uVar1) * 0x10000) >> 0x10,uVar7);
    uVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    iVar3 = FUN_80075a5c((int)(short)uVar1,uVar7);
    puVar9[0x197] = iVar2 + iVar3;
    puVar9 = puVar9 + 1;
  } while (iVar12 < 3);

  iVar10 = (int)(short)(0x1000 - (uint)uVar1);
  iVar3 = (int)(short)uVar1;

  uVar7 = FUN_overlay0__8003eff0
                    (iVar10,(int)*(short *)(puVar14 + 0x14),iVar3,(int)*(short *)(puVar13 + 0x14));
  uVar4 = FUN_overlay0__8003eff0
                    (iVar10,(int)*(short *)((int)puVar14 + 0x52),iVar3,
                     (int)*(short *)((int)puVar13 + 0x52));
  uVar5 = FUN_overlay0__8003eff0
                    (iVar10,(int)*(short *)(puVar14 + 0x15),iVar3,(int)*(short *)(puVar13 + 0x15));

  FUN_overlay0__80044ea4
            (&UNK_800a9d1c + iVar6,&UNK_800a9d24 + iVar6,&UNK_800a9d2c + iVar6,uVar7,uVar4,uVar5);

  *(undefined4 *)(&DAT_800a9d34 + iVar6) = *(undefined4 *)(&DAT_800a9d10 + iVar6);
  *(undefined4 *)(&DAT_800a9d38 + iVar6) = *(undefined4 *)(&DAT_800a9d14 + iVar6);

  iVar2 = FUN_80075a5c(iVar10,puVar14[0xb]);
  iVar12 = FUN_80075a5c(iVar3,puVar13[0xb]);
  *(int *)(&DAT_800a9d3c + iVar6) = iVar2 + iVar12;

  uVar7 = FUN_overlay0__8003eff0
                    (iVar10,(int)*(short *)(puVar14 + 0x16),iVar3,(int)*(short *)(puVar13 + 0x16));
  uVar4 = FUN_overlay0__8003eff0
                    (iVar10,(int)*(short *)((int)puVar14 + 0x5a),iVar3,
                     (int)*(short *)((int)puVar13 + 0x5a));

  FUN_overlay0__80044ea4
            (&UNK_800a9d40 + iVar6,&UNK_800a9d48 + iVar6,&UNK_800a9d50 + iVar6,uVar7,uVar4,uVar5);

  uVar7 = FUN_overlay0__8003f200(iVar10,puVar14[0x12],iVar3,puVar13[0x12]);
  *(undefined4 *)(&DAT_800a9cb8 + iVar6) = uVar7;
  return;
}

void FUN_overlay0__8003f548(int param_1)

{
  int iVar1;

  iVar1 = FUN_overlay0__800122c4();

  FUN_overlay0__8003f16c
            (&DAT_800a96b4 + param_1 * 0x2d0,iVar1 + (1 - *(short *)(iVar1 + 0xb8)) * 0x5c);

  *(short *)(iVar1 + 0xb8) = 1 - *(short *)(iVar1 + 0xb8);
  return;
}

void FUN_overlay0__8003f5e0(undefined4 param_1,undefined2 param_2,undefined param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;

  puVar1 = (undefined *)FUN_overlay0__8001236c();
  puVar2 = (undefined2 *)FUN_overlay0__800122d0();

  FUN_overlay0__800350fc(puVar2 + 4,param_1);

  puVar1[1] = 1;
  *puVar1 = 1;
  *(undefined2 *)(puVar1 + 2) = 0;

  *puVar2 = param_2;
  *(undefined *)(puVar2 + 1) = param_3;

  if (DAT_801d5864 == '\x01') {
    uVar3 = DAT_overlay0__80046f64 + 0x32;
  }
  else {
    uVar3 = DAT_overlay0__80046f64 + 100;
  }

  *(byte *)((int)puVar2 + 3) =
       (char)uVar3 - (((byte)((ulonglong)uVar3 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar3 / 3));
  return;
}

void FUN_overlay0__8003f6b8(undefined4 param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;

  puVar1 = (undefined *)FUN_overlay0__8001236c();
  puVar2 = (undefined2 *)FUN_overlay0__800122d0();

  FUN_overlay0__800350fc(puVar2 + 4,param_1);

  puVar1[1] = 2;
  *puVar1 = 1;
  *(undefined2 *)(puVar1 + 2) = 0;

  *puVar2 = 0;
  *(undefined *)(puVar2 + 1) = 0;
  *(undefined *)((int)puVar2 + 3) = 0;
  return;
}

void FUN_overlay0__8003f724(int param_1,undefined2 param_2,short param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  undefined *puVar5;
  short *psVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;

  puVar5 = (undefined *)FUN_overlay0__80012360();
  psVar6 = (short *)FUN_overlay0__80012304();
  iVar7 = FUN_overlay0__800122c4();

  if (*(short *)(iVar7 + 0xba) == 0) {

    if (*psVar6 < param_3) {

      *(short *)(iVar7 + 0xbe) = *psVar6 - (param_3 + -0x1000);
      *(undefined2 *)(iVar7 + 0xbc) = param_2;
      *(undefined2 *)(iVar7 + 0xba) = 2;
      return;
    }

    *(short *)(iVar7 + 0xbe) = *psVar6 - param_3;
  }
  else {

    param_2 = *(undefined2 *)(iVar7 + 0xbc);
    *(undefined2 *)(iVar7 + 0xba) = 0;
  }

  *(undefined2 *)(iVar7 + 0xb8) = 0;

  uVar2 = *(undefined *)(param_1 + 0x45e);
  uVar3 = *(undefined *)(param_1 + 0x45c);
  uVar1 = *(undefined *)(param_1 + 0x45d);

  FUN_overlay0__8003519c(param_1,psVar6 + 4);
  FUN_overlay0__8003f09c(iVar7 + *(short *)(iVar7 + 0xb8) * 0x5c,param_1);

  puVar10 = (undefined4 *)(param_1 + 0x45c);
  puVar8 = (undefined4 *)(puVar5 + 6);

  if ((((uint)puVar8 | (uint)puVar10) & 3) == 0) {

    do {
      uVar11 = puVar8[1];
      uVar12 = puVar8[2];
      uVar13 = puVar8[3];
      *puVar10 = *puVar8;
      puVar10[1] = uVar11;
      puVar10[2] = uVar12;
      puVar10[3] = uVar13;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    } while (puVar8 != (undefined4 *)(puVar5 + 0x336));
  }
  else {

    do {
      uVar11 = puVar8[1];
      uVar12 = puVar8[2];
      uVar13 = puVar8[3];
      *puVar10 = *puVar8;
      puVar10[1] = uVar11;
      puVar10[2] = uVar12;
      puVar10[3] = uVar13;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    } while (puVar8 != (undefined4 *)(puVar5 + 0x336));
  }

  uVar11 = puVar8[1];
  uVar12 = puVar8[2];
  *puVar10 = *puVar8;
  puVar10[1] = uVar11;
  puVar10[2] = uVar12;

  FUN_overlay0__8003f09c(iVar7 + *(short *)(iVar7 + 0xb8) * 0x5c,param_1);

  *(undefined *)(param_1 + 0x45e) = uVar2;
  *(undefined *)(param_1 + 0x45c) = uVar3;
  *(undefined *)(param_1 + 0x45d) = uVar1;

  *(undefined2 *)(param_1 + 0x608) = param_2;

  *puVar5 = 2;

  FUN_overlay0__800124b0();
  FUN_overlay0__800124e8();

  uVar4 = DAT_overlay0__80046f64;

  iVar9 = (int)*(char *)((int)psVar6 + 3) -
          (DAT_overlay0__80046f64 -
          (((uint)((ulonglong)DAT_overlay0__80046f64 * 0xaaaaaaab >> 0x20) & 0xfffffffe) +
          DAT_overlay0__80046f64 / 3));

  *(int *)(iVar7 + 0xc0) = iVar9;

  *(uint *)(param_1 + 0x780) = ((uVar4 + iVar9) - (uint)*(byte *)(psVar6 + 1)) / 3;
  return;
}

void FUN_overlay0__8003f990(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined uVar3;
  undefined uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;

  puVar5 = (undefined *)FUN_overlay0__80012360();
  iVar6 = FUN_overlay0__80012304();
  iVar7 = FUN_overlay0__800122c4();

  *(undefined2 *)(iVar7 + 0xba) = 0;
  *(undefined2 *)(iVar7 + 0xbc) = 0;
  *(undefined2 *)(iVar7 + 0xbe) = 0;
  *(undefined2 *)(iVar7 + 0xb8) = 0;

  uVar3 = *(undefined *)(param_1 + 0x45e);
  uVar4 = *(undefined *)(param_1 + 0x45c);
  uVar1 = *(undefined *)(param_1 + 0x45d);

  FUN_overlay0__8003519c(param_1,iVar6 + 8);

  FUN_overlay0__8003f09c(iVar7 + *(short *)(iVar7 + 0xb8) * 0x5c,param_1);
  FUN_overlay0__8003f09c(iVar7 + (1 - *(short *)(iVar7 + 0xb8)) * 0x5c,param_1);

  *(undefined *)(param_1 + 0x45e) = uVar3;
  *(undefined *)(param_1 + 0x45c) = uVar4;
  *(undefined *)(param_1 + 0x45d) = uVar1;

  *puVar5 = 2;

  FUN_overlay0__800124b0();

  if (*(short *)(param_1 + 0x608) == 0) {

    DAT_overlay0__80046f64 = 0;
    *(undefined4 *)(iVar7 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
  }
  else {

    DAT_overlay0__80046f64 = 180000;
    cVar2 = *(char *)(iVar6 + 3);
    *(int *)(iVar7 + 0xc0) = (int)cVar2;

    *(uint *)(param_1 + 0x780) = ((cVar2 + 180000) - (uint)*(byte *)(iVar6 + 2)) / 3;
  }

  puVar5[1] = 2;
  return;
}

int FUN_overlay0__8003faec(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;

  psVar1 = (short *)FUN_overlay0__80012360();

  if (*(char *)((int)psVar1 + 1) == '\0') {
    iVar2 = 2;
  }

  else if (*psVar1 == 0x203) {
    iVar2 = 1;
  }
  else {

    iVar3 = FUN_80060e94(DAT_800af230);
    iVar2 = 0;

    if ((*(ushort *)(iVar3 + 8) & 0x20) == 0) {

      iVar3 = FUN_overlay0__8001252c();

      iVar2 = (uint)(iVar3 != 0) << 1;
    }
  }
  return iVar2;
}

void FUN_overlay0__8003fb70(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  pcVar1 = (char *)FUN_overlay0__8001236c();
  iVar2 = FUN_overlay0__80012360();
  iVar3 = FUN_overlay0__800122c4();

  if ((*(char *)(param_1 + 0x45e) == '\x02') &&
     (puVar5 = (undefined4 *)(iVar2 + 6), *(char *)(iVar2 + 1) == '\x01')) {

    puVar4 = (undefined4 *)(param_1 + 0x45c);

    if ((((uint)puVar4 | (uint)puVar5) & 3) == 0) {

      do {
        uVar6 = puVar4[1];
        uVar7 = puVar4[2];
        uVar8 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar4 != (undefined4 *)(param_1 + 0x78cU));
    }
    else {

      do {
        uVar6 = puVar4[1];
        uVar7 = puVar4[2];
        uVar8 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar4 != (undefined4 *)(param_1 + 0x78cU));
    }

    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;

    *(undefined *)(iVar2 + 1) = 2;
  }

  if (*(char *)(param_1 + 0x45e) == '\0') {

    if (*(short *)(iVar3 + 0xba) != 0) {
      if (*(short *)(iVar3 + 0xba) == 1) {

        FUN_overlay0__8003f724(&DAT_800aa1f4,0,0);
      }
      else {

        *(short *)(iVar3 + 0xba) = *(short *)(iVar3 + 0xba) + -1;
      }
    }

    if ((*pcVar1 == '\x01') &&
       (puVar5 = (undefined4 *)(pcVar1 + 6), *(short *)(pcVar1 + 2) == 1)) {

      puVar4 = (undefined4 *)(param_1 + 0x45c);

      if ((((uint)puVar4 | (uint)puVar5) & 3) == 0) {

        do {
          uVar6 = puVar4[1];
          uVar7 = puVar4[2];
          uVar8 = puVar4[3];
          *puVar5 = *puVar4;
          puVar5[1] = uVar6;
          puVar5[2] = uVar7;
          puVar5[3] = uVar8;
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar4 != (undefined4 *)(param_1 + 0x78cU));
      }
      else {

        do {
          uVar6 = puVar4[1];
          uVar7 = puVar4[2];
          uVar8 = puVar4[3];
          *puVar5 = *puVar4;
          puVar5[1] = uVar6;
          puVar5[2] = uVar7;
          puVar5[3] = uVar8;
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar4 != (undefined4 *)(param_1 + 0x78cU));
      }

      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      *puVar5 = *puVar4;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;

      pcVar1[1] = '\x02';
    }
  }
  return;
}

void FUN_overlay0__8003fde0(undefined *param_1)

{

  FUN_8008ce30(param_1,0,0x342);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

void FUN_overlay0__8003fe14(int param_1)

{

  FUN_8008ce30(param_1,0,0xe0);

  *(undefined4 *)(param_1 + 4) = 359999999;
  return;
}

void FUN_overlay0__8003fe4c(int param_1)

{

  FUN_8008ce30(param_1,0,0xb8);

  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0x800;
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

void FUN_overlay0__8003fe8c(void)

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
  int iVar10;

  for (iVar10 = 0; iVar8 = 0, iVar10 < 2; iVar10 = iVar10 + 1) {
    iVar7 = 0;
    iVar6 = 0;
    iVar9 = 0;

    for (; iVar4 = 0, iVar8 < 6; iVar8 = iVar8 + 1) {
      iVar5 = 0;

      for (; iVar2 = 0, iVar3 = iVar10, iVar4 < 5; iVar4 = iVar4 + 1) {

        do {
          (&DAT_801c8740)[iVar3 + iVar5 + iVar9] = 0xf;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x14;
        } while (iVar2 < 4);

        iVar2 = 0;
        iVar3 = iVar10 << 2;

        do {
          iVar1 = iVar3 + iVar5;
          iVar3 = iVar3 + 0x14;
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + iVar9;

          *(undefined4 *)((int)&DAT_801c8744 + iVar1) = 0;
          *(undefined4 *)((int)&DAT_801c874c + iVar1) = 0;

          *(undefined2 *)((int)&DAT_801c8610 + iVar4 * 2 + iVar7) = 0x1000;

          (&DAT_801c8650)[iVar4 + iVar6] = 0xff;
          (&DAT_801c8670)[iVar4 + iVar6] = 0xff;
        } while (iVar2 < 4);

        iVar5 = iVar5 + 0x50;
      }

      iVar7 = iVar7 + 10;
      iVar6 = iVar6 + 5;
      iVar9 = iVar9 + 400;
    }
  }

  DAT_801c8608 = 1;
  return;
}

void FUN_overlay0__8003ffdc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  for (iVar5 = 0; iVar5 < 2; iVar5 = iVar5 + 1) {
    iVar3 = 0;

    for (iVar4 = 0; iVar2 = 0, iVar4 < param_2 + -1; iVar4 = iVar4 + 1) {
      iVar1 = iVar5;

      do {

        (&DAT_801c8740)[iVar1 + iVar3 + param_1 * 400] = 0xf;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x14;
      } while (iVar2 < 4);

      iVar3 = iVar3 + 0x50;
    }

    iVar3 = 0;

    for (; iVar2 < param_2; iVar2 = iVar2 + 1) {

      if (iVar2 != param_1) {
        iVar1 = 0;
        iVar4 = iVar5;

        do {

          (&DAT_801c8740)[iVar4 + (param_1 - (param_1 < iVar2 ^ 1)) * 0x50 + iVar3] = 0xf;
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x14;
        } while (iVar1 < 4);
      }

      iVar3 = iVar3 + 400;
    }
  }
  return;
}

void FUN_overlay0__800400cc(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  longlong local_30;

  iVar20 = 0;
  local_34 = &local_40;

  DAT_801c8608 = 1 - DAT_801c8608;

  iVar19 = param_1;

  for (iVar18 = 0; iVar4 = DAT_801c8608, iVar18 < param_2; iVar18 = iVar18 + 1) {

    if ((*(char *)(iVar19 + 0x48a) == '\0') &&
       (iVar16 = 0, *(char *)(iVar19 + 0x7b5) != '\x04')) {

      iVar17 = 0;
      local_38 = iVar20;

      uVar5 = *(ushort *)(iVar19 + 0x674) & 0xfff;
      sVar1 = DAT_80093150[uVar5];
      sVar2 = DAT_80093950[uVar5];

      iVar21 = param_1;

      for (; iVar16 < param_2; iVar16 = iVar16 + 1) {

        if (iVar18 != iVar16) {

          if ((*(char *)(iVar21 + 0x48a) == '\0') &&
             (iVar9 = 0, piVar7 = (int *)(iVar19 + 0x2c), piVar12 = local_50,
             *(char *)(iVar21 + 0x7b5) != '\x04')) {

            do {
              iVar9 = iVar9 + 1;
              *piVar12 = piVar7[0x197];
              piVar7 = piVar7 + 1;
              piVar12 = piVar12 + 1;
            } while (iVar9 < 3);

            iVar9 = *(int *)(iVar21 + 0x690) - local_50[2];
            iVar15 = 0;

            if ((int)(-iVar9 - 0x2000U ^ 0x2000U - iVar9) < 1) {

              puVar14 = &DAT_801c8740 + local_38 + iVar17;

              for (; iVar9 = 0, iVar15 < 4; iVar15 = iVar15 + 1) {
                iVar13 = iVar15 << 3;
                piVar7 = local_50;
                piVar12 = local_34;

                do {
                  iVar8 = *piVar7;
                  piVar7 = piVar7 + 1;
                  iVar9 = iVar9 + 1;
                  iVar6 = iVar13 + (uint)*(byte *)(iVar21 + 0x6df) * 0x20;
                  iVar13 = iVar13 + 4;
                  *piVar12 = *(int *)(iVar21 + iVar6 + 0x6e0) - iVar8;
                  piVar12 = piVar12 + 1;
                } while (iVar9 < 2);

                if (((int)(-local_3c - 0x10000U ^ 0xffffU - local_3c) < 1) &&
                   ((int)(-local_40 - 0x10000U ^ 0xffffU - local_40) < 1)) {

                  lVar3 = (longlong)(int)sVar2 * (longlong)local_40 +
                          (longlong)(int)sVar1 * (longlong)local_3c;
                  if (lVar3 < 0) {
                    lVar3 = lVar3 + 0xfff;
                  }
                  uVar5 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
                  *(uint *)(puVar14 + iVar4 * 4 + 4) = uVar5;

                  local_30 = (longlong)(int)sVar2 * (longlong)local_3c;
                  local_30 = (longlong)-(int)sVar1 * (longlong)local_40 + local_30;
                  if (local_30 < 0) {
                    local_30 = local_30 + 0xfff;
                  }
                  uVar10 = (uint)local_30 >> 0xc | (int)((ulonglong)local_30 >> 0x20) << 0x14;
                  *(uint *)(puVar14 + iVar4 * 4 + 0xc) = uVar10;

                  bVar11 = (*(int *)(iVar19 + 0x2c) < (int)uVar10) << 3;

                  iVar9 = (uint)*(ushort *)(iVar19 + 0x34) << 0x10;
                  iVar9 = (iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1;

                  if ((int)uVar10 < -*(int *)(iVar19 + 0x30)) {
                    bVar11 = bVar11 | 4;
                  }
                  if ((int)uVar5 < -iVar9) {
                    bVar11 = bVar11 | 2;
                  }
                  if (iVar9 < (int)uVar5) {
                    bVar11 = bVar11 | 1;
                  }

                  puVar14[iVar4] = bVar11;
                }
                else {

                  puVar14[iVar4] = 0xf;
                }

                puVar14 = puVar14 + 0x14;
              }
            }
          }
          iVar17 = iVar17 + 0x50;
        }
        iVar21 = iVar21 + 0xb40;
      }
    }
    iVar20 = iVar20 + 400;
    iVar19 = iVar19 + 0xb40;
  }
  return;
}

undefined4 FUN_overlay0__80040454(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;

  uVar1 = 0;

  if ((param_1 <= param_2) &&
     (uVar1 = 1, param_3 < param_2)) {
    uVar1 = 0;
  }
  return uVar1;
}

int FUN_overlay0__80040478(int param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  byte collisionMask1;
  byte collisionMask2;
  byte collisionDifference;
  int currentBuffer;
  int otherBuffer;
  int collisionDistance;
  int collisionResult;
  int vehiclePosX;
  int vehiclePosY;
  int collisionPosX1;
  int collisionPosY1;
  int vehicleHalfWidth;
  int minDistance;
  int collisionPosX2;
  int collisionPosY2;
  int collisionLoop;
  int bestCollisionIndex;
  undefined4 bestCollisionType;
  int collisionOffset;
  int vehicleIndex1;
  int vehicleIndex2;
  int *vehicleData;

  currentBuffer = DAT_801c8608;
  minDistance = 0x1000;
  bestCollisionIndex = -1;
  bestCollisionType = 0xffffffff;
  collisionOffset = 0;
  otherBuffer = 1 - DAT_801c8608;
  vehicleIndex1 = param_1;
  vehicleIndex2 = param_2;
  vehicleData = param_3;

  for (collisionLoop = 0; collisionLoop < 4; collisionLoop = collisionLoop + 1) {

    collisionPosY2 = collisionOffset + vehicleIndex1 * 400 + vehicleIndex2 * 0x50;

    collisionMask1 = (&DAT_801c8740)[otherBuffer + collisionPosY2];

    if ((collisionMask1 != 0) && (collisionMask1 != 0xf)) {

      collisionMask2 = (&DAT_801c8740)[currentBuffer + collisionPosY2];

      if ((collisionMask2 != 0xf) && (collisionDifference = collisionMask1 ^ collisionMask2, (collisionMask1 & collisionMask2) == 0)) {

        vehicleHalfWidth = ((int)((uint)*(ushort *)(vehicleData + 2) << 0x10) >> 0x10) -
                          ((int)((uint)*(ushort *)(vehicleData + 2) << 0x10) >> 0x1f) >> 1;

        vehiclePosX = *vehicleData;
        collisionPosY1 = otherBuffer * 4 + collisionPosY2;
        vehiclePosY = vehicleData[1];
        collisionPosY2 = currentBuffer * 4 + collisionPosY2;

        collisionPosX1 = *(int *)(&DAT_801c8740 + collisionPosY1 + 4);
        collisionPosY1 = *(int *)(&DAT_801c8740 + collisionPosY1 + 0xc);
        collisionPosX2 = *(int *)(&DAT_801c8740 + collisionPosY2 + 4);
        collisionPosY2 = *(int *)(&DAT_801c8740 + collisionPosY2 + 0xc);

        if (((collisionDifference & 8) != 0) &&
           (collisionDistance = FUN_80075e90(vehiclePosX - collisionPosY1, collisionPosY2 - collisionPosY1, 0), collisionDistance < minDistance)) {
          collisionResult = FUN_8007596c(collisionDistance, collisionPosX2 - collisionPosX1);
          collisionResult = FUN_overlay0__80040454(-vehicleHalfWidth, collisionPosX1 + collisionResult, vehicleHalfWidth);
          if (collisionResult != 0) {
            bestCollisionType = 0;
            minDistance = collisionDistance;
            bestCollisionIndex = collisionLoop;
          }
        }

        if (((collisionDifference & 4) != 0) &&
           (collisionDistance = FUN_80075e90(-collisionPosY1 - vehiclePosY, collisionPosY2 - collisionPosY1, 0), collisionDistance < minDistance)) {
          collisionResult = FUN_8007596c(collisionDistance, collisionPosX2 - collisionPosX1);
          collisionResult = FUN_overlay0__80040454(-vehicleHalfWidth, collisionPosX1 + collisionResult, vehicleHalfWidth);
          if (collisionResult != 0) {
            bestCollisionType = 1;
            minDistance = collisionDistance;
            bestCollisionIndex = collisionLoop;
          }
        }

        if (((collisionDifference & 2) != 0) &&
           (collisionDistance = FUN_80075e90(-collisionPosX1 - vehicleHalfWidth, collisionPosX2 - collisionPosX1, 0), collisionDistance < minDistance)) {
          collisionResult = FUN_8007596c(collisionDistance, collisionPosY2 - collisionPosY1);
          collisionResult = FUN_overlay0__80040454(-vehiclePosY, collisionPosY1 + collisionResult, vehiclePosX);
          if (collisionResult != 0) {
            bestCollisionType = 2;
            minDistance = collisionDistance;
            bestCollisionIndex = collisionLoop;
          }
        }

        if (((collisionDifference & 1) != 0) &&
           (collisionPosX1 = FUN_80075e90(vehicleHalfWidth - collisionPosX1, collisionPosX2 - collisionPosX1, 0), collisionPosX1 < minDistance)) {
          collisionPosY2 = FUN_8007596c(collisionPosX1, collisionPosY2 - collisionPosY1);
          collisionPosY2 = FUN_overlay0__80040454(-vehiclePosY, collisionPosY1 + collisionPosY2, vehiclePosX);
          if (collisionPosY2 != 0) {
            bestCollisionType = 3;
            minDistance = collisionPosX1;
            bestCollisionIndex = collisionLoop;
          }
        }
      }
    }

    collisionOffset = collisionOffset + 0x14;
  }

  *param_4 = bestCollisionIndex;
  *param_5 = bestCollisionType;
  return minDistance;
}

void FUN_overlay0__800407a0(int param_1,int param_2)

{
  undefined2 collisionDistance;
  int collisionIndex;
  int otherVehicle;
  int otherVehiclePtr;
  int currentVehicle;
  int distanceArrayOffset;
  int currentVehiclePtr;
  int collisionArrayOffset;
  undefined collisionIndexBuffer [4];
  undefined collisionTypeBuffer [4];
  undefined *collisionTypePtr;
  undefined1 *collisionTypeArray;
  uint inactiveState;
  int vehicleCount;

  inactiveState = 4;
  collisionTypePtr = collisionTypeBuffer;
  distanceArrayOffset = 0;
  collisionArrayOffset = 0;
  vehicleCount = param_2;
  currentVehiclePtr = param_1;

  for (currentVehicle = 0; currentVehicle < vehicleCount; currentVehicle = currentVehicle + 1) {

    if ((*(char *)(currentVehiclePtr + 0x48a) == '\0') && (otherVehicle = 0, *(byte *)(currentVehiclePtr + 0x7b5) != inactiveState)) {
      collisionIndex = 0;
      collisionTypeArray = &DAT_801c8670;
      otherVehiclePtr = param_1;

      for (; otherVehicle < vehicleCount; otherVehicle = otherVehicle + 1) {

        if (currentVehicle != otherVehicle) {

          if ((*(char *)(otherVehiclePtr + 0x48a) == '\0') && (*(byte *)(otherVehiclePtr + 0x7b5) != inactiveState)) {

            collisionDistance = FUN_overlay0__80040478(currentVehicle, collisionIndex, currentVehiclePtr + 0x2c, collisionIndexBuffer, collisionTypePtr);

            *(undefined2 *)((int)&DAT_801c8610 + collisionIndex * 2 + distanceArrayOffset) = collisionDistance;

            (&DAT_801c8650)[collisionIndex + collisionArrayOffset] = collisionIndexBuffer[0];
            collisionTypeArray[collisionIndex + collisionArrayOffset] = collisionTypeBuffer[0];
          }
          collisionIndex = collisionIndex + 1;
        }
        otherVehiclePtr = otherVehiclePtr + 0xb40;
      }
    }

    distanceArrayOffset = distanceArrayOffset + 10;
    collisionArrayOffset = collisionArrayOffset + 5;
    currentVehiclePtr = currentVehiclePtr + 0xb40;
  }
  return;
}

void FUN_overlay0__80040924(int param_1,int param_2)

{
  undefined4 *velocityPtr;
  char collisionType;
  short collisionDistance;
  bool loopCondition;
  undefined4 forceResult;
  short velocityX;
  short velocityY;
  int forceValue;
  undefined4 momentumResult;
  int collisionIndex;
  uint vehicleAngle;
  short *velocityArray;
  uint mass1;
  uint mass2;
  uint momentum1;
  uint momentum2;
  short *forceArray;
  int vehicle1Ptr;
  int *forceResultArray;
  int vehicle2Ptr;
  int tempValue1;
  int vehicle1DataPtr;
  int vehicle2DataPtr;
  int collisionLoop;
  uint momentumProduct;
  int forceVectorArray [4];
  short velocityVectorArray [4];
  short velocityXComponent;
  short velocityYComponent;
  undefined2 collisionFlag;
  undefined4 vehicle1Momentum;
  undefined4 vehicle2Momentum;
  int collisionCount;
  short collisionDistanceScaled;
  short *velocityPtr1;
  short *velocityPtr2;
  int *forcePtr;
  int vehicle1Index;
  int collisionArrayOffset;
  int vehicle2Index;
  int distanceArrayOffset;
  int collisionTypeOffset;
  char cVar2;
  short sVar3;
  short sVar6;
  short sVar7;
  short local_66;
  short local_68;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_64;
  short *psVar12;
  short local_48 [4];
  int iVar10;
  int iVar22;
  int iVar21;
  int iVar23;
  undefined4 uVar11;
  undefined4 *puVar1;
  int iVar8;
  int *piVar19;
  short local_40 [4];
  short *psVar17;
  int iVar18;
  undefined4 uVar13;
  int iVar20;
  undefined4 uVar14;
  undefined4 uVar25;
  int local_3c;
  int local_38;
  int *local_34;
  longlong local_30;
  int local_2c;
  int local_58;
  short local_50 [4];
  short local_44 [4];
  undefined4 uVar9;
  bool bVar4;
  short local_60 [4];
  short local_5c [4];
  undefined4 uVar5;

  velocityPtr1 = &velocityXComponent;
  collisionCount = 1;
  forcePtr = forceVectorArray;
  velocityPtr2 = velocityVectorArray;
  vehicle2Index = param_1 + 0xb40;
  distanceArrayOffset = 0;
  collisionTypeOffset = 5;

  do {
    collisionLoop = 0;
    if (param_2 <= collisionCount) {
      return;
    }
    collisionArrayOffset = 0;
    vehicle1Index = param_1;

    for (; collisionLoop < collisionCount; collisionLoop = collisionLoop + 1) {

      collisionDistance = (&DAT_801c8610)[collisionTypeOffset + collisionLoop];
      collisionDistanceScaled = *(short *)((int)&DAT_801c8610 + distanceArrayOffset + collisionArrayOffset * 2);

      if ((collisionDistance != 0x1000) || (collisionDistanceScaled != 0x1000)) {

        if (collisionDistanceScaled < collisionDistance) {
          collisionIndex = collisionCount + collisionArrayOffset + -1;
          vehicle1Ptr = vehicle1Index;
          vehicle2Ptr = vehicle2Index;
        }
        else {
          collisionIndex = collisionLoop + collisionTypeOffset;
          vehicle1Ptr = vehicle2Index;
          vehicle2Ptr = vehicle1Index;
          collisionDistanceScaled = (&DAT_801c8610)[collisionTypeOffset + collisionLoop];
        }

        vehicle2DataPtr = vehicle2Ptr + 0x2c;
        vehicle1DataPtr = vehicle1Ptr + 0x2c;
        collisionType = (&DAT_801c8670)[collisionIndex];
        collisionDistanceScaled = 0x1000 - collisionDistanceScaled;
        vehicleAngle = *(ushort *)(vehicle1Ptr + 0x674) & 0xfff;

        velocityX = DAT_80093150[vehicleAngle];
        velocityY = DAT_80093950[vehicleAngle];

        if (cVar2 == '\x01') {
          sVar6 = sVar3;
          sVar3 = -sVar7;
LAB_overlay0__80040b30:
          local_66 = sVar3;
          local_68 = sVar6;
        }
        else {

          if ('\x01' < cVar2) {
            if (cVar2 == '\x02') {
              sVar6 = -sVar7;
              sVar3 = -sVar3;
            }
            else {
              sVar6 = sVar7;
              if (cVar2 != '\x03') goto LAB_overlay0__80040b38;
            }
            goto LAB_overlay0__80040b30;
          }
          if (cVar2 == '\0') {
            sVar6 = -sVar3;
            sVar3 = sVar7;
            goto LAB_overlay0__80040b30;
          }
        }
LAB_overlay0__80040b38:

        uVar15 = 0;
        uVar16 = 0;
        local_64 = 0;
        psVar12 = local_48;
        iVar10 = iVar22;
        iVar23 = vehicle2Ptr;
        iVar21 = iVar23;
        uVar11 = uVar15;
        iVar18 = vehicle1Ptr;
        iVar20 = vehicle2Ptr;

        do {
          puVar1 = (undefined4 *)(iVar10 + 0x628);
          iVar10 = iVar10 + 4;
          uVar15 = uVar15 + 1;
          iVar8 = FUN_80075a5c((int)*psVar12,*puVar1);
          uVar16 = uVar16 + iVar8;
          puVar1 = (undefined4 *)(iVar21 + 0x628);
          iVar21 = iVar21 + 4;
          sVar3 = *psVar12;
          psVar12 = psVar12 + 1;
          iVar8 = FUN_80075a5c((int)sVar3,*puVar1);
          piVar19 = local_40;
          psVar17 = local_48;
          uVar11 = uVar11 - iVar8;
        } while ((int)uVar15 < 3);

        iVar10 = (uint)*(ushort *)(iVar18 + 0x792) << 0x10;
        uVar13 = iVar10 >> 0x10;
        iVar21 = (uint)*(ushort *)(iVar20 + 0x792) << 0x10;
        uVar14 = iVar21 >> 0x10;
        uVar25 = (uint)((ulonglong)uVar11 * (ulonglong)uVar14);

        iVar8 = 0;
        uVar15 = (int)((ulonglong)uVar16 * (ulonglong)uVar13) + uVar25;

        iVar10 = FUN_80086084(uVar15,(int)((ulonglong)uVar16 * (ulonglong)uVar13 >> 0x20) +
                                     uVar16 * (iVar10 >> 0x1f) + uVar13 * ((int)uVar16 >> 0x1f) +
                                     (int)((ulonglong)uVar11 * (ulonglong)uVar14 >> 0x20) +
                                     uVar11 * (iVar21 >> 0x1f) + uVar14 * ((int)uVar11 >> 0x1f) +
                                     (uint)(uVar15 < uVar25),uVar13 + uVar14,
                              (int)(uVar13 + uVar14) >> 0x1f);

        do {
          sVar3 = *psVar17;
          psVar17 = psVar17 + 1;
          iVar8 = iVar8 + 1;
          iVar21 = FUN_80075a5c((int)sVar3,iVar10);
          *piVar19 = iVar21;
          piVar19 = piVar19 + 1;
        } while (iVar8 < 3);

        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        sVar3 = (short)(iVar10 * 0xa4 >> 0xc);

        *(short *)(iVar18 + 0x76c) = *(short *)(iVar18 + 0x76c) + sVar3;
        *(short *)(iVar20 + 0x76c) = *(short *)(iVar20 + 0x76c) + sVar3;

        *(byte *)(iVar18 + 0x669) = *(byte *)(iVar18 + 0x669) | 2;
        *(byte *)(iVar20 + 0x669) = *(byte *)(iVar20 + 0x669) | 2;

        psVar12 = local_48;
        iVar18 = iVar22;
        iVar20 = iVar23;
        piVar19 = local_40;

        for (iVar10 = 0; sVar3 = local_50, iVar10 < 3; iVar10 = iVar10 + 1) {
          sVar3 = *psVar12;
          psVar12 = psVar12 + 1;
          iVar21 = FUN_80075a5c((int)sVar3,0);
          iVar8 = *piVar19;
          piVar19 = piVar19 + 1;

          *(int *)(iVar18 + 0x628) = *(int *)(iVar18 + 0x628) - (iVar8 + iVar21);
          iVar18 = iVar18 + 4;

          *(int *)(iVar20 + 0x628) = *(int *)(iVar20 + 0x628) + iVar8 + iVar21;
          iVar20 = iVar20 + 4;
        }

        iVar18 = 0;
        psVar12 = local_44;
        piVar19 = local_40;
        psVar17 = local_48;

        do {
          iVar20 = *piVar19;
          piVar19 = piVar19 + 1;
          iVar18 = iVar18 + 1;
          uVar9 = FUN_80075a5c((int)sVar3,iVar20);
          sVar7 = FUN_8007598c(DAT_801c856c,uVar9);
          *psVar12 = sVar7;
          sVar7 = FUN_80075b04((int)*psVar17,0x1000,5);
          psVar17 = psVar17 + 1;
          *psVar12 = *psVar12 + sVar7;
          psVar12 = psVar12 + 1;
        } while (iVar18 < 3);

        iVar20 = 0;
        iVar18 = 0x1f800000;
        psVar12 = local_44;

        while (bVar4 = iVar20 < 3, iVar20 = iVar20 + 1, bVar4) {
          *(int *)(iVar18 + 0xb4) = -(int)*psVar12;
          sVar3 = *psVar12;
          psVar12 = psVar12 + 1;
          *(int *)(iVar18 + 0xc4) = (int)sVar3;
          iVar18 = iVar18 + 4;
        }

        DAT_1f8000c0 = 0;
        DAT_1f8000d0 = 0;

        iVar18 = FUN_overlay0__80033e6c(iVar22,&DAT_1f8000b4,&local_60,2);
        iVar20 = FUN_overlay0__80033e6c(iVar23,&DAT_1f8000c4,&local_5c,2);

        uVar5 = local_5c;
        uVar9 = local_60;

        if (iVar18 == 0) {
          iVar18 = 0;
          psVar12 = local_44;
          if (iVar20 != 0) {
            do {
              iVar20 = FUN_80075a5c(uVar5,(int)*psVar12);
              iVar18 = iVar18 + 1;
              *(int *)(iVar22 + 0x65c) = *(int *)(iVar22 + 0x65c) - iVar20;
              iVar22 = iVar22 + 4;
              psVar12 = psVar12 + 1;
            } while (iVar18 < 3);
          }
        }
        else {

          iVar18 = 0;
          psVar12 = local_44;
          if (iVar20 == 0) {
            do {
              iVar20 = FUN_80075a5c(uVar9,(int)*psVar12);
              iVar18 = iVar18 + 1;
              *(int *)(iVar23 + 0x65c) = *(int *)(iVar23 + 0x65c) + iVar20;
              iVar23 = iVar23 + 4;
              psVar12 = psVar12 + 1;
            } while (iVar18 < 3);
          }
        }
      }

      local_3c = local_3c + 0xb40;
      local_38 = local_38 + 5;
    }

    local_34 = local_34 + 0xb40;
    local_30 = local_30 + 2;
    local_2c = local_2c + 5;
    local_58 = local_58 + 1;
  } while( true );
}

void FUN_overlay0__80040f30(int param_1,int param_2)

{
  short velocityX;
  short velocityY;
  longlong rotationResult;
  int currentBuffer;
  uint vehicleAngle;
  int tempValue;
  int *vehicleDataPtr;
  int loopCounter;
  int arrayIndex;
  uint collisionMask;
  byte collisionFlags;
  int *positionArray;
  int tempValue2;
  undefined1 *collisionBuffer;
  int tempValue3;
  int otherVehicle;
  int collisionOffset;
  int *vehicleDataPtr2;
  int otherVehiclePtr;
  int currentVehicle;
  int currentVehiclePtr;
  undefined1 *puVar14;
  int local_40 [4];
  int iVar17;
  int iVar9;
  int iVar15;
  int iVar13;
  int *piVar7;
  int local_50 [4];
  int *piVar12;
  int iVar8;
  int iVar6;
  int iVar19;
  longlong lVar3;
  short sVar2;
  short sVar1;
  undefined4 uVar5;
  int iVar4;
  longlong local_30;
  undefined4 uVar10;
  byte bVar11;
  int *piVar18;
  int iVar21;
  int positionArray1 [4];
  int positionArray2 [4];
  longlong rotationTemp;

  positionArray2[2] = 0;
  currentVehiclePtr = param_1;

  for (currentVehicle = 0; vehicleDataPtr2 = (int *)(currentVehiclePtr + 0x2c), currentVehicle < param_2; currentVehicle = currentVehicle + 1) {

    if ((((*(byte *)(currentVehiclePtr + 0x669) & 2) != 0) &&
        (FUN_overlay0__80041ae8(vehicleDataPtr2), currentBuffer = DAT_801c8608, *(char *)(currentVehiclePtr + 0x48a) == '\0'))
       && (otherVehicle = 0, *(char *)(currentVehiclePtr + 0x7b5) != '\x04')) {
      collisionOffset = 0;
      positionArray2[3] = positionArray2[2];
      vehicleAngle = *(ushort *)(currentVehiclePtr + 0x674) & 0xfff;
      velocityX = DAT_80093150[vehicleAngle];
      velocityY = DAT_80093950[vehicleAngle];
      otherVehiclePtr = param_1;

      for (; otherVehicle < param_2; otherVehicle = otherVehicle + 1) {

        if (currentVehicle != otherVehicle) {

          if ((*(char *)(otherVehiclePtr + 0x48a) == '\0') &&
             (arrayIndex = 0, vehicleDataPtr = vehicleDataPtr2, positionArray = positionArray1, *(char *)(otherVehiclePtr + 0x7b5) != '\x04'))
          {

            do {
              arrayIndex = arrayIndex + 1;
              *positionArray = vehicleDataPtr[0x197];
              vehicleDataPtr = vehicleDataPtr + 1;
              positionArray = positionArray + 1;
            } while (arrayIndex < 3);

            tempValue = *(int *)(otherVehiclePtr + 0x690) - positionArray1[2];
            tempValue3 = 0;

            if ((int)(-tempValue - 0x2000U ^ 0x2000U - tempValue) < 1) {

              puVar14 = &DAT_801c8740 + local_40[3] + iVar17;

              for (; iVar9 = 0, iVar15 < 4; iVar15 = iVar15 + 1) {
                iVar13 = iVar15 << 3;
                piVar7 = local_50;
                piVar12 = local_40;

                do {
                  iVar8 = *piVar7;
                  piVar7 = piVar7 + 1;
                  iVar9 = iVar9 + 1;
                  iVar6 = iVar13 + (uint)*(byte *)(iVar19 + 0x6df) * 0x20;
                  iVar13 = iVar13 + 4;
                  *piVar12 = *(int *)(iVar19 + iVar6 + 0x6e0) - iVar8;
                  piVar12 = piVar12 + 1;
                } while (iVar9 < 2);

                if (((int)(-local_40[1] - 0x10000U ^ 0xffffU - local_40[1]) < 1) &&
                   ((int)(-local_40[0] - 0x10000U ^ 0xffffU - local_40[0]) < 1)) {

                  lVar3 = (longlong)(int)sVar2 * (longlong)local_40[0] +
                          (longlong)(int)sVar1 * (longlong)local_40[1];
                  if (lVar3 < 0) {
                    lVar3 = lVar3 + 0xfff;
                  }
                  uVar5 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
                  *(uint *)(puVar14 + iVar4 * 4 + 4) = uVar5;

                  local_30 = (longlong)(int)sVar2 * (longlong)local_40[1];
                  lVar3 = (longlong)-(int)sVar1 * (longlong)local_40[0] + local_30;
                  if (lVar3 < 0) {
                    lVar3 = lVar3 + 0xfff;
                  }
                  uVar10 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
                  *(uint *)(puVar14 + iVar4 * 4 + 0xc) = uVar10;

                  bVar11 = (*piVar18 < (int)uVar10) << 3;
                  iVar9 = (uint)*(ushort *)(iVar21 + 0x34) << 0x10;
                  iVar9 = (iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1;

                  if ((int)uVar10 < -*(int *)(iVar21 + 0x30)) {
                    bVar11 = bVar11 | 4;
                  }
                  if ((int)uVar5 < -iVar9) {
                    bVar11 = bVar11 | 2;
                  }
                  if (iVar9 < (int)uVar5) {
                    bVar11 = bVar11 | 1;
                  }
                  puVar14[iVar4] = bVar11;
                }
                else {

                  puVar14[iVar4] = 0xf;
                }
                puVar14 = puVar14 + 0x14;
              }
            }
          }
          iVar17 = iVar17 + 0x50;
        }
        iVar19 = iVar19 + 0xb40;
      }
    }
    iVar21 = iVar21 + 0xb40;
    local_40[2] = local_40[2] + 400;
  }
  return;
}

void FUN_overlay0__800412d4(int param_1,int param_2)

{
  short velocityX;
  short velocityY;
  bool loopCondition;
  int vehiclePtr;
  int tempValue;
  uint vehicleAngle;
  undefined4 forceResult;
  int loopCounter;
  int currentVehiclePtr;
  int tempValue2;
  int *positionArray;
  int tempValue3;
  int tempValue4;
  int *forceArray;
  int *velocityArray;
  int tempValue5;
  int tempValue6;
  int forceVectorArray [4];
  int positionVectorArray [4];
  int velocityVectorArray [4];
  int collisionArray [4];
  int collisionIndex;
  int tempValue7;
  int tempValue8;
  int tempValue9;
  int *forcePtr;
  int tempValue10;
  int tempValue11;
  int tempValue12;
  int tempValue13;
  int local_4c;
  int local_48;
  int local_30;
  int iVar9;
  int vehiclePtr_local_30;
  int vehicleOffset_local_38;
  int otherVehiclePtr_local_3c;
  int vehicleCounter3_local_60;
  int currentVehicleIndex_iVar4;
  int vehicleIndex_local_34;
  int vehicleOffset_iVar8;
  int vehicleCounter2_local_60;
  int otherVehicleWheelPtr_local_44;
  bool collisionDetected_bVar3;
  int *collisionBoundaryZ_piVar15;
  int collisionBoundariesZ_local_80 [4];
  int *collisionBoundaryX_piVar14;
  int collisionBoundariesX_local_90 [4];
  int negativeCollisionFactor2_iVar17;
  int collisionFactor2_local_48;
  int collisionDataOffset_iVar13;
  int *validCollisionFlags_piVar11;
  int validCollisionArray_local_40 [4];
  int collisionIndex_iVar12;
  int boundaryIndex_iVar16;
  int collisionDataIndex_iVar5;
  int boundaryValueX_iVar10;
  int collisionFactor3_iVar9;
  int boundaryValueZ_iVar5;
  int collisionFactor1_local_4c;
  int positionDiffX_iVar13;
  int currentVehicleWheelPtr_local_50;
  int positionDiffZ_iVar17;
  uint orientationIndex_uVar6;
  short cosValue_sVar1;
  int cosValue_iVar12;
  short sinValue_sVar2;
  int sinValue_iVar8;
  int collisionAngle1_iVar4;
  int collisionAngle2_iVar17;
  int absoluteAngle1_iVar8;
  int collisionFactor_iVar13;
  int absoluteAngle2_iVar12;
  int bestCollisionIntensity_iVar16;
  undefined4 collisionDirection_uVar6;
  int boundaryCheckIndex_iVar8;
  int collisionResponse_iVar17;
  int collisionIntensity_iVar17;
  int *collisionBoundaryZ_piVar14;
  int collisionResponseZ_iVar4;
  int collisionVector_local_60 [4];
  undefined4 scaledCollisionForce_uVar7;
  int *collisionVectorPtr_piVar11;
  int otherVehicleForcePtr_iVar8;
  int currentVehicleForcePtr_iVar4;
  int forceComponentIndex_iVar17;
  int forceComponent_iVar12;
  int scaledForceComponent_iVar12;

  currentVehiclePtr = param_1;

  for (collisionArray[2] = 0; loopCounter = 1, collisionArray[2] < param_2; collisionArray[2] = collisionArray[2] + 1) {
    vehiclePtr = currentVehiclePtr + 0x30;
    do {
      *(undefined4 *)(vehiclePtr + 0x778) = 0;
      loopCounter = loopCounter + -1;
      vehiclePtr = vehiclePtr + -4;
    } while (-1 < loopCounter);
    currentVehiclePtr = currentVehiclePtr + 0xb40;
  }

  forcePtr = velocityVectorArray;
  collisionArray[2] = 0;
  tempValue12 = 0;
  tempValue13 = param_1;

  do {
    if (param_2 <= collisionArray[2]) {
      return;
    }

    collisionIndex = tempValue13 + 0x2c;
    tempValue7 = *(int *)(tempValue13 + 0x2c) * 0xf;
    local_4c = tempValue7;
    if (tempValue7 < 0) {
      local_4c = local_4c + 0xf;
    }
    local_4c = local_4c >> 4;

    local_30 = tempValue13;
    vehiclePtr_local_30 = tempValue13;
    local_48 = *(int *)(local_30 + 0x30) * 0xf;
    if (local_48 < 0) {
      local_48 = local_48 + 0xf;
    }
    local_48 = local_48 >> 4;

    iVar9 = *(short *)(local_30 + 0x34) * 0xf;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0x1f;
    }
    iVar9 = iVar9 >> 5;

    if ((*(char *)(vehiclePtr_local_30 + 0x48a) == '\0') && (*(char *)(vehiclePtr_local_30 + 0x7b5) != '\x04')) {
      vehicleOffset_local_38 = 0;
      otherVehiclePtr_local_3c = param_1;
      vehicleCounter2_local_60 = collisionArray[2];
      currentVehicleWheelPtr_local_50 = vehiclePtr_local_30 + 0x2c;
      collisionFactor1_local_4c = local_48;
      collisionFactor2_local_48 = iVar9;
      collisionFactor3_iVar9 = local_4c;

      for (vehicleCounter3_local_60 = 0; currentVehicleIndex_iVar4 = vehicleIndex_local_34, vehicleOffset_iVar8 = vehicleOffset_local_38, vehicleCounter3_local_60 < param_2; vehicleCounter3_local_60 = vehicleCounter3_local_60 + 1) {

        if (vehicleCounter2_local_60 != vehicleCounter3_local_60) {
          otherVehicleWheelPtr_local_44 = otherVehiclePtr_local_3c + 0x2c;

          if ((*(char *)(otherVehiclePtr_local_3c + 0x48a) == '\0') && (collisionDetected_bVar3 = false, *(char *)(otherVehiclePtr_local_3c + 0x7b5) != '\x04')) {

            collisionBoundaryZ_piVar15 = collisionBoundariesZ_local_80;
            collisionBoundaryX_piVar14 = collisionBoundariesX_local_90;
            negativeCollisionFactor2_iVar17 = -collisionFactor2_local_48;
            collisionDataOffset_iVar13 = DAT_801c8608 << 2;
            validCollisionFlags_piVar11 = validCollisionArray_local_40;
            collisionIndex_iVar12 = DAT_801c8608;

            for (boundaryIndex_iVar16 = 0; boundaryIndex_iVar16 < 4; boundaryIndex_iVar16 = boundaryIndex_iVar16 + 1) {
              *validCollisionFlags_piVar11 = 0;

              if ((&DAT_801c8740)[collisionIndex_iVar12 + vehicleOffset_iVar8 + currentVehicleIndex_iVar4] != '\x0f') {
                collisionDataIndex_iVar5 = collisionDataOffset_iVar13 + vehicleOffset_iVar8 + currentVehicleIndex_iVar4;
                boundaryValueX_iVar10 = *(int *)((int)&DAT_801c8744 + collisionDataIndex_iVar5);

                if ((boundaryValueX_iVar10 < collisionFactor3_iVar9) && (-collisionFactor3_iVar9 < boundaryValueX_iVar10)) {
                  boundaryValueZ_iVar5 = *(int *)((int)&DAT_801c874c + collisionDataIndex_iVar5);

                  if ((boundaryValueZ_iVar5 < collisionFactor1_local_4c) && (negativeCollisionFactor2_iVar17 < boundaryValueZ_iVar5)) {
                    collisionDetected_bVar3 = true;
                    *collisionBoundaryX_piVar14 = boundaryValueX_iVar10;
                    *collisionBoundaryZ_piVar15 = boundaryValueZ_iVar5;
                    *validCollisionFlags_piVar11 = 1;
                  }
                }
              }

              validCollisionFlags_piVar11 = validCollisionFlags_piVar11 + 1;
              collisionBoundaryZ_piVar15 = collisionBoundaryZ_piVar15 + 1;
              collisionBoundaryX_piVar14 = collisionBoundaryX_piVar14 + 1;
              collisionDataOffset_iVar13 = collisionDataOffset_iVar13 + 0x14;
              collisionIndex_iVar12 = collisionIndex_iVar12 + 0x14;
            }

            if (collisionDetected_bVar3) {

              positionDiffX_iVar13 = *(int *)(otherVehicleWheelPtr_local_44 + 0x65c) - *(int *)(currentVehicleWheelPtr_local_50 + 0x65c);
              positionDiffZ_iVar17 = *(int *)(otherVehicleWheelPtr_local_44 + 0x660) - *(int *)(currentVehicleWheelPtr_local_50 + 0x660);

              orientationIndex_uVar6 = *(ushort *)(currentVehicleWheelPtr_local_50 + 0x648) & 0xfff;
              cosValue_sVar1 = DAT_80093950[orientationIndex_uVar6];
              cosValue_iVar12 = (int)(short)DAT_80093950[orientationIndex_uVar6];
              sinValue_sVar2 = DAT_80093150[orientationIndex_uVar6];
              sinValue_iVar8 = (int)(short)DAT_80093150[orientationIndex_uVar6];

              collisionAngle1_iVar4 = FUN_80075ef8(cosValue_iVar12,positionDiffX_iVar13,sinValue_iVar8,positionDiffZ_iVar17,0);
              collisionAngle2_iVar17 = FUN_80075ef8(-sinValue_iVar8,positionDiffX_iVar13,cosValue_iVar12,positionDiffZ_iVar17,0);

              absoluteAngle1_iVar8 = collisionAngle1_iVar4;
              if (collisionAngle1_iVar4 < 0) {
                absoluteAngle1_iVar8 = -collisionAngle1_iVar4;
              }

              collisionFactor_iVar13 = collisionFactor1_local_4c;
              absoluteAngle2_iVar12 = collisionAngle2_iVar17;
              if (collisionAngle2_iVar17 < 0) {
                collisionFactor_iVar13 = collisionFactor2_local_48;
                absoluteAngle2_iVar12 = -collisionAngle2_iVar17;
              }

              bestCollisionIntensity_iVar16 = 0;
              collisionDirection_uVar6 = 0xffffffff;

              if ((absoluteAngle2_iVar12 << 0xc) / collisionFactor_iVar13 < (absoluteAngle1_iVar8 << 0xc) / collisionFactor3_iVar9) {

                collisionBoundaryX_piVar14 = collisionBoundariesX_local_90;
                validCollisionFlags_piVar11 = validCollisionArray_local_40;

                for (boundaryCheckIndex_iVar8 = 0; boundaryCheckIndex_iVar8 < 4; boundaryCheckIndex_iVar8 = boundaryCheckIndex_iVar8 + 1) {
                  if (*validCollisionFlags_piVar11 != 0) {
                    if (collisionAngle1_iVar4 < 1) {
                      collisionResponse_iVar17 = *collisionBoundaryX_piVar14;
                    }
                    else {
                      collisionResponse_iVar17 = -*collisionBoundaryX_piVar14;
                    }

                    collisionIntensity_iVar17 = FUN_80075e90(collisionFactor3_iVar9 + collisionResponse_iVar17,collisionFactor3_iVar9 << 1,0);

                    if ((bestCollisionIntensity_iVar16 < collisionIntensity_iVar17) && (collisionDirection_uVar6 = 2, bestCollisionIntensity_iVar16 = collisionIntensity_iVar17, 0 < collisionAngle1_iVar4)) {
                      collisionDirection_uVar6 = 3;
                    }
                  }
                  collisionBoundaryX_piVar14 = collisionBoundaryX_piVar14 + 1;
                  validCollisionFlags_piVar11 = validCollisionFlags_piVar11 + 1;
                }
              }
              else {

                collisionBoundaryZ_piVar14 = collisionBoundariesZ_local_80;
                validCollisionFlags_piVar11 = validCollisionArray_local_40;

                for (boundaryCheckIndex_iVar8 = 0; boundaryCheckIndex_iVar8 < 4; boundaryCheckIndex_iVar8 = boundaryCheckIndex_iVar8 + 1) {
                  if (*validCollisionFlags_piVar11 != 0) {
                    if (collisionAngle2_iVar17 < 1) {
                      collisionResponseZ_iVar4 = collisionFactor2_local_48 + *collisionBoundaryZ_piVar14;
                    }
                    else {
                      collisionResponseZ_iVar4 = collisionFactor1_local_4c - *collisionBoundaryZ_piVar14;
                    }

                    collisionResponseZ_iVar4 = FUN_80075e90(collisionResponseZ_iVar4,collisionFactor1_local_4c + collisionFactor2_local_48,0);

                    if (bestCollisionIntensity_iVar16 < collisionResponseZ_iVar4) {
                      collisionDirection_uVar6 = (uint)(collisionAngle2_iVar17 < 1);
                      bestCollisionIntensity_iVar16 = collisionResponseZ_iVar4;
                    }
                  }
                  collisionBoundaryZ_piVar14 = collisionBoundaryZ_piVar14 + 1;
                  validCollisionFlags_piVar11 = validCollisionFlags_piVar11 + 1;
                }
              }

              if (bestCollisionIntensity_iVar16 != 0) {

                if (collisionDirection_uVar6 == 1) {
                  collisionVector_local_60[0] = (int)sinValue_sVar2;
LAB_overlay0__800417e0:
                  collisionVector_local_60[1] = -(int)cosValue_sVar1;
                }
                else if ((int)collisionDirection_uVar6 < 2) {
                  if (collisionDirection_uVar6 == 0) {
                    collisionVector_local_60[0] = -(int)sinValue_sVar2;
                    collisionVector_local_60[1] = (int)cosValue_sVar1;
                  }
                }
                else {
                  if (collisionDirection_uVar6 == 2) {
                    collisionVector_local_60[0] = -(int)cosValue_sVar1;
                    cosValue_sVar1 = sinValue_sVar2;
                    goto LAB_overlay0__800417e0;
                  }
                  if (collisionDirection_uVar6 == 3) {
                    collisionVector_local_60[0] = (int)cosValue_sVar1;
                    collisionVector_local_60[1] = (int)sinValue_sVar2;
                  }
                }

                bestCollisionIntensity_iVar16 = bestCollisionIntensity_iVar16 + 0x800;
                if (0x1000 < bestCollisionIntensity_iVar16) {
                  bestCollisionIntensity_iVar16 = 0x1000;
                }

                scaledCollisionForce_uVar7 = FUN_80075bf4(bestCollisionIntensity_iVar16,0x4c901);

                collisionVectorPtr_piVar11 = collisionVector_local_60;
                otherVehicleForcePtr_iVar8 = otherVehicleWheelPtr_local_44;
                currentVehicleForcePtr_iVar4 = currentVehicleWheelPtr_local_50;

                for (forceComponentIndex_iVar17 = 0; forceComponentIndex_iVar17 < 2; forceComponentIndex_iVar17 = forceComponentIndex_iVar17 + 1) {
                  forceComponent_iVar12 = *collisionVectorPtr_piVar11;
                  collisionVectorPtr_piVar11 = collisionVectorPtr_piVar11 + 1;

                  scaledForceComponent_iVar12 = FUN_80075a5c(forceComponent_iVar12,scaledCollisionForce_uVar7);

                  *(int *)(otherVehicleForcePtr_iVar8 + 0x778) = *(int *)(otherVehicleForcePtr_iVar8 + 0x778) + scaledForceComponent_iVar12;
                  otherVehicleForcePtr_iVar8 = otherVehicleForcePtr_iVar8 + 4;

                  *(int *)(currentVehicleForcePtr_iVar4 + 0x778) = *(int *)(currentVehicleForcePtr_iVar4 + 0x778) - scaledForceComponent_iVar12;
                  currentVehicleForcePtr_iVar4 = currentVehicleForcePtr_iVar4 + 4;
                }
              }
            }
          }
          vehicleOffset_local_38 = vehicleOffset_local_38 + 0x50;
        }
        otherVehiclePtr_local_3c = otherVehiclePtr_local_3c + 0xb40;
      }
    }

    vehicleIndex_local_34 = vehicleIndex_local_34 + 400;
    vehiclePtr_local_30 = vehiclePtr_local_30 + 0xb40;
    vehicleCounter2_local_60 = vehicleCounter2_local_60 + 1;
  } while( true );
}

undefined4 FUN_overlay0__800418e8(void)

{
  char inputFlag;
  int gameStatePtr;
  char gameMode;
  undefined4 result;
  undefined4 uVar4;

  result = 0;
  uVar4 = result;

  switch(DAT_801d5866) {
  case 0:
    gameStatePtr = FUN_80060e94(DAT_800af230);
    if ((*(ushort *)(gameStatePtr + 8) & 4) != 0) {
      return 0;
    }
    gameMode = (char)DAT_801d5860;
    inputFlag = '\x01';
    break;
  default:
    goto LAB_overlay0__800419d8;
  case 2:
  case 4:
  case 0xc:
    gameStatePtr = FUN_80060e94(DAT_800af230);
    if ((*(ushort *)(gameStatePtr + 8) & 4) != 0) {
      return 0;
    }
    gameMode = '\x01';
    inputFlag = (char)DAT_801d585c;
    if (DAT_801d5865 == '\x01') {
      return 0;
    }
    break;
  case 3:
    result = 1;
    goto LAB_overlay0__800419d8;
  }

  result = 0;
  if (inputFlag == gameMode) {
    result = 2;
  }
LAB_overlay0__800419d8:

  uVar4 = result;
  return uVar4;
}

undefined4 FUN_overlay0__800419e8(int param_1)

{
  undefined4 result;

  result = 0;

  if ((*(char *)(param_1 + 0x45d) == '\0') && (result = 0, *(char *)(param_1 + 0x786) == '\0')) {
    result = FUN_overlay0__800418e8();
  }
  return result;
}

undefined4 FUN_overlay0__80041a28(int param_1)

{
  int gameStatePtr;
  undefined4 result;

  result = 0;

  if (((*(char *)(param_1 + 0x45d) == '\0') && (result = 0, *(char *)(param_1 + 0x786) == '\0')) &&
     ((DAT_801d5866 == '\x03' || (result = 0, DAT_801d5866 == '\x06')))) {
    gameStatePtr = FUN_80060e94(DAT_800af230);
    result = 0;
    if ((*(ushort *)(gameStatePtr + 8) & 4) == 0) {
      result = 1;
    }
  }
  return result;
}

bool FUN_overlay0__80041ab8(void)

{

  if (DAT_801d5866 != '\x06') {
    return DAT_801d5866 != '\x03';
  }
  return false;
}

void FUN_overlay0__80041ae8(undefined4 *param_1)

{
  byte vehicleState;
  int velocityX1;
  int velocityY1;
  int velocityX2;
  int velocityY2;
  int velocityYScaled;
  int velocityXScaled;
  byte bVar1;
  int iVar7;
  int iVar3;
  int iVar6;
  int iVar2;
  int iVar4;
  int iVar5;

  vehicleState = *(byte *)((int)param_1 + 0x6b3);
  velocityXScaled = (int)(short)DAT_80093150[*(ushort *)(param_1 + 0x192) & 0xfff];
  velocityYScaled = (int)(short)DAT_80093950[*(ushort *)(param_1 + 0x192) & 0xfff];

  velocityX1 = FUN_8007596c(*param_1, velocityXScaled);
  velocityY1 = FUN_8007596c(*param_1, velocityYScaled);
  velocityX2 = FUN_8007596c(param_1[1], velocityXScaled);
  velocityY2 = FUN_8007596c(param_1[1], velocityYScaled);

  velocityYScaled = FUN_800759cc((int)*(short *)(param_1 + 2), velocityYScaled, 1);
  velocityXScaled = FUN_800759cc((int)*(short *)(param_1 + 2), velocityXScaled, 1);

  param_1[(uint)vehicleState * 8 + 0x1ad] = (param_1[0x197] - velocityYScaled) + -velocityX1;
  param_1[(uint)bVar1 * 8 + 0x1ae] = (param_1[0x198] - iVar7) + iVar3;
  param_1[(uint)bVar1 * 8 + 0x1af] = param_1[0x197] + iVar6 + -iVar2;
  param_1[(uint)bVar1 * 8 + 0x1b0] = param_1[0x198] + iVar7 + iVar3;
  param_1[(uint)bVar1 * 8 + 0x1b1] = (param_1[0x197] - iVar6) + iVar4;
  param_1[(uint)bVar1 * 8 + 0x1b2] = (param_1[0x198] - iVar7) - iVar5;
  param_1[(uint)bVar1 * 8 + 0x1b3] = param_1[0x197] + iVar6 + iVar4;
  param_1[(uint)bVar1 * 8 + 0x1b4] = (param_1[0x198] + iVar7) - iVar5;
  return;
}

void FUN_overlay0__80041c78(int param_1)

{
  int sourcePtr;
  int destOffset;
  int sourceOffset;
  int loopCounter;

  loopCounter = 0;
  sourceOffset = (uint)*(byte *)(param_1 + 0x6b3) << 5;
  destOffset = (1 - (uint)*(byte *)(param_1 + 0x6b3)) * 0x20;

  do {
    sourcePtr = param_1 + sourceOffset;
    sourceOffset = sourceOffset + 8;
    *(undefined4 *)(param_1 + destOffset + 0x6b4) = *(undefined4 *)(sourcePtr + 0x6b4);
    loopCounter = loopCounter + 1;
    *(undefined4 *)(param_1 + destOffset + 0x6b8) = *(undefined4 *)(sourcePtr + 0x6b8);
    destOffset = destOffset + 8;
  } while (loopCounter < 4);
  return;
}

uint FUN_overlay0__80041ccc(int param_1,int *param_2,uint *param_3)

{
  int tempValue1;
  int dataPtr;
  undefined4 *dataArray;
  uint loopCounter;
  uint tempValue2;
  int destOffset;
  uint tempValue3;
  short velocityComponent;
  int sourceOffset;
  int dataCount;
  uint result;
  int iVar1;
  int iVar6;
  int iVar10;
  int iVar2;
  undefined4 uVar4;
  undefined4 uVar11;
  short sVar8;
  undefined4 uVar7;
  undefined4 *puVar3;
  undefined4 uVar5;

  sourceOffset = (uint)*(byte *)(param_1 + 0x6b3) << 5;
  destOffset = (1 - (uint)*(byte *)(param_1 + 0x6b3)) * 0x20;
  dataCount = 4;

  for (loopCounter = 0; dataPtr = param_1 + sourceOffset, loopCounter < 4; loopCounter = loopCounter + 1) {
    sourceOffset = sourceOffset + 8;

    *(int *)(dataCount + 0x1f800000) = *(int *)(param_1 + destOffset + 0x6b4) << 4;
    iVar1 = *(int *)(param_1 + iVar6 + 0x6b8);
    iVar6 = iVar6 + 8;
    *(undefined4 *)((int)&DAT_1f800008 + iVar10) = 0;
    *(int *)((int)&DAT_1f800004 + iVar10) = iVar1 << 4;
    *(int *)((int)&DAT_1f80000c + iVar10) = *(int *)(iVar2 + 0x6b4) << 4;
    iVar2 = *(int *)(iVar2 + 0x6b8);
    *(undefined4 *)((int)&DAT_1f800014 + iVar10) = 0;
    *(int *)((int)&DAT_1f800010 + iVar10) = iVar2 << 4;
    iVar10 = iVar10 + 0x2c;
  }

  FUN_overlay0__80028968(&DAT_800a9500,*(undefined4 *)(param_1 + 0x600),&DAT_1f800004);

  uVar11 = 0;
  sVar8 = 0x1000;
  uVar4 = 0;
  uVar7 = 1;
  puVar3 = &DAT_1f800004;

  for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {

    if ((*(short *)(puVar3 + 6) != 0x1000) &&
       (uVar11 = uVar11 | uVar7, (int)*(short *)(puVar3 + 6) < (int)sVar8)) {
      uVar4 = uVar5;
      sVar8 = *(short *)(puVar3 + 6);
    }
    uVar7 = uVar7 << 1;
    puVar3 = puVar3 + 0xb;
  }

  *param_3 = uVar4;
  *param_2 = (int)sVar8;

  if (uVar11 == 0) {
    uVar11 = 0;
  }
  else {

    *(undefined2 *)(param_1 + 0x654) = *(undefined2 *)(&DAT_1f800020 + uVar4 * 0xb);
    *(undefined2 *)(param_1 + 0x656) = *(undefined2 *)((int)&DAT_1f800020 + uVar4 * 0x2c + 2);
  }

  return uVar11;
}

void FUN_overlay0__80041e4c(int param_1)

{
  uint configValue;

  if (param_1 != 0) {

    configValue = (uint)DAT_801c98b4.bytes._0_1_;

    DAT_overlay0__80046f70 = (uint)DAT_801c98b8.bytes._0_1_ << 0x10;
    DAT_overlay0__80046f74 = (uint)DAT_801c98b8.bytes._1_1_ * 0xa0000;
    DAT_overlay0__80046f7c = (uint)DAT_801c98b8.bytes._3_1_ << 0x10;
    DAT_overlay0__80046f80 = (uint)(byte)DAT_801c98bc * 0xa0000;

    DAT_overlay0__80046f6c = ((uint)DAT_801c98b4.bytes._3_1_ << 0xc) / 100;
    DAT_overlay0__80046f78 = ((uint)DAT_801c98b8.bytes._2_1_ << 0xc) / 100;

    if (configValue == 0) {
      configValue = 100;
    }

    DAT_overlay0__80046f84 = (configValue << 0xc) / 100;
    return;
  }

  DAT_overlay0__80046f70 = 0;
  DAT_overlay0__80046f74 = 0;
  DAT_overlay0__80046f6c = 0;
  DAT_overlay0__80046f7c = 0;
  DAT_overlay0__80046f80 = 0;
  DAT_overlay0__80046f78 = 0;
  DAT_overlay0__80046f84 = 0x1000;
  return;
}

void FUN_overlay0__80041f68(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short performanceResult;
  uint calculationValue;
  int calculationResult;

  if (((*(byte *)(param_2 + 0x78d) & 0x10) == 0) && (-1 < param_3)) {

    if ((0 < param_3) || (DAT_overlay0__80046f80 <= param_4)) {

      performanceResult = (short)DAT_overlay0__80046f78 + 0x1000;
      goto LAB_overlay0__80042024;
    }

    calculationValue = param_4 - DAT_overlay0__80046f7c;

    if (DAT_overlay0__80046f7c < param_4) {

      calculationResult = FUN_80086084(calculationValue * 0x1000,((int)calculationValue >> 0x1f) << 0xc | calculationValue >> 0x14,
                           DAT_overlay0__80046f80 - DAT_overlay0__80046f7c,
                           DAT_overlay0__80046f80 - DAT_overlay0__80046f7c >> 0x1f);

      performanceResult = (short)(calculationResult * DAT_overlay0__80046f78 >> 0xc) + 0x1000;
      goto LAB_overlay0__80042024;
    }
  }

  performanceResult = 0x1000;

LAB_overlay0__80042024:

  *(short *)(param_2 + 0x766) = performanceResult;
  return;
}

void FUN_overlay0__80042038(undefined4 param_1,undefined4 param_2)

{
  int performanceValue1;
  int performanceValue2;

  if (DAT_overlay0__80046f78 != 0) {

    FUN_overlay0__800423bc(param_1,param_2,&performanceValue1,&performanceValue2);

    FUN_overlay0__80041f68(param_1,param_2,performanceValue1,performanceValue2);

    FUN_overlay0__80041f68(param_2,param_1,-performanceValue1,-performanceValue2);
  }
  return;
}

void FUN_overlay0__800420ac(int param_1,int param_2,int param_3)

{
  short performanceResult;
  uint calculationValue;
  int calculationResult;

  if ((*(byte *)(param_1 + 0x78d) & 0x10) == 0) {

    if ((0 < param_2) || (DAT_overlay0__80046f80 <= param_3)) {

      performanceResult = (short)DAT_overlay0__80046f78 + 0x1000;
      goto LAB_overlay0__80042160;
    }

    calculationValue = param_3 - DAT_overlay0__80046f7c;

    if (DAT_overlay0__80046f7c < param_3) {

      calculationResult = FUN_80086084(calculationValue * 0x1000,((int)calculationValue >> 0x1f) << 0xc | calculationValue >> 0x14,
                           DAT_overlay0__80046f80 - DAT_overlay0__80046f7c,
                           DAT_overlay0__80046f80 - DAT_overlay0__80046f7c >> 0x1f);

      performanceResult = (short)(calculationResult * DAT_overlay0__80046f78 >> 0xc) + 0x1000;
      goto LAB_overlay0__80042160;
    }
  }

  performanceResult = 0x1000;

LAB_overlay0__80042160:

  *(short *)(param_1 + 0x766) = performanceResult;
  return;
}

void FUN_overlay0__80042174(int param_1,int param_2,int param_3)

{
  short performanceResult;
  uint calculationValue;
  int calculationResult;

  if ((param_2 < 1) && (param_3 < DAT_overlay0__80046f74)) {

    calculationValue = param_3 - DAT_overlay0__80046f70;

    if (DAT_overlay0__80046f70 < param_3) {

      calculationResult = FUN_80086084(calculationValue * 0x1000,((int)calculationValue >> 0x1f) << 0xc | calculationValue >> 0x14,
                           DAT_overlay0__80046f74 - DAT_overlay0__80046f70,
                           DAT_overlay0__80046f74 - DAT_overlay0__80046f70 >> 0x1f);

      performanceResult = 0x1000 - (short)(calculationResult * DAT_overlay0__80046f6c >> 0xc);
    }
    else {

      performanceResult = 0x1000;
    }
  }
  else {

    performanceResult = 0x1000 - (short)DAT_overlay0__80046f6c;
  }

  *(short *)(param_1 + 0x766) = performanceResult;
  return;
}

void FUN_overlay0__80042230(undefined4 param_1,int param_2)

{
  bool validationResult;
  int performanceValue1;
  int performanceValue2;

  if (*(char *)(param_2 + 0x6fc) == '\0') {

    FUN_overlay0__800423bc(param_1,param_2,&performanceValue1,&performanceValue2);

    if (performanceValue1 < 1) {
      validationResult = false;
      if (-1 < performanceValue1) {
        validationResult = 0 < performanceValue2;
      }
    }
    else {
      validationResult = true;
    }

    if (validationResult) {

      if (DAT_overlay0__80046f78 == 0) {

        *(undefined2 *)(param_2 + 0x766) = (undefined2)DAT_overlay0__80046f84;
        return;
      }

      FUN_overlay0__800420ac(param_2,performanceValue1,performanceValue2);
    }
    else {

      if (DAT_overlay0__80046f6c == 0) {

        *(undefined2 *)(param_2 + 0x766) = (undefined2)DAT_overlay0__80046f84;
        return;
      }

      FUN_overlay0__80042174(param_2,-performanceValue1,-performanceValue2);
    }

    *(short *)(param_2 + 0x766) = (short)(DAT_overlay0__80046f84 * *(short *)(param_2 + 0x766) >> 0xc);
  }
  return;
}

void FUN_overlay0__8004232c(int param_1)

{
  int resetValue;

  if (*(short *)(param_1 + 0x766) == 0x1000) {

    resetValue = DAT_801c8570 << 0xc;

    *(undefined2 *)(param_1 + 0x6fe) = (undefined2)DAT_801c856c;
    *(int *)(param_1 + 0x704) = resetValue;
    return;
  }

  resetValue = DAT_801c8570 << 0x18;

  *(short *)(param_1 + 0x6fe) = (short)(DAT_801c856c * *(short *)(param_1 + 0x766) >> 0xc);
  *(int *)(param_1 + 0x704) = resetValue / (int)*(short *)(param_1 + 0x766);
  return;
}

int FUN_overlay0__8004239c(int param_1)

{
  int performanceValue;

  performanceValue = (int)*(short *)(param_1 + 0x608);

  if ((*(byte *)(param_1 + 0x78d) & 2) != 0) {
    performanceValue = performanceValue + -1;
  }

  return performanceValue;
}

void FUN_overlay0__800423bc(int param_1,int param_2,int *param_3,int *param_4)

{
  int performanceValue1;
  int performanceValue2;

  performanceValue1 = FUN_overlay0__8004239c(param_1);
  performanceValue2 = FUN_overlay0__8004239c(param_2);
  performanceValue1 = performanceValue1 - performanceValue2;

  performanceValue2 = *(int *)(param_1 + 0x604) - *(int *)(param_2 + 0x604);

  if ((performanceValue1 < 1) || (-1 < performanceValue2)) {
    if ((performanceValue1 < 0) && (0 < performanceValue2)) {
      performanceValue1 = performanceValue1 + 1;
      performanceValue2 = performanceValue2 - *DAT_800b4a44;
    }
  }
  else {

    performanceValue1 = performanceValue1 + -1;
    performanceValue2 = performanceValue2 + *DAT_800b4a44;
  }

  *param_3 = performanceValue1;
  *param_4 = performanceValue2;
  return;
}

undefined4 FUN_overlay0__80042490(int param_1,int param_2,int param_3)

{
  int vehicle1Ptr;
  int vehicle2Ptr;
  int performanceValue1;
  int performanceValue2;

  vehicle1Ptr = param_1 + param_3 * 0xb40;
  vehicle2Ptr = param_1 + param_2 * 0xb40;

  if (*(char *)(vehicle1Ptr + 0x728) != '\x02') {
    if (*(char *)(vehicle2Ptr + 0x728) == '\x02') {
      return 0;
    }

    performanceValue1 = FUN_overlay0__8004239c(vehicle2Ptr + 0x2c);
    performanceValue2 = FUN_overlay0__8004239c(vehicle1Ptr + 0x2c);

    if (performanceValue2 < performanceValue1) {
      return 1;
    }
    if (performanceValue1 < performanceValue2) {
      return 0xffffffff;
    }

    if (*(int *)(vehicle1Ptr + 0x630) < *(int *)(vehicle2Ptr + 0x630)) {
      return 1;
    }
    if (*(int *)(vehicle2Ptr + 0x630) < *(int *)(vehicle1Ptr + 0x630)) {
      return 0xffffffff;
    }
  }
  return 0;
}

void FUN_overlay0__80042568(int param_1,int param_2)

{
  char currentVehicleIndex;
  int comparisonResult;
  int currentPosition;
  int sortingCounter;

  sortingCounter = 1;
  do {

    if (param_2 <= sortingCounter) {

      sortingCounter = 0;
      while (sortingCounter < param_2) {

        currentPosition = param_1 + (char)(&DAT_801c8578)[sortingCounter] * 0xb40;
        sortingCounter = sortingCounter + 1;
        *(char *)(currentPosition + 0x77c) = (char)sortingCounter;

        if (*(char *)(currentPosition + 0x728) == '\x01') {
          *(undefined *)(currentPosition + 0x728) = 2;
        }
      }
      return;
    }

    currentVehicleIndex = (&DAT_801c8578)[sortingCounter];
    currentPosition = sortingCounter;

    while (currentPosition = currentPosition + -1, -1 < currentPosition) {

      comparisonResult = FUN_overlay0__80042490(param_1,(int)(char)(&DAT_801c8578)[currentPosition],(int)currentVehicleIndex);
      if (-1 < comparisonResult) break;

      (&DAT_801c8579)[currentPosition] = (&DAT_801c8578)[currentPosition];
    }

    (&DAT_801c8579)[currentPosition] = currentVehicleIndex;
    sortingCounter = sortingCounter + 1;
  } while( true );
}

void FUN_overlay0__80042680(int param_1,int param_2)

{
  undefined1 *arrayPtr;
  int loopCounter;

  loopCounter = 5;
  arrayPtr = &DAT_801c857d;
  do {
    *arrayPtr = 0xff;
    loopCounter = loopCounter + -1;
    arrayPtr = arrayPtr + -1;
  } while (-1 < loopCounter);

  loopCounter = 0;
  while (loopCounter < param_2) {

    *(char *)(param_1 + loopCounter * 0xb40 + 0x77c) = (char)(loopCounter + 1);

    (&DAT_801c8578)[loopCounter] = (char)loopCounter;

    loopCounter = loopCounter + 1;
  }

  return;
}

void FUN_overlay0__800426f0(int param_1)

{
  bool muteCondition;
  int engineSoundValue1;
  int engineSoundValue2;
  int velocityCalc;
  undefined audioValue;
  int wheelIndex;
  int pitchValue;
  int audioTempValue;
  uint soundIntensity;
  int audioCalc;
  uint tireScreechValue;
  uint totalSoundValue;
  int wheelDataPtr;
  uint wheelTypeIndex;
  int wheelDataOffset;
  int wheelCounter;
  uint audioAccumulator;
  int engineSoundAccum;
  int tireSlipAccum;
  int boostSoundValue;
  int engineSpeed_iVar3;
  int engineSpeedDiff_iVar2;
  int pitchModulation_iVar15;
  uint vehicleStateIndex_uVar14;

  audioAccumulator = 0;
  engineSoundAccum = 0;
  tireSlipAccum = 0;
  boostSoundValue = 0;

  engineSoundValue1 = FUN_80075bf4(*(int *)(param_1 + 0x4b8) + *(int *)(param_1 + 0x520),
                       (((int)*(short *)(param_1 + 0x4a4) * (int)*(short *)(param_1 + 0x4a4) >> 0xc)
                       + ((int)*(short *)(param_1 + 0x50c) * (int)*(short *)(param_1 + 0x50c) >> 0xc
                         )) / 2 + 0x199);

  if (engineSoundValue1 < 0) {
    engineSoundValue1 = -engineSoundValue1;
  }
  engineSoundValue1 = (engineSoundValue1 << 1) / 3;
  if (0x555 < engineSoundValue1) {
    engineSoundValue1 = 0x555;
  }

  engineSoundValue2 = FUN_80075bf4((*(int *)(param_1 + 0x4bc) + *(int *)(param_1 + 0x524)) / 0xc);
  if (0x555 < engineSoundValue2) {
    engineSoundValue2 = 0x555;
  }

  if ((*(short *)(param_1 + 0x73e) == DAT_801c8570) ||
     ((int)(uint)*(ushort *)(param_1 + 0x738) < (int)*(short *)(param_1 + 0x740))) {
    *(undefined2 *)(param_1 + 0x738) = *(undefined2 *)(param_1 + 0x740);
  }
  else if ((int)*(short *)(param_1 + 0x73e) < (DAT_801c8570 * 3) / 5) {
    *(undefined2 *)(param_1 + 0x738) = 0;
  }

  if (*(ushort *)(param_1 + 0x738) != 0) {
    boostSoundValue = (uint)*(ushort *)(param_1 + 0x738) * 8 + 0x400;
  }

  wheelCounter = 0;
  wheelDataOffset = 0x460;

  do {

    if (3 < wheelCounter) {

      wheelTypeIndex = *(int *)(param_1 + 0x658) + (DAT_1f800000 * audioAccumulator >> 0x10);
      *(uint *)(param_1 + 0x658) = wheelTypeIndex;
      if (480000 < wheelTypeIndex) {
        *(undefined4 *)(param_1 + 0x658) = 480000;
      }

      wheelDataOffset = engineSoundAccum + tireSlipAccum;
      if (engineSoundAccum + tireSlipAccum < engineSoundValue1 + engineSoundValue2) {
        wheelDataOffset = engineSoundValue1 + engineSoundValue2;
      }
      if (wheelDataOffset < boostSoundValue) {
        wheelDataOffset = boostSoundValue;
      }

      wheelDataOffset = wheelDataOffset >> 4;
      if (0xff < wheelDataOffset) {
        wheelDataOffset = 0xff;
      }

      *(char *)(param_1 + 0x762) = (char)wheelDataOffset;
      *(undefined *)(param_1 + 0x763) = 0;

      if ((DAT_801c8570 << 2) / 5 < (int)*(short *)(param_1 + 0x73e)) {
        *(undefined *)(param_1 + 0x763) = 1;
      }

      if (*(char *)(param_1 + 0x372) != '\x01') {

        engineSpeed_iVar3 = (int)*(short *)(param_1 + 0x61e);
        engineSpeedDiff_iVar2 = engineSpeed_iVar3 + -0x600;

        if (0x1000 < engineSpeed_iVar3) {
          engineSpeed_iVar3 = 0x1000;
          engineSpeedDiff_iVar2 = 0xa00;
        }
        if (engineSpeedDiff_iVar2 < 0) {
          engineSpeedDiff_iVar2 = -engineSpeedDiff_iVar2;
        }

        pitchModulation_iVar15 = 0x800;
        if (*(char *)(param_1 + 0x619) == '\x01') {

          vehicleStateIndex_uVar14 = *(uint *)(param_1 + (uint)*(byte *)(param_1 + 0x618) * 4 + 0x3a4);
          pitchModulation_iVar15 = FUN_80086084(vehicleStateIndex_uVar14 << 0xc,((int)vehicleStateIndex_uVar14 >> 0x1f) << 0xc | vehicleStateIndex_uVar14 >> 0x14,
                                *(int *)(param_1 + 0x3a8),*(int *)(param_1 + 0x3a8) >> 0x1f);
          pitchModulation_iVar15 = pitchModulation_iVar15 * 7;
          if (pitchModulation_iVar15 < 0) {
            pitchModulation_iVar15 = pitchModulation_iVar15 + 7;
          }
          pitchModulation_iVar15 = (pitchModulation_iVar15 >> 3) + 0x200;
          if (0x1000 < pitchModulation_iVar15) {
            pitchModulation_iVar15 = 0x1000;
          }
        }

        *(char *)(param_1 + 0x758) = (char)((int)((uint)*(byte *)(param_1 + 0x758) + (engineSpeed_iVar3 * 3 + 0x1000 >> 7)) / 2);
        *(char *)(param_1 + 0x757) = (char)((int)((uint)*(byte *)(param_1 + 0x757) + ((engineSpeedDiff_iVar2 + 0x600) * pitchModulation_iVar15 >> 0x11)) / 2);
      }

      muteCondition = false;
      if (((*(char *)(param_1 + 0x45e) == '\x02') && (DAT_800a951c == '\0')) &&
         ((DAT_801c9995 == '\0' || (DAT_800af232 == '\0')))) {
        muteCondition = true;
      }

      wheelCounter = 0;
      if (muteCondition) {
        wheelDataOffset = 0x460;

        for (; wheelDataPtr = param_1 + wheelDataOffset, wheelCounter < 4; wheelCounter = wheelCounter + 1) {
          wheelDataOffset = wheelDataOffset + 0x68;
          *(undefined *)(wheelDataPtr + 0x1d) = 0;
          *(undefined *)(wheelDataPtr + 0x1c) = 0;
          *(undefined *)(wheelDataPtr + 0x1f) = 0;
        }

        *(undefined *)(param_1 + 0x758) = 0;
        *(undefined *)(param_1 + 0x759) = 0;
        *(undefined *)(param_1 + 0x757) = 0;
      }
      return;
    }

    wheelDataPtr = param_1 + wheelDataOffset;

    if (*(char *)(param_1 + 0x718) == '\0') {
      if (0 < *(int *)(wheelDataPtr + 0x4c)) {
        wheelIndex = *(int *)(wheelDataPtr + 0x4c) / 0xc;
        if (0x1000 < wheelIndex) {
          wheelIndex = 0x1000;
        }
        engineSoundAccum = engineSoundAccum + wheelIndex;
      }

      if ((wheelCounter < 2) && (*(char *)(wheelDataPtr + 0x14) == '\x01')) {

        wheelIndex = *(int *)(wheelDataPtr + 8);
        if (wheelIndex < 0) {
          wheelIndex = wheelIndex + 7;
        }

        audioCalc = *(int *)(param_1 + 0x6a4);
        if (audioCalc < 0) {
          audioCalc = audioCalc + 0x3f;
        }

        wheelIndex = FUN_80075a5c(wheelIndex >> 3,audioCalc >> 6);
        if (wheelIndex < 0) {
          wheelIndex = -wheelIndex;
        }
        if (0x400 < wheelIndex) {
          wheelIndex = 0x400;
        }
        tireSlipAccum = tireSlipAccum + wheelIndex;
      }
    }

    wheelTypeIndex = 0;

    if (*(int *)(wheelDataPtr + 8) == 0) {

      *(undefined *)(wheelDataPtr + 0x1d) = 0;
      *(undefined *)(wheelDataPtr + 0x1c) = 0;
      *(undefined *)(wheelDataPtr + 0x1f) = 0;
      *(undefined *)(wheelDataPtr + 0x1e) = 0xff;
    }
    else {

      wheelIndex = param_1 + wheelDataOffset;

      if (*(byte *)(wheelDataPtr + 0x14) < 6) {
        wheelTypeIndex = *(byte *)(wheelDataPtr + 0x14) < 2 ^ 1;
      }

      pitchValue = (uint)*(ushort *)(wheelDataPtr + 0x44) << 0x10;
      audioCalc = pitchValue >> 0x10;

      if (audioCalc < 0) {
        pitchValue = -audioCalc >> 5;
        if (pitchValue < -0x80) {
          pitchValue = -0x80;
        }
      }
      else {
        pitchValue = pitchValue >> 0x15;
        if (0x7f < pitchValue) {
          pitchValue = 0x7f;
        }
      }

      audioCalc = FUN_80075a5c((int)(short)DAT_80093950[*(ushort *)(wheelIndex + 0xc) & 0xfff],
                            *(undefined4 *)(wheelIndex + 0x30));
      velocityCalc = FUN_80075a5c((int)(short)DAT_80093150[*(ushort *)(wheelIndex + 0xc) & 0xfff],
                           *(undefined4 *)(wheelIndex + 0x2c));

      if (*(char *)(wheelDataPtr + 0x14) == '\x01') {

        audioCalc = (*(int *)(wheelDataPtr + 8) >> 5) + -0x40;
        wheelIndex = audioCalc;
        if (audioCalc < 0) {
          wheelIndex = 0;
        }
        audioValue = (undefined)wheelIndex;
        if (0xff < audioCalc) {
          audioValue = 0xff;
        }
        *(undefined *)(wheelDataPtr + 0x1d) = audioValue;

        wheelIndex = *(int *)(wheelDataPtr + 0x2c);
        if (wheelIndex < 0) {
          wheelIndex = -wheelIndex;
        }
        wheelIndex = (wheelIndex >> 10) + -0x20;
        if (-1 < wheelIndex) goto LAB_overlay0__80042c30;
        audioValue = 0;
LAB_overlay0__80042c3c:
        *(undefined *)(wheelDataPtr + 0x1f) = audioValue;
      }
      else {

        audioCalc = (audioCalc + velocityCalc) * 0x32 >> 0xc;
        audioCalc = audioCalc * audioCalc >> 0xc;
        if (0xff < audioCalc) {
          audioCalc = 0xff;
        }

        velocityCalc = (int)(short)pitchValue;
        if (velocityCalc < 1) {

          velocityCalc = velocityCalc * -0xff;
LAB_overlay0__80042af8:
          audioTempValue = velocityCalc / 100 + 0x37;
          if (0xff < audioTempValue) {
            audioTempValue = 0xff;
          }
        }
        else {

          audioTempValue = 0;
          if (0x11c8 < *(int *)(wheelIndex + 0x2c) + 0x8e4U) {
            if (velocityCalc != 0x7f) {
              velocityCalc = velocityCalc * 0x50;
              goto LAB_overlay0__80042af8;
            }
            audioTempValue = 0xff;
          }
        }

        audioCalc = audioCalc + audioTempValue;

        if (wheelTypeIndex != 0) {
          audioCalc = audioCalc + (((int)((uint)*(ushort *)(wheelDataPtr + 0x40) << 0x10) >> 0x14) * 0x32) / 100;
        }

        wheelIndex = 0xff;
        if ((audioCalc < 0x100) && (wheelIndex = audioCalc, audioCalc < 0x3c)) {
          wheelIndex = 0;
        }
        *(char *)(wheelDataPtr + 0x1d) = (char)wheelIndex;
        *(undefined *)(wheelDataPtr + 0x1f) = 0;

        if (wheelTypeIndex != 0) {
          wheelIndex = ((int)((uint)*(ushort *)(wheelDataPtr + 0x40) << 0x10) >> 0x15) + 0x40;
LAB_overlay0__80042c30:
          audioValue = (undefined)wheelIndex;
          if (0xff < wheelIndex) {
            audioValue = 0xff;
          }
          goto LAB_overlay0__80042c3c;
        }
      }

      wheelIndex = (int)*(short *)(wheelDataPtr + 0x50);

      if (wheelIndex < -0x400) {
        wheelIndex = wheelIndex + 0x800;
      }
      else if (wheelIndex < 0) {
        wheelIndex = -wheelIndex;
      }
      else if (0x400 < wheelIndex) {
        wheelIndex = 0x800 - wheelIndex;
      }
      if (0x2aa < wheelIndex) {
        wheelIndex = 0x2aa;
      }

      wheelIndex = (uint)(byte)(&DAT_overlay0__80046eb8)[wheelTypeIndex] * wheelIndex;
      if (wheelIndex < 0) {
        wheelIndex = wheelIndex + 0xf;
      }
      tireScreechValue = (wheelIndex >> 4) * (wheelIndex >> 4) >> 0xc;

      if ((int)(uint)(byte)(&LAB_overlay0__80046eba)[wheelTypeIndex] < (int)tireScreechValue) {
        tireScreechValue = (uint)(byte)(&LAB_overlay0__80046eba)[wheelTypeIndex];
      }

      wheelIndex = (int)(short)pitchValue;
      if (wheelIndex == 0x7f) {

        soundIntensity = (uint)(byte)(&LAB_overlay0__80046ebe_2)[wheelTypeIndex];
      }
      else {

        if (wheelIndex < 1) {

          wheelIndex = -wheelIndex * (uint)(byte)(&LAB_overlay0__80046ebe)[wheelTypeIndex];
        }
        else {

          wheelIndex = wheelIndex * (uint)(byte)(&LAB_overlay0__80046eba_2)[wheelTypeIndex];
        }

        soundIntensity = wheelIndex / 100 + (uint)(byte)(&LAB_overlay0__80046ec2)[wheelTypeIndex];

        if ((int)(uint)(byte)(&LAB_overlay0__80046ebe_2)[wheelTypeIndex] < (int)soundIntensity) {
          soundIntensity = (uint)(byte)(&LAB_overlay0__80046ebe_2)[wheelTypeIndex];
        }
      }

      totalSoundValue = tireScreechValue + soundIntensity;

      if ((int)(uint)(byte)(&LAB_overlay0__80046ec2_2)[wheelTypeIndex] < (int)(tireScreechValue + soundIntensity)) {
        totalSoundValue = (uint)(byte)(&LAB_overlay0__80046ec2_2)[wheelTypeIndex];
      }

      if (wheelTypeIndex != 0) {

        wheelIndex = (((int)((uint)*(ushort *)(wheelDataPtr + 0x40) << 0x10) >> 0x14) * 10) / 100;
        if (0xff < wheelIndex) {
          wheelIndex = 0xff;
        }
        totalSoundValue = totalSoundValue + wheelIndex;
        if (0xff < (int)totalSoundValue) {
          totalSoundValue = 0xff;
        }

        wheelIndex = FUN_80060e94(DAT_800af230);
        audioAccumulator = totalSoundValue;
        if ((*(ushort *)(wheelIndex + 8) & 4) != 0) {
          audioAccumulator = totalSoundValue >> 1;
        }
      }

      if ((int)totalSoundValue < (int)(uint)(byte)(&DAT_overlay0__80046ec6)[wheelTypeIndex]) {
        totalSoundValue = 0;
      }

      if (totalSoundValue == 0) {
        *(undefined *)(wheelDataPtr + 0x1e) = 0xff;
      }
      else {

        wheelIndex = (uint)*(byte *)(wheelDataPtr + 0x1e) + (DAT_1f800000 * *(short *)(wheelDataPtr + 0x40) >> 0x10);
        if (wheelIndex < (int)(uint)(byte)(&DAT_overlay0__80046ec8)[wheelTypeIndex]) {
          totalSoundValue = 0;
          *(char *)(wheelDataPtr + 0x1e) = (char)wheelIndex;
        }
        else {
          *(undefined *)(wheelDataPtr + 0x1e) = 0;
        }
      }

      *(char *)(wheelDataPtr + 0x1c) = (char)totalSoundValue;
    }

    wheelDataOffset = wheelDataOffset + 0x68;
    wheelCounter = wheelCounter + 1;
  } while( true );
}

void FUN_overlay0__80043108(char param_1,int *param_2,int *param_3,int *param_4)

{

  int iVar1;

  iVar1 = (int)param_1;

  if (iVar1 < 0x40) {

    if (iVar1 < 0x20) {

      if (iVar1 < 0) {

        if (-0x40 < iVar1) {

          *param_2 = 0;
          *param_3 = iVar1 * 2 + 0x7e;
          *param_4 = iVar1 * -2;
          return;
        }

        *param_4 = 0;
        *param_3 = 0;
        *param_2 = 0;
        return;
      }

      *param_2 = iVar1 << 2;
      iVar1 = 0x7e;
    }

    else {

      *param_2 = 0x7e;
      iVar1 = (0x5f - iVar1) * 2;
    }
  }

  else {

    *param_2 = 0x7e;
    iVar1 = 0x7f - iVar1;
  }

  *param_3 = iVar1;
  *param_4 = 0;

  return;
}

void FUN_overlay0__800431a0(int param_1)

{

  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;

  sVar1 = FUN_8007596c((int)*(short *)(param_1 + 0x66c),(int)*(short *)(param_1 + 0xc));
  sVar2 = FUN_8007596c((int)*(short *)(param_1 + 0x66c),(int)*(short *)(param_1 + 0xe));

  sVar3 = FUN_8007596c((int)*(short *)(param_1 + 0x674),(int)*(short *)(param_1 + 0x18));
  sVar4 = FUN_8007596c((int)*(short *)(param_1 + 0x674),(int)*(short *)(param_1 + 0x1a));

  *(short *)(param_1 + 0x488) = sVar1 - sVar3;
  *(short *)(param_1 + 0x4f0) = sVar3 + sVar1;
  *(short *)(param_1 + 0x558) = -sVar2 - sVar4;
  *(short *)(param_1 + 0x5c0) = sVar4 - sVar2;

  return;
}

void FUN_overlay0__8004323c(int param_1)

{

  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;

  sVar1 = FUN_8007596c((int)*(short *)(param_1 + 0x668),(int)*(short *)(param_1 + 0xc));
  sVar2 = FUN_8007596c((int)*(short *)(param_1 + 0x66a),(int)*(short *)(param_1 + 0xc));
  sVar3 = FUN_8007596c((int)*(short *)(param_1 + 0x668),(int)*(short *)(param_1 + 0xe));
  sVar4 = FUN_8007596c((int)*(short *)(param_1 + 0x66a),(int)*(short *)(param_1 + 0xe));

  sVar5 = FUN_8007596c((int)*(short *)(param_1 + 0x670),(int)*(short *)(param_1 + 0x18));
  sVar6 = FUN_8007596c((int)*(short *)(param_1 + 0x672),(int)*(short *)(param_1 + 0x18));
  sVar7 = FUN_8007596c((int)*(short *)(param_1 + 0x670),(int)*(short *)(param_1 + 0x1a));
  sVar8 = FUN_8007596c((int)*(short *)(param_1 + 0x672),(int)*(short *)(param_1 + 0x1a));

  *(short *)(param_1 + 0x484) = sVar1 - sVar5;
  *(short *)(param_1 + 0x486) = sVar2 - sVar6;
  *(short *)(param_1 + 0x554) = -sVar3 - sVar7;
  *(short *)(param_1 + 0x4ec) = sVar5 + sVar1;
  *(short *)(param_1 + 0x4ee) = sVar6 + sVar2;
  *(short *)(param_1 + 0x556) = -sVar4 - sVar8;
  *(short *)(param_1 + 0x5bc) = sVar7 - sVar3;
  *(short *)(param_1 + 0x5be) = sVar8 - sVar4;

  return;
}

void FUN_overlay0__8004335c(undefined4 param_1)

{

  FUN_overlay0__800431a0((int)param_1);

  FUN_overlay0__8004323c(param_1);

  return;
}

void FUN_overlay0__80043388(int param_1,int param_2)

{
  undefined4 wheelCalculation;
  int wheelValue;
  int currentVehiclePtr;
  int wheelDataPtr;
  int wheelOffset;
  int matrixIndex;
  int wheelIndex;
  int vehicleIndex;

  currentVehiclePtr = param_1;
  for (vehicleIndex = 0; vehicleIndex < param_2; vehicleIndex = vehicleIndex + 1) {
    FUN_overlay0__8004323c(currentVehiclePtr + 0x2c);
    currentVehiclePtr = currentVehiclePtr + 0xb40;
  }

  vehicleIndex = 0;
  for (currentVehiclePtr = 0; currentVehiclePtr < param_2; currentVehiclePtr = currentVehiclePtr + 1) {
    wheelOffset = 0x460;
    matrixIndex = vehicleIndex;

    for (wheelIndex = 0; wheelDataPtr = param_1 + 0x2c + wheelOffset, wheelIndex < 4; wheelIndex = wheelIndex + 1) {

      wheelCalculation = FUN_overlay0__8003c360(*(undefined4 *)(wheelDataPtr + 0x2c),*(undefined4 *)(wheelDataPtr + 0x30));
      wheelValue = FUN_80075bf4(wheelCalculation,0x52);

      if (0x1000 < wheelValue) {
        wheelValue = 0x1000;
      }
      *(short *)(wheelDataPtr + 0x40) = (short)wheelValue;

      *(int *)((int)&DAT_1f80000c + matrixIndex) =
           (*(int *)(param_1 + 0x688) + (int)*(short *)(wheelDataPtr + 0x24)) * 0x10;
      *(int *)((int)&DAT_1f800010 + matrixIndex) =
           (*(int *)(param_1 + 0x690) + (int)*(short *)(wheelDataPtr + 0x28)) * 0x10;

      wheelOffset = wheelOffset + 0x68;

      *(int *)((int)&DAT_1f800014 + matrixIndex) =
           (*(int *)(param_1 + 0x68c) + (int)*(short *)(wheelDataPtr + 0x26)) * 0x10;
      *(undefined2 *)((int)&DAT_1f800008 + matrixIndex) = *(undefined2 *)(param_1 + 0x62c);

      matrixIndex = matrixIndex + 0x18;
    }
    vehicleIndex = vehicleIndex + 0x60;
    param_1 = param_1 + 0xb40;
  }

  return;
}

void FUN_overlay0__800434dc(undefined4 param_1,int param_2)

{
  int matrixPtr;
  int wheelIndex;
  int matrixOffset;
  int vehicleIndex;

  matrixOffset = 4;

  for (vehicleIndex = 0; wheelIndex = 0, vehicleIndex < param_2; vehicleIndex = vehicleIndex + 1) {
    matrixPtr = matrixOffset + 0x1f800000;

    for (; wheelIndex < 4; wheelIndex = wheelIndex + 1) {

      FUN_overlay0__80028830(&DAT_800a9500,matrixPtr);

      matrixPtr = matrixPtr + 0x18;
    }

    matrixOffset = matrixOffset + 0x60;
  }

  return;
}

void FUN_overlay0__80043578(int param_1,int param_2)

{
  short surfaceValue1;
  short surfaceValue2;
  bool collisionFlag;
  byte vehicleStatusByte;
  int wheelHeightValue;
  uint angleValue1;
  uint angleValue2;
  int groundHeight;
  undefined4 heightData;
  int *wheelDataPtr;
  int airborneWheelCount;
  int wheelOffset;
  int matrixIndex;
  int wheelIndex;
  int vehicleIndex;
  int surfaceWheelCount;
  int collisionWheelCount;
  int matrixDataIndex;
  int collisionMatrixPtr;
  int currentVehiclePtr;
  int collisionHeight;
  int previousHeight;
  undefined4 surfaceFriction;
  undefined4 surfaceResistance;
  undefined4 collisionAngle1;
  undefined4 vehicleCollisionState;
  bool specialConditionFlag;

  vehicleIndex = 0;
  matrixDataIndex = 0;
  collisionMatrixPtr = 0x1f800000;
  currentVehiclePtr = param_1;

  do {
    airborneWheelCount = 0;

    if (param_2 <= vehicleIndex) {
      return;
    }

    wheelOffset = 0x460;
    surfaceWheelCount = 0;
    collisionWheelCount = 0;

    *(uint *)(currentVehiclePtr + 0x62c) = (uint)*(ushort *)(collisionMatrixPtr + 8);

    matrixIndex = matrixDataIndex;

    for (wheelIndex = 0; wheelIndex < 4; wheelIndex = wheelIndex + 1) {

      collisionHeight = *(int *)((int)&DAT_1f800018 + matrixIndex);
      wheelDataPtr = (int *)(currentVehiclePtr + 0x2c + wheelOffset);

      if (collisionHeight == 0x7fffffff) {
        airborneWheelCount = airborneWheelCount + 1;
LAB_overlay0__8004376c:
        *(undefined2 *)((int)wheelDataPtr + 0x42) = 0;
      }
      else {

        previousHeight = wheelDataPtr[1];
        wheelDataPtr[1] = collisionHeight;
        wheelDataPtr[0] = collisionHeight + previousHeight >> 5;

        *(undefined *)(wheelDataPtr + 5) = *(undefined *)((int)&DAT_1f800004 + matrixIndex);
        *(undefined *)((int)wheelDataPtr + 0x15) = *(undefined *)((int)&DAT_1f800004 + matrixIndex + 1);

        if ((*(byte *)((int)&DAT_1f800004 + matrixIndex + 2) & 2) != 0) {
          collisionWheelCount = collisionWheelCount + 1;
        }

        if (1 < *(byte *)(wheelDataPtr + 5)) {
          surfaceWheelCount = surfaceWheelCount + 1;
        }

        if (*(byte *)(wheelDataPtr + 5) == 6) {
          *(undefined *)(wheelDataPtr + 5) = 5;
          airborneWheelCount = airborneWheelCount + 1;
        }

        surfaceFriction = DAT_overlay0__80046f88[*(byte *)(wheelDataPtr + 5)];
        if (surfaceFriction == 0) goto LAB_overlay0__8004376c;

        surfaceResistance = DAT_overlay0__80046f98[*(byte *)(wheelDataPtr + 5)];

        collisionAngle1 = *(undefined4 *)((char *)&DAT_1f800014 + matrixIndex);
        angleValue1 = FUN_80075bf4((int)surfaceResistance,*(undefined4 *)((char *)&DAT_1f80000c + matrixIndex));
        angleValue2 = FUN_80075bf4((int)surfaceResistance,collisionAngle1);

        groundHeight = (int)(short)DAT_80093150[angleValue1 & 0xfff] +
                      (int)(short)DAT_80093950[angleValue2 & 0xfff];

        if (DAT_overlay0__80046fa8[*(byte *)(wheelDataPtr + 5)] != '\0') {
          groundHeight = FUN_8007596c(groundHeight,(int)*(short *)(wheelDataPtr + 0x10));
        }

        *(short *)((int)wheelDataPtr + 0x42) = (short)(groundHeight * surfaceFriction >> 0xc);
      }

      matrixIndex = matrixIndex + 0x18;
      wheelOffset = wheelOffset + 0x68;
    }

    if ((collisionWheelCount == 0) || (matrixIndex = FUN_overlay0__80041ab8(), matrixIndex == 0)) {
      vehicleStatusByte = *(byte *)(currentVehiclePtr + 0x7b9) & 0xef;
    }
    else {
      vehicleStatusByte = *(byte *)(currentVehiclePtr + 0x7b9) | 0x10;
    }
    *(byte *)(currentVehiclePtr + 0x7b9) = vehicleStatusByte;

    vehicleCollisionState = FUN_overlay0__80041a28(currentVehiclePtr + 0x2c);
    if ((vehicleCollisionState == 1) && (*(char *)(currentVehiclePtr + 0x726) == '\0')) {
      specialConditionFlag = false;

      if (airborneWheelCount == 4) {
        *(undefined *)(currentVehiclePtr + 0x727) = 0xff;
        specialConditionFlag = true;
      }

      else if (((collisionWheelCount == 4) &&
               (airborneWheelCount = FUN_overlay0__80036bdc(*(undefined4 *)(currentVehiclePtr + 0x630),0), airborneWheelCount != 0))
              || ((DAT_801d5866 == '\x03' && (surfaceWheelCount == 4)))) {
        specialConditionFlag = true;
        *(char *)(currentVehiclePtr + 0x727) = *(char *)(currentVehiclePtr + 0x727) + '\x01';
      }

      if (specialConditionFlag) {
        if (*(char *)(currentVehiclePtr + 0x727) != '\0') {
          FUN_overlay0__800156b8(*(undefined *)(currentVehiclePtr + 0x488),2);
          *(undefined *)(currentVehiclePtr + 0x726) = 2;
        }
      }
      else {
        *(undefined *)(currentVehiclePtr + 0x727) = 0;
      }
    }

    matrixDataIndex = matrixDataIndex + 0x60;
    collisionMatrixPtr = collisionMatrixPtr + 0x60;
    currentVehiclePtr = currentVehiclePtr + 0xb40;
    vehicleIndex = vehicleIndex + 1;
  } while( true );
}

int FUN_overlay0__800438f0(int param_1,int param_2,int param_3,ushort *param_4)

{
  ushort suspensionValue;
  short dampingValue;
  int suspensionForce;
  int dampingForce;
  undefined4 calculationParam;
  int heightDifference;

  if ((short)param_4[2] < param_3) {

    *(ushort *)(param_2 + 0x10) = param_4[2];
    *(undefined4 *)(param_2 + 8) = 0;
    suspensionValue = param_4[0x19];
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(int *)(param_2 + 0x48) = -(int)(short)suspensionValue;
    suspensionForce = -(int)(short)param_4[0x19];
  }
  else {

    heightDifference = param_3;
    if (param_3 < (short)param_4[1]) {
      heightDifference = (int)(short)param_4[1];
    }

    suspensionForce = FUN_8007596c(heightDifference,*(undefined4 *)(param_4 + 6));
    suspensionForce = -suspensionForce;

    if (heightDifference < (short)*param_4) {
      dampingForce = (int)(((uint)*param_4 - heightDifference) * 0x10000) >> 0x10;
      dampingForce = FUN_80075bf4(dampingForce * dampingForce >> 0xc,*(undefined4 *)(param_4 + 0x16));
      suspensionForce = suspensionForce + dampingForce;
    }

    dampingForce = FUN_80075a5c(*(undefined4 *)(param_1 + 0x704),param_3 - *(short *)(param_2 + 0x10));
    dampingValue = *(short *)(param_2 + 0x12);
    *(short *)(param_2 + 0x12) = (short)dampingForce;
    dampingForce = (dampingForce + dampingValue) / 2;

    if (dampingForce < 0) {
      if (dampingForce < -0x1000) {
        dampingForce = -0x1000;
      }
      calculationParam = FUN_80081288(-*(int *)(param_4 + 8) - dampingForce,6);
      dampingForce = FUN_80075a5c(*(undefined4 *)(param_4 + 0xc),calculationParam);
      dampingForce = *(int *)(param_4 + 10) + dampingForce;
    }
    else {
      if (0x1000 < dampingForce) {
        dampingForce = 0x1000;
      }
      calculationParam = FUN_80081288(dampingForce - *(int *)(param_4 + 0xe),6);
      dampingForce = FUN_80075a5c(*(undefined4 *)(param_4 + 0x12),calculationParam);
      dampingForce = -dampingForce - *(int *)(param_4 + 0x10);
    }

    *(int *)(param_2 + 0x48) = suspensionForce;
    *(short *)(param_2 + 0x10) = (short)heightDifference;
    *(int *)(param_2 + 0x4c) = dampingForce;
    suspensionValue = param_4[0x19];
    suspensionForce = suspensionForce + dampingForce;
    *(int *)(param_2 + 8) = suspensionForce + (short)suspensionValue;

    if (suspensionForce + (short)suspensionValue < 0) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }

  return suspensionForce;
}

undefined4 FUN_overlay0__80043aa4(int param_1,int param_2)

{

  param_2 = *(int *)(param_1 + 0x688) + param_2;

  if (*(int *)(param_1 + 0x664) <= param_2) {

    *(int *)(param_1 + 0x664) = param_2;

    *(undefined2 *)(param_1 + 0x652) = 0;
    *(undefined2 *)(param_1 + 0x650) = 0;
    *(undefined2 *)(param_1 + 0x646) = 0;
    *(undefined2 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;

    return 1;
  }

  return 0;
}

void FUN_overlay0__80043ae0(int param_1,int param_2)

{
  undefined4 *configPtr;
  short *heightPtr;
  bool validCondition;
  short heightValue;
  undefined2 configValue;
  int *wheelDataPtr;
  undefined4 suspensionConfig;
  int currentVehiclePtr;
  int *calculationPtr;
  uint groundMask;
  uint wheelMask;
  int vehiclePtr;
  int matrixPtr;
  int scratchPtr;
  int wheelOffset;
  int vehicleDataPtr;
  int matrixIndex;
  int wheelIndex;
  int vehicleYPos;
  int dataIndex;
  uint statusMask;
  int vehicleIndex;
  int scaledValue;
  bitfield_16_t xOffset;
  bitfield_16_t xOffsetCopy;
  int yOffset;
  int yOffsetCopy;
  int calculationArray [2];
  ushort heightArray;
  int *calculationDataPtr;
  int *dataArrayPtr;
  int tempValue1;
  int tempValue2;
  int tempValue3;
  int tempValue4;
  int tempValue5;
  int tempValue6;
  int tempValue7;
  int tempValue8;
  int local_3c;
  undefined4 heightRecordResult;
  undefined4 orientationResult;
  int orientationAdjustment;
  short orientationValue;
  int frontWheelForce1;
  int frontWheelForce2;
  int rearWheelForce1;
  int rearWheelForce2;
  int currentOrientation;
  int newOrientation;
  int orientationForce;
  int orientationClamp;
  int lateralForce1;
  int lateralForce2;
  int lateralAdjustment;
  int lateralOrientation1;
  int lateralOrientation2;
  int currentLateralOrientation;
  int newLateralOrientation;
  int lateralOrientationForce;
  int lateralOrientationClamp;
  int totalWheelForce;
  int orientationCounter;
  int frontWheelForce;
  int *orientationDataPtr;
  int orientationIndex;
  short *orientationValuePtr;
  int rearWheelForce;
  int vehicleHeight;
  int suspensionScaling;
  int wheelHeight;
  int calculationValue;
  byte groundContactBit;
  uint wheelContactMask;
  int wheelContactDepth;
  int xOffsetSum;
  int xOffsetAverage;
  int yOffsetSum;
  int yOffsetAverage;
  int wheelContactForce1;
  int wheelContactValue1;
  int wheelContactForce2;
  int wheelContactValue2;
  int wheelContactResult1;
  int wheelContactResult2;
  int wheelContactAdjustment;
  int wheelContactValue3;
  int wheelContactValue4;
  int wheelContactResult3;
  int orientationForceCounter;
  int orientationForceSum;
  int orientationForceScaled;
  int orientationForce1;
  int orientationForce2;

  scratchPtr = 0x1f800000;
  calculationDataPtr = &xOffset;
  dataIndex = 0;
  matrixPtr = 0x1f800000;
  currentVehiclePtr = param_1;

  for (vehicleIndex = 0; vehicleIndex < param_2; vehicleIndex = vehicleIndex + 1) {
    currentVehiclePtr = currentVehiclePtr;

    if (*(char *)(currentVehiclePtr + 0x7b2) != '\a') {

      scaledValue = ((int)*(short *)(currentVehiclePtr + 0x6cc) << 0xc) / (int)*(short *)(currentVehiclePtr + 0x6a8);
      *(int *)(matrixPtr + 4) = scaledValue;

      wheelOffset = 0x460;
      xOffset._0_2_ = (short)((int)*(short *)(currentVehiclePtr + 0x160) - (int)*(short *)(currentVehiclePtr + 0x410));
      xOffset._2_2_ = (short)((int)*(short *)(currentVehiclePtr + 0x194) - (int)*(short *)(currentVehiclePtr + 0x412));
      xOffsetCopy = xOffset;
      vehicleYPos = *(int *)(currentVehiclePtr + 0x690);
      vehicleDataPtr = currentVehiclePtr + 0x2c;
      matrixIndex = dataIndex;
      calculationDataPtr = calculationDataPtr;
      xOffsetCopy = xOffset;
      yOffsetCopy = yOffset;

      for (wheelIndex = 0; wheelIndex < 4; wheelIndex = wheelIndex + 1) {
        wheelDataPtr = (int *)(currentVehiclePtr + 0x2c + wheelOffset);
        wheelOffset = wheelOffset + 0x68;

        tempValue1 = currentVehiclePtr;
        tempValue2 = matrixPtr;
        tempValue3 = vehicleDataPtr;
        tempValue4 = scratchPtr;

        matrixPtr = FUN_8007596c(((vehicleYPos + *(short *)(wheelDataPtr + 10)) - *wheelDataPtr) -
                              (int)*(short *)((int)wheelDataPtr + 0x42),scaledValue);
        scratchPtr = *calculationDataPtr;
        calculationDataPtr = calculationDataPtr + 1;
        *(int *)(matrixIndex + scratchPtr + 8) = matrixPtr + scratchPtr;
        matrixIndex = matrixIndex + 4;

        currentVehiclePtr = tempValue1;
        matrixPtr = tempValue2;
        vehicleDataPtr = tempValue3;
        scratchPtr = tempValue4;
      }

      wheelMask = 0;
      groundMask = 1;
      matrixIndex = dataIndex;

      for (wheelOffset = 0; wheelOffset < 4; wheelOffset = wheelOffset + 1) {

        if (*(int *)(matrixIndex + scratchPtr + 8) < (int)*(short *)(vehicleDataPtr + (wheelOffset >> 1) * 0x34 + 0x12e)) {
          wheelMask = wheelMask | groundMask;
        }
        groundMask = groundMask << 1;
        matrixIndex = matrixIndex + 4;
      }
      *(char *)(currentVehiclePtr + 0x745) = (char)wheelMask;
    }

    dataIndex = dataIndex + 0x34;
    matrixPtr = matrixPtr + 0x34;
    currentVehiclePtr = currentVehiclePtr + 0xb40;
  }

  matrixPtr = 0;
  currentVehiclePtr = param_1;

  for (vehicleIndex = 0; vehicleDataPtr = currentVehiclePtr + 0x2c, vehicleIndex < param_2; vehicleIndex = vehicleIndex + 1) {

    if (*(char *)(currentVehiclePtr + 0x7b2) != '\a') {
      wheelOffset = 0x460;
      validCondition = true;
      wheelIndex = 0;
      dataIndex = matrixPtr;

      while (validCondition) {
        wheelDataPtr = (int *)(vehicleDataPtr + wheelOffset);
        wheelOffset = wheelOffset + 0x68;

        FUN_overlay0__800438f0(vehicleDataPtr,wheelDataPtr,*(undefined4 *)((int)&DAT_1f800008 + dataIndex),
                             (ushort *)(vehicleDataPtr + (wheelIndex >> 1) * 0x34 + 300));

        validCondition = wheelIndex + 1 < 4;
        wheelIndex = wheelIndex + 1;
        dataIndex = dataIndex + 4;
      }
    }

    matrixPtr = matrixPtr + 0x34;
    currentVehiclePtr = currentVehiclePtr + 0xb40;
  }

  vehicleIndex = 0;
  scratchPtr = 0x1f800000;
  currentVehiclePtr = param_1;

  for (dataIndex = 0; vehicleDataPtr = currentVehiclePtr + 0x2c, dataIndex < param_2; dataIndex = dataIndex + 1) {

    if (*(char *)(currentVehiclePtr + 0x7b2) != '\a') {

      wheelIndex = (int)*(short *)(currentVehiclePtr + 0x49c) - (int)*(short *)(currentVehiclePtr + 0x504);

      if (wheelIndex < 0) {
        wheelIndex = FUN_80075bf4(*(undefined4 *)(currentVehiclePtr + 0x180),wheelIndex * wheelIndex >> 0xc);
        wheelIndex = -wheelIndex;
      }
      else {
        wheelIndex = FUN_80075bf4(*(undefined4 *)(currentVehiclePtr + 0x180),wheelIndex * wheelIndex >> 0xc);
      }

      wheelOffset = (int)*(short *)(currentVehiclePtr + 0x56c) - (int)*(short *)(currentVehiclePtr + 0x5d4);

      if (wheelOffset < 0) {
        wheelOffset = FUN_80075bf4(*(undefined4 *)(currentVehiclePtr + 0x1b4),wheelOffset * wheelOffset >> 0xc);
        wheelOffset = -wheelOffset;
      }
      else {
        wheelOffset = FUN_80075bf4(*(undefined4 *)(currentVehiclePtr + 0x1b4),wheelOffset * wheelOffset >> 0xc);
      }

      matrixIndex = FUN_8007596c((int)*(short *)(currentVehiclePtr + 0x4a),-*(int *)(currentVehiclePtr + 0x754));
      wheelOffset = FUN_8007596c((int)*(short *)(currentVehiclePtr + 0x4c),
                               *(int *)(currentVehiclePtr + 0x760) - *(int *)(currentVehiclePtr + 0x758));

      *(int *)(scratchPtr + 0x18) =
           ((*(int *)(currentVehiclePtr + 0x4d4) - wheelIndex) - *(int *)(currentVehiclePtr + 0x748) / 2) + wheelOffset + matrixIndex;
      *(int *)(scratchPtr + 0x1c) =
           (((*(int *)(currentVehiclePtr + 0x53c) + wheelIndex) - *(int *)(currentVehiclePtr + 0x748) / 2) + wheelOffset) - matrixIndex;

      *(int *)(scratchPtr + 0x20) =
           (((*(int *)(currentVehiclePtr + 0x5a4) - wheelOffset) - *(int *)(currentVehiclePtr + 0x74c) / 2) - wheelOffset) + matrixIndex;
      *(int *)(scratchPtr + 0x24) =
           (((*(int *)(currentVehiclePtr + 0x60c) + wheelOffset) - *(int *)(currentVehiclePtr + 0x74c) / 2) - wheelOffset) - matrixIndex;

      wheelIndex = vehicleIndex;
      for (wheelOffset = 0; wheelOffset < 4; wheelOffset = wheelOffset + 1) {
        configPtr = (undefined4 *)(vehicleDataPtr + 0x4ac);
        vehicleDataPtr = vehicleDataPtr + 0x68;
        *(undefined4 *)((int)&DAT_1f800028 + wheelIndex) = *configPtr;
        wheelIndex = wheelIndex + 4;
      }
    }

    vehicleIndex = vehicleIndex + 0x34;
    scratchPtr = scratchPtr + 0x34;
    currentVehiclePtr = currentVehiclePtr + 0xb40;
  }

  scratchPtr = 0x1f800000;
  currentVehiclePtr = param_1;

  for (vehicleIndex = 0; local_3c = currentVehiclePtr, vehicleIndex < param_2; vehicleIndex = vehicleIndex + 1) {
    vehicleDataPtr = currentVehiclePtr + 0x2c;

    if (*(char *)(currentVehiclePtr + 0x7b2) != '\a') {

      if (1 < *(ushort *)(currentVehiclePtr + 0x7ba)) {

        suspensionConfig = FUN_overlay0__800357c8(*(undefined2 *)(currentVehiclePtr + 0x7ba),calculationArray);
        heightRecordResult = FUN_overlay0__80043aa4(vehicleDataPtr,suspensionConfig);

        if (heightRecordResult != 0) {

          if (calculationArray[0] == 2) {

            suspensionConfig = *(undefined4 *)(*(int *)(DAT_801c8568 + 0x18) + *(char *)(currentVehiclePtr + 0x6de) * 0x28 + 0x28);
            orientationResult = FUN_overlay0__800450e0(suspensionConfig,(int)*(short *)(currentVehiclePtr + 0x674));

            if (orientationResult != 0) {

              orientationAdjustment = DAT_1f800000 * 0x155 >> 0x10;
              orientationValue = (short)((uint)(DAT_1f800000 * 0x155) >> 0x10);

              if (orientationAdjustment < orientationResult) {
                *(short *)(currentVehiclePtr + 0x674) = *(short *)(currentVehiclePtr + 0x674) + (int)orientationValue;
              }
              else if (orientationResult < -orientationAdjustment) {
                *(short *)(currentVehiclePtr + 0x674) = *(short *)(currentVehiclePtr + 0x674) - orientationValue;
              }
              else {
                *(short *)(currentVehiclePtr + 0x674) = (short)suspensionConfig;
              }
            }
          }

          FUN_overlay0__80044ea4(currentVehiclePtr + 0x694,currentVehiclePtr + 0x69c,currentVehiclePtr + 0x6a4,
                               (int)*(short *)(currentVehiclePtr + 0x670),
                               (int)*(short *)(currentVehiclePtr + 0x672),
                               (int)*(short *)(currentVehiclePtr + 0x674));
          goto LAB_overlay0__80044454;
        }
      }

      DAT_1f800000 = (int)*(short *)(currentVehiclePtr + 0x72a);

      frontWheelForce1 = FUN_8007596c(*(int *)(scratchPtr + 0x18) + *(int *)(scratchPtr + 0x1c),
                                     *(undefined4 *)(currentVehiclePtr + 0x98));
      frontWheelForce2 = FUN_8007596c(*(int *)(scratchPtr + 0x20) + *(int *)(scratchPtr + 0x24),
                                      *(undefined4 *)(currentVehiclePtr + 0x9c));
      orientationAdjustment = FUN_8007598c(frontWheelForce1 - frontWheelForce2,DAT_1f800000);
      *(short *)(currentVehiclePtr + 0x67c) = *(short *)(currentVehiclePtr + 0x67c) + orientationAdjustment;

      rearWheelForce1 = FUN_8007596c(*(int *)(scratchPtr + 0x28) + *(int *)(scratchPtr + 0x2c),
                                    *(undefined4 *)(currentVehiclePtr + 0x98));
      rearWheelForce2 = FUN_8007596c(*(int *)(scratchPtr + 0x30) + *(int *)(scratchPtr + 0x34),
                                     *(undefined4 *)(currentVehiclePtr + 0x9c));
      rearWheelForce1 = FUN_8007598c(rearWheelForce1 - rearWheelForce2,DAT_1f800000);
      currentOrientation = (int)*(short *)(currentVehiclePtr + 0x67c);
      newOrientation = currentOrientation + rearWheelForce1;

      if (((currentOrientation < 1) || (-1 < newOrientation)) && ((-1 < currentOrientation || (newOrientation < 1)))) {
        if (newOrientation < 0x4000) {
          if (newOrientation < -0x4000) {
            newOrientation = -0x4000;
          }
        }
        else {
          newOrientation = 0x3fff;
        }
        *(short *)(currentVehiclePtr + 0x67c) = (short)newOrientation;
      }
      else {
        *(undefined2 *)(currentVehiclePtr + 0x67c) = 0;
      }

      orientationForce = FUN_80075b54(DAT_1f800000,(int)*(short *)(currentVehiclePtr + 0x67c),4);
      orientationForce = (uint)*(ushort *)(currentVehiclePtr + 0x670) + orientationForce;
      *(short *)(currentVehiclePtr + 0x670) = (short)orientationForce;
      orientationForce = orientationForce * 0x10000 >> 0x10;
      orientationClamp = 0xfe00;

      if ((orientationForce < -0x200) || (orientationClamp = 0x200, 0x200 < orientationForce)) {
        *(undefined2 *)(currentVehiclePtr + 0x670) = orientationClamp;
        *(undefined2 *)(currentVehiclePtr + 0x67c) = 0;
      }

      lateralForce1 = FUN_8007596c(*(int *)(scratchPtr + 0x18) - *(int *)(scratchPtr + 0x1c),
                                   *(undefined4 *)(currentVehiclePtr + 0xa0));
      lateralForce2 = FUN_8007596c(*(int *)(scratchPtr + 0x20) - *(int *)(scratchPtr + 0x24),
                                   *(undefined4 *)(currentVehiclePtr + 0xa4));
      lateralAdjustment = FUN_8007598c(lateralForce1 + lateralForce2,DAT_1f800000);
      *(short *)(currentVehiclePtr + 0x67e) = *(short *)(currentVehiclePtr + 0x67e) + lateralAdjustment;

      lateralOrientation1 = FUN_8007596c(*(int *)(scratchPtr + 0x28) - *(int *)(scratchPtr + 0x2c),
                                         *(undefined4 *)(currentVehiclePtr + 0x98));
      lateralOrientation2 = FUN_8007596c(*(int *)(scratchPtr + 0x30) - *(int *)(scratchPtr + 0x34),
                                         *(undefined4 *)(currentVehiclePtr + 0x9c));
      lateralOrientation1 = FUN_8007598c(lateralOrientation1 + lateralOrientation2,DAT_1f800000);
      currentLateralOrientation = (int)*(short *)(currentVehiclePtr + 0x67e);
      newLateralOrientation = currentLateralOrientation + lateralOrientation1;

      if (((currentLateralOrientation < 1) || (-1 < newLateralOrientation)) && ((-1 < currentLateralOrientation || (newLateralOrientation < 1)))) {
        if (newLateralOrientation < 0x4000) {
          if (newLateralOrientation < -0x4000) {
            newLateralOrientation = -0x4000;
          }
        }
        else {
          newLateralOrientation = 0x3fff;
        }
        *(short *)(currentVehiclePtr + 0x67e) = (short)newLateralOrientation;
      }
      else {
        *(undefined2 *)(currentVehiclePtr + 0x67e) = 0;
      }

      lateralOrientationForce = FUN_80075b54(DAT_1f800000,(int)*(short *)(currentVehiclePtr + 0x67e),4);
      lateralOrientationForce = (uint)*(ushort *)(currentVehiclePtr + 0x672) + lateralOrientationForce;
      *(short *)(currentVehiclePtr + 0x672) = (short)lateralOrientationForce;
      lateralOrientationForce = lateralOrientationForce * 0x10000 >> 0x10;
      lateralOrientationClamp = 0xfe00;

      if (lateralOrientationForce < -0x200) {
LAB_overlay0__800442b0:
        *(undefined2 *)(currentVehiclePtr + 0x672) = lateralOrientationClamp;
        *(undefined2 *)(currentVehiclePtr + 0x67e) = 0;
      }
      else if (0x200 < lateralOrientationForce) {
        lateralOrientationClamp = 0x200;
        goto LAB_overlay0__800442b0;
      }

      totalWheelForce = *(int *)(currentVehiclePtr + 0x494) + *(int *)(currentVehiclePtr + 0x4fc) +
                        *(int *)(currentVehiclePtr + 0x564) + *(int *)(currentVehiclePtr + 0x5cc);

      if (*(char *)(currentVehiclePtr + 0x6dd) == '\0') {
        if (totalWheelForce == 0) {
          *(undefined *)(currentVehiclePtr + 0x6dd) = 1;
        }
      }
      else if (totalWheelForce != 0) {
        *(undefined *)(currentVehiclePtr + 0x6dd) = 0;
      }

      orientationCounter = 0;
      FUN_overlay0__80044ea4(currentVehiclePtr + 0x694,currentVehiclePtr + 0x69c,currentVehiclePtr + 0x6a4,
                           (int)*(short *)(currentVehiclePtr + 0x670),
                           (int)*(short *)(currentVehiclePtr + 0x672),
                           (int)*(short *)(currentVehiclePtr + 0x674));

      frontWheelForce = FUN_80075a5c(*(int *)(scratchPtr + 0x18) + *(int *)(scratchPtr + 0x1c) +
                                     *(int *)(scratchPtr + 0x20) + *(int *)(scratchPtr + 0x24),
                                     (int)*(short *)(currentVehiclePtr + 0x58));
      frontWheelForce = FUN_8007598c(frontWheelForce,DAT_1f800000);
      orientationDataPtr = vehicleDataPtr;
      orientationIndex = vehicleDataPtr;

      do {
        orientationValuePtr = (short *)((char *)orientationIndex + 0x678);
        orientationValue = *orientationValuePtr;
        orientationIndex = (int)((char *)orientationIndex + 2);
        orientationForce = FUN_8007596c((int)orientationValue,frontWheelForce);
        orientationCounter = orientationCounter + 1;
        *(int *)(orientationDataPtr + 0x628) = *(int *)(orientationDataPtr + 0x628) + orientationForce;
        orientationDataPtr = orientationDataPtr + 4;
      } while (orientationCounter < 3);

      rearWheelForce = 0;
      vehicleHeight = *(int *)(currentVehiclePtr + 0x65c) - (DAT_1f800000 * 0x9ccd >> 0x10);
      *(uint *)(currentVehiclePtr + 0x65c) = vehicleHeight;
      rearWheelForce = FUN_80075a5c(*(int *)(scratchPtr + 0x28) + *(int *)(scratchPtr + 0x2c) +
                                   *(int *)(scratchPtr + 0x30) + *(int *)(scratchPtr + 0x34),
                                   (int)*(short *)(currentVehiclePtr + 0x58));
      rearWheelForce = FUN_8007598c(rearWheelForce,DAT_1f800000);
      orientationDataPtr = vehicleDataPtr;

      do {
        orientationValuePtr = (short *)((char *)orientationDataPtr + 0x678);
        orientationValue = *orientationValuePtr;
        orientationDataPtr = orientationDataPtr + 2;
        orientationForce = FUN_8007596c((int)orientationValue,rearWheelForce);
        rearWheelForce = rearWheelForce + 1;
        *(int *)(vehicleDataPtr + 0x628) = *(int *)(vehicleDataPtr + 0x628) + orientationForce;
        vehicleDataPtr = vehicleDataPtr + 4;
      } while (rearWheelForce < 3);

      if ((int)(*(uint *)(currentVehiclePtr + 0x65c) ^ vehicleHeight) < 0) {
        *(undefined4 *)(currentVehiclePtr + 0x65c) = 0;
      }
    }
LAB_overlay0__80044454:

    scratchPtr = scratchPtr + 0x34;
    currentVehiclePtr = local_3c + 0xb40;
  }

  dataArrayPtr = &xOffset;
  scratchPtr = 0x1f800000;
  vehicleIndex = 0;
  dataIndex = 0;

  do {

    if (param_2 <= vehicleIndex) {
      return;
    }

    vehicleDataPtr = param_1 + 0x2c;
    currentVehiclePtr = param_1;

    if ((*(char *)(param_1 + 0x7b2) != '\a') && (*(char *)(param_1 + 0x745) != '\0')) {

      FUN_overlay0__800431a0(vehicleDataPtr);
      wheelOffset = 0x460;
      suspensionScaling = *(undefined4 *)(scratchPtr + 4);

      xOffset._0_2_ = (short)((int)*(short *)(param_1 + 0x160) - (int)*(short *)(param_1 + 0x410));
      xOffset._2_2_ = (short)((int)*(short *)(param_1 + 0x194) - (int)*(short *)(param_1 + 0x412));
      xOffsetCopy = xOffset;
      vehicleYPos = *(int *)(param_1 + 0x690);
      matrixIndex = dataIndex;
      calculationDataPtr = dataArrayPtr;
      xOffsetCopy = xOffset;
      yOffsetCopy = yOffset;

      for (wheelIndex = 0; wheelIndex < 4; wheelIndex = wheelIndex + 1) {
        wheelDataPtr = (int *)(vehicleDataPtr + wheelOffset);
        wheelOffset = wheelOffset + 0x68;

        wheelHeight = FUN_8007596c(((vehicleYPos + *(short *)(wheelDataPtr + 10)) - *wheelDataPtr) -
                                  (int)*(short *)((int)wheelDataPtr + 0x42),suspensionScaling);
        calculationValue = *calculationDataPtr;
        calculationDataPtr = calculationDataPtr + 1;
        *(int *)((int)&DAT_1f800008 + matrixIndex) = wheelHeight + calculationValue;
        matrixIndex = matrixIndex + 4;
      }

      groundContactBit = 1;
      wheelContactMask = (uint)*(byte *)(param_1 + 0x745) << 4;
      matrixIndex = dataIndex;

      for (wheelIndex = 0; wheelIndex < 4; wheelIndex = wheelIndex + 1) {

        if (*(int *)((int)&DAT_1f800008 + matrixIndex) <
            (int)*(short *)(vehicleDataPtr + (wheelIndex >> 1) * 0x34 + 0x12e)) {
          wheelContactMask = wheelContactMask | groundContactBit;
        }
        groundContactBit = groundContactBit << 1;
        matrixIndex = matrixIndex + 4;
      }
      *(char *)(param_1 + 0x745) = (char)wheelContactMask;

      if ((wheelContactMask & 0xf) != 0) {
        wheelContactMask = 0;
        calculationDataPtr = dataArrayPtr;
        matrixIndex = dataIndex;

        for (wheelIndex = 0; wheelIndex < 4; wheelIndex = wheelIndex + 1) {

          wheelContactDepth = (uint)*(ushort *)(vehicleDataPtr + (wheelIndex >> 1) * 0x34 + 0x12e) -
                             (uint)*(ushort *)((int)&DAT_1f800008 + matrixIndex);
          *(short *)calculationDataPtr = (short)wheelContactDepth;

          if (wheelContactDepth * 0x10000 < 0) {
            *(undefined2 *)calculationDataPtr = 0;
          }
          calculationDataPtr = (int *)((int)calculationDataPtr + 2);
          matrixIndex = matrixIndex + 4;
        }

        xOffsetSum = (int)xOffset._0_2_ + (int)xOffset._2_2_;
        xOffsetAverage = (ushort)((uint)(xOffsetSum - (xOffsetSum >> 0x1f)) >> 1);
        yOffsetSum = (int)xOffsetCopy._0_2_ + (int)xOffsetCopy._2_2_;
        yOffsetAverage = (uint)(yOffsetSum - (yOffsetSum >> 0x1f)) >> 1;

        wheelContactForce1 = FUN_8007596c((int)xOffsetCopy._0_2_ - (int)xOffset._0_2_,
                                          (int)*(short *)(param_1 + 0x40));
        wheelContactValue1 = (uint)xOffset._0_2_ & 0xffff;
        wheelContactForce2 = FUN_8007596c((int)xOffsetCopy._2_2_ - (int)xOffset._2_2_,
                                          (int)*(short *)(param_1 + 0x40));
        wheelContactValue2 = (int)xOffset._2_2_ + wheelContactForce2;
        wheelContactForce1 = (wheelContactValue1 + wheelContactForce1) * 0x10000;
        wheelContactResult1 = wheelContactForce1 >> 0x10;
        wheelContactValue1 = (int)xOffset._2_2_ + wheelContactForce2;

        if ((wheelContactResult1 != 0) || ((wheelContactValue1 & 0xffff) != 0)) {
          wheelContactValue2 = wheelContactValue1 * 0x10000;
          wheelContactResult2 = wheelContactValue2 >> 0x10;

          if (wheelContactResult2 < wheelContactResult1) {
            wheelContactAdjustment = FUN_80081af0(wheelContactResult1 - wheelContactResult2,(int)*(short *)(param_1 + 0x3e));
            wheelContactValue1 = wheelContactResult2 - (wheelContactValue2 >> 0x1f);
          }
          else {
            wheelContactForce1 = wheelContactForce1 >> 0x1f;
            if (wheelContactResult1 <= wheelContactResult2) {
              wheelContactValue1 = (uint)(wheelContactResult1 - wheelContactForce1) >> 1;
              goto LAB_overlay0__8004472c;
            }
            wheelContactAdjustment = FUN_80081af0(wheelContactResult1 - wheelContactResult2,(int)*(short *)(param_1 + 0x3e));
            wheelContactValue1 = wheelContactResult1 - wheelContactForce1;
          }
          wheelContactValue1 = wheelContactValue1 >> 1;
          *(short *)(param_1 + 0x672) = *(short *)(param_1 + 0x672) + wheelContactAdjustment;
        }

LAB_overlay0__8004472c:

        wheelContactValue2 = (int)((uint)xOffsetAverage << 0x10) >> 0x10;
        wheelContactValue3 = yOffsetAverage << 0x10;

        if ((wheelContactValue2 != 0) || (wheelContactValue4 = wheelContactValue1 << 0x10, (yOffsetAverage & 0xffff) != 0)) {
          wheelContactResult3 = wheelContactValue3 >> 0x10;

          if (wheelContactResult3 < wheelContactValue2) {
            wheelContactAdjustment = FUN_80081af0(wheelContactValue2 - wheelContactResult3,(int)*(short *)(param_1 + 0x3c));
            wheelContactValue1 = wheelContactResult3 - (wheelContactValue3 >> 0x1f);
LAB_overlay0__80044794:
            *(short *)(param_1 + 0x670) = *(short *)(param_1 + 0x670) + wheelContactAdjustment;
          }
          else {
            wheelContactValue3 = (int)((uint)xOffsetAverage << 0x10) >> 0x1f;
            if (wheelContactValue2 < wheelContactResult3) {
              wheelContactAdjustment = FUN_80081af0(wheelContactValue2 - wheelContactResult3,(int)*(short *)(param_1 + 0x3c));
              wheelContactValue1 = wheelContactValue2 - wheelContactValue3;
              goto LAB_overlay0__80044794;
            }
            wheelContactValue1 = wheelContactValue2 - wheelContactValue3;
          }
          wheelContactValue4 = (wheelContactValue1 + (wheelContactValue1 >> 1)) * 0x10000;
        }
        *(int *)(param_1 + 0x690) = *(int *)(param_1 + 0x690) + (wheelContactValue4 >> 0x10);
      }

      orientationForceCounter = 0;
      orientationForceSum = 0;
      orientationDataPtr = vehicleDataPtr;

      for (orientationIndex = 0; orientationIndex < 3; orientationIndex = orientationIndex + 1) {
        orientationForce = *(int *)(orientationDataPtr + 0x628);
        orientationForceScaled = FUN_80075bf4((int)*(short *)(vehicleDataPtr + 0x68c),orientationForce);
        orientationValuePtr = (short *)(vehicleDataPtr + 0x694);
        orientationValue = *orientationValuePtr;
        orientationDataPtr = orientationDataPtr + 4;
        orientationForceSum = orientationForceSum + orientationForceScaled;
        vehicleDataPtr = vehicleDataPtr + 2;
        orientationForceCounter = orientationForceCounter + (orientationValue * orientationForce >> 0xc);
      }

      orientationForce1 = FUN_8007596c(orientationForceSum,(int)*(short *)(param_1 + 0x6bc));
      orientationForce2 = FUN_8007596c(orientationForceCounter,(int)*(short *)(param_1 + 0x6c4));
      orientationForce1 = orientationForce1 + orientationForce2;

      if (0 < orientationForce1) {
        orientationForce1 = 0;
      }

      if (*(int *)(param_1 + 0x65c) < orientationForce1) {
        *(int *)(param_1 + 0x65c) = orientationForce1;
      }
    }

    dataIndex = dataIndex + 0x34;
    scratchPtr = scratchPtr + 0x34;
    vehicleIndex = vehicleIndex + 1;
    param_1 = currentVehiclePtr + 0xb40;
  } while( true );
}
