// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_023.h"
#include "scus_944.88_part_020.h"
#include "scus_944.88_part_021.h"
#include "scus_944.88_part_022.h"
#include <stdint.h>
#include <stddef.h>

// Forward declarations
int FUN_80086084(int param_1, int param_2, int param_3, int param_4);
int FUN_80086084_5(int param_1, int param_2, int param_3, int param_4, longlong param_5);
undefined2 FUN_8007596c(int param_1, int param_2);
undefined4 FUN_80075a5c(undefined4 param_1, undefined4 param_2);
int FUN_80075a94(undefined4 param_1, undefined4 param_2);
int FUN_80075bf4(int param_1, int param_2);
undefined4 FUN_80075b04(undefined4 param_1, undefined4 param_2, int param_3);
void FUN_8007bbd4(int param_1, undefined2 *param_2);
void FUN_8006ac68(undefined *param_1, int param_2);
void FUN_8007da80(undefined *param_1, undefined4 *param_2);
int FUN_8006ad3c(undefined *param_1, undefined4 param_2, int param_3);
undefined2 *FUN_8007d024(int param_1, undefined4 param_2);
void FUN_8006ac90(undefined *param_1, undefined4 param_2, int param_3, int param_4, int param_5);
uint *FUN_8007e0b0(int param_1);
void FUN_8007da44(int param_1, int param_2);
void FUN_8007fe8c(undefined4 *renderStructure);
void FUN_8007fec8(undefined4 *renderStructure);
void FUN_80080f24(undefined4 param_1, int param_2);
void FUN_8007c570(void);
void FUN_8007cfdc(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4);
void FUN_80081c5c(void);
int FUN_8007c4ec(int param_1);
int FUN_80081c94(void);
void FUN_8007b008(int param_1, int param_2);
void FUN_8007b994(short *param_1, int param_2, int param_3);
void FUN_8007b8a0(int param_1, undefined2 param_2, undefined2 param_3, int param_4);
uint FUN_8007b8f8(int param_1, int param_2, int param_3);
void FUN_80063ef4(int param_1, short *param_2);
void FUN_8007af60(undefined *param_1);
void FUN_8007b14c(undefined *param_1, int param_2);
void FUN_8007b0c4(undefined *param_1, int param_2);
void FUN_8007b1d4(undefined *param_1, int param_2);
void FUN_8007b050(undefined *param_1, undefined4 *param_2);
void FUN_8007b320(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
void FUN_8007b374(int param_1, undefined *param_2, undefined4 param_3, int param_4);
undefined4 FUN_80061544(undefined4 param_1);
void FUN_80061490(undefined *param_1);
void FUN_80067444(int param_1, undefined *param_2, int param_3);
void FUN_8006c31c(undefined2 *param_1, int param_2, int param_3, int param_4, undefined4 param_5);
uint *FUN_80081cc8(undefined4 param_1);
uint FUN_8006b548(undefined *param_1, undefined4 *param_2, int param_3, int param_4);
void FUN_8006c460(undefined4 *param_1, undefined *param_2, undefined4 param_3);
int FUN_8006cd04(int param_1, undefined4 param_2);
void FUN_8006c5dc(int param_1, int param_2, int param_3, int param_4, undefined4 param_5);
void FUN_8006bef4(int param_1, int param_2, int param_3, int param_4);
void FUN_8006c580(int param_1);
void FUN_8006be64(int param_1);
void FUN_80068734(undefined *param_1, undefined4 param_2);
int FUN_8006b360(int param_1, undefined *param_2, int param_3, int param_4, int param_5);
void FUN_8006b218(int param_1, undefined *param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8);
void FUN_8008cedc(undefined *param_1, undefined4 *param_2);
void FUN_8008cf34(undefined *param_1, undefined *param_2, int param_3);
void FUN_8006af40(int param_1, undefined *param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
void FUN_8006adb4(int param_1, undefined *param_2, int param_3, int param_4, int param_5);
int FUN_8006ae28(int param_1, undefined4 param_2, int param_3, int param_4, int param_5);
void FUN_8006b3f4(int param_1, undefined *param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8);
void FUN_8006b184(int param_1, undefined *param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
void FUN_8006ba48(undefined *param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
void FUN_8006bb08(undefined4 param_1, short *param_2, undefined4 param_3);
undefined4 FUN_8007d23c(int param_1);
ushort FUN_80083ae0(undefined4 *param_1);
int FUN_8007f18c(undefined4 param_1, int param_2);
int FUN_8007f01c(int param_1, undefined4 param_2, undefined4 param_3);
void FUN_8008ce30(undefined *param_1, int param_2, int param_3);
undefined4 FUN_8007816c(int param_1, undefined2 param_2);
void FUN_8005e548(undefined *param_1, undefined4 param_2);
void FUN_8005e5f0(undefined *param_1, undefined4 param_2);
undefined4 FUN_8007830c(int param_1, undefined *param_2);
undefined4 FUN_800768c0(int param_1);
void FUN_80076fc0(undefined4 param_1, undefined *param_2);
int FUN_80076f2c(int param_1);
void FUN_800771ac(undefined *param_1, undefined *param_2);
undefined4 FUN_8005dd94(undefined4 param_1, int param_2);
undefined4 FUN_80060924(char *param_1);
int FUN_8005d950(undefined4 param_1);
void FUN_8005d92c(undefined2 param_1, undefined4 param_2);
void FUN_8007ba70(undefined2 *param_1, undefined4 param_2, int param_3);
void FUN_8007af30(void);
void FUN_80067960(undefined *param_1, undefined4 param_2, int param_3, int param_4);
void FUN_80067824(undefined *param_1, int param_2, int param_3);
void FUN_8006101c(undefined4 *param_1, int param_2);
void FUN_8006c274(int param_1, int param_2);
void FUN_80069ef8(void);
undefined4 FUN_8007e738(undefined4 param_1, undefined4 param_2);
uint *FUN_80081478(undefined4 param_1, undefined4 param_2);
void FUN_8007284c(undefined4 *param_1);
int FUN_8006ecd8(int param_1, undefined *param_2);
void FUN_8007f174(int param_1);
void FUN_800683fc(undefined4 param_1, undefined4 *param_2, int param_3);
undefined4 FUN_8008cf00(undefined *param_1, undefined *param_2);
int FUN_8003d7b8(int param_1, int param_2);

// External variables and labels
extern undefined4 DAT_801c9130;
extern undefined4 DAT_801c9120;
extern undefined4 DAT_801c9150;
extern void LAB_overlay0__8005a7fc(void);
extern void LAB_overlay0__8005a7b4(void);
extern bitfield_16_t DAT_overlay0__8005abe8;
extern undefined2 DAT_overlay0__8005ac02;
extern undefined4 DAT_overlay0__8005ac00;
extern undefined4 DAT_overlay0__8005ac1c;
extern undefined4 DAT_801c6c50;
extern undefined4 DAT_overlay0__8005a864;
extern undefined DAT_801c6c87;
extern undefined4 LAB_overlay0__8005ab56_2;
extern undefined4 LAB_overlay0__8005abc8;
extern undefined4 DAT_overlay0__8005b088;
extern undefined4 DAT_801d55aa;
extern undefined4 DAT_801d5e8c;
extern undefined4 DAT_801d5f58;
extern void **PTR_LAB_overlay0__8005a908_overlay0__8005b208;
extern undefined DAT_801d58b6;
extern undefined4 DAT_801d58bc;
extern undefined4 DAT_801d5944;
extern undefined4 DAT_801d5945;
extern undefined4 DAT_801d58c0;
extern undefined4 DAT_801d5946;
extern undefined4 DAT_801d5947;
extern undefined4 DAT_801d58dc;
extern void **PTR_s_LIS_02d_overlay0__8005a8d8_overlay0__8005b1f0;
extern undefined4 DAT_overlay0__8005b1c4;
extern undefined4 DAT_overlay0__8005b1cc;
extern void **PTR_DAT_overlay0__8005b220;
extern undefined4 DAT_801c90a8;
extern undefined4 DAT_801c90a0;
extern undefined4 DAT_80173894;
extern undefined4 DAT_8017389c;
extern undefined4 DAT_8017389e;
extern undefined4 DAT_801738a0;
extern undefined4 DAT_801c98e0;
extern undefined4 DAT_801c90c0;
extern undefined4 DAT_801c90c4;
extern undefined4 DAT_80178894;
extern undefined4 DAT_801cacf8;
extern undefined4 DAT_801da4b8;
extern undefined4 DAT_801da4f8;
extern undefined4 DAT_801da4fa;
extern undefined4 DAT_801c7016;
extern undefined4 DAT_801c70d2;
extern undefined4 DAT_801c70d7;
extern undefined4 DAT_801c70dc;
extern undefined4 DAT_801c70e0;
extern undefined4 DAT_801c70e4;
extern undefined4 DAT_801c70e9;
extern undefined4 DAT_801c70ee;
extern undefined4 DAT_801d5867;
extern undefined4 DAT_801d5868;
extern undefined4 DAT_801d5869;
extern undefined4 DAT_801d586a;
extern undefined4 DAT_801d586b;
extern undefined4 DAT_801d586c;
extern undefined4 DAT_801d58a0;
extern undefined4 DAT_801d5dd8;
extern undefined4 DAT_801d5dde;
extern undefined4 DAT_801d5de0;
extern undefined4 DAT_801d5de2;
extern undefined4 DAT_801d5ddc;
extern undefined4 DAT_801d5de4;
extern undefined4 DAT_801d5df0;
extern undefined4 DAT_80092878;
extern undefined4 DAT_80092870;
extern undefined4 DAT_800a9f00;
extern undefined4 DAT_overlay0__8005b1d8;
extern undefined4 DAT_overlay0__8005b1d2_2;
extern undefined4 DAT_overlay0__8005b1ce_2;
extern undefined4 DAT_overlay0__8005b1de_2;
extern undefined4 DAT_overlay0__8005b1e2_2;
extern undefined4 DAT_overlay0__8005b1dc;
extern undefined4 DAT_overlay0__8005b1c8;
extern undefined4 LAB_overlay0__8005b1d8;
extern undefined4 LAB_overlay0__8005b1d2_2;
extern undefined4 LAB_overlay0__8005b1ce_2;
extern undefined4 LAB_overlay0__8005b1de_2;
extern undefined4 LAB_overlay0__8005b1e2_2;
extern undefined4 DAT_overlay0__8005b150;
extern undefined4 DAT_801cd554;
extern undefined4 DAT_801d55cc;
extern void **PTR_s_gt_sn_overlay0__8005a94c_overlay0__8005b3d4;
extern undefined4 DAT_801c90ac;
extern undefined4 DAT_overlay0__8005b3d0;
extern undefined4 DAT_overlay0__8005b500;
extern undefined4 DAT_overlay0__8005b504;
extern undefined4 DAT_overlay0__8005b508;
extern undefined4 DAT_overlay0__8005b220;
extern undefined4 LAB_overlay0__8005a97a_2;
extern undefined4 LAB_80081b5c;
extern undefined4 LAB_8007f2fc;
extern undefined4 DAT_801d5e88;
extern undefined4 DAT_overlay0__8005b154;
extern undefined4 LAB_overlay0__8005b156;
extern undefined4 LAB_overlay0__8005b156_2;
extern undefined4 DAT_1f800000;
// Local array declarations for scratchpad memory (0x1f800000 region)
// These are used as arrays in the code but declared as simple types in the header
extern undefined4 DAT_1f800080_array[256];  // Array in scratchpad memory
extern undefined4 DAT_1f80008c_array[256];  // Array in scratchpad memory
extern undefined4 DAT_1f800074_array[256];  // Array in scratchpad memory
#define DAT_1f800080 DAT_1f800080_array
#define DAT_1f80008c DAT_1f80008c_array
#define DAT_1f800074 DAT_1f800074_array
extern undefined4 DAT_1f800070;
extern undefined4 DAT_1f8003ac;
extern undefined4 DAT_1f800398;
extern undefined4 DAT_1f800399;
extern undefined4 DAT_1f80039c;
extern undefined4 DAT_1f8003a0;
extern undefined4 DAT_1f8003a4;
extern undefined4 DAT_1f8003a8;
extern undefined4 DAT_1f8003ae;

uint FUN_overlay0__800448c8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  uVar2 = 0;

  if ((-1 < param_2) && (uVar2 = 1, 2 < *(byte *)(param_1 + 0x372))) {

    iVar4 = param_1 + 0x374;

    for (uVar2 = 1; (int)uVar2 < (int)(uint)*(byte *)(param_1 + 0x372); uVar2 = uVar2 + 1) {

      uVar1 = ((*(ushort *)(param_1 + 0x396) + 500) * 0x1000) / 0x3c;

      iVar3 = FUN_80086084(uVar1 * 0x1000,uVar1 >> 0x14,*(int *)(iVar4 + 0x54),
                           *(int *)(iVar4 + 0x54) >> 0x1f);

      iVar4 = iVar4 + 4;

      if (param_2 < iVar3) {
        return uVar2;
      }
    }

    uVar2 = (uint)*(byte *)(param_1 + 0x372);
  }

  return uVar2;
}

int FUN_overlay0__800449c8(int param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;

  if (*(short *)(param_1 + 0x78e) != 0) {

    if (*(char *)(param_1 + 0x618) == '\x01') {
      return -1;
    }

    return 1;
  }

  cVar4 = '\0';

  if (*(char *)(param_1 + 0x786) == '\0') {
    cVar4 = *(char *)(param_1 + 0x642);
  }

  if (cVar4 != '\0') {

    if (cVar4 != '\x01') {
      return -1;
    }

    bVar1 = *(byte *)(param_1 + 0x618);

    if (*param_2 != '\0') {
      if (bVar1 != 0) {
        return 0;
      }
      return -1;
    }

    if ((bVar1 == 0) && (*(short *)(param_1 + 0x610) != 0)) {

      iVar5 = FUN_overlay0__800448c8(param_1,*(undefined4 *)(param_1 + 0x6a4));
      if (iVar5 != 0) {
        return iVar5;
      }
      return 1;
    }

    cVar4 = *(char *)(param_1 + 0x61c);
    if (cVar4 == '\0') {

      cVar4 = param_2[1];
      if ('\0' < cVar4) {

        if (bVar1 < *(byte *)(param_1 + 0x372)) {
          *(undefined *)(param_1 + 0x61c) = 1;
          return *(byte *)(param_1 + 0x618) + 1;
        }
        cVar4 = param_2[1];
      }

      if (-1 < cVar4) {
        return -1;
      }

      if (1 < bVar1) {
        *(undefined *)(param_1 + 0x61c) = 1;
        return *(byte *)(param_1 + 0x618) - 1;
      }
    }
    else {

      *(char *)(param_1 + 0x61c) = cVar4 + -1;
      if (cVar4 != '\x01') {
        return -1;
      }

      if (param_2[1] != '\0') {
        *(undefined *)(param_1 + 0x61c) = 1;
      }
    }
    goto LAB_overlay0__80044e84;
  }

  uVar10 = (uint)*(byte *)(param_1 + 0x618);
  puVar11 = (undefined *)(param_1 + 0x370);

  if (*(char *)(param_1 + 0x61c) != '\0') {
    *(char *)(param_1 + 0x61c) = *(char *)(param_1 + 0x61c) + -1;
    goto LAB_overlay0__80044e84;
  }

  if (*param_2 != '\0') {
    if (uVar10 != 0) {
      return 0;
    }
    return -1;
  }

  if ((0x472 < *(int *)(param_1 + 0x6a4)) && (uVar10 == 0)) {
    return 1;
  }

  if (*(short *)(param_1 + 0x708) == 0) {

    if (-0x473 < *(int *)(param_1 + 0x6a4)) goto LAB_overlay0__80044af0;
    if (uVar10 != 0) {
      return 0;
    }
  }
  else {

    if (*(int *)(param_1 + 0x6a4) < 0x472) {
      if (uVar10 != 1) {
        return 1;
      }
      return -1;
    }

LAB_overlay0__80044af0:

    if ((uVar10 != 0) && (uVar10 < *(byte *)(param_1 + 0x372))) {

      uVar8 = ((*(ushort *)(param_1 + 0x108) + 500) * 0x1000) / 0x3c;
      iVar5 = FUN_80086084(uVar8 * 0x1000,uVar8 >> 0x14,*(int *)(puVar11 + uVar10 * 4 + 0x54),
                           *(int *)(puVar11 + uVar10 * 4 + 0x54) >> 0x1f);

      if (iVar5 < *(int *)(param_1 + 0x6a4)) {
        return uVar10 + 1;
      }
    }
  }

  if (*(char *)(param_1 + 0x619) != '\x01') {
    return -1;
  }

  if (uVar10 == 0) {
    return -1;
  }

  if (uVar10 == 1) {

    uVar8 = (uint)*(ushort *)(param_1 + 0x396);
    uVar7 = 0xffffb1e0;
  }
  else {

    uVar8 = 20000;
    if (uVar10 < *(byte *)(param_1 + 0x372)) {
      uVar8 = (uint)*(ushort *)(param_1 + 0x396);
    }

    uVar7 = (uint)*(ushort *)(puVar11 + (uVar10 - 2) * 2 + 0x28);

    if (0xc00 < *(short *)(param_1 + 0x708)) {
      uVar7 = *(ushort *)(puVar11 + (uVar10 - 2) * 2 + 0x28) - 500;
      uVar10 = *(ushort *)(param_1 + 0x394) + 500 & 0xffff;
      if ((int)uVar7 < (int)uVar10) {
        uVar7 = uVar10;
      }
    }
  }

  bVar2 = false;
  bVar3 = false;

  switch(*puVar11) {
  case 0:
  case 4:
  case 5:
    bVar2 = false;
    goto LAB_overlay0__80044c4c;
  case 1:
  case 2:
    bVar2 = true;
    bVar3 = false;
    break;
  case 3:
  case 6:
    bVar2 = true;
LAB_overlay0__80044c4c:
    bVar3 = true;
  }

  if ((int)*(short *)(param_1 + 0x6ac) < (int)uVar7) {

    iVar6 = *(byte *)(param_1 + 0x618) - 1;
    iVar5 = param_1;

    for (iVar9 = 0; iVar9 < 4; iVar9 = iVar9 + 1) {
      if ((bVar2) || (1 < iVar9)) {
        if ((!bVar3) && (1 < iVar9)) {
          return iVar6;
        }

        if (*(int *)(iVar5 + 0x468) == 0) goto LAB_overlay0__80044e84;

        if (*(short *)(param_1 + (iVar9 >> 1) * 0xd8 + 0x1fe) < *(short *)(iVar5 + 0x4a4)) {
          return -1;
        }
      }
      iVar5 = iVar5 + 0x68;
    }
  }
  else {

    iVar5 = 0;
    if ((int)uVar8 < (int)*(short *)(param_1 + 0x6ac)) {
      iVar6 = *(byte *)(param_1 + 0x618) + 1;
      iVar9 = param_1;

      for (; iVar5 < 4; iVar5 = iVar5 + 1) {
        if ((bVar2) || (1 < iVar5)) {
          if ((!bVar3) && (1 < iVar5)) {
            return iVar6;
          }

          if (*(int *)(iVar9 + 0x468) == 0) goto LAB_overlay0__80044e84;

          if (*(short *)(iVar9 + 0x4a4) <
              (short)-(short)((int)*(short *)(iVar9 + 0x48a) *
                              -(int)*(short *)(param_1 + (iVar5 >> 1) * 0xd8 + 0x1fc) >> 0xc)) {
            return -1;
          }
        }
        iVar9 = iVar9 + 0x68;
      }
    }
    else {
LAB_overlay0__80044e84:
      iVar6 = -1;
    }
  }

  return iVar6;
}

void FUN_overlay0__80044ea4
               (undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,uint param_4,
               uint param_5,uint param_6)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  iVar10 = (int)(short)DAT_80093950[param_6 & 0xfff];
  sVar1 = DAT_80093150[param_5 & 0xfff];
  iVar7 = (int)(short)DAT_80093150[param_4 & 0xfff];
  iVar8 = (int)(short)DAT_80093950[param_4 & 0xfff];
  iVar9 = (int)(short)DAT_80093950[param_5 & 0xfff];
  iVar6 = (int)(short)DAT_80093150[param_6 & 0xfff];

  iVar3 = FUN_8007596c(iVar10,(int)sVar1);
  iVar4 = FUN_8007596c(iVar6,(int)sVar1);

  uVar2 = FUN_8007596c(iVar10,iVar9);
  *param_2 = uVar2;
  uVar2 = FUN_8007596c(iVar6,iVar9);
  param_2[1] = uVar2;

  iVar5 = iVar3 * iVar7 + -iVar6 * iVar8;
  param_2[2] = -sVar1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  *param_1 = (short)(iVar5 >> 0xc);

  iVar5 = iVar4 * iVar7 + iVar10 * iVar8;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  param_1[1] = (short)(iVar5 >> 0xc);

  uVar2 = FUN_8007596c(iVar9,iVar7);
  iVar3 = iVar3 * iVar8 + iVar6 * iVar7;
  param_1[2] = uVar2;

  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  *param_3 = (short)(iVar3 >> 0xc);

  iVar3 = iVar4 * iVar8 + -iVar10 * iVar7;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  param_3[1] = (short)(iVar3 >> 0xc);

  uVar2 = FUN_8007596c(iVar9,iVar8);
  param_3[2] = uVar2;

  return;
}

int FUN_overlay0__800450a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;

  bVar1 = param_1 < 0x800;

  if (param_1 < -0x800) {
    iVar2 = param_1 + 0x1000;
    do {
      iVar3 = iVar2;
      iVar2 = iVar3 + 0x1000;
    } while (iVar3 < -0x800);
    return iVar3;
  }

  while (!bVar1) {
    bVar1 = param_1 + -0x1000 < 0x800;
    param_1 = param_1 + -0x1000;
  }

  return param_1;
}

int FUN_overlay0__800450e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_overlay0__800450a0(param_1);
  iVar2 = FUN_overlay0__800450a0(param_2);

  iVar1 = iVar1 - iVar2;

  if (iVar1 < 0x800) {

    if (iVar1 < -0x800) {
      iVar1 = iVar1 + 0x1000;
    }
  }
  else {

    iVar1 = iVar1 + -0x1000;
  }

  return iVar1;
}

