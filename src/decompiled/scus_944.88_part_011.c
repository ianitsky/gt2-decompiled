// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_011.h"
#include <stdint.h>
#include <stddef.h>

// Forward declarations
int FUN_arcade__8001d13c(undefined4 *param_1, uint param_2);
void FUN_arcade__8001ac5c(short *param_1);
void FUN_arcade__80016ee8(int param_1, int param_2, undefined4 param_3);
void FUN_arcade__8002018c(undefined4 *param_1);
void FUN_arcade__80016368(undefined4 param_1, int param_2, int param_3, int param_4);
void FUN_arcade__8001a0f4(byte *param_1, int param_2);
void FUN_80060840(int param_1);
void FUN_8006ced8(undefined *param_1);
void FUN_arcade__8001abf4(short *param_1);
void FUN_arcade__8001934c(undefined *param_1);

// External variables and labels
extern char s__Smokey_Mountain_North_arcade__800507a8[];
extern char s__Tahiti_Dirt_Route_3_arcade__8005076c[];
extern undefined4 DAT_800f3956;
extern undefined4 DAT_800f3958;
extern undefined4 DAT_800f395a;
extern undefined4 DAT_800f395c;
extern undefined4 DAT_800f395e;
extern undefined4 DAT_800f3960;
extern undefined4 DAT_800f3962;
extern void *PTR_s_tahiti_t_arcade__8005021c_arcade__80050904;
extern void *PTR_s_tahiti_t_rev_arcade__800502f0_arcade__80050bc4;
extern void *PTR_s_tahiti_t_arcade__8005021c_arcade__80050e84;
extern void *PTR_s_tahiti_t_rev_arcade__800502f0_arcade__80051184;
extern void *PTR_s_tahiti_d_new_arcade__800503c4_arcade__80051484;
extern void *PTR_s_tahiti_t_2p_arcade__80050470_arcade__800515c4;
extern void *PTR_s_tahiti_d_new_2p_arcade__80050540_arcade__80051884;
extern void *PTR_LAB_arcade__80051bc2_2_arcade__80052120;
extern void *PTR_PTR_s_ldvan_arcade__80027134_arcade__80051b84_arcade__800520e8;
extern void *PTR_DAT_arcade__80051bd8_arcade__8005213c;
extern undefined4 DAT_arcade__80051bac;
extern undefined4 DAT_arcade__80051bad;
extern undefined4 DAT_arcade__80051f20;
extern undefined4 DAT_arcade__80051f21;
extern undefined4 DAT_800f3964;
extern undefined4 DAT_arcade__80051bb8;
extern undefined4 DAT_arcade__80051f38;
extern undefined4 DAT_80123810;
extern undefined4 DAT_800f859e;
extern void *PTR_DAT_arcade__8004fcb0;
extern undefined4 DAT_800f05a0;
extern undefined4 DAT_800f34e8;
extern undefined1 UNK_800f34ea[];
extern undefined4 DAT_800f3618;
extern undefined1 UNK_800f361a[];
extern undefined4 DAT_800f1be8;
extern undefined4 DAT_801c33f8;
extern void LAB_arcade__8004f7c2_2(void);
extern void LAB_arcade__8004f7c8_2(void);
extern undefined4 DAT_arcade__80052190;
extern void *PTR_DAT_arcade__80051bec_arcade__80052158;
extern void *PTR_DAT_arcade__80051c0c_arcade__80052174;
extern undefined4 DAT_800f19e2;
extern undefined4 DAT_800f1a30;
extern undefined4 DAT_801c33f0;
extern undefined4 DAT_arcade__8004ffb0;
extern undefined4 DAT_800f19d8;
extern undefined4 DAT_arcade__80050094;
extern undefined4 DAT_arcade__800500c8;
extern undefined4 DAT_800f1994;
extern void LAB_arcade__8004fc92_2(void);
extern undefined4 DAT_800f19a0;
extern void *PTR_DAT_arcade__8004fccc;
extern undefined4 DAT_800f1980;
extern undefined4 DAT_arcade__80051b74;
extern undefined4 DAT_800f19e8;
extern undefined4 DAT_800f19e4;
extern undefined4 DAT_800f1a00;
extern void *PTR_DAT_arcade__80051bac_arcade__80052104;
extern undefined4 DAT_800f3748;
extern undefined1 UNK_800efdca[];
extern undefined1 UNK_801cd558[];
extern undefined4 DAT_801c33f4;
extern undefined4 DAT_801c3402;
extern void *PTR_PTR_DAT_arcade__8004fd74_arcade__8005006c;
extern undefined4 DAT_801c3406;
extern void LAB_arcade__8004fda4(void);
extern void *PTR_PTR_DAT_arcade__8004fd8c_arcade__8005008c;
extern undefined4 DAT_801c3400;
extern undefined4 DAT_800f3976;
extern undefined4 DAT_800f3974;
extern undefined4 DAT_800f3954;
extern undefined4 DAT_800f3910;
extern undefined4 DAT_800f3908;
extern undefined4 DAT_801cacf8;
extern void *PTR_s_Tahiti_Road_arcade__800505f8_arcade__80051964;
extern undefined4 DAT_801c9af5;
extern void LAB_arcade__800526b6_2(void);
extern void LAB_arcade__800526be_2(void);
extern undefined4 DAT_arcade__800526dc;
extern void LAB_arcade__800526ba_2(void);
extern void LAB_arcade__800526d2_2(void);
extern void LAB_arcade__800526d6_2(void);
extern undefined1 UNK_arcade__80052682[];
extern undefined1 UNK_arcade__8005267c[];
extern undefined1 UNK_arcade__80052684[];
extern undefined4 DAT_arcade__80052634;
extern void LAB_arcade__800526c6_2(void);
extern void LAB_arcade__800526ca_2(void);
extern undefined4 DAT_800f39e8;
extern void *PTR_LAB_arcade__80024a40_arcade__800529e4;
extern void LAB_arcade__800528b4(void);
extern void LAB_arcade__800528e4(void);
extern void LAB_arcade__80052914(void);
extern void LAB_arcade__80052944(void);
extern undefined4 DAT_arcade__800529a4;
extern void LAB_arcade__80052974(void);
extern void LAB_arcade__8002746c(void);
extern undefined4 DAT_800f3a10;
extern undefined4 DAT_800f3a14;
extern undefined4 DAT_800f3a18;
extern undefined4 DAT_800f39f0;
extern undefined4 DAT_800f39f4;
extern undefined4 DAT_800f39f8;
extern undefined4 DAT_800f3a00;
extern undefined4 DAT_800f3a04;
extern undefined4 DAT_800f3a08;
extern undefined4 DAT_800f3a20;
extern undefined4 DAT_800f3ce0;
extern undefined4 DAT_800a8d64;
extern undefined4 DAT_801f068c;
extern void LAB_arcade__80025e48(void);
extern void LAB_arcade__80025cbc(void);
extern void LAB_arcade__80052908(void);
extern void LAB_arcade__80053508(void);
extern undefined DAT_801d58b6;
extern void *PTR_DAT_arcade__800529dc;
extern undefined1 UNK_801d58eb[];
extern undefined4 DAT_801d586c;
extern void *PTR_s_DON0001_global__80020f2c_global__80023d9c;
extern undefined4 DAT_800b15c0;
extern undefined4 DAT_800e15c0;
extern void LAB_global__80023ec2_2(void);
extern undefined4 DAT_global__80023ea8;
extern undefined4 DAT_800e15d0;
extern undefined4 DAT_800e15c8;
extern undefined4 DAT_801b9600;
extern undefined4 DAT_801b95f0;
extern undefined4 DAT_801b9610;
extern undefined4 DAT_801b9614;
extern void LAB_global__8002106c(void);
extern void _LAB_800a8dd8(void);
extern undefined4 DAT_801ba408;
extern undefined4 DAT_801ba417;
extern undefined4 DAT_801ba42c;

void FUN_arcade__8001c118(undefined2 *param_1,undefined *param_2)

{
  undefined2 uVar1;

  if (param_2 == (undefined *)0x0) {

    *param_1 = 2;
    param_1[1] = 0x1e;
    param_1[3] = 0x20;
    *(undefined *)(param_1 + 6) = 0x80;

    *(undefined *)((int)param_1 + 0xd) = 0x40;
    uVar1 = 0x80;
    *(undefined *)(param_1 + 2) = 0;
  }
  else {

    *param_1 = *(undefined2 *)(param_2 + 2);
    param_1[1] = *(undefined2 *)(param_2 + 4);
    *(undefined *)(param_1 + 2) = *param_2;
    param_1[3] = *(undefined2 *)(param_2 + 8);
    *(undefined *)(param_1 + 6) = param_2[6];
    *(undefined *)((int)param_1 + 0xd) = param_2[7];
    uVar1 = *(undefined2 *)(param_2 + 10);
  }
  param_1[7] = uVar1;
  param_1[10] = 0xffff;
  return;
}

void FUN_arcade__8001c1b0(int param_1)

{

  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}

void FUN_arcade__8001c1b8(int param_1)

{

  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 2);
  return;
}

void FUN_arcade__8001c1c4(int param_1)

{

  *(ushort *)(param_1 + 0x14) = ~*(ushort *)(param_1 + 2);
  return;
}

void FUN_arcade__8001c1d8(short *param_1)

{
  short sVar1;

  if (param_1[10] < 0) {

    if (param_1[10] < -1) {

      param_1[10] = param_1[10] + 1;
    }

  }
  else {

    sVar1 = param_1[10] + 1;
    param_1[10] = sVar1;

    if ((int)param_1[1] + (int)*param_1 <= (int)sVar1) {

      param_1[10] = param_1[1];
      return;
    }
  }
  return;
}

void FUN_arcade__8001c234(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  int local_40;
  int local_3c;
  ushort local_38;
  uint local_30;

  iVar13 = 1;
  bVar3 = false;
  uVar12 = (uint)*(ushort *)(param_1 + 0xe);
  iVar8 = (int)*(short *)(param_1 + 2);
  uVar11 = 0;

  if (*(short *)(param_1 + 0x14) != -1) {

    iVar9 = (int)((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 4) << 0x10) >> 0x11;
    if (uVar12 != 0x80) {
      iVar15 = iVar9 * uVar12;
      iVar9 = iVar15 >> 7;
      if (iVar15 < 0) {
        iVar9 = iVar15 + 0x7f >> 7;
      }
    }

    iVar15 = (int)*(short *)(param_1 + 8);
    iVar14 = (int)*(short *)(param_1 + 10);
    bVar5 = *(byte *)(param_1 + 4) & 0x60;

    if (bVar5 == 0x20) {
      iVar15 = iVar15 + iVar9;
    }
    else if (bVar5 == 0x40) {
      iVar15 = iVar15 - iVar9;
    }

    iVar7 = (int)*(short *)(param_1 + 0x14);

    if (iVar7 < 0) {

      if (-2 < iVar7) {
        return;
      }

      iVar7 = iVar8 + 1 + iVar7;

      iVar13 = (int)*(short *)(*(int *)(param_1 + 0x10) + 4);
      iVar14 = iVar13 * uVar12;
      if ((uVar12 != 0x80) && (iVar13 = iVar14 >> 7, iVar14 < 0)) {
        iVar13 = iVar14 + 0x7f >> 7;
      }

      iVar14 = (int)((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 6) << 0x10) >> 0x11;
      iVar16 = iVar14 * uVar12;
      if ((uVar12 != 0x80) && (iVar14 = iVar16 >> 7, iVar16 < 0)) {
        iVar14 = iVar16 + 0x7f >> 7;
      }

      local_42 = (short)iVar14 - (short)((iVar14 * iVar7) / iVar8);
      iVar14 = ((uint)*(byte *)(param_1 + 0xc) +
               (int)(-(uint)*(byte *)(param_1 + 0xc) * iVar7) / iVar8) * 2;
      if (0xc0 < iVar14) {
        iVar14 = 0xc0;
      }

      sVar1 = (short)iVar15 - (short)iVar9;
      local_44 = (short)((iVar13 * iVar7) / iVar8);
      local_48 = sVar1 + local_44;
      sVar2 = (short)((*(short *)(param_1 + 6) * iVar7) / iVar8);
      local_44 = ((short)iVar9 * 2 + sVar2) - local_44;
      local_46 = *(short *)(param_1 + 10) - local_42;
      local_42 = local_42 * 2;

      local_40 = 0;
      local_3c = iVar14;
      FUN_arcade__80011a50(param_2,&local_48);

      local_48 = sVar1 - sVar2;
      local_3c = 0;
      local_40 = iVar14;
      FUN_arcade__80011a50(param_2,&local_48);

      uVar6 = 0x20;
    }
    else {

      if (iVar7 < iVar8) {

        uVar17 = (int)((uint)*(byte *)(param_1 + 0xc) * iVar7) / iVar8;
        iVar13 = ((int)*(short *)(param_1 + 6) * (iVar8 - iVar7)) / iVar8;
        uVar11 = (int)((uint)*(byte *)(param_1 + 0xc) * (iVar8 - iVar7)) / iVar8;
        bVar3 = true;
      }
      else {

        uVar17 = (uint)*(byte *)(param_1 + 0xc);
        if ((*(byte *)(param_1 + 4) & 1) != 0) {
          iVar9 = iVar7 - iVar8;
          if (iVar8 < iVar7 - iVar8) {
            iVar9 = iVar8;
          }

          uVar17 = uVar17 + (int)((*(byte *)(param_1 + 0xd) - uVar17) * (iVar8 - iVar9)) / iVar8;
        }
      }

      if ((*(byte *)(param_1 + 4) & 4) == 0) {
        bVar3 = false;
      }

      local_30 = (*(byte *)(param_1 + 4) & 0x18) << 2;
      local_38 = (ushort)local_30;
      piVar10 = *(int **)(param_1 + 0x10);

      if (uVar12 != 0x80) {
        if (bVar3) {

          FUN_arcade__80011d74(param_2,piVar10,iVar15 - iVar13,iVar14,uVar11,uVar12,0x20);
          FUN_arcade__80011d74(param_2,piVar10,iVar15 + iVar13,iVar14,uVar11,uVar12,0x20);
        }
        if ((*(byte *)(param_1 + 4) & 2) != 0) {

          FUN_arcade__80011d74(param_2,piVar10,iVar15,iVar14,uVar17,uVar12,local_38);
          return;
        }

        FUN_arcade__80011c48(param_2,piVar10,iVar15,iVar14,uVar17,uVar12);
        return;
      }

      if (bVar3) {

        uVar11 = uVar11 | uVar11 << 8 | uVar11 << 0x10 | 0x2000000;

        piVar4 = (int *)FUN_80081478(param_2,uVar11);
        *piVar4 = ((iVar15 - iVar13) - ((int)((uint)*(ushort *)(piVar10 + 1) << 0x10) >> 0x11)) +
                  (iVar14 - ((int)((uint)*(ushort *)((int)piVar10 + 6) << 0x10) >> 0x11)) * 0x10000;
        piVar4[1] = *piVar10;
        piVar4[2] = piVar10[1];

        piVar4 = (int *)FUN_80081478(param_2,uVar11);
        *piVar4 = ((iVar15 + iVar13) - ((int)((uint)*(ushort *)(piVar10 + 1) << 0x10) >> 0x11)) +
                  (iVar14 - ((int)((uint)*(ushort *)((int)piVar10 + 6) << 0x10) >> 0x11)) * 0x10000;
        piVar4[1] = *piVar10;
        piVar4[2] = piVar10[1];

        FUN_8007da44(param_2,*(ushort *)(piVar10 + 2) | local_30);
      }

      uVar11 = uVar17 << 0x10;
      if ((*(byte *)(param_1 + 4) & 2) == 0) {

        uVar17 = uVar17 | uVar17 << 8;
      }
      else {

        uVar17 = uVar17 | uVar17 << 8 | uVar11;
        uVar11 = 0x2000000;
      }

      piVar4 = (int *)FUN_80081478(param_2,uVar17 | uVar11);
      *piVar4 = (iVar15 - ((int)((uint)*(ushort *)(piVar10 + 1) << 0x10) >> 0x11)) +
                (iVar14 - ((int)((uint)*(ushort *)((int)piVar10 + 6) << 0x10) >> 0x11)) * 0x10000;
      piVar4[1] = *piVar10;
      piVar4[2] = piVar10[1];
      uVar6 = *(ushort *)(piVar10 + 2) | local_38;
    }

    FUN_8007da44(param_2,uVar6);
  }
  return;
}

void FUN_arcade__8001c7ac(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined4 uVar1;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];

  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x14) = param_3;

  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0xffff;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  return;
}

void FUN_arcade__8001c80c(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = param_1;

  if (0 < param_2) {
    do {
      uVar1 = *param_3;
      param_3 = param_3 + 2;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(iVar3 + 0xc) = uVar1;
      iVar3 = iVar3 + 2;
    } while (iVar2 < param_2);
  }

  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}

void FUN_arcade__8001c83c(int param_1)

{
  *(undefined2 *)(param_1 + 0x12) = 0xffff;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}

