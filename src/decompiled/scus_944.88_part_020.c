// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_020.h"
#include "scus_944.88_part_005.h"
#include <stdint.h>
#include <stddef.h>

// Forward declarations for functions not in headers
longlong FUN_80075bf4(int param_1, int param_2);
longlong FUN_80075c14(int param_1, int param_2);

// External variables
extern undefined4 DAT_overlay0__80046f48;
extern undefined4 DAT_overlay0__80046f54;
extern undefined4 DAT_overlay0__80046f58;
extern undefined4 DAT_overlay0__80046e00;
extern undefined4 DAT_overlay0__80046ef0;
extern undefined4 DAT_801c8730;
extern undefined4 DAT_801c98a4;
extern undefined4 DAT_801c98a8;
extern undefined2 DAT_801c86b4[];
extern undefined4 DAT_800a9500;
extern undefined4 DAT_801c8570;
extern undefined4 DAT_800b4a58;
extern undefined4 DAT_800a9520;
extern undefined4 DAT_801c856c;
extern undefined4 DAT_overlay0__80046dcc;
extern undefined4 DAT_overlay0__80046dcd;
extern undefined4 *DAT_800b4a44;
extern undefined4 DAT_801c8568;
extern undefined4 UNK_overlay0__80046dd4;
extern undefined2 DAT_801c8690[];
extern undefined2 DAT_801c8692[];
extern undefined4 DAT_801c8694[];
extern undefined2 DAT_801c86b6[];
extern undefined4 DAT_800af231;

void FUN_overlay0__80030308(int param_1,undefined param_2,int param_3)

{

  if ((param_3 != 0) || (*(char *)(param_1 + 0x765) == '\0')) {

    *(undefined *)(param_1 + 0x764) = param_2;
    *(char *)(param_1 + 0x765) = (char)param_3;
  }

  return;
}

void FUN_overlay0__80030330(int param_1,int param_2)

{

  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;

  iVar6 = 0xb4;

  for (iVar7 = 0; iVar3 = 0, iVar7 < param_2; iVar7 = iVar7 + 1) {

    puVar5 = (undefined4 *)(iVar6 + 0x1f800000);
    iVar4 = param_1 + 0x2c;
    DAT_1f800000 = (int)*(short *)(param_1 + 0x72a);

    for (; iVar3 < 3; iVar3 = iVar3 + 1) {

      puVar1 = (undefined4 *)(iVar4 + 0x628);
      iVar4 = iVar4 + 4;

      uVar2 = FUN_8007598c(*puVar1,DAT_1f800000);
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }

    uVar2 = FUN_80075b54(*(undefined4 *)(param_1 + 0x678),DAT_1f800000,7);
    *(undefined4 *)((int)&DAT_1f80000c + iVar6) = uVar2;

    param_1 = param_1 + 0xb40;
    iVar6 = iVar6 + 0x10;
  }

  return;
}

void FUN_overlay0__80030424(int param_1,undefined4 *param_2,undefined4 param_3)

{

  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;

  iVar3 = param_1;
  puVar4 = param_2;

  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {

    puVar1 = (undefined4 *)(iVar3 + 0x628);
    iVar3 = iVar3 + 4;

    uVar2 = FUN_8007596c(param_3,*puVar1);
    uVar2 = FUN_8007598c(uVar2,DAT_1f800000);

    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  }

  uVar2 = FUN_80075a5c(param_3,*(undefined4 *)(param_1 + 0x64c));
  uVar2 = FUN_80075b54(uVar2,DAT_1f800000,7);
  param_2[3] = uVar2;

  return;
}

void FUN_overlay0__800304dc(int param_1)

{

  short *psVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_40 [4];
  int local_30 [4];

  iVar14 = 0;
  iVar12 = 0;
  iVar7 = param_1 + 0x680;
  iVar8 = param_1;

  for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {

    iVar6 = *(int *)(iVar8 + 0x628);
    iVar3 = FUN_80075bf4((int)*(short *)(iVar7 + 0xc),iVar6);
    psVar1 = (short *)(iVar7 + 0x14);
    iVar8 = iVar8 + 4;
    iVar12 = iVar12 + iVar3;
    iVar7 = iVar7 + 2;
    iVar14 = iVar14 + (*psVar1 * iVar6 >> 0xc);
  }

  *(int *)(param_1 + 0x6a4) = iVar12;
  *(int *)(param_1 + 0x6a8) = iVar14;

  if (iVar12 < 0) {
    iVar12 = -iVar12;
  }

  uVar2 = FUN_80075c54(iVar12,0xdfbdd,0xc);
  *(ushort *)(param_1 + 0x6ae) = uVar2;

  if (*(ushort *)(param_1 + 0x6f8) < uVar2) {
    *(ushort *)(param_1 + 0x6f8) = uVar2;
  }

  piVar11 = local_40;
  piVar9 = local_30;
  iVar12 = 0x460;

  uVar4 = FUN_80075b04(*(undefined4 *)(param_1 + 0x64c),0x6488,7);

  local_40[0] = FUN_8007596c((int)*(short *)(param_1 + 0xc),uVar4);
  local_40[0] = -local_40[0];
  local_40[1] = local_40[0];
  local_40[2] = FUN_8007596c((int)*(short *)(param_1 + 0xe),uVar4);
  local_40[3] = local_40[2];
  local_30[1] = FUN_8007596c((int)*(short *)(param_1 + 0x18),uVar4);
  local_30[0] = -local_30[1];
  local_30[3] = FUN_8007596c((int)*(short *)(param_1 + 0x1a),uVar4);
  local_30[2] = -local_30[3];

  for (uVar13 = 0; sVar5 = 0x1000, uVar13 < 4; uVar13 = uVar13 + 1) {

    iVar7 = param_1 + iVar12;
    *(int *)(iVar7 + 0x2c) = *(int *)(param_1 + 0x6a4) + *piVar9;
    iVar8 = *(int *)(iVar7 + 0x2c);
    *(int *)(iVar7 + 0x30) = *(int *)(param_1 + 0x6a8) + *piVar11;

    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }

    if (iVar8 < 0x1bc88) {
      iVar8 = FUN_80075a5c(iVar8,0x93);
      sVar5 = (short)((iVar8 << 0xb) >> 0xc) + 0x800;
    }

    *(short *)(iVar7 + 0x2a) = sVar5;
    piVar11 = piVar11 + 1;
    piVar9 = piVar9 + 1;
    iVar12 = iVar12 + 0x68;
  }

  return;
}

void FUN_overlay0__800306c0(int param_1,int param_2)

{

  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  undefined4 local_34;
  int local_30;
  int *local_2c;

  local_2c = &local_38;

  for (local_30 = 0; iVar9 = param_1 + 0x2c, local_30 < param_2; local_30 = local_30 + 1) {

    FUN_overlay0__800304dc(iVar9);
    iVar8 = 0x460;
    local_34 = 0;
    local_38 = 0;

    for (iVar7 = 0; iVar6 = iVar9 + iVar8, iVar7 < 4; iVar7 = iVar7 + 1) {

      if (*(char *)(iVar6 + 99) == '\0') {

        iVar2 = FUN_80075a5c((int)(short)DAT_80093950[*(ushort *)(iVar6 + 0xc) & 0xfff],
                             *(undefined4 *)(iVar6 + 0x2c));
        iVar3 = FUN_80075a5c((int)(short)DAT_80093150[*(ushort *)(iVar6 + 0xc) & 0xfff],
                             *(undefined4 *)(iVar6 + 0x30));
        *(int *)(iVar6 + 0x18) = iVar2 - iVar3;
        local_2c[iVar7 >> 1] = 1;
      }
      iVar8 = iVar8 + 0x68;
    }

    iVar3 = 0x68;
    piVar5 = local_2c;
    iVar7 = iVar9;
    iVar8 = iVar9;
    iVar6 = iVar9;

    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {

      if ((*piVar5 != 0) || (*(char *)(iVar9 + iVar2 + 0x37a) == '\0')) {

        uVar4 = FUN_80075a5c((int)*(short *)(iVar8 + 1000),
                             (*(int *)(iVar7 + 0x478) + *(int *)(iVar9 + iVar3 + 0x478)) / 2);
        *(undefined4 *)(iVar6 + 0x634) = uVar4;
      }

      iVar6 = iVar6 + 4;
      iVar8 = iVar8 + 2;
      iVar3 = iVar3 + 0xd0;
      iVar7 = iVar7 + 0xd0;
      piVar5 = piVar5 + 1;
    }

    iVar8 = 0x460;
    for (iVar7 = 0; iVar6 = iVar9 + iVar8, iVar7 < 4; iVar7 = iVar7 + 1) {

      iVar2 = FUN_80075c14(DAT_1f800000,*(undefined4 *)(iVar6 + 0x18));
      iVar2 = FUN_8007596c(iVar2 * *(short *)(iVar9 + (iVar7 >> 1) * 2 + 1000) >> 0xc,0x28c);

      for (iVar2 = (uint)*(ushort *)(iVar6 + 0x20) + iVar2; 0xfff < iVar2 * 0x10000 >> 0x10;
          iVar2 = iVar2 + -0x1000) {

      }

      uVar1 = (undefined2)iVar2;
      iVar3 = iVar2 << 0x10;

      while (iVar3 < 0) {
        iVar2 = iVar2 + 0x1000;
        uVar1 = (undefined2)iVar2;
        iVar3 = iVar2 * 0x10000;
      }

      *(undefined2 *)(iVar6 + 0x20) = uVar1;
      iVar8 = iVar8 + 0x68;
    }

    param_1 = param_1 + 0xb40;
  }

  return;
}

void FUN_overlay0__80030950(int param_1)

{

  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_3c;
  int local_30;

  if (*(char *)(param_1 + 0x372) == '\x01') {

    *(undefined4 *)(param_1 + 0x344) = 0x32028;
  }
  else {

    iVar1 = FUN_80075c54(*(undefined4 *)(param_1 + 0x344),0x3999,0xc);
    local_3c = 1;
    iVar11 = param_1 + 0x374;
    local_30 = 0;
    iVar12 = iVar1 / 500 + 1;

    for (iVar10 = 0; iVar10 < iVar1; iVar10 = iVar10 + iVar12) {

      iVar2 = local_30 * 0x40 + iVar10 * -7;
      iVar9 = iVar2 * 2;

      iVar3 = FUN_80075a5c(iVar9,*(undefined4 *)(iVar11 + 0x54));
      iVar3 = iVar3 * 0x3c;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }

      uVar4 = FUN_80075d2c((ushort *)(param_1 + 0x7c), iVar9);
      uVar5 = FUN_80075a5c(0x6488,*(undefined4 *)(iVar11 + 0x54));
      iVar6 = FUN_80075a5c(uVar4,uVar5);

      iVar7 = iVar9;
      if (iVar9 < 0) {
        iVar7 = iVar2 * -2;
      }

      iVar2 = *(int *)(param_1 + 0x440);
      iVar8 = (iVar7 >> 5) * (iVar7 >> 5) >> 0xc;
      iVar7 = *(int *)(param_1 + 0x444);

      uVar4 = FUN_80075d2c(&DAT_801c8730,iVar9);
      uVar4 = FUN_80075a5c(DAT_overlay0__80046e00,uVar4);
      iVar2 = FUN_80075a5c(*(int *)(param_1 + 0x430) + (iVar2 * iVar8 >> 0xc) +
                           (iVar7 * iVar8 >> 0xc),uVar4);

      if (iVar2 + (*(int *)(param_1 + 0x43c) * iVar8 >> 0xc) < iVar6) {
        *(int *)(param_1 + 0x344) = iVar9;
      }

      if ((local_3c < (int)(uint)*(byte *)(param_1 + 0x372)) &&
         ((int)(uint)*(ushort *)(param_1 + 0x396) < iVar3 >> 0xc)) {
        iVar11 = iVar11 + 4;
        local_3c = local_3c + 1;
      }

      local_30 = local_30 + iVar12 * 9;
    }
  }

  return;
}

int FUN_overlay0__80030ba4(ushort param_1)

{

  int iVar1;
  int iVar2;

  iVar2 = (int)(short)param_1;

  if (899 < iVar2) {

    return iVar2;
  }

  iVar1 = (uint)param_1 << 0x10;

  if (iVar2 < 0x2ee) {

    iVar1 = 0x2ee0000;
  }

  if (400 < iVar1 >> 0x10) {

    return ((((iVar1 >> 0x10) + -400) * 300) / 500 + 600) * 0x10000 >> 0x10;
  }

  return 600;
}

int FUN_overlay0__80030c2c(int param_1)

{

  if (param_1 < 12000) {

    param_1 = 12000;
  }

  return param_1;
}

int FUN_overlay0__80030c44(int param_1)

{

  if (param_1 < 12000) {

    param_1 = 12000;
  }

  return param_1;
}

void FUN_overlay0__80030c5c(int param_1)

{

  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  uVar2 = FUN_80075e90(((uint)*(ushort *)(param_1 + 0x108) * 0x1000) / 0x3c,
                       *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x372) * 4 + 0x3c4),0);

  sVar1 = *(short *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x344) = uVar2;

  iVar3 = FUN_80075a5c(*(undefined4 *)(param_1 + 0x414),(int)*(short *)(param_1 + 1000));
  iVar4 = FUN_80075a5c(*(undefined4 *)(param_1 + 0x418),(int)*(short *)(param_1 + 0x3ea));

  uVar2 = FUN_80075e90((int)sVar1,(iVar3 + iVar4) * 4,0);
  *(undefined4 *)(param_1 + 0x420) = uVar2;

  FUN_overlay0__80030950(param_1);

  return;
}

void FUN_overlay0__80030d10(int param_1,undefined param_2)

{

  *(undefined *)(param_1 + 0x1c) = param_2;

  return;
}

undefined4 FUN_overlay0__80030d18(undefined4 param_1)

{

  undefined4 uVar1;

  uVar1 = 0;

  switch(param_1) {
  case 1:
  case 2:

    uVar1 = 1;
    break;
  case 3:
  case 4:
  case 6:

    uVar1 = 2;
    break;
  case 5:

    uVar1 = 3;
  }

  return uVar1;
}

void FUN_overlay0__80030d64(int param_1,undefined param_2)

{

  *(undefined *)(param_1 + 0x45d) = param_2;

  *(undefined *)(param_1 + 0x786) = 0;

  return;
}

void FUN_overlay0__80030d70(int param_1,undefined param_2)

{

  if (*(char *)(param_1 + 0x45d) == '\0') {

    *(undefined *)(param_1 + 0x642) = param_2;
    return;
  }

  if (*(char *)(param_1 + 0x45d) != '\x02') {

    return;
  }

  *(undefined *)(param_1 + 0x642) = 0;

  return;
}

void FUN_overlay0__80030da0
               (int *param_1,undefined4 *param_2,int *param_3,short param_4,int param_5,
               short param_6,int param_7)

{

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  *param_3 = 0;
  *param_2 = 0;
  *param_1 = 0;

  if ((param_5 != 0) && (param_7 != 0)) {

    iVar6 = (int)param_4;
    if (iVar6 != 0) {
      iVar5 = (int)param_6;

      if (((iVar5 != 0) && (iVar6 < iVar5)) && (param_5 < param_7)) {

        iVar1 = FUN_80075a5c(param_5,iVar5);
        iVar2 = FUN_80075a5c(param_7,iVar6);
        iVar1 = iVar1 - iVar2;

        if (0 < iVar1) {

          uVar3 = FUN_80075a5c(param_5,param_5);
          iVar5 = FUN_80075a5c(uVar3,iVar5);
          uVar3 = FUN_80075a5c(param_7,param_7);
          iVar6 = FUN_80075a5c(uVar3,iVar6);

          if (iVar5 - iVar6 < 1) {

            uVar3 = FUN_80075a5c(param_5,param_7);
            uVar3 = FUN_80075a5c(uVar3,param_7 - param_5);
            uVar3 = FUN_80075e90(uVar3,iVar1,0);
            uVar4 = FUN_80075e90(iVar5 - iVar6,iVar1 * 2,0);

            iVar6 = FUN_80081288(uVar3,6);
            *param_3 = iVar6;

            uVar4 = FUN_80075a5c(uVar4,uVar4);
            iVar6 = FUN_80075e90(uVar4,uVar3,0);
            *param_1 = -iVar6;

            uVar3 = FUN_80081288(iVar6,6);
            uVar3 = FUN_80075a5c(-*param_3,uVar3);
            *param_2 = uVar3;
          }
        }
      }
    }
  }

  return;
}

int FUN_overlay0__80030f50(int param_1)

{

  return ((param_1 + -10) * 0x45) / 0xf5 + 0x10;
}

void FUN_overlay0__80030f94(int param_1,undefined *param_2,uint param_3,undefined4 param_4)

{

  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;

  iVar6 = FUN_overlay0__80030f50(*param_2);
  *(int *)(param_1 + 0xc) = iVar6 * 0xf50;

  bVar1 = param_2[5];
  uVar7 = 0x64000 / (param_3 & 0xff);
  bVar2 = param_2[6];
  bVar3 = param_2[7];

  sVar4 = FUN_80075a5c(uVar7,(int)((((uint)(byte)param_2[4] << 0xc) / 100) * 0x10000) >> 0x10);
  sVar5 = FUN_80075a5c(uVar7,(int)((((uint)bVar2 << 0xc) / 100) * 0x10000) >> 0x10);

  FUN_overlay0__80030da0
            (param_1 + 0x10,param_1 + 0x14,param_1 + 0x18,(int)sVar4,
             (int)((uint)bVar1 * 0xc4004) >> 0xc,(int)sVar5,(int)((uint)bVar3 * 0xc4004) >> 0xc);

  bVar1 = param_2[9];
  bVar2 = param_2[10];
  bVar3 = param_2[0xb];
  sVar4 = FUN_80075a5c(uVar7,(int)((((uint)(byte)param_2[8] << 0xc) / 100) * 0x10000) >> 0x10);
  sVar5 = FUN_80075a5c(uVar7,(int)((((uint)bVar2 << 0xc) / 100) * 0x10000) >> 0x10);

  FUN_overlay0__80030da0
            (param_1 + 0x1c,param_1 + 0x20,param_1 + 0x24,(int)sVar4,
             (int)((uint)bVar1 * 0xc4004) >> 0xc,(int)sVar5,(int)((uint)bVar3 * 0xc4004) >> 0xc);

  *(int *)(param_1 + 0x28) = (int)((uint)(byte)param_2[1] * 0x188008) >> 0xc;

  iVar6 = (uint)(byte)param_2[2] * 0xf50050;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  *(int *)(param_1 + 0x2c) = iVar6 >> 0xc;

  *(ushort *)(param_1 + 0x30) = (ushort)(byte)param_2[3];
  *(short *)(param_1 + 0x32) = (short)((int)((uint)(byte)param_2[3] * 0x27334) >> 0xe);

  return;
}

