// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_004.h"
#include "scus_944.88_part_003.h"
#include "scus_944.88_part_006.h"
#include <stdint.h>

// Forward declarations for GTE (Geometry Transformation Engine) functions
void gte_ldVXY0(undefined4 value);
void gte_ldVXY1(undefined4 value);
void gte_ldVXY2(undefined4 value);
void gte_ldVZ0(undefined4 value);
void gte_ldVZ1(undefined4 value);
void gte_ldVZ2(undefined4 value);
void gte_rtpt_b(void);
uint gte_stFLAG(void);
void gte_stSXY0(void);
void gte_stSXY1(void);
void gte_stSXY2(void);
int gte_stSZ2(void);

void FUN_800670f0(int param_1,undefined4 param_2,short *param_3,int param_4,int param_5,uint param_6)
{

  uint *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;

  if ((intptr_t)DAT_1f800068 <= (intptr_t)DAT_1f80006c) {

    uVar16 = (int)param_6 >> 1 & 1;
    iVar4 = uVar16 * 0x208 + 0x70;
    param_6 = param_6 & 1;

    if (param_5 == 1) {
      iVar4 = uVar16 * 0x118 + 0x480;
    }
    if (param_5 == 2) {
      iVar4 = uVar16 * 0xdc + 0x6b0;
    }

    iVar9 = (int)param_3[4];
    if (param_6 != 0) {
      iVar9 = iVar9 + 0x800;
    }
    // Note: FUN_8007af8c signature mismatch - called with 4 params but declared with 1
    // Using only first parameter for now
    FUN_8007af8c((int)&DAT_1f80009c);

    DAT_1f8000b0 = (int)*param_3 << 4;
    DAT_1f8000b4.value = (int)param_3[1] << 4;
    DAT_1f8000b8 = (int)param_3[2] << 4;

    puVar6 = (undefined4 *)((intptr_t)param_1 + 8);
    puVar11 = &DAT_1f800000;
    do {

      puVar10 = puVar11;
      puVar5 = puVar6;
      uVar13 = puVar5[1];
      uVar14 = puVar5[2];
      uVar15 = puVar5[3];
      *puVar10 = *puVar5;
      puVar10[1] = uVar13;
      puVar10[2] = uVar14;
      puVar10[3] = uVar15;
      puVar6 = puVar5 + 4;
      puVar11 = puVar10 + 4;
    } while (puVar6 != (undefined4 *)((intptr_t)param_1 + 0x68));

    uVar13 = puVar5[5];
    puVar10[4] = *puVar6;
    puVar10[5] = uVar13;

    FUN_8007b008(0x1f800000,param_2);
    FUN_8007b008(0x1f800000,&DAT_1f80009c);

    if (param_6 != 0) {
      DAT_1f800004._0_2_ = -(short)DAT_1f800004._0_2_;
      DAT_1f800010._0_2_ = -(short)DAT_1f800010._0_2_;
      DAT_1f800008._2_2_ = -DAT_1f800008._2_2_;
    }

    FUN_8007b8a0(0x1f800000,0x1000,0x10,0xc);
    cVar2 = DAT_1f800398;

    if (param_6 != 0) {
      if (DAT_1f800398 == '\0') {
        DAT_1f800398 = -1;
      }
      else {
        DAT_1f800398 = '\0';
      }
    }

    FUN_80066ef8(0x1f800000,param_4 + iVar4);

    iVar4 = DAT_1f80039c;
    puVar6 = DAT_1f800068;

    if (uVar16 == 0) {
      puVar11 = (undefined4 *)((intptr_t)param_4 + 0x48);
    }
    else {
      puVar11 = (undefined4 *)((intptr_t)param_4 + 0x5c);
    }

    uVar16 = (uint)*(ushort *)((intptr_t)param_4 + uVar16 * 2 + 0x44);
    uVar13 = puVar11[3];
    gte_ldVZ0(uVar16);
    gte_ldVZ1(uVar16);
    gte_ldVZ2(uVar16);
    gte_ldVXY0(*puVar11);
    gte_ldVXY1(puVar11[1]);
    gte_ldVXY2(puVar11[2]);
    gte_rtpt_b();

    iVar9 = *(int *)((intptr_t)param_4 + 0x40);
    DAT_1f800398 = cVar2;

    DAT_1f800068[1] = 0x2c808080;
    *(undefined2 *)(puVar6 + 3) = 0x2f;
    *(undefined2 *)(puVar6 + 5) = 0;
    *(undefined2 *)(puVar6 + 7) = 0x1717;
    *(undefined2 *)(puVar6 + 9) = 0x2f00;
    iVar9 = iVar9 + iVar4;
    *puVar6 = 0x9000000;
    uVar8 = (undefined2)((uint)iVar9 >> 0x10);
    *(undefined2 *)((intptr_t)puVar6 + 0xe) = uVar8;
    uVar3 = (undefined2)iVar9;
    *(undefined2 *)((intptr_t)puVar6 + 0x16) = uVar3;

    uVar7 = gte_stFLAG();
    gte_stSXY0();
    gte_stSXY1();
    gte_stSXY1();
    gte_stSXY2();
    gte_ldVXY0(uVar13);
    gte_ldVXY1(0);
    gte_rtpt_b();

    uVar12 = (uint)(ushort)DAT_1f800098;
    *(undefined2 *)((intptr_t)puVar6 + 0x3e) = uVar3;
    puVar6[10] = 0x9000000;
    puVar6[0xb] = 0x2c808080;
    *(undefined2 *)((intptr_t)puVar6 + 0x36) = uVar8;
    *(undefined2 *)(puVar6 + 0xd) = 0x2f;
    *(undefined2 *)(puVar6 + 0xf) = 0x2f2f;
    *(undefined2 *)(puVar6 + 0x11) = 0x1717;
    *(undefined2 *)(puVar6 + 0x13) = 0x2f00;

    gte_stSXY0();
    gte_stSXY0();
    gte_stSXY1();
    gte_stSXY1();
    uVar16 = gte_stFLAG();
    iVar4 = gte_stSZ2();

    if (-1 < (int)(uVar7 | uVar16)) {

      uVar16 = (iVar4 << (uVar12 & 0x1f)) >> 0xd;
      if (0xfff < (int)uVar16) {
        uVar16 = 0xfff;
      }
      iVar9 = DAT_1f800064 + uVar16 * 4;

      uVar7 = iVar9 - 2U & 3;
      uVar12 = *(int *)((iVar9 - 2U) - uVar7) << (3 - uVar7) * 8 |
               uVar16 & 0xffffffffU >> (uVar7 + 1) * 8;
      uVar16 = iVar9 - 2U & 3;
      puVar1 = (uint *)((iVar9 - 2U) - uVar16);
      *puVar1 = *puVar1 & -1 << (uVar16 + 1) * 8 | (uint)((intptr_t)puVar6 << 8) >> (3 - uVar16) * 8;

      uVar16 = ((intptr_t)puVar6 + 2U) & 3;
      puVar1 = (uint *)((intptr_t)(((intptr_t)puVar6 + 2U) - uVar16));
      *puVar1 = *puVar1 & -1 << (uVar16 + 1) * 8 | uVar12 >> (3 - uVar16) * 8;

      uVar16 = iVar9 - 2U & 3;
      iVar4 = *(int *)((iVar9 - 2U) - uVar16);
      uVar7 = iVar9 - 2U & 3;
      puVar1 = (uint *)((iVar9 - 2U) - uVar7);
      *puVar1 = *puVar1 & -1 << (uVar7 + 1) * 8 |
                (uint)((intptr_t)(puVar6 + 10) * 0x100) >> (3 - uVar7) * 8;

      uVar7 = ((intptr_t)puVar6 + 0x2aU) & 3;
      puVar1 = (uint *)((intptr_t)(((intptr_t)puVar6 + 0x2aU) - uVar7));
      *puVar1 = *puVar1 & -1 << (uVar7 + 1) * 8 |
                (iVar4 << (3 - uVar16) * 8 | uVar12 & 0xffffffffU >> (uVar16 + 1) * 8) >>
                (3 - uVar7) * 8;
      DAT_1f800068 = puVar6 + 0x14;
    }
  }

  return;
}