void FUN_arcade__8001c880(int param_1)

{
  *(undefined2 *)(param_1 + 0x16) = 0xffef;
  return;
}

int FUN_arcade__8001c88c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  iVar7 = -2;

  if (*(short *)(param_1 + 0x16) < 0) {
    if (*(short *)(param_1 + 0x16) < -1) {
      *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + 1;
    }
    return -2;
  }

  sVar2 = *(short *)(param_1 + 0x16) + 1;
  *(short *)(param_1 + 0x16) = sVar2;
  if (0x38 < sVar2) {
    *(undefined2 *)(param_1 + 0x16) = 0xc;
  }

  iVar5 = 1;
  iVar3 = 0;
  if (*(short *)(param_1 + 0x1a) == 1) {
    iVar5 = 2;
  }

  for (; iVar3 < iVar5; iVar3 = iVar3 + 1) {

    if (0 < *(short *)(param_1 + 0x18)) {
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + -1;
    }
    sVar2 = *(short *)(param_1 + 0x18);
    if (sVar2 < 0) {
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
      sVar2 = *(short *)(param_1 + 0x18);
    }
    if (sVar2 == 0) {
      *(undefined2 *)(param_1 + 0x12) = 0xffff;
      *(undefined2 *)(param_1 + 0x14) = 0xffff;
    }
  }

  if ((*(int *)(param_1 + 0x28) != 0) &&
     (iVar3 = 0, *(char *)(*(int *)(param_1 + 0x28) + (int)*(short *)(param_1 + 10)) == '\0')) {

    for (; iVar3 < *(short *)(param_1 + *(short *)(param_1 + 8) * 2 + 0xc); iVar3 = iVar3 + 1) {
      if (*(char *)(*(int *)(param_1 + 0x28) + iVar3) != '\0') {
        *(short *)(param_1 + 10) = (short)iVar3;
        break;
      }
    }
  }

  *(undefined *)(param_1 + 0x1c) = 0;

  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + 4);
    sVar2 = *(short *)(param_1 + 8);
    iVar3 = (int)sVar2;

    if ((uVar6 & 0x500) != 0) {
      return -1;
    }

    if ((uVar6 & 0xa00) != 0) {
      return (int)*(short *)(param_1 + 10);
    }

    uVar6 = uVar6 | *(uint *)(param_2 + 0xc);

    if (1 < *(short *)(param_1 + iVar3 * 2 + 0xc)) {
      sVar1 = *(short *)(param_1 + 10);
      iVar4 = (int)sVar1;
      *(undefined *)(param_1 + 0x1c) = 1;
      iVar5 = iVar4;

      if ((uVar6 & 4) != 0) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) {
            iVar5 = *(short *)(param_1 + iVar3 * 2 + 0xc) + -1;
          }
        } while ((*(int *)(param_1 + 0x28) != 0) &&
                (*(char *)(*(int *)(param_1 + 0x28) + iVar5) == '\0'));
        if (iVar5 != iVar4) {
          iVar7 = -3;
          *(short *)(param_1 + 0x12) = sVar2;
          *(short *)(param_1 + 0x14) = sVar1;
          *(undefined2 *)(param_1 + 0x18) = 0xfff4;
          *(undefined2 *)(param_1 + 0x1a) = 0;
        }
      }

      if ((uVar6 & 8) != 0) {
        do {
          iVar5 = iVar5 + 1;
          if (*(short *)(param_1 + iVar3 * 2 + 0xc) <= iVar5) {
            iVar5 = 0;
          }
        } while ((*(int *)(param_1 + 0x28) != 0) &&
                (*(char *)(*(int *)(param_1 + 0x28) + iVar5) == '\0'));
        if (iVar5 != iVar4) {
          iVar7 = -3;
          *(short *)(param_1 + 0x12) = sVar2;
          *(short *)(param_1 + 0x14) = sVar1;
          *(undefined2 *)(param_1 + 0x18) = 0xc;
          *(undefined2 *)(param_1 + 0x1a) = 0;
        }
      }
      *(short *)(param_1 + 10) = (short)iVar5;
    }

    if (1 < *(short *)(param_1 + 0x10)) {
      sVar2 = *(short *)(param_1 + 8);
      iVar5 = (int)sVar2;
      iVar3 = iVar5;

      if ((uVar6 & 1) != 0) {
        iVar3 = iVar5 + -1;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        if (iVar3 != iVar5) {
          iVar7 = -3;
          *(short *)(param_1 + 0x12) = sVar2;
          *(undefined2 *)(param_1 + 0x18) = 0xfff4;
          *(undefined2 *)(param_1 + 0x1a) = 1;
          *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 10);
        }
      }

      if ((uVar6 & 2) != 0) {
        iVar3 = iVar3 + 1;
        if (*(short *)(param_1 + 0x10) <= iVar3) {
          iVar3 = *(short *)(param_1 + 0x10) + -1;
        }
        if (iVar3 != *(short *)(param_1 + 8)) {
          iVar7 = -3;
          *(undefined2 *)(param_1 + 0x18) = 0xc;
          *(short *)(param_1 + 0x12) = sVar2;
          *(undefined2 *)(param_1 + 0x1a) = 1;
          *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 10);
        }
      }
      *(short *)(param_1 + 8) = (short)iVar3;
    }
  }
  return iVar7;
}

void FUN_arcade__8001cc10(short *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short local_50;
  short local_4e;
  short local_4c;
  undefined2 local_4a;
  int local_48;
  int local_44;
  short *local_40;
  undefined4 local_3c;
  short local_38;
  short local_36;
  short local_34;
  undefined4 local_32;
  undefined4 local_2c;

  sVar1 = *param_1;
  sVar2 = param_1[1];
  uVar3 = param_1[2];
  local_2c = *(undefined4 *)(param_1 + 0x12);
  uVar7 = (uint)param_1[0xb];
  local_40 = param_1;
  local_3c = param_2;
  local_36 = sVar2;

  if ((int)uVar7 < 0) {
    if (-2 < (int)uVar7) {
      return;
    }

    iVar11 = ((int)((uint)uVar3 << 0x10) >> 0x10) * (uVar7 + 0x11);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xf;
    }
    iVar12 = ((int)((uint)uVar3 << 0x10) >> 0x11) * (uVar7 + 0x11);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xf;
    }

    iVar13 = (int)param_1[3] * ~uVar7;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xf;
    }
    iVar5 = ~uVar7 * 0x80;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = iVar5 >> 4;

    sVar9 = sVar1 - ((short)uVar3 >> 1);
    local_4c = (short)(iVar11 >> 4);
    local_50 = sVar9 + local_4c;
    sVar4 = (short)(iVar12 >> 4);
    local_4c = (uVar3 + sVar4) - local_4c;
    local_4e = sVar2 - (short)(iVar13 >> 5);
    local_4a = (undefined2)(iVar13 >> 4);

    local_48 = 0;
    local_44 = iVar5;
    FUN_arcade__80011a50(param_2,&local_50);

    local_50 = sVar9 - sVar4;
    local_44 = 0;
    local_48 = iVar5;
    FUN_arcade__80011a50(param_2,&local_50);

    FUN_8007da44(param_2,0x20);
    local_32 = 0xffffffff;
    pcVar6 = *(code **)(param_1 + 0x10);
    iVar11 = -1;
    local_38 = sVar1;
    local_34 = (short)iVar5;
  }
  else {

    if ((0xb < (int)uVar7) && ((*(byte *)(param_1 + 0xe) & 1) != 0)) {

      iVar11 = 0x34 - uVar7;
      if (10 < iVar11) {
        iVar11 = 10;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }

      sVar4 = (param_1[2] >> 1) + 8;
      uVar7 = (iVar11 * 0xff) / 10;
      uVar7 = uVar7 | ((int)uVar7 >> 1) << 8 | 0x2000000;

      iVar11 = FUN_8007e0e0(param_2,uVar7);
      sVar9 = sVar1 + sVar4;
      *(short *)(iVar11 + 4) = sVar9 + 6;
      *(short *)(iVar11 + 8) = sVar9;
      *(short *)(iVar11 + 0xc) = sVar9;
      *(short *)(iVar11 + 6) = sVar2;
      *(short *)(iVar11 + 10) = sVar2 + 10;
      *(short *)(iVar11 + 0xe) = sVar2 + -10;

      iVar11 = FUN_8007e0e0(param_2,uVar7);
      sVar4 = sVar1 - sVar4;
      *(short *)(iVar11 + 4) = sVar4 + -6;
      *(short *)(iVar11 + 8) = sVar4;
      *(short *)(iVar11 + 0xc) = sVar4;
      *(short *)(iVar11 + 6) = sVar2;
      *(short *)(iVar11 + 10) = sVar2 + 10;
      *(short *)(iVar11 + 0xe) = sVar2 + -10;

      FUN_8007da44(param_2,0x20);
    }

    iVar11 = (int)param_1[0xb];
    if (0xb < iVar11 && 1 < param_1[8]) {

      iVar11 = 0x34 - iVar11;
      if (10 < iVar11) {
        iVar11 = 10;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }

      sVar9 = (param_1[3] >> 1) + 6;
      uVar7 = (iVar11 * 0xff) / 10;

      if (0 < param_1[4]) {
        iVar11 = FUN_8007e0e0(param_2,uVar7 | ((int)uVar7 >> 1) << 8 | 0x2000000);
        *(short *)(iVar11 + 8) = sVar1 + 6;
        *(short *)(iVar11 + 0xc) = sVar1 + -6;
        sVar4 = sVar2 - sVar9;
        *(short *)(iVar11 + 4) = sVar1;
        *(short *)(iVar11 + 6) = sVar4 + -8;
        *(short *)(iVar11 + 10) = sVar4;
        *(short *)(iVar11 + 0xe) = sVar4;
      }

      if ((int)param_1[4] < param_1[8] + -1) {
        iVar11 = FUN_8007e0e0(param_2,uVar7 | ((int)uVar7 >> 1) << 8 | 0x2000000);
        *(short *)(iVar11 + 8) = sVar1 + 6;
        *(short *)(iVar11 + 0xc) = sVar1 + -6;
        sVar9 = sVar2 + sVar9;
        *(short *)(iVar11 + 4) = sVar1;
        *(short *)(iVar11 + 6) = sVar9 + 8;
        *(short *)(iVar11 + 10) = sVar9;
        *(short *)(iVar11 + 0xe) = sVar9;
      }

      FUN_8007da44(param_2,0x20);
      iVar11 = (int)param_1[0xb];
    }

    iVar12 = 0x80;
    if (iVar11 < 0xc) {
      iVar12 = (iVar11 << 7) / 0xc;
    }

    iVar11 = (int)param_1[0xc];
    sVar9 = param_1[2];
    sVar4 = param_1[3];
    sVar10 = (short)((sVar9 * iVar11) / 0xc);
    sVar8 = (short)((sVar4 * iVar11) / 0xc);

    local_38 = -sVar9;
    local_36 = -sVar4;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
      local_38 = sVar9;
      local_36 = sVar4;
    }

    if (param_1[0xd] == 1) {
      sVar10 = 0;
      local_38 = 0;
    }
    else {
      sVar8 = 0;
      local_36 = 0;
    }

    sVar9 = (short)((iVar12 * (0xc - iVar11)) / 0xc);

    if (-1 < param_1[10]) {
      local_38 = sVar1 + sVar10 + local_38;
      local_36 = sVar2 + sVar8 + local_36;
      local_34 = 0x80 - sVar9;
      local_32 = *(undefined4 *)(param_1 + 9);
      (**(code **)(param_1 + 0x10))();
    }

    local_38 = sVar1 + sVar10;
    local_36 = sVar2 + sVar8;
    local_32 = *(undefined4 *)(param_1 + 4);
    iVar11 = (int)param_1[5];
    pcVar6 = *(code **)(param_1 + 0x10);
    local_34 = sVar9;
  }

  (*pcVar6)();
  return;
}

int FUN_arcade__8001d13c(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar4 = 0;

  for (puVar3 = param_1 + 7; puVar3[-6] != 0; puVar3 = puVar3 + 8) {

    uVar1 = FUN_80083004(*param_1);
    puVar3[-3] = uVar1;

    *(byte *)puVar3 = 0;

    iVar2 = FUN_arcade__80023598((int)*(short *)(puVar3 + -2));
    if (iVar2 != 0) {
      *(byte *)puVar3 = 1;

      if ((puVar3[-1] != -1) && ((param_2 & 1) != 0)) {

        *(byte *)puVar3 = (byte)(&DAT_801c9998)[puVar3[-1]] >> 2 & 1;
      }

      if (*(byte *)puVar3 != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    param_1 = param_1 + 8;
  }
  return iVar4;
}

void FUN_arcade__8001d22c(void)

{

  s__Smokey_Mountain_North_arcade__800507a8[0] = '\x7f';
  s__Tahiti_Dirt_Route_3_arcade__8005076c[0] = '\x7f';

  DAT_800f3956 = FUN_arcade__8001d13c(&PTR_s_tahiti_t_arcade__8005021c_arcade__80050904,0);
  DAT_800f3958 = FUN_arcade__8001d13c(&PTR_s_tahiti_t_rev_arcade__800502f0_arcade__80050bc4,1);
  DAT_800f395a = FUN_arcade__8001d13c(&PTR_s_tahiti_t_arcade__8005021c_arcade__80050e84,0);
  DAT_800f395c = FUN_arcade__8001d13c(&PTR_s_tahiti_t_rev_arcade__800502f0_arcade__80051184,1);
  DAT_800f395e = FUN_arcade__8001d13c(&PTR_s_tahiti_d_new_arcade__800503c4_arcade__80051484,0);
  DAT_800f3960 = FUN_arcade__8001d13c(&PTR_s_tahiti_t_2p_arcade__80050470_arcade__800515c4,0);
  DAT_800f3962 = FUN_arcade__8001d13c(&PTR_s_tahiti_d_new_2p_arcade__80050540_arcade__80051884,0);
  return;
}

int FUN_arcade__8001d2fc(int param_1,int param_2)

{
  return (int)*(short *)((&PTR_LAB_arcade__80051bc2_2_arcade__80052120)[param_1] + param_2 * 2);
}

undefined4 FUN_arcade__8001d324(int param_1,int param_2)

{
  return *(undefined4 *)
          ((&PTR_PTR_s_ldvan_arcade__80027134_arcade__80051b84_arcade__800520e8)[param_1] +
           param_2 * 4);
}

int FUN_arcade__8001d34c(int param_1,int param_2)

{
  return (int)*(short *)((&PTR_DAT_arcade__80051bd8_arcade__8005213c)[param_1] + param_2 * 2);
}

int FUN_arcade__8001d374(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    pcVar1 = &DAT_arcade__80051bac;
    iVar2 = 0;
    while (*pcVar1 == '\0') {
      iVar3 = iVar2 + 1;
      pcVar1 = &DAT_arcade__80051bad + iVar2;
      iVar2 = iVar3;
      if (9 < iVar3) {
        return 0;
      }
    }
  }
  else {
    iVar2 = 0;
    if (param_1 == 6) {
      pcVar1 = &DAT_arcade__80051f20;
      iVar3 = 0;
      do {
        if (*pcVar1 != '\0') {
          return iVar3;
        }
        iVar4 = iVar3 + 1;
        pcVar1 = &DAT_arcade__80051f21 + iVar3;
        iVar2 = 0;
        iVar3 = iVar4;
      } while (iVar4 < 0x18);
    }
  }
  return iVar2;
}

void FUN_arcade__8001d434(void)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;

  DAT_800f3964 = 0;
  puVar2 = &DAT_arcade__80051bac;

  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    cVar1 = (&DAT_arcade__80051bb8)[iVar3];
    if (cVar1 < 0) {
      *puVar2 = 1;
    }
    else {
      *puVar2 = 0;

      if (((byte)(&DAT_801c9998)[cVar1] >> 1 & 1 | (byte)(&DAT_801c9998)[cVar1] >> 2 & 1) != 0) {
        *puVar2 = 1;
        DAT_800f3964 = 1;
      }
    }
    puVar2 = puVar2 + 1;
  }

  puVar2 = &DAT_arcade__80051f20;
  for (iVar3 = 0; iVar3 < 0x18; iVar3 = iVar3 + 1) {
    cVar1 = (&DAT_arcade__80051f38)[iVar3];
    if ((cVar1 < 0) ||
       (*puVar2 = 0,
       ((byte)(&DAT_801c9998)[cVar1] >> 1 & 1 | (byte)(&DAT_801c9998)[cVar1] >> 2 & 1) != 0)) {
      *puVar2 = 1;
    }
    puVar2 = puVar2 + 1;
  }
  return;
}

undefined4 FUN_arcade__8001d558(void)

{
  return DAT_800f3964;
}

void FUN_arcade__8001e53c(undefined4 *param_1)