void FUN_overlay0__800312fc(int param_1,short *param_2,int param_3,int param_4)

{

  uint uVar1;
  short sVar2;
  int iVar3;
  short sVar4;

  if (*(int *)(param_2 + 6) != 0) {

    sVar2 = FUN_80075e90(*(int *)(param_1 + param_4 * 4 + 0x434) / 2,*(int *)(param_2 + 6),0);
    param_2[5] = -sVar2;
  }

  param_1 = param_1 + param_4 * 2;
  sVar4 = param_2[5] + (*(short *)(param_1 + 0x3e4) - *(short *)(param_1 + 0x24));
  param_2[4] = sVar4;

  sVar4 = sVar4 - *(short *)(param_1 + 0x3e4);
  param_2[1] = sVar4;

  uVar1 = ((uint)*(byte *)(param_3 + param_4 + 0x19e) << 0xc) / 1000;
  sVar2 = (short)uVar1;
  if ((int)*(short *)(param_1 + 0x24) < (int)uVar1) {
    sVar2 = *(short *)(param_1 + 0x24);
  }

  *param_2 = sVar4 + sVar2;

  param_2[2] = param_2[1] +
               *(short *)(param_1 + 0x24) +
               (short)(((uint)*(byte *)(param_3 + param_4 + 0x1a0) << 0xc) / 1000);

  iVar3 = FUN_80075e90((int)param_2[0x19],*(undefined4 *)(param_2 + 6),0);
  if (iVar3 < param_2[2]) {
    param_2[2] = (short)iVar3;
  }

  return;
}

void FUN_overlay0__80031440(int param_1)

{

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0x194;

  *(int *)(param_1 + 0x80) = param_1 + 0x88;
  *(int *)(param_1 + 0x84) = param_1 + 200;
  *(int *)(param_1 + 0x40) = param_1 + 0x48;
  *(int *)(param_1 + 0x44) = param_1 + 0x54;

  for (iVar3 = 0; iVar1 = param_1 + iVar2, iVar3 < 2; iVar3 = iVar3 + 1) {

    iVar2 = iVar2 + 0xd8;

    *(int *)(iVar1 + 4) = iVar1 + 0xc;
    *(int *)(iVar1 + 8) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x30) = iVar1 + 0x38;
    *(int *)(iVar1 + 0x70) = iVar1 + 0x38;
    *(int *)(iVar1 + 0x74) = iVar1 + 0x78;
    *(int *)(iVar1 + 0x94) = iVar1 + 0x9c;
    *(int *)(iVar1 + 0x98) = iVar1 + 0xac;
    *(int *)(iVar1 + 0xc0) = iVar1 + 200;
    *(int *)(iVar1 + 0x34) = iVar1 + 0x50;
    *(int *)(iVar1 + 0xc4) = iVar1 + 0xd0;
  }

  return;
}

void FUN_overlay0__800314dc
               (byte *param_1,undefined *param_2,undefined *param_3,int param_4,byte *param_5,
               undefined *param_6,undefined *param_7,int param_8,int param_9)

{

  byte *pbVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;

  uVar7 = 0;
  *param_1 = 0;
  *param_2 = 0;
  *param_5 = 0;
  *param_6 = 0;
  iVar5 = 0;
  *param_3 = *param_7;
  *(undefined2 *)(param_9 + 0x68) = 0;

  pbVar1 = param_1;
  if (0 < param_4) {
    do {

      iVar6 = iVar5 + 1;
      iVar4 = param_9 + (param_4 - iVar6) * 2;

      *(short *)(iVar4 + 0x38) = (short)((int)((uint)*pbVar1 * -0x1000) / 0xff);

      uVar3 = ((uint)(byte)param_2[iVar5] << 0xc) / 200;
      *(short *)(iVar4 + 0x50) = (short)uVar3;

      uVar3 = (int)(uVar3 * 0x10000) >> 0x10;
      if (uVar7 < uVar3) {
        *(undefined2 *)(param_9 + 0x68) = *(undefined2 *)(iVar4 + 0x38);
        uVar7 = uVar3;
      }

      *(short *)(iVar4 + 0x78) = (short)(((uint)(byte)param_3[iVar5] << 0xc) / 200);

      pbVar1 = param_1 + iVar6;
      iVar5 = iVar6;
    } while (iVar6 < param_4);
  }

  uVar7 = 0;
  *(undefined2 *)(param_9 + 0x6a) = 0;
  iVar5 = 0;
  pbVar1 = param_5;

  if (0 < param_8) {
    do {

      iVar4 = param_9 + (param_4 + iVar5 + -1) * 2;

      *(short *)(iVar4 + 0x38) = (short)(((uint)*pbVar1 * 0x1000) / 0xff);

      uVar3 = ((uint)(byte)param_6[iVar5] << 0xc) / 200;
      *(short *)(iVar4 + 0x50) = (short)uVar3;

      uVar3 = (int)(uVar3 * 0x10000) >> 0x10;
      if (uVar7 < uVar3) {
        *(undefined2 *)(param_9 + 0x6a) = *(undefined2 *)(iVar4 + 0x38);
        uVar7 = uVar3;
      }

      pbVar1 = param_7 + iVar5;
      iVar5 = iVar5 + 1;
      *(short *)(iVar4 + 0x78) = (short)(((uint)*pbVar1 << 0xc) / 200);
      pbVar1 = param_5 + iVar5;
    } while (iVar5 < param_8);
  }

  sVar2 = (short)param_4 + (short)param_8 + -1;
  *(int *)(param_9 + 0x34) = param_9 + 0x50;
  *(short *)(param_9 + 0x2c) = sVar2;
  *(int *)(param_9 + 0x30) = param_9 + 0x38;
  *(short *)(param_9 + 0x6c) = sVar2;
  *(int *)(param_9 + 0x70) = param_9 + 0x38;
  *(int *)(param_9 + 0x74) = param_9 + 0x78;

  return;
}

void FUN_overlay0__800316f4(undefined *param_1,undefined *param_2,uint param_3,ushort *param_4)

{

  byte *pbVar1;
  ushort *puVar2;
  int iVar3;

  iVar3 = 0;
  *param_1 = 0;
  *param_2 = 0;
  puVar2 = param_4;

  if ((param_3 & 0xff) != 0) {
    do {

      puVar2[6] = (ushort)(((uint)(byte)param_1[iVar3] * 0x400) / 0xff);

      pbVar1 = param_2 + iVar3;
      iVar3 = iVar3 + 1;

      puVar2[0xe] = (ushort)(((uint)*pbVar1 << 0xc) / 200);

      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)(param_3 & 0xff));
  }

  *param_4 = (ushort)param_3 & 0xff;
  *(ushort **)(param_4 + 2) = param_4 + 6;
  *(ushort **)(param_4 + 4) = param_4 + 0xe;

  return;
}

void FUN_overlay0__80031794
               (undefined *param_1,int param_2,uint param_3,undefined *param_4,int param_5,
               byte param_6,short param_7,undefined4 param_8,int param_9)

{

  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;

  *param_1 = 0;
  iVar4 = param_9;

  for (iVar3 = 0; iVar3 < (int)(param_3 & 0xff); iVar3 = iVar3 + 1) {

    *(int *)(iVar4 + 0x9c) =
         (int)param_7 * ((int)((uint)(byte)param_1[iVar3] * 0x310010) >> 0xc) >> 0xc;

    iVar1 = FUN_80075a5c(param_8, param_7);
    *(int *)(iVar4 + 0xac) = (int)(iVar1 * (uint)*(byte *)(param_2 + iVar3)) / 200;

    iVar4 = iVar4 + 4;
  }

  *(ushort *)(param_9 + 0x90) = (ushort)param_3 & 0xff;
  *(int *)(param_9 + 0x94) = param_9 + 0x9c;
  *(int *)(param_9 + 0x98) = param_9 + 0xac;

  *param_4 = 0;
  iVar3 = 0;
  iVar4 = param_9;

  if (param_6 != 0) {
    do {

      *(short *)(iVar4 + 200) = (short)(((uint)(byte)param_4[iVar3] * 0xe3) / 0xff);

      pbVar2 = (byte *)(param_5 + iVar3);
      iVar3 = iVar3 + 1;

      *(short *)(iVar4 + 0xd0) = (short)(((uint)*pbVar2 << 0xc) / 200);

      iVar4 = iVar4 + 2;
    } while (iVar3 < (int)(uint)param_6);
  }

  *(ushort *)(param_9 + 0xbc) = (ushort)param_6;
  *(int *)(param_9 + 0xc0) = param_9 + 200;
  *(int *)(param_9 + 0xc4) = param_9 + 0xd0;

  return;
}