void FUN_overlay0__80045138(int param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;

  iVar4 = 0x1000;

  if (*(short *)(param_1 + 0x618) != 0x101) goto LAB_overlay0__800452b8;

  uVar3 = *(uint *)(param_1 + 0x624);

  iVar4 = FUN_80086084(uVar3 << 0xc,((int)uVar3 >> 0x1f) << 0xc | uVar3 >> 0x14,
                       DAT_1f800080[(uint)*(byte *)(param_1 + 0x45c) * 0x24],
                       (int)DAT_1f800080[(uint)*(byte *)(param_1 + 0x45c) * 0x24] >> 0x1f);

  if (iVar4 < 0x1001) {

    iVar7 = *(int *)(param_1 + 0x3ac);
    if (iVar4 < iVar7) goto LAB_overlay0__800451dc;
  }
  else {

    iVar7 = 0x1000;
LAB_overlay0__800451dc:
    iVar4 = iVar7;
  }

  iVar6 = DAT_1f800080[(uint)*(byte *)(param_1 + 0x45c) * 0x24];

  uVar3 = ((uint)*(ushort *)(param_1 + 0x398) * 0x1000) / 0x3c;
  iVar7 = 0x1000;

  if ((int)uVar3 < iVar6) {
    iVar7 = FUN_80086084(uVar3 * 0x1000,uVar3 >> 0x14,iVar6,iVar6 >> 0x1f);
    if (iVar7 < *(int *)(param_1 + 0x3ac)) {
      iVar7 = *(int *)(param_1 + 0x3ac);
    }
  }

  if (iVar7 != iVar4) {

    iVar6 = ((DAT_1f800000 << 9) >> 0x10) * (int)*(short *)(param_1 + 0x708) >> 0xc;

    if (iVar4 < iVar7) {

      iVar4 = iVar4 + iVar6;
      bVar2 = iVar7 < iVar4;
    }
    else {

      iVar4 = iVar4 - iVar6;
      bVar2 = iVar4 < iVar7;
    }

    if (bVar2) {
      iVar4 = iVar7;
    }
  }

LAB_overlay0__800452b8:

  DAT_1f80008c[(uint)*(byte *)(param_1 + 0x45c) * 0x24] = iVar4;

  sVar1 = *(short *)(param_1 + 0x708);
  uVar5 = FUN_overlay0__8003533c(param_1,(int)sVar1);

  *(short *)(param_1 + 0x61e) = sVar1;

  FUN_80075a5c(iVar4,uVar5);

  return;
}

int FUN_overlay0__8004530c(int param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined uVar8;
  int iVar9;
  int iVar10;
  undefined uVar11;
  uint uVar12;
  int iVar13;

  iVar3 = FUN_80075a5c(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x373) * 4 + 0x634),
                       *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x618) * 4 + 0x3a4) * 0x28c >>
                       0xc);

  if (*(char *)(param_1 + 0x618) == '\0') {
    iVar3 = -iVar3;
  }

  iVar4 = FUN_80075bf4((int)*(short *)(param_1 + 0x708),0x498);

  iVar9 = iVar3 * 0x310;

  iVar13 = 0;
  if (*(char *)(param_1 + 0x618) == '\x01') {
    iVar13 = (int)*(short *)(param_1 + 0x708);
  }

  iVar10 = *(int *)(param_1 + 0x6a4);
  uVar12 = 0;

  if (0xd55 < iVar10) {
    if (iVar10 < 0x2c74) {

      uVar12 = 0x10aaa;
    }
    else if (iVar10 < 0x241e5) {

      lVar1 = (longlong)(iVar10 + -0x2c74) *
              (longlong)((int)((*(ushort *)(param_1 + 0x396) - 1000) * 0x1000) / 0x3c);
      iVar10 = FUN_80086084_5((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x21570,0,lVar1);
      uVar12 = iVar10 + 0x10aaa;
    }
    else {

      uVar12 = ((uint)*(ushort *)(param_1 + 0x396) * 0x1000) / 0x3c;
    }
  }

  iVar10 = (int)(iVar13 * uVar12) >> 0xc;
  if (iVar10 < 0x10a67) {
    iVar10 = 0;
  }

  iVar5 = FUN_80075bf4(iVar10 - *(int *)(param_1 + 0x624),0xf5);
  if (iVar5 < 0x1001) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 0x1000;
  }

  iVar6 = FUN_overlay0__8003533c(param_1,iVar5);
  *(short *)(param_1 + 0x61e) = (short)iVar5;

  uVar7 = FUN_80075a5c(iVar6,*(undefined4 *)(param_1 + 0x40c));
  iVar5 = FUN_80075a94(DAT_1f800000,uVar7);
  iVar5 = *(int *)(param_1 + 0x624) + iVar5;
  *(int *)(param_1 + 0x624) = iVar5;

  if ((iVar10 == 0) && (iVar5 < 0x8555)) {
    *(int *)(param_1 + 0x624) = iVar5 / 2;
  }

  if ((0x10aaa < *(int *)(param_1 + 0x624)) && (0x8555 < iVar3)) {
    iVar13 = FUN_80075bf4(iVar13,*(int *)(param_1 + 0x710) - iVar6);
    iVar4 = iVar4 + (iVar13 * *(int *)(param_1 + 0x624)) / iVar3;
  }

  uVar11 = 0;
  uVar8 = 0;

  if (0x1aaa < *(int *)(param_1 + 0x624)) {
    uVar8 = (undefined)(*(short *)(param_1 + 0x61e) * 3 + 0x1000 >> 7);
    uVar11 = (undefined)((*(int *)(param_1 + 0x624) << 6) / 0x42aaa);
  }

  *(undefined *)(param_1 + 0x758) = uVar8;
  *(undefined *)(param_1 + 0x757) = uVar11;
  *(undefined *)(param_1 + 0x759) = 0;
  *(undefined2 *)(param_1 + 0x746) = 0;

  if ((*(short *)(param_1 + 0x60a) != 0) && (*(short *)(param_1 + 0x612) != 0)) {

    *(undefined *)(param_1 + 0x759) = 0x40;

    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    uVar2 = FUN_80075bf4(iVar3,0x3c);
    *(undefined2 *)(param_1 + 0x746) = uVar2;
  }

  return iVar4 - iVar9 / 0x53555;
}

void FUN_overlay0__80045688(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar6 = 4;

  for (iVar7 = 0; iVar7 < param_2; iVar7 = iVar7 + 1) {

    piVar3 = (int *)(iVar6 + 0x1f800000);

    DAT_1f800000 = (int)*(short *)(param_1 + 0x72a);

    iVar5 = 0x460;

    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {

      iVar1 = FUN_80075a5c((int)*(short *)(param_1 + (iVar4 >> 1) * 2 + 0x410),piVar3[1] + piVar3[2]
                          );

      piVar3[3] = -iVar1;

      iVar2 = *(int *)(param_1 + iVar5 + 0x44);

      if (iVar2 != 0) {
        if (iVar2 < 1) {

          iVar2 = *piVar3;
        }
        else {

          iVar2 = -*piVar3;
        }

        piVar3[3] = -iVar1 + iVar2;
      }

      piVar3 = piVar3 + 7;
      iVar5 = iVar5 + 0x68;
    }

    iVar6 = iVar6 + 0x90;
    param_1 = param_1 + 0xb40;
  }

  return;
}

/*
 * AdjustWheelPositionsForActiveDifferential (Original: FUN_overlay0__800457b0)
 *
 * Purpose:
 *   Adjusts wheel position/speed values in scratchpad for vehicles with active
 *   differential (types 6 or 7). Only runs when vehicle speed exceeds 0x2c73.
 *   Balances left/right wheel values toward their average to reduce slip before
 *   traction and differential physics run. Called after FUN_overlay0__80045688
 *   (wheel heights), before FUN_overlay0__80045ae8 (traction physics).
 *
 * Parameters:
 *   param_1: Base pointer to vehicle data (each vehicle = 0xb40 bytes)
 *   param_2: Number of vehicles to process
 *
 * Conditions:
 *   - Differential type (vehicle+0x39c+10 per axle) must be 6 or 7
 *   - Vehicle speed (vehicle+0x6d0) must be > 0x2c73
 *
 * Per axle:
 *   - Averages left/right wheel positions (offset +0x18) to get target
 *   - Steering (vehicle+0x638) biases the target
 *   - Adjusts scratchpad values (+0xc) to balance wheels toward target
 *
 * Uses scratchpad 0x1f800000 (stride 0x90 per vehicle).
 */
void FUN_overlay0__800457b0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;

  iVar13 = 0;
  iVar12 = 4;
  iVar11 = 0x1f800000;

  do {
    iVar8 = 0;

    if (param_2 <= iVar13) {
      return;
    }

    iVar3 = 0x1c;
    iVar14 = 0x4c8;
    iVar10 = 0x460;

    DAT_1f800000 = (int)*(short *)(param_1 + 0x72a);

    iVar9 = param_1 + 0x39c;
    iVar15 = iVar12 + 0x1f800000;

    for (; iVar8 < 2; iVar8 = iVar8 + 1) {

      bVar1 = *(byte *)(param_1 + 0x39c + iVar8 + 10);

      if (((5 < bVar1) && (bVar1 < 8)) && (0x2c73 < *(int *)(param_1 + 0x6d0))) {

        iVar4 = (int)*(short *)(iVar11 + 0x90) * *(int *)(iVar9 + 0xc) >> 0xc;

        if (iVar4 != 0) {

          iVar7 = param_1 + 0x2c + iVar14;
          iVar6 = iVar12 + 0x1f800000 + iVar3;

          iVar5 = (*(int *)(param_1 + 0x2c + iVar10 + 0x18) + *(int *)(iVar7 + 0x18)) / 2;

          iVar2 = iVar5;
          if (iVar5 < 0) {
            iVar2 = iVar5 + 7;
          }
          iVar2 = iVar2 >> 3;

          if (*(short *)(param_1 + 0x638) < 1) {
            if (*(short *)(param_1 + 0x638) < 0) {
              iVar2 = -iVar2;
              goto LAB_overlay0__800458d0;
            }
          }
          else {
LAB_overlay0__800458d0:
            iVar5 = iVar5 + iVar2;
          }

          iVar2 = iVar4 * 7;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xf;
          }
          iVar4 = iVar4 * 9;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xf;
          }

          iVar7 = *(int *)(iVar7 + 0x18);

          if (iVar7 < iVar5) {

            *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + (iVar2 >> 4);
            iVar4 = *(int *)(iVar15 + 0xc) - (iVar4 >> 4);
          }
          else {
            if (iVar7 <= iVar5) goto LAB_overlay0__80045950;

            *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) - (iVar4 >> 4);
            iVar4 = *(int *)(iVar15 + 0xc) + (iVar2 >> 4);
          }

          *(int *)(iVar15 + 0xc) = iVar4;
        }
      }

LAB_overlay0__80045950:

      iVar3 = iVar3 + 0x38;
      iVar15 = iVar15 + 0x38;
      iVar14 = iVar14 + 0xd0;
      iVar10 = iVar10 + 0xd0;
      iVar9 = iVar9 + 4;
    }

    iVar12 = iVar12 + 0x90;
    iVar11 = iVar11 + 0x90;
    param_1 = param_1 + 0xb40;
    iVar13 = iVar13 + 1;
  } while( true );
}