{

  *(undefined *)(param_1 + 0x35) = 1;
  *(undefined *)((int)param_1 + 0xd5) = 1;

  *(undefined2 *)(param_1 + 0x2b) = 0x5e;
  *(undefined2 *)((int)param_1 + 0xae) = 0x1500;
  *(undefined2 *)(param_1 + 0x31) = 0x100;
  *(undefined2 *)((int)param_1 + 0xc6) = 0xf0;
  *(undefined2 *)(param_1 + 0x32) = 0xff80;
  *(undefined2 *)((int)param_1 + 0xca) = 0x80;
  *(undefined2 *)(param_1 + 0x33) = 0x5a;
  *(undefined2 *)((int)param_1 + 0xce) = 0xffce;
  *(undefined2 *)(param_1 + 0x34) = 400;

  param_1[0x36] = 0xa2a2a2;

  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0x94ccc;
  *(undefined2 *)(param_1 + 0x30) = 0;

  *(undefined2 *)((int)param_1 + 0xc2) = 0;
  *(undefined2 *)((int)param_1 + 0xd2) = 0x7fff;

  *param_1 = 0;
  return;
}

void FUN_arcade__8001e5d8(int param_1,undefined4 param_2,int param_3)

{

  *(ushort *)(param_1 + 0xae) = *(short *)(param_1 + 0xae) + 0x10U & 0x3fff;

  if (0xfb90 < param_3) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 0x8000;
  }
  return;
}

void FUN_arcade__8001f238
               (undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  short local_78;
  short local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined auStack_68 [64];

  iVar5 = param_6 + 8;

  FUN_8007da80(param_9,&DAT_80123810);
  *(undefined4 *)(param_9 + 0x10) = param_1;
  *(uint *)(param_9 + 0xc) = *(uint *)(param_9 + 0xc) & 0xff9fffff | 0x200000;

  if (param_8 < 0) {
    uVar4 = param_7 + 0x80 + param_8;
  }
  else {
    uVar4 = param_7 * param_8 >> 7;
  }

  if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }

  if (param_10 == 0) {
    uVar4 = (int)uVar4 / 2;
  }

  *(uint *)(param_9 + 0x14) =
       (int)uVar4 / 2 | (int)uVar4 / 2 << 8 | ((int)uVar4 / 3) * 0x10000 | 0x2000000;

  param_2 = param_2 + param_3 * 0xa4 + 4;
  uVar1 = FUN_80060ae8(*(undefined4 *)(param_2 + 0x8c));

  FUN_8006ac90(param_9,uVar1,param_5 + -100,iVar5,1);

  local_78 = (short)param_5 + -0x74;
  local_76 = (short)param_6 + -8;
  local_74 = 9;
  local_72 = 0x10;
  local_70 = FUN_80060d28(*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 4));

  FUN_8006bb08(param_1,&local_78,uVar4);

  FUN_8008cf34(auStack_68,&DAT_800f859e,(*(short *)(param_4 + 4) * 1000) / 0x3f6);
  iVar2 = FUN_8006b044(param_9,auStack_68,1,0);
  FUN_8006af40(param_9,auStack_68,param_5 - (iVar2 + -100),iVar5,1,0xfffffffd,0);

  FUN_8006adb4(param_9,(&PTR_DAT_arcade__8004fcb0)[*(char *)(param_4 + 2)],param_5 + 0x6e,iVar5,1);

  piVar3 = (int *)FUN_80081478(param_1,uVar4 | uVar4 << 8 | uVar4 << 0x10);
  *piVar3 = param_5 + -0x80 + (param_6 + -0xc) * 0x10000;
  piVar3[1] = 0x377dc000;
  piVar3[2] = 0x180100;

  FUN_8007da44(param_1,0xf);
  return;
}

bool FUN_arcade__8001f528
               (undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = *param_2;
  iVar4 = *(int *)(*(int *)(iVar3 + 0x2c) + 0x1c4);
  iVar2 = param_2[1];

  *(int *)(iVar4 + 0x10) = iVar2 + 4;
  FUN_8007da80(iVar4,&DAT_80123810);

  bVar1 = false;

  switch(param_1) {
  case 4:

    iVar5 = ((int)*(short *)(iVar3 + 0x24) << 7) / (int)*(short *)(iVar3 + 0x14);

    if (param_3 == *(short *)(iVar3 + 6)) {
      iVar5 = FUN_8006cf64(iVar3);
      iVar5 = -iVar5;
    }

    bVar1 = false;

    if ((iVar5 != 0) &&
       (bVar1 = false,
       ((uint)~(int)*(short *)(iVar3 + 0x26) >> 0x1f | (uint)(*(short *)(iVar3 + 0x26) < -1)) != 0)) {

      FUN_arcade__8001f238
                (iVar2 + 4,param_4,param_6,param_5,(int)*(short *)(param_2 + 3),
                 (int)*(short *)((int)param_2 + 0xe),(int)*(short *)(param_2 + 4),iVar5,iVar4,
                 *(char *)(param_2 + 5) != '\0');
      bVar1 = false;
    }
    break;

  case 8:
    bVar1 = true;
    if (DAT_800f05a0 != 0) {
      bVar1 = *(char *)(param_5 + 1) != '\0';
    }
    break;
  }
  return bVar1;
}

void FUN_arcade__8002018c(undefined4 *param_1)

{

  *(undefined *)(param_1 + 0x35) = 1;

  *(undefined2 *)(param_1 + 0x2b) = 0x5e;
  *(undefined2 *)((int)param_1 + 0xae) = 0x1500;
  param_1[0x2a] = 0xb0000;
  *(undefined2 *)(param_1 + 0x31) = 0xd2;
  *(undefined2 *)((int)param_1 + 0xc6) = 0x90;
  *(undefined2 *)(param_1 + 0x32) = 0xff97;
  *(undefined2 *)((int)param_1 + 0xca) = 0x69;
  *(undefined2 *)(param_1 + 0x33) = 0x43;
  *(undefined2 *)((int)param_1 + 0xce) = 0xffef;
  *(undefined2 *)(param_1 + 0x34) = 400;

  *(undefined *)((int)param_1 + 0xd5) = 0;
  param_1[0x36] = 0x404040;

  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;

  *(undefined2 *)((int)param_1 + 0xc2) = 0;
  *(undefined2 *)((int)param_1 + 0xd2) = 0x7fff;

  *param_1 = 0;
  return;
}

void FUN_arcade__80020224(int param_1,int param_2,int param_3,int param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;

  iVar12 = (int)*(short *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x14);
  sVar1 = *(short *)(param_1 + 10);
  uVar9 = *(undefined4 *)(iVar5 + 0x1c4);
  uVar8 = *(undefined4 *)(param_1 + 4);
  iVar11 = (int)*(short *)(param_1 + 8);
  sVar2 = *(short *)(param_1 + 0xc);

  bVar10 = param_2 < 0 || iVar12 == param_2;

  iVar6 = param_3 * 0x98;

  sVar3 = param_5[9];
  *(short *)((char *)&DAT_800f34e8 + iVar6) = param_5[8];
  *(short *)((char *)UNK_800f34ea + iVar6) = sVar3;
  FUN_arcade__8001adc4((short *)((char *)&DAT_800f34e8 + iVar6),uVar8,uVar9);

  sVar3 = param_5[9];
  *(short *)((char *)&DAT_800f3618 + iVar6) = param_5[8];
  *(short *)((char *)UNK_800f361a + iVar6) = sVar3;
  FUN_arcade__8001adc4((short *)((char *)&DAT_800f3618 + iVar6),uVar8,uVar9);

  puVar7 = &DAT_800f1be8 + param_3 * 0xc80;

  FUN_arcade__80019b80(puVar7,uVar8,iVar11 + *param_5,(int)param_5[1],uVar9,bVar10,0);
  FUN_arcade__80019b80(puVar7,uVar8,iVar11 + param_5[2],(int)param_5[3],uVar9,bVar10,2);
  FUN_arcade__80019b80(puVar7,uVar8,iVar11 + param_5[6],(int)param_5[7],uVar9,bVar10,3);

  if (-1 < param_2) {
    if ((param_4 < 6) && (3 < param_4)) {
      bVar10 = false;
      uVar9 = *(undefined4 *)(&DAT_801c33f8 + param_3 * 4);
    }
    else {

      uVar9 = FUN_arcade__8001d324(param_4,iVar12);
      iVar6 = FUN_8008cf00("bmmgn",uVar9);
      uVar9 = FUN_arcade__8001d324(param_4,iVar12);
      iVar4 = FUN_8008cf00("brmcn",uVar9);
      bVar10 = iVar4 == 0 || iVar6 == 0;

      if (iVar4 != 0 && iVar6 != 0) {
        iVar6 = FUN_arcade__8001d34c(param_4,iVar12);
        FUN_arcade__80011c48
                  (uVar8,&LAB_arcade__8004f7c2_2 + iVar6 * 0xc,iVar11,
                   ((int)sVar1 -
                   ((int)((uint)*(ushort *)(&LAB_arcade__8004f7c8_2 + iVar6 * 0xc) << 0x10) >> 0x12)
                   ) + -2,(int)sVar2,0x40);
      }

      uVar9 = FUN_arcade__8001d324(param_4,iVar12);
      uVar9 = FUN_80060924(uVar9);
    }

    FUN_arcade__80017158
              (iVar5 + param_3 * 0x2c + 0x23c,uVar8,uVar9,iVar11,(int)sVar1,(int)sVar2,bVar10,0x40);
  }
  return;
}

undefined4 FUN_arcade__80020da4(int param_1,int param_2,int param_3,undefined *param_4)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined auStack_50 [16];
  undefined4 local_40;
  undefined auStack_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;

  iVar17 = param_1 + param_3 * 0x10 + 0x1a4;
  local_38 = 1;
  iVar10 = param_1 + param_3 * 4;
  iVar8 = *(int *)(iVar10 + 0x228);
  local_30 = param_1 + param_3 * 0x2c + 0x23c;

  if ((param_4[3] & *(char *)(iVar8 + 0xf) != '\0') != 0) {

    if (((char)param_4[1] < '\x06') && ('\x03' < (char)param_4[1])) {

      puVar11 = auStack_50;
      FUN_arcade__80016a98(iVar8,puVar11);
      uVar6 = FUN_arcade__80016a2c(*(undefined4 *)(iVar10 + 0x228));
      iVar8 = 0;
      puVar9 = &DAT_arcade__80052190;
      uVar7 = *(undefined4 *)(param_1 + 0x1c4);
      uVar18 = 0xffffffff;
      local_40 = 0;
    }
    else {

      iVar8 = param_1 + param_3 * 4;
      puVar9 = (&PTR_DAT_arcade__80051bec_arcade__80052158)[(char)param_4[1]];
      puVar11 = (&PTR_DAT_arcade__80051c0c_arcade__80052174)[(char)param_4[1]];
      uVar18 = FUN_80060bec(*(undefined4 *)(*(int *)(iVar8 + 0x228) + 8),&local_40,auStack_3c);
      sVar2 = (&DAT_800f19e2)[param_3 * 0x16];
      uVar6 = FUN_arcade__80016a2c(*(undefined4 *)(iVar8 + 0x228));
      puVar9 = puVar9 + sVar2 * 3;
      uVar7 = *(undefined4 *)(param_1 + 0x1c4);
      puVar11 = puVar11 + sVar2 * 10;
      iVar8 = *(int *)(iVar8 + 0x228) + 0x3d4;
    }

    FUN_arcade__80019518
              (&DAT_800f1be8 + param_3 * 0xc80,uVar6,iVar8,puVar9,puVar11,uVar18,local_40,uVar7);
    param_4[3] = 0;
  }

  if (*(char *)(*(int *)(param_1 + param_3 * 4 + 0x228) + 0xe) != '\0') {

    FUN_arcade__8001e5d8
              (&DAT_800f1a30 + param_3 * 0xdc,param_1 + param_3 * 0x10 + 0x1a4,
               *(undefined4 *)(param_1 + 0x218));
  }

  FUN_arcade__80019a9c(&DAT_800f1be8 + param_3 * 0xc80);

  iVar15 = 0;
  iVar13 = 0;
  iVar12 = 0;
  iVar10 = 0;
  local_34 = 0;
  uVar14 = *(uint *)(iVar17 + 4);
  iVar8 = 0;

  if (param_2 == 0) {
    iVar17 = 0;
    uVar14 = 0;
  }

  iVar16 = iVar15;
  iVar4 = local_34;

  switch(*param_4) {
  case 0:
    iVar8 = iVar17;
    break;
  case 1:
    iVar16 = iVar17;
    if (((&DAT_801c33f0)[param_3] == 0) ||
       (iVar16 = iVar15, iVar4 = iVar17, (&DAT_801c33f0)[param_3] == 1)) break;
    goto LAB_arcade__800210dc;
  case 2:
  case 5:
    iVar10 = iVar17;
    break;
  case 3:
  case 6:
    iVar12 = iVar17;
    break;
  case 7:
    iVar13 = iVar17;
  }

  local_34 = iVar4;
  iVar15 = iVar16;