undefined4 FUN_overlay0__800319a8(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{

  int *piVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  short sVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  uint local_58 [14];

  FUN_overlay0__80030d10(param_1,param_5);
  if (4 < *(byte *)(param_2 + 0x8a)) {
    *(undefined *)(param_2 + 0x8a) = 0;
  }

  uVar18 = (uint)*(byte *)(param_2 + 0x12);
  *param_1 = ((int)*(short *)(param_2 + 8) << 0xc) / 1000;
  param_1[1] = ((int)*(short *)(param_2 + 10) << 0xc) / 1000;
  iVar14 = ((int)*(short *)(param_2 + 0x10) << 0xc) / 1000;
  sVar10 = (short)iVar14;
  *(short *)(param_1 + 4) = sVar10;

  sVar6 = (short)((uVar18 << 0xc) / 100);
  *(short *)((int)param_1 + 0x16) = sVar6;
  sVar4 = (short)((int)((iVar14 * 0x10000 >> 0x10) * uVar18) / 100);
  *(short *)(param_1 + 3) = sVar10 - sVar4;
  *(short *)((int)param_1 + 0xe) = sVar4;
  *(short *)(param_1 + 5) = 0x1000 - sVar6;

  sVar4 = (short)(((int)*(short *)((int)param_1 + 0xe) - (int)*(short *)(param_1 + 3)) / 2);
  *(short *)((int)param_1 + 0x2e) = sVar4;
  *param_1 = *param_1 - (int)sVar4;
  param_1[1] = param_1[1] + (int)*(short *)((int)param_1 + 0x2e);

  *(short *)(param_1 + 2) = (short)(((int)*(short *)(param_2 + 0xc) << 0xc) / 1000);
  *(short *)(param_1 + 6) = (short)(((int)*(short *)(param_2 + 0x14) << 0xc) / 2000);
  iVar14 = ((int)*(short *)(param_2 + 0x16) << 0xc) / 2000;
  *(short *)((int)param_1 + 0x1a) = (short)iVar14;

  *(short *)((int)param_1 + 0x12) =
       (short)((int)((int)*(short *)(param_1 + 6) * uVar18) / 0x32) +
       (short)((int)((iVar14 * 0x10000 >> 0x10) * (100 - uVar18)) / 0x32);

  sVar4 = *(short *)(param_2 + 0xe);
  *param_1 = *param_1 + -0x80;
  *(short *)((int)param_1 + 10) = (short)(((int)sVar4 << 0xc) / 1000);
  param_1[1] = param_1[1] + -0x80;

  *(short *)(param_1 + 2) =
       *(short *)(param_1 + 2) -
       (short)((uint)(((int)*(short *)(param_1 + 2) / 0x14) * 0x10000) >> 0x10);

  FUN_80075328(param_2,param_1 + 0x1f,param_4);
  FUN_overlay0__800347c4(param_2,param_1 + 0xdc,param_1 + 0x1f,param_4);
  uVar3 = FUN_overlay0__80030d18(*(undefined *)(param_1 + 0xdc));
  *(undefined *)((int)param_1 + 0x1d) = uVar3;

  FUN_overlay0__800314dc
            (param_2 + 0xb1,param_2 + 0xb7,param_2 + 0xbd,*(undefined *)(param_2 + 0xb0),
             param_2 + 0xc4,param_2 + 0xca,param_2 + 0xd0,*(undefined *)(param_2 + 0xc3),
             param_1 + 0x65);

  FUN_overlay0__800314dc
            (param_2 + 0xd7,param_2 + 0xdd,param_2 + 0xe3,*(undefined *)(param_2 + 0xd6),
             param_2 + 0xea,param_2 + 0xf0,param_2 + 0xf6,*(undefined *)(param_2 + 0xe9),
             param_1 + 0x9b);

  FUN_overlay0__800316f4
            (param_2 + 0x8f,param_2 + 0x97,*(undefined *)(param_2 + 0x8e),param_1 + 0x65);

  FUN_overlay0__800316f4
            (param_2 + 0xa0,param_2 + 0xa8,*(undefined *)(param_2 + 0x9f),param_1 + 0x9b);

  sVar4 = FUN_overlay0__8003b598(param_1);
  *(short *)(param_1 + 0x18) = sVar4;
  uVar18 = 0;
  piVar16 = param_1;
  if (0x155 < sVar4) {
    *(undefined2 *)(param_1 + 0x18) = 0x155;
  }

  for (; uVar18 < 8; uVar18 = uVar18 + 1) {
    uVar13 = (uint)*(byte *)(param_2 + uVar18 + 0x192);
    if (uVar13 == 0) {

      *(undefined2 *)(piVar16 + 0xd2) = 0x100;
      *(undefined2 *)(piVar16 + 0xd6) = 0x100;
    }
    else {

      *(short *)(piVar16 + 0xd2) = (short)((uVar13 << 8) / 100);
      *(short *)(piVar16 + 0xd6) = (short)(0x6400 / uVar13);
    }
    piVar16 = (int *)((int)piVar16 + 2);
  }

  iVar14 = 0;
  local_58[0] = (uint)*(byte *)(param_2 + 0x86);
  puVar11 = local_58;
  local_58[1] = (uint)*(byte *)(param_2 + 0x87);

  do {
    if (*puVar11 == 0) {
      *puVar11 = 100;
    }
    iVar14 = iVar14 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar14 < 2);

  puVar11 = local_58;
  piVar16 = param_1;
  for (iVar14 = 0; iVar15 = 0, iVar14 < 2; iVar14 = iVar14 + 1) {
    iVar15 = *puVar11 - 0xaf;
    if ((int)*puVar11 < 0xaf) {

      iVar12 = (iVar15 * 0x1000) / 100 + (iVar15 * 0x1000 >> 0x1f);
    }
    else {

      iVar12 = (iVar15 * 0x1000) / 0x32 + (iVar15 * 0x1000 >> 0x1f);
    }
    iVar12 = (iVar12 - (iVar15 * 0x1000 >> 0x1f)) + 0x1000;
    iVar15 = iVar12 * 8;
    if (iVar12 < 0x200) {

      iVar12 = 0x200;
      iVar15 = 0x1000;
    }
    puVar11 = puVar11 + 1;
    *(short *)(piVar16 + 0x112) = (short)(iVar15 / 100);
    *(short *)(piVar16 + 0x113) = (short)((iVar15 * 4 + iVar12 * 3) / 100);
    piVar16 = (int *)((int)piVar16 + 2);
  }

  puVar11 = local_58;
  do {
    iVar15 = iVar15 + 1;
    *puVar11 = (int)(*puVar11 << 0xc) / 100;
    puVar11 = puVar11 + 1;
  } while (iVar15 < 2);

  iVar14 = 0;
  puVar17 = local_58;
  local_58[2] = (uint)*(byte *)(param_2 + 0x17e);
  puVar11 = local_58 + 2;
  local_58[3] = (uint)*(byte *)(param_2 + 0x17f);

  do {
    if (*puVar11 == 0) {
      *puVar11 = 100;
    }
    uVar18 = *puVar11;
    puVar11 = puVar11 + 1;
    iVar14 = iVar14 + 1;
    *puVar17 = (int)(uVar18 * *puVar17) / 100;
    puVar17 = puVar17 + 1;
  } while (iVar14 < 2);

  if (param_3 == 2) {
    iVar14 = 0;
    puVar17 = local_58;
    local_58[2] = (uint)*(byte *)((int)&DAT_801c98a4 + (uint)*(byte *)((int)param_1 + 0x1d));
    puVar11 = local_58 + 2;
    local_58[3] = (uint)*(byte *)((int)&DAT_801c98a8 + (uint)*(byte *)((int)param_1 + 0x1d));

    do {
      if (*puVar11 == 0) {
        *puVar11 = 100;
      }
      uVar18 = *puVar11;
      puVar11 = puVar11 + 1;
      iVar14 = iVar14 + 1;
      *puVar17 = (int)(uVar18 * *puVar17) / 100;
      puVar17 = puVar17 + 1;
    } while (iVar14 < 2);
  }

  uVar7 = FUN_80075ef8((int)(short)DAT_801c86b4[(uint)*(byte *)((int)param_1 + 0x1d) * 0x14],
                       local_58[0],
                       0x1000 - (short)DAT_801c86b4[(uint)*(byte *)((int)param_1 + 0x1d) * 0x14],
                       local_58[1],0);
  uVar7 = FUN_80075a5c(uVar7,0x9ccd);
  uVar5 = FUN_80075e90(0x1000,uVar7,0);
  *(undefined2 *)((int)param_1 + 0x36) = uVar5;

  sVar4 = FUN_overlay0__8003d848(param_1 + 0x80,0);
  sVar6 = FUN_overlay0__8003d848(param_1 + 0xb6,0);
  iVar14 = FUN_80075a5c(((int)sVar4 + (int)sVar6) / 2,uVar7);
  param_1[0xc] = iVar14;
  uVar5 = FUN_80075e90(0x1000,iVar14,0);
  *(undefined2 *)(param_1 + 0xd) = uVar5;

  FUN_overlay0__80031794
            (param_2 + 0x11b,param_2 + 0x11f,*(undefined *)(param_2 + 0x11a),param_2 + 0x12d,
             param_2 + 0x131,*(undefined *)(param_2 + 300),(int)*(short *)(param_1 + 0xfb),
             local_58[0],param_1 + 0x65);

  FUN_overlay0__80031794
            (param_2 + 0x124,param_2 + 0x128,*(undefined *)(param_2 + 0x123),param_2 + 0x136,
             param_2 + 0x13a,*(undefined *)(param_2 + 0x135),(int)*(short *)((int)param_1 + 0x3ee),
             local_58[1],param_1 + 0x9b);

  uVar7 = FUN_80075a5c((int)*(short *)(param_1 + 2),(int)*(short *)((int)param_1 + 10));
  uVar8 = FUN_80075a5c(DAT_overlay0__80046ef0 / 2,((uint)*(byte *)(param_2 + 0x62) << 0xc) / 100);
  iVar14 = FUN_80075a5c(uVar7,uVar8);
  param_1[0x10f] = iVar14;
  uVar8 = FUN_80075a5c(DAT_overlay0__80046ef0 / 2,((uint)*(byte *)(param_2 + 0x88) << 0xc) / 100);
  iVar14 = FUN_80075a5c(uVar7,uVar8);
  param_1[0x110] = iVar14;
  uVar8 = FUN_80075a5c(DAT_overlay0__80046ef0 / 2,((uint)*(byte *)(param_2 + 0x89) << 0xc) / 100);
  iVar14 = FUN_80075a5c(uVar7,uVar8);
  param_1[0x111] = iVar14;
  param_1[0x10f] = param_1[0x10f] + (param_1[0x110] + iVar14) / 10;

  param_1[0x105] = (int)((uint)*(byte *)(param_2 + 0x60) * 0x188008) >> 0xc;
  param_1[0x106] = (int)((uint)*(byte *)(param_2 + 0x61) * 0x188008) >> 0xc;
  param_1[0x107] = (int)((uint)*(byte *)(param_2 + 99) * 0x188008) >> 0xc;

  if ((*(char *)(param_2 + 0x60) != '\0') && (*(char *)(param_2 + 0x61) != '\0')) {
    iVar14 = 0;
    piVar16 = param_1;
    piVar19 = param_1;
    do {
      piVar1 = piVar19 + 0x105;
      piVar19 = piVar19 + 1;
      iVar14 = iVar14 + 1;
      uVar5 = FUN_80075e90((int)*(short *)(piVar16 + 0xf9),*piVar1,0);
      *(undefined2 *)(piVar16 + 0x10b) = uVar5;
      piVar16 = (int *)((int)piVar16 + 2);
    } while (iVar14 < 2);
  }

  piVar16 = param_1;
  for (iVar14 = 0; iVar14 < 2; iVar14 = iVar14 + 1) {
    if (iVar14 == 0) {
      bVar2 = *(byte *)(param_2 + 0x2e);
    }
    else {
      bVar2 = *(byte *)(param_2 + 0x2f);
    }
    piVar16[0x109] = ((uint)bVar2 << 0xc) / 10;
    piVar16 = piVar16 + 1;
  }

  *(short *)(param_1 + 0x116) = (short)(((uint)*(byte *)(param_2 + 0x1a5) << 0xc) / 100);
  *(short *)((int)param_1 + 0x45a) = (short)(((uint)*(byte *)(param_2 + 0x1a6) << 0xc) / 100);
  *(short *)(param_1 + 0x115) = (short)(((uint)*(byte *)(param_2 + 0x1a2) << 0xc) / 10);

  *(short *)((int)param_1 + 0x456) = (short)(((uint)*(byte *)(param_2 + 0x1a3) << 0xc) / 100);
  param_1[0x114] = ((uint)*(byte *)(param_2 + 0x1a4) << 0xc) / 10;

  *(short *)(param_1 + 0xe) =
       (short)((ulonglong)((longlong)(int)((uint)*(byte *)(param_2 + 0x5e) * 0x1000) * 0xb60b60b7)
              >> 0x28);
  *(short *)((int)param_1 + 0x3a) =
       (short)((ulonglong)((longlong)(int)((uint)*(byte *)(param_2 + 0x5f) * 0x1000) * 0xb60b60b7)
              >> 0x28);
  *(short *)((int)param_1 + 0x62) =
       (short)((ulonglong)((longlong)(int)((uint)*(byte *)(param_2 + 0x118) * 0xa000) * 0xb60b60b7)
              >> 0x28);

  iVar14 = FUN_80060e94(DAT_800af230);
  if ((*(ushort *)(iVar14 + 8) & 4) != 0) {
    *(undefined2 *)((int)param_1 + 0x62) = 0x5c7;
  }

  iVar14 = 0;
  bVar2 = *(byte *)(param_2 + 0x44);
  piVar16 = param_1;
  if (bVar2 != 0) {
    do {
      *(ushort *)(piVar16 + 0x12) = (ushort)*(byte *)(param_2 + 0x45 + iVar14) << 7;
      pbVar9 = (byte *)(param_2 + 0x4b + iVar14);
      iVar14 = iVar14 + 1;
      *(short *)(piVar16 + 0x15) = (short)(((uint)*pbVar9 * 0x1000) / 0x708);
      piVar16 = (int *)((int)piVar16 + 2);
    } while (iVar14 < (int)(uint)bVar2);
  }

  sVar4 = *(short *)(param_1 + 6);
  *(ushort *)(param_1 + 0xf) = (ushort)bVar2;
  param_1[0x10] = (int)(param_1 + 0x12);
  param_1[0x11] = (int)(param_1 + 0x15);

  iVar15 = (int)*(short *)(param_1 + 3) + (int)*(short *)((int)param_1 + 0xe);
  iVar14 = FUN_80081af0(iVar15,iVar15 - sVar4);
  *(short *)(param_1 + 0x19) = (short)(iVar14 << 3);
  iVar14 = FUN_80081af0(iVar15,iVar15 + sVar4);
  *(short *)((int)param_1 + 0x66) = (short)(iVar14 << 3);

  *(short *)(param_1 + 0xda) =
       (short)((int)-(((uint)*(byte *)(param_2 + 0x6c) * 0x1000) / 0x168) / 10);
  uVar18 = 0;
  *(short *)((int)param_1 + 0x36a) =
       (short)((int)-(((uint)*(byte *)(param_2 + 0x6d) * 0x1000) / 0x168) / 10);

  piVar16 = param_1;
  do {
    iVar14 = param_2 + uVar18;
    uVar18 = uVar18 + 1;
    *(ushort *)(piVar16 + 0xdb) = *(byte *)(iVar14 + 0x18e) - 0x80;
    piVar16 = (int *)((int)piVar16 + 2);
  } while (uVar18 < 2);

  if (*(byte *)(param_2 + 0x57) != 0) {
    uVar7 = FUN_overlay0__80030c2c((uint)*(byte *)(param_2 + 0x57) * 400);
    iVar14 = FUN_80075e90(0x28c,uVar7,7);
    param_1[0x1a] = iVar14;
  }

  if (*(byte *)(param_2 + 0x58) != 0) {
    iVar15 = (uint)*(byte *)(param_2 + 0x58) * 400;
    iVar14 = FUN_80075e90((int)*(short *)(param_1 + 3),iVar15,4);
    param_1[0x1b] = iVar14;
    iVar14 = FUN_80075e90((int)*(short *)((int)param_1 + 0xe),iVar15,4);
    param_1[0x1c] = iVar14;
  }

  if (*(byte *)(param_2 + 0x59) != 0) {
    uVar7 = FUN_overlay0__80030c44((uint)*(byte *)(param_2 + 0x59) * 400);
    iVar14 = FUN_80075e90((int)*(short *)(param_1 + 6),uVar7,4);
    param_1[0x1d] = iVar14;
    iVar14 = FUN_80075e90((int)*(short *)((int)param_1 + 0x1a),uVar7,4);
    param_1[0x1e] = iVar14;
  }

  FUN_overlay0__80030f94(param_1 + 0x4b,param_2 + 0x6e,*(undefined *)(param_2 + 0x18c),param_4);
  FUN_overlay0__80030f94(param_1 + 0x58,param_2 + 0x7a,*(undefined *)(param_2 + 0x18d),param_4);

  *(short *)(param_1 + 9) = (short)(((uint)*(byte *)(param_2 + 0x116) << 0xc) / 1000);
  uVar18 = ((uint)*(byte *)(param_2 + 0x117) << 0xc) / 1000;
  *(short *)((int)param_1 + 0x26) = (short)uVar18;

  iVar15 = ((int)*(short *)(param_1 + 9) * (int)*(short *)((int)param_1 + 0x16) >> 0xc) +
           (((int)(uVar18 * 0x10000) >> 0x10) * (int)*(short *)(param_1 + 5) >> 0xc);
  iVar14 = iVar15 * 0x10000 >> 0x10;
  sVar4 = (short)iVar15;
  *(short *)((int)param_1 + 0x22) = sVar4;
  if (0x333 < iVar14) {
    iVar14 = 0x333;
  }

  iVar14 = (int)(((((iVar14 + -0xe1) * 0xe6) / 0x252 + 0x32U & 0xffff) - 0x96) * 0x1000) / 1000;
  sVar6 = (short)iVar14 + sVar4;
  if (iVar14 * 0x10000 < 0) {
    sVar6 = sVar4;
  }

  iVar14 = FUN_80075e90((int)sVar6,(int)*(short *)((int)param_1 + 0x12),0);
  *(short *)((int)param_1 + 0x1e) = (short)(iVar14 / 2);
  iVar14 = FUN_80075e90((int)sVar6,(int)*(short *)(param_1 + 4),0);
  *(short *)(param_1 + 8) = (short)(iVar14 / 2);

  sVar4 = FUN_overlay0__80030ba4((int)*(short *)(param_2 + 0x5a));
  *(short *)(param_1 + 10) = (short)((int)sVar4 << 2);
  uVar5 = FUN_80075e90(0x1000,((int)sVar4 << 0x12) >> 0x10,0);
  *(undefined2 *)((int)param_1 + 0x2a) = uVar5;
  iVar14 = FUN_80075a5c((int)*(short *)(param_1 + 10),0x9ccd);
  param_1[0x10c] = iVar14;

  iVar14 = (int)*(short *)(param_1 + 10) +
           ((int)*(short *)(param_1 + 0x57) + (int)*(short *)(param_1 + 100)) * -2;

  if (0 < iVar14) {
    uVar5 = FUN_80075e90(0x1000,iVar14,0);
    *(undefined2 *)(param_1 + 0xb) = uVar5;
    uVar7 = FUN_80075a5c(iVar14,0x9ccd);
    iVar15 = FUN_80075a5c(uVar7,(int)*(short *)((int)param_1 + 0x16));
    param_1[0x10d] = iVar15;
    uVar7 = FUN_80075a5c(iVar14,0x9ccd);
    iVar15 = FUN_80075a5c(uVar7,(int)*(short *)(param_1 + 5));
    param_1[0x10e] = iVar15;
    iVar15 = FUN_80075e90(iVar14,(int)*(short *)(param_1 + 10),0);
    *(short *)((int)param_1 + 0x1e) = (short)(iVar14 * *(short *)((int)param_1 + 0x1e) >> 0xc);
    *(short *)(param_1 + 8) = (short)(iVar15 * *(short *)(param_1 + 8) >> 0xc);
  }

  iVar15 = 0;
  iVar14 = 300;
  do {
    FUN_overlay0__800312fc(param_1,(int)param_1 + iVar14,param_2,iVar15);
    iVar15 = iVar15 + 1;
    iVar14 = iVar14 + 0x34;
  } while (iVar15 < 2);

  FUN_overlay0__80030c5c(param_1);

  return 0;
}

void FUN_overlay0__80032a1c(int param_1)

{

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0x460;

  for (iVar5 = 0; iVar2 = DAT_overlay0__80046f48, iVar3 = param_1 + iVar4, iVar5 < 4;
      iVar5 = iVar5 + 1) {

    *(undefined2 *)(iVar3 + 0x3a) = 0;
    *(undefined2 *)(iVar3 + 0x3c) = 0;

    if (iVar2 == 0) {

      *(undefined4 *)(iVar3 + 100) = 0;
      *(undefined *)(iVar3 + 0x3f) = 0;
      *(undefined2 *)(iVar3 + 0x38) = 0x1000;
    }
    else {

      bVar1 = DAT_overlay0__80046f54 < 0;
      *(int *)(iVar3 + 100) = DAT_overlay0__80046f54;
      if (bVar1) {

        *(undefined *)(iVar3 + 0x3f) = 0xc1;
      }
      else {

        *(undefined *)(iVar3 + 0x3f) = 0;
      }
      *(short *)(iVar3 + 0x38) = 0x1000 - (short)DAT_overlay0__80046f58;
    }

    iVar4 = iVar4 + 0x68;
    *(undefined *)(iVar3 + 0x3e) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
  }

  return;
}

void FUN_overlay0__80032aac(int param_1)

{

  int currentWheelPtr;
  int wheelOffset;
  int wheelIndex;

  wheelOffset = 0x460;

  for (wheelIndex = 0; currentWheelPtr = param_1 + wheelOffset, wheelIndex < 4; wheelIndex = wheelIndex + 1) {

    wheelOffset = wheelOffset + 0x68;

    *(undefined *)(currentWheelPtr + 0x1c) = 0;
    *(undefined *)(currentWheelPtr + 0x1e) = 0xff;
    *(undefined *)(currentWheelPtr + 0x1d) = 0;
    *(undefined2 *)(currentWheelPtr + 0x20) = 0;
    *(undefined2 *)(currentWheelPtr + 0x40) = 0;
    *(undefined2 *)(currentWheelPtr + 0x44) = 0;
    *(undefined2 *)(currentWheelPtr + 0x46) = 0;
    *(undefined2 *)(currentWheelPtr + 0x42) = 0;
    *(undefined2 *)(currentWheelPtr + 0x12) = 0;
    *(undefined4 *)(currentWheelPtr + 0x48) = 0;
    *(undefined4 *)(currentWheelPtr + 0x4c) = 0;
    *(undefined *)(currentWheelPtr + 0x1f) = 0;
    *(undefined2 *)(currentWheelPtr + 0xc) = 0;
  }

  return;
}

undefined4
FUN_overlay0__80032b0c
          (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{

  byte tireGripFlag;
  undefined2 rotationAngle;
  int wheelBaseCalculation;
  undefined4 tireModelResult;
  int physicsLoopCounter;
  int tireForceCalculation;
  int *wheelDataPtr;
  int wheelIndex;
  int wheelStructOffset;
  int vehiclePosX_scaled;
  int wheelbaseResult_scaled;
  int vehiclePosY_scaled;
  undefined tireConfigData1;
  undefined tireConfigData2;
  byte tireModelFlags;
  undefined2 suspensionSetup;
  int wheelPosX;
  int wheelHeight;
  int wheelPosY;
  int terrainHeight;
  int activeWheelCounter;
  int iVar3;
  undefined4 uVar2;
  int local_58;
  int local_54;
  int local_50;
  undefined4 uVar4;
  int iVar8;
  int *piVar7;
  int iVar9;
  int local_40;
  int local_3c;
  int local_38;
  undefined2 local_44;
  undefined local_48;
  int local_34;
  undefined local_47;
  undefined local_46;
  int local_30;
  byte bVar1;
  int iVar5;
  int iVar6;

  *(undefined4 *)(param_1 + 0x600) = param_2;
  wheelBaseCalculation = FUN_overlay0__80028900(&DAT_800a9500,param_3,param_4,0x64000,param_1 + 0x600);
  activeWheelCounter = 0;
  wheelStructOffset = 0x460;

  *(int *)(param_1 + 0x65c) = param_3;
  *(int *)(param_1 + 0x660) = param_4;
  *(undefined2 *)(param_1 + 0x644) = 0;
  *(undefined2 *)(param_1 + 0x646) = 0;
  *(int *)(param_1 + 0x664) = iVar3 + *(short *)(param_1 + 0x22);

  uVar2 = FUN_80081af0(-param_5,param_6);
  local_58 = param_3 << 4;
  *(undefined2 *)(param_1 + 0x648) = uVar2;
  local_54 = iVar3 << 4;
  local_50 = param_4 << 4;

  uVar4 = FUN_overlay0__80028c6c(&DAT_800a9500,*(undefined4 *)(param_1 + 0x600),&local_58);
  *(undefined4 *)(param_1 + 0x604) = uVar4;

  FUN_overlay0__80044ea4
            (param_1 + 0x668,param_1 + 0x670,param_1 + 0x678,(int)*(short *)(param_1 + 0x644),
             (int)*(short *)(param_1 + 0x646),(int)*(short *)(param_1 + 0x648));
  FUN_overlay0__8004335c(param_1);

  for (iVar8 = 0; piVar7 = (int *)(param_1 + iVar9), iVar8 < 4; iVar8 = iVar8 + 1) {
    local_40 = (*(int *)(param_1 + 0x65c) + (int)*(short *)(piVar7 + 9)) * 0x10;
    local_3c = (*(int *)(param_1 + 0x664) + (int)*(short *)(piVar7 + 10)) * 0x10;

    local_38 = (*(int *)(param_1 + 0x660) + (int)*(short *)((int)piVar7 + 0x26)) * 0x10;
    local_44 = *(undefined2 *)(param_1 + 0x600);
    FUN_overlay0__80028830(&DAT_800a9500,&local_48);

    if (local_34 == 0x7fffffff) {

      *(undefined *)(piVar7 + 5) = 0;
      *(undefined *)((int)piVar7 + 0x15) = 0;
      *piVar7 = iVar3 + *(short *)(piVar7 + 10);
      piVar7[1] = (iVar3 + *(short *)(piVar7 + 10)) * 0x10;
    }
    else {

      *piVar7 = local_34 >> 4;
      piVar7[1] = local_34;
      *(undefined *)(piVar7 + 5) = local_48;
      *(undefined *)((int)piVar7 + 0x15) = local_47;
      local_30 = local_30 + (local_46 & 2);
    }
    iVar9 = iVar9 + 0x68;
  }

  if ((local_30 == 0) || (iVar3 = FUN_overlay0__80041ab8(), iVar3 == 0)) {

    bVar1 = *(byte *)(param_1 + 0x78d) & 0xef;
  }
  else {

    bVar1 = *(byte *)(param_1 + 0x78d) | 0x10;
  }
  *(byte *)(param_1 + 0x78d) = bVar1;

  iVar3 = 0x460;
  for (iVar8 = 0; iVar9 = param_1 + iVar3, iVar8 < 4; iVar8 = iVar8 + 1) {
    iVar3 = iVar3 + 0x68;
    iVar5 = param_1 + (iVar8 >> 1) * 0x34;
    iVar6 = *(int *)(param_1 + (iVar8 >> 1) * 4 + 0x434) / 2 + (int)*(short *)(iVar5 + 0x15e);
    *(int *)(iVar9 + 8) = iVar6;
    *(int *)(iVar9 + 0x34) = iVar6;
    *(undefined2 *)(iVar9 + 0x10) = *(undefined2 *)(iVar5 + 0x136);
  }

  *(undefined *)(param_1 + 0x6b3) = 1;
  FUN_overlay0__80041ae8(param_1);
  FUN_overlay0__80041c78(param_1);
  FUN_overlay0__8003e7ec(param_1);

  *(undefined2 *)(param_1 + 0x644) = *(undefined2 *)(param_1 + 0x6f4);
  *(undefined2 *)(param_1 + 0x646) = *(undefined2 *)(param_1 + 0x6f6);

  iVar3 = FUN_80081af0((int)*(short *)(param_1 + 0x24) - (int)*(short *)(param_1 + 0x26),
                       (int)*(short *)(param_1 + 0x10));
  iVar3 = (uint)*(ushort *)(param_1 + 0x644) + iVar3;
  *(short *)(param_1 + 0x644) = (short)iVar3;

  FUN_overlay0__80044ea4
            (param_1 + 0x668,param_1 + 0x670,param_1 + 0x678,iVar3 * 0x10000 >> 0x10,
             (int)*(short *)(param_1 + 0x646),(int)*(short *)(param_1 + 0x648));
  FUN_overlay0__8004335c(param_1);

  return 0;
}

void FUN_overlay0__80032e44(int param_1)

{

  *(undefined2 *)(param_1 + 0x752) = 0;
  *(undefined2 *)(param_1 + 0x74a) = 0;
  *(undefined2 *)(param_1 + 0x73a) = 0;
  *(undefined2 *)(param_1 + 0x74e) = 0;
  *(undefined2 *)(param_1 + 0x73c) = 0;

  *(undefined2 *)(param_1 + 0x748) = *(undefined2 *)(param_1 + 0x648);
  *(undefined2 *)(param_1 + 0x74c) = *(undefined2 *)(param_1 + 0x644);

  return;
}

void FUN_overlay0__80032e6c(int param_1)

{

  int currentPhysicsPtr;
  uint resetLoopCounter;
  int physicsStructOffset;
  undefined4 uVar2;
  int iVar3;

  physicsStructOffset = 0x460;
  for (resetLoopCounter = 0; currentPhysicsPtr = param_1 + physicsStructOffset, resetLoopCounter < 4; resetLoopCounter = resetLoopCounter + 1) {
    physicsStructOffset = physicsStructOffset + 0x68;

    *(undefined2 *)(currentPhysicsPtr + 0x50) = 0;
    *(undefined2 *)(currentPhysicsPtr + 0x52) = 0;
    *(undefined4 *)(currentPhysicsPtr + 0x54) = 0;
    *(undefined4 *)(currentPhysicsPtr + 0x58) = 0;
    *(undefined4 *)(currentPhysicsPtr + 0x5c) = 0;
    *(undefined4 *)(currentPhysicsPtr + 0x2c) = 0;
    *(undefined4 *)(currentPhysicsPtr + 0x30) = 0;
    *(undefined4 *)(currentPhysicsPtr + 0x18) = 0;
    *(undefined2 *)(currentPhysicsPtr + 0x16) = 0;
    *(undefined *)(currentPhysicsPtr + 99) = 0;
    *(undefined2 *)(currentPhysicsPtr + 0x2a) = 0x1000;
  }

  uVar2 = 0;
  iVar3 = param_1;
  do {
    *(undefined *)(param_1 + uVar2 + 0x61a) = 0;
    if (*(byte *)(param_1 + uVar2 + 0x37a) - 3 < 2) {
      *(undefined *)(param_1 + uVar2 + 0x61a) = 1;
    }
    *(undefined4 *)(iVar3 + 0x634) = 0;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar2 < 2);

  *(undefined *)(param_1 + 0x63c) = 0;
  if (*(byte *)(param_1 + 0x370) - 4 < 2) {
    *(undefined *)(param_1 + 0x63c) = 1;
  }

  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x766) = 0x1000;
  *(undefined2 *)(param_1 + 0x60c) = 0;
  *(undefined2 *)(param_1 + 0x70a) = 0;
  *(undefined2 *)(param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined2 *)(param_1 + 0x60e) = 0;
  *(undefined2 *)(param_1 + 0x76a) = 0;
  *(undefined2 *)(param_1 + 0x774) = 0;
  *(undefined2 *)(param_1 + 0x776) = 0;

  iVar3 = param_1;
  do {
    *(undefined *)(iVar3 + 0x76c) = 0;
    uVar2 = uVar2 + 1;
    iVar3 = param_1 + uVar2;
  } while (uVar2 < 8);

  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined *)(param_1 + 0x768) = 0;
  *(undefined2 *)(param_1 + 0x610) = 0;
  *(undefined2 *)(param_1 + 0x708) = 0;
  *(undefined2 *)(param_1 + 0x612) = 0;

  iVar3 = param_1;
  do {
    *(undefined2 *)(iVar3 + 0x4c0) = 0;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x68;
  } while (uVar2 < 4);

  *(undefined2 *)(param_1 + 0x744) = 0xffff;
  *(undefined *)(param_1 + 0x618) = 1;
  *(undefined *)(param_1 + 0x6fd) = 0;
  *(undefined *)(param_1 + 0x784) = 0;
  *(undefined *)(param_1 + 0x769) = 0;
  *(undefined2 *)(param_1 + 0x742) = 0;
  *(undefined2 *)(param_1 + 0x61e) = 0;
  *(undefined2 *)(param_1 + 0x622) = 0;
  *(undefined2 *)(param_1 + 0x620) = 0;
  *(undefined2 *)(param_1 + 0x746) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x714) = 0;
  *(undefined *)(param_1 + 0x61d) = 0;
  *(undefined *)(param_1 + 0x6fa) = 0;
  *(undefined *)(param_1 + 0x6fb) = 0;
  *(undefined2 *)(param_1 + 0x6ae) = 0;
  *(undefined2 *)(param_1 + 0x6f8) = 0;
  *(undefined2 *)(param_1 + 0x6ac) = 0;
  *(undefined *)(param_1 + 0x785) = 0;
  *(undefined2 *)(param_1 + 0x73e) = 0;
  *(undefined2 *)(param_1 + 0x740) = 0;
  *(undefined2 *)(param_1 + 0x738) = 0;
  *(undefined *)(param_1 + 0x6b1) = 0;
  *(undefined *)(param_1 + 0x762) = 0;
  *(undefined *)(param_1 + 0x763) = 0;
  *(undefined2 *)(param_1 + 0x760) = 0;
  *(undefined *)(param_1 + 0x757) = 0x80;
  *(undefined *)(param_1 + 0x758) = 0x80;
  *(undefined *)(param_1 + 0x759) = 0;

  FUN_overlay0__80032aac(param_1);

  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined *)(param_1 + 0x619) = 0;

  *(undefined2 *)(param_1 + 0x60a) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined2 *)(param_1 + 0x650) = 0;
  *(undefined2 *)(param_1 + 0x652) = 0;
  *(undefined *)(param_1 + 0x719) = 0;
  *(undefined *)(param_1 + 0x63d) = 0;
  *(undefined *)(param_1 + 0x61c) = 0;

  if ((*(char *)(param_1 + 0x786) != '\0') || (*(char *)(param_1 + 0x642) == '\0')) {
    *(char *)(param_1 + 0x61c) = (char)(DAT_801c8570 / 5);
  }

  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined2 *)(param_1 + 0x64a) = 0;
  *(undefined2 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x734) = 0;

  iVar3 = param_1;
  do {
    *(undefined2 *)(iVar3 + 0x654) = 0;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 2;
  } while (uVar2 < 2);

  uVar2 = 0;
  *(undefined *)(param_1 + 0x63f) = 0;
  *(undefined *)(param_1 + 0x63e) = 0;
  *(undefined2 *)(param_1 + 0x640) = 0;

  do {
    *(undefined4 *)(param_1 + 0x778) = 0;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 4;
  } while (uVar2 < 2);

  return;
}