int FUN_overlay0__800459a8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)*(short *)(param_1 + 0x64a);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }

  iVar3 = 0x1000;
  if (0x400 < iVar2) {
    if (iVar2 < 0x1000) {

      iVar3 = 0x1400 - iVar2;
    }
    else {

      iVar3 = 0x400;
    }
  }

  if ((*(short *)(param_1 + 0x376) == 0) ||
     (((*(short *)(param_1 + 0x618) != 0x100 && (*(char *)(param_1 + 0x619) != '\0')) &&
      ((iVar3 != 0x1000 ||
       ((((*(char *)(param_1 + 0x619) != '\x02' && (*(short *)(param_1 + 0x612) < 0xc01)) &&
         ((param_2 < 1 || (param_2 + param_4 < 1)))) && ((-1 < param_2 || (-1 < param_2 + param_4)))
        ))))))) {

    iVar2 = *(int *)(param_1 + 0x638) - *(int *)(param_1 + 0x634);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }

    uVar1 = FUN_80075bf4((int)*(short *)(param_1 + 0x374),iVar2);
    iVar2 = FUN_80075bf4(iVar3,uVar1);

    if ((0xfff < iVar2) && (iVar2 = 0x1000, *(short *)(param_1 + 0x376) != 0)) {
      iVar2 = 0x7fffffff;
    }
  }
  else {

    iVar2 = 0x7fffffff;
  }

  return iVar2;
}

/*
 * ProcessTractionPhysics (Original: FUN_overlay0__80045ae8)
 *
 * Purpose:
 *   Processes traction and drive system physics for multiple vehicles. Computes
 *   acceleration force, grip, and torque distribution to front/rear axles based
 *   on drive type. Called after FUN_overlay0__800457b0 (wheel positions), before
 *   FUN_overlay0__800465e0 (differential physics) in the vehicle physics pipeline.
 *
 * Parameters:
 *   param_1: Base pointer to vehicle data array (each vehicle = 0xb40 bytes)
 *   param_2: Number of vehicles to process
 *
 * Drive types (vehicle+0x39c):
 *   0: RWD (rear) - torque to rear only
 *   1: RWD - sets flags 4ef|8, 557|8
 *   2: AWD - sets flags, distributes torque front/rear
 *   3, 6: 4WD - sets flags 4ef|4, 557|4, 5bf|8, 627|8
 *   4, 5: 4WD variants - grip-based distribution via FUN_overlay0__800459a8
 *
 * Drive mode (vehicle+0x39e):
 *   1: FUN_overlay0__8004530c - acceleration force
 *   2: FUN_overlay0__80045138 - control values
 *   else: FUN_overlay0__800353dc - related values
 *
 * Key outputs:
 *   +0x660, +0x664: Wheel speeds (left/right or front/rear)
 *   +0x476: Wheel delta/slip per axle
 *   +0x668: Wheel lock flag (ABS/TC)
 *   Scratchpad +0x74, +0x78: Torque to front/rear axles
 *
 * local_3c states: 0=normal, 1=slip, 2=AWD split, 3=wheel lock
 */