LAB_arcade__800210dc:

  iVar17 = FUN_arcade__8001b868(&DAT_arcade__8004ffb0 + param_3 * 0x20,iVar8);
  iVar10 = FUN_arcade__8001c88c(&DAT_800f19d8 + param_3 * 0x2c,iVar10);
  iVar12 = FUN_arcade__8001ac84(&DAT_800f34e8 + param_3 * 0x98,iVar12);
  iVar13 = FUN_arcade__8001ac84(&DAT_800f3618 + param_3 * 0x98,iVar13);
  iVar8 = FUN_8006cfc4(&DAT_arcade__80050094 + param_3 * 0x34,iVar15);
  iVar15 = FUN_8006cfc4(&DAT_arcade__800500c8 + param_3 * 0x34,local_34);
  switch(*param_4) {
  case 0:
    sVar2 = *(short *)(param_4 + 4);
    if ((0 < *(short *)(param_4 + 4)) && (*(short *)(param_4 + 4) = sVar2 + -1, sVar2 == 1)) {
      FUN_arcade__8001b760(&DAT_arcade__8004ffb0 + param_3 * 0x20);
    }
    switch(iVar17) {
    default:
      FUN_80060840(1);
      param_4[1] = (char)iVar17;
      uVar6 = FUN_arcade__8001d374(iVar17);
      FUN_arcade__8001b7f0(&DAT_arcade__8004ffb0 + param_3 * 0x20);
      iVar8 = param_3 * 0x2c;
      *(undefined4 *)(&DAT_800f1994 + iVar8) = *(undefined4 *)(&LAB_arcade__8004fc92_2 + iVar17 * 4)
      ;
      (&DAT_800f19a0)[param_3 * 0xb] = (&PTR_DAT_arcade__8004fccc)[iVar17];
      FUN_arcade__8001a0f4(&DAT_800f1980 + iVar8,0xffffffff);
      uVar3 = (&DAT_arcade__80051b74)[iVar17];
      *(undefined2 *)(&DAT_800f19e8 + iVar8) = 1;
      (&DAT_800f19e2)[param_3 * 0x16] = (short)uVar6;
      *(undefined2 *)(&DAT_800f19e4 + iVar8) = uVar3;
      *(undefined **)(&DAT_800f1a00 + iVar8) = (&PTR_DAT_arcade__80051bac_arcade__80052104)[iVar17];
      FUN_arcade__80016ea0(local_30);
      uVar18 = FUN_arcade__8001d2fc((int)(char)param_4[1],uVar6);
      uVar7 = FUN_arcade__8001d324((int)(char)param_4[1],uVar6);
      uVar7 = FUN_80060924(uVar7);
      FUN_arcade__80016ee8(local_30,uVar18,uVar7);
      uVar6 = FUN_arcade__8001d324((int)(char)param_4[1],uVar6);
      FUN_arcade__8001654c(*(undefined4 *)(param_1 + param_3 * 4 + 0x228),param_1,uVar6,0);
      FUN_arcade__8002018c(&DAT_800f1a30 + param_3 * 0xdc);
      *param_4 = 5;
      *(undefined2 *)(param_4 + 4) = 0xc;
      (&DAT_801c33f0)[param_3] = 0xffff;
      return local_38;
    case 4:
    case 5:
      FUN_80060840(1);
      param_4[1] = (char)iVar17;
      FUN_arcade__8001b7f0(&DAT_arcade__8004ffb0 + param_3 * 0x20);
      *(undefined2 *)(param_4 + 4) = 0x18;
      *param_4 = 1;
      (&DAT_801c33f0)[param_3] = (short)iVar17 + -4;
      return local_38;
    case -4:
      goto switchD_arcade__80021224_caseD_fffffffc;
    case -3:
switchD_arcade__80021224_caseD_fffffffd:
      FUN_80060840(6);
      return local_38;
    case -2:
      return local_38;
    case -1:
      FUN_arcade__8001b7f0(&DAT_arcade__8004ffb0 + param_3 * 0x20);
      return 0;
    }
  case 1:
    iVar10 = (int)(short)(&DAT_801c33f0)[param_3];
    sVar2 = *(short *)(param_4 + 4);
    if ((0 < *(short *)(param_4 + 4)) && (*(short *)(param_4 + 4) = sVar2 + -1, sVar2 == 1)) {
      FUN_8006ce70(&DAT_arcade__80050094 + iVar10 * 0x1a + param_3 * 0x34);
    }
    if (iVar10 != 0) {
      iVar8 = iVar15;
    }
    if (iVar8 == -3) goto switchD_arcade__80021224_caseD_fffffffd;
    if (iVar8 < -2) {
      if (iVar8 == -4) goto switchD_arcade__80021224_caseD_fffffffc;
LAB_arcade__8002152c:
      sVar2 = (&DAT_800f3748)[param_3 * 100 + iVar8];
      iVar17 = (int)sVar2;
      FUN_80060840(0);
      FUN_8006ced8(&DAT_arcade__80050094 + iVar10 * 0x1a + param_3 * 0x34);
      iVar8 = param_3 * 0x2c;
      cVar1 = UNK_800efdca[iVar17 * 10 + iVar10 * 0x3f0];
      *(undefined4 *)((char *)&DAT_800f1994 + iVar8) = *(undefined4 *)((char *)&LAB_arcade__8004fc92_2 + cVar1 * 4);
      ((undefined4 *)&DAT_800f19a0)[param_3 * 0xb] = ((void **)&PTR_DAT_arcade__8004fccc)[cVar1];
      FUN_arcade__8001a0f4(&DAT_800f1980 + iVar8,0xffffffff);
      *(undefined2 *)(&DAT_800f19e4 + iVar8) = 1;
      *(undefined2 *)(&DAT_800f19e8 + iVar8) = 1;
      (&DAT_800f19e2)[param_3 * 0x16] = 0;
      *(undefined4 *)(&DAT_800f1a00 + iVar8) = 0;
      iVar8 = iVar10 * 0x4028 + iVar17 * 0xa4;
      FUN_arcade__80016ee8(local_30,0xffffffff,*(undefined4 *)((char *)UNK_801cd558 + iVar8 + 0x8c));
      iVar12 = param_1 + param_3 * 4;
      FUN_arcade__80016368(*(undefined4 *)(iVar12 + 0x228),param_1,iVar10,iVar17);
      FUN_arcade__8002018c(&DAT_800f1a30 + param_3 * 0xdc);
      *param_4 = 2;
      *(undefined2 *)(param_4 + 4) = 0x14;
      (&DAT_801c33f4)[param_3] = sVar2;
      *(undefined4 *)((char *)&DAT_801c33f8 + param_3 * 4) = *(undefined4 *)((char *)UNK_801cd558 + iVar8 + 0x8c);
      *(short *)(&DAT_801c3402 + param_3 * 2) = (short)*(char *)(*(int *)(iVar12 + 0x228) + 0xd);
      return local_38;
    }
    if (iVar8 == -2) {
      return local_38;
    }
    if (iVar8 != -1) goto LAB_arcade__8002152c;
    FUN_80060840(2);
    FUN_8006ced8(&DAT_arcade__80050094 + iVar10 * 0x1a + param_3 * 0x34);
    goto LAB_arcade__80021cd0;
  case 2:
    sVar2 = *(short *)(param_4 + 4);
    if ((0 < *(short *)(param_4 + 4)) && (*(short *)(param_4 + 4) = sVar2 + -1, sVar2 == 1)) {
      FUN_arcade__8001c83c(&DAT_800f19d8 + param_3 * 0x2c);
      FUN_arcade__8001934c(&DAT_800f1be8 + param_3 * 0xc80);
      param_4[3] = 1;
    }
    if (iVar10 == -2) {
      return local_38;
    }
    if (iVar10 < -1) {
      if (iVar10 == -3) {
        FUN_80060840(7);
        return local_38;
      }
    }
    else if (iVar10 == -1) {
      FUN_80060840(2);
      FUN_arcade__8001a18c(&DAT_800f1980 + param_3 * 0x2c);
      FUN_arcade__8001c880(&DAT_800f19d8 + param_3 * 0x2c);
      FUN_arcade__80019210(&DAT_800f1be8 + param_3 * 0xc80);
      FUN_arcade__800165e8(*(undefined4 *)(param_1 + param_3 * 4 + 0x228),param_1);
      *param_4 = 1;
      *(undefined2 *)(param_4 + 4) = 0xc;
      return local_38;
    }
    FUN_80060840(1);
    FUN_arcade__8001aab4
              (&DAT_800f34e8 + param_3 * 0x98,
               (&PTR_PTR_DAT_arcade__8004fd74_arcade__8005006c)[param_3]);
    FUN_arcade__8001abf4(&DAT_800f34e8 + param_3 * 0x98);
    param_4[3] = 0;
    FUN_arcade__80019210(&DAT_800f1be8 + param_3 * 0xc80);
    uVar5 = 3;
    break;
  case 3:
    if (iVar12 == -2) {
      return local_38;
    }
    if (iVar12 < -1) {
      if (iVar12 == -3) {
LAB_arcade__80021de8:
        FUN_80060840(5);
        return local_38;
      }
    }
    else if (iVar12 == -1) {
      FUN_80060840(2);
      FUN_arcade__8001934c(&DAT_800f1be8 + param_3 * 0xc80);
      param_4[3] = 1;
      FUN_arcade__8001ac5c(&DAT_800f34e8 + param_3 * 0x98);
      uVar5 = 2;
LAB_arcade__80021e5c:
      *param_4 = uVar5;
      *(undefined2 *)(param_4 + 4) = 0;
      return local_38;
    }
    if (*(char *)(*(int *)(param_1 + param_3 * 4 + 0x228) + 0xe) == '\0')
    goto switchD_arcade__80021224_caseD_fffffffc;
    FUN_80060840(1);
    FUN_arcade__8001ac5c((short *)((char *)&DAT_800f34e8 + param_3 * 0x98));
    ((code **)&DAT_801c3406)[param_3] = ((code **)&LAB_arcade__8004fda4)[iVar12];
    uVar5 = 4;
    break;
  case 4:
    if ((uVar14 & 0x500) == 0) {
      return local_38;
    }
    FUN_80060840(2);
    FUN_arcade__8001abf4(&DAT_800f34e8 + param_3 * 0x98);
    uVar5 = 3;
    break;
  case 5:
    sVar2 = *(short *)(param_4 + 4);
    if (*(short *)(param_4 + 4) < 1) {
LAB_arcade__80021a84:
      if (*(short *)(param_4 + 4) == 0) {
        iVar8 = param_1 + param_3 * 0x10 + 0x1a4;
        uVar14 = *(uint *)(iVar8 + 4) | *(uint *)(iVar8 + 0xc);
        if (param_2 == 0) {
          uVar14 = 0;
        }
        if ((uVar14 & 1) != 0) {
          FUN_arcade__80015eb8(*(undefined4 *)(param_1 + param_3 * 4 + 0x228),0xffffffff);
        }
        if ((uVar14 & 2) != 0) {
          FUN_arcade__80015eb8(*(undefined4 *)(param_1 + param_3 * 4 + 0x228),1);
        }
        if ((uVar14 & 3) != 0) {
          FUN_80060840(5);
        }
        FUN_arcade__8001930c
                  (&DAT_800f1be8 + param_3 * 0xc80,
                   (int)*(char *)(*(int *)(param_1 + param_3 * 4 + 0x228) + 0xd));
      }
    }
    else {
      *(short *)(param_4 + 4) = sVar2 + -1;
      if (sVar2 == 1) {
        FUN_arcade__8001c83c(&DAT_800f19d8 + param_3 * 0x2c);
        FUN_arcade__8001934c(&DAT_800f1be8 + param_3 * 0xc80);
        param_4[3] = 1;
        goto LAB_arcade__80021a84;
      }
    }
    sVar2 = (&DAT_800f19e2)[param_3 * 0x16];
    iVar8 = (int)sVar2;
    if (iVar10 == -2) {
      return local_38;
    }
    if (iVar10 < -1) {
      if (iVar10 == -3) {
        FUN_80060840(7);
        param_4[2] = (char)sVar2;
        uVar6 = FUN_arcade__8001d2fc((int)(char)param_4[1],iVar8);
        uVar18 = FUN_arcade__8001d324((int)(char)param_4[1],iVar8);
        uVar18 = FUN_80060924(uVar18);
        FUN_arcade__80016ee8(local_30,uVar6,uVar18);
        uVar6 = FUN_arcade__8001d324((int)(char)param_4[1],iVar8);
        FUN_arcade__8001654c(*(undefined4 *)(param_1 + param_3 * 4 + 0x228),param_1,uVar6,iVar8);
        FUN_arcade__8002018c(&DAT_800f1a30 + param_3 * 0xdc);
        FUN_arcade__8001934c(&DAT_800f1be8 + param_3 * 0xc80);
        param_4[3] = 1;
        return local_38;
      }
    }
    else if (iVar10 == -1) {
      FUN_80060840(2);
      FUN_arcade__8001a18c(&DAT_800f1980 + param_3 * 0x2c);
      FUN_arcade__8001c880(&DAT_800f19d8 + param_3 * 0x2c);
      FUN_arcade__80019210(&DAT_800f1be8 + param_3 * 0xc80);
      FUN_arcade__800165e8(*(undefined4 *)(param_1 + param_3 * 4 + 0x228),param_1);
LAB_arcade__80021cd0:
      *param_4 = 0;
      *(undefined2 *)(param_4 + 4) = 0xc;
      return local_38;
    }
    FUN_80060840(1);
    FUN_arcade__8001aab4
              (&DAT_800f34e8 + param_3 * 0x98,
               (&PTR_PTR_DAT_arcade__8004fd74_arcade__8005006c)[param_3]);
    FUN_arcade__8001abf4(&DAT_800f34e8 + param_3 * 0x98);
    param_4[3] = 0;
    FUN_arcade__80019210(&DAT_800f1be8 + param_3 * 0xc80);
    uVar6 = FUN_arcade__8001d324((int)(char)param_4[1],iVar8);
    uVar6 = FUN_80060924(uVar6);
    *(undefined4 *)(&DAT_801c33f8 + param_3 * 4) = uVar6;
    *(short *)(&DAT_801c3402 + param_3 * 2) =
         (short)*(char *)(*(int *)(param_1 + param_3 * 4 + 0x228) + 0xd);
    uVar5 = 6;
    break;
  case 6:
    if (iVar12 == -2) {
      return local_38;
    }
    if (iVar12 < -1) {
      if (iVar12 == -3) goto LAB_arcade__80021de8;
    }
    else if (iVar12 == -1) {
      FUN_80060840(2);
      FUN_arcade__8001934c(&DAT_800f1be8 + param_3 * 0xc80);
      param_4[3] = 1;
      FUN_arcade__8001ac5c(&DAT_800f34e8 + param_3 * 0x98);
      uVar5 = 5;
      goto LAB_arcade__80021e5c;
    }
    FUN_80060840(1);
    FUN_arcade__8001ac5c(&DAT_800f34e8 + param_3 * 0x98);
    FUN_arcade__8001aab4
              ((short *)((char *)&DAT_800f3618 + param_3 * 0x98),
               ((void **)&PTR_PTR_DAT_arcade__8004fd8c_arcade__8005008c)[param_3]);
    FUN_arcade__8001abf4((short *)((char *)&DAT_800f3618 + param_3 * 0x98));
    ((code **)&DAT_801c3406)[param_3] = ((code **)&LAB_arcade__8004fda4)[iVar12];
    goto LAB_arcade__80022034;
  case 7:
    if (iVar13 == -2) {
      return local_38;
    }
    if (iVar13 < -1) {
      if (iVar13 == -3) goto switchD_arcade__80021224_caseD_fffffffd;
    }
    else if (iVar13 == -1) {
      FUN_80060840(2);
      FUN_arcade__8001abf4(&DAT_800f34e8 + param_3 * 0x98);
      FUN_arcade__8001ac5c(&DAT_800f3618 + param_3 * 0x98);
      uVar5 = 6;
      break;
    }
    if (*(char *)(*(int *)(param_1 + param_3 * 4 + 0x228) + 0xe) == '\0') {
switchD_arcade__80021224_caseD_fffffffc:
      FUN_80060840(0);
      return local_38;
    }
    FUN_80060840(1);
    FUN_arcade__8001ac5c(&DAT_800f3618 + param_3 * 0x98);
    ((code **)&DAT_801c3400)[param_3] = ((code **)&LAB_arcade__8004fda4)[iVar13];
    uVar5 = 8;
    break;
  case 8:
    if ((uVar14 & 0x500) == 0) {
      return local_38;
    }
    FUN_80060840(2);
    FUN_arcade__8001abf4(&DAT_800f3618 + param_3 * 0x98);
LAB_arcade__80022034:
    uVar5 = 7;
    break;
  default:
    goto switchD_arcade__800211bc_caseD_9;
  }
  *param_4 = uVar5;
switchD_arcade__800211bc_caseD_9:
  return local_38;
}

void FUN_arcade__80022074(int param_1,undefined *param_2)

{
  undefined *puVar1;

  switch(*param_2) {
  case 0:
    if (*(short *)(param_2 + 4) == 0) {
      FUN_arcade__8001b7f0(&DAT_arcade__8004ffb0 + param_1 * 0x20);
    }
    break;

  case 1:
    if (*(short *)(param_2 + 4) == 0) {
      FUN_8006ced8(&DAT_arcade__80050094 + (short)(&DAT_801c33f0)[param_1] * 0x1a + param_1 * 0x34);
    }
    break;

  case 2:
  case 5:
    FUN_arcade__8001a18c(&DAT_800f1980 + param_1 * 0x2c);
    if (*(short *)(param_2 + 4) == 0) {
      FUN_arcade__8001c880(&DAT_800f19d8 + param_1 * 0x2c);
      FUN_arcade__80019210(&DAT_800f1be8 + param_1 * 0xc80);
    }
    break;

  case 3:
  case 6:
    FUN_arcade__8001a18c(&DAT_800f1980 + param_1 * 0x2c);
    FUN_arcade__8001c880(&DAT_800f19d8 + param_1 * 0x2c);
    puVar1 = &DAT_800f34e8;
    goto LAB_arcade__80022258;

  case 4:
  case 8:
    FUN_arcade__8001a18c(&DAT_800f1980 + param_1 * 0x2c);
    FUN_arcade__8001c880(&DAT_800f19d8 + param_1 * 0x2c);
    break;

  case 7:
    FUN_arcade__8001a18c(&DAT_800f1980 + param_1 * 0x2c);
    FUN_arcade__8001c880(&DAT_800f19d8 + param_1 * 0x2c);
    puVar1 = &DAT_800f3618;

LAB_arcade__80022258:
    FUN_arcade__8001ac5c(puVar1 + param_1 * 0x98);
    break;

  default:
    return;
  }
  return;
}

void FUN_arcade__800228c0(undefined2 param_1)

{
  DAT_800f3976 = param_1;
  DAT_800f3974 = 0xc;
  return;
}

void FUN_arcade__800228d8(undefined4 *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined **in_t0;
  undefined **in_t1;

  switch(DAT_800f3954) {
  case 0:
    *param_3 = (int)DAT_800f3956;
    iVar1 = (int)DAT_800f3958;
    in_t0 = &PTR_s_tahiti_t_rev_arcade__800502f0_arcade__80050bc4;
    in_t1 = &PTR_s_tahiti_t_arcade__8005021c_arcade__80050904;
    break;

  case 1:
    *param_3 = (int)DAT_800f395a;
    iVar1 = (int)DAT_800f395c;
    in_t0 = &PTR_s_tahiti_t_rev_arcade__800502f0_arcade__80051184;
    in_t1 = &PTR_s_tahiti_t_arcade__8005021c_arcade__80050e84;
    break;

  case 2:
    *param_3 = (int)DAT_800f395e;
    iVar1 = (int)DAT_800f395e;
    in_t0 = &PTR_s_tahiti_d_new_arcade__800503c4_arcade__80051484;
    in_t1 = in_t0;
    break;

  case 3:
    *param_3 = (int)DAT_800f3960;
    iVar1 = (int)DAT_800f3960;
    in_t0 = &PTR_s_tahiti_t_2p_arcade__80050470_arcade__800515c4;
    in_t1 = in_t0;
    break;

  case 4:
    in_t0 = &PTR_s_tahiti_d_new_2p_arcade__80050540_arcade__80051884;
    *param_3 = (int)DAT_800f3962;
    iVar1 = (int)DAT_800f3962;
    in_t1 = in_t0;
    break;

  default:
    goto switchD_arcade__80022908_caseD_5;
  }

  *param_4 = iVar1;
switchD_arcade__80022908_caseD_5:
  *param_1 = in_t1;
  *param_2 = in_t0;
  return;
}

int FUN_arcade__800229cc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;

  iVar1 = param_1;
  if (param_3 != 0) {
    iVar1 = param_2;
  }

  iVar1 = iVar1 + param_4 * 0x20;

  if (*(char *)(iVar1 + 0x1c) == '\0') {
    iVar1 = param_1 + param_4 * 0x20;
  }
  return iVar1;
}