int FUN_80067444(int param_1,byte *param_2,int param_3)
{

  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  int local_30;
  uint uVar17;
  uint uVar24;
  uint uVar36;
  uint uVar40;
  uint uVar55;
  short sVar9;
  int iVar26;
  int iVar54;
  bool bVar15;
  uint *puVar48;
  undefined4 *puVar52;

  puVar4 = (undefined4 *)(param_1 + 8);
  puVar2 = &DAT_1f800000;
  do {
    puVar5 = puVar2;
    puVar3 = puVar4;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    *puVar5 = *puVar3;
    puVar5[1] = uVar7;
    puVar5[2] = uVar8;
    puVar5[3] = uVar9;
    puVar4 = puVar3 + 4;
    puVar2 = puVar5 + 4;
  } while (puVar4 != (undefined4 *)(param_1 + 0x68));
  pbVar14 = param_2 + 0x10;
  uVar7 = puVar3[5];
  puVar5[4] = *puVar4;
  puVar48 = DAT_1f80006c;
  puVar52 = (undefined4 *)0x0;
  iVar54 = 0;
  uVar55 = 0;
  uVar36 = 0;
  while( true ) {
    if ((int)(uVar55 & (int)DAT_1f800399) < 0) {

      uVar6 = *(undefined2 *)((puVar52[2] & 0x3fe) + DAT_1f800074);
      uVar7 = *(undefined2 *)((puVar52[2] >> 9 & 0x3fe) + DAT_1f800074);
      *(undefined2 *)(DAT_1f800068 + 3) =
           *(undefined2 *)((uVar55 >> 4 & 0x3fe) + DAT_1f800074);
      *(undefined2 *)(DAT_1f800068 + 5) = uVar6;
      *(undefined2 *)(DAT_1f800068 + 7) = uVar7;
      uVar36 = DAT_1f8000d0;
      uVar17 = DAT_1f8000c0;
      DAT_1f800068[2] = DAT_1f8000b0;
      DAT_1f800068[4] = uVar17;
      DAT_1f800068[6] = uVar36;
      uVar6 = DAT_1f8003ae;
      sVar9 = DAT_1f8003ac;
      uVar36 = (uint)DAT_1f8003ac;
      DAT_1f800068[1] = DAT_1f8003a4;
      *(short *)((int)DAT_1f800068 + 0xe) = sVar9;
      *(undefined2 *)((int)DAT_1f800068 + 0x16) = uVar6;
      *(undefined *)((int)DAT_1f800068 + 3) = 7;
      uVar17 = iVar54 - 0x1eU & 3;
      uVar36 = *(int *)((iVar54 - 0x1eU) - uVar17) << (3 - uVar17) * 8 |
               uVar36 & 0xffffffffU >> (uVar17 + 1) * 8;
      uVar17 = iVar54 - 0x1eU & 3;
      puVar48 = (uint *)((iVar54 - 0x1eU) - uVar17);
      *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                 (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
      uVar17 = (int)DAT_1f800068 + 2U & 3;
      puVar48 = (uint *)(((int)DAT_1f800068 + 2U) - uVar17);
      *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
      DAT_1f800068 = DAT_1f800068 + 8;
    }

    puVar48 = DAT_1f80006c;
    uVar17 = iVar54 - 0x1eU & 3;
    iVar26 = *(int *)((iVar54 - 0x1eU) - uVar17);
    DAT_1f800068[1] = puVar52[3];
    uVar55 = DAT_1f8000d0;
    uVar40 = DAT_1f8000c0;
    DAT_1f800068[2] = DAT_1f8000b0;
    DAT_1f800068[3] = uVar40;
    DAT_1f800068[4] = uVar55;
    *DAT_1f800068 =
         (iVar26 << (3 - uVar17) * 8 | uVar36 & 0xffffffffU >> (uVar17 + 1) * 8) >> 8 |
         0x4000000;
    bVar15 = puVar48 < DAT_1f800068;
    uVar17 = iVar54 - 0x1eU & 3;
    puVar48 = (uint *)((iVar54 - 0x1eU) - uVar17);
    *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
               (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
    DAT_1f800068 = DAT_1f800068 + 5;
    if (bVar15) break;
  }
  puVar5[5] = uVar7;
  FUN_8007b008(0x1f800000,pbVar14);
  uVar13 = 0;
  iVar12 = *(int *)(param_2 + 0xc);
  uVar15 = (uint)param_2[1];
  bVar1 = param_2[4];
  DAT_1f8003ac = *(undefined2 *)(param_2 + 6);
  iVar10 = iVar12 + 0x868;
  if (param_3 == 0) {
    DAT_1f800398 = 0;
  }
  else {
    DAT_1f800398 = 0xff;
  }
  DAT_1f80039c = uVar15 << 0x18;
  DAT_1f8003a0 = (uint)param_2[2] << 0x10;
  uVar6 = (uint)CONCAT12(bVar1,CONCAT11(bVar1,bVar1));
  DAT_1f8003a4 = uVar6 | 0x26000000;
  DAT_1f8003a8 = uVar6 | 0x2e000000;
  DAT_1f8003ae = *(ushort *)(param_2 + 8) | 0x20;
  if (bVar1 == 0) {
    DAT_1f800399 = 0;
  }
  else {
    DAT_1f800399 = 0xff;
  }
  iVar11 = *param_2 - 1;
  if (*param_2 == 0) {
    uVar13 = FUN_8007ae38(iVar10,&DAT_1f800014,*(undefined4 *)(param_1 + 0x78));
    iVar11 = FUN_8007aef4(iVar10,uVar13);
    if (iVar11 == -1) {
      return -1;
    }
  }
  FUN_8007b994(&local_48,param_1 + 0x7c,param_2 + 0x10);
  iVar10 = *(int *)(iVar10 + iVar11 * 8 + 8);
  FUN_8007b8a0(0x1f800000,*(undefined2 *)(iVar10 + 0x4e),*(undefined2 *)(iVar10 + 0x4c),0xc);
  DAT_1f800070 = *(undefined4 *)(iVar10 + 0x14);
  DAT_1f800074 = *(undefined4 *)(iVar10 + 0x18);
  uVar6 = FUN_8007b8f8(0x1f800000,iVar10 + 0x3c,iVar10 + 0x44);
  if ((uVar6 & 0x1f) == 0) {
    DAT_1f800068 = DAT_801c93ec;
    DAT_1f80006c = DAT_801c93f0 + -0x2000;
    local_48 = local_48 >> 3;
    local_46 = local_46 >> 3;
    local_44 = local_44 >> 3;
    local_3a = local_3a >> 3;
    local_42 = -(local_42 >> 3);
    local_40 = -(local_40 >> 3);
    local_3e = -(local_3e >> 3);
    local_3c = local_3c >> 3;
    local_38 = local_38 >> 3;
    local_30 = iVar10;
    if ((uVar6 >> 0x10 & 0x3f) == 0) {
      FUN_80061798(iVar10,&local_48);
    }
    else {
      FUN_80063ef4(iVar10,&local_48);
    }
    if ((uVar13 < 0x2400) && (uVar15 < 3)) {
      uVar7 = 2;
      if (uVar13 < 0x900) {
        uVar7 = 1;
      }
      if (uVar13 < 0x240) {
        uVar7 = 0;
      }
      DAT_1f8003b0 = *(undefined4 *)(iVar12 + uVar15 * 4 + 8);
      FUN_800670f0(param_1,pbVar14,param_2 + 0x30,iVar12,uVar7,0);
      FUN_800670f0(param_1,pbVar14,param_2 + 0x40,iVar12,uVar7,1);
      FUN_800670f0(param_1,pbVar14,param_2 + 0x50,iVar12,uVar7,2);
      FUN_800670f0(param_1,pbVar14,param_2 + 0x60,iVar12,uVar7,3);
    }
    if ((param_2[3] != 0) && ((iVar11 < 2 || (uVar15 == 3)))) {
      FUN_80068004(param_1,param_2,iVar12);
    }
    DAT_801c93ec = DAT_1f800068;
  }
  return iVar11;
}

void FUN_80067824(undefined4 param_1,uint param_2,short param_3)
{

  undefined2 local_10;
  short local_e;
  undefined2 local_c;
  undefined2 local_a;

  local_e = ((ushort)param_2 & 0x10) * 0x10 + param_3 * 4 + 0xe0;
  local_10 = (undefined2)((param_2 & 0xf) << 6);
  local_c = 0x40;
  local_a = 4;

  FUN_8007ba70(&local_10,param_1,0);
  FUN_8007af30();

  return;
}

void FUN_8006788c(undefined4 param_1,uint param_2)
{

  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  local_10 = (undefined2)((param_2 & 0xf) << 6);
  local_c = 0x40;
  local_e = (undefined2)((param_2 & 0x10) << 4);
  local_a = 0xe0;

  FUN_8007ba70(&local_10,param_1,0);
  FUN_8007af30();

  return;
}

void FUN_800678e8(int param_1,uint param_2,int param_3)
{

  short sVar1;
  int iVar2;
  undefined2 uVar3;

  sVar1 = ((ushort)param_2 & 0x10) * 0x10;
  uVar3 = (undefined2)((param_2 & 0xf) << 6);

  *(undefined2 *)(param_1 + 0xc) = uVar3;
  *(short *)(param_1 + 0xe) = sVar1 + 0xe0;

  iVar2 = param_1 + 8 + *(int *)(param_1 + 8);
  *(undefined2 *)(iVar2 + 4) = uVar3;
  *(short *)(iVar2 + 6) = sVar1;

  FUN_8007bc58(param_1,0);
  if (param_3 != 0) {
    FUN_8007bc1c(param_1,0);
  }

  return;
}

void FUN_80067960(ushort *param_1,ushort *param_2,uint param_3,undefined4 param_4)
{

  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;

  puVar5 = param_2 + 0x100;
  gte_ldRGB(0);
  gte_ldRFC((param_3 & 0xff) << 4);
  gte_ldGFC(param_3 >> 4 & 0xff0);
  gte_ldBFC(param_3 >> 0xc & 0xff0);
  puVar6 = param_1 + 0x100;

  do {
    uVar3 = (uint)*puVar5;
    puVar4 = param_1 + 0x10;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;

      if ((uVar3 & 1) == 0) {
        gte_ldIR0(param_4);
        gte_ldIRGB((uint)uVar1);
        gte_intpl();
        iVar2 = gte_stORGB();

        if ((uVar1 == 0) || (iVar2 != 0)) {
          uVar1 = (ushort)iVar2 | uVar1 & 0x8000;
        }
        else {
          uVar1 = 0x8000;
        }
      }

      *param_1 = uVar1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 >> 1;
    } while (param_1 != puVar4);

    puVar5 = puVar5 + 1;
  } while (param_1 != puVar6);

  return;
}

void FUN_80067a0c(ushort *param_1,ushort param_2,uint param_3)
{

  ushort uVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  uint in_t0;
  undefined4 *puVar10;
  uint in_t1;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  int in_t4;
  uint uVar17;
  int in_t5;
  int in_t6;
  undefined4 uVar18;
  undefined4 in_t7;
  uint *puVar19;
  int unaff_s1;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  uint *puVar25;
  ushort local_430 [4];
  uint local_428 [2];
  undefined auStack_420 [1024];

  if (*param_1 != 0) {
    puVar8 = local_430;
    DAT_1f800070 = auStack_420;
    uVar1 = *param_1;
    gte_ldVXY0(*(uint *)(param_1 + 0xe) & 0xffff);
    gte_ldVZ0(*(uint *)(param_1 + 0xe) >> 0x10);
    uVar11 = *(uint *)(param_1 + 0x10);
    gte_rtps_b();
    puVar4 = param_1;
    puVar14 = param_1 + 0xe;
    do {
      *puVar8 = (ushort)in_t0;
      if ((int)in_t0 < 0) {
        in_t0 = -in_t0;
      }
      if (in_t4 < 0) {
        param_2 = param_2 | 2;
      }
      puVar8[1] = (ushort)in_t1;
      if ((int)in_t1 < 0) {
        in_t1 = -in_t1;
      }
      if (in_t6 < 0) {
        param_2 = param_2 | 4;
      }
      puVar8[3] = (ushort)param_3;
      if ((int)param_3 < 0) {
        param_3 = -param_3;
      }
      if ((int)puVar4 < 0) {
        param_2 = param_2 | 8;
      }
      *(uint *)(puVar8 + 6) = in_t0 | in_t1 | param_3;
      if (in_t5 < 0) {
        param_2 = param_2 | 0x10;
      }
      *(undefined4 *)(puVar8 + 4) = in_t7;
      if (unaff_s1 < 0) {
        param_2 = param_2 | 0x20;
      }
      in_t0 = gte_stIR1();
      in_t1 = gte_stIR2();
      param_3 = gte_stIR3();
      unaff_s1 = gte_stFLAG();
      in_t7 = gte_stSXY2();
      gte_llir_b();
      gte_ldVXY1(in_t0 & 0xffff | in_t1 << 0x10);
      gte_ldVZ1(param_3);
      in_t4 = gte_stIR1();
      in_t6 = gte_stIR2();
      gte_lcv1_b();
      puVar8[2] = param_2;
      gte_ldVXY0(uVar11 & 0xffff);
      gte_ldVZ0(uVar11 >> 0x10);
      puVar15 = puVar14 + 2;
      puVar8 = puVar8 + 8;
      uVar11 = *(uint *)(puVar14 + 4);
      puVar4 = (ushort *)gte_stIR1();
      in_t5 = gte_stIR2();
      gte_rtps_b();
      param_2 = (ushort)((int)param_3 < (int)(uint)DAT_1f800062 >> 1);
      puVar14 = puVar15;
    } while (puVar15 != param_1 + 0xe + (uint)uVar1 * 2 + 2);
    gte_ldtr(0,0,0);
    gte_ldR11R12(0x1000);
    gte_ldR13R21(0);
    gte_ldR22R23(0x1000);
    gte_ldR31R32(0);
    gte_ldR33(0x1000);
    puVar19 = (uint *)(param_1 + (uint)*param_1 * 2 + 0xe);
    puVar25 = puVar19 + param_1[1];
    iVar24 = DAT_1f800064 + 0x10;
    if (puVar19 != puVar25) {
      do {
        uVar11 = *puVar19;
        puVar10 = (undefined4 *)(DAT_1f800070 + (uVar11 & 0x3f) * 0x10);
        puVar9 = (undefined4 *)(DAT_1f800070 + ((int)uVar11 >> 2 & 0x3f0));
        puVar7 = (undefined4 *)(DAT_1f800070 + ((int)uVar11 >> 8 & 0x3f0));
        uVar12 = puVar10[1];
        uVar16 = puVar9[1];
        uVar17 = puVar7[1];
        if ((uVar12 & uVar16 & uVar17 & 0x1f) == 0) {
          uVar18 = puVar10[2];
          uVar21 = puVar9[2];
          uVar22 = puVar7[2];
          uVar5 = uVar12;
          if ((int)uVar12 < (int)uVar16) {
            uVar5 = uVar16;
          }
          if ((int)uVar5 < (int)uVar17) {
            uVar5 = uVar17;
          }
          iVar3 = (int)uVar5 >> 0x10;
          if ((int)uVar5 < 0) {
            iVar3 = 0;
          }
          iVar3 = (iVar3 << (DAT_1f800098 & 0x1f)) >> 0xd;
          iVar20 = iVar3 << 2;
          if (0xfff < iVar3) {
            iVar20 = 0x3ffc;
          }
          iVar20 = iVar20 + iVar24;
          uVar5 = (uint)((int)uVar11 >> 0x1f) >> 8;
          if (((uVar12 | uVar16 | uVar17) & 0x3f) == 0) {
            uVar16 = uVar5 | 0x32000000;
            *DAT_1f800068 = 0x6000000;
            DAT_1f800068[1] = uVar16;
            DAT_1f800068[3] = uVar5;
            DAT_1f800068[5] = 0xffffffff;
            DAT_1f800068[2] = uVar18;
            DAT_1f800068[4] = uVar21;
            DAT_1f800068[6] = uVar22;
            uVar11 = iVar20 + 2U & 3;
            iVar3 = *(int *)((iVar20 + 2U) - uVar11);
            uVar12 = iVar20 + 2U & 3;
            puVar2 = (uint *)((iVar20 + 2U) - uVar12);
            *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                      (uint)((int)DAT_1f800068 << 8) >> (3 - uVar12) * 8;
            uVar12 = (int)DAT_1f800068 + 2U & 3;
            puVar2 = (uint *)(((int)DAT_1f800068 + 2U) - uVar12);
            *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                      (iVar3 << (3 - uVar11) * 8 | uVar16 & 0xffffffffU >> (uVar11 + 1) * 8) >>
                      (3 - uVar12) * 8;
            DAT_1f800068 = DAT_1f800068 + 7;
          }
          else {
            undefined3 tempBytes3;
            DAT_1f8000a0 = 0x32000000;
            tempBytes3[0] = (unsigned char)((int)uVar11 >> 0x1f);
            tempBytes3[1] = (unsigned char)((int)uVar11 >> 0x1f);
            tempBytes3[2] = (unsigned char)((int)uVar11 >> 0x1f);
            DAT_1f8000b4.value = CONCAT13((char)uVar12, tempBytes3);
            tempBytes3[0] = (unsigned char)DAT_1f8000b4.bytes._0_1_;
            tempBytes3[1] = (unsigned char)DAT_1f8000b4.bytes._1_1_;
            tempBytes3[2] = (unsigned char)DAT_1f8000b4.bytes._2_1_;
            DAT_1f8000c4.value = CONCAT13((char)uVar16, tempBytes3);
            tempBytes3[0] = 0xff;
            tempBytes3[1] = 0xff;
            tempBytes3[2] = 0xff;
            DAT_1f8000d4.value = CONCAT13((char)uVar17, tempBytes3);
            DAT_1f8000a8 = *puVar10;
            DAT_1f8000b8 = *puVar9;
            DAT_1f8000c8 = *puVar7;
            DAT_1f8000ac = CONCAT22(*(undefined2 *)(puVar10 + 3), (undefined2)(uVar12 >> 0x10));
            DAT_1f8000bc = CONCAT22(*(undefined2 *)(puVar9 + 3), (undefined2)(uVar16 >> 0x10));
            DAT_1f8000cc = CONCAT22(*(undefined2 *)(puVar7 + 3), (undefined2)(uVar17 >> 0x10));
            DAT_1f80009c = iVar20;
            DAT_1f8000b0 = uVar18;
            DAT_1f8000c0 = uVar21;
            DAT_1f8000d0 = uVar22;
            DAT_1f8000e8 = puVar10;
            DAT_1f8000ec = puVar9;
            DAT_1f8000f0 = puVar7;
            _DAT_1f800398 = puVar19;
            DAT_1f80039c = puVar25;
            FUN_8007bcd0(0x1f800000,3);
            puVar19 = _DAT_1f800398;
            puVar25 = DAT_1f80039c;
          }
          *DAT_1f800068 = 0x1000000;

          DAT_1f800068[1] = 0xe1000240;
          uVar11 = iVar20 + 2U & 3;
          iVar3 = *(int *)((iVar20 + 2U) - uVar11);
          uVar12 = iVar20 + 2U & 3;
          puVar2 = (uint *)((iVar20 + 2U) - uVar12);
          *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                    (uint)((int)DAT_1f800068 << 8) >> (3 - uVar12) * 8;
          uVar12 = (int)DAT_1f800068 + 2U & 3;
          puVar2 = (uint *)(((int)DAT_1f800068 + 2U) - uVar12);
          *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                    (iVar3 << (3 - uVar11) * 8 | 0xffffffffU >> (uVar11 + 1) * 8 & 0xe1000240) >>
                    (3 - uVar12) * 8;
          DAT_1f800068 = DAT_1f800068 + 2;
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar25);
    }
    puVar25 = puVar19 + param_1[2];
    if (puVar19 != puVar25) {
      do {
        uVar11 = *puVar19;
        puVar13 = (undefined4 *)(DAT_1f800070 + (uVar11 & 0x3f) * 0x10);
        puVar10 = (undefined4 *)(DAT_1f800070 + ((int)uVar11 >> 2 & 0x3f0));
        puVar9 = (undefined4 *)(DAT_1f800070 + ((int)uVar11 >> 8 & 0x3f0));
        puVar7 = (undefined4 *)(DAT_1f800070 + ((int)uVar11 >> 0xe & 0x3f0));
        uVar12 = puVar13[1];
        uVar16 = puVar10[1];
        uVar17 = puVar9[1];
        uVar5 = puVar7[1];
        if ((uVar12 & uVar16 & uVar17 & uVar5 & 0x1f) == 0) {
          uVar18 = puVar13[2];
          uVar21 = puVar10[2];
          uVar23 = puVar9[2];
          uVar22 = puVar7[2];
          uVar6 = uVar12;
          if ((int)uVar12 < (int)uVar16) {
            uVar6 = uVar16;
          }
          if ((int)uVar6 < (int)uVar17) {
            uVar6 = uVar17;
          }
          if ((int)uVar6 < (int)uVar5) {
            uVar6 = uVar5;
          }
          iVar3 = (int)uVar6 >> 0x10;
          if ((int)uVar6 < 0) {
            iVar3 = 0;
          }
          iVar3 = (iVar3 << (DAT_1f800098 & 0x1f)) >> 0xd;
          iVar20 = iVar3 << 2;
          if (0xfff < iVar3) {
            iVar20 = 0x3ffc;
          }
          iVar20 = iVar20 + iVar24;
          uVar6 = (uint)((int)uVar11 >> 0x1f) >> 8;
          if (((uVar12 | uVar16 | uVar17 | uVar5) & 0x3f) == 0) {
            uVar16 = uVar6 | 0x3a000000;
            *DAT_1f800068 = 0x8000000;
            DAT_1f800068[1] = uVar16;
            DAT_1f800068[2] = uVar18;
            DAT_1f800068[3] = uVar6;
            DAT_1f800068[4] = uVar21;
            DAT_1f800068[5] = 0xffffffff;
            DAT_1f800068[6] = uVar22;
            DAT_1f800068[7] = 0xffffffff;
            DAT_1f800068[8] = uVar23;
            uVar11 = iVar20 + 2U & 3;
            iVar3 = *(int *)((iVar20 + 2U) - uVar11);
            uVar12 = iVar20 + 2U & 3;
            puVar2 = (uint *)((iVar20 + 2U) - uVar12);
            *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                      (uint)((int)DAT_1f800068 << 8) >> (3 - uVar12) * 8;
            uVar12 = (int)DAT_1f800068 + 2U & 3;
            puVar2 = (uint *)(((int)DAT_1f800068 + 2U) - uVar12);
            *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                      (iVar3 << (3 - uVar11) * 8 | uVar16 & 0xffffffffU >> (uVar11 + 1) * 8) >>
                      (3 - uVar12) * 8;
            DAT_1f800068 = DAT_1f800068 + 9;
          }
          else {
            undefined3 tempBytes3;
            DAT_1f8000a0 = 0x3a000000;
            tempBytes3[0] = (unsigned char)((int)uVar11 >> 0x1f);
            tempBytes3[1] = (unsigned char)((int)uVar11 >> 0x1f);
            tempBytes3[2] = (unsigned char)((int)uVar11 >> 0x1f);
            DAT_1f8000b4.value = CONCAT13((char)uVar12, tempBytes3);
            tempBytes3[0] = (unsigned char)DAT_1f8000b4.bytes._0_1_;
            tempBytes3[1] = (unsigned char)DAT_1f8000b4.bytes._1_1_;
            tempBytes3[2] = (unsigned char)DAT_1f8000b4.bytes._2_1_;
            DAT_1f8000c4.value = CONCAT13((char)uVar16, tempBytes3);
            tempBytes3[0] = 0xff;
            tempBytes3[1] = 0xff;
            tempBytes3[2] = 0xff;
            DAT_1f8000d4.value = CONCAT13((char)uVar17, tempBytes3);
            DAT_1f8000e4.value = CONCAT13((char)uVar5, tempBytes3);
            DAT_1f8000a8 = *puVar13;
            DAT_1f8000b8 = *puVar10;
            DAT_1f8000c8 = *puVar9;
            _DAT_1f8000d8 = *puVar7;
            DAT_1f8000ac = CONCAT22(*(undefined2 *)(puVar13 + 3), (undefined2)(uVar12 >> 0x10));
            DAT_1f8000bc = CONCAT22(*(undefined2 *)(puVar10 + 3), (undefined2)(uVar16 >> 0x10));
            DAT_1f8000cc = CONCAT22(*(undefined2 *)(puVar9 + 3), (undefined2)(uVar17 >> 0x10));
            DAT_1f8000dc = CONCAT22(*(undefined2 *)(puVar7 + 3),(short)(uVar5 >> 0x10));
            DAT_1f80009c = iVar20;
            DAT_1f8000b0 = uVar18;
            DAT_1f8000c0 = uVar21;
            DAT_1f8000d0 = uVar23;
            DAT_1f8000e0 = uVar22;
            DAT_1f8000e8 = puVar13;
            DAT_1f8000ec = puVar10;
            DAT_1f8000f0 = puVar9;
            DAT_1f8000f4 = puVar7;
            _DAT_1f800398 = puVar19;
            DAT_1f80039c = puVar25;
            FUN_8007bcd0(0x1f800000,4);
            puVar19 = _DAT_1f800398;
            puVar25 = DAT_1f80039c;
          }
          *DAT_1f800068 = 0x1000000;

          DAT_1f800068[1] = 0xe1000240;
          uVar11 = iVar20 + 2U & 3;
          iVar3 = *(int *)((iVar20 + 2U) - uVar11);
          uVar12 = iVar20 + 2U & 3;
          puVar2 = (uint *)((iVar20 + 2U) - uVar12);
          *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                    (uint)((int)DAT_1f800068 << 8) >> (3 - uVar12) * 8;
          uVar12 = (int)DAT_1f800068 + 2U & 3;
          puVar2 = (uint *)(((int)DAT_1f800068 + 2U) - uVar12);
          *puVar2 = *puVar2 & -1 << (uVar12 + 1) * 8 |
                    (iVar3 << (3 - uVar11) * 8 | 0xffffffffU >> (uVar11 + 1) * 8 & 0xe1000240) >>
                    (3 - uVar12) * 8;
          DAT_1f800068 = DAT_1f800068 + 2;
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar25);
    }
  }
  return;
}

void FUN_80068004(int param_1,int param_2,int param_3)
{

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;

  iVar8 = *(int *)(param_3 + 4);
  puVar3 = (undefined4 *)(param_1 + 8);
  puVar1 = &DAT_1f800000;

  do {

    puVar4 = puVar1;
    puVar2 = puVar3;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *puVar4 = *puVar2;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;

    puVar3 = puVar2 + 4;
    puVar1 = puVar4 + 4;
  } while (puVar3 != (undefined4 *)(param_1 + 0x68));

  uVar5 = puVar2[5];
  puVar4[4] = *puVar3;
  puVar4[5] = uVar5;

  FUN_8007b008(0x1f800000,param_2 + 0x70);
  FUN_8007b8a0(0x1f800000,*(undefined2 *)(iVar8 + 0x1a),*(undefined2 *)(iVar8 + 0x18),0xc);
  FUN_80067a0c((ushort *)iVar8, *(ushort *)(iVar8 + 0x1a), *(uint *)(iVar8 + 0x18));

  return;
}

undefined4 FUN_800680a0(uchar **param_1)

{

  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uchar *puVar8;

  iVar7 = 0x800;
  puVar8 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 0x22);
  *(undefined *)((int)param_1 + 0x23) = 1;

  if (bVar1 != 1) {

    if (1 < bVar1) {

      if (bVar1 != 2) {

        if (bVar1 == 3) {
          return 1;
        }
        return 0;
      }
      goto LAB_800681b8;
    }
    if (bVar1 != 0) {
      return 0;
    }

    puVar2 = *(uchar **)(puVar8 + 0x14);
    param_1[4] = puVar2;
    param_1[3] = puVar2;
    puVar2 = *(uchar **)(puVar8 + 0x10);
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined *)((int)param_1 + 0x22) = 1;
    param_1[7] = puVar2;
  }

  puVar4 = param_1[4];
  puVar3 = param_1[2];
  puVar2 = puVar4;
  if ((uchar *)0x800 < puVar4) {

    puVar2 = (uchar *)0x800;
  }
  param_1[2] = puVar3 + (int)puVar2;
  param_1[4] = puVar4 + -(int)puVar2;
  bcopy(puVar8,puVar3,(int)puVar2);

  if (param_1[4] != (uchar *)0x0) {
    return 0;
  }

  if (*(char *)(param_1 + 9) == '\0') {

    FUN_80078974(param_1[1],param_1[6]);
  }
  else {

    FUN_80079078(param_1[1],param_1[6]);
  }
  puVar8 = puVar8 + (int)puVar2;
  iVar7 = 0x800 - (int)puVar2;
  *(undefined *)((int)param_1 + 0x22) = 2;

LAB_800681b8:

  puVar3 = param_1[7];
  puVar4 = param_1[6];
  puVar2 = (uchar *)(iVar7 + (uint)*(ushort *)(param_1 + 8));
  iVar7 = (int)puVar8 - (uint)*(ushort *)(param_1 + 8);

  if (puVar3 < puVar2) {

    puVar2 = puVar3;
  }
  uVar6 = (uint)puVar2 & 0xf;
  iVar5 = (int)puVar2 - uVar6;

  param_1[6] = puVar4 + iVar5;
  *(short *)(param_1 + 8) = (short)uVar6;
  param_1[7] = puVar3 + -iVar5;

  FUN_8007c268(iVar7,puVar4,puVar2,0);
  FUN_8007c320();
  bcopy((uchar *)(iVar7 + iVar5),*param_1 + -uVar6,uVar6);

  if (param_1[7] == (uchar *)0x0) {

    *(undefined *)((int)param_1 + 0x22) = 3;
    return 1;
  }
  return 0;
}

undefined4 FUN_8006830c(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined auStack_820 [2048];

  uVar3 = -param_1;
  if (0 < param_1) {

    uVar3 = (uint)(ushort)(&DAT_801e2ef0)[param_1];
  }

  iVar1 = FUN_8005d74c(uVar3);
  iVar1 = DAT_801c93e8 + iVar1;
  uVar2 = FUN_8005d79c(uVar3);

  DAT_801c9474 = auStack_820;
  DAT_801c9496 = 0;

  DAT_801c9478 = param_2;
  DAT_801c947c = param_2;
  DAT_801c9488 = param_3;
  DAT_801c948c = param_3;
  DAT_801c9498 = param_4;

  FUN_8007cfdc(0,iVar1,uVar2,0);

  DAT_801f053c = &LAB_80068260;
  FUN_8007ab14(&LAB_800682ec);

  return DAT_801c9480;
}

undefined4 FUN_80068310(uint param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{

  int iVar1;
  undefined4 uVar2;
  undefined auStack_820 [2048];

  if ((int)param_1 < 0) {

    param_1 = (uint)(ushort)(&DAT_801e2ef0)[-param_1];
  }

  iVar1 = FUN_8005d74c(param_1);
  iVar1 = DAT_801c93e8 + iVar1;
  uVar2 = FUN_8005d79c(param_1);

  DAT_801c9474 = auStack_820;
  DAT_801c9496 = 0;

  DAT_801c9478 = param_2;
  DAT_801c947c = param_2;
  DAT_801c9488 = param_3;
  DAT_801c948c = param_3;
  DAT_801c9498 = param_4;

  FUN_8007cfdc(0,iVar1,uVar2,0);

  DAT_801f053c = &LAB_80068260;
  FUN_8007ab14(&LAB_800682ec);

  return DAT_801c9480;
}

void FUN_800683fc(undefined4 param_1,undefined4 *param_2,int param_3)
{

  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  sVar1 = *(short *)((int)param_2 + 10);
  iVar10 = (int)sVar1;
  param_3 = iVar10 * param_3;
  sVar2 = *(short *)((int)param_2 + 6);
  sVar3 = *(short *)(param_2 + 1) + (*(short *)(param_2 + 2) >> 1);
  sVar7 = *(short *)(param_2 + 1) - (*(short *)(param_2 + 2) >> 1);
  psVar4 = (short *)FUN_8007d024(param_1,*param_2);

  *psVar4 = sVar7;
  psVar4[1] = sVar2 - (sVar1 >> 1);
  psVar4[2] = *(short *)(param_2 + 2);
  psVar4[3] = *(short *)((int)param_2 + 10);
  iVar8 = 0;
  do {
    iVar5 = FUN_8007d060(param_1,*param_2);
    *(short *)(iVar5 + 4) = sVar3 + (short)((short)(&DAT_80091a78)[iVar8 * 2] * param_3 >> 0x11);
    iVar6 = iVar8 + 1;
    *(short *)(iVar5 + 6) = sVar2 + (short)((short)(&DAT_80091a7a)[iVar8 * 2] * iVar10 >> 0xc);
    *(short *)(iVar5 + 8) = sVar3 + (short)((short)(&DAT_80091a78)[iVar6 * 2] * param_3 >> 0x11);
    iVar9 = iVar8 + 2;
    *(short *)(iVar5 + 10) = sVar2 + (short)((short)(&DAT_80091a7a)[iVar6 * 2] * iVar10 >> 0xc);
    *(short *)(iVar5 + 0x10) = sVar3 + (short)((short)(&DAT_80091a78)[iVar9 * 2] * param_3 >> 0x11);
    sVar1 = (&DAT_80091a7a)[iVar9 * 2];
    *(short *)(iVar5 + 0xc) = sVar3;
    *(short *)(iVar5 + 0xe) = sVar2;
    *(short *)(iVar5 + 0x12) = sVar2 + (short)(sVar1 * iVar10 >> 0xc);
    iVar5 = FUN_8007d060(param_1,*param_2);
    *(short *)(iVar5 + 0x10) = sVar7 - (short)((short)(&DAT_80091a78)[iVar8 * 2] * param_3 >> 0x11);
    *(short *)(iVar5 + 0x12) = sVar2 + (short)((short)(&DAT_80091a7a)[iVar8 * 2] * iVar10 >> 0xc);
    *(short *)(iVar5 + 8) = sVar7 - (short)((short)(&DAT_80091a78)[iVar6 * 2] * param_3 >> 0x11);
    *(short *)(iVar5 + 10) = sVar2 + (short)((short)(&DAT_80091a7a)[iVar6 * 2] * iVar10 >> 0xc);
    *(short *)(iVar5 + 4) = sVar7 - (short)((short)(&DAT_80091a78)[iVar9 * 2] * param_3 >> 0x11);
    sVar1 = (&DAT_80091a7a)[iVar9 * 2];
    *(short *)(iVar5 + 0xc) = sVar7;
    *(short *)(iVar5 + 0xe) = sVar2;
    *(short *)(iVar5 + 6) = sVar2 + (short)(sVar1 * iVar10 >> 0xc);
    iVar8 = iVar9;
  } while (iVar9 < 0xc);
  return;
}

void FUN_800686c8(void)
{

  DAT_801c94a4 = &LAB_800686a0;
  DAT_801c94a8 = 0x20000;

  FUN_80083030(&DAT_801f0688);

  return;
}

undefined4 FUN_80068734(char *param_1,uint param_2)

{

  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;

  uVar5 = 5;
  if (param_2 == 0xffffffff) {

    FUN_8008cedc(param_1,"--:--:---");
  }
  if (param_2 < 3600000) {

    uVar5 = 4;
    uVar2 = (param_2 / 60000) / 10;
    cVar1 = (char)uVar2;
    if (uVar2 != 0) {

      *param_1 = cVar1 + '0';
      param_1 = param_1 + 1;
      uVar5 = 5;
    }
    uVar4 = (param_2 % 60000) / 1000;
    *param_1 = (char)(param_2 / 60000) + cVar1 * -10 + '0';
    uVar2 = (param_2 % 60000) % 1000;
    param_1[1] = ':';
    cVar1 = (char)(uVar4 / 10);
    param_1[2] = cVar1 + '0';
    uVar3 = uVar2 % 100;
    param_1[3] = (char)uVar4 + cVar1 * -10 + '0';
    param_1[4] = '.';
    param_1[5] = (char)(uVar2 / 100) + '0';
    cVar1 = (char)(uVar3 / 10);
    param_1[6] = cVar1 + '0';
    param_1[7] = (char)uVar3 + cVar1 * -10 + '0';
    param_1[8] = '\0';
  }
  else if (param_2 < 360000000) {

    uVar5 = 7;
    uVar2 = param_2;
    if (35999999 < param_2) {

      uVar5 = 8;
      uVar2 = param_2 % 36000000;
      *param_1 = (char)(param_2 / 36000000) + '0';
      param_1 = param_1 + 1;
    }
    uVar3 = (uVar2 % 3600000) / 60000;
    uVar4 = (uVar2 % 3600000) % 60000;
    *param_1 = (char)(uVar2 / 3600000) + '0';
    param_1[1] = ':';
    cVar1 = (char)(uVar3 / 10);
    param_1[2] = cVar1 + '0';
    uVar2 = uVar4 / 1000;
    param_1[3] = (char)uVar3 + cVar1 * -10 + '0';
    param_1[4] = ':';
    cVar1 = (char)(uVar2 / 10);
    param_1[5] = cVar1 + '0';
    param_1[6] = (char)uVar2 + cVar1 * -10 + '0';
    param_1[7] = '.';
    param_1[9] = '\0';
    param_1[8] = (char)((uVar4 % 1000) / 100) + '0';
  }
  else {

    FUN_8008cedc(param_1,"--:--:---");
  }

  return uVar5;
}

void FUN_80068b04(undefined *param_1,uint param_2,uint param_3)

{

  char cVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;

  if (param_2 == 0xffffffff || param_3 == 0xffffffff) {

    FUN_8008cedc(param_1,"--:--:---");
    return;
  }
  uVar4 = param_2 - param_3;
  *param_1 = 0x2d;
  if (param_2 == param_3) {

    uVar4 = 0;
    uVar2 = 0xb1;
  }
  else {

    uVar2 = 0x2b;
    if (param_3 <= param_2) goto LAB_80068b74;
    uVar4 = param_3 - param_2;
  }
  *param_1 = uVar2;

LAB_80068b74:

  pcVar5 = param_1 + 1;
  if (uVar4 < 60000) {

    uVar3 = (uVar4 / 1000) / 10;
    cVar1 = (char)uVar3;
    if (uVar3 != 0) {

      *pcVar5 = cVar1 + '0';
      pcVar5 = param_1 + 2;
    }
    uVar3 = (uVar4 % 1000) % 100;
    *pcVar5 = (char)(uVar4 / 1000) + cVar1 * -10 + '0';
    pcVar5[1] = '.';
    pcVar5[2] = (char)((uVar4 % 1000) / 100) + '0';
    cVar1 = (char)(uVar3 / 10);
    pcVar5[3] = cVar1 + '0';
    pcVar5[4] = (char)uVar3 + cVar1 * -10 + '0';
    pcVar5[5] = '\0';
  }
  else {

    FUN_80068734(pcVar5, uVar4);
  }

  return;
}

void FUN_80068ca0(undefined4 param_1,uint param_2)

{

  if (99999 < param_2) {
    param_2 = 99999;
  }

  FUN_8008cf34(param_1,"%d.%d",param_2 / 100,param_2 % 100);

  return;
}

void FUN_80068d0c(char *param_1,uint param_2)

{

  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char local_40 [64];

  uVar3 = 10000000;
  bVar1 = 0;
  if (param_2 == 0) {

    *param_1 = '0';
    param_1[1] = '\0';
  }
  else {

    iVar4 = 0;
    while( true ) {
      uVar6 = param_2 / uVar3;
      if ((bool)(uVar6 != 0 | bVar1)) {

        local_40[iVar4] = (char)uVar6 + '0';
        bVar1 = 1;
        iVar4 = iVar4 + 1;
        param_2 = param_2 - uVar6 * uVar3;
      }
      if (uVar3 == 1) break;
      uVar3 = (int)uVar3 / 10;
    }
    local_40[iVar4] = '\0';
    iVar4 = iVar4 % 3;
    if (iVar4 == 0) {
      iVar4 = 3;
    }
    *param_1 = local_40[0];
    uVar3 = (uint)(byte)local_40[1];
    iVar5 = 0;
    while (pcVar2 = param_1 + 1, uVar3 != 0) {

      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {

        *pcVar2 = ',';
        pcVar2 = param_1 + 2;
        iVar4 = 3;
      }
      *pcVar2 = local_40[iVar5 + 1];
      uVar3 = (uint)local_40[iVar5 + 2];
      param_1 = pcVar2;
      iVar5 = iVar5 + 1;
    }
    *pcVar2 = '\0';
  }

  return;
}

void FUN_80068e2c(undefined2 *param_1,undefined2 param_2)

{

  undefined2 *puVar1;
  int iVar2;

  iVar2 = 0x3bf;
  puVar1 = param_1 + 0x3bf;
  do {

    puVar1[1] = 0x3c0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);

  *param_1 = param_2;

  return;
}

void FUN_80068e50(int param_1,short *param_2)

{

  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;

  iVar4 = 2;
  sVar1 = *param_2;
  psVar3 = param_2;
  for (iVar2 = 0; iVar2 < sVar1; iVar2 = iVar2 + 1) {
    if (iVar2 == sVar1 + -1) {

      *(undefined2 *)(param_1 + psVar3[1] * 2 + 2) = 0xffff;
    }
    else {

      *(undefined2 *)(param_1 + psVar3[1] * 2 + 2) = *(undefined2 *)((int)param_2 + iVar4 + 2);
    }
    iVar4 = iVar4 + 2;
    psVar3 = psVar3 + 1;
  }

  return;
}

void FUN_80068ebc(int param_1,int param_2)

{

  int iVar1;

  do {

    iVar1 = param_1 + param_2 * 2;
    param_2 = (int)*(short *)(iVar1 + 2);
    *(undefined2 *)(iVar1 + 2) = 0x3c0;
  } while (param_2 != -1);

  return;
}

undefined4 FUN_80068ee4(short *param_1,int param_2,undefined2 *param_3)

{

  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;

  iVar1 = 0;
  *param_3 = (short)param_2;
  iVar2 = -2;
  psVar4 = param_1;
  do {
    if (*param_1 <= iVar1) {

      *param_3 = 0;
      return 0;
    }
    iVar3 = iVar2;
    if (psVar4[1] == 0x3c0) {

      iVar3 = iVar2 + 2;
      param_2 = param_2 + -1;
      *(short *)((int)param_3 + iVar2 + 4) = (short)iVar1;
      if (param_2 == 0) {
        return 1;
      }
    }
    psVar4 = psVar4 + 1;
    iVar1 = iVar1 + 1;
    iVar2 = iVar3;
  } while( true );
}

int FUN_80068f50(int param_1,int param_2,undefined2 *param_3)

{

  int iVar1;
  int iVar2;

  iVar1 = 1;
  iVar2 = -2;
  while( true ) {

    *(short *)((int)param_3 + iVar2 + 4) = (short)param_2;
    param_2 = (int)*(short *)(param_1 + param_2 * 2 + 2);
    if (param_2 == 0x3c0) {

      *param_3 = 0;
      return 0;
    }
    if (param_2 == -1) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 2;
  }

  *param_3 = (short)iVar1;
  return iVar1;
}

int FUN_80068fa8(short *param_1)

{

  short sVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  sVar1 = *param_1;
  iVar2 = 0;

  if (0 < sVar1) {
    do {

      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + (uint)(param_1[1] == 0x3c0);
      param_1 = param_1 + 1;
    } while (iVar3 < sVar1);
  }

  return iVar2;
}

int FUN_80068fe8(short *param_1)
{

  short sVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  sVar1 = *param_1;
  iVar2 = 0;

  if (0 < sVar1) {
    do {

      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + (uint)(param_1[1] != 0x3c0);
      param_1 = param_1 + 1;
    } while (iVar3 < sVar1);
  }

  return iVar2;
}

void FUN_80069028(void)
{

  FUN_8008cedc();

  return;
}

void FUN_80069048(int param_1,int param_2)
{

  if (*(char *)(param_1 + 0x3f) == '\0') {

    FUN_8008cedc(param_2,param_1 + 0x20);
  }
  else {

    FUN_8008cf64(param_2,param_1 + 0x20,0x1f);

    *(undefined *)(param_2 + 0x1f) = 0x2e;
    *(undefined *)(param_2 + 0x20) = 0x2e;
    *(undefined *)(param_2 + 0x21) = 0;
  }

  return;
}

void FUN_800690b8(int param_1,undefined4 param_2)
{

  int iVar1;

  iVar1 = FUN_8008cfc4(param_2);

  if (iVar1 < 0x20) {

    FUN_8008cedc(param_1 + 0x20,param_2);
  }
  else {

    FUN_8008cf64(param_1 + 0x20,param_2,0x1f);
    *(undefined *)(param_1 + 0x3f) = 0x3f;
  }

  return;
}

void FUN_8006911c(int param_1,int param_2)
{

  int iVar1;

  FUN_8007d32c();
  *(char *)(param_1 + 3) = (char)param_2;
  *(undefined *)(param_1 + 2) = 0x13;

  FUN_8007d370(param_1,&DAT_80091acc);
  FUN_8008cfe0(param_1 + 0x60,&LAB_80091aea_2,0x20);
  FUN_8008cfe0(param_1 + 0x80,&DAT_80091b0c,0x80);
  FUN_8008cfe0(param_1 + 0x100,&LAB_80091b8a_2,0x80);
  FUN_8008cfe0(param_1 + 0x180,&DAT_80091c0c,0x80);

  iVar1 = param_2 * 0x40 + -0x2b;
  *(undefined *)(param_1 + 0x200) = 0;
  *(short *)(param_1 + 0x202) = (short)iVar1;
  FUN_80068e2c(param_1 + 0x204,iVar1 * 0x10000 >> 0x10);

  return;
}

bool FUN_800691dc(int param_1)
{

  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;

  bVar1 = *(byte *)(param_1 + 3);

  if (*(byte *)(param_1 + 0x200) < 0x21) {

    sVar2 = *(short *)(param_1 + 0x202);
    sVar3 = *(short *)(param_1 + 0x204);
    iVar8 = 0;
    iVar5 = 0;

    for (iVar6 = 0; iVar6 < *(char *)(param_1 + 0x200); iVar6 = iVar6 + 1) {
      iVar4 = iVar5 + param_1;

      if (*(short *)(param_1 + 0x202) <= *(short *)(iVar5 + param_1 + 0x9d8)) {
        goto LAB_80069224;
      }

      iVar5 = iVar5 + 0x5c;
      iVar8 = iVar8 + *(short *)(iVar4 + 0x9da);
    }

    iVar5 = FUN_80068fe8(param_1 + 0x204);
    iVar6 = FUN_80083178(param_1,0x1508);

    bVar7 = *(int *)(param_1 + 0x1508) == iVar6 &&
            (iVar5 == iVar8 &&
             (sVar2 == sVar3 &&
              (1 < bVar1 && bVar1 < 0x10)));
  }
  else {

LAB_80069224:
    bVar7 = false;
  }

  return bVar7;
}

bool FUN_800692dc(int param_1,int param_2,undefined4 param_3)
{

  int iVar1;
  int iVar2;

  param_1 = param_2 * 0x5c + param_1;

  iVar2 = *(int *)(param_1 + 0x9e0);
  iVar1 = FUN_80083178(param_3,*(undefined4 *)(param_1 + 0x9dc));

  return iVar2 == iVar1;
}

bool FUN_8006932c(int param_1,int param_2)
{

  return *(char *)(param_2 * 0x5c + param_1 + 0x9ca) != '\x01';
}

int FUN_80069358(int param_1,int param_2,int param_3)
{

  int iVar1 = FUN_80068fa8(param_1 + 0x204);

  if (param_2 < 0) {
    if (*(char *)(param_1 + 0x200) == ' ') {
      return 1;
    }
  }
  else {

    iVar1 = iVar1 + *(short *)(param_2 * 0x5c + param_1 + 0x9da);
  }

  return (uint)(iVar1 < (int)(param_3 + 0x7fU >> 7)) << 1;
}

void FUN_800693ec(int param_1)
{

  undefined4 uVar1 = FUN_80083178(param_1,0x1508);
  *(undefined4 *)(param_1 + 0x1508) = uVar1;
  return;
}

undefined4
FUN_80069418(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            undefined2 *param_6)
{

  bool bVar1;
  undefined4 *puVar2;
  int iVar3 = FUN_80069358(param_1,param_2,param_5);
  undefined4 uVar4 = 0;

  if (iVar3 == 0) {
    bVar1 = param_2 < 0;

    if (bVar1) {
      param_2 = (int)*(char *)(param_1 + 0x200);
    }
    else {
      FUN_80068ebc(param_1 + 0x204,(int)*(short *)(param_2 * 0x5c + param_1 + 0x9d8));
    }

    iVar3 = FUN_80068ee4(param_1 + 0x204,param_5 + 0x7fU >> 7,param_6);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {

      FUN_80068e50(param_1 + 0x204,param_6);
      undefined4 *puVar6 = param_3;
      puVar2 = (undefined4 *)(param_1 + param_2 * 0x5c + 0x988);
      undefined4 *puVar5;
      undefined4 *puVar7;

      do {
        puVar7 = puVar2;
        puVar5 = puVar6;
        undefined4 uVar9 = puVar5[3];
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
        puVar7[2] = puVar5[2];
        puVar7[3] = uVar9;
        puVar6 = puVar5 + 4;
        puVar2 = puVar7 + 4;
      } while (puVar6 != param_3 + 0x14);

      iVar3 = param_2 * 0x5c + param_1;
      undefined4 uVar4 = puVar5[5];
      undefined4 uVar8 = puVar5[6];
      puVar7[4] = *puVar6;
      puVar7[5] = uVar4;
      puVar7[6] = uVar8;
      *(undefined2 *)(iVar3 + 0x9d8) = param_6[1];
      *(undefined2 *)(iVar3 + 0x9da) = *param_6;
      *(int *)(iVar3 + 0x9dc) = param_5;

      uVar4 = FUN_80083178(param_4);
      *(undefined4 *)(param_2 * 0x5c + param_1 + 0x9e0) = uVar4;
      *(char *)(param_1 + 0x200) = *(char *)(param_1 + 0x200) + bVar1;
      uVar4 = FUN_80083178(param_1,0x1508);
      *(undefined4 *)(param_1 + 0x1508) = uVar4;
      uVar4 = 1;
    }
  }
  return uVar4;
}

void FUN_800695dc(int param_1,int param_2)
{

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8 = param_2 * 0x5c;
  int iVar9;

  FUN_80068ebc(param_1 + 0x204,(int)*(short *)(iVar8 + param_1 + 0x9d8));
  iVar9 = iVar8 + param_1;

  while( true ) {
    iVar8 = iVar8 + 0x5c;
    if (*(char *)(param_1 + 0x200) + -1 <= param_2) break;

    undefined4 *puVar3 = (undefined4 *)(param_1 + iVar8 + 0x988);
    undefined4 *puVar1 = (undefined4 *)(iVar9 + 0x988);

    do {
      undefined4 *puVar4 = puVar1;
      undefined4 *puVar2 = puVar3;
      undefined4 uVar5 = puVar2[1];
      undefined4 uVar6 = puVar2[2];
      undefined4 uVar7 = puVar2[3];
      *puVar4 = *puVar2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar3 = puVar2 + 4;
      puVar1 = puVar4 + 4;
    } while (puVar3 != (undefined4 *)(param_1 + iVar8 + 0x9d8));

    undefined4 uVar5 = puVar2[5];
    undefined4 uVar6 = puVar2[6];
    puVar4[4] = *puVar3;
    puVar4[5] = uVar5;
    puVar4[6] = uVar6;

    iVar9 = iVar9 + 0x5c;
    param_2 = param_2 + 1;
  }

  *(char *)(param_1 + 0x200) = *(char *)(param_1 + 0x200) + -1;
  return;
}

void FUN_800696c4(undefined4 param_1,undefined4 param_2)
{

  FUN_8007d3e8(param_2,"BASCUS-94455REPLAY");
  return;
}

void FUN_800696ec(int param_1,undefined4 param_2)
{

  FUN_8007d428(param_2,"BASCUS-94455REPLAY",(uint)*(byte *)(param_1 + 3) << 0xd);
  return;
}

void FUN_8006971c(undefined4 param_1,undefined4 param_2)
{

  FUN_8007d658(7,param_2,"BASCUS-94455REPLAY",param_1,0,0x1580,0);
  return;
}

void FUN_80069758(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)
{

  FUN_8007d658(7,param_2,"BASCUS-94455REPLAY",param_3,0x1580,param_4 + 0x7fU & 0xffffff80,
               param_5 + 2);
  return;
}

void FUN_800697ac(undefined4 param_1,undefined4 param_2)
{

  FUN_8007d658(6,param_2,"BASCUS-94455REPLAY",param_1,0,0x1580,0);
  return;
}

void FUN_800697e8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)
{

  int iVar1 = param_3 * 0x5c + param_1;
  int iVar2 = *(int *)(iVar1 + 0x9dc);

  FUN_80068f50(param_1 + 0x204,(int)*(short *)(iVar1 + 0x9d8),param_5);

  FUN_8007d658(6,param_2,"BASCUS-94455REPLAY",param_4,0x1580,iVar2 + 0x7fU & 0xffffff80,param_5 + 2);
  return;
}

int FUN_80069890(int param_1,undefined4 param_2,int param_3)
{

  FUN_8008cfe0();
  return param_1 + (param_3 + 3U & 0xfffffffc);
}

int FUN_800698d0(int param_1,undefined4 param_2,int param_3)
{

  FUN_8008cfe0(param_2,param_1);
  return param_1 + (param_3 + 3U & 0xfffffffc);
}

undefined * FUN_80069918(undefined *param_1,undefined *param_2)
{

  *param_1 = *param_2;
  return param_1 + 4;
}

char * FUN_8006992c(char *param_1,short *param_2)
{

  *param_2 = (short)*param_1;
  return param_1 + 4;
}

int FUN_80069948(int param_1)
{

  char cVar1 = DAT_801d5866;
  int iVar2 = FUN_80069890(param_1,&DAT_801d585c,0x58c);
  int iVar3;

  if (DAT_801d5866 == '\x06') {

    undefined4 uVar4 = FUN_80069890(iVar2,&DAT_801d5e88,0xfc);
    iVar3 = FUN_80069918(uVar4,&DAT_801d5f84);
    int iVar7 = (int)DAT_801d5f84;
    iVar2 = 0x100;

    for (int iVar8 = 0; iVar8 < iVar7; iVar8 = iVar8 + 1) {
      uVar4 = FUN_80069890(iVar3,(int)&DAT_801d5e88 + iVar2,0xe0);
      iVar3 = FUN_80069890(uVar4,(int)&DAT_801d5f68 + iVar2,
                           *(ushort *)(&UNK_801d5f78 + iVar2) + 0x19);
      iVar2 = iVar2 + 0x10fc;
    }
    iVar3 = iVar3 - param_1;
  }
  else {

    int iVar8 = 1;
    if (DAT_801d5866 == '\0') {
      iVar8 = 2;
    }
    int iVar5 = 0x14fda;
    int iVar7 = 0xc5a8;

    for (int iVar6 = 0; iVar3 = iVar2 - param_1, iVar6 < iVar8; iVar6 = iVar6 + 1) {
      if (cVar1 != '\0') {
        iVar2 = FUN_80069890(iVar2,&DAT_801c98e0 + iVar5,0x1c0);
      }
      undefined4 uVar4 = FUN_80069890(iVar2,&DAT_801c98e0 + iVar7,0xfc);
      iVar5 = iVar5 + 0x1c0;
      iVar2 = FUN_80069890(uVar4,(int)&DAT_801c99dc + iVar7,
                           *(ushort *)(&UNK_801c99ec + iVar7) + 0x19);
      iVar7 = iVar7 + 0x4518;
    }
  }
  return iVar3;
}

void FUN_80069ac4(undefined4 param_1,int param_2)
{

  char cVar1 = DAT_801d5866;
  undefined4 uVar2 = FUN_800698d0(param_1,&DAT_801d585c,0x58c);

  if (DAT_801d5866 == '\x06') {

    FUN_8005e2fc(&DAT_801d5e88);
    uVar2 = FUN_800698d0(uVar2,&DAT_801d5e88,0xfc);
    uVar2 = FUN_8006992c(uVar2,&DAT_801d5f84);
    int iVar3 = (int)DAT_801d5f84;
    int iVar7 = 0x100;

    for (int iVar6 = 0; iVar6 < iVar3; iVar6 = iVar6 + 1) {
      int iVar4 = FUN_800698d0(uVar2,(int)&DAT_801d5e88 + iVar7,0xe0);
      int iVar5 = (int)&DAT_801d5f68 + iVar7;
      iVar7 = iVar7 + 0x10fc;
      uVar2 = FUN_800698d0(iVar4,iVar5,*(ushort *)(iVar4 + 0x10) + 0x19);
    }
  }
  else {

    int iVar7 = 1;
    if (DAT_801d5866 == '\0') {
      iVar7 = 2;
    }

    for (int iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      if (cVar1 != '\0') {
        uVar2 = FUN_800698d0(uVar2,&DAT_801de8ba + (iVar6 + param_2) * 0x70,0x1c0);
      }
      int iVar3 = iVar6;
      if (param_2 != 0) {
        iVar3 = iVar6 + 1;
      }
      FUN_8005e2fc(&DAT_801d5e88 + iVar3 * 0x228c);
      int iVar4 = FUN_800698d0(uVar2,&DAT_801d5e88 + iVar3 * 0x228c,0xfc);
      iVar3 = iVar6;
      if (param_2 != 0) {
        iVar3 = iVar6 + 1;
      }
      uVar2 = FUN_800698d0(iVar4,&DAT_801d5f84 + iVar3 * 0x228c,*(ushort *)(iVar4 + 0x10) + 0x19);
    }
  }
  return;
}

int FUN_80069cc0(int param_1)
{

  undefined4 uVar1 = FUN_80069890(param_1,&DAT_801d5988,0xd0);
  uVar1 = FUN_80069890(uVar1,&DAT_801dea7a,0x1c0);
  uVar1 = FUN_80069890(uVar1,&DAT_801da4a0,0xe0);
  int iVar2 = FUN_80069890(uVar1,&DAT_801da580,DAT_801da590 + 0x19);
  return iVar2 - param_1;
}

void FUN_80069d58(undefined4 param_1)
{

  undefined4 uVar1 = FUN_800698d0(param_1,&DAT_801d5988,0xd0);
  uVar1 = FUN_800698d0(uVar1,&DAT_801dea7a,0x1c0);
  int iVar2 = FUN_800698d0(uVar1,&DAT_801da4a0,0xe0);
  FUN_800698d0(iVar2,&DAT_801da580,*(ushort *)(iVar2 + 0x10) + 0x19);
  return;
}

void FUN_80069ddc(int param_1)
{

  undefined4 *puVar2 = &DAT_801d5988;
  undefined4 *puVar1 = (undefined4 *)(param_1 + 0x5c);

  do {
    undefined4 uVar3 = puVar1[1];
    undefined4 uVar4 = puVar1[2];
    undefined4 uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != (undefined4 *)(param_1 + 300));

  DAT_801d5a16 = 2;

  puVar1 = (undefined4 *)&DAT_801da3a0;
  puVar2 = (undefined4 *)(param_1 + 0x62c);

  if (((uint)puVar2 & 3) == 0) {

    do {
      undefined4 uVar3 = puVar2[1];
      undefined4 uVar4 = puVar2[2];
      undefined4 uVar5 = puVar2[3];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
    } while (puVar2 != (undefined4 *)(param_1 + 0x4b3cU));
  }
  else {

    do {
      undefined4 uVar3 = puVar2[1];
      undefined4 uVar4 = puVar2[2];
      undefined4 uVar5 = puVar2[3];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
    } while (puVar2 != (undefined4 *)(param_1 + 0x4b3cU));
  }

  undefined4 uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  return;
}

int FUN_80069ef8(int param_1,int param_2)
{

  return (uint)DAT_801e30b2 + (char)(&DAT_80091c8c)[param_1] * 10 + param_2;
}

void FUN_80069f28(void)
{

  undefined4 *puVar2 = &DAT_801de8ba;
  undefined4 *puVar1 = &DAT_801da49c;

  do {
    undefined4 uVar3 = puVar1[1];
    undefined4 uVar4 = puVar1[2];
    undefined4 uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != (undefined4 *)&UNK_801da65c);

  DAT_801d5865 = 1;
  return;
}

undefined4 FUN_80069ff8(void)
{

  return 0x7ea0;
}

int FUN_8006a000(void)
{

  int iVar1 = FUN_80069ff8();

  uint uVar2 = iVar1 + 0x1fffU & 0xffffe000;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x1fff;
  }

  return (int)uVar2 >> 0xd;
}