void FUN_overlay0__8003311c(int param_1,int param_2)

{

  short *psVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  iVar8 = param_2 * 0x472;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x64c) = 0;

  iVar5 = param_1;
  iVar7 = param_1;
  do {
    psVar1 = (short *)(iVar5 + 0x668);
    iVar5 = iVar5 + 2;
    uVar6 = uVar6 + 1;
    uVar4 = FUN_80075a5c((int)*psVar1,iVar8);
    *(undefined4 *)(iVar7 + 0x628) = uVar4;
    iVar7 = iVar7 + 4;
  } while (uVar6 < 3);

  uVar3 = (undefined2)((param_2 * 1000000) / 0x3edd);
  *(undefined2 *)(param_1 + 0x6ae) = uVar3;
  *(undefined2 *)(param_1 + 0x6f8) = uVar3;

  bVar2 = FUN_overlay0__800448c8(param_1,iVar8);
  *(byte *)(param_1 + 0x618) = bVar2;
  iVar5 = FUN_80075a5c(*(undefined4 *)(param_1 + (uint)bVar2 * 4 + 0x3c4),iVar8);
  *(int *)(param_1 + 0x624) = iVar5;

  uVar6 = ((uint)*(ushort *)(param_1 + 0x10a) * 0x1000) / 0x3c;
  if ((int)uVar6 <= iVar5) {
    uVar6 = ((uint)*(ushort *)(param_1 + 0x108) * 0x1000) / 0x3c;
    if (iVar5 <= (int)uVar6) goto LAB_overlay0__80033274;
  }
  *(uint *)(param_1 + 0x624) = uVar6;

LAB_overlay0__80033274:

  iVar5 = *(int *)(param_1 + 0x624) * 0x3c;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  uVar3 = (undefined2)(iVar5 >> 0xc);
  *(undefined2 *)(param_1 + 0x6ac) = uVar3;

  if (*(short *)(param_1 + 0x128) != 0) {
    *(undefined2 *)(param_1 + 0x620) = uVar3;
    if (*(short *)(param_1 + 0x116) != 0) {
      *(undefined2 *)(param_1 + 0x622) = uVar3;
    }

    uVar3 = FUN_80075074(param_1 + 0x7c,(int)*(short *)(param_1 + 0x6ac),
                         (int)*(short *)(param_1 + 0x6ac));
    *(undefined2 *)(param_1 + 0x742) = uVar3;
    *(undefined2 *)(param_1 + 0x61e) = 0x1000;
    *(undefined2 *)(param_1 + 0x744) = 0;
    *(undefined2 *)(param_1 + 0x746) = *(undefined2 *)(param_1 + 0x6ac);
  }

  iVar5 = 0x460;
  *(undefined *)(param_1 + 0x619) = 1;
  *(int *)(param_1 + 0x6a4) = iVar8;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined2 *)(param_1 + 0x60a) = 0x1000;

  for (uVar6 = 0; iVar7 = param_1 + iVar5, uVar6 < 4; uVar6 = uVar6 + 1) {
    iVar5 = iVar5 + 0x68;
    *(int *)(iVar7 + 0x18) = iVar8;
    *(int *)(iVar7 + 0x2c) = iVar8;
  }

  uVar6 = 0;
  iVar5 = param_1;
  do {
    psVar1 = (short *)(param_1 + 1000);
    param_1 = param_1 + 2;
    uVar6 = uVar6 + 1;
    uVar4 = FUN_80075a5c((int)*psVar1,iVar8);
    *(undefined4 *)(iVar5 + 0x634) = uVar4;
    iVar5 = iVar5 + 4;
  } while (uVar6 < 2);

  return;
}

undefined4 FUN_overlay0__80033384
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,int param_12,int param_13)

{

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  undefined4 local_res8;
  undefined4 local_resc;

  iVar7 = param_13;
  iVar3 = param_12;
  cVar11 = (char)param_12;
  *(char *)(param_1 + 0x45c) = cVar11;
  *(char *)(param_1 + 0x45e) = (char)param_10;
  uVar9 = param_8;

  if (((DAT_801c98a0 >> 16) & 0xff) == 1 && (param_12 == 0)) {
    uVar9 = 1;
  }

  local_res8 = param_3;
  local_resc = param_4;

  FUN_overlay0__80030d64(param_1,uVar9);
  uVar9 = FUN_overlay0__800319a8(param_1,param_2,(int)*(char *)(param_1 + 0x45d),0,param_11);
  FUN_overlay0__80030d70(param_1,param_9);

  iVar5 = FUN_overlay0__80012378();
  if (((iVar5 != 0) && (*(char *)(param_1 + 0x45e) == '\x02')) &&
     (iVar5 = FUN_overlay0__8003ef40(param_1), iVar5 != 0)) {
    return uVar9;
  }

  *(undefined *)(param_1 + 0x78d) = 0;
  uVar10 = 0;

  if (iVar7 != 0) {
    uVar10 = FUN_overlay0__80039040(&local_res8,&local_resc,&param_5,&param_6,&param_7,iVar7);
    uVar10 = uVar10 >> 0x1f;
  }

  FUN_overlay0__80032b0c(param_1,local_res8,local_resc,param_5,param_6,param_7);
  FUN_overlay0__80032e44(param_1);
  FUN_overlay0__80032e6c(param_1);
  FUN_overlay0__80032a1c(param_1);
  FUN_overlay0__8004232c(param_1);

  uVar2 = DAT_800b4a58;
  iVar7 = 0;
  if (uVar10 == 0) {

    puVar8 = &DAT_800b4a58;
    *(char *)(param_1 + 0x6b0) = (char)DAT_800b4a58;
    for (; iVar7 < (int)uVar2; iVar7 = iVar7 + 1) {
      piVar1 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      if (*(int *)(param_1 + 0x604) < *piVar1) {
        *(char *)(param_1 + 0x6b0) = (char)iVar7;
        break;
      }
    }
    if (*(byte *)(param_1 + 0x6b0) != uVar2) {
      *(undefined2 *)(param_1 + 0x608) = 1;
      goto LAB_overlay0__80033548;
    }
  }

  *(undefined *)(param_1 + 0x6b0) = 0;
  *(undefined2 *)(param_1 + 0x608) = 0;

LAB_overlay0__80033548:

  *(undefined4 *)(param_1 + 0x780) = 0;
  *(undefined *)(param_1 + 0x788) = 0;
  *(undefined *)(param_1 + 0x718) = 0;
  *(undefined2 *)(param_1 + 0x78e) = 0;
  *(undefined *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined *)(param_1 + 0x764) = 0;
  *(undefined *)(param_1 + 0x765) = 0;

  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x344);

  uVar4 = FUN_overlay0__800392ac(iVar3);
  *(undefined *)(param_1 + 0x6b2) = uVar4;
  *(char *)(param_1 + 0x750) = cVar11 + '\x01';

  uVar6 = FUN_overlay0__800358e0(6);
  FUN_overlay0__800367ac(param_1,uVar6);

  if ((DAT_801d5869 == '\0') && ((char)DAT_801c98a0 != '\0')) {
    FUN_overlay0__8003311c(param_1,(char)DAT_801c98a0);
  }

  FUN_overlay0__8003d22c(param_1);

  return uVar9;
}

void FUN_overlay0__8003360c(int param_1)

{

  int iVar1;
  int iVar2;

  iVar2 = 7;
  iVar1 = param_1 + 7;

  *(undefined2 *)(param_1 + 0x774) = 0;
  *(undefined2 *)(param_1 + 0x76a) = 0;

  do {
    *(undefined *)(iVar1 + 0x76c) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar2);

  return;
}