void FUN_arcade__80022bf4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_80060eb4();

  FUN_arcade__80017614(&DAT_800f3910,&DAT_801c9af8 + iVar1 * 9);

  FUN_arcade__800173e0(&DAT_800f3908,param_2);
  return;
}

undefined4 FUN_arcade__80023590(void)

{
  return 0;
}

undefined4 FUN_arcade__80023598(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 1;
  if (param_1 < 0) {
    return 1;
  }

  puVar1 = &DAT_801cacf8 + param_1 * 0x668;

  for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (puVar1[1] == '\0') {
      uVar3 = 0;
    }
    puVar1 = puVar1 + 0xa4;
  }
  return uVar3;
}

undefined4 FUN_arcade__80023610(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;

  ppuVar2 = &PTR_s_Tahiti_Road_arcade__800505f8_arcade__80051964;

  do {
    while( true ) {
      if (*ppuVar2 == (undefined *)0x0) {
        return 1;
      }
      ppuVar1 = ppuVar2 + 3;
      if (-1 < (int)*ppuVar1) break;
      ppuVar2 = ppuVar2 + 4;
    }
    ppuVar2 = ppuVar2 + 4;
  } while (((byte)(&DAT_801c9998)[(int)*ppuVar1] >> 2 & 1 |
           (byte)(&DAT_801c9998)[(int)*ppuVar1] >> 1 & 1) != 0);
  return 0;
}

bool FUN_arcade__80023680(void)

{
  return DAT_801c9af5 != '\0';
}

void FUN_arcade__80023690
               (undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
               uint param_6)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];

  iVar7 = -1;
  cVar1 = *(char *)(param_1 + 1);
  iVar6 = *(int *)(param_2 + 0x1c4);
  iVar8 = param_1[3];

  FUN_8007da80(iVar6,&DAT_80123810);
  *(undefined4 *)(iVar6 + 0x10) = param_3;
  *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xff9fffff | 0x200000;

  uVar3 = FUN_8006b548(&LAB_arcade__800526b6_2,&LAB_arcade__800526be_2,param_6,0x80);
  *(undefined4 *)(iVar6 + 0x14) = uVar3;

  FUN_8006ac90(iVar6,*param_1,param_4 + -0x48,param_5 + 8,1);

  local_30[0] = 0xa9000;
  if (-1 < (int)param_1[2]) {
    local_30[0] = *(undefined4 *)(&DAT_arcade__800526dc + param_1[2] * 4);
  }

  local_40 = (short)param_4 + -0x9a;
  local_3e = (short)param_5 + -0xc;
  local_3c = 0x1a;
  local_3a = 0x18;

  local_38 = FUN_8006b548(&LAB_arcade__800526b6_2,local_30,param_6,0x200);
  local_34 = FUN_8006b548(&LAB_arcade__800526b6_2,local_30,param_6,0x80);

  FUN_8006b77c(param_3,&local_40);
  FUN_8007da44(param_3,0x220);

  if (-1 < iVar8 && *(char *)((int)param_1 + 6) != '\0') {

    local_30[0] = FUN_8006b548(&LAB_arcade__800526ba_2,&LAB_arcade__800526d2_2,param_6,0x80);
    if (((byte)(&DAT_801c9998)[iVar8] >> 1 & 1 | (byte)(&DAT_801c9998)[iVar8] >> 2 & 1) != 0) {
      local_30[0] = FUN_8006b548(&LAB_arcade__800526ba_2,&LAB_arcade__800526d6_2,param_6,0x80);
    }

    piVar4 = (int *)FUN_80081478(param_3,local_30[0]);
    *piVar4 = param_4 + 0x7e + (param_5 + -10) * 0x10000;
    piVar4[1] = 0x7df620d4;
    piVar4[2] = 0x140024;
    FUN_8007da44(param_3,0x1c);
  }
  if (iVar8 < 0) {
    piVar4 = (int *)0x80052640;
    if (cVar1 != '\0') {
      piVar4 = (int *)FUN_80081478(param_3,param_6 | param_6 << 8 | param_6 << 0x10);
      *piVar4 = param_4 + -99 + (param_5 + -8) * 0x10000;
      piVar4[1] = 0x7df510d4;
      piVar4[2] = 0x10000c;
      FUN_8007da44(param_3,0x1c);
      piVar4 = (int *)0x8005264c;
    }
  }
  else {
    bVar2 = (&DAT_801c9998)[iVar8];
    if ((bVar2 >> 2 & 1) == 0) {
      if ((bVar2 >> 1 & 1) == 0) {
        if ((bVar2 & 1) != 0) {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = 1;
      }
    }
    else {
      iVar7 = 2;
    }
    if (-1 < iVar7) {
      iVar6 = iVar7 * 0xc;
      piVar4 = (int *)FUN_80081478(param_3,param_6 | param_6 << 8 | param_6 << 0x10);
      *piVar4 = (param_4 - (((int)((uint)*(ushort *)(iVar6 + -0x7ffad980) << 0x10) >> 0x11) + 0x6c))
                + (param_5 -
                  ((int)((uint)*(ushort *)((char *)UNK_arcade__80052682 + iVar6) << 0x10) >> 0x11)) *
                  0x10000;
      piVar4[1] = *(int *)((char *)UNK_arcade__8005267c + iVar6);
      piVar4[2] = *(int *)(iVar6 + -0x7ffad980);
      FUN_8007da44(param_3,*(undefined2 *)((char *)UNK_arcade__80052684 + iVar6));
    }
    piVar4 = (int *)0x80052628;
    if (cVar1 != '\0') {
      if (iVar7 == 2) {
        piVar4 = (int *)FUN_80081478(param_3,param_6 | param_6 << 8 | param_6 << 0x10);
        *piVar4 = param_4 + -99 + (param_5 + -8) * 0x10000;
        piVar4[1] = 0x7df510d4;
        piVar4[2] = 0x10000c;
        FUN_8007da44(param_3,0x1c);
      }
      piVar4 = &DAT_arcade__80052634;
    }
  }
  local_30[0] = FUN_8006b548(&LAB_arcade__800526ba_2,&LAB_arcade__800526c6_2,param_6,0x80);
  if (*(char *)((int)param_1 + 5) != '\0') {
    local_30[0] = FUN_8006b548(&LAB_arcade__800526ba_2,&LAB_arcade__800526ca_2,param_6,0x80);
  }
  piVar5 = (int *)FUN_80081478(param_3,local_30[0]);
  *piVar5 = (param_4 - ((int)((uint)*(ushort *)(piVar4 + 1) << 0x10) >> 0x11)) +
            (param_5 - ((int)((uint)*(ushort *)((int)piVar4 + 6) << 0x10) >> 0x11)) * 0x10000;
  piVar5[1] = *piVar4;
  piVar5[2] = piVar4[1];
  FUN_8007da44(param_3,*(undefined2 *)(piVar4 + 2));
  FUN_8007da44(param_3,0x20);
  return;
}

void FUN_arcade__8002445c(void)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(DAT_800f39e8 + 8);

  if (DAT_801c98e0 == '\0') {
    FUN_8007f174(uVar1);
    FUN_8006ecd8(uVar1,&DAT_801efb39);
    FUN_8006ecd8(uVar1,&DAT_801efb4a);
  }
  return;
}

void FUN_arcade__800244c4(undefined4 param_1)

{

  if (DAT_801c98e0 == '\0') {
    FUN_8006ecd8(*(undefined4 *)(DAT_800f39e8 + 8),param_1);
  }
  return;
}

void FUN_arcade__80024504
               (undefined4 param_1,char *param_2,int param_3,short param_4,int param_5,uint param_6)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;

  uVar5 = *(undefined4 *)(DAT_800f39e8 + 8);
  iVar4 = 0;

  if (DAT_801c98e0 == '\0') {

    if (param_5 != 0) {
      cVar1 = *param_2;
      pcVar3 = param_2;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 2;
        iVar4 = iVar4 + 0xc;
        cVar1 = *pcVar3;
      }
      param_3 = param_3 - (iVar4 >> 1);
    }

    for (; *param_2 != '\0'; param_2 = param_2 + 2) {

      iVar4 = FUN_8007f18c(uVar5,CONCAT11(*param_2,param_2[1]));
      if (iVar4 != 0) {

        iVar4 = FUN_8007f01c(iVar4,param_1,param_6 | 0x2000000);
        sVar2 = (short)param_3;

        *(short *)(iVar4 + 4) = sVar2;
        *(short *)(iVar4 + 6) = param_4;
        *(short *)(iVar4 + 0xc) = sVar2 + 0xf;
        *(short *)(iVar4 + 0xe) = param_4;
        *(short *)(iVar4 + 0x14) = sVar2;
        *(short *)(iVar4 + 0x16) = param_4 + 0x1f;
        *(short *)(iVar4 + 0x1c) = sVar2 + 0xf;
        *(short *)(iVar4 + 0x1e) = param_4 + 0x1f;

        *(ushort *)(iVar4 + 0x12) = *(ushort *)(iVar4 + 0x12) & 0xff9f | 0x20;
      }
      param_3 = param_3 + 0xc;
    }
  }
  return;
}

void FUN_arcade__80024640(void)

{
  int iVar1;

  iVar1 = DAT_800f39e8;

  if (DAT_801c98e0 == '\0') {
    FUN_arcade__8002445c();
    FUN_arcade__800244c4(*(undefined4 *)(iVar1 + 0x28));
    FUN_arcade__800244c4(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}

void FUN_arcade__80024690(void)

{
  int iVar1;

  iVar1 = DAT_800f39e8;

  if (DAT_801c98e0 == '\0') {
    FUN_arcade__8002445c();
    FUN_arcade__800244c4(*(undefined4 *)(iVar1 + 0x24));
  }
  return;
}

undefined4 FUN_arcade__80024fe0(void)

{
  return 0xffffffff;
}

void FUN_arcade__80024fe8(int param_1)

{
  undefined2 *puVar1;
  code *pcVar2;

  puVar1 = DAT_800f39e8;

  if (param_1 < 0) {
    pcVar2 = FUN_arcade__80024fe0;
  }
  else {
    pcVar2 = (code *)(&PTR_LAB_arcade__80024a40_arcade__800529e4)[param_1];
  }

  *(code **)(DAT_800f39e8 + 2) = pcVar2;
  *puVar1 = (short)param_1;
  (**(code **)(puVar1 + 2))();
  return;
}

void FUN_arcade__8002504c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  iVar1 = DAT_800f39e8;
  iVar6 = DAT_800f39e8 + 0x50;

  *(undefined4 *)(DAT_800f39e8 + 0x34) = 0x10009c;
  *(undefined4 *)(iVar1 + 0x38) = 0xe;
  *(undefined4 *)(iVar1 + 0x3c) = 0x2783618;
  *(undefined4 *)(iVar1 + 0x40) = 0x2000000;
  *(undefined4 *)(iVar1 + 0x44) = 0x2dedede;
  *(undefined4 *)(iVar1 + 0x48) = 0x2000000;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined2 *)(iVar1 + 0x4c) = 0xffff;

  FUN_8006e1cc(iVar6,&LAB_arcade__800528b4,0);
  FUN_8006e1cc(iVar1 + 0xe8,&LAB_arcade__800528e4,0);
  *(undefined *)(iVar1 + 0x165) = 1;
  FUN_8006e1cc(iVar1 + 0x180,&LAB_arcade__80052914,0);
  FUN_8006e1cc(iVar1 + 0x218,&LAB_arcade__80052944,0);

  puVar2 = &DAT_arcade__800529a4;
  puVar3 = (undefined4 *)(iVar1 + 0x348);
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar7 = puVar4[1];
    uVar8 = puVar4[2];
    uVar9 = puVar4[3];
    *puVar5 = *puVar4;
    puVar5[1] = uVar7;
    puVar5[2] = uVar8;
    puVar5[3] = uVar9;
    puVar2 = puVar4 + 4;
    puVar3 = puVar5 + 4;
  } while (puVar4 + 4 != (undefined4 *)0x800529d4);

  uVar7 = puVar4[5];
  puVar5[4] = 0;
  puVar5[5] = uVar7;

  FUN_8006e1cc(iVar1 + 0x2b0,&LAB_arcade__80052974,0);

  *(undefined **)(iVar1 + 0x28) = &LAB_arcade__8002746c;
  *(undefined **)(iVar1 + 0x2c) = &LAB_arcade__8002746c;

  FUN_arcade__80024640();
  return;
}

int FUN_arcade__80025194(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  DAT_800f39e8 = *param_1;

  puVar2 = (undefined4 *)param_1[3];
  DAT_800f3a10 = *puVar2;
  DAT_800f3a14 = puVar2[1];
  DAT_800f3a18 = puVar2[2];

  puVar2 = (undefined4 *)param_1[4];
  DAT_800f39f0 = *puVar2;
  DAT_800f39f4 = puVar2[1];
  DAT_800f39f8 = puVar2[2];

  puVar2 = (undefined4 *)param_1[5];
  DAT_800f3a00 = *puVar2;
  DAT_800f3a04 = puVar2[1];
  DAT_800f3a08 = puVar2[2];

  *(int *)(DAT_800f39e8 + 8) = param_1[1];
  *(int *)(DAT_800f39e8 + 0xc) = param_1[2];

  iVar1 = DAT_800f39e8 + 0x8384;
  *(undefined2 *)(DAT_800f39e8 + 0x30) = *(undefined2 *)(param_1 + 6);
  return iVar1;
}

void FUN_arcade__80025238(void)

{

  *(int *)(DAT_800f39e8 + 0x380) = DAT_800f39e8 + 900;

  FUN_8006a038();
  FUN_arcade__8002504c();
  FUN_arcade__80024fe8(0);
  return;
}

undefined4 FUN_arcade__80025274(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;

  iVar1 = DAT_800f39e8;

  FUN_8006be64(DAT_800f39e8 + 0x34);

  uVar2 = FUN_8006e43c(iVar1 + 0x50,param_1);
  *(undefined2 *)(iVar1 + 0xe4) = uVar2;
  uVar2 = FUN_8006e43c(iVar1 + 0xe8,param_1);
  *(undefined2 *)(iVar1 + 0x17c) = uVar2;
  uVar2 = FUN_8006e43c(iVar1 + 0x180,param_1);
  *(undefined2 *)(iVar1 + 0x214) = uVar2;
  uVar2 = FUN_8006e43c(iVar1 + 0x218,param_1);
  *(undefined2 *)(iVar1 + 0x2ac) = uVar2;
  uVar2 = FUN_8006e43c(iVar1 + 0x2b0,param_1);
  *(undefined2 *)(iVar1 + 0x344) = uVar2;

  (**(code **)(iVar1 + 4))();
  // Note: Function pointer call returns void, but original code may have used return value
  iVar3 = 0;

  do {
    if (iVar3 == 10) {

      if (-1 < *(short *)(iVar1 + 0x4c)) {
        *(ushort *)(iVar1 + 0x4c) = ~*(ushort *)(iVar1 + 0x38);
      }

      *(undefined **)(iVar1 + 0x28) = &LAB_arcade__8002746c;
      *(undefined **)(iVar1 + 0x2c) = &LAB_arcade__8002746c;
      FUN_arcade__80024640();
      FUN_arcade__80024fe8(0xffffffff);
      return 1;
    }
    if (iVar3 < 0xb) {
      if (iVar3 == -1) {
        return 0;
      }
      if (iVar3 == 8) {
        FUN_arcade__80024fe8(8);
        return 3;
      }
    }

    FUN_arcade__80024fe8(0);
    iVar3 = 0;
  } while( true );
}

void FUN_arcade__800253ac(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined auStack_40 [12];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_24;
  undefined4 local_20;
  undefined4 local_1c;

  iVar1 = DAT_800f39e8;

  local_20 = 0x2000000;
  local_1c = 0x242362a;

  FUN_8006ac68(auStack_40,(int)*(short *)(DAT_800f39e8 + 0x30));
  FUN_8007da80(auStack_40,&DAT_800f3a00);
  local_24 = 1;
  local_2c = 0x25c5248;
  local_34 = local_34 & 0xff9fffff | 0x200000;
  local_30 = param_1;

  if (DAT_801c98e0 == '\0') {

    FUN_arcade__80024504(param_1,*(undefined4 *)(iVar1 + 0x28),0xb0,0xc6,1,0x606060);
    FUN_arcade__80024504(param_1,*(undefined4 *)(iVar1 + 0x2c),0xb0,0xea,1,0x606060);
  }
  else {

    FUN_8006adb4(auStack_40,*(undefined4 *)(iVar1 + 0x28),0xb0,0xd6,1);
    FUN_8006adb4(auStack_40,*(undefined4 *)(iVar1 + 0x2c),0xb0,0xfa,1);
  }

  uVar2 = FUN_8006beb4(iVar1 + 0x34);
  if (uVar2 != 0) {
    if (DAT_801c98e0 == '\0') {

      FUN_arcade__80024504
                (param_1,(&PTR_DAT_arcade__800529dc)[*(short *)(iVar1 + 0x10)],0x1c,0x66,0,
                 uVar2 | uVar2 << 8 | uVar2 << 0x10);
    }
    else {

      local_2c = FUN_8006b548(&local_20,&local_1c,uVar2,0x80);
      FUN_8006ac90(auStack_40,(&PTR_DAT_arcade__800529dc)[*(short *)(iVar1 + 0x10)],0x1c,0x7e,1);
    }

    FUN_8006bef4(iVar1 + 0x34,param_1,0x18,0x6e);
    FUN_8007da44(param_1,0x220);
  }

  FUN_8006e5b8(iVar1 + 0x50,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0xe8,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x180,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x218,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x2b0,param_1,auStack_40);

  (**(code **)(iVar1 + 4))();
  return;
}