void FUN_8006a038(int param_1)
{

  FUN_8007d32c();

  undefined uVar1 = (undefined)FUN_8006a000();
  *(undefined *)(param_1 + 3) = uVar1;
  *(undefined *)(param_1 + 2) = 0x13;

  FUN_8007d370(param_1,&DAT_80091ca8);
  FUN_8008cfe0(param_1 + 0x60,&LAB_80091cc2_2,0x20);
  FUN_8008cfe0(param_1 + 0x80,&LAB_80091ce4,0x80);
  FUN_8008cfe0(param_1 + 0x100,&LAB_80091d62_2,0x80);
  FUN_8008cfe0(param_1 + 0x180,&LAB_80091de2_2,0x80);
  return;
}

void FUN_8006a0d4(undefined4 param_1,undefined4 param_2)
{

  FUN_8007d3e8(param_2,"BASCUS-94455GAME");
  return;
}

void FUN_8006a0fc(int param_1,undefined4 param_2)
{

  FUN_8007d428(param_2,"BASCUS-94455GAME",(uint)*(byte *)(param_1 + 3) << 0xd);
  return;
}

uint FUN_8006a12c(void)
{

  int iVar1 = FUN_80069ff8();
  return iVar1 + 0x7fU & 0xffffff80;
}

void FUN_8006a154(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{

  int iVar1 = FUN_80069ff8();
  FUN_8007d658(7,param_2,"BASCUS-94455GAME",param_3,0,iVar1 + 0x7fU & 0xffffff80,0);
  return;
}

void FUN_8006a1b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{

  int iVar1 = FUN_80069ff8();
  FUN_8007d658(6,param_2,"BASCUS-94455GAME",param_3,0,iVar1 + 0x7fU & 0xffffff80,0);
  return;
}

void FUN_8006a214(undefined4 param_1,int param_2)
{

  FUN_8008cfe0(param_2,param_1,0x200);
  FUN_8008cfe0(param_2 + 0x200,&DAT_801c98e0,0x7c9c);

  undefined4 uVar1 = FUN_80083178(param_2,0x7e9c);
  *(undefined4 *)(param_2 + 0x7e9c) = uVar1;
  return;
}

void FUN_8006a278(undefined4 param_1,int param_2)
{

  FUN_8008cfe0(&DAT_801c98e0,param_2 + 0x200,0x7c9c);
  FUN_8006a348(&DAT_801c98e0);
  return;
}

void FUN_8006a2b4(undefined4 param_1,int param_2)
{

  bcopy((uchar *)(param_2 + 0x3e74),(uchar *)&DAT_801d157c,0x4028);
  return;
}

int FUN_8006a2e4(undefined4 param_1,int param_2)
{

  return param_2 + 0x3e74;
}

int FUN_8006a2ec(undefined4 param_1,int param_2)
{

  return param_2 + 0x418;
}

int FUN_8006a2f4(undefined4 param_1,int param_2)
{

  return param_2 + 0x1618;
}

int FUN_8006a2fc(undefined4 param_1,int param_2)
{

  return param_2 + 0x3c88;
}

int FUN_8006a304(undefined4 param_1,int param_2)
{

  return param_2 + 0x3d2c;
}

int FUN_8006a30c(undefined4 param_1,int param_2)
{

  return param_2 + 0x3dd0;
}

bool FUN_8006a314(undefined4 param_1,int param_2)
{

  int iVar2 = *(int *)(param_2 + 0x7e9c);
  int iVar1 = FUN_80083178(param_2,0x7e9c);
  return iVar2 == iVar1;
}

void FUN_8006a348(int param_1)
{

  DAT_800a6eec = *(undefined4 *)(param_1 + 0x48);
  DAT_800a6ef0 = *(undefined4 *)(param_1 + 0x4c);
  DAT_800a6ef4 = *(undefined4 *)(param_1 + 0x50);
  DAT_800a6ef8 = *(undefined4 *)(param_1 + 0x54);
  DAT_800a6efc = *(undefined4 *)(param_1 + 0x58);
  DAT_800a6f00 = *(undefined4 *)(param_1 + 0x9a);
  DAT_800a6f04 = *(undefined4 *)(param_1 + 0x9e);
  DAT_800a6f08 = *(undefined4 *)(param_1 + 0xa2);
  DAT_800a6f0c = *(undefined4 *)(param_1 + 0xa6);
  DAT_800a6f10 = *(undefined4 *)(param_1 + 0xaa);
  return;
}

void FUN_8006a3fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)
{

  int iVar1 = FUN_8006ae98(param_1[1],param_2,(int)*(short *)(param_1 + 2),param_3);
  undefined4 uVar2;
  undefined2 *puVar3;
  
  if (iVar1 != 0) {
    FUN_8008d020(param_2,&DAT_8008fa74);
  }

  uVar2 = FUN_8006b548(param_1 + 3,&DAT_80091e7c,(int)*(short *)((int)param_1 + 10),0x80);
  *(undefined4 *)(param_1[1] + 0x14) = uVar2;

  FUN_8006af40(param_1[1],param_2,param_4 + 5,param_5,(int)*(short *)(param_1 + 2),0xfffffffe,0);

  puVar3 = (undefined2 *)FUN_8007d024(*param_1,param_1[4]);
  puVar3[2] = 4;
  puVar3[3] = 6;
  *puVar3 = (short)param_4;
  puVar3[1] = (short)param_5 + -0xc;
  FUN_8007da44(*param_1,0x220);
  return;
}