void FUN_overlay0__80033634(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{

  if (param_4 < param_2) {

    if (param_3 < -param_6 / 2) {
      *(undefined *)(param_1 + 0x76d) = 2;
      return;
    }

    if (param_6 / 2 < param_3) {
      *(undefined *)(param_1 + 0x76e) = 2;
      return;
    }

    *(undefined *)(param_1 + 0x76c) = 2;
    if (0 < param_3) {
LAB_overlay0__8003368c:
      *(undefined *)(param_1 + 0x76e) = 1;
      return;
    }
LAB_overlay0__80033698:
    *(undefined *)(param_1 + 0x76d) = 1;
    return;
  }

  if (param_2 < -param_5) {

    if (param_3 < -param_6 / 2) {
      *(undefined *)(param_1 + 0x771) = 2;
      return;
    }

    if (param_6 / 2 < param_3) {
      *(undefined *)(param_1 + 0x772) = 2;
      return;
    }

    *(undefined *)(param_1 + 0x773) = 2;
    if (0 < param_3) {
LAB_overlay0__80033730:
      *(undefined *)(param_1 + 0x772) = 1;
      return;
    }
  }
  else {

    if (-1 < param_3) {
      *(undefined *)(param_1 + 0x770) = 2;
      if (0 < param_2) goto LAB_overlay0__8003368c;
      goto LAB_overlay0__80033730;
    }
    *(undefined *)(param_1 + 0x76f) = 2;
    if (0 < param_2) goto LAB_overlay0__80033698;
  }

  *(undefined *)(param_1 + 0x771) = 1;
  return;
}

undefined4 FUN_overlay0__8003373c(int *param_1,int *param_2)

{

  int *piVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int local_70 [4];
  int local_60 [4];
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  if ((((*(char *)((int)param_1 + 0x45e) == '\0') && (*(char *)((int)param_2 + 0x45e) == '\0')) &&
      (*(char *)((int)param_1 + 0x789) != '\x04')) &&
     ((*(char *)((int)param_2 + 0x789) != '\x04' &&
      ((*(byte *)((int)param_1 + 0x78d) & 0x10) == (*(byte *)((int)param_2 + 0x78d) & 0x10))))) {

    local_50 = param_2;
    local_30 = FUN_overlay0__8003c398
                         (param_1[0x197] - param_2[0x197],param_1[0x198] - param_2[0x198],
                          param_1[0x199] - param_2[0x199]);

    if (local_30 < 0x64001) {

      iVar11 = 0;
      piVar10 = local_70;
      sVar3 = *(short *)((int)param_1 + 10);
      sVar4 = *(short *)((int)param_2 + 10);
      piVar12 = param_2;
      piVar15 = param_1;

      do {
        piVar1 = piVar15 + 0x197;
        piVar15 = piVar15 + 1;
        piVar2 = piVar12 + 0x197;
        piVar12 = piVar12 + 1;
        iVar11 = iVar11 + 1;
        *piVar10 = *piVar2 - *piVar1;
        piVar10 = piVar10 + 1;
      } while (iVar11 < 3);

      if ((-(sVar4 + 0x5000) <= local_70[2]) && (local_70[2] <= sVar3 + 0x5000)) {

        iVar16 = 0;
        iVar17 = 0;
        iVar11 = 0;
        piVar10 = local_70;
        local_48 = 0;
        local_4c = 0;
        piVar12 = param_1;
        piVar15 = param_2;

        do {
          iVar11 = iVar11 + 1;
          iVar8 = FUN_8007596c((int)*(short *)(piVar12 + 0x19a),*piVar10);
          local_4c = local_4c + iVar8;
          piVar1 = piVar12 + 0x19c;
          piVar12 = (int *)((int)piVar12 + 2);
          iVar8 = FUN_8007596c((int)*(short *)piVar1,*piVar10);
          local_48 = local_48 + iVar8;
          iVar8 = FUN_8007596c((int)*(short *)(piVar15 + 0x19a),*piVar10);
          iVar17 = iVar17 - iVar8;
          iVar8 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar1 = piVar15 + 0x19c;
          piVar15 = (int *)((int)piVar15 + 2);
          iVar8 = FUN_8007596c((int)*(short *)piVar1,iVar8);
          iVar16 = iVar16 - iVar8;
        } while (iVar11 < 3);

        local_44 = *param_1;
        local_40 = param_1[1];
        local_3c = (int)*(short *)(param_1 + 2);
        local_38 = *local_50;
        local_34 = (int)*(short *)(local_50 + 2);
        iVar11 = local_50[1];

        if (local_30 < 0x14001) {

          iVar8 = local_44 + iVar11;
          iVar13 = local_40 + local_38;
          iVar14 = local_3c + local_34;

          FUN_overlay0__80033634(param_1,local_4c,local_48,iVar8,iVar13,iVar14);
          FUN_overlay0__80033634(param_2,iVar17,iVar16,iVar13,iVar8,iVar14);

          iVar8 = 0;
          piVar10 = local_60;
          piVar12 = param_1;
          piVar15 = param_2;

          while (bVar6 = iVar8 < 3, iVar8 = iVar8 + 1, bVar6) {
            piVar1 = piVar15 + 0x18a;
            piVar15 = piVar15 + 1;
            piVar2 = piVar12 + 0x18a;
            piVar12 = piVar12 + 1;
            *piVar10 = *piVar1 - *piVar2;
            piVar10 = piVar10 + 1;
          }

          if ((((*(char *)((int)param_1 + 0x45d) != '\0') ||
               (*(char *)((int)param_1 + 0x786) != '\0')) &&
              (iVar11 = (local_4c - iVar11) - local_44, 0 < iVar11)) &&
             ((-(local_3c + local_34) < local_48 && (iVar8 = 0, local_48 < local_3c + local_34)))) {

            iVar13 = 0;
            piVar15 = local_60;
            piVar12 = param_1;
            do {
              iVar14 = *piVar15;
              piVar15 = piVar15 + 1;
              piVar10 = piVar12 + 0x19a;
              piVar12 = (int *)((int)piVar12 + 2);
              iVar13 = iVar13 + 1;
              iVar14 = FUN_80075a5c((int)*(short *)piVar10,iVar14);
              iVar8 = iVar8 + iVar14;
            } while (iVar13 < 3);

            uVar7 = 0x1000;
            if ((iVar8 < -0xa008) ||
               ((iVar8 < -0x472 && (uVar7 = 0x800, (iVar11 * 0x1000) / -iVar8 < 0x3000)))) {
              *(undefined2 *)((int)param_1 + 0x76a) = uVar7;
            }
            if ((*(short *)((int)param_1 + 0x76a) == 0) && (iVar11 < 0x2000)) {
              *(undefined2 *)((int)param_1 + 0x76a) = 0x400;
            }
          }

          if ((((*(char *)((int)param_2 + 0x45d) != '\0') ||
               (*(char *)((int)param_2 + 0x786) != '\0')) &&
              (iVar11 = (iVar17 - local_40) - local_38, 0 < iVar11)) &&
             ((-(local_3c + local_34) < iVar16 && (iVar8 = 0, iVar16 < local_3c + local_34)))) {

            iVar13 = 0;
            piVar15 = local_60;
            piVar12 = param_2;
            do {
              iVar14 = *piVar15;
              piVar15 = piVar15 + 1;
              piVar10 = piVar12 + 0x19a;
              piVar12 = (int *)((int)piVar12 + 2);
              iVar13 = iVar13 + 1;
              iVar14 = FUN_80075a5c((int)*(short *)piVar10,iVar14);
              iVar8 = iVar8 - iVar14;
            } while (iVar13 < 3);

            uVar7 = 0x1000;
            if ((iVar8 < -0xa008) ||
               ((iVar8 < -0x472 && (uVar7 = 0x800, -((iVar11 * 0x1000) / iVar8) < 0x3000)))) {
              *(undefined2 *)((int)param_2 + 0x76a) = uVar7;
            }
            if ((*(short *)((int)param_2 + 0x76a) == 0) && (iVar11 < 0x2000)) {
              *(undefined2 *)((int)param_2 + 0x76a) = 0x400;
            }
          }
        }

        uVar5 = *(ushort *)(param_1 + 0x1dd);
        if ((((*(short *)(param_1 + 0x1dd) != 0x1000) && (iVar11 = param_2[0x1a9], 0x1bc88 < iVar11)
             ) && (iVar17 < 0)) &&
           (((-iVar11 < iVar17 && (-local_34 < iVar16)) &&
            (uVar9 = iVar11 + iVar17, iVar16 < local_34)))) {
          iVar11 = FUN_80086084(uVar9 * 0x1000,((int)uVar9 >> 0x1f) << 0xc | uVar9 >> 0x14,iVar11,
                                iVar11 >> 0x1f);
          *(short *)(param_1 + 0x1dd) = (short)(iVar11 + (uint)uVar5);
          if (0x1000 < (int)((iVar11 + (uint)uVar5) * 0x10000) >> 0x10) {
            *(undefined2 *)(param_1 + 0x1dd) = 0x1000;
          }
        }

        uVar5 = *(ushort *)(param_2 + 0x1dd);
        if (((*(short *)(param_2 + 0x1dd) != 0x1000) && (iVar11 = param_1[0x1a9], 0x1bc88 < iVar11))
           && ((local_4c < 0 &&
               (((-iVar11 < local_4c && (-local_3c < local_48)) && (local_48 < local_3c)))))) {
          uVar9 = iVar11 + local_4c;
          iVar11 = FUN_80086084(uVar9 * 0x1000,((int)uVar9 >> 0x1f) << 0xc | uVar9 >> 0x14,iVar11,
                                iVar11 >> 0x1f);
          *(short *)(param_2 + 0x1dd) = (short)(iVar11 + (uint)uVar5);
          if (0x1000 < (int)((iVar11 + (uint)uVar5) * 0x10000) >> 0x10) {
            *(undefined2 *)(param_2 + 0x1dd) = 0x1000;
          }
        }
      }
    }
  }

  return 0;
}

void FUN_overlay0__80033d34(int param_1)

{

  short frontTireSlipAngle;
  short rearTireSlipAngle;
  int firstSlipDataPointer;
  int slipAngleOffset;
  int differenceCalculation;

  frontTireSlipAngle = *(short *)(param_1 + 0x656);
  rearTireSlipAngle = *(short *)(param_1 + 0x654);
  slipAngleOffset = (uint)*(byte *)(param_1 + 0x63f) * 8;

  firstSlipDataPointer = param_1 + slipAngleOffset + (uint)*(byte *)(param_1 + 0x6b3) * 0x20;
  slipAngleOffset = param_1 + slipAngleOffset + (1 - (uint)*(byte *)(param_1 + 0x6b3)) * 0x20;

  differenceCalculation = *(int *)(firstSlipDataPointer + 0x6b4) - *(int *)(slipAngleOffset + 0x6b4);
  slipAngleOffset = *(int *)(firstSlipDataPointer + 0x6b8) - *(int *)(slipAngleOffset + 0x6b8);

  firstSlipDataPointer = FUN_80075ef8(-(int)frontTireSlipAngle,differenceCalculation,(int)rearTireSlipAngle,slipAngleOffset,0);

  if (firstSlipDataPointer < 1) {

    slipAngleOffset = FUN_80075ef8((int)rearTireSlipAngle,differenceCalculation,(int)frontTireSlipAngle,slipAngleOffset,0);
    firstSlipDataPointer = slipAngleOffset * DAT_801c8570;

    if (firstSlipDataPointer < 0) {
      firstSlipDataPointer = firstSlipDataPointer + 0x7ff;
    }
    firstSlipDataPointer = firstSlipDataPointer >> 0xb;

    if (firstSlipDataPointer < 0x41) {
      if (firstSlipDataPointer < -0x40) {
        firstSlipDataPointer = -0x40;
      }
    }
    else {
      firstSlipDataPointer = 0x40;
    }

    if ((0x1000 / DAT_801c8570 < slipAngleOffset) || (slipAngleOffset < -(0x1000 / DAT_801c8570))) {
      *(char *)(param_1 + 0x63e) = (char)firstSlipDataPointer;
    }
    else {
      *(undefined *)(param_1 + 0x63e) = 0;
    }
  }

  return;
}

int FUN_overlay0__80033e6c(int param_1,int *param_2,int *param_3,int param_4)

{

  int parameterValue;
  short rotationParameter;
  int vehiclePointer;
  int calculatedParameter;
  int *inputForcePointer;
  int loopCounter;
  int simulationResult;
  undefined4 integrationMode;

  loopCounter = 0;
  integrationMode = 0;
  vehiclePointer = param_1;
  inputForcePointer = param_2;

  do {
    parameterValue = *inputForcePointer;
    inputForcePointer = inputForcePointer + 1;
    loopCounter = loopCounter + 1;
    *(int *)(vehiclePointer + 0x65c) = *(int *)(vehiclePointer + 0x65c) + parameterValue;
    vehiclePointer = vehiclePointer + 4;
  } while (loopCounter < 3);

  rotationParameter = *(short *)(param_1 + 0x648) + *(short *)(param_2 + 3);
  *(short *)(param_1 + 0x648) = rotationParameter;
  if (0xfff < rotationParameter) {
    *(short *)(param_1 + 0x648) = rotationParameter + -0x1000;
  }
  if (*(short *)(param_1 + 0x648) < -0xfff) {
    *(short *)(param_1 + 0x648) = *(short *)(param_1 + 0x648) + 0x1000;
  }

  if (param_4 != 1) {
    *(char *)(param_1 + 0x6b3) = '\x01' - *(char *)(param_1 + 0x6b3);
  }

  FUN_overlay0__80041ae8(param_1);
  *param_3 = 0;

  if (DAT_800a9520 != 0) {
    return 0;
  }

  vehiclePointer = FUN_overlay0__80041ccc(param_1,&simulationResult,&integrationMode);
  if (vehiclePointer == 0) {
    return 0;
  }

  *(undefined *)(param_1 + 0x63f) = (undefined)integrationMode;
  if (param_4 == 0) {
    *(undefined *)(param_1 + 0x63e) = 0;
  }
  else if ((param_4 < 0) || (2 < param_4)) goto LAB_overlay0__80033fa0;
  FUN_overlay0__80033d34(param_1);

LAB_overlay0__80033fa0:

  parameterValue = 0;
  simulationResult = 0x1000 - simulationResult;
  *param_3 = simulationResult;
  loopCounter = param_1;
  inputForcePointer = param_2;

  do {
    calculatedParameter = *inputForcePointer;
    inputForcePointer = inputForcePointer + 1;
    calculatedParameter = FUN_8007596c(calculatedParameter,simulationResult);
    parameterValue = parameterValue + 1;
    *(int *)(loopCounter + 0x65c) = *(int *)(loopCounter + 0x65c) - calculatedParameter;
    loopCounter = loopCounter + 4;
  } while (parameterValue < 3);

  loopCounter = FUN_8007596c(param_2[3],simulationResult);
  loopCounter = (uint)*(ushort *)(param_1 + 0x648) - loopCounter;
  rotationParameter = (short)loopCounter;
  *(short *)(param_1 + 0x648) = rotationParameter;
  if (0xfff < loopCounter * 0x10000 >> 0x10) {
    *(short *)(param_1 + 0x648) = rotationParameter + -0x1000;
  }
  if (*(short *)(param_1 + 0x648) < -0xfff) {
    *(short *)(param_1 + 0x648) = *(short *)(param_1 + 0x648) + 0x1000;
  }

  *(int *)(param_1 + 0x65c) =
       *(int *)(param_1 + 0x65c) - ((int)((uint)*(ushort *)(param_1 + 0x656) << 0x10) >> 0x14);
  *(int *)(param_1 + 0x660) =
       *(int *)(param_1 + 0x660) + ((int)((uint)*(ushort *)(param_1 + 0x654) << 0x10) >> 0x14);

  if (param_4 != 0) {
    FUN_overlay0__80041ae8(param_1);
  }

  return vehiclePointer;
}

void FUN_overlay0__800340a4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{

  byte physicsMultiplier1;
  byte physicsMultiplier2;
  short vehicleVelocityX;
  short vehicleVelocityY;
  undefined4 scaledPhysicsParam1;
  undefined4 scaledPhysicsParam2;
  int physicsDistance;
  int physicsConfiguration;
  int vehiclePositionX;
  int vehiclePositionY;
  undefined physicsLocalArray [8];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar1;
  byte bVar2;
  undefined4 uVar5;
  undefined auStack_30[48];

  vehiclePositionX = *(int *)(param_1 + 0x628);
  vehiclePositionY = *(int *)(param_1 + 0x62c);
  vehicleVelocityX = *(short *)(param_1 + 0x654);
  vehicleVelocityY = *(short *)(param_1 + 0x656);

  scaledPhysicsParam1 = FUN_80075ef8(vehiclePositionX,(int)vehicleVelocityX,vehiclePositionY,(int)vehicleVelocityY,0);
  scaledPhysicsParam2 = FUN_80075a5c((int)vehicleVelocityX,scaledPhysicsParam1);
  *(undefined4 *)(param_1 + 0x628) = scaledPhysicsParam2;
  scaledPhysicsParam2 = FUN_80075a5c((int)vehicleVelocityY,scaledPhysicsParam1);
  *(undefined4 *)(param_1 + 0x62c) = scaledPhysicsParam2;

  physicsDistance = FUN_overlay0__8003c360(vehiclePositionX,vehiclePositionY);

  if ((0x1000 < *(int *)(param_1 + 0x630)) && (0 < physicsDistance)) {
    scaledPhysicsParam1 = FUN_80075e90(scaledPhysicsParam1,physicsDistance,0);
    scaledPhysicsParam1 = FUN_80075a5c(*(undefined4 *)(param_1 + 0x630),scaledPhysicsParam1);
    *(undefined4 *)(param_1 + 0x630) = scaledPhysicsParam1;
  }

  if (param_4 != 1) {

    iVar9 = FUN_overlay0__8003c360
                      (iVar9 - *(int *)(param_1 + 0x628),iVar10 - *(int *)(param_1 + 0x62c));
    *(undefined2 *)(param_1 + 0x740) = 0;

    iVar10 = FUN_80060e94(DAT_800af230);
    iVar8 = 0x29;
    if ((*(ushort *)(iVar10 + 8) & 4) != 0) {
      iVar8 = 0x1b;
    }

    if (0x8e4 < iVar7) {
      *(short *)(param_1 + 0x740) = (short)(iVar9 * iVar8 >> 0xc);
    }

    DAT_1f800000 = (int)*(short *)(param_1 + 0x6fe);
    bVar1 = 0x78;
    bVar2 = 0x3c;
    iVar7 = FUN_80060e94(DAT_800af230);
    if ((*(ushort *)(iVar7 + 8) & 4) != 0) {
      bVar1 = 0x3c;
      bVar2 = 0x1e;
    }

    iVar7 = 0x1000;
    if (iVar9 <= (int)((uint)bVar1 * 0x472)) {
      iVar7 = FUN_80075e90(iVar9,(uint)bVar1 * 0x472,0);
    }

    if (*(short *)(param_1 + 0x640) < iVar7) {
      *(short *)(param_1 + 0x640) = (short)iVar7;
      iVar10 = 0;
      iVar9 = param_1;
      do {
        iVar10 = iVar10 + 1;
        uVar5 = FUN_80075a5c(0x1000 - (int)(iVar7 * (100 - (uint)bVar2)) / 100,
                             *(undefined4 *)(iVar9 + 0x628));
        *(undefined4 *)(iVar9 + 0x628) = uVar5;
        iVar9 = iVar9 + 4;
      } while (iVar10 < 3);
    }

    FUN_overlay0__80030424(param_1,param_2,param_3);
    FUN_overlay0__80033e6c(param_1,param_2,auStack_30,1);
  }

  return;
}

void FUN_overlay0__80034320(int param_1,int param_2)

{

  char processingResult;
  int systemState;
  int carSystemPointer;
  int iterationParameter;
  int iterationCounter;
  undefined4 localArray [2];

  iterationParameter = 0xb4;

  for (iterationCounter = 0; carSystemPointer = param_1 + 0x2c, iterationCounter < param_2; iterationCounter = iterationCounter + 1) {

    processingResult = FUN_overlay0__80033e6c(carSystemPointer,iterationParameter + 0x1f800000,localArray,0);
    *(char *)(param_1 + 0x7b1) = processingResult;

    if (processingResult == '\0') {

      carSystemPointer = FUN_8007598c(DAT_801c856c,0x555);
      carSystemPointer = (uint)*(ushort *)(param_1 + 0x66c) - carSystemPointer;
      *(short *)(param_1 + 0x66c) = (short)carSystemPointer;
      if (carSystemPointer * 0x10000 < 0) {
        *(undefined2 *)(param_1 + 0x66c) = 0;
      }
      *(undefined2 *)(param_1 + 0x76c) = 0;
    }
    else {

      *(byte *)(param_1 + 0x669) = *(byte *)(param_1 + 0x669) | 1;
      FUN_overlay0__800340a4(carSystemPointer,iterationParameter + 0x1f800000,localArray[0],0);
      systemState = FUN_overlay0__800419e8(carSystemPointer);

      if ((systemState == 2) && (systemState = *(short *)(param_1 + 0x76c) + -0x155, -1 < systemState)) {
        carSystemPointer = carSystemPointer + (uint)*(byte *)(param_1 + 0x66b) * 0x68;
        systemState = (systemState >> 3) + (uint)*(byte *)(carSystemPointer + 0x482);
        if (0xff < systemState) {
          systemState = 0xff;
        }
        *(char *)(carSystemPointer + 0x482) = (char)systemState;
      }
    }

    iterationParameter = iterationParameter + 0x10;
    param_1 = param_1 + 0xb40;
  }

  return;
}

void FUN_overlay0__80034480(int param_1,int param_2)

{

  int carSystemPointer1;
  int carSystemPointer2;
  int innerLoopCounter;
  int outerLoopCounter;

  carSystemPointer1 = param_1;
  for (outerLoopCounter = 0; outerLoopCounter < param_2; outerLoopCounter = outerLoopCounter + 1) {
    *(undefined *)(carSystemPointer1 + 0x669) = 0;
    FUN_overlay0__8003360c(carSystemPointer1);
    carSystemPointer1 = carSystemPointer1 + 0xb40;
  }

  FUN_overlay0__80034320(param_1,param_2);

  FUN_overlay0__800400cc(param_1,param_2);
  FUN_overlay0__800407a0(param_1,param_2);
  FUN_overlay0__80040924(param_1,param_2);
  FUN_overlay0__80040f30(param_1,param_2);
  FUN_overlay0__800412d4(param_1,param_2);

  carSystemPointer1 = param_1;
  for (outerLoopCounter = 0; innerLoopCounter = outerLoopCounter + 1, outerLoopCounter < param_2; outerLoopCounter = outerLoopCounter + 1) {
    if (innerLoopCounter < param_2) {
      carSystemPointer2 = innerLoopCounter * 0xb40 + param_1;
      do {
        FUN_overlay0__8003373c(carSystemPointer1 + 0x2c,carSystemPointer2 + 0x2c);
        innerLoopCounter = innerLoopCounter + 1;
        carSystemPointer2 = carSystemPointer2 + 0xb40;
      } while (innerLoopCounter < param_2);
    }
    carSystemPointer1 = carSystemPointer1 + 0xb40;
  }

  for (carSystemPointer1 = 0; carSystemPointer1 < param_2; carSystemPointer1 = carSystemPointer1 + 1) {
    if (*(short *)(param_1 + 0x76c) != 0) {

      if (0x1000 < *(short *)(param_1 + 0x76c)) {
        *(undefined2 *)(param_1 + 0x76c) = 0x1000;
      }

      outerLoopCounter = FUN_overlay0__800419e8(param_1 + 0x2c);

      if (((outerLoopCounter == 1) && (*(char *)(param_1 + 0x726) == '\0')) &&
         (0x2aa < *(short *)(param_1 + 0x76c))) {
        FUN_overlay0__800156b8(*(undefined *)(param_1 + 0x488),1);
        *(undefined *)(param_1 + 0x726) = 1;
      }

      if ((int)*(short *)(param_1 + 0x76a) < (DAT_801c8570 * 3) / 5) {
        *(undefined2 *)(param_1 + 0x76a) = (undefined2)DAT_801c8570;
      }
    }
    param_1 = param_1 + 0xb40;
  }

  return;
}

undefined4 FUN_overlay0__80034740(int param_1)

{

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar1 = 0;

  if (*(char *)(param_1 + 0x1aa) != '\0') {

    if (*(char *)(param_1 + 0x1ab) == '\0') {
      uVar1 = 0;
    }
    else {

      iVar3 = 0xff;
      if (*(char *)(param_1 + 0x1ab) != -1) {
        iVar3 = (uint)*(byte *)(param_1 + 0x1ab) * 10;
      }

      iVar4 = 7;
      iVar2 = param_1 + 0xe;
      do {
        *(undefined2 *)(iVar2 + 0x18) = 0xffff;
        iVar4 = iVar4 + -1;
        iVar2 = iVar2 + -2;
      } while (-1 < iVar4);

      FUN_80074b38(param_1,iVar3,param_1 + 0x18);
      uVar1 = 1;
    }
  }

  return uVar1;
}

void FUN_overlay0__800347c4(int param_1,byte *param_2,short *param_3,undefined4 param_4)

{

  ushort uVar1;
  bool bVar2;
  longlong lVar3;
  undefined2 uVar4;
  short sVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  short *psVar17;
  int iVar18;
  byte *pbVar19;
  uint local_40 [6];

  FUN_80076070(param_1,param_2,param_2 + 3,param_2 + 4,param_2 + 6);

  for (uVar14 = 0; uVar14 < 2; uVar14 = uVar14 + 1) {
    bVar10 = *(byte *)(param_1 + uVar14 + 0x184);
    pbVar6 = &DAT_overlay0__80046dcc;
    iVar18 = 0;
    do {
      if (*pbVar6 == bVar10) {
        bVar10 = (byte)iVar18;
        break;
      }
      iVar9 = iVar18 + 1;
      pbVar6 = &DAT_overlay0__80046dcd + iVar18;
      iVar18 = iVar9;
    } while (iVar9 < 8);
    param_2[uVar14 + 10] = bVar10;
  }

  bVar10 = *param_2;
  if (bVar10 == 1) {
    if (param_2[10] == 0) {
      param_2[10] = 2;
    }
    if (param_2[0xb] != 0) {
      param_2[0xb] = 0;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) goto LAB_overlay0__80034920;
      if (param_2[10] != 0) {
        param_2[10] = 0;
      }
    }
    else {
      if (6 < bVar10) goto LAB_overlay0__80034920;
      if (param_2[10] == 0) {
        param_2[10] = 2;
      }
    }
    if (param_2[0xb] == 0) {
      param_2[0xb] = 2;
    }
  }

LAB_overlay0__80034920:
  uVar14 = 0;
  pbVar6 = param_2;
  iVar18 = param_1;
  do {
    if (1 < uVar14) {

      FUN_overlay0__80034740(param_1);
      bVar10 = *(byte *)(param_1 + 0x2a);
      param_2[2] = bVar10;

      iVar18 = 1;
      do {
        bVar2 = iVar18 <= (int)(uint)bVar10;
        iVar18 = iVar18 + 1;
      } while (bVar2);

      iVar9 = 0;
      pbVar6 = param_2;
      iVar18 = param_1;
      do {
        iVar11 = (uint)*(ushort *)(iVar18 + 0x18) << 0x10;
        uVar15 = iVar11 >> 0x10;
        iVar12 = (uint)*(ushort *)(param_1 + 0x28) << 0x10;
        uVar14 = iVar12 >> 0x10;
        uVar7 = uVar14 * 0x1000;
        lVar3 = (ulonglong)uVar15 * (ulonglong)uVar7;
        iVar18 = iVar18 + 2;
        iVar9 = iVar9 + 1;
        uVar8 = FUN_80086084((int)lVar3,
                             (int)((ulonglong)lVar3 >> 0x20) +
                             uVar15 * ((iVar12 >> 0x1f) << 0xc | uVar14 >> 0x14) +
                             uVar7 * (iVar11 >> 0x1f),1000000,0);
        *(undefined4 *)(pbVar6 + 0x34) = uVar8;
        pbVar6 = pbVar6 + 4;
      } while (iVar9 <= (int)(uint)param_2[2]);

      if (param_2[2] + 1 < 8) {
        iVar18 = param_2[2] + 2;
        do {
          bVar2 = iVar18 < 8;
          iVar18 = iVar18 + 1;
        } while (bVar2);
      }

      FUN_80075fac(param_1,0,param_2 + 0x74,param_2 + 0x7c,param_2 + 0x80);
      FUN_80075fac(param_1,1,param_2 + 0x76,param_2 + 0x7e,param_2 + 0x82);

      if (*(short *)(param_2 + 0x74) != 0) {
        *(short *)(param_2 + 0x78) = (short)(0x1000000 / (int)*(short *)(param_2 + 0x74));
      }
      if (*(short *)(param_2 + 0x76) != 0) {
        *(short *)(param_2 + 0x7a) = (short)(0x1000000 / (int)*(short *)(param_2 + 0x76));
      }

      iVar18 = 0;
      puVar13 = local_40;
      local_40[0] = (uint)*(byte *)(param_1 + 100);
      local_40[1] = (uint)*(byte *)(param_1 + 0x65);
      pbVar6 = param_2;
      pbVar19 = param_2;
      do {
        if (*puVar13 != 0) {
          uVar8 = FUN_80075e90((int)*(short *)(pbVar6 + 0x74),*puVar13 << 4,0);
          *(undefined4 *)(pbVar19 + 0x88) = uVar8;
          uVar8 = FUN_80075a5c((int)*(short *)(pbVar6 + 0x78),(int)*(short *)(pbVar6 + 0x78));
          uVar4 = FUN_80075a5c(*puVar13,uVar8);
          *(undefined2 *)(pbVar6 + 0xa0) = uVar4;
        }
        puVar13 = puVar13 + 1;
        pbVar19 = pbVar19 + 4;
        iVar18 = iVar18 + 1;
        pbVar6 = pbVar6 + 2;
      } while (iVar18 < 2);

      if (*(byte *)(param_1 + 0x2b) != 0) {
        *(short *)(param_2 + 8) = (short)(((uint)*(byte *)(param_1 + 0x2b) << 6) / 100);
        *(uint *)(param_2 + 0x9c) = 0xfeb0000 / ((uint)*(byte *)(param_1 + 0x2b) << 2);
      }

      uVar14 = 0;
      puVar13 = local_40 + 2;
      puVar16 = local_40;
      pbVar6 = param_2;
      do {
        uVar7 = (uint)*(byte *)(param_1 + uVar14 + 0x182) * 0x10;
        *puVar13 = uVar7;
        uVar14 = uVar14 + 1;
        uVar7 = (int)(uVar7 * (int)*(short *)(param_1 + 0x28)) / 1000;
        *puVar13 = uVar7;
        uVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar7 = uVar7 + uVar15 * 0x20;
        *puVar13 = uVar7;
        *(uint *)(pbVar6 + 0x90) = uVar7;
        pbVar6 = pbVar6 + 4;
        puVar13 = puVar13 + 1;
      } while (uVar14 < 2);

      iVar18 = 0;
      uVar8 = FUN_80075e90(0x1000,local_40[2] + local_40[3], 0);
      *(undefined4 *)(param_2 + 0x98) = uVar8;
      *(ushort *)(param_2 + 0x24) = (ushort)*(byte *)(param_1 + 0x5d) * 10;
      *(ushort *)(param_2 + 0x26) = (ushort)*(byte *)(param_1 + 0x31) * 100;

      psVar17 = param_3;
      for (iVar9 = 0; iVar9 < *param_3; iVar9 = iVar9 + 1) {
        iVar11 = FUN_80075d2c(param_3,*(undefined4 *)(psVar17 + 6));
        if (iVar18 < iVar11) {
          iVar18 = iVar11;
        }
        psVar17 = psVar17 + 2;
      }
      *(short *)(param_2 + 0x86) = (short)((iVar18 * 0xf) / 10);
      iVar18 = 0;
      *(short *)(param_2 + 0x84) = (short)((int)((uint)*(byte *)(param_1 + 0x8b) * 0x27334) >> 0xc);
      pbVar6 = param_2;
      do {
        iVar18 = iVar18 + 1;
        uVar8 = FUN_80075e90(*(undefined4 *)(pbVar6 + 0x34),
                             *(short *)(param_2 + (uint)param_2[3] * 2 + 0x74) * 0x6488 >> 0xc,0);
        *(undefined4 *)(pbVar6 + 0x54) = uVar8;
        pbVar6 = pbVar6 + 4;
      } while (iVar18 <= (int)(uint)param_2[2]);

      if (param_2[2] == 2) {
        *(int *)(param_2 + 0x3c) =
             ((int)*(short *)(param_1 + 0x1c) << 0xc) / (int)*(short *)(param_1 + 0x1a);
        *(short *)(param_2 + 0x24) = param_3[0x47];
      }
      else if ((int)(*(ushort *)(param_2 + 0x24) - 500) < (int)(uint)(ushort)param_3[0x47]) {
        *(ushort *)(param_2 + 0x24) = param_3[0x47] + 500;
      }

      iVar18 = 1;
      if (param_2[2] == 2) {
        iVar18 = 0;
        iVar11 = (int)*param_3;
        iVar12 = 0;
        iVar9 = iVar11 + -1;
        if (0 < iVar11) {
          do {
            if (iVar18 < *(int *)(param_3 + 0x26)) {
              iVar18 = *(int *)(param_3 + 0x26);
              iVar9 = iVar12;
            }
            iVar12 = iVar12 + 1;
            param_3 = param_3 + 2;
          } while (iVar12 < iVar11);
        }
        *(ushort *)(param_2 + 0x28) = (ushort)*(byte *)(param_1 + iVar9 + 0x34) * 100;
      }
      else {
        iVar9 = 0;
        pbVar6 = param_2 + 4;
        iVar11 = 8;
        for (; iVar18 < (int)(uint)param_2[2]; iVar18 = iVar18 + 1) {
          uVar1 = *(ushort *)(param_2 + 0x26);
          uVar8 = FUN_80075e90(*(undefined4 *)(param_2 + iVar11 + 0x34),
                               *(undefined4 *)(pbVar6 + 0x34),0);
          iVar12 = FUN_80075a5c(((uint)uVar1 * 0x1000) / 0x3c,uVar8);
          iVar12 = iVar12 * 0x3c;
          if (iVar12 < 0) {
            iVar12 = iVar12 + 0xfff;
          }
          if ((int)(*(ushort *)(param_2 + 0x24) + 1000) < iVar12 >> 0xc) {
            sVar5 = (short)(iVar12 >> 0xc) + -500;
          }
          else {
            sVar5 = *(ushort *)(param_2 + 0x24) + 500;
          }
          *(short *)(param_2 + iVar9 + 0x28) = sVar5;
          iVar9 = iVar9 + 2;
          pbVar6 = pbVar6 + 4;
          iVar11 = iVar11 + 4;
        }
      }
      return;
    }

    switch(param_2[uVar14 + 10]) {
    case 0:
    case 1:
    case 2:
      *(undefined4 *)(pbVar6 + 0xc) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0;
      *(undefined4 *)(pbVar6 + 0x1c) = 0;
      break;
    case 3:
    case 4:
      *(int *)(pbVar6 + 0xc) = (int)((uint)*(byte *)(iVar18 + 0x186) * 0x27334) >> 0xc;
      goto LAB_overlay0__80034aa4;
    case 5:
      iVar9 = (uint)*(byte *)(iVar18 + 0x186) << 0xc;
      uVar8 = FUN_80075a5c(iVar9,iVar9);
      *(undefined4 *)(pbVar6 + 0xc) = uVar8;
      bVar10 = *(byte *)(iVar18 + 0x188);
      *(undefined4 *)(pbVar6 + 0x1c) = 0;
      *(uint *)(pbVar6 + 0x14) = ((uint)bVar10 * 0x27334) / 0xa000;
      break;
    case 6:
      *(int *)(pbVar6 + 0xc) = (int)((uint)*(byte *)(iVar18 + 0x186) * 0x27334) >> 0xc;
      goto LAB_overlay0__80034aa4;
    case 7:
      *(uint *)(pbVar6 + 0xc) = ((uint)*(byte *)(iVar18 + 0x186) << 0xc) / 100;
LAB_overlay0__80034aa4:
      *(uint *)(pbVar6 + 0x14) = ((uint)*(byte *)(iVar18 + 0x188) << 0xc) / 100;
      *(uint *)(pbVar6 + 0x1c) = ((uint)*(byte *)(iVar18 + 0x18a) << 0xc) / 100;
    }
    iVar18 = iVar18 + 1;
    pbVar6 = pbVar6 + 4;
    uVar14 = uVar14 + 1;
  } while( true );
}