void FUN_arcade__80025614(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_8008ce30(param_1,0,700);
  FUN_80078790(param_1,param_2,param_3);
  return;
}

void FUN_arcade__80025688(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_800787cc(param_1,param_2,0,1);
  param_1[0xad] = *param_1 + (iVar1 + 3U & 0xfffffffc);
  return;
}

void FUN_arcade__800256cc(int param_1,undefined4 param_2)

{
  FUN_8005d8a0(param_2,*(undefined4 *)(param_1 + 0x2b4));
  FUN_8007a1c4(*(undefined4 *)(param_1 + 0x2b4));
  return;
}

void FUN_arcade__80025708(undefined4 *param_1,int param_2)

{
  FUN_arcade__800257ac(0);
  FUN_8007a260(((uint)DAT_801c9993 * 0x4000) / 0xff);
  FUN_8007a300(param_1 + 3,param_1[0xad] + param_2 * 0x48 + 0xc,*param_1);
  FUN_8007a4a4(param_1 + 3);
  *(undefined *)(param_1 + 0xae) = 1;
  return;
}

void FUN_arcade__800257ac(int param_1)

{
  if (*(char *)(param_1 + 0x2b8) != '\0') {
    FUN_8007a4d8(param_1 + 0xc);
  }
  *(undefined *)(param_1 + 0x2b8) = 0;
  return;
}

void FUN_arcade__800257e8(void)

{
  undefined4 uVar1;

  uVar1 = DAT_80092e74;
  FUN_arcade__80025614(&DAT_800f3a20,&DAT_800f3ce0,0x4800);
  FUN_arcade__80025688(&DAT_800f3a20,0xeb);
  FUN_arcade__800256cc(&DAT_800f3a20,0xea);
  FUN_80078950(uVar1);
  return;
}

void FUN_arcade__80025850(void)

{
  FUN_arcade__80025708(&DAT_800f3a20,0);
  return;
}

void FUN_arcade__80025878(void)

{
  FUN_arcade__800257ac(&DAT_800f3a20);
  return;
}

void FUN_arcade__8002589c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;

  DAT_800a8d64 = param_1;
  param_1[1] = 0;
  FUN_arcade__80025eac(param_1 + 2);
  FUN_arcade__800261ec(param_1 + 9,param_2);
  uVar1 = DAT_801f068c;
  DAT_801f068c = &LAB_arcade__80025e48;
  *param_1 = uVar1;
  return;
}

void FUN_arcade__80025904(undefined4 *param_1)

{
  DAT_801f068c = *param_1;
  return;
}

void FUN_arcade__80025914(int param_1,undefined2 param_2,undefined4 param_3)

{
  *(undefined2 *)(param_1 + 0x12) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

void FUN_arcade__80025924(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}

void FUN_arcade__80025930(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  return;
}

void FUN_arcade__80025940(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 * 4 + -0x7ff6dc70);
  FUN_arcade__80025994
            (param_1,iVar1 + DAT_801c93cc,
             (*(int *)((param_2 + 1) * 4 + -0x7ff6dc70) - iVar1) + -0x19);
  return;
}

void FUN_arcade__80025994(undefined4 param_1,int param_2,int param_3)

{
  FUN_80081c5c();
  DAT_801f0531 = 0xc0;
  DAT_801f0528 = 0x8000;
  DAT_801f0530 = 0;
  DAT_801f0534 = param_2;
  DAT_801f0538 = param_2 + param_3 + -1;
  DAT_801f0532 = 1;
  DAT_801f0533 = 7;
  DAT_801f053c = &LAB_arcade__80025cbc;
  return;
}

void FUN_arcade__80025a10(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  DecDCTReset(1);
  DecDCToutCallback(FUN_arcade__80025d38);
  FUN_arcade__80025ed0(param_1 + 8);
  return;
}

undefined4 FUN_arcade__80025a50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = FUN_80081cf8(0);
  uVar2 = 1;
  if (*(short *)(param_1 + 0x10) == 0) {
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      if (DAT_801f0676 == '\0') {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else if (*(char *)(param_1 + 0x2c) == '\x02') {
    uVar2 = 0;
  }
  FUN_80081cf8(uVar1);
  return uVar2;
}

void FUN_arcade__80025aec(int param_1)

{
  DecDCToutCallback((func *)0x0);
  FUN_arcade__8002632c(param_1 + 0x24);
  FUN_arcade__80025f40(param_1 + 8);
  return;
}

bool FUN_arcade__80025b44(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    FUN_arcade__80026230
              (param_1 + 0x24,(int)*(short *)(param_1 + 0x40),(int)*(short *)(param_1 + 0x42));
    FUN_arcade__80026280
              (param_1 + 0x24,(int)*(short *)(param_1 + 0x3c),(int)*(short *)(param_1 + 0x3e),iVar1)
    ;
  }
  return iVar1 != 0;
}

void FUN_arcade__80025bb4(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  iVar2 = FUN_arcade__80026130(param_1 + 8);
  *(undefined2 *)(param_1 + 0x3c) = param_2;
  *(undefined2 *)(param_1 + 0x3e) = param_3;
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(iVar2 + 4);
  uVar1 = *(undefined2 *)(iVar2 + 6);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined2 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_arcade__8002635c(iVar2,uVar4);
  FUN_arcade__800261a8(param_1 + 8);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  return;
}

uint FUN_arcade__80025cec(int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 8);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(uint *)(param_1 + 8) = uVar2 | 8;
    uVar2 = uVar2 >> 1 & 2;
  }
  else {
    iVar1 = FUN_arcade__80025f88(param_1 + 8);
    uVar2 = (uint)(iVar1 != 0) << 1;
  }
  return uVar2;
}

void FUN_arcade__80025d38(void)

{
  FUN_arcade__80025d60(DAT_800a8d64);
  return;
}

void FUN_arcade__80025d60(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;

  uVar2 = *(ushort *)(param_1 + 0x32);
  cVar1 = *(char *)(param_1 + 0x2d);
  FUN_8007ba70(param_1 + 0x24,*(undefined4 *)(param_1 + (uVar2 & 1) * 4 + 0x34),0);
  uVar3 = uVar2 - 1;
  *(short *)(param_1 + 0x32) = (short)uVar3;
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + *(short *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 8) & 8) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
    FUN_arcade__80025f88(param_1 + 8);
  }
  if ((uVar3 == 0) || (*(char *)(param_1 + 0x2c) != '\0')) {
    *(undefined *)(param_1 + 0x2c) = 1;
  }
  else {
    if (cVar1 == '\0') {
      FUN_8007af30();
    }
    DecDCTout(*(u_long **)(param_1 + (uVar3 & 1) * 4 + 0x34),(uint)*(ushort *)(param_1 + 0x2e));
  }
  return;
}

void FUN_arcade__80025e70(int param_1)

{
  if ((*(char *)(param_1 + 0x2c) == '\x01') &&
     (*(undefined *)(param_1 + 0x2c) = 2, *(code **)(param_1 + 4) != (code *)0x0)) {
    (**(code **)(param_1 + 4))();
  }
  return;
}

void FUN_arcade__80025eac(undefined4 param_1)

{
  FUN_8008ce30(param_1,0,0x1c);
  return;
}

undefined4 FUN_arcade__80025ed0(uint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;

  uVar1 = FUN_80081cf8(0);
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = *param_1 & 1;
  uVar3 = *(uint *)param_1[3];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = uVar3;
  uVar2 = FUN_8007c4ec(5);
  FUN_80081cf8(uVar1);
  return uVar2;
}

void FUN_arcade__80025f40(uint *param_1)

{
  undefined4 uVar1;

  uVar1 = FUN_80081cf8(0);
  *param_1 = *param_1 | 4;
  FUN_8007c570();
  FUN_80081cf8(uVar1);
  return;
}

bool FUN_arcade__80025f88(uint *param_1)

{
  void *madr;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  void *pvVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  short local_40;
  short local_3e;
  ushort local_3c;
  ushort local_3a;
  uint local_38;
  uint local_30;

  CdGetSector(&local_40,8);
  if (local_40 != 0x160) {
    return false;
  }
  if (local_3e != 0x5349) {
    return false;
  }
  uVar2 = *param_1;
  uVar6 = param_1[6];
  uVar8 = param_1[5];
  madr = (void *)param_1[4];
  uVar4 = *(ushort *)((int)param_1 + 6);
  uVar7 = *(ushort *)(param_1 + 2);
  if ((uVar2 & 4) != 0) {
    return true;
  }
  uVar1 = (uint)local_3c;
  if (uVar1 == 0) {
    uVar2 = uVar2 & 0xfffffffd;
    uVar3 = uVar2;
    if (uVar7 == *(ushort *)((int)param_1 + 10)) {
LAB_arcade__80026080:
      uVar2 = uVar3 | 2;
      if ((local_30 & 0x3fffffff) <= local_38) {
        uVar2 = uVar3 | 6;
      }
      goto LAB_arcade__800260e8;
    }
    madr = *(void **)(((int)((uint)uVar4 << 0x10) >> 0xe) + param_1[3]);
    uVar6 = 0;
    uVar8 = local_38;
  }
  else {
    uVar3 = uVar2;
    if ((((uVar2 & 2) != 0) || (uVar8 != local_38)) || (uVar6 != uVar1)) goto LAB_arcade__80026080;
  }
  uVar6 = uVar6 + 1;
  pvVar5 = (void *)((int)madr + 0x7e0);
  if (uVar1 == local_3a - 1) {
    uVar4 = uVar4 + 1;
    uVar7 = uVar7 + 1;
    if (uVar4 == *(ushort *)((int)param_1 + 10)) {
      uVar4 = 0;
    }
    pvVar5 = *(void **)(((int)((uint)uVar4 << 0x10) >> 0xe) + param_1[3]);
    if ((local_30 & 0x3fffffff) <= local_38) {
      uVar2 = uVar2 | 4;
    }
  }
  CdGetSector(madr,0x1f8);
  madr = pvVar5;
LAB_arcade__800260e8:
  *param_1 = uVar2;
  param_1[6] = uVar6;
  param_1[5] = uVar8;
  param_1[4] = (uint)madr;
  *(ushort *)((int)param_1 + 6) = uVar4;
  *(ushort *)(param_1 + 2) = uVar7;
  return (uVar2 & 4) != 0;
}

undefined4 FUN_arcade__80026130(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = FUN_80081cf8(0);
  uVar3 = 0;
  if (*(short *)(param_1 + 8) != 0) {
    iVar2 = *(short *)(param_1 + 4) + 1;
    uVar3 = *(undefined4 *)(*(short *)(param_1 + 4) * 4 + *(int *)(param_1 + 0xc));
    if (iVar2 == *(short *)(param_1 + 10)) {
      iVar2 = 0;
    }
    *(short *)(param_1 + 4) = (short)iVar2;
  }
  FUN_80081cf8(uVar1);
  return uVar3;
}

void FUN_arcade__800261a8(int param_1)

{
  undefined4 uVar1;
  short sVar2;

  uVar1 = FUN_80081cf8(0);
  sVar2 = *(short *)(param_1 + 8);
  if (sVar2 != 0) {
    sVar2 = sVar2 + -1;
  }
  *(short *)(param_1 + 8) = sVar2;
  FUN_80081cf8(uVar1);
  return;
}

void FUN_arcade__800261ec(int param_1,undefined param_2)

{
  FUN_8008ce30(param_1,0,0x18);
  *(undefined *)(param_1 + 8) = 2;
  *(undefined *)(param_1 + 9) = param_2;
  return;
}

void FUN_arcade__80026230(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;

  uVar2 = param_3 + 0xfU & 0xfffffff0;
  *(short *)(param_1 + 0xc) = (short)(param_2 + 0xf >> 4);
  if (*(char *)(param_1 + 9) == '\0') {
    sVar1 = (short)(uVar2 << 3);
    uVar3 = 0x10;
  }
  else {
    sVar1 = (short)uVar2 * 0xc;
    uVar3 = 0x18;
  }
  *(undefined2 *)(param_1 + 4) = uVar3;
  *(short *)(param_1 + 6) = (short)param_3;
  *(short *)(param_1 + 10) = sVar1;
  return;
}

void FUN_arcade__80026280(undefined2 *param_1,int param_2,undefined2 param_3,u_long *param_4)

{
  ushort uVar1;
  uint mode;

  mode = (uint)*(byte *)((int)param_1 + 9);
  uVar1 = param_1[6];
  *(undefined *)(param_1 + 4) = 0;
  param_1[7] = uVar1;
  if (mode == 0) {
    *param_1 = (short)param_2;
  }
  else {
    *param_1 = (short)(param_2 * 3 >> 1);
  }
  param_1[1] = param_3;
  DecDCTReset(1);
  if (mode == 0) {
    FUN_8007af30();
  }
  DecDCTin(param_4,mode);
  DecDCTout(*(u_long **)(param_1 + (uVar1 & 1) * 2 + 8),(uint)(ushort)param_1[5]);
  return;
}

void FUN_arcade__8002632c(int param_1)

{
  DecDCTReset(1);
  *(undefined *)(param_1 + 8) = 3;
  return;
}

void FUN_arcade__8002635c(ushort *param_1,ushort *param_2)

{
  undefined uVar1;
  undefined uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  undefined *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  uint local_88[2];

  *param_2 = *param_1;
  param_2[1] = param_1[1];
  iVar15 = ((int)(param_1[2] + 0xf) >> 4) * ((int)(param_1[3] + 0xf) >> 4);
  puVar12 = (ushort *)((int)(param_1 + 5) + (uint)param_1[4]);
  iVar14 = iVar15 * 6;
  puVar4 = (undefined *)
           FUN_80083d0c((undefined *)((char *)local_88 + -(iVar15 * 0xc + 7U & 0xfffffff8)),param_1 + 5);
  uVar6 = (uint)puVar12[1];
  puVar13 = puVar12 + 2;
  iVar15 = 0x10;
  puVar11 = puVar4 + iVar14;
  puVar9 = param_2 + 2;
  uVar5 = (uint)*puVar12 << 0x10;
LAB_arcade__80026428:
  uVar6 = uVar5 | uVar6;
LAB_arcade__8002642c:
  iVar7 = iVar15;
  iVar14 = iVar14 + -1;
  if (iVar14 == -1) {
    uVar3 = *param_2;
    for (; puVar9 < param_2 + (uint)uVar3 * 2 + 2; puVar9 = puVar9 + 1) {
      *puVar9 = 0xfe00;
    }
    return;
  }
  uVar1 = *puVar11;
  puVar11 = puVar11 + 1;
  uVar2 = *puVar4;
  puVar4 = puVar4 + 1;
  *puVar9 = CONCAT11(uVar2,uVar1);
  puVar9 = puVar9 + 1;
LAB_arcade__80026458:
  gte_ldLZCS(uVar6);
  iVar15 = iVar7;
  if ((int)uVar6 < 0) {
    uVar5 = 3;
    if (uVar6 >> 0x1d < 6) goto code_r0x80026470;
    uVar3 = 0x3ff;
    if (uVar6 >> 0x1d == 6) {
      uVar3 = 1;
    }
    *puVar9 = uVar3;
  }
  else {
    iVar8 = gte_stLZCR();
    iVar10 = iVar8 * 0x100;
    if (uVar6 >> 0x17 == 0) {
      iVar15 = iVar7 + -9;
      uVar6 = uVar6 << 9;
      if (iVar15 < 1) {
        iVar15 = iVar7 + 7;
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar6 = uVar6 | (uint)uVar3 << (0x10U - iVar15 & 0x1f);
      }
      iVar8 = iVar8 + -9;
    }
    else if (iVar8 == 5) {
      iVar15 = iVar7 + -6;
      uVar6 = uVar6 << 6;
      if (iVar15 < 1) {
        iVar15 = iVar7 + 10;
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar6 = uVar6 | (uint)uVar3 << (0x10U - iVar15 & 0x1f);
      }
      *puVar9 = (ushort)(uVar6 >> 0x10);
      uVar5 = 0x10;
      goto LAB_arcade__80026554;
    }
    uVar5 = *(uint *)(&LAB_arcade__80052908 + iVar10 + (uVar6 >> (0x17U - iVar8 & 0x1f) & 0xfc)) >>
            0x1a;
    *puVar9 = (ushort)*(uint *)(&LAB_arcade__80052908 +
                               iVar10 + (uVar6 >> (0x17U - iVar8 & 0x1f) & 0xfc));
  }
LAB_arcade__80026554:
  puVar9 = puVar9 + 1;
  iVar7 = iVar15 - uVar5;
  uVar6 = uVar6 << (uVar5 & 0x1f);
  if (iVar7 < 1) {
    iVar7 = iVar7 + 0x10;
    uVar3 = *puVar13;
    puVar13 = puVar13 + 1;
    uVar6 = uVar6 | (uint)uVar3 << (0x10U - iVar7 & 0x1f);
  }
  goto LAB_arcade__80026458;
code_r0x80026470:
  *puVar9 = 0xfe00;
  puVar9 = puVar9 + 1;
  uVar6 = uVar6 << 2;
  iVar15 = iVar7 + -2;
  if (iVar7 + -2 < 1) goto code_r0x80026484;
  goto LAB_arcade__8002642c;
code_r0x80026484:
  iVar15 = iVar7 + 0xe;
  uVar3 = *puVar13;
  puVar13 = puVar13 + 1;
  uVar5 = (uint)uVar3 << (0x10U - iVar15 & 0x1f);
  goto LAB_arcade__80026428;
}