void FUN_8006a4e4(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8)
{

  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar7;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  short sVar1;
  undefined4 local_38;
  undefined4 local_30[2];
  short local_158;
  short local_156;
  undefined2 local_154;
  undefined2 local_152;
  undefined4 local_150;
  undefined4 local_14c;
  short sVar8;
  char auStack_148[256];
  int iVar4;

  param_7 = 0x80 - param_7;
  if (param_7 < 0) {
    param_7 = 0;
  }
  *(undefined4 *)(param_3 + 0x10) = param_2;
  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | 0x200000;

  uVar2 = FUN_8006b548(&DAT_80091e64,&DAT_80091e7c,param_7,0x80);
  local_40 = *(undefined2 *)((int)param_1 + 0xe);
  local_3e = (undefined2)param_7;
  local_48 = param_2;
  local_44 = param_3;
  local_3c = FUN_8006b548(&LAB_80091e76_2,&DAT_80091e7c,param_7,0x80);
  sVar1 = (short)param_6;
  local_38 = local_3c;

  if (param_8 == 1) {

    FUN_8007da80(param_3,*param_1);
    uVar2 = FUN_8006b548(&LAB_80091e66_2,&DAT_80091e7c,param_7,0x80);
    puVar6 = &DAT_801efcdc;
  }
  else {
    if (param_8 < 2) {
      if (param_8 == 0) {

        FUN_8007da80(param_3,*param_1);
        uVar3 = FUN_8006b548(&LAB_80091e6a_2,&DAT_80091e7c,param_7,0x80);
        *(undefined4 *)(param_3 + 0x14) = uVar3;

        FUN_8006ac90(param_3,param_4,param_5 + -0x80,param_6 + -10,(int)*(short *)((int)param_1 + 6));

        local_156 = sVar1 + -0x12;
        sVar8 = (short)(param_5 + -0x80);
        local_154 = 0x100;
        local_152 = 8;
        local_158 = sVar8;
        local_150 = FUN_8006b548(&LAB_80091e6e_2,&DAT_80091e7c,param_7,0x80);
        local_14c = 0;
        FUN_8006b77c(param_2,&local_158);
        FUN_8007da44(param_2,0x200);

        local_156 = sVar1 + -6;
        local_154 = 0x100;
        local_152 = 1;
        local_158 = sVar8;
        local_150 = uVar2;
        local_14c = uVar2;
        FUN_8006b6e4(param_2,&local_158);
        local_156 = sVar1 + 0xe;
        FUN_8006b6e4(param_2,&local_158);
        local_156 = (short)(param_6 + 0x26);
        FUN_8006b6e4(param_2,&local_158);
        FUN_8007da44(param_2,0x200);

        FUN_8007da80(param_3,param_1[2]);
        uVar2 = FUN_8006b548(&DAT_80091e74,&DAT_80091e7c,param_7,0x80);
        *(undefined4 *)(param_3 + 0x14) = uVar2;

        FUN_8008cf34(auStack_148,&DAT_801efccd,(int)*(short *)(param_4 + 0x52));
        iVar4 = FUN_8006b044(param_3,auStack_148,(int)*(short *)((int)param_1 + 0xe),0);
        FUN_8006af40(param_3,auStack_148,param_5 - (iVar4 + -0x7c),param_6 + 0x26,
                     (int)*(short *)((int)param_1 + 0xe),0xfffffffe,0);

        puVar6 = &DAT_801efd16;
        if (*(char *)(param_4 + 0x42) != '\x01') {
          puVar6 = &DAT_801efd26;
          switch(*(undefined *)(param_4 + 0x41)) {
          case 0: puVar6 = &DAT_801efd4c; break;
          case 1:
          case 10: puVar6 = &DAT_801efdee; break;
          case 3: puVar6 = &DAT_801efd3f; break;
          case 6: puVar6 = &DAT_801efd2e; break;
          case 7: puVar6 = &DAT_801efe0e; break;
          case 8: puVar6 = &DAT_801efe18; break;
          case 9: puVar6 = &DAT_801efe23; break;
          }
        }

        FUN_8006a3fc(&local_48,puVar6,0x48,param_5 + -0x7a,param_6 + 0xe);

        if (*(char *)(param_4 + 0x41) == '\x03') {
          uVar7 = *(uint *)(param_4 + 0x44) >> 0x10;
          if (5 < uVar7) {
            uVar7 = 0;
          }
          FUN_8008cf34(auStack_148,(&PTR_DAT_80091e80)[uVar7],*(uint *)(param_4 + 0x44) & 0xff);
        }
        else {
          uVar2 = FUN_80060eb4(*(undefined4 *)(param_4 + 0x44));
          puVar5 = (undefined4 *)FUN_80060e94(uVar2);
          FUN_8008cedc(auStack_148,*puVar5);
        }

        FUN_8006a3fc(&local_48,auStack_148,0xac,param_5 + -0x7a,param_6 + 0x26);
        FUN_80069048(param_4,auStack_148);
        FUN_8006a3fc(&local_48,auStack_148,0x94,param_5 + -0x20,param_6 + 0xe);
      }
      goto LAB_8006a9c4;
    }
    if (param_8 == 2) {

      FUN_8007da80(param_3,*param_1);
      uVar2 = FUN_8006b548(&LAB_80091e66_2,&DAT_80091e7c,param_7,0x80);
      puVar6 = &DAT_801efcfc;
    }
    else {
      if (param_8 != 3) goto LAB_8006a9c4;

      FUN_8007da80(param_3,*param_1);
      uVar2 = FUN_8006b548(&LAB_80091e66_2,&DAT_80091e7c,param_7,0x80);
      puVar6 = &DAT_801efcf0;
    }
  }

  *(undefined4 *)(param_3 + 0x14) = uVar2;
  FUN_8006adb4(param_3,puVar6,param_5,param_6 + -10,(int)*(short *)((int)param_1 + 6));

LAB_8006a9c4:

  local_30[0] = FUN_8006b548(param_1 + 4,&DAT_80091e7c,param_7,0x80);
  local_14c = FUN_8006b548(local_30,&DAT_80091e7c,0x60,0x80);
  local_158 = (short)param_5 + -0x90;
  local_156 = sVar1 + -0x2a;
  local_154 = 0x120;
  local_152 = 0x54;
  local_150 = local_30[0];
  FUN_8006b77c(param_2,&local_158);
  FUN_8007da44(param_2,0x220);
  return;
}