void FUN_overlay0__800350fc(undefined4 *param_1,int param_2)

{

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  iVar5 = 0;
  puVar2 = param_1;
  iVar4 = param_2;
  do {

    uVar6 = *(undefined4 *)(iVar4 + 0x464);
    uVar7 = *(undefined4 *)(iVar4 + 0x468);
    uVar8 = *(undefined4 *)(iVar4 + 0x46c);

    puVar2[0x1a] = *(undefined4 *)(iVar4 + 0x460);
    puVar2[0x1b] = uVar6;
    puVar2[0x1c] = uVar7;
    puVar2[0x1d] = uVar8;

    uVar6 = *(undefined4 *)(iVar4 + 0x474);
    uVar7 = *(undefined4 *)(iVar4 + 0x478);

    puVar2[0x1e] = *(undefined4 *)(iVar4 + 0x470);
    puVar2[0x1f] = uVar6;
    puVar2[0x20] = uVar7;

    iVar4 = iVar4 + 0x68;
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + 7;
  } while (iVar5 < 4);

  puVar2 = (undefined4 *)(param_2 + 0x600);
  do {

    puVar3 = param_1;
    puVar1 = puVar2;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];

    *puVar3 = *puVar1;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;

    puVar2 = puVar1 + 4;
    param_1 = puVar3 + 4;
  } while (puVar2 != (undefined4 *)(param_2 + 0x660));

  uVar6 = puVar1[5];
  puVar3[4] = *puVar2;
  puVar3[5] = uVar6;

  return;
}