void FUN_arcade__800265d4(int param_1,int param_2,int *param_3)

{
  undefined2 uVar1;

  *(int **)(param_1 + 0x50) = param_3;
  uVar1 = *(undefined2 *)(&LAB_arcade__80053508 + param_2 * 2);
  *(undefined *)(param_1 + 0x56) = 0;
  *(undefined *)(param_1 + 0x57) = 0;
  *(undefined *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x59) = 0;
  *(undefined2 *)(param_1 + 0x54) = uVar1;
  *param_3 = (int)(param_3 + 2);
  param_3[1] = (int)(param_3 + 0x9da);
  FUN_arcade__8002589c(param_1,0);
  FUN_arcade__80025914(param_1,2,param_3);
  FUN_arcade__80025924(param_1,param_3 + 0x13b2,param_3 + 0x13b2);
  FUN_arcade__80025930(param_1,param_3 + 0x33b2,param_3 + 0x3832);
  return;
}

void FUN_arcade__8002667c(int param_1)

{
  int iVar1;

  if (*(char *)(param_1 + 0x56) == '\0') {
    FUN_arcade__80025940(param_1,(int)*(short *)(param_1 + 0x54));
    FUN_arcade__80025a10(param_1);
    *(undefined *)(param_1 + 0x56) = 1;
  }
  iVar1 = FUN_arcade__80025a50(param_1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x57) = 1;
  }
  else if (((-1 < iVar1) && (iVar1 < 4)) && (1 < iVar1)) {
    *(undefined *)(param_1 + 0x56) = 0;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(char *)(param_1 + 0x57) != '\0') {
      *(undefined *)(param_1 + 0x57) = 0;
      *(undefined *)(param_1 + 0x58) = 1;
      FUN_arcade__80025bb4(param_1,0x280,0x100);
    }
  }
  else {
    *(undefined *)(param_1 + 0x58) = 0;
    FUN_arcade__80025b44(param_1);
    do {
    } while (*(char *)(param_1 + 0x2c) != '\x02');
    *(undefined *)(param_1 + 0x59) = 1;
  }
  return;
}

void FUN_arcade__80026760(undefined4 param_1)

{
  FUN_arcade__80025aec(0);
  FUN_arcade__80025904(param_1);
  return;
}

int FUN_global__80010000(int param_1,int param_2,int param_3)

{
  if (param_2 < param_1) {
    if (param_1 < param_3) {
      return param_3;
    }
  }
  else {
    param_1 = param_3;
    if (param_3 <= param_2) {
      return param_2;
    }
  }
  return param_1;
}

int FUN_global__8001003c(int param_1,int param_2,int param_3)

{
  if (param_1 < param_2) {
    if (param_3 < param_1) {
      return param_3;
    }
  }
  else {
    param_1 = param_3;
    if (param_2 <= param_3) {
      return param_2;
    }
  }
  return param_1;
}

void FUN_global__80010078(uint param_1,undefined2 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  uVar8 = param_1 & 0x1f;
  uVar6 = (param_1 & 0x3e0) >> 5;
  uVar7 = (param_1 & 0x7c00) >> 10;
  uVar2 = FUN_global__80010000(uVar8,uVar6,uVar7);
  iVar3 = FUN_global__8001003c(uVar8,uVar6,uVar7);
  if (uVar2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)((uVar2 - iVar3) * 0x20) / (int)uVar2;
  }
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar3 = uVar2 - iVar3;
    iVar9 = (int)((uVar2 - uVar8) * 0x20) / iVar3;
    iVar10 = (int)((uVar2 - uVar6) * 0x20) / iVar3;
    iVar3 = (int)((uVar2 - uVar7) * 0x20) / iVar3;
    if (uVar8 == uVar2) {
      iVar4 = iVar3 - iVar10;
    }
    if (uVar6 == uVar2) {
      iVar4 = iVar9 - (iVar3 + -0x40);
    }
    iVar3 = iVar4 << 4;
    if (uVar7 == uVar2) {
      iVar4 = iVar10 - (iVar9 + -0x80);
      iVar3 = iVar4 * 0x10;
    }
    iVar4 = (iVar3 - iVar4) * 4;
    bVar1 = iVar4 < 0x2d00;
    if (iVar4 < 0) {
      do {
        iVar4 = iVar4 + 0x2d00;
      } while (iVar4 < 0);
      bVar1 = iVar4 < 0x2d00;
    }
    while (!bVar1) {
      bVar1 = iVar4 + -0x2d00 < 0x2d00;
      iVar4 = iVar4 + -0x2d00;
    }
  }
  *param_2 = (short)(iVar4 >> 5);
  param_2[1] = (short)iVar5;
  param_2[2] = (short)uVar2;
  return;
}

ushort FUN_global__800101c4
                 (undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 int param_6)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined auStack_40 [2];
  short local_3e;
  int local_38;
  int local_34;
  ushort local_30;

  if (DAT_80092878 == 2) {
    param_2 = DAT_80092870 + 0x10;
  }
  else {
    param_2 = param_2 + 0x100;
  }
  iVar14 = 0x40;
  uVar3 = FUN_80078138(param_3);
  if ((int)uVar3 < 1) {
    return 0;
  }
  do {
    do {
      uVar4 = FUN_80083ae0(param_4);
      uVar4 = *(uint *)(param_3 + (uVar4 % uVar3) * 4 + 4);
      uVar10 = uVar4 & 0xffff;
      local_30 = (ushort)(uVar4 >> 0x1a);
      puVar5 = (undefined4 *)FUN_80078038(param_2,uVar10 - 1);
      iVar6 = FUN_80060b70(*puVar5);
      iVar12 = 0;
    } while (iVar6 != 1);
    piVar11 = param_5;
    while( true ) {
      if (param_6 <= iVar12) {
        puVar5 = (undefined4 *)FUN_80078038(param_2,(uVar4 & 0xffff) - 1);
        uVar13 = *puVar5;
        if (local_30 != 0) {
          cVar9 = "-0123456789abcdefghijklmnopqrstuvwxyz"[local_30];
          uVar2 = FUN_80060d28(uVar13,(int)cVar9);
          goto LAB_global__800103e0;
        }
        uVar3 = FUN_80060bec(uVar13,&local_38,&local_34);
        iVar14 = 0;
        goto LAB_global__8001037c;
      }
      uVar1 = *(ushort *)(piVar11 + 2);
      piVar7 = (int *)FUN_80078038(param_2,uVar10 - 1);
      if ((uVar1 == uVar10 || *piVar11 == *piVar7) &&
         (uVar8 = FUN_80083ae0(param_4), (uVar8 & 0x1f) < 0x1d && 0 < iVar14)) break;
      piVar11 = piVar11 + 3;
      iVar12 = iVar12 + 1;
    }
    iVar14 = iVar14 + -1;
  } while( true );
  while (iVar14 < 2) {
LAB_global__8001037c:
    uVar10 = FUN_80083ae0(param_4);
    iVar6 = (uVar10 % uVar3) * 2;
    FUN_global__80010078(*(undefined2 *)(iVar6 + local_38),auStack_40);
    iVar14 = iVar14 + 1;
    if (5 < local_3e) break;
  }
  cVar9 = *(char *)(local_34 + uVar10 % uVar3);
  uVar2 = *(undefined2 *)(iVar6 + local_38);
LAB_global__800103e0:
  *param_1 = uVar13;
  *(char *)((int)param_1 + 5) = cVar9;
  *(undefined2 *)((int)param_1 + 6) = uVar2;
  *(short *)(param_1 + 2) = (short)uVar4;
  return local_30;
}

void FUN_global__80010434(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int local_18;
  int local_14;

  if (param_3 == 0) {
    uVar3 = FUN_80060bec(param_2,&local_18,&local_14);
    uVar4 = FUN_80083ae0(param_4);
    uVar2 = *(undefined2 *)((uVar4 % uVar3) * 2 + local_18);
    *(undefined *)(param_1 + 5) = *(undefined *)(local_14 + uVar4 % uVar3);
  }
  else {
    cVar1 = "-0123456789abcdefghijklmnopqrstuvwxyz"[param_3 & 0x3f];
    uVar2 = FUN_80060d28(param_2,(int)cVar1);
    *(char *)(param_1 + 5) = cVar1;
  }
  *(undefined2 *)(param_1 + 6) = uVar2;
  return;
}

undefined4 *
FUN_global__800104e0
          (int param_1,int param_2,undefined2 *param_3,undefined4 param_4,uint *param_5,
          undefined4 param_6,uint *param_7)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint local_88 [2];
  uint local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  uint *local_34;
  int local_30;

  local_3c = _LAB_80092e6a_2;
  if (param_2 != 0) {
    local_3c = _LAB_80092e6e_2;
  }
  if (param_1 == 0) {
    DAT_801d58b4 = 0;
    local_38 = param_3;
    local_40 = FUN_8007d23c(0);
    FUN_8008ce30(&DAT_801d585c,0,0x58c);
    DAT_801d585c = *(undefined4 *)&DAT_801c98e1;
    DAT_801d5860 = *(undefined4 *)&DAT_801c98e5;
    DAT_801d5864 = 2;
    DAT_801d5865 = 2;
    DAT_801d5866 = 4;
    DAT_801d5867 = 5;
    DAT_801d5868 = 0;
    DAT_801d586a = 0;
    DAT_801d5869 = *(char *)(param_3 + 0x22) == '\0';
    DAT_801d586b = *(undefined *)((int)param_3 + 0x45);
    uVar4 = FUN_8007816c(local_3c,*param_3);
    FUN_8005e548(&DAT_801d585c,uVar4);
    uVar4 = FUN_8007816c(local_3c,param_3[1]);
    FUN_8005e5f0(&DAT_801d585c,uVar4);
    uVar4 = FUN_8007816c(local_3c,param_3[0x4a]);
    FUN_8008cedc(&DAT_801d58a0,uVar4);
    DAT_801d5dd8 = 0xffff;
    DAT_801d5dde = 0xffff;
    DAT_801d5de0 = 0xffff;
    DAT_801d5de2 = 0;
    DAT_801d5ddc = 0;
    DAT_801d5de4 = DAT_801d5de4 & 0xfffffff9 | 1;
    if (param_5 != (uint *)0x0) {
      local_88[0] = *param_5;
      local_88[1] = param_5[1];
      local_80[0] = param_5[2] & 0xffff0000;
    }
    uVar18 = (uint)(param_5 != (uint *)0x0);
    uVar17 = uVar18;
    if (param_7 != (uint *)0x0) {
      uVar17 = uVar18 + 1;
      uVar9 = param_7[1];
      uVar10 = param_7[2];
      local_88[uVar18 * 3] = *param_7;
      local_80[uVar18 * 3 + -1] = uVar9;
      local_80[uVar18 * 3] = uVar10;
      *(undefined2 *)(local_80 + uVar18 * 3) = 0;
    }
    FUN_80078138(param_3);
    iVar16 = 0;
    puVar13 = local_88;
    DAT_801d58b6 = 6;
    local_30 = 0x5c;
    bVar3 = true;
    local_34 = puVar13;
    while (iVar14 = local_30, uVar4 = 0, bVar3) {
      bVar15 = 1;
      puVar12 = (uint *)((char *)&DAT_801d585c + local_30);
      if (iVar16 == 0) {
        if (param_5 != (uint *)0x0) {
          bVar15 = 3;
        }
      }
      else if ((iVar16 == 1) && (param_7 != (uint *)0x0)) {
        bVar15 = 4;
      }
      FUN_8008ce30(puVar12,0,0xd0);
      uVar18 = uVar17;
      if ((int)uVar17 <= iVar16) {
        uVar18 = uVar17 + 1;
        uVar4 = FUN_global__800101c4(puVar13,local_3c,local_38,&local_40,local_34,uVar17);
        *(undefined *)(puVar13 + 1) = 0;
      }
      *puVar12 = *puVar13;
      cVar2 = *(char *)((int)puVar13 + 5);
      UNK_801d58e9[iVar14] = '\x06' - ((char)iVar16 + '\x01');
      UNK_801d58e8[iVar14] = 1;
      *(int *)((int)&DAT_801d5860 + iVar14) = (int)cVar2;
      if ((bVar15 < 2) || ((uVar5 = param_4, 3 < bVar15 && (uVar5 = param_6, bVar15 != 4)))) {
        uVar5 = FUN_800768c0(*(undefined2 *)(puVar13 + 2));
        FUN_80076f5c(uVar5,&DAT_801d5864 + iVar14);
        iVar6 = FUN_80076f2c(5,*(undefined2 *)((char *)UNK_801d5880 + iVar14));
        if (*(char *)(iVar6 + 0xe) != '\0') {
          uVar17 = *(uint *)(iVar6 + 8);
          *puVar12 = uVar17;
          FUN_global__80010434(puVar13,uVar17,uVar4,&local_40);
          *(int *)((int)&DAT_801d5860 + iVar14) = (int)*(char *)((int)puVar13 + 5);
        }
      }
      else {
        FUN_80076fc0(uVar5,&DAT_801d5864 + iVar14);
      }
      if (param_2 != 0) {
        UNK_801d58de[iVar14] = UNK_801d58de[iVar14] | 0x40;
      }
      UNK_801d58ea[iVar14] = bVar15;
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 3;
      local_30 = local_30 + 0xd0;
      uVar17 = *puVar12;
      iVar16 = iVar16 + 1;
      UNK_801d58eb[iVar14] = *(undefined *)puVar1;
      uVar4 = FUN_80060ae8(uVar17);
      FUN_8008cedc((char *)UNK_801d58ec + iVar14,uVar4);
      bVar3 = iVar16 < 6;
      uVar17 = uVar18;
    }
  }
  else {
    param_3 = (undefined2 *)FUN_8007830c(local_3c,&DAT_801d586c);
  }
  puVar8 = &DAT_801c98a0;
  puVar7 = (undefined4 *)(param_3 + 0x22);
  if (((uint)puVar7 & 3) == 0) {
    do {
      uVar5 = puVar7[1];
      uVar11 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar5;
      puVar8[2] = uVar11;
      puVar8[3] = uVar4;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar7 != (undefined4 *)(param_3 + 0x42));
  }
  else {
    do {
      uVar11 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar11;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar7 != (undefined4 *)(param_3 + 0x42));
  }
  iVar14 = 0x14fda;
  iVar16 = 0x5c;
  for (iVar6 = 0; iVar6 < (int)(uint)DAT_801d58b6; iVar6 = iVar6 + 1) {
    FUN_800771ac(&DAT_801d5864 + iVar16,&DAT_801c98e0 + iVar14);
    iVar14 = iVar14 + 0x1c0;
    iVar16 = iVar16 + 0xd0;
  }
  return &DAT_801d585c;
}

undefined4 * FUN_global__800109c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;

  iVar1 = FUN_8007830c(_LAB_80092e6e_2,&DAT_801d586c);
  puVar2 = &DAT_801c98a0;
  puVar3 = (undefined4 *)(iVar1 + 0x44);
  if (((uint)puVar3 & 3) == 0) {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x84U));
  }
  else {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x84U));
  }
  iVar7 = 0x14fda;
  iVar1 = 0x5c;
  for (iVar8 = 0; iVar8 < (int)(uint)DAT_801d58b6; iVar8 = iVar8 + 1) {
    FUN_800771ac(&DAT_801d5864 + iVar1,&DAT_801c98e0 + iVar7);
    iVar7 = iVar7 + 0x1c0;
    iVar1 = iVar1 + 0xd0;
  }
  return &DAT_801d585c;
}