void FUN_8006aa68(short *param_1,undefined4 param_2,short param_3,short param_4,int param_5,
                 int param_6,int param_7)
{

  short sVar3;
  short sVar4;
  undefined2 local_32;
  short local_38;
  short local_36;
  short local_34;
  undefined4 local_30;
  undefined4 local_2c;

  sVar4 = param_3 + -0x80;
  param_5 = 0x80 - param_5;
  if (param_5 < 0) {
    param_5 = 0;
  }
  local_32 = 8;

  sVar3 = (short)(((param_1[1] - param_6) * 0x100) / (int)*param_1);

  local_38 = sVar4;
  local_36 = param_4 + -4;
  local_34 = sVar3;
  local_30 = FUN_8006b548(&DAT_80091e98,&DAT_80091e7c,param_5,0x80);
  local_2c = FUN_8006b548(&DAT_80091ea0,&DAT_80091e7c,param_5,0x80);
  FUN_8006b6e4(param_2,&local_38);

  local_38 = sVar4 + sVar3;
  local_34 = (short)((((param_1[1] - param_6) + param_7) * 0x100) / (int)*param_1) - sVar3;
  local_30 = FUN_8006b548(&DAT_80091e9c,&DAT_80091e7c,param_5,0x80);
  local_2c = FUN_8006b548(&DAT_80091e98,&DAT_80091e7c,param_5,0x80);
  FUN_8006b6e4(param_2,&local_38);
  FUN_8007da44(param_2,0x220);

  short *psVar1 = (short *)FUN_8007d024(param_2,0);
  *psVar1 = sVar4;
  psVar1[2] = 0x100;
  psVar1[1] = param_4 + -4;
  psVar1[3] = 8;
  undefined4 uVar2 = FUN_8006b548(&DAT_80091ea4,&DAT_80091e7c,param_5,0x80);
  psVar1 = (short *)FUN_8007d024(param_2,uVar2);
  *psVar1 = param_3 + -0x81;
  psVar1[2] = 0x102;
  psVar1[1] = param_4 + -6;
  psVar1[3] = 0xc;
  return;
}

void FUN_8006ac68(int param_1)
{

  FUN_8007dc40();
  *(undefined *)(param_1 + 0x1c) = 0;
  return;
}

int FUN_8006ac90(undefined4 param_1,char *param_2,int param_3,undefined4 param_4,int param_5)
{

  int iVar3 = param_3;
  char cVar1;
  int iVar2;
  
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == 0) break;
    FUN_8007dd3c(param_1,cVar1,iVar3,param_4);
    iVar2 = FUN_8007dc78(param_1,(int)cVar1,(int)*param_2);
    iVar3 = iVar3 + iVar2 + param_5;
  }
  return (iVar3 - param_3) - param_5;
}