void FUN_overlay0__80045ae8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int local_50 [4];
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;

  iVar14 = 0x1f800000;

  local_40 = 0;
  local_30 = 0;
  local_2c = param_1;

  do {
    iVar1 = local_2c;

    if (param_2 <= local_40) {
      return;
    }

    iVar12 = local_2c + 0x2c;

    DAT_1f800000 = (int)*(short *)(local_2c + 0x72a);

    pbVar13 = (byte *)(local_2c + 0x39c);

    if (*(char *)(local_2c + 0x645) == '\0') goto switchD_overlay0__80045b90_caseD_7;

    switch(*(undefined *)(local_2c + 0x39c)) {
    case 0:
    case 4:
    case 5:

      bVar2 = *(byte *)(local_2c + 0x5bf);
      goto LAB_overlay0__80045c08;

    case 1:

      *(byte *)(local_2c + 0x4ef) = *(byte *)(local_2c + 0x4ef) | 8;
      *(byte *)(local_2c + 0x557) = *(byte *)(local_2c + 0x557) | 8;
      break;

    case 2:

      *(byte *)(local_2c + 0x4ef) = *(byte *)(local_2c + 0x4ef) | 8;
      *(byte *)(local_2c + 0x557) = *(byte *)(local_2c + 0x557) | 8;

      bVar2 = *(byte *)(local_2c + 0x5bf) | 4;
      bVar8 = *(byte *)(local_2c + 0x627) | 4;
      goto LAB_overlay0__80045c14;

    case 3:
    case 6:

      *(byte *)(local_2c + 0x4ef) = *(byte *)(local_2c + 0x4ef) | 4;
      bVar2 = *(byte *)(local_2c + 0x5bf);
      *(byte *)(local_2c + 0x557) = *(byte *)(local_2c + 0x557) | 4;

LAB_overlay0__80045c08:

      bVar2 = bVar2 | 8;
      bVar8 = *(byte *)(local_2c + 0x627) | 8;

LAB_overlay0__80045c14:

      *(byte *)(local_2c + 0x5bf) = bVar2;
      *(byte *)(local_2c + 0x627) = bVar8;
    }
switchD_overlay0__80045b90_caseD_7:

    if (*(char *)(local_2c + 0x39e) == '\x01') {

      iVar3 = FUN_overlay0__8004530c(iVar12);

      if (*(char *)(iVar1 + 0x645) == '\0') {
        iVar3 = 0;
      }
    }
    else {

      iVar3 = 0;

      if (*(char *)(local_2c + 0x645) != '\0') {

        if (*(char *)(local_2c + 0x39e) == '\x02') {

          FUN_overlay0__80045138(iVar12);
          iVar3 = 0;
        }
        else {

          iVar3 = FUN_overlay0__800353dc(iVar12,(int)*(short *)(local_2c + 0x734));
        }

        if (*(char *)(iVar1 + 0x645) != '\x01') {

          if (*(char *)(iVar1 + 0x645) == '\x03') {

            iVar5 = (int)*(short *)(iVar1 + 0x420);
          }
          else if (iVar3 < 1) {

            iVar5 = (int)*(short *)(iVar1 + 0x422);
          }
          else {

            uVar6 = FUN_overlay0__800392d8(*(int *)(iVar14 + 0x7c) - *(int *)(iVar14 + 0x80));
            iVar5 = FUN_80075bf4(uVar6,iVar3);
          }

          if (*(int *)(iVar14 + 0x7c) < *(int *)(iVar14 + 0x80)) {
            iVar5 = -iVar5;
          }

          uVar6 = FUN_80075a5c(iVar3 - iVar5,*(undefined4 *)(iVar1 + 0x438));
          iVar3 = FUN_80075a94(DAT_1f800000,uVar6);

          *(int *)(iVar1 + 0x650) = *(int *)(iVar1 + 0x650) + iVar3;
          iVar3 = iVar5;
        }
      }
    }

    uVar4 = (uint)*(byte *)(iVar1 + 0x644);
    if (uVar4 == 0) {

      iVar3 = -iVar3;
      uVar4 = (uint)*(byte *)(iVar1 + 0x644);
    }

    iVar5 = FUN_80075a5c(iVar3,*(undefined4 *)(pbVar13 + uVar4 * 4 + 0x34));

    local_50[0] = *(int *)(iVar14 + 0x10) + *(int *)(iVar14 + 0x2c);

    local_3c = 0;

    local_50[1] = *(int *)(iVar14 + 0x48) + *(int *)(iVar14 + 100);

    iVar3 = 0;

    switch(*pbVar13) {
    case 2:
      local_3c = 1;
      break;
    case 3:
      local_3c = 2;
      break;
    case 4:
    case 5:
    case 6:

      if (*pbVar13 == 6) {

        iVar10 = FUN_80075a5c((int)*(short *)(iVar1 + 0x3a0),iVar5);
      }
      else if (*pbVar13 == 4) {

        if (((*(short *)(iVar1 + 0x3a0) == 0x1000) || (iVar5 < 1)) ||
           (*(short *)(iVar1 + 0x644) == 0x100)) {

          iVar10 = 0x7fffffff;
        }
        else {

          iVar10 = FUN_80075bf4((int)*(short *)(iVar1 + 0x3a0),iVar5);
        }
      }
      else {

        iVar10 = FUN_overlay0__800459a8(iVar12,iVar5,local_50[0],local_50[1]);
        if (iVar10 != 0x7fffffff) {

          iVar10 = FUN_80075bf4(iVar10,iVar5);
          iVar10 = iVar10 / 2;
        }
      }

      if (*(char *)(iVar1 + 0x668) == '\0') {
LAB_overlay0__80045eec:

        if ((iVar10 == 0x7fffffff) &&
           (iVar10 = (int)*(short *)(iVar1 + 0x3a2),
           *(int *)(iVar1 + 0x664) - *(int *)(iVar1 + 0x660) < 0)) {

          iVar10 = -iVar10;
        }
        iVar3 = iVar10;
        if (iVar10 != 0) {
          local_3c = 1;
        }
      }
      else {

        if (iVar10 == 0x7fffffff) {
          local_3c = 3;
        }
        else {

          iVar3 = (local_50[0] - local_50[1]) - iVar5;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }

          if (*(short *)(iVar1 + 0x3a2) < iVar3) {

            *(undefined *)(iVar1 + 0x668) = 0;
          }
          else {
            local_3c = 3;
          }
        }
        iVar3 = 0;
        if (*(char *)(iVar1 + 0x668) == '\0') goto LAB_overlay0__80045eec;
      }

      if (local_3c != 0) {
        *(byte *)(iVar1 + 0x4ef) = *(byte *)(iVar1 + 0x4ef) | 4;
        *(byte *)(iVar1 + 0x557) = *(byte *)(iVar1 + 0x557) | 4;
      }
    }

    iVar10 = 0;

    if (((*(char *)(iVar1 + 0x39e) != '\x01') && (*(char *)(iVar1 + 0x645) == '\x01')) &&
       (iVar10 = (int)*(short *)(iVar1 + 0x3a4) *
                 *(int *)(pbVar13 + (uint)*(byte *)(iVar1 + 0x644) * 4 + 0x34) >> 0xc,
       *(char *)(iVar1 + 0x39e) == '\x02')) {

      iVar10 = *(int *)(iVar14 + 0x8c) * iVar10 >> 0xc;
    }

    if (local_3c == 3) {

      uVar4 = iVar5 + local_50[0] + local_50[1];

      iVar10 = *(int *)(iVar1 + 0x42c) + *(int *)(iVar1 + 0x430) + iVar10;

      uVar6 = FUN_80086084(uVar4 * 0x10000,((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10,iVar10,
                           iVar10 >> 0x1f);

      iVar12 = FUN_80075a94(DAT_1f800000,uVar6);

      iVar3 = *(int *)(iVar1 + 0x660);

      if (((DAT_801d5866 == local_3c) && (*pbVar13 == 5)) && (0xc00 < *(short *)(iVar1 + 0x63e))) {

        *(int *)(iVar1 + 0x660) = iVar3 + iVar12;
      }
      else {

        *(int *)(iVar1 + 0x660) = *(int *)(iVar1 + 0x660) + (*(short *)(iVar1 + 0x50a) + iVar12) / 2;
      }

      if ((*(int *)(iVar14 + 4) + *(int *)(iVar14 + 0x20) + *(int *)(iVar14 + 0x3c) +
           *(int *)(iVar14 + 0x58) != 0) &&
         ((iVar10 = FUN_80075bf4(*(undefined4 *)(iVar1 + 0x660),iVar3), iVar10 < 0 || (iVar3 == 0)))
         ) {

        *(undefined4 *)(iVar1 + 0x660) = 0;
        iVar12 = 0;
      }

      *(short *)(iVar1 + 0x5da) = (short)iVar12;
      *(short *)(iVar1 + 0x50a) = (short)iVar12;
      *(undefined4 *)(iVar1 + 0x664) = *(undefined4 *)(iVar1 + 0x660);

LAB_overlay0__8004628c:

      *(int *)(iVar14 + 0x74) = iVar5 / 2;
      *(int *)(iVar14 + 0x78) = iVar5 / 2;
      goto LAB_overlay0__80046584;
    }

    if (local_3c == 2) {

      iVar3 = (*(int *)(iVar1 + 0x660) + *(int *)(iVar1 + 0x664)) / 2;

      uVar4 = iVar5 + local_50[0] + local_50[1];

      iVar10 = *(int *)(iVar1 + 0x42c) + *(int *)(iVar1 + 0x430) + iVar10;

      uVar6 = FUN_80086084(uVar4 * 0x10000,((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10,iVar10,
                           iVar10 >> 0x1f);

      iVar12 = FUN_80075a94(uVar6,DAT_1f800000);

      iVar10 = iVar3 + (*(short *)(iVar1 + 0x50a) + iVar12) / 2;

      if ((*(int *)(iVar14 + 4) + *(int *)(iVar14 + 0x20) + *(int *)(iVar14 + 0x3c) +
           *(int *)(iVar14 + 0x58) != 0) &&
         ((iVar7 = FUN_80075bf4(iVar10,iVar3), iVar7 < 0 || (iVar3 == 0)))) {

        iVar10 = 0;
        iVar12 = 0;
      }

      *(short *)(iVar1 + 0x50a) = (short)iVar12;

      iVar7 = *(int *)(iVar1 + 0x660) - *(int *)(iVar1 + 0x664);

      iVar12 = FUN_80075a5c((int)*(short *)(iVar1 + 0x3a0),iVar7);

      uVar6 = FUN_80075b04((local_50[0] - local_50[1]) - iVar12,*(undefined4 *)(iVar1 + 0x434),
                           0xfffffffc);

      iVar12 = FUN_80075a94(uVar6,DAT_1f800000);

      iVar7 = iVar7 / 2;

      iVar11 = iVar7 + (*(short *)(iVar1 + 0x5da) + iVar12) / 2;

      iVar3 = iVar10 + iVar11;

      if (iVar7 * iVar11 < 0) {

        iVar11 = 0;
        iVar12 = -iVar7;
        iVar3 = iVar10;
      }

      *(int *)(iVar1 + 0x660) = iVar3;
      *(int *)(iVar1 + 0x664) = iVar10 - iVar11;
      *(short *)(iVar1 + 0x5da) = (short)iVar12;

      goto LAB_overlay0__8004628c;
    }

    local_38 = 0;

    switch(*pbVar13) {
    case 0:

      local_50[2] = 0;
      local_50[3] = *(int *)(iVar1 + 0x430) + iVar10;
      *(undefined4 *)(iVar14 + 0x74) = 0;
      *(int *)(iVar14 + 0x78) = iVar5;
      break;

    case 1:

      local_50[3] = 0;
      local_50[2] = *(int *)(iVar1 + 0x42c) + iVar10;
      *(int *)(iVar14 + 0x74) = iVar5;
      *(undefined4 *)(iVar14 + 0x78) = 0;
      break;

    case 2:

      local_50[2] = *(int *)(iVar1 + 0x42c) + iVar10;
      local_50[3] = *(int *)(iVar1 + 0x430);

      iVar10 = FUN_80075a5c((int)*(short *)(iVar1 + 0x3a0),
                            *(int *)(iVar1 + 0x660) - *(int *)(iVar1 + 0x664));

      *(int *)(iVar14 + 0x74) = iVar5 - iVar10;
      goto LAB_overlay0__80046368;

    case 4:
    case 5:
    case 6:

      local_50[2] = *(int *)(iVar1 + 0x42c);
      local_50[3] = *(int *)(iVar1 + 0x430) + iVar10;

      iVar10 = iVar5 - iVar3;

      *(int *)(iVar14 + 0x74) = iVar3;

LAB_overlay0__80046368:
      *(int *)(iVar14 + 0x78) = iVar10;
    }

    iVar3 = 0;

    if (local_3c == 1) {
      local_38 = *(int *)(iVar1 + 0x660) - *(int *)(iVar1 + 0x664);
    }

    local_34 = local_30;

    iVar5 = iVar12;
    iVar10 = local_30;

    for (; iVar3 < 2; iVar3 = iVar3 + 1) {
      iVar7 = 0;

      if (pbVar13[iVar3 + 10] != 0) {

        iVar11 = local_50[iVar3 + 2];

        iVar15 = *(int *)(iVar5 + 0x634);

        if (iVar11 != 0) {

          uVar4 = *(int *)((int)&DAT_1f800074 + iVar10) + local_50[iVar3];

          uVar6 = FUN_80086084(uVar4 * 0x10000,((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10,iVar11,
                               iVar11 >> 0x1f);

          iVar7 = FUN_80075a94(uVar6,DAT_1f800000);
        }

        iVar11 = iVar3 * 2 + 1;

        iVar9 = *(int *)(iVar5 + 0x634) + (*(short *)(iVar12 + iVar11 * 0x68 + 0x476) + iVar7) / 2;
        *(int *)(iVar5 + 0x634) = iVar9;

        if ((*(int *)((int)&DAT_1f800004 + iVar3 * 0x38 + local_34) +
             *(int *)((int)&DAT_1f800004 + iVar11 * 0x1c + local_34) != 0) &&
           ((iVar11 = FUN_80075bf4(iVar9,iVar15), iVar11 < 0 || (iVar15 == 0)))) {

          *(undefined4 *)(iVar5 + 0x634) = 0;
          iVar7 = 0;
        }

        *(short *)(iVar12 + (iVar3 * 2 + 1) * 0x68 + 0x476) = (short)iVar7;
      }

      iVar10 = iVar10 + 4;
      iVar5 = iVar5 + 4;
    }

    if ((local_3c == 1) &&
       ((((iVar3 = *(int *)(iVar1 + 0x660) - *(int *)(iVar1 + 0x664), 0 < local_38 && (iVar3 < 1))
         || ((local_38 < 0 && (-1 < iVar3)))) &&
        (*(undefined4 *)(iVar12 + (1 - (uint)*(byte *)(iVar1 + 0x39f)) * 4 + 0x634) =
              *(undefined4 *)(iVar12 + (uint)*(byte *)(iVar1 + 0x39f) * 4 + 0x634), *pbVar13 - 4 < 2
        )))) {

      *(undefined *)(iVar1 + 0x668) = 1;
    }

LAB_overlay0__80046584:

    iVar14 = iVar14 + 0x90;
    local_30 = local_30 + 0x90;
    local_2c = local_2c + 0xb40;
    local_40 = local_40 + 1;
  } while( true );
}

/*
 * ProcessDifferentialTorqueDistribution (Original: FUN_overlay0__800465e0)
 *
 * Purpose:
 *   Processes differential physics for multiple vehicles. Distributes torque/speed
 *   between left and right wheels on each axle based on differential type. Called
 *   after FUN_overlay0__80045ae8 (traction physics) in the vehicle physics pipeline.
 *
 * Parameters:
 *   param_1: Base pointer to vehicle data array (each vehicle = 0xb40 bytes)
 *   param_2: Number of vehicles to process
 *
 * Vehicle layout (param_1 + offset):
 *   +0x2c:   Axle/wheel data (0x68 bytes per wheel pair)
 *   +0x39c:  Differential config; byte at +10 per axle = differential type
 *   +0x72a:  Ratio value (stored in DAT_1f800000 for fixed-point math)
 *
 * Differential types (config byte):
 *   1: Locked   - both wheels forced to same speed (uVar9 == 1 path)
 *   3, 4: Limited slip - clamped adjustment based on speed difference
 *   5: Open     - similar to 3/4 with different limits
 *
 * Per-axle outputs:
 *   +0x476: Wheel delta/slip (short)
 *   +0x478: Wheel speed/position (int)
 *   +0x61a: Lock flag (cleared when slip exceeds threshold)
 *
 * Uses scratchpad 0x1f800000 for intermediate values.
 */
void FUN_overlay0__800465e0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int **ppiVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int **local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;

  local_50 = &local_68;

  local_60 = 0;
  local_34 = 4;
  local_30 = 0;
  local_2c = param_1;

  do {

    if (param_2 <= local_60) {
      return;
    }

    local_58 = 0;
    local_4c = 0x68;
    local_44 = 0;
    local_3c = 0;

    iVar13 = local_2c + 0x2c;

    iVar5 = local_2c + 0x39c;

    local_38 = 0x1c;

    piVar6 = (int *)(local_34 + 0x1f800000);

    DAT_1f800000 = (int)*(short *)(local_2c + 0x72a);

    iVar12 = iVar13;
    iVar14 = iVar13;

    local_5c = iVar5;
    local_54 = piVar6;
    local_48 = iVar13;
    local_40 = iVar5;

    for (; local_58 < 2; local_58 = local_58 + 1) {

      iVar2 = (int)local_54 + local_38;

      iVar11 = *(int *)(iVar12 + 0x478) - *(int *)(iVar13 + local_4c + 0x478);

      bVar1 = false;

      local_68 = piVar6;
      local_64 = iVar2;

      switch(*(undefined *)(local_5c + local_58 + 10)) {
      case 1:
switchD_overlay0__80046718_caseD_1:

        bVar1 = true;
        break;
      case 3:
      case 4:

        iVar8 = *(int *)((int)&DAT_1f800074 + local_44 + local_30);

        if (iVar8 < 0) {

          uVar3 = *(undefined4 *)(local_5c + local_44 + 0x1c);
          iVar8 = -iVar8;
        }
        else {

          uVar3 = *(undefined4 *)(iVar5 + 0x14);
        }

        iVar8 = FUN_80075bf4(uVar3,iVar8);

        if (iVar8 < *(int *)(iVar5 + 0xc)) {
          iVar8 = *(int *)(iVar5 + 0xc);
        }

        if (*(char *)(iVar14 + 0x61a) != '\0') {

          iVar4 = piVar6[3] - *(int *)(iVar2 + 0xc);

          if ((iVar4 <= iVar8 * 2) && (iVar8 * -2 <= iVar4)) {
            goto switchD_overlay0__80046718_caseD_1;
          }

          *(undefined *)(iVar14 + 0x61a) = 0;
        }

        if (iVar11 < 1) {
          if (-1 < iVar11) break;

          piVar6[3] = piVar6[3] + iVar8;
          iVar8 = *(int *)(iVar2 + 0xc) - iVar8;
        }
        else {

          piVar6[3] = piVar6[3] - iVar8;
          iVar8 = *(int *)(iVar2 + 0xc) + iVar8;
        }
        goto LAB_overlay0__8004689c;
      case 5:

        iVar8 = FUN_80075bf4(iVar11,iVar11);

        if (*(int *)(iVar5 + 0xc) < iVar8) {
          iVar8 = *(int *)(iVar5 + 0xc);
        }

        iVar8 = FUN_80075bf4(*(undefined4 *)(iVar5 + 0x14),iVar8);

        if (iVar11 < 1) {
          if (-1 < iVar11) break;

          piVar6[3] = piVar6[3] + iVar8;
          iVar8 = *(int *)(iVar2 + 0xc) - iVar8;
        }
        else {

          piVar6[3] = piVar6[3] - iVar8;
          iVar8 = *(int *)(iVar2 + 0xc) + iVar8;
        }

LAB_overlay0__8004689c:

        *(int *)(iVar2 + 0xc) = iVar8;
      }

      uVar9 = (uint)*(byte *)(local_5c + local_58 + 10);

      if (bVar1) {
        uVar9 = 1;
      }

      if (uVar9 == 0) {

        ppiVar10 = local_50;

        for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {

          iVar7 = iVar13 + (local_3c + iVar2) * 0x68 + 0x460;

          uVar3 = FUN_80075b04((*ppiVar10)[3],*(undefined4 *)(iVar5 + 0x88),0xfffffffc);
          iVar11 = FUN_80075a94(DAT_1f800000,uVar3);

          iVar4 = *(int *)(iVar7 + 0x18);

          iVar8 = iVar4 + (iVar11 + *(short *)(iVar7 + 0x16)) / 2;

          if (**ppiVar10 != 0) {
            if (iVar4 < 1) {
              if ((-1 < iVar4) || (0 < iVar8)) goto LAB_overlay0__80046990;
            }
            else if (iVar8 < 0) {
LAB_overlay0__80046990:

              iVar8 = 0;
              iVar11 = 0;
            }
          }

          ppiVar10 = ppiVar10 + 1;

          *(short *)(iVar7 + 0x16) = (short)iVar11;
          *(int *)(iVar7 + 0x18) = iVar8;
        }
      }
      else if (uVar9 == 1) {

        uVar3 = FUN_80075a5c((int)*(short *)(local_40 + 0x74),*(undefined4 *)(local_48 + 0x634));

        *(undefined4 *)(iVar13 + local_4c + 0x478) = uVar3;
        *(undefined4 *)(iVar12 + 0x478) = uVar3;

        *(undefined2 *)(iVar12 + 0x476) = 0;
      }
      else {

        uVar3 = FUN_80075b04(local_68[3] - *(int *)(local_64 + 0xc),*(undefined4 *)(iVar5 + 0x88),0xfffffffc);
        iVar2 = FUN_80075a94(uVar3,DAT_1f800000);

        iVar8 = iVar11 / 2 + (*(short *)(iVar12 + 0x476) + iVar2) / 2;

        if (iVar11 * iVar8 < 0) {

          iVar8 = 0;
          iVar2 = 0;

          if (uVar9 - 3 < 2) {
            *(undefined *)(iVar14 + 0x61a) = 1;
          }
        }

        *(short *)(iVar12 + 0x476) = (short)iVar2;

        iVar2 = FUN_80075a5c((int)*(short *)(local_40 + 0x74),*(undefined4 *)(local_48 + 0x634));

        *(int *)(iVar12 + 0x478) = iVar2 + iVar8;
        *(int *)(iVar13 + local_4c + 0x478) = iVar2 - iVar8;
      }

      iVar12 = iVar12 + 0xd0;
      iVar14 = iVar14 + 1;
      iVar5 = iVar5 + 4;
      piVar6 = piVar6 + 0xe;
      local_4c = local_4c + 0xd0;
      local_48 = local_48 + 4;
      local_44 = local_44 + 4;
      local_40 = local_40 + 2;
      local_3c = local_3c + 2;
      local_38 = local_38 + 0x38;
    }

    local_34 = local_34 + 0x90;
    local_30 = local_30 + 0x90;
    local_2c = local_2c + 0xb40;
    local_60 = local_60 + 1;
  } while( true );
}

void FUN_overlay0__80046b58(undefined4 param_1,undefined4 param_2)

{

  FUN_overlay0__80045688((int)param_1,(int)param_2);

  FUN_overlay0__800457b0(param_1,param_2);

  FUN_overlay0__80045ae8(param_1,param_2);

  FUN_overlay0__800465e0(param_1,param_2);

  return;
}

void FUN_overlay0__80046fb0(int param_1,uint param_2)

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

  return;
}

void FUN_overlay0__80047024(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  uint *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined auStack_48 [16];
  int local_38;
  uint local_34;

  iVar9 = *(int *)(param_3 + 8) + 0x10;

  if (param_2 != 0) {

    if (*(int *)(param_2 + 0x10) != 0) {

      FUN_8006ac68(auStack_48,6);

      FUN_8007da80(auStack_48,&DAT_801c9130);

      iVar8 = 2;

      if (param_5 != 0) {
        iVar8 = 0x22 - (param_4 >> 2);
      }

      local_38 = iVar9;

      iVar1 = FUN_8006ad3c(auStack_48,*(undefined4 *)(param_2 + 0x10),iVar8);

      iVar6 = 0x160 - iVar1 >> 1;

      psVar2 = (short *)FUN_8007d024(iVar9,param_4 * 0xff >> 7);

      uVar7 = param_4 * 0x66 >> 7;

      *psVar2 = (short)iVar6 + 1;
      psVar2[1] = 0x4e;
      psVar2[2] = (short)iVar1;
      psVar2[3] = 2;

      local_34 = uVar7 | uVar7 << 8 | uVar7 << 0x10;

      FUN_8006ac90(auStack_48,*(undefined4 *)(param_2 + 0x10),iVar6,0x4c,iVar8);

      local_34 = 0;

      FUN_8006ac90(auStack_48,*(undefined4 *)(param_2 + 0x10),iVar6 + 2,0x4f,iVar8);
    }

    uVar7 = *(uint *)(param_2 + 0xc);

    puVar3 = (uint *)FUN_8007e0b0(iVar9);

    uVar7 = (int)((uVar7 & 0xff) * param_4) >> 7 | ((int)((uVar7 >> 8 & 0xff) * param_4) >> 7) << 8
            | ((int)((uVar7 >> 0x10 & 0xff) * param_4) >> 7) << 0x10 | 0x3a000000;

    puVar3[2] = uVar7;
    *puVar3 = uVar7;

    *(undefined2 *)(puVar3 + 7) = 0x160;
    *(undefined2 *)(puVar3 + 3) = 0x160;

    sVar5 = (short)(param_4 * 0x2d >> 7);
    sVar4 = 0x2d - sVar5;

    *(short *)((int)puVar3 + 0xe) = sVar4;

    *(short *)((int)puVar3 + 6) = sVar4;

    sVar5 = sVar5 + 0x2d;

    puVar3[6] = 0;
    puVar3[4] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    *(undefined2 *)(puVar3 + 1) = 0;

    *(short *)((int)puVar3 + 0x1e) = sVar5;
    *(short *)((int)puVar3 + 0x16) = sVar5;

    FUN_8007da44(iVar9,0x220);

    *(int *)(param_1 + 0x1c8) = param_2;

    if (*(code **)(param_2 + 8) != (code *)0x0) {
      ((void (*)(int))*(code **)(param_2 + 8))(param_3);
    }
  }

  return;
}

undefined4 * FUN_overlay0__80047278(undefined4 *param_1)

{
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fe8c(param_1);

  *param_1 = &LAB_overlay0__8005a7fc;

  return param_1;
}

void FUN_overlay0__800472ac(undefined4 *param_1)

{

  *param_1 = &LAB_overlay0__8005a7fc;
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fec8(param_1);

  return;
}

void FUN_overlay0__800472d4(int param_1,undefined4 param_2)

{

  *(undefined *)(param_1 + 0x210) = 0;

  *(undefined4 *)(param_1 + 0x1d0) = param_2;

  return;
}

void FUN_overlay0__800477c4(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;

  param_3[2] = 0x160;
  param_2[2] = 0x160;
  param_3[3] = 0x1e0;
  param_2[3] = 0x1e0;

  cVar1 = *(char *)(param_1 + 0x212);

  if (cVar1 == '\x01') {

    *param_3 = 0;
  }
  else if (cVar1 < '\x02') {
    if (cVar1 == '\0') {

      *param_3 = 0;
      *param_2 = 0;

      iVar2 = *(char *)(param_1 + 0x211) * 200;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      param_2[1] = (short)(iVar2 >> 4);

      param_3[1] = (*(char *)(param_1 + 0x211) + -0x10) * 5;
      return;
    }
    *param_3 = 0;
  }
  else {
    if (cVar1 == '\x02') {

      param_3[1] = 0;
      param_2[1] = 0;

      iVar2 = *(char *)(param_1 + 0x211) * 200;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      *param_2 = (short)(iVar2 >> 4);

      iVar2 = (*(char *)(param_1 + 0x211) + -0x10) * 100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      *param_3 = (short)(iVar2 >> 4);
      return;
    }
    if (cVar1 == '\x03') {

      param_3[1] = 0;
      param_2[1] = 0;

      iVar2 = (0x10 - *(char *)(param_1 + 0x211)) * 100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      *param_3 = (short)(iVar2 >> 4);

      iVar2 = *(char *)(param_1 + 0x211) * -200;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      *param_2 = (short)(iVar2 >> 4);
      return;
    }
    *param_3 = 0;
  }

  *param_2 = 0;

  param_3[1] = (0x10 - *(char *)(param_1 + 0x211)) * 5;

  iVar2 = *(char *)(param_1 + 0x211) * -200;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  param_2[1] = (short)(iVar2 >> 4);

  return;
}

undefined4 * FUN_overlay0__80047ae4(undefined4 *param_1)

{
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fe8c(param_1);

  *param_1 = &LAB_overlay0__8005a7b4;

  return param_1;
}

void FUN_overlay0__80047b18(undefined4 *param_1)

{

  *param_1 = &LAB_overlay0__8005a7b4;
  /* Decompiler bug: param_1 was already in $a0 (MIPS). */
  FUN_8007fec8(param_1);

  return;
}

undefined4 FUN_overlay0__80047c44(void)

{
  undefined4 uVar1;

  uVar1 = 0;

  if ((DAT_801d5866 == 1) || (((DAT_801d5866 != 0 && (DAT_801d5866 < 0xb)) && (5 < DAT_801d5866)))) {

    uVar1 = 1;
  }

  return uVar1;
}

bool FUN_overlay0__80047c88(void)

{
  return DAT_801d5866 == '\x03';
}

void FUN_overlay0__800481c8(undefined4 param_1)

{

  FUN_80080f24(param_1,1);

  return;
}

void FUN_overlay0__800481e8(void)

{

  FUN_8007c570();

  return;
}

void FUN_overlay0__80048374(int vehicleDataPtr,undefined4 newState)

{

  *(undefined4 *)(vehicleDataPtr + 0x1cc) =
       *(undefined4 *)(vehicleDataPtr + *(char *)(vehicleDataPtr + 0x210) * 4 + 0x1d0);

  *(undefined4 *)(vehicleDataPtr + *(char *)(vehicleDataPtr + 0x210) * 4 + 0x1d0) = newState;
  return;
}

void FUN_overlay0__800483a4(int vehicleDataPtr,undefined4 newState)

{
  byte stackIndex;
  undefined4 currentState;

  currentState = *(undefined4 *)(vehicleDataPtr + *(char *)(vehicleDataPtr + 0x210) * 4 + 0x1d0);

  stackIndex = *(char *)(vehicleDataPtr + 0x210) + 1;
  *(byte *)(vehicleDataPtr + 0x210) = stackIndex;

  *(undefined4 *)(vehicleDataPtr + 0x1cc) = currentState;

  *(undefined4 *)(vehicleDataPtr + ((int)((uint)stackIndex << 0x18) >> 0x16) + 0x1d0) = newState;
  return;
}

int FUN_overlay0__800483d8(int vehicleDataPtr)

{
  char newStackIndex;

  if (0 < *(char *)(vehicleDataPtr + 0x210)) {

    newStackIndex = *(char *)(vehicleDataPtr + 0x210) + -1;

    *(undefined4 *)(vehicleDataPtr + 0x1cc) =
         *(undefined4 *)(vehicleDataPtr + *(char *)(vehicleDataPtr + 0x210) * 4 + 0x1d0);

    *(char *)(vehicleDataPtr + 0x210) = newStackIndex;
    return (int)newStackIndex;
  }
  return -1;
}

void FUN_overlay0__80048418(undefined *audioStatePtr)

{

  *audioStatePtr = 0;

  audioStatePtr[1] = 0;
  return;
}

void FUN_overlay0__80048424(int audioStatePtr,undefined4 audioData,undefined4 audioConfig,undefined4 audioParams)

{

  FUN_8007cfdc(audioData,audioConfig,audioParams,0);

  *(undefined *)(audioStatePtr + 1) = 1;
  return;
}

undefined4 FUN_overlay0__80048460(undefined *audioStatePtr)

{
  char audioStatus;
  int audioResult;
  undefined4 returnStatus;

  audioStatus = audioStatePtr[1];

  if (audioStatus == '\x01') {

    FUN_80081c5c();

    audioResult = FUN_8007c4ec(7);
    if (audioResult == 0) {
      return 1;
    }

    audioStatePtr[1] = 2;
    return 1;
  }

  if (audioStatus < '\x02') {
    if (audioStatus != '\0') {
      return 1;
    }
    returnStatus = 0;
  }
  else {

    if (audioStatus != '\x02') {
      return 1;
    }

    if (DAT_801f0676 != '\0') {
      return 1;
    }

    audioResult = FUN_80081c94();
    if (audioResult != 0) {

      audioStatePtr[1] = 1;
      return 1;
    }

    returnStatus = 2;
    audioStatePtr[1] = 0;
  }

  *audioStatePtr = 0;
  return returnStatus;
}

void FUN_overlay0__80048528(int vertexDataPtr,int renderConfigPtr)

{
  char renderMode;
  undefined4 *tempBufferPtr;
  undefined4 *sourceVertexPtr;
  undefined4 *currentVertexPtr;
  undefined4 *destVertexPtr;
  uint colorValue;
  int textureDataPtr;
  undefined4 vertexData1;
  undefined4 vertexData2;
  undefined4 vertexData3;

  short vertexX1;
  short vertexY1;
  short vertexZ1;
  short vertexX2;
  short vertexY2;
  short vertexZ2;
  short vertexX3;
  short vertexY3;
  short vertexX4;

  currentVertexPtr = (undefined4 *)(vertexDataPtr + 8);
  tempBufferPtr = &DAT_1f800000;

  do {
    destVertexPtr = tempBufferPtr;
    sourceVertexPtr = currentVertexPtr;

    vertexData1 = sourceVertexPtr[1];
    vertexData2 = sourceVertexPtr[2];
    vertexData3 = sourceVertexPtr[3];
    *destVertexPtr = *sourceVertexPtr;
    destVertexPtr[1] = vertexData1;
    destVertexPtr[2] = vertexData2;
    destVertexPtr[3] = vertexData3;

    currentVertexPtr = sourceVertexPtr + 4;
    tempBufferPtr = destVertexPtr + 4;
  } while (currentVertexPtr != (undefined4 *)(vertexDataPtr + 0x68));

  vertexData1 = sourceVertexPtr[5];
  destVertexPtr[4] = *currentVertexPtr;
  destVertexPtr[5] = vertexData1;

  textureDataPtr = *(int *)(renderConfigPtr + 0xc);
  renderMode = *(char *)(renderConfigPtr + 4);

  DAT_1f8003ac = *(undefined2 *)(renderConfigPtr + 6);
  DAT_1f800398 = 0;

  DAT_1f80039c = (uint)*(byte *)(renderConfigPtr + 1) << 0x18;
  DAT_1f8003a0 = (uint)*(byte *)(renderConfigPtr + 2) << 0x10;

  colorValue = (uint)CONCAT12(renderMode,CONCAT11(renderMode,renderMode));
  DAT_1f8003a4 = colorValue | 0x26000000;
  DAT_1f8003a8 = colorValue | 0x2e000000;
  DAT_1f8003ae = *(ushort *)(renderConfigPtr + 8) | 0x20;

  if (renderMode == '\0') {
    DAT_1f800399 = 0;
  }
  else {
    DAT_1f800399 = 0xff;
  }

  FUN_8007b008(0x1f800000,renderConfigPtr + 0x10);
  FUN_8007b994(&vertexX1,vertexDataPtr + 0x7c,renderConfigPtr + 0x10);

  textureDataPtr = *(int *)(textureDataPtr + 0x870);
  FUN_8007b8a0(0x1f800000,*(undefined2 *)(textureDataPtr + 0x4e),*(undefined2 *)(textureDataPtr + 0x4c),0xc);

  DAT_1f800070 = *(undefined4 *)(textureDataPtr + 0x14);
  DAT_1f800074_array[0] = *(undefined4 *)(textureDataPtr + 0x18);

  DAT_1f800068 = DAT_801c93ec;
  DAT_1f80006c = DAT_801c93f0 + -0x2000;

  vertexX1 = vertexX1 >> 3;
  vertexY1 = vertexY1 >> 3;
  vertexZ1 = vertexZ1 >> 3;
  vertexY3 = vertexY3 >> 3;

  vertexX2 = -(vertexX2 >> 3);
  vertexY2 = -(vertexY2 >> 3);
  vertexZ2 = -(vertexZ2 >> 3);
  vertexX3 = vertexX3 >> 3;
  vertexX4 = vertexX4 >> 3;

  colorValue = FUN_8007b8f8(0x1f800000,textureDataPtr + 0x3c,textureDataPtr + 0x44);

  if ((colorValue & 0x1f) == 0) {
    FUN_80063ef4(textureDataPtr,&vertexX1);
  }

  DAT_801c93ec = DAT_1f800068;
  return;
}

void FUN_overlay0__80048754
               (undefined2 *textureDataPtr,int renderConfigPtr,undefined4 renderParams,int vertexDataPtr,int renderMode)

{
  int vertexOffset;
  undefined transformationMatrix[32];
  undefined4 matrixX;
  undefined4 matrixY;
  undefined4 matrixZ;
  undefined renderFlags;
  undefined renderModeFlag;
  undefined lightingFlag;
  undefined textureFlag;
  undefined alphaFlag;
  undefined2 textureWidth;
  undefined2 textureHeight;
  undefined4 textureData;
  undefined lightingMatrix[96];
  undefined effectsMatrix[32];

  FUN_8007af60(transformationMatrix);

  FUN_8007b14c(transformationMatrix,-(int)*(short *)(vertexDataPtr + 0xae));
  FUN_8007b0c4(transformationMatrix,-(int)*(short *)(vertexDataPtr + 0xac));
  FUN_8007b1d4(transformationMatrix,-(int)*(short *)(vertexDataPtr + 0xb0));

  matrixX = *(undefined4 *)(vertexDataPtr + 0xa0);
  matrixY = *(undefined4 *)(vertexDataPtr + 0xa4);
  matrixZ = *(undefined4 *)(vertexDataPtr + 0xa8);
  FUN_8007b050(transformationMatrix,&matrixX);

  vertexOffset = vertexDataPtr + 4;

  *(undefined2 *)(vertexDataPtr + 4) = *(undefined2 *)(vertexDataPtr + 0xc0);
  *(undefined2 *)(vertexDataPtr + 6) = *(undefined2 *)(vertexDataPtr + 0xc2);
  *(undefined2 *)(vertexDataPtr + 8) = *(undefined2 *)(vertexDataPtr + 0xc4);
  *(undefined2 *)(vertexDataPtr + 10) = *(undefined2 *)(vertexDataPtr + 0xc6);

  FUN_8007b320(vertexOffset,(int)*(short *)(vertexDataPtr + 200),(int)*(short *)(vertexDataPtr + 0xca),
               (int)*(short *)(vertexDataPtr + 0xcc),(int)*(short *)(vertexDataPtr + 0xce),
               (int)*(short *)(vertexDataPtr + 0xd0),(int)*(short *)(vertexDataPtr + 0xd2));

  FUN_8007b374(vertexOffset,transformationMatrix,*(undefined4 *)(renderConfigPtr + 8),0x10);

  renderFlags = 1;
  renderModeFlag = 0;
  lightingFlag = 0;
  textureFlag = 1;
  alphaFlag = *(undefined *)((int)textureDataPtr + 9);

  textureData = *(undefined4 *)(textureDataPtr + 2);
  textureWidth = *textureDataPtr;
  textureHeight = textureDataPtr[1];

  FUN_8007af60(lightingMatrix);
  matrixY = FUN_80061544(textureData);
  matrixX = 0;
  matrixZ = 0;
  FUN_8007b050(lightingMatrix,&matrixX);
  FUN_80061490(&renderFlags);

  FUN_8007af60(effectsMatrix);

  if (renderMode == 0) {

    FUN_80067444(vertexOffset,&renderFlags,0);
  }
  else {

    FUN_overlay0__80048528(vertexOffset,&renderFlags);
  }

  if (*(char *)(vertexDataPtr + 0xd4) != '\0') {

    FUN_8007af60(transformationMatrix);
    FUN_8007b0c4(transformationMatrix,-(int)*(short *)(vertexDataPtr + 0xac));

    matrixX = *(undefined4 *)(vertexDataPtr + 0xa0);
    matrixY = *(undefined4 *)(vertexDataPtr + 0xa4);
    matrixZ = *(undefined4 *)(vertexDataPtr + 0xa8);
    FUN_8007b050(transformationMatrix,&matrixX);

    FUN_8007b374(vertexDataPtr + 4,transformationMatrix,*(undefined4 *)(renderConfigPtr + 8),0x10);

    FUN_8006c31c(textureDataPtr + 6,*(int *)(renderConfigPtr + 8) + 0xa0,vertexDataPtr + 4,
                 *(char *)(vertexDataPtr + 0xd5) != '\0',*(undefined4 *)(vertexDataPtr + 0xd8));
  }
  return;
}

undefined4
FUN_overlay0__800489d8
          (undefined4 graphicsContext,short startX,short startY,int primitiveCount,undefined4 colorData)

{
  uint *primitivePtr;
  uint colorValue;
  undefined4 updatedColorData;
  short nextX;

  updatedColorData = colorData;

  if (-1 < primitiveCount) {
    do {
      primitiveCount = primitiveCount + -0x20;

      primitivePtr = (uint *)FUN_80081cc8(graphicsContext);

      colorValue = FUN_8006b548(&LAB_overlay0__8005ab56_2,&colorData,0xc0,0xc0);
      primitivePtr[6] = colorValue | 0x3e000000;
      *primitivePtr = colorValue | 0x3e000000;

      colorValue = FUN_8006b548(&LAB_overlay0__8005ab56_2,&colorData,0xc0,0xc0);
      nextX = startX + 0x20;

      *(short *)(primitivePtr + 7) = startX;
      *(short *)(primitivePtr + 1) = startX;
      *(undefined *)(primitivePtr + 8) = 0x80;
      *(undefined *)(primitivePtr + 2) = 0x80;
      primitivePtr[9] = colorValue;
      primitivePtr[3] = colorValue;
      *(undefined2 *)((int)primitivePtr + 10) = 0x16;
      updatedColorData = 5;

      *(short *)(primitivePtr + 10) = nextX;
      *(short *)(primitivePtr + 4) = nextX;
      *(short *)((int)primitivePtr + 0x12) = startY;
      *(short *)((int)primitivePtr + 6) = startY;
      *(short *)((int)primitivePtr + 0x2a) = startY + 0x20;
      *(short *)((int)primitivePtr + 0x1e) = startY + 0x20;

      *(undefined *)(primitivePtr + 0xb) = 0xa0;
      *(undefined *)(primitivePtr + 5) = 0xa0;
      *(undefined *)((int)primitivePtr + 0x15) = 1;
      *(undefined *)((int)primitivePtr + 9) = 1;
      *(undefined *)((int)primitivePtr + 0x2d) = 0x21;
      *(undefined *)((int)primitivePtr + 0x21) = 0x21;
      *(undefined2 *)((int)primitivePtr + 0x16) = 5;

      startX = nextX;
    } while (-1 < primitiveCount);
  }
  return updatedColorData;
}

void FUN_overlay0__80048bd8(undefined4 *colorPalettePtr,undefined4 paletteData)

{

  FUN_8006c460(colorPalettePtr + 7,&LAB_overlay0__8005abc8,paletteData);

  *colorPalettePtr = 0xc0000;
  colorPalettePtr[1] = 0x10;
  colorPalettePtr[2] = 0x604a2a;
  colorPalettePtr[3] = 0x412215;
  colorPalettePtr[4] = 0xb5b5b5;
  colorPalettePtr[5] = 0;
  colorPalettePtr[6] = 0;

  *(undefined2 *)colorPalettePtr = 0x100;
  *(undefined2 *)(colorPalettePtr + 6) = 0xffff;
  return;
}

void FUN_overlay0__80048c60(int textDataPtr,int textX,int textY,int textWidth,undefined4 textData)

{
  int textHeight;

  textHeight = FUN_8006cd04(textDataPtr + 0x1c,textData);

  FUN_8006c5dc(textDataPtr + 0x1c,textX,textY - (textHeight >> 1),textWidth + 8,textData);

  FUN_8006bef4(textDataPtr,textX + 4,textY + -0x80,
               textWidth - ((int)((uint)*(ushort *)(textDataPtr + 2) << 0x10) >> 0x11));

  FUN_8007da44(textX + 4,0x220);
  return;
}

void FUN_overlay0__80048d14(undefined4 *graphicsConfigPtr,undefined4 *configDataPtr)

{
  undefined2 configValue;
  undefined4 colorValue;

  *(undefined2 *)((int)graphicsConfigPtr + 0x4e) = *(undefined2 *)(configDataPtr + 6);

  {
    undefined2 temp_val = DAT_overlay0__8005abe8._2_2_;
    DAT_overlay0__8005abe8._0_2_ = CONCAT22(temp_val,*(undefined2 *)((int)configDataPtr + 0x1e)) >> 16;
    DAT_overlay0__8005abe8._2_2_ = CONCAT22(temp_val,*(undefined2 *)((int)configDataPtr + 0x1e)) & 0xffff;
  }
  DAT_overlay0__8005ac02 = *(undefined2 *)((int)configDataPtr + 0x1e);

  FUN_8006c460(graphicsConfigPtr + 7,&DAT_overlay0__8005ac00,configDataPtr[2]);
  graphicsConfigPtr[0xc] = configDataPtr[3];

  colorValue = (DAT_overlay0__8005abe8._0_2_ << 16) | DAT_overlay0__8005abe8._2_2_;
  *graphicsConfigPtr = 0x160000;
  graphicsConfigPtr[1] = colorValue;
  graphicsConfigPtr[2] = 0x21018b6;
  graphicsConfigPtr[3] = 0x2010115;
  graphicsConfigPtr[4] = 0x2b5b5b5;
  graphicsConfigPtr[5] = 0x2000000;
  graphicsConfigPtr[6] = 0;

  graphicsConfigPtr[2] = *configDataPtr;
  graphicsConfigPtr[3] = configDataPtr[1];
  configValue = *(undefined2 *)(configDataPtr + 7);
  *(undefined2 *)(graphicsConfigPtr + 6) = 0xffff;
  *(undefined2 *)graphicsConfigPtr = configValue;

  graphicsConfigPtr[0x11] = configDataPtr[4];
  colorValue = configDataPtr[5];
  *(undefined2 *)(graphicsConfigPtr + 0x13) = 0xffff;
  graphicsConfigPtr[0x12] = colorValue;
  return;
}

void FUN_overlay0__80048e14(int animationDataPtr)

{
  short animationFrame;

  FUN_8006c580(animationDataPtr + 0x1c);
  FUN_8006be64(animationDataPtr);

  if (*(short *)(animationDataPtr + 0x4c) < 0) {

    if (*(short *)(animationDataPtr + 0x4c) < -1) {

      *(short *)(animationDataPtr + 0x4c) = *(short *)(animationDataPtr + 0x4c) + 1;
    }
  }
  else {

    animationFrame = *(short *)(animationDataPtr + 0x4c) + 1;
    *(short *)(animationDataPtr + 0x4c) = animationFrame;

    if (0x10 < animationFrame) {
      *(undefined2 *)(animationDataPtr + 0x4c) = 0x10;
    }
  }
  return;
}

void FUN_overlay0__80048e84(short *spriteDataPtr,int renderX,int renderY,int renderWidth,int renderContext)

{
  undefined4 colorValue;
  int spriteOffset;
  uint spriteFlags;
  undefined4 originalColor1;
  undefined4 originalColor2;
  undefined effectsBuffer[64];

  spriteFlags = (uint)spriteDataPtr[0x26];
  if ((int)spriteFlags < -1) {
    spriteFlags = ~spriteFlags;
  }

  if (0 < (int)spriteFlags) {

    *(int *)(renderContext + 0x10) = renderX;
    *(uint *)(renderContext + 0xc) = *(uint *)(renderContext + 0xc) & 0xff9fffff | 0x200000;

    colorValue = FUN_8006b548(spriteDataPtr + 0x24,&DAT_overlay0__8005ac1c,0x10 - spriteFlags,0x10);
    *(undefined4 *)(renderContext + 0x14) = colorValue;

    if ((spriteDataPtr[0x27] & 3U) == 0) {

      FUN_8007da80(renderContext,&DAT_801c9150);
      spriteOffset = FUN_8006ad3c(renderContext,*(undefined4 *)(spriteDataPtr + 0x22),1);
      FUN_8006ac90(renderContext,*(undefined4 *)(spriteDataPtr + 0x22),(renderY + *spriteDataPtr) - (spriteOffset + 6),
                   renderWidth + 0xd,1);
    }
    else if ((spriteDataPtr[0x27] & 3U) == 1) {

      FUN_8007da80(renderContext,&DAT_801c9120);
      FUN_80068734(effectsBuffer,*(undefined4 *)(spriteDataPtr + 0x22));
      spriteOffset = FUN_8006b360(renderContext,effectsBuffer,6,5,0);
      FUN_8006b218(renderContext,effectsBuffer,(renderY + *spriteDataPtr) - (spriteOffset + 6),renderWidth + 9,6,5,0,0);
    }
    else {

      FUN_8007da80(renderContext,&DAT_801c9120);
      FUN_8006b184(renderContext,*(undefined4 *)(spriteDataPtr + 0x22),renderY + *spriteDataPtr + -6,renderWidth + 9,1,
                   0xfffffffe,0);
    }
  }

  FUN_8006c5dc(spriteDataPtr + 0xe,renderX,renderY + 6,renderWidth + 9,renderContext);
  renderX = renderX + 4;

  FUN_8006bef4(spriteDataPtr,renderX,renderY,renderWidth - ((int)((uint)(ushort)spriteDataPtr[1] << 0x10) >> 0x11));
  FUN_8007da44(renderX,0x220);

  if ((spriteDataPtr[0x27] & 4U) != 0) {

    originalColor1 = *(undefined4 *)(spriteDataPtr + 4);
    originalColor2 = *(undefined4 *)(spriteDataPtr + 6);
    colorValue = *(undefined4 *)(spriteDataPtr + 10);

    *(undefined4 *)(spriteDataPtr + 4) = 0x2c0c0c0;
    *(undefined4 *)(spriteDataPtr + 6) = 0;
    *(undefined4 *)(spriteDataPtr + 10) = 0;

    FUN_8006bef4(spriteDataPtr,renderX,renderY,renderWidth - ((int)((uint)(ushort)spriteDataPtr[1] << 0x10) >> 0x11));
    FUN_8007da44(renderX,0x240);

    *(undefined4 *)(spriteDataPtr + 4) = originalColor1;
    *(undefined4 *)(spriteDataPtr + 6) = originalColor2;
    *(undefined4 *)(spriteDataPtr + 10) = colorValue;
  }
  return;
}

void FUN_overlay0__800490f8
               (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 *param_6,uint param_7)

{
  short textureOffset;
  int renderOffset;
  undefined textureMatrix [16];

  FUN_8007da80(param_3,param_6[4]);

  *(undefined4 *)(param_3 + 0x10) = param_2;

  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | (param_7 & 3) << 0x15;

  FUN_80068734(textureMatrix,*param_1);

  renderOffset = FUN_8006b360(param_3,textureMatrix,(int)*(short *)(param_6 + 2),
                       (int)*(short *)((int)param_6 + 10),0);

  *(undefined4 *)(param_3 + 0x14) = *param_6;

  FUN_8006b218(param_3,textureMatrix,param_4 - renderOffset,param_5,(int)*(short *)(param_6 + 2),
               (int)*(short *)((int)param_6 + 10),0,0);

  if (-1 < *(short *)(param_1 + 1)) {
    textureOffset = *(short *)(param_6 + 3);

    FUN_8008cedc(textureMatrix,&DAT_801c6c50);

    *(undefined4 *)(param_3 + 0x14) = param_6[1];

    FUN_8006ac90(param_3,&DAT_801c6c50,param_4 - textureOffset,param_5,1);
    renderOffset = 0;

    FUN_8008cf34(textureMatrix,&DAT_overlay0__8005a864,(int)*(short *)(param_1 + 1));

    FUN_8006af40(param_3,textureMatrix,(param_4 - textureOffset) + renderOffset + 6,param_5,1,
                 (int)*(short *)((int)param_6 + 0xe),0);
  }
  return;
}

void FUN_overlay0__80049274(short *param_1)

{
  short newFrameCount;

  if (param_1[1] < 0) {
    if (param_1[1] < -1) {
      param_1[1] = param_1[1] + 1;
      return;
    }
  }
  else {

    newFrameCount = param_1[1] + 1;
    param_1[1] = newFrameCount;

    if (*param_1 <= newFrameCount) {
      param_1[1] = *param_1;
    }
  }
  return;
}

void FUN_overlay0__800492c4
               (short *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,uint param_7,int param_8,int param_9,int param_10)

{
  bool isNegativeFrame;
  int renderOffset;
  undefined4 colorBlend;
  uint frameCounter;
  undefined transformMatrix [16];

  FUN_8007da80(param_3,*(undefined4 *)(param_8 + 0x10));

  *(undefined4 *)(param_3 + 0x10) = param_2;

  frameCounter = (uint)param_1[1];

  if (frameCounter == 0xffffffff) {
    return;
  }

  isNegativeFrame = (int)frameCounter < 0;

  if (isNegativeFrame) {
    frameCounter = ~frameCounter;
  }

  if (param_9 == 0) {

    FUN_80068734(transformMatrix,param_4);

    if (param_10 == 0) goto LAB_overlay0__800493b4;

    renderOffset = FUN_8006b360(param_3,transformMatrix,(int)*(short *)(param_8 + 8),
                         (int)*(short *)(param_8 + 10),0);
  }
  else {

    FUN_80068ca0(transformMatrix,param_4);

    FUN_8008d020(transformMatrix,&DAT_801c6c87);

    if (param_10 == 0) goto LAB_overlay0__800493b4;

    renderOffset = FUN_8006b044(param_3,transformMatrix,(int)*(short *)(param_8 + 0xe),0);
  }

  param_5 = param_5 + (renderOffset >> 1);

LAB_overlay0__800493b4:

  frameCounter = 0x80 - (int)(frameCounter << 7) / (int)*param_1;

  if (((int)param_1[1] < (int)*param_1) && (!isNegativeFrame)) {

    *(uint *)(param_3 + 0x14) = frameCounter | frameCounter * 0x100 | frameCounter * 0x10000 | 0x2000000;

    *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | 0x200000;

    if (param_9 == 0) {

      FUN_8006b3f4(param_3,transformMatrix,param_5 - ((int)frameCounter >> 2),param_6,
                   (int)*(short *)(param_8 + 8),(int)*(short *)(param_8 + 10),0,0);

      FUN_8006b3f4(param_3,transformMatrix,param_5 + ((int)frameCounter >> 2),param_6,
                   (int)*(short *)(param_8 + 8),(int)*(short *)(param_8 + 10),0,0);
    }
    else {

      FUN_8006b184(param_3,transformMatrix,param_5 - ((int)frameCounter >> 1),param_6,
                   (int)*(short *)(param_8 + 0xe),0xfffffffe,0);

      FUN_8006b184(param_3,transformMatrix,param_5 + ((int)frameCounter >> 1),param_6,
                   (int)*(short *)(param_8 + 0xe),0xfffffffe,0);
    }
  }

  colorBlend = FUN_8006b548(param_8,&LAB_overlay0__8005ab56_2,frameCounter,0x80);

  *(undefined4 *)(param_3 + 0x14) = colorBlend;

  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | (param_7 & 3) << 0x15;

  if (param_9 == 0) {

    FUN_8006b3f4(param_3,transformMatrix,param_5,param_6,(int)*(short *)(param_8 + 8),
                 (int)*(short *)(param_8 + 10),0,0);
  }
  else {

    FUN_8006b184(param_3,transformMatrix,param_5,param_6,(int)*(short *)(param_8 + 0xe),0xfffffffd,0);
  }
  return;
}

void FUN_overlay0__800495a8
               (undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 configValue1;
  undefined4 configValue2;
  undefined4 configValue3;

  *param_1 = param_2;

  *(undefined4 *)(param_1 + 2) = param_3;

  configValue1 = param_4[1];
  configValue2 = param_4[2];
  configValue3 = param_4[3];

  *(undefined4 *)(param_1 + 4) = *param_4;
  *(undefined4 *)(param_1 + 6) = configValue1;
  *(undefined4 *)(param_1 + 8) = configValue2;
  *(undefined4 *)(param_1 + 10) = configValue3;

  configValue1 = param_4[5];

  *(undefined4 *)(param_1 + 0xc) = param_4[4];
  *(undefined4 *)(param_1 + 0xe) = configValue1;
  return;
}

void FUN_overlay0__800495e4
               (short *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 textureData;
  int layerIndex;
  int dataOffset;
  undefined transformMatrix [256];

  *(undefined4 *)(param_3 + 0x10) = param_2;

  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | 0x200000;

  FUN_8007da80(param_3,&DAT_801c9120);

  if (0 < *param_1) {

    FUN_8008cf34(transformMatrix,&DAT_overlay0__8005a864,0);

    textureData = FUN_8006b548(&LAB_overlay0__8005ab56_2,param_1 + 4,param_6,0x80);

    *(undefined4 *)(param_3 + 0x14) = textureData;

    FUN_8006b184(param_3,transformMatrix,param_4,param_5,1,0xfffffffe,0);
  }

  param_4 = param_4 + 0x3c;
  dataOffset = 0xc;

  for (layerIndex = 0; layerIndex < 5; layerIndex = layerIndex + 1) {

    textureData = **(undefined4 **)(param_1 + 2);

    if (layerIndex < 4) {
      textureData = FUN_8005dd94(*(undefined4 **)(param_1 + 2),layerIndex);
    }

    FUN_80068734(transformMatrix,textureData);

    textureData = FUN_8006b548(&LAB_overlay0__8005ab56_2,(int)param_1 + dataOffset,param_6,0x80);

    *(undefined4 *)(param_3 + 0x14) = textureData;

    FUN_8006b3f4(param_3,transformMatrix,param_4,param_5,6,5,0,0);

    param_4 = param_4 + 0x3c;
    dataOffset = dataOffset + 4;
  }
  return;
}

void FUN_overlay0__80049780(undefined4 *param_1,int param_2,int param_3)

{
  int calculatedValue;
  short halfWidth;

  *(undefined *)(param_1 + 0x35) = 1;
  *(undefined *)((int)param_1 + 0xd5) = 1;

  *(undefined2 *)(param_1 + 0x2b) = 0x5e;
  *(short *)(param_1 + 0x31) = (short)param_2;
  *(undefined2 *)((int)param_1 + 0xae) = 0x1500;
  *(short *)((int)param_1 + 0xc6) = (short)param_3;

  calculatedValue = (param_3 * 0x3e) / 100;

  param_1[0x36] = 0xa2a2a2;

  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((int)param_1 + 0xc2) = 0;

  halfWidth = (short)(param_2 >> 1);

  *(short *)((int)param_1 + 0xca) = halfWidth;
  *param_1 = 0;
  param_1[0x2a] = 0xb0000;

  *(short *)(param_1 + 0x32) = -halfWidth;
  *(undefined2 *)(param_1 + 0x34) = 400;
  *(undefined2 *)((int)param_1 + 0xd2) = 0x7fff;

  *(short *)(param_1 + 0x33) = (short)((calculatedValue * 0x50) / 100);
  *(short *)((int)param_1 + 0xce) = -(short)(calculatedValue / 5);
  return;
}

void FUN_overlay0__80049874(int param_1,int param_2)

{

  *(ushort *)(param_1 + 0xae) = *(short *)(param_1 + 0xae) + 0x10U & 0x3fff;

  if (0xfb90 < param_2) {

    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 0x8000;
  }
  return;
}

void FUN_overlay0__800498b0
               (undefined4 param_1,char *param_2,int param_3,short param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  char currentChar;
  short textX;
  undefined4 fontData;
  undefined4 colorBlend;
  char *charPtr;
  int charData;
  undefined4 textConfig [2];

  fontData = DAT_801c90a8;

  textConfig[0] = 0x2000000;
  charData = 0;

  if (DAT_801c98e0 == '\0') {

    if (param_7 != 0) {
      currentChar = *param_2;
      charPtr = param_2;

      while (currentChar != '\0') {
        charPtr = charPtr + 2;
        charData = charData + 0xc;
        currentChar = *charPtr;
      }

      param_3 = param_3 - (charData >> 1);
    }

    for (; *param_2 != '\0'; param_2 = param_2 + 2) {

      charData = FUN_8007f18c(fontData,CONCAT11(*param_2,param_2[1]));

      if (charData != 0) {

        colorBlend = FUN_8006b548(textConfig,&param_6,param_5,0x80);

        charData = FUN_8007f01c(charData,param_1,colorBlend);

        textX = (short)param_3;

        *(short *)(charData + 4) = textX;
        *(short *)(charData + 6) = param_4;
        *(short *)(charData + 0xc) = textX + 0xf;
        *(short *)(charData + 0xe) = param_4;
        *(short *)(charData + 0x14) = textX;
        *(short *)(charData + 0x16) = param_4 + 0x1f;
        *(short *)(charData + 0x1c) = textX + 0xf;
        *(short *)(charData + 0x1e) = param_4 + 0x1f;

        *(ushort *)(charData + 0x12) = *(ushort *)(charData + 0x12) & 0xff9f | 0x20;
      }

      param_3 = param_3 + 0xc;
    }

    FUN_8007da44(param_1,0x240);
  }
  return;
}

void FUN_overlay0__8004a718(undefined param_1)

{

  DAT_overlay0__8005b088 = param_1;

  DAT_801d55aa = 0;
  return;
}

bool FUN_overlay0__8004a738(void)

{

  return DAT_801d55aa != '\0';
}

void FUN_overlay0__8004ac20(uint *param_1)

{
  uint *arrayPtr;
  uint currentValue;
  int innerIndex;
  int outerIndex;
  int dataOffset;

  outerIndex = 3;
  arrayPtr = param_1 + 3;

  do {
    *arrayPtr = 0xffffffff;
    outerIndex = outerIndex + -1;
    arrayPtr = arrayPtr + -1;
  } while (-1 < outerIndex);

  dataOffset = 8;
  for (outerIndex = 0; innerIndex = 0, arrayPtr = param_1, outerIndex < DAT_801d5e8c; outerIndex = outerIndex + 1) {

    for (; innerIndex < 4; innerIndex = innerIndex + 1) {

      currentValue = FUN_8005dd94((int)&DAT_801d5e88 + dataOffset,innerIndex);

      if (currentValue < *arrayPtr) {
        *arrayPtr = currentValue;
      }
      arrayPtr = arrayPtr + 1;
    }
    dataOffset = dataOffset + 0x14;
  }

  for (; innerIndex < 4; innerIndex = innerIndex + 1) {

    currentValue = FUN_8005dd94(&DAT_801d5f58,innerIndex);

    if (currentValue < *param_1) {
      *param_1 = currentValue;
    }
    param_1 = param_1 + 1;
  }
  return;
}

void FUN_overlay0__8004ad40(undefined4 *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  uint dataValue;
  int loopIndex;

  *param_1 = 0x214465a;
  param_1[5] = 0x25a5a5a;

  if (param_2 != 0) {
    param_1[5] = 0x2013060;
  }

  loopIndex = 0;
  do {

    param_1[1] = 0x25a5a5a;

    dataValue = FUN_8005dd94(param_3,loopIndex);

    if (dataValue <= *param_4) {
      param_1[1] = 0x2013060;
    }

    param_4 = param_4 + 1;
    loopIndex = loopIndex + 1;
    param_1 = param_1 + 1;
  } while (loopIndex < 4);
  return;
}

int FUN_overlay0__8004c728(undefined4 param_1)

{
  int matchResult;
  int searchIndex;
  undefined **patternPtr;
  int foundIndex;
  undefined searchBuffer [3];
  undefined localFlag;

  foundIndex = 0;

  FUN_8008cedc(searchBuffer,param_1);

  searchIndex = 0;
  patternPtr = &PTR_LAB_overlay0__8005a908_overlay0__8005b208;
  localFlag = 0;

  do {

    matchResult = FUN_8008cf00(*patternPtr,searchBuffer);

    if (matchResult == 0) {
      foundIndex = searchIndex;
    }

    searchIndex = searchIndex + 1;
    patternPtr = patternPtr + 1;
  } while (searchIndex < 6);

  return foundIndex;
}

undefined4 * FUN_overlay0__8004c7a0(int param_1)

{
  undefined2 *dataPtr;
  undefined4 dataValue;
  undefined4 *sourcePtr;
  int configValue;
  undefined4 *destPtr;
  undefined4 value1;
  undefined4 value2;
  uint dataMask;
  uint processedValue;

  configValue = _LAB_80092e6a_2;

  dataPtr = (undefined2 *)FUN_8007830c(_LAB_80092e6a_2,param_1);

  FUN_8008ce30(&DAT_801d585c,0,0x58c);

  DAT_801d585c = *(undefined4 *)&DAT_801c98e1;
  DAT_801d5860 = *(undefined4 *)&DAT_801c98e5;
  DAT_801d5864 = 2;
  DAT_801d5865 = 1;
  DAT_801d5866 = 3;
  DAT_801d586a = 0;

  DAT_801d5869 = *(char *)(dataPtr + 0x22) == '\0';

  dataValue = FUN_8007816c(configValue,*dataPtr);
  FUN_8005e548(&DAT_801d585c,dataValue);

  dataValue = FUN_8007816c(configValue,dataPtr[1]);
  FUN_8005e5f0(&DAT_801d585c,dataValue);

  dataValue = FUN_8007816c(configValue,dataPtr[0x4a]);
  FUN_8008cedc(&DAT_801d58a0,dataValue);

  DAT_801d5867 = FUN_overlay0__8004c728(param_1);

  DAT_801d5868 = (*(char *)(param_1 + 3) + -0x30) * '\n' + -0x30 + *(char *)(param_1 + 4);

  DAT_801d586b = *(undefined *)((int)dataPtr + 0x45);
  DAT_801d5dd8 = 0xffff;
  DAT_801d5dde = 0xffff;
  DAT_801d5de0 = 0xffff;
  DAT_801d58b6 = 1;
  DAT_801d5de2 = 0;
  DAT_801d5ddc = 0;
  DAT_801d5de4 = DAT_801d5de4 & 0xfffffff9 | 1;

  if (DAT_80092878 == 2) {
    configValue = DAT_80092870 + 0x10;
  }
  else {
    configValue = configValue + 0x100;
  }

  dataMask = *(uint *)(dataPtr + 2);
  processedValue = dataMask & 0x3ffffff;
  sourcePtr = (undefined4 *)FUN_80078038(configValue,processedValue - 1);

  FUN_8008ce30(&DAT_801d58b8,0,0xd0);
  DAT_801d58b8 = *sourcePtr;
  DAT_801d58bc = (uint)(byte)"-0123456789abcdefghijklmnopqrstuvwxyz"[dataMask >> 0x1a];

  DAT_801d5944 = 1;
  DAT_801d5945 = 0;

  dataValue = FUN_800768c0(processedValue);
  FUN_80076fc0(dataValue,&DAT_801d58c0);

  DAT_801d5946 = 3;
  DAT_801d5947 = 0;

  if (DAT_801d58dc != 0) {
    configValue = FUN_80076f2c(5);
    DAT_801d58b8 = *(undefined4 *)(configValue + 8);
  }

  destPtr = &DAT_801c98a0;
  sourcePtr = (undefined4 *)(dataPtr + 0x22);

  if (((uint)sourcePtr & 3) == 0) {

    do {
      value1 = sourcePtr[1];
      value2 = sourcePtr[2];
      dataValue = sourcePtr[3];
      *destPtr = *sourcePtr;
      destPtr[1] = value1;
      destPtr[2] = value2;
      destPtr[3] = dataValue;
      sourcePtr = sourcePtr + 4;
      destPtr = destPtr + 4;
    } while (sourcePtr != (undefined4 *)(dataPtr + 0x42));
  }
  else {

    do {
      value1 = sourcePtr[1];
      value2 = sourcePtr[2];
      dataValue = sourcePtr[3];
      *destPtr = *sourcePtr;
      destPtr[1] = value1;
      destPtr[2] = value2;
      destPtr[3] = dataValue;
      sourcePtr = sourcePtr + 4;
      destPtr = destPtr + 4;
    } while (sourcePtr != (undefined4 *)(dataPtr + 0x42));
  }

  FUN_800771ac(&DAT_801d58c0,&DAT_801de8ba);

  return &DAT_801d585c;
}

void FUN_overlay0__8004ca90(ushort *param_1,int param_2)

{
  undefined2 *dataPtr;
  undefined4 dataValue;
  undefined4 configValue;
  undefined2 *sourcePtr;
  undefined dataBuffer [16];

  FUN_8008cf34(dataBuffer,(&PTR_s_LIS_02d_overlay0__8005a8d8_overlay0__8005b1f0)[param_2],0);

  configValue = _LAB_80092e6a_2;

  dataPtr = (undefined2 *)FUN_8007830c(_LAB_80092e6a_2,dataBuffer);

  sourcePtr = dataPtr + 0x22;

  *param_1 = (ushort)*(byte *)(dataPtr + 0x22);

  dataValue = FUN_overlay0__8003d7b8(sourcePtr,1);
  *(undefined4 *)(param_1 + 2) = dataValue;

  dataValue = FUN_overlay0__8003d7b8(sourcePtr,2);
  *(undefined4 *)(param_1 + 4) = dataValue;

  dataValue = FUN_overlay0__8003d7b8(sourcePtr,3);
  *(undefined4 *)(param_1 + 6) = dataValue;

  configValue = FUN_8007816c(configValue,*dataPtr);
  FUN_8008cedc(param_1 + 0x18,configValue);

  configValue = FUN_8007816c(configValue,dataPtr[1]);
  FUN_8008cedc(param_1 + 8,configValue);
  return;
}

void FUN_overlay0__8004cb6c
               (undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
               undefined4 param_6,int param_7)

{
  int iVar1;
  undefined auStack_90 [64];
  undefined auStack_50 [12];
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined local_34;
  undefined auStack_30 [8];

  FUN_8006ac68(auStack_50,6);
  local_34 = 1;
  local_44 = local_44 & 0xff9fffff | 0x200000;
  FUN_8007da80(auStack_50,&DAT_801c9130);

  local_40 = param_1;
  local_3c = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1cc,param_6,0x80);

  FUN_8008cf34(auStack_90,(&PTR_DAT_overlay0__8005b220)[param_4],param_5 + 1);

  FUN_8006af40(auStack_50,auStack_90,param_2,param_3,2,1,4);
  iVar1 = 0;

  if (-1 < param_7) {

    FUN_8006ba48(auStack_30,param_1,param_2 + iVar1 + 5,param_3 + -0x16,6,10,param_7);
    FUN_8006ba48(auStack_30,param_1,param_2 + -4,param_3 + -0x16,0xfffffffa,10,param_7);
  }

  FUN_8007da44(param_1,0x220);
  return;
}

void FUN_overlay0__8004ccf8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;

  iVar5 = DAT_801c90a0;
  param_2 = param_2 * 0x14;
  param_1 = param_1 * 200;

  *(undefined **)(DAT_801c90a0 + 0x4d8) =
       &DAT_80173894 + *(ushort *)(&DAT_8017389c + param_2 + param_1);
  *(undefined2 *)(iVar5 + 0x4fc) = *(undefined2 *)(&DAT_8017389e + param_2 + param_1);

  iVar2 = DAT_801c90a8;
  iVar3 = 0;
  iVar1 = iVar5;

  if (DAT_801c98e0 == '\0') {

    *(undefined **)(DAT_801c90a8 + 0x9824) = &LAB_80081b5c;
    FUN_8007f174(iVar2);
    puVar4 = *(undefined **)(DAT_801c90a0 + 0x4d8);

    for (iVar5 = 0; FUN_8006ecd8(iVar2,puVar4), iVar5 < *(short *)(DAT_801c90a0 + 0x4fc);
        iVar5 = iVar5 + 1) {
      iVar1 = param_2 + param_1;
      param_2 = param_2 + 2;
      puVar4 = &DAT_80173894 + *(ushort *)(&DAT_801738a0 + iVar1);
      *(undefined **)(DAT_801c90a0 + iVar5 * 4 + 0x4dc) = puVar4;
    }
    *(undefined **)(iVar2 + 0x9824) = &LAB_8007f2fc;
  }
  else {

    for (; iVar2 = param_2 + param_1, iVar3 < *(short *)(iVar5 + 0x4fc); iVar3 = iVar3 + 1) {
      param_2 = param_2 + 2;
      *(undefined **)(iVar1 + 0x4dc) = &DAT_80173894 + *(ushort *)(&DAT_801738a0 + iVar2);
      iVar1 = iVar1 + 4;
    }
  }
  return;
}