undefined4 * FUN_global__80010b08(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;

  iVar1 = FUN_8007830c(_LAB_80092e6a_2,&DAT_801d586c);
  puVar2 = &DAT_801c98a0;
  puVar3 = (undefined4 *)(iVar1 + 0x44);
  if (((uint)puVar3 & 3) == 0) {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x84U));
  }
  else {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x84U));
  }
  iVar7 = 0x14fda;
  iVar1 = 0x5c;
  for (iVar8 = 0; iVar8 < (int)(uint)DAT_801d58b6; iVar8 = iVar8 + 1) {
    FUN_800771ac(&DAT_801d5864 + iVar1,&DAT_801c98e0 + iVar7);
    iVar7 = iVar7 + 0x1c0;
    iVar1 = iVar1 + 0xd0;
  }
  return &DAT_801d585c;
}

undefined4 FUN_global__80010c50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;

  uVar9 = 0;
  iVar1 = FUN_8007830c(_LAB_80092e6a_2,&DAT_801d586c);
  puVar2 = &DAT_801c98a0;
  puVar3 = (undefined4 *)(iVar1 + 0x44);
  if (((uint)puVar3 & 3) == 0) {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x84U));
  }
  else {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x84U));
  }
  iVar7 = 0x14fda;
  iVar1 = 0x5c;
  for (iVar8 = 0; iVar8 < (int)(uint)DAT_801d58b6; iVar8 = iVar8 + 1) {
    if (((byte)UNK_801d58de[iVar1] >> 6 & 1) == 0) {
      FUN_800771ac(&DAT_801d5864 + iVar1,&DAT_801c98e0 + iVar7);
    }
    else {
      uVar9 = 1;
    }
    iVar7 = iVar7 + 0x1c0;
    iVar1 = iVar1 + 0xd0;
  }
  return uVar9;
}

void FUN_global__80010dc4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0x14fda;
  iVar1 = 0x5c;
  for (iVar3 = 0; iVar3 < (int)(uint)DAT_801d58b6; iVar3 = iVar3 + 1) {
    if (((byte)UNK_801d58de[iVar1] >> 6 & 1) != 0) {
      FUN_800771ac(&DAT_801d5864 + iVar1,&DAT_801c98e0 + iVar2);
    }
    iVar2 = iVar2 + 0x1c0;
    iVar1 = iVar1 + 0xd0;
  }
  return;
}

undefined * FUN_global__80010e6c(undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;

  ppuVar2 = &PTR_s_DON0001_global__80020f2c_global__80023d9c;
  do {
    iVar1 = FUN_8008cf00(param_1,*ppuVar2);
    if (iVar1 == 0) {
      return ppuVar2[1];
    }
    ppuVar2 = ppuVar2 + 2;
  } while (*ppuVar2 != (undefined *)0x0);
  return (undefined *)0xa6;
}

void FUN_global__80010edc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (DAT_801d5865 == '\0') {
    _LAB_80092e6a_2 = FUN_80076e04(&DAT_800b15c0,0x30000);
    iVar1 = FUN_global__80010c50();
    if (iVar1 != 0) {
      _LAB_80092e6a_2 = FUN_80076d74(&DAT_800e15c0,0xc8000);
      FUN_global__80010dc4();
    }
  }
  else if (DAT_801d5865 == '\x01') {
    switch(DAT_801d5866) {
    case 1:
    case 2:
    case 7:
    case 8:
    case 9:
    case 10:
      _LAB_80092e6e_2 = FUN_80076cf8(&DAT_800b15c0,0x30000);
      _LAB_80092e6a_2 = FUN_80076d74(&DAT_800e15c0,0xc8000);
      FUN_global__800109c0();
      break;
    default:
      _LAB_80092e6a_2 = FUN_80076e88(&DAT_800b15c0,0x30000);
      FUN_global__80010b08();
      break;
    case 0xb:
      uVar2 = FUN_global__80010e6c(&DAT_801d586c);
      FUN_8005d8d4(uVar2,&DAT_800b15c0);
      FUN_80069ddc(&DAT_800b15c0);
      _LAB_80092e6e_2 = FUN_80076cf8(&DAT_800b15c0,0x30000);
      _LAB_80092e6a_2 = FUN_80076d74(&DAT_800e15c0,0xc8000);
      FUN_global__800109c0();
      iVar3 = 0x14fda;
      iVar1 = 0x5c;
      DAT_801d58b6 = 1;
      for (iVar4 = 0; iVar4 < (int)(uint)DAT_801d58b6; iVar4 = iVar4 + 1) {
        FUN_800771ac(&DAT_801d5864 + iVar1,&DAT_801c98e0 + iVar3);
        iVar3 = iVar3 + 0x1c0;
        iVar1 = iVar1 + 0xd0;
      }
    }
  }
  return;
}

void FUN_global__800110c4(undefined4 param_1,undefined4 param_2)

{
  FUN_8005d8a0(param_2,param_1);
  FUN_8005d768(param_2);
  return;
}

void FUN_global__800110fc(int param_1,uint param_2)

{
  int iVar1;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  iVar1 = param_1 + 8;
  if ((*(uint *)(param_1 + 4) >> 3 & 1) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 8);
  }
  local_10 = (undefined2)((param_2 & 0xf) << 6);
  local_e = (undefined2)((param_2 & 0x10) << 4);
  local_c = *(undefined2 *)(iVar1 + 8);
  local_a = *(undefined2 *)(iVar1 + 10);
  FUN_8007bbd4(iVar1,&local_10);
  FUN_8007af30();
  return;
}

void FUN_global__80011178(void)

{
  FUN_global__800110c4(&DAT_800e15c0,0x16);
  FUN_global__800110fc(&DAT_800e15c0,0x1d);
  FUN_global__800110c4(&DAT_800e15c0,0xd);
  FUN_global__800110fc(&DAT_800e15c0,0x1e);
  FUN_800609f8(&LAB_global__80023ec2_2,0xc800);
  return;
}

void FUN_global__800111dc(void)

{
  uint uVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;

  uVar1 = (uint)DAT_801c98e0;
  FUN_global__800110c4(&DAT_800e15c0,(int)L"BED?@AC"[uVar1]);
  FUN_global__800110fc(&DAT_800e15c0,0xe);
  FUN_8005d8d4(0x3e,&DAT_800e15c0);
  FUN_global__800110fc(&DAT_800e15c0,0xc);
  FUN_8005d8d4(*(undefined4 *)(&DAT_global__80023ea8 + uVar1 * 4),&DAT_800e15c0);
  local_18 = 0x180;
  local_16 = 0x1ff;
  local_14 = (undefined2)DAT_800e15d0;
  local_12 = *(undefined2 *)((char *)&DAT_800e15d0 + 2);
  FUN_8007bbd4(&DAT_800e15c8,&local_18);
  local_18 = 0x180;
  local_16 = 0;
  local_14 = *(undefined2 *)((int)&DAT_800e15d0 + DAT_800e15c8);
  local_12 = *(undefined2 *)((int)&DAT_800e15d0 + DAT_800e15c8 + 2);
  FUN_8007bbd4((int)&DAT_800e15c8 + DAT_800e15c8,&local_18);
  return;
}

void FUN_global__800117b4(int param_1)

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

void FUN_global__80011868(undefined4 param_1,undefined4 param_2)

{
  FUN_8005d8a0(param_2,param_1);
  FUN_8005d768(param_2);
  return;
}

void FUN_global__8001191c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  uint *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  iVar9 = *(int *)(param_3 + 8) + 0x10;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_8007da80(&DAT_801b9600,&DAT_801b95f0);
      iVar7 = 0x22 - (param_4 >> 2);
      DAT_801b9610 = iVar9;
      iVar1 = FUN_8006ad3c(&DAT_801b9600,*(undefined4 *)(param_2 + 0x10),iVar7);
      iVar6 = 0x160 - iVar1 >> 1;
      psVar2 = (short *)FUN_8007d024(iVar9,param_4 * 0xf2 >> 7);
      uVar8 = param_4 * 0x66 >> 7;
      *psVar2 = (short)iVar6 + 1;

      psVar2[1] = 0x5c;
      psVar2[2] = (short)iVar1;
      psVar2[3] = 2;
      DAT_801b9614 = uVar8 | uVar8 << 8 | uVar8 << 0x10;
      FUN_8006ac90(&DAT_801b9600,*(undefined4 *)(param_2 + 0x10),iVar6,0x5a,iVar7);
      DAT_801b9614 = 0;
      FUN_8006ac90(&DAT_801b9600,*(undefined4 *)(param_2 + 0x10),iVar6 + 3,0x5d,iVar7);
      uVar8 = *(uint *)(param_2 + 0xc);
      puVar3 = (uint *)FUN_8007e0b0(iVar9);
      uVar8 = (int)((uVar8 & 0xff) * param_4) >> 7 |
              ((int)((uVar8 >> 8 & 0xff) * param_4) >> 7) << 8 |
              ((int)((uVar8 >> 0x10 & 0xff) * param_4) >> 7) << 0x10 | 0x3a000000;
      sVar5 = (short)(param_4 * 0x30 >> 7);
      sVar4 = 0x30 - sVar5;
      *(short *)((int)puVar3 + 0xe) = sVar4;
      *(short *)((int)puVar3 + 6) = sVar4;
      sVar5 = sVar5 + 0x30;
      puVar3[2] = uVar8;
      *puVar3 = uVar8;
      puVar3[6] = 0;
      puVar3[4] = 0;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined2 *)(puVar3 + 7) = 0x160;
      *(undefined2 *)(puVar3 + 3) = 0x160;
      *(short *)((int)puVar3 + 0x1e) = sVar5;
      *(short *)((int)puVar3 + 0x16) = sVar5;
      FUN_8007da44(iVar9,0x220);
    }
    *(int *)(param_1 + 0x1c4) = param_2;
    if (*(code **)(param_2 + 8) != (code *)0x0) {
      (**(code **)(param_2 + 8))();
    }
  }
  return;
}

undefined4 * FUN_global__80011b5c(undefined4 *param_1)

{
  FUN_8007fe8c();
  *param_1 = &LAB_global__8002106c;
  return param_1;
}

void FUN_global__80011b90(undefined4 *param_1)

{
  *param_1 = &LAB_global__8002106c;
  FUN_8007fec8();
  return;
}

void FUN_global__80011bb8(int param_1,undefined4 param_2)

{
  *(undefined *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = param_2;
  return;
}

void FUN_global__800120d4(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;

  param_3[2] = 0x160;
  param_2[2] = 0x160;
  param_3[3] = 0x1e0;
  param_2[3] = 0x1e0;
  if (*(char *)(param_1 + 0x20d) == '\0') {
    *param_3 = 0;
    *param_2 = 0;
    iVar1 = *(short *)(param_1 + 0x20e) * 200;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    param_2[1] = (short)(iVar1 >> 4);
    param_3[1] = (*(short *)(param_1 + 0x20e) + -0x10) * 5;
    return;
  }
  *param_3 = 0;
  *param_2 = 0;
  param_3[1] = (0x10 - *(short *)(param_1 + 0x20e)) * 5;
  iVar1 = *(short *)(param_1 + 0x20e) * -200;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  param_2[1] = (short)(iVar1 >> 4);
  return;
}

void FUN_global__800122a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;

  uVar2 = *(undefined4 *)(param_1 + *(char *)(param_1 + 0x20c) * 4 + 0x1cc);
  bVar1 = *(char *)(param_1 + 0x20c) + 1;
  *(byte *)(param_1 + 0x20c) = bVar1;
  *(undefined4 *)(param_1 + 0x1c8) = uVar2;
  *(undefined4 *)(param_1 + ((int)((uint)bVar1 << 0x18) >> 0x16) + 0x1cc) = param_2;
  return;
}

int FUN_global__800122d4(int param_1)

{
  char cVar1;

  if (0 < *(char *)(param_1 + 0x20c)) {
    cVar1 = *(char *)(param_1 + 0x20c) + -1;
    *(undefined4 *)(param_1 + 0x1c8) =
         *(undefined4 *)(param_1 + *(char *)(param_1 + 0x20c) * 4 + 0x1cc);
    *(char *)(param_1 + 0x20c) = cVar1;
    return (int)cVar1;
  }
  return -1;
}

void FUN_global__80012414(undefined4 param_1)

{
  FUN_80080f24(param_1,1);
  return;
}

void FUN_global__80012434(void)

{
  FUN_8007c570();
  return;
}

void FUN_global__80013230(void)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(_LAB_800a8dd8 + 8);
  if (DAT_801c98e0 == '\0') {
    FUN_8007f174(uVar1);
    FUN_8006ecd8(uVar1,&DAT_801ba408);
    FUN_8006ecd8(uVar1,&DAT_801efd61);
    FUN_8006ecd8(uVar1,&DAT_801efd50);
    FUN_8006ecd8(uVar1,&DAT_801ba417);
    FUN_8006ecd8(uVar1,&DAT_801ba42c);
  }
  return;
}

void FUN_global__800132cc(undefined4 param_1)

{
  if (DAT_801c98e0 == '\0') {
    FUN_8006ecd8(*(undefined4 *)(_LAB_800a8dd8 + 8),param_1);
  }
  return;
}

void FUN_global__8001330c
               (undefined4 param_1,char *param_2,int param_3,short param_4,undefined4 param_5)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;

  uVar5 = *(undefined4 *)(_LAB_800a8dd8 + 8);
  iVar4 = 0;
  if (DAT_801c98e0 == '\0') {
    cVar1 = *param_2;
    pcVar3 = param_2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 2;
      iVar4 = iVar4 + 0xc;
      cVar1 = *pcVar3;
    }
    param_3 = param_3 - (iVar4 >> 1);
    for (; *param_2 != '\0'; param_2 = param_2 + 2) {
      iVar4 = FUN_8007f18c(uVar5,CONCAT11(*param_2,param_2[1]));
      if (iVar4 != 0) {
        iVar4 = FUN_8007f01c(iVar4,param_1,param_5);
        sVar2 = (short)param_3;
        *(short *)(iVar4 + 4) = sVar2;
        *(short *)(iVar4 + 6) = param_4;
        *(short *)(iVar4 + 0xc) = sVar2 + 0xf;
        *(short *)(iVar4 + 0xe) = param_4;
        *(short *)(iVar4 + 0x14) = sVar2;
        *(short *)(iVar4 + 0x16) = param_4 + 0x1f;
        *(short *)(iVar4 + 0x1c) = sVar2 + 0xf;
        *(short *)(iVar4 + 0x1e) = param_4 + 0x1f;
        *(ushort *)(iVar4 + 0x12) = *(ushort *)(iVar4 + 0x12) & 0xff9f | 0x20;
      }
      param_3 = param_3 + 0xc;
    }
  }
  return;
}

void FUN_global__80013430(void)

{
  int iVar1;

  iVar1 = _LAB_800a8dd8;
  if (DAT_801c98e0 == '\0') {
    FUN_global__80013230();
    FUN_global__800132cc(*(undefined4 *)(iVar1 + 0x24));
    FUN_global__800132cc(*(undefined4 *)(iVar1 + 0x28));
  }
  return;
}

void FUN_global__80013480(void)

{
  int iVar1;

  iVar1 = _LAB_800a8dd8;
  if (DAT_801c98e0 == '\0') {
    FUN_global__80013230();
    FUN_global__800132cc(*(undefined4 *)(iVar1 + 0x20));
  }
  return;
}

int FUN_global__800134c4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = 0x988;
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    if (*(char *)(_LAB_800a8dd8 + iVar1 + 0x2fa8) != '\0') {
      iVar3 = iVar3 + *(short *)(_LAB_800a8dd8 + iVar2 + 0x1a6e);
    }
    iVar2 = iVar2 + 0x5c;
  }
  return iVar3;
}

int FUN_global__80013518(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = 0;
  iVar1 = _LAB_800a8dd8;
  do {
    if (*(char *)(iVar1 + 0x2fa8) != '\0') {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = _LAB_800a8dd8 + iVar2;
  } while (iVar2 < 0x20);
  return iVar3;
}

int FUN_global__80013558(void)

{
  char cVar1;
  int iVar2;

  cVar1 = *(char *)(_LAB_800a8dd8 + 0x68c);
  iVar2 = FUN_global__80013518();
  return cVar1 + iVar2;
}

int FUN_global__8001358c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;

  sVar1 = *(short *)(_LAB_800a8dd8 + 0x68e);
  iVar2 = FUN_80068fe8(_LAB_800a8dd8 + 0x690);
  iVar3 = FUN_global__800134c4();
  return (sVar1 - iVar2) - iVar3;
}

int FUN_global__800135c8(void)

{
  return (int)*(short *)(_LAB_800a8dd8 + 0x68e);
}

undefined4 FUN_global__800135e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = _LAB_800a8dd8;
  iVar1 = FUN_global__8001358c();
  *param_2 = 0;
  if (*(char *)(iVar3 + param_1 + 0x2fa8) == '\x01') {
    uVar2 = 1;
  }
  else {
    *param_2 = 1;
    uVar2 = 0;
    if (-1 < iVar1 - *(short *)(iVar3 + param_1 * 0x5c + 0x23f6)) {
      *param_2 = 2;
      iVar3 = FUN_global__80013558();
      uVar2 = 1;
      if (iVar3 == 0x20) {
        uVar2 = 0;
      }
      else {
        *param_2 = 0;
      }
    }
  }
  return uVar2;
}