void FUN_overlay0__8003519c(int param_1,undefined4 *param_2)

{

  undefined uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;

  FUN_8008ce30(param_1 + 0x45c,0,0x33c);

  iVar3 = 0;
  iVar4 = param_1;
  puVar5 = param_2;
  do {

    uVar8 = puVar5[0x1b];
    uVar9 = puVar5[0x1c];
    uVar10 = puVar5[0x1d];

    *(undefined4 *)(iVar4 + 0x460) = puVar5[0x1a];
    *(undefined4 *)(iVar4 + 0x464) = uVar8;
    *(undefined4 *)(iVar4 + 0x468) = uVar9;
    *(undefined4 *)(iVar4 + 0x46c) = uVar10;

    uVar8 = puVar5[0x1f];
    uVar9 = puVar5[0x20];

    *(undefined4 *)(iVar4 + 0x470) = puVar5[0x1e];
    *(undefined4 *)(iVar4 + 0x474) = uVar8;
    *(undefined4 *)(iVar4 + 0x478) = uVar9;

    puVar5 = puVar5 + 7;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x68;
  } while (iVar3 < 4);

  puVar5 = (undefined4 *)(param_1 + 0x600);
  puVar7 = param_2;
  do {

    puVar6 = puVar7;
    puVar2 = puVar5;
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    uVar10 = puVar6[3];

    *puVar2 = *puVar6;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;

    puVar7 = puVar6 + 4;
    puVar5 = puVar2 + 4;
  } while (puVar7 != param_2 + 0x18);

  uVar8 = puVar6[5];
  puVar2[4] = *puVar7;
  puVar2[5] = uVar8;

  *(undefined2 *)(param_1 + 0x766) = 0x1000;
  *(undefined *)(param_1 + 0x6b1) = 0;

  if (*(int *)(param_1 + 0x468) + *(int *)(param_1 + 0x4d0) + *(int *)(param_1 + 0x538) +
      *(int *)(param_1 + 0x5a0) == 0) {
    *(undefined *)(param_1 + 0x6b1) = 1;
  }

  uVar1 = FUN_overlay0__800392ac(0);
  *(undefined *)(param_1 + 0x6b2) = uVar1;
  *(undefined *)(param_1 + 0x78d) = 0;

  FUN_overlay0__80044ea4
            (param_1 + 0x668,param_1 + 0x670,param_1 + 0x678,(int)*(short *)(param_1 + 0x644),
             (int)*(short *)(param_1 + 0x646),(int)*(short *)(param_1 + 0x648));
  FUN_overlay0__8003e7ec(param_1);
  FUN_overlay0__8004335c(param_1);
  FUN_overlay0__800304dc(param_1);
  FUN_overlay0__8003941c(param_1);

  FUN_overlay0__80032e44(param_1);
  *(undefined *)(param_1 + 0x6b3) = 0;
  FUN_overlay0__80041ae8(param_1);
  FUN_overlay0__80041c78(param_1);

  iVar3 = 7;
  iVar4 = param_1 + 7;
  do {
    *(undefined *)(iVar4 + 0x76c) = 0;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar3);

  *(undefined2 *)(param_1 + 0x76a) = 0;

  return;
}

int FUN_overlay0__8003533c(int param_1,undefined4 param_2)

{

  int iVar1;

  iVar1 = 0;

  if (*(char *)(param_1 + 0x61d) == '\0') {

    if ((int)(uint)*(ushort *)(param_1 + 0x108) <= (int)*(short *)(param_1 + 0x6ac)) {
      *(undefined *)(param_1 + 0x61d) = 1;
    }
  }
  else if ((int)*(short *)(param_1 + 0x6ac) < (int)(*(ushort *)(param_1 + 0x108) - 500)) {
    *(undefined *)(param_1 + 0x61d) = 0;
  }

  if (*(char *)(param_1 + 0x61d) == '\0') {
    iVar1 = FUN_80075bf4(param_2,*(int *)(param_1 + 0x710) + *(int *)(param_1 + 0x714));
  }

  return iVar1 - *(int *)(param_1 + 0x714);
}

int FUN_overlay0__800353dc(int param_1,int param_2)

{

  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar12 = param_1 + 0x7c;

  if (*(short *)(param_1 + 0x128) == 0) {

    *(short *)(param_1 + 0x61e) = (short)param_2;
    *(undefined *)(param_1 + 0x759) = 0;
    goto LAB_overlay0__8003564c;
  }

  iVar3 = FUN_80075074(iVar12,(int)*(short *)(param_1 + 0x6ac),(int)*(short *)(param_1 + 0x6ac));
  iVar7 = (int)*(short *)(param_1 + 0x61e) * (int)*(short *)(param_1 + 0x6ac);
  uVar8 = iVar7 >> 0xc;
  iVar4 = FUN_80086084(uVar8 << 0xc,(iVar7 >> 0x1f) << 0xc | uVar8 >> 0x14,iVar3,iVar3 >> 0x1f);

  iVar7 = param_1;
  iVar9 = iVar12;
  iVar10 = iVar12;
  for (iVar11 = 0; iVar11 < 2; iVar11 = iVar11 + 1) {
    if (*(short *)(iVar9 + 0x98) != 0) {

      uVar5 = FUN_80075bf4(iVar4 - *(short *)(iVar7 + 0x620),*(undefined4 *)(iVar10 + 0x9c));
      iVar6 = FUN_80075c14(uVar5,DAT_1f800000);
      iVar6 = (uint)*(ushort *)(iVar7 + 0x620) + iVar6;
      *(short *)(iVar7 + 0x620) = (short)iVar6;
      if (iVar6 * 0x10000 < 0) {
        *(undefined2 *)(iVar7 + 0x620) = 0;
      }
    }
    iVar10 = iVar10 + 4;
    iVar7 = iVar7 + 2;
    iVar9 = iVar9 + 2;
  }

  iVar12 = FUN_80075074(iVar12,(int)*(short *)(param_1 + 0x620),(int)*(short *)(param_1 + 0x622));
  iVar7 = (int)*(short *)(param_1 + 0x6ac);
  iVar12 = param_2 * iVar12 >> 0xc;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 3;
  }
  iVar7 = 0x800 - (iVar7 >> 2);
  if (iVar7 < 0x100) {
    iVar7 = 0x100;
  }

  *(short *)(param_1 + 0x742) =
       (short)(((int)*(short *)(param_1 + 0x742) + iVar12 + ((0x1000 - param_2) * iVar7 >> 0xc)) / 2
              );

  if (*(short *)(param_1 + 0x744) == 0) {
    if (param_2 < 0xe00) {
      sVar1 = (short)((*(short *)(param_1 + 0x61e) + -0x1800) / 2);
      *(short *)(param_1 + 0x744) = sVar1;
      if (sVar1 < 0x1001) {
        if (sVar1 < 1) {
          uVar2 = 1;
          goto LAB_overlay0__80035600;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x744) = 0x1000;
      }
    }
  }
  else {
    uVar2 = 0xffff;
    if (*(short *)(param_1 + 0x744) == -1) {
      if (0xf00 < param_2) {
        *(undefined2 *)(param_1 + 0x744) = 0;
      }
    }
    else {
LAB_overlay0__80035600:
      *(undefined2 *)(param_1 + 0x744) = uVar2;
    }
  }

  *(short *)(param_1 + 0x61e) = (short)iVar12;
  if (iVar12 < iVar3) {
    param_2 = (iVar12 << 0xc) / iVar3;
  }
  else {
    param_2 = 0x1000;
  }
  *(ushort *)(param_1 + 0x746) = *(ushort *)(param_1 + 0x620);
  if ((int)(uint)*(ushort *)(param_1 + 0x620) < (int)*(short *)(param_1 + 0x622)) {
    *(undefined2 *)(param_1 + 0x746) = *(undefined2 *)(param_1 + 0x622);
  }

LAB_overlay0__8003564c:
  iVar12 = FUN_overlay0__8003533c(param_1,param_2);
  if (*(short *)(param_1 + 0x128) != 0) {
    iVar7 = *(short *)(param_1 + 0x61e) + -0xc00;
    if ((iVar7 < 1) || (iVar12 < 1)) {
      *(undefined *)(param_1 + 0x759) = 0;
    }
    else {
      if (iVar12 < 0x930) {
        iVar7 = iVar7 * (iVar12 * 0x1bdd >> 0xc) >> 0xc;
      }
      iVar7 = iVar7 * iVar7 >> 0x11;
      if (0xff < iVar7) {
        iVar7 = 0xff;
      }
      *(char *)(param_1 + 0x759) = (char)iVar7;
    }
  }

  return iVar12;
}

bool FUN_overlay0__80035714(int param_1)

{

  bool bVar1;
  int iVar2;
  uint uVar3;

  if ((DAT_801d586b == 0) || ((*(byte *)(param_1 + 0x78d) & 2) != 0)) {

    bVar1 = false;
  }
  else {

    iVar2 = FUN_overlay0__8003d138();
    bVar1 = true;

    if (iVar2 == 0) {
      uVar3 = (uint)DAT_801d586b;
      if (*(uint *)(param_1 + 0x604) < *DAT_800b4a44 >> 1) {
        uVar3 = uVar3 + 1;
      }
      bVar1 = (int)uVar3 <= (int)*(short *)(param_1 + 0x608);
    }
  }

  return bVar1;
}

int FUN_overlay0__800357c8(int param_1,undefined4 *param_2)

{

  if (DAT_801c8570 * 5 - DAT_801c8570 / 2 <= param_1) {

    *param_2 = 1;
    return ((DAT_801c8570 * 5 - param_1) * 0x4cc) / (DAT_801c8570 / 2);
  }

  if (param_1 < DAT_801c8570 / 2) {

    *param_2 = 0;
    return 0;
  }

  *param_2 = 2;
  return 0x4cc;
}

int FUN_overlay0__80035874(int param_1,int param_2)

{

  int iVar1;

  if (param_2 < 1) {

    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {

    iVar1 = FUN_80075bf4((int)*(short *)(param_1 + 0xe), 0x1000);
    if (iVar1 < 0x1000) {

      iVar1 = FUN_80075bf4(iVar1,*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
      iVar1 = *(int *)(param_1 + 0x10) + iVar1;
    }
    else {

      iVar1 = *(int *)(param_1 + 0x14);
    }
  }

  return iVar1;
}

int FUN_overlay0__800358e0(uint param_1)

{

  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (6 < param_1) {
    param_1 = 6;
  }

  do {

    iVar1 = iVar2 + param_1 * 5;

    if (4 < iVar2) {
      return -1;
    }

    iVar2 = iVar2 + 1;
  } while (*(int *)(DAT_801c8568 + (char)(&UNK_overlay0__80046dd4)[iVar1] * 4 + 8) == 0);

  return (int)(char)(&UNK_overlay0__80046dd4)[iVar1];
}

int FUN_overlay0__80035948(int param_1,int param_2)

{

  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;

  iVar12 = *(int *)(DAT_801c8568 + (uint)*(byte *)(param_1 + 0x789) * 4 + 8) + 4;
  iVar5 = param_2 * 0x28 + iVar12;
  iVar6 = *(int *)(iVar5 + 0x18);
  iVar5 = (int)*(short *)(param_1 + *(char *)(iVar5 + 0x12) * 2 + 0x348) * *(int *)(param_1 + 0x30)
          >> 8;

  if ((DAT_overlay0__80046f48 != 0) && (iVar9 = 0, (*(byte *)(param_1 + 0x78d) & 0x10) == 0)) {

    iVar10 = 0;
    iVar7 = param_1;
    do {
      puVar1 = (ushort *)(iVar7 + 0x498);
      iVar7 = iVar7 + 0x68;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + (uint)*puVar1;
    } while (iVar9 < 4);
    iVar5 = (iVar10 * 0x10000 >> 0x12) * iVar5 >> 0xc;
  }

  if (iVar6 < 0) {

    uVar3 = FUN_80075bf4(-iVar6,iVar5);
    uVar11 = *(uint *)(param_2 * 0x28 + iVar12 + 0x20);
    if ((int)uVar11 < 1) goto LAB_overlay0__80035aec;
    uVar8 = ((int)uVar3 >> 0x1f) << 0xc | uVar3 >> 0x14;
    iVar5 = -(int)(short)DAT_80093150[uVar11 & 0xfff];
  }
  else {

    uVar3 = FUN_80075bf4(iVar6,iVar5);
    uVar11 = *(uint *)(param_2 * 0x28 + iVar12 + 0x20);
    if (-1 < (int)uVar11) goto LAB_overlay0__80035aec;
    iVar5 = (int)(short)DAT_80093150[uVar11 & 0xfff];
    uVar8 = ((int)uVar3 >> 0x1f) << 0xc | uVar3 >> 0x14;
  }

  uVar3 = FUN_80086084(uVar3 << 0xc,uVar8,iVar5 + 0x1000,iVar5 + 0x1000 >> 0x1f);

LAB_overlay0__80035aec:
  bVar2 = *(byte *)(param_1 + 0x1d);
  uVar4 = FUN_80081288(uVar3,6);
  iVar6 = FUN_80075bf4((int)(short)DAT_801c8692[(uint)bVar2 * 0x14],uVar4);
  iVar5 = *(int *)(param_1 + 0x344);
  iVar6 = iVar6 + DAT_801c8694[(uint)bVar2 * 10];
  if ((iVar6 <= iVar5) && (iVar5 = iVar6, iVar6 < 0x58e8)) {
    iVar5 = 0x58e8;
  }

  return iVar5;
}

void FUN_overlay0__80035b68(int param_1)

{

  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;

  puVar2 = *(uint **)(DAT_801c8568 + (uint)*(byte *)(param_1 + 0x789) * 4 + 8);
  uVar4 = *puVar2;

  *(undefined *)(param_1 + 0x78b) = *(undefined *)(param_1 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x794);

  if (*(byte *)(param_1 + 0x78a) == uVar4) {

    *(undefined *)(param_1 + 0x78c) = *(undefined *)(puVar2 + uVar4 * 10 + -9);
  }
  else {

    *(undefined *)(param_1 + 0x78c) =
         *(undefined *)(puVar2 + (uint)*(byte *)(param_1 + 0x78a) * 10 + 1);
  }

  if (*(byte *)(param_1 + 0x78c) == 0) {

    *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x344);
  }
  else if (*(byte *)(param_1 + 0x78c) < 3) {

    uVar3 = (uint)*(byte *)(param_1 + 0x78a);
    if (uVar3 == uVar4) {
      uVar3 = uVar3 - 1;
    }
    uVar1 = FUN_overlay0__80035948(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x794) = uVar1;
  }

  return;
}

undefined4 FUN_overlay0__80035c48(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{

  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;

  piVar3 = *(int **)(DAT_801c8568 + param_1 * 4 + 8);
  iVar4 = *piVar3;
  uVar2 = 1;

  if (piVar3[6] <= param_3) {

    uVar7 = 0;
    if (param_3 < piVar3[iVar4 * 10 + -4]) {
      do {

        if (iVar4 < (int)uVar7) {
          return 0;
        }

        uVar1 = uVar7;
        if ((uVar7 & 1) == 0) {
          uVar1 = -uVar7;
        }
        param_2 = param_2 + uVar1;

        if (param_2 < 0) {
          iVar5 = param_2 + iVar4;
        }
        else {
          iVar5 = param_2;
          if (iVar4 <= param_2) {
            iVar5 = param_2 - iVar4;
          }
        }

        iVar6 = iVar5 + -1;
        if (iVar5 != 0) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + iVar4;
          }
          if ((piVar3[iVar6 * 10 + 6] <= param_3) && (param_3 < piVar3[iVar5 * 10 + 6])) {
            *param_5 = iVar6;
            *param_4 = iVar5;
            return 3;
          }
        }

        uVar7 = uVar7 + 1;
      } while( true );
    }
    uVar2 = 2;
  }

  *param_5 = iVar4 + -1;
  *param_4 = 0;

  return uVar2;
}