int FUN_8006ad3c(undefined4 param_1,char *param_2,int param_3)
{

  int iVar3 = 0;
  char cVar1;
  int iVar2;
  
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    iVar2 = FUN_8007dc78(param_1,(int)cVar1,(int)*param_2);
    iVar3 = iVar3 + iVar2 + param_3;
  }
  return iVar3 - param_3;
}

void FUN_8006adb4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)
{

  int iVar1 = FUN_8006ad3c(param_1,param_2,param_5);
  FUN_8006ac90(param_1,param_2,param_3 - (iVar1 >> 1),param_4,param_5);
  return;
}

void FUN_8006ae28(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)
{

  int iVar1 = FUN_8006ad3c(param_1,param_2,param_5);
  FUN_8006ac90(param_1,param_2,param_3 - iVar1,param_4,param_5);
  return;
}

undefined4 FUN_8006ae98(undefined4 param_1,char *param_2,int param_3,int param_4)
{

  char cVar1 = *param_2;
  int iVar3 = 0;
  int iVar2;
  
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_8007dc78(param_1,(int)cVar1,(int)param_2[1]);
    iVar3 = iVar3 + iVar2 + param_3;
    if (param_4 < iVar3) break;
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  *param_2 = '\0';
  return 1;
}

int FUN_8006af40(int param_1,byte *param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                int param_7)
{

  byte bVar2 = *(byte *)(param_1 + 8);
  int iVar5 = param_3;
  byte bVar3;
  byte bVar1;
  int iVar4;
  
  while( true ) {
    bVar3 = *param_2;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if ((char)bVar1 == 0) break;
    if (bVar3 - 0x30 < 10) {

      FUN_8007dd3c(param_1,bVar1 | 0x100,(iVar5 + param_6) - ((int)(uint)bVar2 >> 1),param_4);
      iVar5 = iVar5 + param_5 + (uint)bVar2 + param_7;
    }
    else {

      FUN_8007dd3c(param_1,bVar1,iVar5,param_4);
      iVar4 = FUN_8007dc78(param_1,(int)(char)bVar1,(int)(char)*param_2);
      iVar5 = iVar5 + iVar4 + param_5;
    }
  }
  return (iVar5 - param_3) - param_5;
}

int FUN_8006b044(int param_1,byte *param_2,int param_3,int param_4)
{

  int iVar4 = 0;
  byte bVar2;
  byte bVar1;
  
  while( true ) {
    bVar2 = *param_2;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if ((char)bVar1 == 0) break;
    if (bVar2 - 0x30 < 10) {

      iVar4 = iVar4 + param_3 + (uint)*(byte *)(param_1 + 8) + param_4;
    }
    else {

      int iVar3 = FUN_8007dc78(param_1,(int)(char)bVar1,(int)(char)*param_2);
      iVar4 = iVar4 + iVar3 + param_3;
    }
  }
  return iVar4 - param_3;
}

void FUN_8006b0ec(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)
{

  int iVar1 = FUN_8006b044(param_1,param_2,param_5,param_7);
  FUN_8006af40(param_1,param_2,param_3 - (iVar1 >> 1),param_4,param_5,param_6,param_7);
  return;
}

void FUN_8006b184(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)
{

  int iVar1 = FUN_8006b044(param_1,param_2,param_5,param_7);
  FUN_8006af40(param_1,param_2,param_3 - iVar1,param_4,param_5,param_6,param_7);
  return;
}

int FUN_8006b218(int param_1,byte *param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                int param_7,int param_8)
{

  int iVar5 = param_3 - ((int)(uint)*(byte *)(param_1 + 8) >> 1);
  bool bVar3 = false;
  byte bVar1;
  int iVar4;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if (bVar1 == 0) break;
    if (bVar1 == 0x20) {

      iVar5 = iVar5 + param_5;
    }
    else {

      iVar4 = iVar5;
      if (bVar1 == 0x2e) {

        iVar4 = iVar5 + param_8;
      }
      FUN_8007dd3c(param_1,bVar1 | 0x100,iVar4,param_4);
      bVar2 = *param_2 == 0x3a || *param_2 == 0x2e;
      iVar5 = iVar5 + param_5;
      if ((bool)(bVar3 | bVar2)) {

        iVar5 = (iVar5 - param_5) + param_6;
      }
      bVar3 = bVar2;
      if ((param_7 != 0) && ((bVar1 == 0x2b || bVar1 == 0x2d) || bVar1 == 0x4f)) {

        iVar5 = iVar5 + 1;
      }
    }
  }
  return (iVar5 - param_3) + (param_5 - param_6);
}

int FUN_8006b360(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5)
{

  int iVar6 = 0;
  char cVar2 = *param_2;
  char cVar1 = *param_2;
  char *pcVar4 = param_2 + 1;
  bool bVar5 = false;
  bool bVar3;
  
  while (cVar1 != '\0') {
    bVar3 = *pcVar4 == ':' || *pcVar4 == '.';
    iVar6 = iVar6 + param_3;
    if ((bool)(bVar5 | bVar3)) {

      iVar6 = (iVar6 - param_3) + param_4;
    }
    if ((param_5 != 0) && (cVar2 == '+' || cVar2 == '-')) {

      iVar6 = iVar6 + 1;
    }
    cVar2 = *pcVar4;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    bVar5 = bVar3;
  }
  return iVar6;
}

void FUN_8006b3f4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{

  int iVar1 = FUN_8006b360(param_1,param_2,param_5,param_6,param_7);
  FUN_8006b218(param_1,param_2,param_3 - iVar1,param_4,param_5,param_6,param_7,param_8);
  return;
}

void FUN_8006b49c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{

  int iVar1 = FUN_8006b360(param_1,param_2,param_5,param_6,param_7);
  FUN_8006b218(param_1,param_2,param_3 - (iVar1 >> 1),param_4,param_5,param_6,param_7,param_8);
  return;
}

uint FUN_8006b548(byte *param_1,byte *param_2,int param_3,int param_4)
{

  if (param_4 < param_3) {
    param_3 = param_4;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }

  return (uint)param_1[3] << 0x18 |
         ((uint)*param_1 + (int)(((uint)*param_2 - (uint)*param_1) * param_3) / param_4 |
          ((uint)param_1[1] + (int)(((uint)param_2[1] - (uint)param_1[1]) * param_3) / param_4) *
          0x100 | ((uint)param_1[2] +
                  (int)(((uint)param_2[2] - (uint)param_1[2]) * param_3) / param_4) * 0x10000) &
         0xffffff;
}

void FUN_8006b61c(undefined4 param_1,short *param_2)

{

  short sVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;

  uVar4 = *(uint *)(param_2 + 4);
  uVar5 = *(uint *)(param_2 + 6);
  puVar3 = (uint *)FUN_8007e0b0();

  uVar4 = uVar4 | uVar4 << 8 | uVar4 << 0x10 | 0x3a000000;
  puVar3[4] = uVar4;
  *puVar3 = uVar4;

  uVar4 = uVar5 | uVar5 << 8 | uVar5 << 0x10;
  puVar3[6] = uVar4;
  puVar3[2] = uVar4;

  sVar1 = *param_2;
  *(short *)(puVar3 + 5) = sVar1;
  *(short *)(puVar3 + 1) = sVar1;
  sVar1 = *param_2;
  sVar2 = param_2[2];
  *(short *)(puVar3 + 7) = sVar1 + sVar2;
  *(short *)(puVar3 + 3) = sVar1 + sVar2;

  sVar1 = param_2[1];
  *(short *)((int)puVar3 + 0xe) = sVar1;
  *(short *)((int)puVar3 + 6) = sVar1;
  sVar1 = param_2[1];
  sVar2 = param_2[3];
  *(short *)((int)puVar3 + 0x1e) = sVar1 + sVar2;
  *(short *)((int)puVar3 + 0x16) = sVar1 + sVar2;

  return;
}

void FUN_8006b6e4(undefined4 param_1,short *param_2)

{

  short sVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;

  puVar3 = (uint *)FUN_8007e0b0();

  uVar4 = *(uint *)(param_2 + 4);
  puVar3[4] = uVar4 | 0x3a000000;
  *puVar3 = uVar4 | 0x3a000000;

  uVar4 = *(uint *)(param_2 + 6);
  puVar3[6] = uVar4;
  puVar3[2] = uVar4;

  sVar1 = *param_2;
  *(short *)(puVar3 + 5) = sVar1;
  *(short *)(puVar3 + 1) = sVar1;
  sVar1 = *param_2;
  sVar2 = param_2[2];
  *(short *)(puVar3 + 7) = sVar1 + sVar2;
  *(short *)(puVar3 + 3) = sVar1 + sVar2;

  sVar1 = param_2[1];
  *(short *)((int)puVar3 + 0xe) = sVar1;
  *(short *)((int)puVar3 + 6) = sVar1;
  sVar1 = param_2[1];
  sVar2 = param_2[3];
  *(short *)((int)puVar3 + 0x1e) = sVar1 + sVar2;
  *(short *)((int)puVar3 + 0x16) = sVar1 + sVar2;

  return;
}

void FUN_8006b77c(undefined4 param_1,short *param_2)

{

  short sVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;

  puVar3 = (uint *)FUN_8007e0b0();

  uVar4 = *(uint *)(param_2 + 4);
  puVar3[4] = uVar4 | 0x38000000;
  *puVar3 = uVar4 | 0x38000000;

  uVar4 = *(uint *)(param_2 + 6);
  puVar3[6] = uVar4;
  puVar3[2] = uVar4;

  sVar1 = *param_2;
  *(short *)(puVar3 + 5) = sVar1;
  *(short *)(puVar3 + 1) = sVar1;
  sVar1 = *param_2;
  sVar2 = param_2[2];
  *(short *)(puVar3 + 7) = sVar1 + sVar2;
  *(short *)(puVar3 + 3) = sVar1 + sVar2;

  sVar1 = param_2[1];
  *(short *)((int)puVar3 + 0xe) = sVar1;
  *(short *)((int)puVar3 + 6) = sVar1;
  sVar1 = param_2[1];
  sVar2 = param_2[3];
  *(short *)((int)puVar3 + 0x1e) = sVar1 + sVar2;
  *(short *)((int)puVar3 + 0x16) = sVar1 + sVar2;

  return;
}

void FUN_8006b814(undefined4 param_1,short *param_2,int param_3)

{

  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  undefined4 local_30;
  undefined4 local_2c;

  sVar1 = param_2[2];
  sVar6 = *param_2 - (sVar1 >> 1);
  iVar3 = param_3;
  if (0x10 < param_3) {

    iVar3 = 0x10;
  }

  iVar3 = sVar1 * iVar3;
  if (iVar3 < 0) {

    iVar3 = iVar3 + 0xf;
  }
  sVar5 = (short)(iVar3 >> 4);

  local_36 = param_2[1];
  uVar7 = 0x200;
  local_32 = param_2[3];

  iVar3 = 0x40 - param_3;
  if (iVar3 < 0) {

    iVar3 = 0;
    uVar7 = 0;
  }
  if (0x30 < iVar3) {

    iVar3 = 0x30;
  }

  local_38 = sVar6;
  local_34 = sVar5;
  uVar2 = FUN_8006b548(param_2 + 4,param_2 + 6,iVar3,0x30);
  uVar4 = *(undefined4 *)(param_2 + 4);
  local_30 = uVar4;
  local_2c = uVar2;
  FUN_8006b6e4(param_1,&local_38);

  local_38 = sVar6 + (sVar1 - sVar5);
  local_30 = uVar2;
  local_2c = uVar4;
  FUN_8006b6e4(param_1,&local_38);

  if (0x10 >= param_3) {

    local_38 = sVar6 + sVar5;
    local_34 = sVar1 - sVar5;
    FUN_8006b6e4(param_1,&local_38);
    local_38 = sVar6;
    local_30 = uVar4;
    local_2c = uVar2;
    FUN_8006b6e4(param_1,&local_38);
  }

  FUN_8007da44(param_1,uVar7 | 0x20);

  return;
}

void FUN_8006b988(undefined4 param_1,undefined4 param_2,short param_3,short param_4,short param_5,
                 short param_6,int param_7)

{

  uint uVar1;
  int iVar2;

  param_7 = 0x28 - param_7;
  if (10 < param_7) {

    param_7 = 10;
  }
  if (param_7 < 0) {

    param_7 = 0;
  }

  uVar1 = (param_7 * 0xff) / 10;

  iVar2 = FUN_8007e0e0(param_2,uVar1 | ((int)uVar1 >> 1) << 8 | 0x2000000);

  *(short *)(iVar2 + 4) = param_3;
  *(short *)(iVar2 + 10) = param_4;
  *(short *)(iVar2 + 0xe) = param_4;
  *(short *)(iVar2 + 6) = param_4 + param_6;
  *(short *)(iVar2 + 8) = param_3 + param_5;
  *(short *)(iVar2 + 0xc) = param_3 - param_5;

  return;
}

void FUN_8006ba48(undefined4 param_1,undefined4 param_2,short param_3,short param_4,short param_5,
                 short param_6,int param_7)

{

  uint uVar1;
  int iVar2;

  param_7 = 0x28 - param_7;
  if (10 < param_7) {

    param_7 = 10;
  }
  if (param_7 < 0) {

    param_7 = 0;
  }

  uVar1 = (param_7 * 0xff) / 10;

  iVar2 = FUN_8007e0e0(param_2,uVar1 | ((int)uVar1 >> 1) << 8 | 0x2000000);

  *(short *)(iVar2 + 6) = param_4;
  *(short *)(iVar2 + 8) = param_3;
  *(short *)(iVar2 + 0xc) = param_3;
  *(short *)(iVar2 + 4) = param_3 + param_5;
  *(short *)(iVar2 + 10) = param_4 + param_6;
  *(short *)(iVar2 + 0xe) = param_4 - param_6;

  return;
}

void FUN_8006bb08(undefined4 param_1,short *param_2,int param_3)

{

  uint uVar1;
  uint *puVar2;
  short *psVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar1 = *(uint *)(param_2 + 4);
  uVar7 = (uVar1 & 0x1f) * param_3 >> 4;
  uVar5 = param_3 * 0xf4 >> 7;
  uVar6 = (uVar1 & 0x3e0) * param_3 >> 9;
  uVar1 = (uVar1 & 0x7c00) * param_3 >> 0xe;

  if (0xff < (int)uVar5) {

    uVar5 = 0xff;
  }
  if (0xff < uVar7) {

    uVar7 = 0xff;
  }
  if (0xff < uVar6) {

    uVar6 = 0xff;
  }
  if (0xff < uVar1) {

    uVar1 = 0xff;
  }

  puVar2 = (uint *)FUN_8007e0b0(param_1);
  *puVar2 = uVar5 | uVar5 << 8 | uVar5 << 0x10 | 0x38000000;
  puVar2[2] = uVar7 | uVar6 << 8 | uVar1 << 0x10;
  puVar2[4] = 0;
  puVar2[6] = 0;

  sVar4 = *param_2;
  *(short *)(puVar2 + 5) = sVar4 + 1;
  *(short *)(puVar2 + 1) = sVar4 + 1;
  sVar4 = *param_2 + param_2[2] + -1;
  *(short *)(puVar2 + 7) = sVar4;
  *(short *)(puVar2 + 3) = sVar4;

  sVar4 = param_2[1];
  *(short *)((int)puVar2 + 0xe) = sVar4 + 1;
  *(short *)((int)puVar2 + 6) = sVar4 + 1;
  sVar4 = param_2[1] + param_2[3] + -1;
  *(short *)((int)puVar2 + 0x1e) = sVar4;
  *(short *)((int)puVar2 + 0x16) = sVar4;

  psVar3 = (short *)FUN_8007d024(param_1,0);
  *psVar3 = *param_2;
  psVar3[2] = param_2[2];
  psVar3[1] = param_2[1];
  psVar3[3] = param_2[3];

  FUN_8007da44(param_1,0x200);

  return;
}

void FUN_8006bcb8(int param_1)

{

  short sVar1;

  if (*(short *)(param_1 + 0x12) < 0) {

    if (*(short *)(param_1 + 0x12) < -1) {

      *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 0x12) + 1;
    *(short *)(param_1 + 0x12) = sVar1;
    if (*(short *)(param_1 + 0x10) < sVar1) {

      *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x10);
    }
  }

  return;
}

void FUN_8006bd08(int param_1,undefined4 param_2)

{

  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  uVar5 = (uint)*(short *)(param_1 + 0x12);
  iVar7 = (int)*(short *)(param_1 + 0x10);
  if (uVar5 != 0xffffffff) {

    iVar6 = iVar7 - uVar5;
    uVar2 = uVar5;
    if ((int)uVar5 < 0) {

      uVar2 = ~uVar5;
      iVar6 = iVar7 + 1 + uVar5;
    }

    iVar7 = (int)((int)*(short *)(param_1 + 0xc) * uVar2) / iVar7;

    uVar3 = FUN_8006b548(param_1,param_1 + 4,iVar6,0x80);

    psVar4 = (short *)FUN_8007d024(param_2,uVar3);

    *psVar4 = *(short *)(param_1 + 8) - (short)(iVar7 >> 1);
    sVar1 = *(short *)(param_1 + 10);
    psVar4[2] = (short)iVar7;
    psVar4[1] = sVar1;
    psVar4[3] = *(short *)(param_1 + 0xe);
  }

  return;
}