void FUN_overlay0__8004ce94(undefined4 param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;

  uVar1 = DAT_801c90a8;

  if (DAT_801c98e0 == '\0') {

    for (pcVar4 = *(char **)(DAT_801c90a0 + 0x4d8); *pcVar4 != '\0'; pcVar4 = pcVar4 + 2) {

      iVar2 = FUN_8007f18c(uVar1,CONCAT11(*pcVar4,pcVar4[1]));

      if (iVar2 != 0) {

        uVar3 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1c8,param_4,0x80);

        iVar2 = FUN_8007f01c(iVar2,param_1,uVar3);

        *(short *)(iVar2 + 4) = param_2;
        *(short *)(iVar2 + 6) = param_3;
        *(short *)(iVar2 + 0xc) = param_2 + 0xf;
        *(short *)(iVar2 + 0xe) = param_3;
        *(short *)(iVar2 + 0x14) = param_2;
        *(short *)(iVar2 + 0x16) = param_3 + 0x18;
        *(short *)(iVar2 + 0x1c) = param_2 + 0xf;
        *(short *)(iVar2 + 0x1e) = param_3 + 0x18;

        *(ushort *)(iVar2 + 0x12) = *(ushort *)(iVar2 + 0x12) & 0xff9f | 0x20;
      }

      param_2 = param_2 + 0xc;
    }
  }
  return;
}