undefined4
FUN_overlay0__80035d68(int param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{

  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_30;
  int local_2c;

  local_30 = 0;
  local_2c = 0;
  iVar9 = *DAT_800b4a44;
  iVar11 = *(int *)(DAT_801c8568 + param_1 * 4 + 8) + 4;
  iVar2 = iVar9;

  if (param_3 < 0) {
LAB_overlay0__80035df8:
    param_3 = param_3 + iVar2;
  }
  else if (iVar9 <= param_3) {
    iVar2 = -iVar9;
    goto LAB_overlay0__80035df8;
  }

  iVar2 = FUN_overlay0__80035c48(param_1,param_2,param_3,&local_30,&local_2c);
  if (iVar2 == 2) {

    iVar6 = *(int *)(local_2c * 0x28 + iVar11 + 0x14);
    iVar2 = *(int *)(local_30 * 0x28 + iVar11 + 0x14);
    uVar7 = param_3 - iVar6;
  }
  else {
    if (2 < iVar2) {
      if (iVar2 != 3) {
        return 0;
      }

      iVar6 = *(int *)(local_2c * 0x28 + iVar11 + 0x14);
      uVar7 = param_3 - iVar6;
      iVar6 = *(int *)(local_30 * 0x28 + iVar11 + 0x14) - iVar6;
      goto LAB_overlay0__80035f00;
    }
    if (iVar2 != 1) {
      return 0;
    }

    iVar6 = *(int *)(local_2c * 0x28 + iVar11 + 0x14);
    iVar2 = *(int *)(local_30 * 0x28 + iVar11 + 0x14);
    uVar7 = (param_3 + iVar9) - iVar6;
  }
  iVar6 = (iVar2 + iVar9) - iVar6;

LAB_overlay0__80035f00:
  uVar3 = FUN_80086084(uVar7 << 0xc,((int)uVar7 >> 0x1f) << 0xc | uVar7 >> 0x14,iVar6,iVar6 >> 0x1f);
  piVar8 = (int *)(local_2c * 0x28 + iVar11);
  iVar9 = piVar8[2];
  iVar11 = local_30 * 0x28 + iVar11;
  iVar2 = piVar8[1];
  iVar6 = *(int *)(iVar11 + 4);
  iVar11 = *(int *)(iVar11 + 8);

  if (*piVar8 == 0) {

    iVar6 = FUN_80075a5c(uVar3,iVar6 - iVar2);
    *param_4 = iVar6 + iVar2;
    iVar4 = FUN_80075a5c(uVar3,iVar11 - iVar9);
    iVar4 = iVar4 + iVar9;
  }
  else {

    iVar10 = piVar8[6];
    sVar1 = DAT_80093150[piVar8[9] & 0xfffU];
    iVar5 = FUN_80075a5c((int)(short)DAT_80093950[piVar8[9] & 0xfffU],iVar10);
    iVar5 = iVar2 - iVar5;
    iVar4 = FUN_80075a5c(-(int)sVar1,iVar10);
    iVar4 = iVar9 + iVar4;
    iVar2 = FUN_80081af0(iVar5 - iVar2,iVar9 - iVar4);
    iVar11 = FUN_80081af0(iVar5 - iVar6,iVar11 - iVar4);
    if (iVar10 < 1) {
      iVar10 = -iVar10;
      if (iVar2 < iVar11) {
        iVar2 = iVar2 + 0x1000;
      }
    }
    else if (iVar11 < iVar2) {
      iVar11 = iVar11 + 0x1000;
    }
    iVar11 = FUN_8007596c(uVar3,iVar11 - iVar2);
    uVar7 = iVar2 + iVar11 & 0xfff;
    iVar2 = FUN_80075a5c((int)(short)DAT_80093150[uVar7],iVar10);
    *param_4 = iVar5 - iVar2;
    iVar2 = FUN_80075a5c((int)(short)DAT_80093950[uVar7],iVar10);
    iVar4 = iVar4 + iVar2;
  }

  *param_5 = iVar4;

  return 1;
}

bool FUN_overlay0__800360c8(int param_1,undefined4 param_2)

{

  int iVar1;
  undefined auStack_10 [4];
  int local_c;

  if (*(int **)(DAT_801c8568 + 0x1c) != (int *)0x0) {

    if (**(int **)(DAT_801c8568 + 0x1c) < param_1) {
      param_1 = 0;
    }

    iVar1 = FUN_overlay0__80035c48(5,param_1,param_2,auStack_10,&local_c);
    if (iVar1 != 0) {

      return *(int *)(*(int *)(DAT_801c8568 + 0x1c) + local_c * 0x28 + 4) != 0;
    }
  }

  return false;
}

undefined4
FUN_overlay0__80036160(int param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;

  iVar8 = 0;
  iVar10 = 0;
  piVar6 = *(int **)(DAT_801c8568 + param_1 * 4 + 8);
  piVar9 = piVar6 + 1;
  iVar4 = *DAT_800b4a44;
  uVar11 = 0;
  iVar2 = iVar4;

  if (-1 < param_3) {
    if (param_3 < iVar4) goto LAB_overlay0__800361e0;
    iVar2 = -iVar4;
  }
  param_3 = param_3 + iVar2;
LAB_overlay0__800361e0:
  if (param_3 < iVar4 / 2) {
    param_3 = param_3 + iVar4;
  }

  uVar1 = 0;
  if (piVar6[6] <= param_3) {
    iVar2 = *piVar6 + -1;
    if (param_3 < piVar9[*piVar6 * 10 + -5]) {
      if (0 < iVar2) {

        iVar4 = 0x28;
        iVar8 = 0;
        piVar6 = piVar9;
        do {
          iVar10 = iVar8;
          iVar7 = piVar6[5];
          iVar8 = iVar10 + 1;
          if (iVar7 <= param_3) {
            iVar5 = *(int *)((int)piVar9 + iVar4 + 0x14);
            uVar3 = param_3 - iVar7;
            if (param_3 < iVar5) {
              iVar5 = iVar5 - iVar7;
              uVar11 = FUN_80086084(uVar3 * 0x1000,((int)uVar3 >> 0x1f) << 0xc | uVar3 >> 0x14,iVar5
                                    ,iVar5 >> 0x1f);
              break;
            }
          }
          iVar4 = iVar4 + 0x28;
          piVar6 = piVar6 + 10;
        } while (iVar8 < iVar2);
      }

      iVar7 = piVar9[iVar10 * 10 + 1];
      iVar10 = piVar9[iVar10 * 10 + 2];
      iVar4 = piVar9[iVar8 * 10 + 2];
      iVar2 = FUN_80075a5c(uVar11,piVar9[iVar8 * 10 + 1] - iVar7);
      *param_4 = iVar2 + iVar7;
      iVar2 = FUN_80075a5c(uVar11,iVar4 - iVar10);
      uVar1 = 1;
      *param_5 = iVar2 + iVar10;
    }
    else {
      uVar1 = 0;
    }
  }

  return uVar1;
}

void FUN_overlay0__80036340(int param_1)

{

  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;

  piVar3 = *(int **)(DAT_801c8568 + (uint)*(byte *)(param_1 + 0x789) * 4 + 8);
  iVar5 = 0;
  iVar7 = *piVar3;
  piVar3 = piVar3 + 1;
  *(char *)(param_1 + 0x78a) = (char)iVar7;
  piVar6 = piVar3;

  if (0 < iVar7) {
    do {
      if (*(int *)(param_1 + 0x604) < piVar6[5]) {
        *(char *)(param_1 + 0x78a) = (char)iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 10;
    } while (iVar5 < iVar7);
  }

  iVar5 = (uint)*(byte *)(param_1 + 0x78a) + iVar7 + -1;
  if (iVar7 <= iVar5) {
    iVar5 = iVar5 - iVar7;
    do {
      bVar2 = iVar7 <= iVar5;
      iVar5 = iVar5 - iVar7;
    } while (bVar2);
    iVar5 = iVar5 + iVar7;
  }

  cVar1 = *(char *)(piVar3 + iVar5 * 10);
  *(char *)(param_1 + 0x78c) = cVar1;

  if (cVar1 == '\0') {

    *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x344);
  }
  else {

    uVar4 = FUN_overlay0__80035948(param_1, (uint)*(byte *)(param_1 + 0x78a));
    *(undefined4 *)(param_1 + 0x794) = uVar4;
  }

  FUN_overlay0__80035b68(param_1);

  return;
}

int FUN_overlay0__8003643c(int param_1,undefined4 param_2,undefined4 *param_3)

{

  ushort *puVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;

  *param_3 = 0;
  iVar9 = 0x1000;

  if (*(char *)(param_1 + 0x789) == '\x04') {
    return 0x1000;
  }

  puVar7 = *(uint **)(DAT_801c8568 + (uint)*(byte *)(param_1 + 0x789) * 4 + 8);

  if (((uint)*(byte *)(param_1 + 0x78a) == *puVar7) &&
     (*(int *)(param_1 + 0x604) < *DAT_800b4a44 / 2)) {

    *(undefined *)(param_1 + 0x78a) = 0;
LAB_overlay0__80036520:
    FUN_overlay0__80035b68(param_1);
  }
  else {

    bVar2 = *(byte *)(param_1 + 0x78a);
    if (((int)(uint)bVar2 < (int)*puVar7) &&
       ((int)puVar7[(uint)bVar2 * 10 + 6] <= *(int *)(param_1 + 0x604))) {
      *(byte *)(param_1 + 0x78a) = bVar2 + 1;
      goto LAB_overlay0__80036520;
    }
  }

  bVar2 = *(byte *)(param_1 + 0x1d);
  if (1 < *(byte *)(param_1 + 0x78b) - 3) {

    if (*(char *)(param_1 + 0x78c) == '\0') goto LAB_overlay0__80036760;
    iVar8 = *(int *)(param_1 + 0x6a4);
    iVar6 = *(int *)(param_1 + 0x794);
    if (iVar8 <= iVar6) goto LAB_overlay0__80036760;
    uVar4 = FUN_80075bf4(iVar8 + iVar6,iVar8 - iVar6);

    if ((DAT_overlay0__80046f48 == 0) || (iVar6 = 0, (*(byte *)(param_1 + 0x78d) & 0x10) != 0)) {
      iVar6 = (int)((uint)*(ushort *)(param_1 + 0x36) << 0x10) >> 0x11;
    }
    else {

      iVar5 = 0;
      iVar8 = param_1;
      do {
        puVar1 = (ushort *)(iVar8 + 0x498);
        iVar8 = iVar8 + 0x68;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + (uint)*puVar1;
      } while (iVar6 < 4);
      iVar6 = (iVar5 * 0x10000 >> 0x10) * (int)*(short *)(param_1 + 0x36) >> 0xf;
    }

    iVar8 = iVar6 * *(short *)(param_1 + *(char *)((int)puVar7 +
                                                  (uint)*(byte *)(param_1 + 0x78a) * 0x28 + 0x16) *
                                         2 + 0x358) >> 8;
    iVar6 = *(int *)(param_1 + 0x420);
    if (*(int *)(param_1 + 0x420) < iVar8) {
      iVar6 = iVar8;
    }
    iVar6 = FUN_80075bf4(uVar4,(0x1000 - (short)DAT_80093150
                                                [puVar7[(uint)*(byte *)(param_1 + 0x78a) * 10 + 8] &
                                                 0xfff]) * iVar6 >> 0xc);
    if (*(short *)(param_1 + 0x76a) != 0) {
      iVar6 = iVar6 + (*(short *)(param_1 + 0x76a) * 0x14000 >> 0xc);
    }

    iVar8 = FUN_overlay0__8003c360
                      (puVar7[(uint)*(byte *)(param_1 + 0x78a) * 10 + 2] - *(int *)(param_1 + 0x65c)
                       ,puVar7[(uint)*(byte *)(param_1 + 0x78a) * 10 + 3] -
                        *(int *)(param_1 + 0x660));
    if (iVar6 < iVar8) {
      if (0x1000 < (short)DAT_801c8690[(uint)bVar2 * 0x14]) {
        iVar5 = FUN_80075bf4(iVar6,(short)DAT_801c8690[(uint)bVar2 * 0x14] + -0x1000);
        iVar8 = iVar8 - iVar6;
        if (iVar8 < iVar5 + 0x32000) {
          *param_3 = 1;
        }
        if (iVar8 < iVar5) {
          iVar9 = FUN_80075e90(iVar8,iVar5,0);
        }
      }
      goto LAB_overlay0__80036760;
    }

    uVar3 = 4;
    if (*(char *)(param_1 + 0x78b) == '\0') {
      uVar3 = 3;
    }
    *(undefined *)(param_1 + 0x78b) = uVar3;
  }

  *param_3 = 2;
LAB_overlay0__80036760:
  if (*(char *)(param_1 + 0x789) != '\x03') {
    iVar9 = iVar9 * (short)DAT_801c86b6[(uint)bVar2 * 0x14] >> 0xc;
  }

  return iVar9;
}

void FUN_overlay0__800367ac(int param_1,undefined param_2)

{

  *(undefined *)(param_1 + 0x789) = param_2;

  FUN_overlay0__80036340(param_1);

  return;
}

undefined4 FUN_overlay0__800367cc(int param_1)

{

  undefined4 uVar1;

  if (((param_1 != 1) && (param_1 != 6)) || (uVar1 = 2, *(int *)(DAT_801c8568 + 0x10) == 0)) {

    uVar1 = 0xffffffff;
  }

  return uVar1;
}

undefined4 FUN_overlay0__80036808(int param_1)

{

  undefined4 uVar1;

  if (((param_1 != 2) && (param_1 != 6)) || (uVar1 = 1, *(int *)(DAT_801c8568 + 0xc) == 0)) {

    uVar1 = 0xffffffff;
  }

  return uVar1;
}

void FUN_overlay0__80036844(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

  int iVar1;

  iVar1 = FUN_overlay0__800360c8(param_2,param_3);

  if (iVar1 == 0) {

    FUN_overlay0__800367cc(param_1);
  }
  else {

    FUN_overlay0__80036808(param_1);
  }

  return;
}

void FUN_overlay0__80036890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

  int iVar1;

  iVar1 = FUN_overlay0__800360c8(param_2,param_3);

  if (iVar1 == 0) {

    FUN_overlay0__80036808(param_1);
  }
  else {

    FUN_overlay0__800367cc(param_1);
  }

  return;
}

undefined4 FUN_overlay0__800368dc(int param_1)

{

  undefined4 performanceRating;

  if (param_1 == 6) {

    performanceRating = 0xffffffff;
  }
  else {

    performanceRating = FUN_overlay0__800358e0(6);
  }

  return performanceRating;
}

undefined4 FUN_overlay0__80036910(int param_1)

{

  if ((*(int *)(DAT_801c8568 + 0x14) != 0) && (param_1 != 3)) {

    return 3;
  }

  return 0xffffffff;
}

undefined4 FUN_overlay0__80036948(int param_1)

{

  if ((*(int *)(DAT_801c8568 + 0x18) != 0) && (param_1 != 4)) {

    return 4;
  }

  return 0xffffffff;
}

undefined4 FUN_overlay0__80036980(int param_1,undefined4 param_2)

{

  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined uVar5;

  uVar2 = DAT_800af231;
  uVar5 = (undefined)param_2;

  switch(param_2) {
  case 0:

    *(undefined *)(param_1 + 0x788) = 0;
    break;
  case 2:

    *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) | 8;
  case 4:

    if (*(char *)(param_1 + 0x789) != '\x03') {
      iVar3 = FUN_overlay0__80036910(*(char *)(param_1 + 0x789));
      if (iVar3 != -1) {
        FUN_overlay0__800367ac(param_1, uVar5);
        *(undefined *)(param_1 + 0x786) = uVar5;
        return 1;
      }
      return 0;
    }
    goto switchD_overlay0__800369c4_caseD_6;
  case 3:

    iVar3 = FUN_overlay0__80036948(*(undefined *)(param_1 + 0x789));
    if (iVar3 != -1) {
      FUN_overlay0__800367ac(param_1, uVar5);
      FUN_overlay0__8003ffdc(*(undefined *)(param_1 + 0x45c),uVar2);
      *(undefined *)(param_1 + 0x786) = uVar5;
      return 1;
    }
    return 0;
  case 5:
    goto switchD_overlay0__800369c4_caseD_5;
  case 6:
  case 7:
    goto switchD_overlay0__800369c4_caseD_6;
  }

  cVar1 = *(char *)(param_1 + 0x786);
  if (((cVar1 == '\x02') || (cVar1 == '\x04')) || (cVar1 == '\x03')) {
switchD_overlay0__800369c4_caseD_5:

    uVar4 = FUN_overlay0__800358e0(6);
    FUN_overlay0__800367ac(param_1,uVar4);
    *(undefined *)(param_1 + 0x786) = uVar5;
  }
  else {

    if ((*(char *)(param_1 + 0x45d) == '\0') && (cVar1 == '\0')) {
      FUN_overlay0__80036340(param_1);
    }
switchD_overlay0__800369c4_caseD_6:
    *(undefined *)(param_1 + 0x786) = uVar5;
  }

  return 1;
}

void FUN_overlay0__80036acc(int param_1)

{

  int raceConfigData;
  undefined4 difficultyLevel;

  if ((*(char *)(param_1 + 0x6fc) == '\0') &&
     (*(undefined *)(param_1 + 0x6fc) = 1, *(byte *)(param_1 + 0x786) - 2 < 3)) {

    return;
  }

  raceConfigData = FUN_80060e94(DAT_800af230);

  if ((*(ushort *)(raceConfigData + 8) & 0x20) == 0) {

    if (DAT_801d5866 < 9) {
      if ((DAT_801d5866 < 7) && (DAT_801d5866 != 3)) {
        difficultyLevel = 1;
        goto LAB_overlay0__80036b88;
      }
    }
    else if (DAT_801d5866 != 0xb) {
      difficultyLevel = 1;
      goto LAB_overlay0__80036b88;
    }
    difficultyLevel = 5;
  }
  else {

    difficultyLevel = 5;
  }

LAB_overlay0__80036b88:
  FUN_overlay0__80036980(param_1,difficultyLevel);

  return;
}