void FUN_8006bdd0(short *param_1)

{

  short sVar1;

  if (param_1[1] < 0) {

    if (param_1[1] < -1) {

      param_1[1] = param_1[1] + 1;
    }
  }
  else {

    sVar1 = param_1[1] + 1;
    param_1[1] = sVar1;
    if (*param_1 < sVar1) {

      param_1[1] = *param_1;
    }
  }

  return;
}

int FUN_8006be20(short *param_1)

{

  int iVar1;
  uint uVar2;

  uVar2 = (uint)param_1[1];
  iVar1 = 0;

  if (-1 < (int)uVar2) {

    iVar1 = (int)(uVar2 << 7) / (int)*param_1;
  }

  if ((int)uVar2 < -1) {

    iVar1 = (int)(~uVar2 << 7) / (int)*param_1;
  }

  return iVar1;
}

void FUN_8006be64(int param_1)

{

  short sVar1;

  if (*(short *)(param_1 + 0x18) < 0) {

    if (*(short *)(param_1 + 0x18) < -1) {

      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 0x18) + 1;
    *(short *)(param_1 + 0x18) = sVar1;
    if (*(short *)(param_1 + 4) < sVar1) {

      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 4);
    }
  }

  return;
}

int FUN_8006beb4(int param_1)

{

  uint uVar1;
  uint uVar2;

  uVar1 = (uint)*(short *)(param_1 + 0x18);
  uVar2 = uVar1;

  if (((int)uVar1 < 0) && (uVar2 = 0, (int)uVar1 < -1)) {

    uVar2 = ~uVar1;
  }

  return (int)(uVar2 << 7) / (int)*(short *)(param_1 + 4);
}

void FUN_8006bef4(short *param_1,undefined4 param_2,short param_3,short param_4)

{

  short sVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30 [2];

  local_30[0] = *(undefined4 *)(param_1 + 8);
  sVar1 = *param_1;
  sVar2 = param_1[1];
  iVar5 = (int)param_1[0xc];
  iVar8 = (int)param_1[2];

  if (iVar5 != -1) {

    iVar7 = iVar8 - iVar5;
    if (iVar5 < 0) {

      local_30[0] = *(undefined4 *)(param_1 + 10);
      iVar7 = iVar8 + 1 + iVar5;
    }

    sVar6 = param_3 - sVar1;
    if ((param_1[3] & 1U) == 0) {

      sVar6 = param_3;
      param_3 = param_3 + sVar1;
    }

    sVar1 = (short)((sVar1 * iVar7) / iVar8);
    sVar6 = sVar6 - sVar1;
    param_3 = param_3 + sVar1;

    puVar3 = (uint *)FUN_8007e0b0(param_2);

    uVar4 = FUN_8006b548(param_1 + 4,local_30,iVar7,iVar8);
    puVar3[4] = uVar4 | 0x38000000;
    *puVar3 = uVar4 | 0x38000000;
    uVar4 = FUN_8006b548(param_1 + 6,local_30,iVar7,iVar8);
    puVar3[6] = uVar4;
    puVar3[2] = uVar4;

    *(short *)(puVar3 + 5) = sVar6;
    *(short *)(puVar3 + 1) = sVar6;
    *(short *)(puVar3 + 7) = param_3;
    *(short *)(puVar3 + 3) = param_3;
    *(short *)((int)puVar3 + 0xe) = param_4;
    *(short *)((int)puVar3 + 6) = param_4;
    *(short *)((int)puVar3 + 0x1e) = param_4 + sVar2;
    *(short *)((int)puVar3 + 0x16) = param_4 + sVar2;
  }

  return;
}

void FUN_8006c04c(int param_1)

{

  int iVar1;

  *(undefined2 *)(param_1 + 0x34) = 0;

  iVar1 = 0x1f;
  param_1 = param_1 + 0x1f;
  do {

    *(undefined *)(param_1 + 0x14) = 0xff;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + -1;
  } while (-1 < iVar1);

  return;
}

void FUN_8006c074(int param_1,int param_2)

{

  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  if (-1 < *(short *)(param_1 + 0x34)) {

    uVar4 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar4 - param_2;
    bVar1 = (int)uVar4 < (int)uVar5;
    if ((int)uVar5 < 0) {

      uVar5 = 0;
      bVar1 = (int)uVar4 < 0;
    }
    if (bVar1) {

      uVar5 = uVar4;
    }

    if (uVar4 < 40000) {

      uVar4 = (uVar5 * uVar5) / uVar4;
    }
    else {

      uVar3 = uVar5;
      if ((int)uVar5 < 0) {

        uVar3 = uVar5 + 0xff;
      }
      uVar4 = (uVar5 * ((int)uVar3 >> 8)) / (uVar4 >> 8);
    }

    iVar7 = 0;
    iVar6 = param_1;
    do {

      cVar2 = *(char *)(iVar6 + 0x14) + '\x01';
      if (*(char *)(iVar6 + 0x14) < '\0') {

        if ((int)((uint)(iVar7 * *(int *)(param_1 + 0x10)) >> 5) <= (int)uVar4) {

          *(undefined *)(iVar6 + 0x14) = 0;
        }
      }
      else {

        *(char *)(iVar6 + 0x14) = cVar2;
        if ('\x18' < cVar2) {

          *(undefined *)(iVar6 + 0x14) = 0x18;
        }
      }

      iVar7 = iVar7 + 1;
      iVar6 = param_1 + iVar7;
    } while (iVar7 < 0x20);
  }

  return;
}

void FUN_8006c174(short *param_1,undefined4 param_2)

{

  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 local_30;
  undefined4 local_2c;

  sVar7 = *param_1;
  local_2c = 0xd4d4d4;
  local_30 = 0;
  sVar1 = param_1[4];
  sVar2 = param_1[1];

  if (-1 < param_1[0x1a]) {

    iVar6 = 0;
    do {

      iVar5 = (int)*(char *)((int)param_1 + iVar6 + 0x14);
      uVar3 = FUN_8006b548(param_1 + 6,&local_30,0x60,0x80);
      if (-1 < iVar5) {

        uVar3 = FUN_8006b548(param_1 + 6,&local_2c,0x18 - iVar5,0x18);
      }

      psVar4 = (short *)FUN_8007d024(param_2,uVar3);
      *psVar4 = sVar7;
      psVar4[1] = sVar2;
      psVar4[2] = param_1[2];
      psVar4[3] = param_1[3];

      iVar6 = iVar6 + 1;
      sVar7 = sVar7 + sVar1;
    } while (iVar6 < 0x20);
  }

  return;
}

void FUN_8006c274(int *param_1)

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
    sVar1 = (&DAT_80093150)[uVar3 + 0x400];
    sVar2 = (&DAT_80093150)[uVar3];

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

void FUN_8006c31c(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

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
    *(undefined2 *)(puVar2 + 1) = (undefined2)(uint)DAT_1f8000c8;
    uVar1 = (undefined2)((uint)DAT_1f8000c8 >> 16);
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

void FUN_8006c460(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;

  uVar1 = param_2[5];
  uVar2 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;

  *(undefined *)(param_1 + 8) = 0x80;
  param_1[7] = param_3;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;

  return;
}

void FUN_8006c4b0(byte *param_1,int param_2)

{

  short sVar1;

  *(undefined2 *)(param_1 + 0x22) = 0;

  sVar1 = FUN_8008cfc4(*(undefined4 *)(param_1 + 0x1c));
  *(short *)(param_1 + 0x26) = sVar1;

  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 2) + (short)((int)sVar1 / (int)(uint)*param_1);

  if (-1 < param_2) {

    *(short *)(param_1 + 0x24) = (short)param_2;
  }

  return;
}

void FUN_8006c514(int param_1)

{

  FUN_8006c4b0(param_1,0xffffffff);

  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x24);

  return;
}

void FUN_8006c548(int param_1)

{

  undefined2 uVar1;

  *(ushort *)(param_1 + 0x22) = ~*(ushort *)(param_1 + 2);

  uVar1 = FUN_8008cfc4(*(undefined4 *)(param_1 + 0x1c));
  *(undefined2 *)(param_1 + 0x26) = uVar1;

  return;
}

void FUN_8006c580(int param_1)

{

  short sVar1;

  if (*(short *)(param_1 + 0x22) < 0) {

    if (*(short *)(param_1 + 0x22) < -1) {

      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 0x22) + 1;
    *(short *)(param_1 + 0x22) = sVar1;
    if ((int)*(short *)(param_1 + 0x24) + (int)*(short *)(param_1 + 6) <= (int)sVar1) {

      *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x24);
      return;
    }
  }

  return;
}

void FUN_8006c5dc(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{

  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_res8;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;

  local_48 = *(byte **)(param_1 + 0x1c);
  local_50 = (int)*(short *)(param_1 + 0x22) * (uint)*param_1;
  local_4c = (uint)*(ushort *)(param_1 + 0xc);
  FUN_8007da80(param_5,*(undefined4 *)(param_1 + 0x10));

  if ((local_4c & 0x180) == 0x80) {

    iVar8 = FUN_8006cd04(param_1,param_5);
    local_res8 = param_3 - (iVar8 >> 1);
  }
  else {

    local_res8 = param_3;
    if ((local_4c & 0x180) == 0x100) {

      local_res8 = FUN_8006cd04(param_1,param_5);
      local_res8 = param_3 - local_res8;
    }
  }
  local_40 = 1;
  if (*(char *)(param_5 + 0x1c) != '\0') {
    local_40 = 2;
  }
  iVar8 = (int)*(short *)(param_1 + 0x22);
  if (iVar8 < 0) {
    if (iVar8 < -1) {
      iVar8 = *(short *)(param_1 + 2) + 1 + iVar8;
      iVar4 = FUN_8006cd04(param_1,param_5);
      iVar9 = (int)*(short *)(param_1 + 2);
      local_40 = (int)((uint)param_1[0xb] << 0x18) >> 0x19;
      iVar10 = iVar9 - iVar8;
      local_3c = (*(short *)(param_1 + 4) * iVar8) / iVar9;
      local_58 = 0;
      local_5c = (short)((iVar4 * iVar8) / iVar9);
      local_60 = (short)local_res8 + local_5c;
      local_54 = (int)((uint)param_1[0x14] * iVar10) / iVar9 |
                 (int)((uint)param_1[0x15] * iVar10) / iVar9 << 8 |
                 (int)((uint)param_1[0x16] * iVar10) / iVar9 << 0x10;
      sVar3 = (short)((int)((uint)param_1[0xb] << 0x18) >> 0x19);
      local_5a = sVar3 - (short)((local_40 * iVar8) / iVar9);
      local_5c = ((short)local_3c + (short)iVar4) - local_5c;
      local_5e = ((short)param_4 - sVar3) - local_5a;
      local_5a = local_5a * 2;
      local_38 = local_54;
      FUN_8006b6e4(param_2,&local_60);
      local_60 = (short)local_res8 - (short)local_3c;
      local_54 = 0;
      local_58 = local_38;
      FUN_8006b6e4(param_2,&local_60);
      FUN_8007da44(param_2,0x20);
    }
  }
  else {
    local_3c = (uint)*(byte *)(param_5 + 8);
    local_34 = (local_4c >> 4 & 2) << 0x18;
    local_30 = (local_4c & 3) << 0x15;
    for (local_44 = 0; uVar6 = local_3c, local_44 < *(short *)(param_1 + 0x26);
        local_44 = local_44 + 1) {
      uVar11 = local_4c >> 6 & 1;
      if ((int)*(short *)(param_1 + 0x22) < (int)*(short *)(param_1 + 0x24)) {
        iVar8 = local_50 / (int)(uint)*param_1;
        iVar4 = iVar8;
      }
      else {
        local_50 = 1;
        iVar8 = (int)*(short *)(param_1 + 8);
        uVar11 = 0;
        iVar4 = (int)*(short *)(param_1 + 2);
        if ((local_4c & 8) != 0) {
          iVar8 = ((int)*(short *)(param_1 + 0x22) - (int)*(short *)(param_1 + 0x24)) -
                  local_44 / (int)(uint)param_1[1];
          iVar4 = iVar8;
        }
      }
      if (local_50 < 1) {
        return;
      }
      iVar9 = (int)*(short *)(param_1 + 2);
      if (iVar9 < iVar4) {
        uVar11 = 0;
        iVar4 = iVar9;
      }
      if (iVar4 < 0) {
        iVar4 = iVar9;
      }
      iVar4 = iVar9 - iVar4;
      iVar10 = iVar4;
      if (*(short *)(param_1 + 0x24) <= *(short *)(param_1 + 0x22)) {
        iVar9 = (int)*(short *)(param_1 + 8);
        if (iVar9 < iVar8) {
          iVar8 = iVar9;
        }
        if (iVar8 < 0) {
          iVar8 = iVar9;
        }
        iVar10 = iVar9 - iVar8;
      }
      uVar5 = (uint)param_1[0x20];
      uVar13 = (int)(((uint)param_1[0x14] +
                     (int)(((uint)param_1[0x18] - (uint)param_1[0x14]) * iVar10) / iVar9) * uVar5)
               >> 8;
      iVar12 = (int)(((uint)param_1[0x15] +
                     (int)(((uint)param_1[0x19] - (uint)param_1[0x15]) * iVar10) / iVar9) * uVar5)
               >> 8;
      iVar8 = (int)(((uint)param_1[0x16] +
                    (int)(((uint)param_1[0x1a] - (uint)param_1[0x16]) * iVar10) / iVar9) * uVar5) >>
              8;
      local_38 = uVar13 | iVar12 << 8 | iVar8 << 0x10;
      bVar1 = *local_48;
      bVar2 = *local_48;
      if ((char)bVar1 == 0x20) {
        iVar9 = local_3c + (int)(char)param_1[10];
      }
      else {
        *(int *)(param_5 + 0x10) = param_2 + 4;
        *(uint *)(param_5 + 0x14) = local_38 | local_34;
        *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) & 0xff9fffff | local_30;
        if ((local_4c & 0x10) == 0) {
          if ((byte)(bVar2 - 0x30) < 10) {
            FUN_8007dd3c(param_5,bVar1 | 0x200,
                         local_res8 + ((int)(local_3c + (int)(char)param_1[10]) >> 1),param_4);
          }
          else {
            FUN_8007dd3c(param_5,bVar1,local_res8,param_4);
            uVar6 = FUN_8007dc78(param_5,(int)(char)bVar1,(int)(char)local_48[1]);
          }
        }
        else {
          FUN_8007dd3c(param_5,bVar1 | 0x100,local_res8,param_4);
          uVar6 = local_3c;
        }
        iVar9 = uVar6 + (int)(char)param_1[10];
        if (uVar11 != 0) {
          iVar10 = (int)*(short *)(param_1 + 2);
          iVar14 = (*(short *)(param_1 + 4) * iVar4) / iVar10;
          *(int *)(param_5 + 0x10) = param_2;
          *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) & 0xff9fffff | 0x200000;
          *(uint *)(param_5 + 0x14) =
               (int)(uVar13 * iVar4) / iVar10 | (iVar12 * iVar4) / iVar10 << 8 |
               (iVar8 * iVar4) / iVar10 << 0x10 | 0x2000000;
          FUN_8007dd3c(param_5,bVar2,local_res8 - iVar14,param_4);
          FUN_8007dd3c(param_5,bVar2,local_res8 + iVar14,param_4);
        }
      }
      if ((local_4c & 4) != 0) {
        puVar7 = (undefined2 *)FUN_8007d024(param_2,local_38 << 1);
        *puVar7 = (undefined2)local_res8;
        puVar7[2] = (short)iVar9;
        puVar7[1] = (short)param_4;
        puVar7[3] = (undefined2)local_40;
      }
      local_48 = local_48 + 1;
      local_res8 = local_res8 + iVar9;
      local_50 = local_50 + -1;
    }
  }
  return;
}

int FUN_8006cd04(int param_1,int param_2)