void FUN_overlay0__8004cfc0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  undefined auStack_38 [16];
  undefined4 local_28;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_1c;

  if (DAT_801c98e0 != '\0') {

    FUN_8006ac68(auStack_38,6);
    local_1c = 1;
    local_28 = param_1;

    FUN_8007da80(auStack_38,&DAT_801c9120);
    local_24 = param_4;
    local_23 = param_4;
    local_22 = param_4;

    FUN_8006ac90(auStack_38,*(undefined4 *)(DAT_801c90a0 + 0x4d8),param_2,param_3,1);
  }
  return;
}

void FUN_overlay0__8004d074
               (undefined4 param_1,undefined4 param_2,short param_3,short param_4,undefined4 param_5
               )

{
  int iVar1;

  iVar1 = FUN_8007f01c(param_5,param_1,param_2);

  *(short *)(iVar1 + 6) = param_4;
  *(short *)(iVar1 + 0xe) = param_4;
  *(short *)(iVar1 + 4) = param_3;
  *(short *)(iVar1 + 0xc) = param_3 + 0xf;
  *(short *)(iVar1 + 0x14) = param_3;
  *(short *)(iVar1 + 0x16) = param_4 + 0xf;
  *(short *)(iVar1 + 0x1c) = param_3 + 0xf;
  *(short *)(iVar1 + 0x1e) = param_4 + 0xf;

  *(ushort *)(iVar1 + 0x12) = *(ushort *)(iVar1 + 0x12) & 0xff9f | 0x20;
  return;
}

/*
 * RenderTextWithDropShadow (suggested name)
 * Original: FUN_overlay0__8004d0ec
 *
 * Renders multi-line text with a drop shadow effect. Only runs when
 * DAT_801c98e0 == 0 (e.g. 16-bit/paletted mode).
 *
 * For each line from DAT_801c90a0 (line count at +0x4fc, string ptrs at +0x4dc):
 *   - For each 16-bit character: draws glyph 3 times (main + shadow above/below)
 *   - Main: full intensity (param_4) at (x, y)
 *   - Shadow: dim intensity (param_4 >> 2) at (x, y-1) and (x, y+1)
 *   - Advances x by 0xc per character
 *   - After line: draws background rect (0x144 wide) at (param_2, y+0x10)
 *   - Next line at y += 0x16
 *
 * Params: param_1=render ctx, param_2/3=base x/y, param_4=brightness (0..0x80)
 */
void FUN_overlay0__8004d0ec(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined2 local_34;

  uVar1 = DAT_801c90a8;

  if (DAT_801c98e0 == '\0') {
    iVar7 = 0;

    while( true ) {
      if (*(short *)(DAT_801c90a0 + 0x4fc) <= iVar7) break;
      iVar5 = param_2;

      for (pcVar6 = *(char **)(DAT_801c90a0 + iVar7 * 4 + 0x4dc); *pcVar6 != '\0';
          pcVar6 = pcVar6 + 2) {

        iVar2 = FUN_8007f18c(uVar1,CONCAT11(*pcVar6,pcVar6[1]));

        if (iVar2 != 0) {

          uVar3 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1c8,
                               param_4 * 0xc00 >> 0xc,0x80);
          FUN_overlay0__8004d074(param_1,uVar3,iVar5,param_3,iVar2);

          uVar3 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1c8,param_4 >> 2,0x80);
          FUN_overlay0__8004d074(param_1,uVar3,iVar5,param_3 + -1,iVar2);

          uVar3 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1c8,param_4 >> 2,0x80);
          FUN_overlay0__8004d074(param_1,uVar3,iVar5,param_3 + 1,iVar2);
        }

        iVar5 = iVar5 + 0xc;
      }

      uVar3 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1d8,param_4,0x180);
      puVar4 = (undefined2 *)FUN_8007d024(param_1,uVar3);
      local_34 = (undefined2)param_2;
      puVar4[1] = (short)param_3 + 0x10;
      puVar4[2] = 0x144;
      puVar4[3] = 1;
      *puVar4 = local_34;

      FUN_8007da44(param_1,0x20);
      param_3 = param_3 + 0x16;
      iVar7 = iVar7 + 1;
    }
  }
  return;
}

/*
 * RenderMultiLineTextTrueColor (Original: FUN_overlay0__8004d2ec)
 *
 * Purpose:
 *   Renders multi-line text using the true-color/24-bit pipeline. Only runs when
 *   DAT_801c98e0 != 0. Complementary to FUN_overlay0__8004d0ec (RenderTextWithDropShadow),
 *   which runs when DAT_801c98e0 == 0 (16-bit/paletted mode).
 *
 * Parameters:
 *   param_1: Render context (passed to FUN_8007d024, FUN_8007da44)
 *   param_2: Base X position
 *   param_3: Base Y position (incremented by 0x16 per line)
 *   param_4: Color/brightness blend factor (0..0x80)
 *
 * Data source (DAT_801c90a0):
 *   +0x4fc: Line count
 *   +0x4dc: Array of pointers to string data (4 bytes per line)
 *
 * For each line:
 *   - FUN_8006ac90: Renders full line as text at (param_2, param_3)
 *   - FUN_8006b548: Interpolates color (DAT_overlay0__8005b1c4..LAB_overlay0__8005b1d8)
 *   - FUN_8007d024/FUN_8007da44: Submits quad (x, y, 0x144, 1) for background/overlay
 *   - param_3 += 0x16 (22 px line spacing)
 */
void FUN_overlay0__8004d2ec(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined uVar5;
  undefined auStack_48 [12];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_2c;

  if (DAT_801c98e0 != '\0') {

    FUN_8006ac68(auStack_48,6);
    iVar4 = 0;
    local_2c = 1;
    local_3c = local_3c & 0xff9fffff | 0x200000;
    local_38 = param_1;
    FUN_8007da80(auStack_48,&DAT_801c9120);
    uVar5 = (undefined)param_4;
    local_34 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1c8,param_4,0x80);

    while( true ) {
      if (*(short *)(DAT_801c90a0 + 0x4fc) <= iVar4) break;
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;

      FUN_8006ac90(auStack_48,*(undefined4 *)(DAT_801c90a0 + iVar1 + 0x4dc),param_2,param_3,1);

      uVar2 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1d8,param_4,0x180);
      puVar3 = (undefined2 *)FUN_8007d024(param_1,uVar2);
      *puVar3 = (short)param_2;
      puVar3[1] = (short)param_3;
      puVar3[2] = 0x144;
      puVar3[3] = 1;

      FUN_8007da44(param_1,0x20);
      param_3 = param_3 + 0x16;
    }
  }
  return;
}

void FUN_overlay0__8004d6e4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6)

{
  short sVar1;
  undefined4 uVar2;
  undefined auStack_70 [64];
  short local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;

  uVar2 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1d2_2,param_5,0x80);
  *(undefined4 *)(param_6 + 0x14) = uVar2;

  FUN_80068734(auStack_70,param_2);
  FUN_8006b3f4(param_6,auStack_70,param_4,0x124,6,5,0,0);
  sVar1 = 0;

  local_30 = ((short)param_4 - sVar1) + -10;
  local_2e = 0x116;
  local_2c = 8;
  local_2a = 0xe;
  local_28 = param_3;

  FUN_8006bb08(param_1,&local_30,param_5);
  return;
}

void FUN_overlay0__8004d7d0
               (undefined4 param_1,ushort *param_2,int param_3,undefined4 param_4,int param_5,
               int param_6)