{

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;

  iVar5 = 0;
  pbVar6 = *(byte **)(param_1 + 0x1c);
  FUN_8007da80(param_2,*(undefined4 *)(param_1 + 0x10));
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

void FUN_8006cdcc(short *param_1,undefined4 param_2,undefined4 param_3)

{

  int iVar1;
  short *local_28 [6];

  param_1[0x13] = -1;
  param_1[3] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 6;
  param_1[0xd] = 6;
  param_1[0x12] = 0;

  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x16) = param_3;

  if (((param_1[0xb] & 1U) == 0) && (iVar1 = 0, local_28[0] = param_1, 0 < *param_1)) {

    do {

      (*(code_varargs *)(*(code **)(param_1 + 0x14)))(0,local_28,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }

  return;
}

void FUN_8006ce70(int param_1)

{

  int local_20 [6];

  *(undefined2 *)(param_1 + 0x1c) = 6;
  *(undefined2 *)(param_1 + 0x1a) = 6;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0x1e;

  if ((*(ushort *)(param_1 + 0x16) & 0x80) == 0) {

    local_20[0] = param_1;
    (*(code_varargs *)(*(code **)(param_1 + 0x28)))(7,local_20,(int)*(short *)(param_1 + 6));
  }

  return;
}

void FUN_8006ced8(short *param_1)

{

  int iVar1;
  short *local_28 [6];

  param_1[0x13] = -0x41;
  param_1[0x12] = param_1[10];

  if (((param_1[0xb] & 4U) == 0) && (iVar1 = 0, local_28[0] = param_1, 0 < *param_1)) {

    do {

      if (iVar1 != param_1[3]) {

        (*(code_varargs *)(*(code **)(param_1 + 0x14)))(2,local_28,iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }

  return;
}

int FUN_8006cf64(int param_1)

{

  bool bVar1;
  int iVar2;
  int iVar3;

  if (*(short *)(param_1 + 0x26) < -1) {

    iVar2 = (int)*(short *)(param_1 + 0x14);
    iVar3 = (iVar2 + -0x3b) - (int)*(short *)(param_1 + 0x26);
    bVar1 = iVar2 < iVar3;
    if (iVar3 < 0) {

      iVar3 = 0;
      bVar1 = iVar2 < 0;
    }
    if (bVar1) {

      iVar3 = iVar2;
    }
  }
  else {

    iVar3 = (int)*(short *)(param_1 + 0x24);
  }

  return (iVar3 << 7) / (int)*(short *)(param_1 + 0x14);
}

int FUN_8006cfc4(short *param_1,int param_2)

{

  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *local_38 [2];
  int local_30;

  iVar7 = -2;
  iVar8 = -1;
  *(undefined *)(param_1 + 0xf) = 0;
  local_38[0] = param_1;
  local_30 = param_2;

  if (((param_1[0xb] & 8U) == 0) && (iVar4 = 0, 0 < *param_1)) {

    do {

      (*(code_varargs *)(*(code **)(param_1 + 0x14)))(3,local_38,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }

  sVar1 = param_1[0x10];
  sVar2 = param_1[0x10];
  if (sVar1 < 0) {

    param_1[0x10] = sVar2 + 1;
    sVar1 = param_1[0x10];
    sVar2 = param_1[0x10];
  }
  if (0 < sVar1) {

    param_1[0x10] = sVar2 + -1;
  }

  sVar1 = param_1[0x11];
  param_1[0x11] = sVar1 + 1;
  if (0x3c < (short)(sVar1 + 1)) {

    param_1[0x11] = 0;
  }

  sVar1 = param_1[0x13];
  if (param_1[0x13] < 0) {

    if (param_1[0x13] != -1) {

      param_1[0x13] = sVar1 + 1;
      if (((param_1[0xb] & 4U) == 0) && ((short)(sVar1 + 1) == -0x3a)) {

        (*(code_varargs *)(*(code **)(param_1 + 0x14)))(2,local_38,(int)param_1[3]);
      }
      sVar1 = param_1[0x12];
      param_1[0x12] = sVar1 - 1U;
      iVar7 = -2;
      if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 0) {
        param_1[0x12] = 0;
      }
    }
  }
  else {
    sVar1 = param_1[0x12];
    param_1[0x12] = sVar1 + 1;
    if (param_1[10] < (short)(sVar1 + 1)) {
      param_1[0x12] = param_1[10];
    }
    sVar1 = param_1[0x13];
    param_1[0x13] = sVar1 + 1;
    if (0x2d < (short)(sVar1 + 1)) {
      param_1[0x13] = 0;
    }
    if (param_2 != 0) {
      *(undefined *)(param_1 + 0xf) = 1;
      uVar3 = *(uint *)(param_2 + 4);
      if ((uVar3 & 0x500) == 0) {
        iVar4 = (int)param_1[3];
        if ((uVar3 & 0xa00) == 0) {
          uVar3 = uVar3 | *(uint *)(param_2 + 0xc);
          iVar5 = iVar4;
          iVar6 = 0;
          if ((uVar3 & 1) != 0) {
            iVar5 = iVar4 + -1;
            iVar8 = 5;
            if ((iVar5 < 0) && (iVar5 = 0, (param_1[1] & 4U) != 0)) {
              iVar5 = *param_1 + -1;
            }
            iVar6 = iVar4;
            if (iVar5 != param_1[3]) {
              iVar7 = -3;
              param_1[0x10] = -8;
              param_1[0x11] = 0;
            }
          }
          iVar4 = iVar5;
          if ((uVar3 & 2) != 0) {
            iVar4 = iVar5 + 1;
            iVar8 = 5;
            if ((*param_1 <= iVar4) && (iVar4 = *param_1 + -1, (param_1[1] & 4U) != 0)) {
              iVar4 = 0;
            }
            iVar6 = iVar5;
            if (iVar4 != param_1[3]) {
              iVar7 = -3;
              param_1[0x10] = 8;
              param_1[0x11] = 0;
            }
          }
          if ((param_1[1] & 0x10U) != 0) {
            iVar5 = iVar4;
            if ((uVar3 & 4) != 0) {
              iVar5 = (iVar4 - param_1[2]) + -1;
              iVar8 = 5;
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              iVar7 = -3;
              param_1[0x10] = -8;
              param_1[0x11] = 0;
              iVar6 = iVar4;
            }
            iVar4 = iVar5;
            if ((uVar3 & 8) != 0) {
              iVar4 = iVar5 + param_1[2] + -1;
              iVar8 = 5;
              if (*param_1 <= iVar4) {
                iVar4 = *param_1 + -1;
              }
              iVar7 = -3;
              param_1[0x10] = 8;
              param_1[0x11] = 0;
              iVar6 = iVar5;
            }
          }
          if (-1 < iVar8) {
            (*(code_varargs *)(*(code **)(param_1 + 0x14)))(iVar8,local_38,iVar6);
            (*(code_varargs *)(*(code **)(param_1 + 0x14)))(6,local_38,iVar4);
          }
          param_1[3] = (short)iVar4;
        }
        else {
          iVar8 = (*(code_varargs *)(*(code **)(param_1 + 0x14)))(8,local_38,iVar4);
          iVar7 = iVar4;
          if (iVar8 == 0) {
            iVar7 = -4;
          }
        }
      }
      else {
        iVar7 = -1;
      }
    }
    if (param_1[0xc] < *param_1) {
      do {
        sVar1 = param_1[0xd];
        param_1[0xd] = sVar1 - 1U;
        if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 1) {
          if ((param_1[0xb] & 2U) == 0) {
            (*(code_varargs *)(*(code **)(param_1 + 0x14)))(1,local_38,(int)param_1[0xc]);
          }
          param_1[0xd] = param_1[0xe];
          param_1[0xc] = param_1[0xc] + 1;
        }
      } while (((uint)(param_1[0xc] < *param_1) & (uint)(int)param_1[0xd] >> 0x1f) != 0);
    }
  }
  return iVar7;
}

void FUN_8006d400(short *param_1,int param_2)

{

  bool bVar1;
  int iVar2;
  short *local_28 [6];

  iVar2 = (int)param_1[3];
  if (*param_1 <= param_2) {

    param_2 = *param_1 + -1;
  }
  bVar1 = param_2 < iVar2;
  if (param_2 < 0) {

    param_2 = 0;
    bVar1 = 0 < iVar2;
  }

  if (bVar1) {

    param_1[0x10] = -8;
  }
  if (iVar2 < param_2) {

    param_1[0x10] = 8;
  }
  param_1[0x11] = 0;
  if (param_2 != iVar2) {
    local_28[0] = param_1;
    (*(code_varargs *)(*(code **)(param_1 + 0x14)))(5,local_28,0);
    (*(code_varargs *)(*(code **)(param_1 + 0x14)))(6,local_28,param_2);
  }
  param_1[3] = (short)param_2;
  return;
}

void FUN_8006d4b0(short *param_1,int param_2,int param_3)

{

  bool bVar1;
  int iVar2;

  iVar2 = (int)param_1[3];
  bVar1 = param_3 < iVar2;

  if (iVar2 < param_2) {

    param_1[0x10] = 0;
    bVar1 = param_3 < param_2;
    iVar2 = param_2;
  }
  if (bVar1) {

    param_1[0x10] = 0;
    iVar2 = param_3;
  }

  if (*param_1 <= iVar2) {

    iVar2 = *param_1 + -1;
  }
  if (iVar2 < 0) {

    iVar2 = 0;
  }

  param_1[3] = (short)iVar2;

  return;
}

void FUN_8006d50c(short *param_1,undefined4 param_2)

{

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  short *local_68;
  undefined4 local_64;
  short local_5c;
  short local_5a;
  undefined2 local_58;
  short local_56;
  undefined local_54;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [4];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;

  uVar12 = (uint)param_1[3];
  local_56 = 0;
  iVar4 = (int)param_1[0x10];
  iVar13 = iVar4 * ((int)param_1[5] + (int)param_1[6]);
  local_30 = (int)param_1[6] + (int)param_1[5];
  local_3c = 0xffffffff;
  iVar3 = (int)param_1[9];
  iVar7 = (int)((uint)(ushort)param_1[2] << 0x10) >> 0x10;

  if (iVar13 < 0) {

    iVar13 = iVar13 + 7;
  }
  iVar13 = iVar3 + (iVar13 >> 3);
  local_34 = iVar4 * 0x80;
  iVar1 = (int)((uint)(ushort)param_1[2] << 0x10) >> 0x11;
  iVar5 = iVar7 - iVar1;

  if (local_34 < 0) {

    local_34 = local_34 + 7;
  }
  local_34 = local_34 >> 3;
  if (local_34 < 0) {

    local_34 = -local_34;
  }

  uVar8 = uVar12 - iVar1;
  local_38 = 0x80 - local_34;
  iVar2 = (int)*param_1;
  if (iVar2 <= (int)(uVar8 + iVar7)) {

    uVar8 = iVar2 - iVar7;
  }
  if ((int)uVar8 < 0) {

    uVar8 = 0;
  }
  uVar10 = 0xffffffff;
  iVar11 = iVar7;
  if (iVar4 < 0) {
    uVar10 = uVar12 - iVar1;
    if (iVar2 - iVar7 <= (int)uVar10) {
      uVar10 = 0xffffffff;
    }
    local_3c = uVar12 + iVar5;
    if ((int)(uVar12 + iVar5) < iVar7) {
      local_3c = 0xffffffff;
    }
    iVar11 = iVar7 + 1;
    if (uVar12 == iVar2 - 1U) {
      uVar10 = iVar2 - iVar7;
      if (iVar2 <= iVar7) {
        uVar10 = 0xffffffff;
        iVar13 = iVar3;
        iVar11 = (int)param_1[2];
      }
    }
    else if ((int)uVar12 < iVar1 || iVar2 - iVar5 <= (int)uVar12) {
      iVar13 = iVar3;
      iVar11 = iVar7;
    }
  }
  if (0 < param_1[0x10]) {
    uVar10 = (uVar12 + iVar5) - 1;
    local_3c = (uVar12 - iVar1) - 1;
    if ((int)uVar10 < iVar7) {
      uVar10 = 0xffffffff;
    }
    iVar3 = (int)*param_1;
    if (iVar3 - iVar7 <= (int)local_3c) {
      local_3c = 0xffffffff;
    }
    uVar9 = uVar8 - 1;
    iVar13 = iVar13 - local_30;
    if (uVar12 == 0) {
      uVar8 = 0xffffffff;
      uVar10 = iVar7 - 1;
      iVar11 = iVar7 + 1;
      if (iVar3 <= iVar7) {
        iVar13 = (int)param_1[9];
        uVar10 = 0xffffffff;
        uVar8 = 0;
        iVar11 = iVar7;
      }
    }
    else {
      iVar11 = iVar11 + 1 + uVar9;
      if (iVar1 < (int)uVar12 && (int)uVar12 <= iVar3 - iVar5) goto LAB_8006d748;
      iVar13 = (int)param_1[9];
      iVar11 = iVar7;
    }
  }
  iVar11 = iVar11 + uVar8;
  uVar9 = uVar8;
LAB_8006d748:
  iVar13 = iVar13 + ((int)((uint)(ushort)param_1[5] << 0x10) >> 0x11);
  local_68 = param_1;
  local_64 = param_2;
  for (uVar8 = uVar9; (int)uVar8 < iVar11; uVar8 = uVar8 + 1) {
    if ((~uVar8 >> 0x1f & (uint)((int)uVar8 < (int)*param_1)) != 0) {
      sVar6 = (short)iVar13;
      if ((((uint)(uVar8 == uVar12) & (uint)~(int)param_1[0x13] >> 0x1f) != 0) &&
         ((param_1[1] & 8U) != 0)) {
        local_50 = param_1[8];
        local_4e = sVar6 - (param_1[5] >> 1);
        local_4c = param_1[4];
        local_4a = param_1[5];
        local_48 = 0xf0f0f;
        local_44 = 0x363636;
        FUN_8006b814(param_2,&local_50,(param_1[0x11] * 0x80) / 0x3c);
      }
      iVar3 = 0x80;
      if (uVar8 == uVar10) {
        iVar3 = local_38;
      }
      if (uVar8 == local_3c) {
        iVar3 = local_34;
      }
      local_54 = 1;
      iVar4 = (*(code_varargs *)(*(code **)(param_1 + 0x14)))(8,&local_68,uVar8);
      if (iVar4 == 0) {
        iVar3 = iVar3 >> 1;
        local_54 = 0;
      }
      local_58 = (undefined2)iVar3;
      local_5c = param_1[8];
      local_5a = sVar6;
      if ((param_1[0xb] & 0x10U) == 0) {
        (*(code_varargs *)(*(code **)(param_1 + 0x14)))(4,&local_68,uVar8);
      }
      local_56 = local_56 + 1;
    }
    iVar13 = iVar13 + local_30;
  }
  iVar13 = (int)param_1[0x13];
  if ((-1 < iVar13) && (*(char *)(param_1 + 0xf) != '\0')) {
    if ((param_1[1] & 0x20U) != 0) {
      iVar13 = 0;
    }
    sVar6 = param_1[8];
    if (0 < (int)uVar9) {
      FUN_8006b988(auStack_40,param_2,(int)sVar6,(int)param_1[9] - (int)param_1[6],
                   (int)*(char *)(param_1 + 7),-(int)*(char *)((int)param_1 + 0xf),iVar13);
    }
    if (iVar11 < *param_1) {
      FUN_8006b988(auStack_40,param_2,(int)sVar6,(int)param_1[9] + local_30 * iVar7,
                   (int)*(char *)(param_1 + 7),(int)*(char *)((int)param_1 + 0xf),iVar13);
    }
    FUN_8007da44(param_2,0x20);
  }
  return;
}

void FUN_8006d9c8(int param_1)

{

  *(undefined2 *)(param_1 + 0x1c) = 0xffff;

  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);

  return;
}

int FUN_8006d9dc(int param_1,int param_2)

{

  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  iVar3 = -2;
  if (-1 < *(short *)(param_1 + 0x1c)) {

    sVar1 = *(short *)(param_1 + 0x1c) + 1;
    *(short *)(param_1 + 0x1c) = sVar1;
    if (0x2d < sVar1) {

      *(undefined2 *)(param_1 + 0x1c) = 0;
    }

    iVar3 = -2;
    if (param_2 != 0) {

      iVar3 = (int)*(short *)(param_1 + 4);
      uVar2 = *(uint *)(param_2 + 4);
      if ((uVar2 & 0x500) == 0) {

        if ((uVar2 & 0xa00) == 0) {

          uVar2 = uVar2 | *(uint *)(param_2 + 0xc);
          iVar4 = iVar3;
          if ((uVar2 & 4) != 0) {

            iVar4 = iVar3 + -1;
          }
          if ((uVar2 & 8) != 0) {

            iVar4 = iVar4 + 1;
          }
          if (iVar4 < *(short *)(param_1 + 6)) {
            iVar4 = (int)*(short *)(param_1 + 6);
          }
          if (*(short *)(param_1 + 8) < iVar4) {
            iVar4 = (int)*(short *)(param_1 + 8);
          }
          if ((iVar4 != iVar3) && (-1 < *(short *)(param_1 + 0x1a))) {
            FUN_80060840();
          }
          *(short *)(param_1 + 4) = (short)iVar4;
          iVar3 = -2;
        }
      }
      else {
        iVar3 = -1;
      }
    }
  }
  return iVar3;
}