{
  short sVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined auStack_88 [12];
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined local_6c;
  undefined auStack_68 [64];

  FUN_8006ac68(auStack_88,6);
  local_6c = 1;
  local_7c = local_7c & 0xff9fffff | 0x200000;
  FUN_8007da80(auStack_88,&DAT_801c9120);
  local_78 = param_1;
  uVar2 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1ce_2,param_4,0x80);
  local_74 = uVar2;

  FUN_8006ac90(auStack_88,&DAT_801da4b8 + param_5 * 0xaa + param_6 * 0x11,param_3 + 10,0xc0,1);
  iVar4 = param_6 * 0x44 + param_5 * 0x2a8;

  FUN_8008cf34(auStack_68,&DAT_801c70e9,(*(short *)(&DAT_801da4f8 + iVar4) * 1000) / 0x3f6);
  FUN_8006af40(auStack_88,auStack_68,param_3 + 100,0xd6,1,0xfffffffd,0);

  puVar3 = &DAT_801c70d2;
  sVar1 = *(short *)(&DAT_801da4fa + iVar4);

  if (sVar1 == 2) {
    puVar3 = &DAT_801c70e0;
  }
  else if (sVar1 < 3) {
    if (sVar1 == 0) {
      puVar3 = &DAT_801c70d7;
    }
  }
  else if (sVar1 == 3) {
    puVar3 = &DAT_801c70dc;
  }
  else if (sVar1 == 4) {
    puVar3 = &DAT_801c70e4;
  }

  FUN_8006ac90(auStack_88,puVar3,param_3 + 0x10,0xd6,1);
  local_74 = uVar2;

  FUN_8008cf34(auStack_68,&DAT_801c70ee,((uint)*param_2 * 10000) / 0x3edd);
  FUN_8006ac90(auStack_88,auStack_68,param_3 + 10,0x10e,1);

  FUN_overlay0__8004d6e4
            (param_1,*(undefined4 *)(param_2 + 2),0x1ad8,param_3 + 0x48,param_4,auStack_88);
  FUN_overlay0__8004d6e4
            (param_1,*(undefined4 *)(param_2 + 4),0x5a6e,param_3 + 0x90,param_4,auStack_88);
  FUN_overlay0__8004d6e4
            (param_1,*(undefined4 *)(param_2 + 6),0x935,param_3 + 0xd8,param_4,auStack_88);
  return;
}

void FUN_overlay0__8004dad4
               (undefined4 param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 auStack_30 [2];

  puVar8 = &DAT_801cacf8 + param_5 * 0x668;

  for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
    cVar1 = puVar8[1];
    auStack_30[0] = 0x404040;

    if (param_6 == iVar7) {
      auStack_30[0] = 0xf4f4f4;
    }

    uVar4 = FUN_8006b548(&DAT_overlay0__8005b1c4,auStack_30,param_4,0x80);
    iVar5 = FUN_8007e738(param_1,uVar4);

    sVar2 = (short)param_2;
    *(short *)(iVar5 + 0xc) = sVar2 + 0x14;
    *(short *)(iVar5 + 8) = sVar2 + 0x14;
    sVar3 = (short)param_3;
    *(short *)(iVar5 + 0x14) = sVar2;
    *(short *)(iVar5 + 0x10) = sVar2;
    *(short *)(iVar5 + 4) = sVar2;
    *(short *)(iVar5 + 0x16) = sVar3;
    *(short *)(iVar5 + 10) = sVar3;
    *(short *)(iVar5 + 6) = sVar3;
    *(short *)(iVar5 + 0x12) = sVar3 + 0x1c;
    *(short *)(iVar5 + 0xe) = sVar3 + 0x1c;

    if (-1 < cVar1 + -1) {

      piVar6 = (int *)FUN_80081478(param_1,param_4 | param_4 << 8 | param_4 << 0x10);
      iVar5 = (cVar1 + -1) * 0xc;

      *piVar6 = (param_2 -
                (((int)((uint)*(ushort *)(&DAT_overlay0__8005b154 + iVar5) << 0x10) >> 0x11) + -10))
                + (param_3 -
                  (((int)((uint)*(ushort *)(&LAB_overlay0__8005b156 + iVar5) << 0x10) >> 0x11) +
                  -0xe)) * 0x10000;

      piVar6[1] = *(int *)(&DAT_overlay0__8005b150 + iVar5);
      piVar6[2] = *(int *)(&DAT_overlay0__8005b154 + iVar5);

      FUN_8007da44(param_1,*(ushort *)(&LAB_overlay0__8005b156_2 + iVar5) | 0x20);
    }

    param_2 = param_2 + 0x16;
    puVar8 = puVar8 + 0xa4;
  }
  return;
}

undefined4 FUN_overlay0__8004dcac(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 1;
  puVar1 = &DAT_801cacf8 + param_1 * 0x668;

  for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (puVar1[1] == '\0') {
      uVar3 = 0;
    }
    puVar1 = puVar1 + 0xa4;
  }
  return uVar3;
}

undefined4 FUN_overlay0__8004dd14(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 1;
  puVar1 = &DAT_801cacf8 + param_1 * 0x668;

  for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
    if ((char)puVar1[1] < '\x04') {
      uVar3 = 0;
    }
    puVar1 = puVar1 + 0xa4;
  }
  return uVar3;
}

void FUN_overlay0__8004dd80(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  iVar2 = (uint)DAT_801d5868 * 0xa4 + (uint)DAT_801d5867 * 0x668;
  iVar4 = FUN_8007830c(_LAB_80092e6a_2,&DAT_801d586c);
  uVar3 = DAT_801d5df0;
  iVar7 = iVar4 + 0x44;

  uVar5 = FUN_overlay0__8003d7b8(iVar7,4);
  uVar6 = (uint)(uVar3 < uVar5);
  uVar5 = FUN_overlay0__8003d7b8(iVar7,3);
  if (uVar3 < uVar5) {
    uVar6 = 2;
  }
  uVar5 = FUN_overlay0__8003d7b8(iVar7,2);
  if (uVar3 < uVar5) {
    uVar6 = 3;
  }
  uVar5 = FUN_overlay0__8003d7b8(iVar7,1);
  if (uVar3 < uVar5) {
    uVar6 = 4;
  }

  if ((&DAT_801cacf8)[iVar2 + 1] == '\0' && uVar6 == 1) {
    cVar1 = (&DAT_801cacf8)[iVar2 + 2];
    if (cVar1 != -1) {
      (&DAT_801cacf8)[iVar2 + 2] = cVar1 + '\x01';
    }
    if ((byte)(&DAT_801cacf8)[iVar2 + 2] < *(byte *)(iVar4 + 0x74)) {
      uVar6 = 0;
    }
    else {
      (&DAT_801cacf8)[iVar2 + 1] = 1;
    }
  }

  if ((int)(char)(&DAT_801cacf8)[iVar2 + 1] < (int)uVar6) {
    (&DAT_801cacf8)[iVar2 + 1] = (char)uVar6;
  }
  return;
}

void FUN_overlay0__8004df04(void)

{

  FUN_8005e7f0(&DAT_801cd554,&DAT_801d55cc);
  return;
}

void FUN_overlay0__8004df34(undefined param_1)

{

  DAT_overlay0__8005b3d0 = param_1;
  return;
}

void FUN_overlay0__8004df40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_218;
  undefined2 local_216;
  undefined2 local_214;
  undefined2 local_212;
  undefined auStack_210 [512];

  uVar1 = FUN_80060924((&PTR_s_gt_sn_overlay0__8005a94c_overlay0__8005b3d4)[param_1]);
  iVar2 = FUN_8005d950(uVar1);
  FUN_8005d92c(*(ushort *)(iVar2 + 4) + 1,DAT_801c90c0);

  local_218 = 0x200;
  local_216 = 0x100;
  local_214 = 0x40;
  local_212 = 0xe0;

  FUN_8007ba70(&local_218,DAT_801c90c0 + 0x43a0,0);
  FUN_8007af30();
  FUN_80067960(auStack_210,DAT_801c90c0 + 0x20,0,0);
  FUN_80067824(auStack_210,0x18,0);
  FUN_8005d92c(*(undefined2 *)(iVar2 + 4),&DAT_80178894);
  FUN_8006101c(&DAT_80178894,0x18);

  iVar2 = DAT_801c90a0;
  iVar3 = DAT_801c90a0 + 0x69c;
  *(undefined *)(DAT_801c90a0 + 0x699) = 0x40;
  *(undefined *)(iVar2 + 0x698) = 1;
  *(undefined2 *)(iVar2 + 0x690) = 0x7fd7;
  *(undefined2 *)(iVar2 + 0x692) = 9;
  *(undefined **)(iVar2 + 0x694) = &DAT_80178894;
  FUN_8006c274(iVar3,0xa0000);
  FUN_overlay0__80049780(DAT_801c90a0 + 0x7d4,0x160,0x1e0);
  *(undefined *)(DAT_801c90a0 + 0x8a8) = 0;
  return;
}

void FUN_overlay0__8004e444(void)

{

  FUN_80069ef8();
  return;
}

void FUN_overlay0__8004e804(int param_1,int param_2)

{

  *(undefined4 *)(param_1 + 0xa8) = 0xc0000;

  if (param_2 < 0x5a) {
    *(int *)(param_1 + 0xa8) = (param_2 * 0x80000) / 0x5a + 0x40000;
  }

  *(undefined2 *)(param_1 + 0xb0) = 0;

  if (param_2 < 0x5a) {
    *(short *)(param_1 + 0xb0) = (0x5a - (short)param_2) * -6;
  }

  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0xffe0;
  *(ushort *)(param_1 + 0xae) = (*(short *)(param_1 + 0xae) + 0x84) - (short)param_2 & 0x3fff;
  return;
}

void FUN_overlay0__8004f408(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;

  uVar1 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1d8,param_3,0x80);
  puVar2 = (undefined2 *)FUN_8007d024(param_1,uVar1);

  *puVar2 = 0x7e;
  puVar2[2] = 0x160;
  puVar2[1] = param_2;
  puVar2[3] = 1;
  return;
}

void FUN_overlay0__8004f8b4
               (undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
               int param_6,undefined4 param_7)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined auStack_98 [12];
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined local_7c;
  undefined auStack_78 [64];
  undefined4 local_38;
  short local_34;
  short local_32;
  undefined2 local_30;
  undefined2 local_2e;

  FUN_8006ac68(auStack_98,6);
  local_7c = 1;
  local_88 = param_1;
  FUN_8007da80(auStack_98,&DAT_801c9150);
  local_8c = local_8c & 0xff9fffff | 0x200000;
  local_84 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1de_2,param_7,0x80);

  FUN_8008cf34(auStack_78,&LAB_overlay0__8005a97a_2,param_4 + 1);
  FUN_8006af40(auStack_98,auStack_78,param_5,param_6 + 0xc,1,0xfffffffe,0);

  if (param_2 == 0) {

    local_84 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1dc,param_7,0x80);
    FUN_8007da80(auStack_98,&DAT_801c9120);
    FUN_8006adb4(auStack_98,&DAT_801c7016,param_5 + 0x97,param_6 + 0x10,2);
  }
  else {

    FUN_overlay0__800495e4(param_2 + param_4 * 0x20,param_1,auStack_98,param_5,param_6,param_7);
    uVar2 = FUN_8006b548(&DAT_overlay0__8005b1c4,&DAT_overlay0__8005b1dc,param_7,0x80);
    local_84 = uVar2;
    FUN_8007da80(auStack_98,&DAT_801c9120);
    sVar1 = FUN_8006ae28(auStack_98,param_3,param_5 + 0x12e,param_6 + 0x16,2);
    psVar3 = (short *)FUN_8007d024(param_1,uVar2);
    psVar3[1] = (short)param_6 + 10;
    psVar3[2] = 4;
    *psVar3 = ((short)param_5 + 0x128) - sVar1;
    psVar3[3] = 6;
    FUN_8007da44(param_1,0x220);
  }

  local_30 = 0x160;
  local_2e = 0x30;
  local_34 = (short)param_5 + 0xb8;
  local_32 = (short)param_6;
  local_38 = FUN_8006b548(&DAT_overlay0__8005b1c4,&LAB_overlay0__8005b1e2_2,param_7,0x80);
  FUN_800683fc(param_1,&local_38,0x18);
  FUN_8007da44(param_1,0);
  return;
}

void FUN_overlay0__8004fb30(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar7 = 0x68;
  uVar5 = (uint)DAT_801d5867;
  iVar8 = DAT_801c90a0 + 0x53c;
  sVar1 = *(short *)(DAT_801c90a0 + 0x5de);
  sVar2 = *(short *)(DAT_801c90a0 + 0x5dc);

  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    iVar4 = param_4 + iVar6 * -4;

    if (-1 < iVar4) {

      iVar3 = iVar4 * 0x80;
      if (8 < iVar4) {
        iVar3 = 0x400;
      }
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }

      if (sVar2 <= iVar6) {
        iVar8 = 0;
      }

      FUN_overlay0__8004f8b4
                (param_1,iVar8,&DAT_801cacf8 + iVar7 + sVar1 * 0xa4 + uVar5 * 0x668,iVar6,
                 (param_2 + 0x80) - (iVar3 >> 3),param_3,iVar3 >> 3);
    }

    param_2 = param_2 + 4;
    param_3 = param_3 + 0x36;
    iVar7 = iVar7 + 0xc;
  }
  return;
}

void FUN_overlay0__8004fc8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 local_38 [6];

  sVar5 = 0;
  FUN_overlay0__8004ccf8(0,0);
  iVar1 = 1;
  puVar2 = local_38;
  local_38[0] = 0x2004650;

  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0x2505050;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  local_38[iVar1] = 0x2003060;

  iVar3 = 0x53c;
  iVar1 = 4;
  for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
    if (*(int *)(&DAT_801cacf8 + iVar1 + param_2 * 0xa4 + param_1 * 0x668) != -1) {
      sVar5 = sVar5 + 1;
      FUN_overlay0__800495a8
                (DAT_801c90a0 + iVar3,0xffffffff,
                 &DAT_801cacf8 + iVar1 + param_2 * 0xa4 + param_1 * 0x668,local_38);
    }
    iVar3 = iVar3 + 0x20;
    iVar1 = iVar1 + 0x14;
  }
  *(short *)(DAT_801c90a0 + 0x5dc) = sVar5;
  return;
}

void FUN_overlay0__80050494(undefined4 param_1)

{

  DAT_overlay0__8005b508 = &DAT_801c90ac;
  DAT_overlay0__8005b504 = DAT_801c90a8;
  DAT_overlay0__8005b500 = param_1;
  FUN_8007284c(&DAT_overlay0__8005b500);
  return;
}

void FUN_overlay0__800504d8(undefined4 param_1)

{

  DAT_overlay0__8005b508 = &DAT_801c90ac;
  DAT_overlay0__8005b504 = DAT_801c90a8;
  DAT_overlay0__8005b500 = param_1;
  FUN_8007284c(&DAT_overlay0__8005b500);
  return;
}

void FUN_overlay0__80050560(undefined4 param_1,undefined4 param_2)

{

  DAT_overlay0__8005b508 = &DAT_801c90ac;
  DAT_overlay0__8005b504 = DAT_801c90a8;
  DAT_overlay0__8005b500 = param_2;
  DAT_801c90c4 = param_1;
  FUN_8007284c(&DAT_overlay0__8005b500);
  return;
}

void FUN_overlay0__80050b4c(int param_1)

{
  int iVar1;

  iVar1 = DAT_801c90a0;
  *(undefined *)(DAT_801c90a0 + 0x9d) = 0x40;
  *(undefined *)(iVar1 + 0x9c) = 1;
  *(undefined2 *)(iVar1 + 0x94) = 0x7fd7;
  *(undefined2 *)(iVar1 + 0x96) = 9;
  *(undefined4 *)(iVar1 + 0x98) = (&DAT_800a9f00)[param_1 * 0x2d0];
  FUN_8006c274(iVar1 + 0xa0,0x60000);
  return;
}

void FUN_overlay0__80050bc4(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 local_18 [2];

  *(undefined *)(param_1 + 0x35) = 1;
  *(undefined2 *)(param_1 + 0x2b) = 0x5e;
  *(undefined2 *)((int)param_1 + 0xae) = 0x1500;
  param_1[0x2a] = 0x80000;
  *(undefined2 *)(param_1 + 0x31) = 0x160;
  *(undefined2 *)((int)param_1 + 0xc6) = 300;
  *(undefined2 *)(param_1 + 0x32) = 0xff50;
  *(undefined2 *)((int)param_1 + 0xca) = 0xb0;
  *(undefined2 *)(param_1 + 0x33) = 0x85;
  *(undefined2 *)((int)param_1 + 0xce) = 0xffcc;
  *(undefined2 *)(param_1 + 0x34) = 400;
  *(undefined *)((int)param_1 + 0xd5) = 0;
  param_1[0x36] = 0x3e3e3e;

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

  local_18[0] = FUN_8007d23c(0);
  uVar1 = FUN_80083ae0(local_18);
  *(ushort *)((int)param_1 + 0xae) = uVar1 & 0xfff;
  FUN_80083ae0(local_18);
  FUN_80083ae0(local_18);
  uVar1 = FUN_80083ae0(local_18);
  *(ushort *)(param_1 + 0x2b) = (uVar1 & 0x7f) + 0x50;
  return;
}
