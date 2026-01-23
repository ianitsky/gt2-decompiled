// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "ps1_stubs.h"
#include <stdint.h>
#include <stddef.h>

// CONCAT11 macro: Concatenate 1 byte with 1 byte into a 16-bit value
#define CONCAT11(byte1, byte2) \
    (((uint16_t)(byte1) << 8) | ((uint16_t)(byte2)))

// Forward declarations for overlay3 functions
void FUN_overlay3__80010000(undefined4 *param_1);
void FUN_overlay3__80010024(undefined4 *param_1, undefined4 param_2);
void FUN_overlay3__80011858(undefined4 *param_1, undefined4 *param_2);

// Forward declarations for overlay5 functions
void FUN_overlay5__8001049c(void);
undefined4 FUN_overlay5__80010634(uint *param_1);
bool FUN_overlay5__800106ec(uint *param_1);
undefined4 FUN_overlay5__80010894(uint *param_1);
void FUN_overlay5__80010610(undefined4 param_1);
void FUN_overlay5__80010950(int param_1, undefined param_2);
void FUN_overlay5__80010994(int param_1, int param_2, int param_3);
void FUN_overlay5__800109e4(undefined2 *param_1, int param_2, undefined2 param_3, u_long *param_4);
void FUN_overlay5__80010a90(int param_1);
void FUN_overlay5__80010ac0(ushort *param_1, ushort *param_2);
void FUN_overlay5__8001090c(uint *param_1);

// Forward declarations for other functions
void FUN_8005f958(undefined4 *param_1, undefined2 *param_2);
void FUN_8005eac0(undefined4 *param_1, int param_2, int param_3);
uint FUN_80078138(int param_1);
uint FUN_80083ae0(undefined4 param_1);
void *FUN_80078038(int param_1, int param_2);
int FUN_80060b70(undefined4 param_1);
undefined2 FUN_80060d28(undefined4 param_1, int param_2);
uint FUN_80060bec(undefined4 param_1, int *param_2, int *param_3);
undefined4 FUN_80060ae8(undefined4 param_1);
void FUN_8008cedc(undefined4 *param_1, undefined4 param_2);
void FUN_800771ac(undefined4 *param_1, undefined4 *param_2);
void FUN_8008ce30(void *param_1, int param_2, int param_3);
void FUN_80081c5c(void);
undefined4 FUN_80081cf8(int param_1);
int FUN_8007c4ec(int param_1);
void FUN_8007c570(void);
void FUN_8007ba70(undefined4 *param_1, undefined4 param_2, int param_3);
void FUN_8007af30(void);
void FUN_8007d23c(int param_1);
void FUN_8007d0f0(int param_1);
void FUN_80080858(void);
void FUN_8007fab8(undefined4 *param_1, int param_2, undefined4 *param_3);
void FUN_8007fb38(undefined4 *param_1);
void FUN_800808c4(undefined4 *param_1, undefined4 param_2);
void FUN_800833e8(undefined4 *param_1);
void *FUN_80083d0c(undefined4 *param_1, undefined4 *param_2);
void FUN_8007f830(int param_1);

// GTE functions
void gte_ldLZCS(uint param_1);
int gte_stLZCR(void);

// External variables
extern undefined1 UNK_801cd558[];
extern undefined4 DAT_80171034;
extern undefined4 DAT_801727ea;
extern undefined4 DAT_801727ec;
extern undefined4 DAT_801d585c;
extern undefined4 DAT_801d5fa0;
extern undefined4 DAT_800a8d5c;
extern undefined4 DAT_801f068c;
extern undefined4 DAT_801c93cc;
extern undefined4 DAT_801f0531;
extern undefined4 DAT_801f0528;
extern undefined4 DAT_801f0534;
extern undefined4 DAT_801f0538;
extern undefined4 DAT_801f0532;
extern undefined4 DAT_801f0533;
extern undefined4 DAT_801f053c;
extern undefined4 DAT_801f0676;
extern undefined4 DAT_800959ac;
extern undefined4 DAT_8017c9dc;
extern undefined4 DAT_80132280;
extern undefined4 DAT_800a6f5c;
extern undefined4 LAB_overlay5__800105ac;
extern undefined4 LAB_overlay5__80010420;
extern undefined4 LAB_overlay5__8001156c;
extern undefined4 LAB_overlay5__800120cc;
extern undefined4 LAB_overlay5__800120d2_2;
extern undefined4 LAB_overlay5__800114cc;

void FUN_overlay3__80011b0c(undefined4 *param_1,undefined4 *param_2)

{

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort local_18;
  ushort local_16;
  undefined2 local_14;
  byte local_12;

  puVar2 = (undefined4 *)((char *)param_1 + 8);

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
  } while (puVar1 != param_2 + 0x20);

  *puVar2 = *puVar1;

  FUN_8005f958(param_2,&local_18);

  *(ushort *)((char *)param_1 + 0x98) = (*(ushort *)((char *)param_1 + 0x98) & 0xc000) | local_16;

  *(undefined2 *)((char *)param_1 + 0x96) = local_14;

  *(ushort *)((char *)param_1 + 0x94) = (*(ushort *)((char *)param_1 + 0x94) & 0xe000) | local_18;

  *(ushort *)((char *)param_1 + 0x94) = (local_18 & 0x1fff) | ((ushort)local_12 << 0xd);

  *(ushort *)((char *)param_1 + 0x98) =
       (*(ushort *)((char *)param_1 + 0x98) & 0x7fff) | ((ushort)(0 < *(short *)((char *)param_2 + 0x17d6)) << 0xf)
  ;
  return;
}

void FUN_overlay3__80011be8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)((char *)UNK_801cd558 + param_1 * 0x4028 + param_2 * 0xa4);

  FUN_overlay3__80010000(&DAT_80171034);

  FUN_overlay3__80010024(&DAT_80171034,*puVar2);

  FUN_overlay3__80011858(&DAT_80171034,puVar2 + 2);

  if (param_3 == 0) {

    if (DAT_801727ea != 7 && DAT_801727ec != 7) goto LAB_overlay3__80011cd4;

    FUN_8005eac0(&DAT_80171034,3,0);
    uVar1 = 0;
  }
  else {

    FUN_8005eac0(&DAT_80171034,3,7);
    uVar1 = 7;
  }

  FUN_8005eac0(&DAT_80171034,4,uVar1);

LAB_overlay3__80011cd4:

  FUN_overlay3__80011b0c(puVar2,&DAT_80171034);
  return;
}

int FUN_overlay3__80011cfc(int param_1,int param_2,int param_3)

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

int FUN_overlay3__80011d38(int param_1,int param_2,int param_3)

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

void FUN_overlay3__80011d74(uint param_1,undefined2 *param_2)

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

  uVar2 = FUN_overlay3__80011cfc(uVar8,uVar6,uVar7);
  iVar3 = FUN_overlay3__80011d38(uVar8,uVar6,uVar7);

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

ushort FUN_overlay3__80011ec0
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
  undefined2 auStack_40 [2];
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

      uVar4 = *(uint *)((char *)param_3 + (uVar4 % uVar3) * 4 + 4);

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
          goto LAB_overlay3__800120dc;
        }

        uVar3 = FUN_80060bec(uVar13,&local_38,&local_34);
        iVar14 = 0;
        goto LAB_overlay3__80012078;
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
LAB_overlay3__80012078:

    uVar10 = FUN_80083ae0(param_4);

    iVar6 = (uVar10 % uVar3) * 2;

    FUN_overlay3__80011d74(*(undefined2 *)((char *)local_38 + iVar6),auStack_40);
    iVar14 = iVar14 + 1;

    if (5 < local_3e) break;
  }

  cVar9 = *(char *)((char *)local_34 + uVar10 % uVar3);

  uVar2 = *(undefined2 *)((char *)local_38 + iVar6);

LAB_overlay3__800120dc:

  *param_1 = uVar13;
  *(char *)((char *)param_1 + 5) = cVar9;
  *(undefined2 *)((char *)param_1 + 6) = uVar2;
  *(short *)((char *)param_1 + 8) = (short)uVar4;
  return local_30;
}

void FUN_overlay3__80012130(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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

    uVar2 = *(undefined2 *)((char *)local_18 + (uVar4 % uVar3) * 2);

    *(undefined *)((char *)param_1 + 5) = *(undefined *)((char *)local_14 + uVar4 % uVar3);
  }
  else {

    cVar1 = "-0123456789abcdefghijklmnopqrstuvwxyz"[param_3 & 0x3f];

    uVar2 = FUN_80060d28(param_2,(int)cVar1);

    *(char *)((char *)param_1 + 5) = cVar1;
  }

  *(undefined2 *)((char *)param_1 + 6) = uVar2;
  return;
}

undefined4 *
FUN_overlay3__800127ac
          (int param_1,int param_2,int param_3,undefined param_4,undefined param_5,int param_6,
          undefined2 param_7,undefined2 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;

  puVar6 = (undefined4 *)((char *)param_1 + param_2 * 0xd0 + 0x5c);

  if (-1 < param_3) {

    FUN_8008ce30(puVar6,0,0xd0);

    *(undefined *)(puVar6 + 0x23) = 1;

    *(char *)((char *)puVar6 + 0x8d) = (char)param_3;
  }

  *(undefined *)((char *)puVar6 + 0x8e) = param_4;
  puVar2 = puVar6 + 2;
  *(undefined *)((char *)puVar6 + 0x8f) = param_5;

  puVar1 = (undefined4 *)(param_6 + 8);

  *puVar6 = *(undefined4 *)(param_6 + 0x8c);
  puVar6[1] = *(undefined4 *)(param_6 + 4);

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
  } while (puVar1 != (undefined4 *)((char *)param_6 + 0x88));

  *puVar2 = *puVar1;

  *(byte *)((char *)puVar6 + 0x82) = *(byte *)((char *)puVar6 + 0x82) | 0x40;

  uVar3 = FUN_80060ae8(*puVar6);
  FUN_8008cedc(puVar6 + 0x24,uVar3);

  *(undefined2 *)((char *)param_1 + 0x582) = param_7;
  *(undefined2 *)((char *)param_1 + 0x584) = param_8;

  FUN_800771ac(puVar6 + 2,(undefined4 *)((char *)DAT_801de8ba + param_2 * 0x70));

  return puVar6;
}

void FUN_overlay3__8001290c(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  cVar1 = *(char *)(param_1 + 2);

  if (cVar1 == '\x04') {

    iVar6 = (int)*(short *)((char *)param_1 + 6);
    if (iVar6 < 0) {

      return;
    }

    FUN_overlay3__80011be8(iVar6,(int)*(short *)((char *)param_1 + 8),*(undefined4 *)((char *)param_1 + 0x2cc));

    cVar1 = *(char *)((char *)param_1 + 0x18);
    uVar3 = 0xffffffff;

    puVar4 = (undefined *)((char *)UNK_801cd558 + iVar6 * 0x4028 + *(short *)((char *)param_1 + 8) * 0xa4);
  }
  else {
    if (cVar1 < '\x05') {

      iVar7 = 0;
      iVar6 = param_1;

      if (cVar1 != '\0') {

        return;
      }

      for (; iVar7 < 2; iVar7 = iVar7 + 1) {

        iVar5 = (int)*(short *)((char *)iVar6 + 0xa0);
        if (-1 < iVar5) {

          sVar2 = *(short *)((char *)iVar6 + 0xa4);

          FUN_overlay3__80011be8(iVar5,(int)sVar2,*(undefined4 *)((char *)param_1 + 0x2cc));

          FUN_overlay3__800127ac
                    ((int)&DAT_801d585c,iVar7,iVar7,iVar7 + 3,(int)*(char *)((char *)param_1 + iVar7 + 0xb6),
                     (int)((char *)UNK_801cd558 + iVar5 * 0x4028 + sVar2 * 0xa4),0xffffffff,0xffffffff);
        }

        iVar6 = (int)((char *)iVar6 + 2);
      }
      return;
    }

    if (cVar1 != '\x06') {

      return;
    }

    iVar6 = (int)*(short *)((char *)param_1 + 6);
    if (iVar6 < 0) {

      return;
    }

    sVar2 = *(short *)((char *)param_1 + 8);

    FUN_overlay3__80011be8(iVar6,(int)sVar2,*(undefined4 *)((char *)param_1 + 0x2cc));

    uVar3 = 0;
    cVar1 = *(char *)((char *)param_1 + 0x18);

    puVar4 = (undefined *)((char *)UNK_801cd558 + iVar6 * 0x4028 + sVar2 * 0xa4);
  }

  FUN_overlay3__800127ac
            (&DAT_801d585c,0,uVar3,3,(int)cVar1,puVar4,iVar6,(int)*(short *)(param_1 + 8));
  return;
}

void FUN_overlay3__80012b68(int param_1,int param_2)

{

  FUN_overlay3__80010000(&DAT_801d5fa0);

  FUN_overlay3__80010024
            (&DAT_801d5fa0,*(undefined4 *)((char *)UNK_801cd558 + param_1 * 0x4028 + param_2 * 0xa4));

  FUN_overlay3__80011858
            (&DAT_801d5fa0,
             (undefined4 *)((char *)UNK_801cd558 + param_1 * 0x4028 + param_2 * 0xa4 + 8));
  return;
}

void FUN_overlay5__80010000(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;

  DAT_800a8d5c = param_1;

  param_1[1] = 0;

  FUN_overlay5__80010610(param_1 + 2);

  FUN_overlay5__80010950(param_1 + 9,param_2);

  uVar1 = DAT_801f068c;
  DAT_801f068c = &LAB_overlay5__800105ac;
  *param_1 = uVar1;
  return;
}

void FUN_overlay5__80010068(undefined4 *param_1)

{

  DAT_801f068c = *param_1;
  return;
}

void FUN_overlay5__80010078(int param_1,undefined2 param_2,undefined4 param_3)

{

  *(undefined2 *)(param_1 + 0x12) = param_2;

  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

void FUN_overlay5__80010088(int param_1,undefined4 param_2,undefined4 param_3)

{

  *(undefined4 *)(param_1 + 0x44) = param_2;

  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}

void FUN_overlay5__80010094(int param_1,undefined4 param_2,undefined4 param_3)

{

  *(undefined4 *)(param_1 + 0x34) = param_2;

  *(undefined4 *)(param_1 + 0x38) = param_3;
  return;
}

void FUN_overlay5__800100a4(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 * 4 + -0x7ff6dc70);

  FUN_overlay5__800100f8
            (param_1,iVar1 + DAT_801c93cc,
             (*(int *)((param_2 + 1) * 4 + -0x7ff6dc70) - iVar1) + -0x19);
  return;
}

void FUN_overlay5__800100f8(undefined4 param_1,int param_2,int param_3)

{

  FUN_80081c5c();

  DAT_801f0531 = 0xc0;
  DAT_801f0528 = 0x8000;
  DAT_801f0530 = 0;

  DAT_801f0534 = param_2;
  DAT_801f0538 = param_2 + param_3 + -1;

  DAT_801f0532 = 1;
  DAT_801f0533 = 7;

  DAT_801f053c = &LAB_overlay5__80010420;
  return;
}

void FUN_overlay5__80010174(int param_1)

{

  *(undefined4 *)(param_1 + 0x4c) = 0;

  DecDCTReset(1);

  DecDCToutCallback(FUN_overlay5__8001049c);

  FUN_overlay5__80010634((uint *)((char *)param_1 + 8));
  return;
}

undefined4 FUN_overlay5__800101b4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = FUN_80081cf8(0);

  uVar2 = 1;

  if (*(short *)((char *)param_1 + 0x10) == 0) {

    if ((*(uint *)((char *)param_1 + 8) & 4) == 0) {

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

void FUN_overlay5__80010250(int param_1)

{

  DecDCToutCallback((func *)0x0);

  FUN_overlay5__80010a90((int)((char *)param_1 + 0x24));

  FUN_overlay5__800106a4((uint *)((char *)param_1 + 8));
  return;
}

void FUN_overlay5__80010288(void)

{

  FUN_8007c4ec(6);
  return;
}

bool FUN_overlay5__800102a8(int param_1)

{
  int videoDataPointer;

  videoDataPointer = *(int *)((char *)param_1 + 0x4c);

  if (videoDataPointer != 0) {

    FUN_overlay5__80010994
              ((int)((char *)param_1 + 0x24),(int)*(short *)((char *)param_1 + 0x40),(int)*(short *)((char *)param_1 + 0x42));

    FUN_overlay5__800109e4
              ((undefined2 *)((char *)param_1 + 0x24),(int)*(short *)((char *)param_1 + 0x3c),(int)*(short *)((char *)param_1 + 0x3e),(u_long *)videoDataPointer)
    ;
  }

  return videoDataPointer != 0;
}

void FUN_overlay5__80010318(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 videoHeight;
  int bufferPointer;
  undefined4 tempData1;
  undefined4 tempData2;

  bufferPointer = FUN_overlay5__80010894(param_1 + 8);

  *(undefined2 *)(param_1 + 0x3c) = param_2;
  *(undefined2 *)(param_1 + 0x3e) = param_3;

  tempData2 = *(undefined4 *)(param_1 + 0x44);

  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(bufferPointer + 4);

  videoHeight = *(undefined2 *)(bufferPointer + 6);

  tempData1 = *(undefined4 *)(param_1 + 0x48);

  *(undefined4 *)(param_1 + 0x48) = tempData2;

  *(undefined2 *)(param_1 + 0x42) = videoHeight;

  *(undefined4 *)(param_1 + 0x44) = tempData1;

  FUN_overlay5__80010ac0(bufferPointer,tempData2);

  FUN_overlay5__8001090c((uint *)((char *)param_1 + 8));

  *(undefined4 *)(param_1 + 0x4c) = tempData2;
  return;
}

void FUN_overlay5__800103a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

  FUN_overlay5__800102a8((int)param_1);

  FUN_overlay5__80010318((int)param_1,param_2,param_3);
  return;
}

uint FUN_overlay5__80010450(int param_1)

{
  int streamStatus;
  uint statusFlags;

  statusFlags = *(uint *)((char *)param_1 + 8);

  if (*(char *)((char *)param_1 + 0x2c) == '\0') {

    *(uint *)((char *)param_1 + 8) = statusFlags | 8;
    statusFlags = statusFlags >> 1 & 2;
  }
  else {

    streamStatus = FUN_overlay5__800106ec(param_1 + 8);

    statusFlags = (uint)(streamStatus != 0) << 1;
  }

  return statusFlags;
}

void FUN_overlay5__8001049c(void)

{

  FUN_overlay5__800104c4((int)DAT_800a8d5c);
  return;
}

void FUN_overlay5__800104c4(int param_1)

{
  char videoMode;
  ushort frameCounter;
  uint newFrameCounter;

  frameCounter = *(ushort *)((char *)param_1 + 0x32);

  videoMode = *(char *)(param_1 + 0x2d);

  FUN_8007ba70(param_1 + 0x24,*(undefined4 *)(param_1 + (frameCounter & 1) * 4 + 0x34),0);

  newFrameCounter = frameCounter - 1;
  *(short *)(param_1 + 0x32) = (short)newFrameCounter;

  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + *(short *)(param_1 + 0x28);

  if ((*(uint *)(param_1 + 8) & 8) != 0) {

    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;

    FUN_overlay5__800106ec(param_1 + 8);
  }

  if ((newFrameCounter == 0) || (*(char *)(param_1 + 0x2c) != '\0')) {

    *(undefined *)(param_1 + 0x2c) = 1;
  }
  else {

    if (videoMode == '\0') {

      FUN_8007af30();
    }

    DecDCTout(*(u_long **)(param_1 + (newFrameCounter & 1) * 4 + 0x34),(uint)*(ushort *)(param_1 + 0x2e));
  }
  return;
}

void FUN_overlay5__800105d4(int param_1)

{

  if ((*(char *)((char *)param_1 + 0x2c) == '\x01') &&
     (*(undefined *)((char *)param_1 + 0x2c) = 2, *(code **)((char *)param_1 + 4) != (code *)0x0)) {

    (**(code **)((char *)param_1 + 4))();
  }
  return;
}

void FUN_overlay5__80010610(undefined4 param_1)

{

  FUN_8008ce30(param_1,0,0x1c);
  return;
}

undefined4 FUN_overlay5__80010634(uint *param_1)

{
  undefined4 interruptState;
  undefined4 configResult;
  uint bufferPointer;

  interruptState = FUN_80081cf8(0);

  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((char *)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = *param_1 & 1;

  bufferPointer = *(uint *)param_1[3];

  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = bufferPointer;

  configResult = FUN_8007c4ec(5);

  FUN_80081cf8(interruptState);

  return configResult;
}

void FUN_overlay5__800106a4(uint *param_1)

{
  undefined4 interruptState;

  interruptState = FUN_80081cf8(0);

  *param_1 = *param_1 | 4;

  FUN_8007c570();

  FUN_80081cf8(interruptState);
  return;
}

bool FUN_overlay5__800106ec(uint *param_1)

{
  void *bufferAddress;
  uint sectorCount;
  uint statusFlags;
  uint tempFlags;
  ushort bufferIndex;
  void *nextBuffer;
  uint processedSectors;
  ushort sectorIndex;
  uint totalSectors;
  short sectorHeader1;
  short sectorHeader2;
  ushort sectorCount1;
  ushort sectorCount2;
  uint sectorSize;
  uint totalSize;

  CdGetSector(&sectorHeader1,8);

  if (sectorHeader1 != 0x160) {
    return false;
  }

  if (sectorHeader2 != 0x5349) {
    return false;
  }

  statusFlags = *param_1;
  processedSectors = param_1[6];
  totalSectors = param_1[5];
  bufferAddress = (void *)param_1[4];
  bufferIndex = *(ushort *)((char *)param_1 + 6);
  sectorIndex = *(ushort *)(param_1 + 2);

  if ((statusFlags & 4) != 0) {
    return true;
  }

  sectorCount = (uint)sectorCount1;

  if (sectorCount == 0) {

    statusFlags = statusFlags & 0xfffffffd;
    tempFlags = statusFlags;

    if (sectorIndex == *(ushort *)((char *)param_1 + 10)) {
LAB_overlay5__800107e4:

      statusFlags = tempFlags | 2;

      if ((totalSize & 0x3fffffff) <= sectorSize) {
        statusFlags = tempFlags | 6;
      }
      goto LAB_overlay5__8001084c;
    }

    bufferAddress = *(void **)(((int)((uint)bufferIndex << 0x10) >> 0xe) + param_1[3]);
    processedSectors = 0;
    totalSectors = sectorSize;
  }
  else {
    tempFlags = statusFlags;

    if ((((statusFlags & 2) != 0) || (totalSectors != sectorSize)) || (processedSectors != sectorCount))
    goto LAB_overlay5__800107e4;
  }

  processedSectors = processedSectors + 1;
  nextBuffer = (void *)((char *)bufferAddress + 0x7e0);

  if (sectorCount == sectorCount2 - 1) {

    bufferIndex = bufferIndex + 1;
    sectorIndex = sectorIndex + 1;

    if (bufferIndex == *(ushort *)((char *)param_1 + 10)) {
      bufferIndex = 0;
    }

    nextBuffer = *(void **)(((int)((uint)bufferIndex << 0x10) >> 0xe) + param_1[3]);

    if ((totalSize & 0x3fffffff) <= sectorSize) {
      statusFlags = statusFlags | 4;
    }
  }

  CdGetSector(bufferAddress,0x1f8);
  bufferAddress = nextBuffer;

LAB_overlay5__8001084c:

  *param_1 = statusFlags;
  param_1[6] = processedSectors;
  param_1[5] = totalSectors;
  param_1[4] = (uint)bufferAddress;
  *(ushort *)((char *)param_1 + 6) = bufferIndex;
  *(ushort *)(param_1 + 2) = sectorIndex;

  return (statusFlags & 4) != 0;
}

undefined4 FUN_overlay5__80010894(uint *param_1)

{
  undefined4 interruptState;
  int nextIndex;
  undefined4 bufferData;

  interruptState = FUN_80081cf8(0);

  bufferData = 0;

  if (*(short *)((char *)param_1 + 8) != 0) {

    nextIndex = *(short *)((char *)param_1 + 4) + 1;

    bufferData = *(undefined4 *)((char *)(*(undefined4 *)((char *)param_1 + 0xc)) + *(short *)((char *)param_1 + 4) * 4);

    if (nextIndex == *(short *)((char *)param_1 + 10)) {
      nextIndex = 0;
    }

    *(short *)((char *)param_1 + 4) = (short)nextIndex;
  }

  FUN_80081cf8(interruptState);

  return bufferData;
}

void FUN_overlay5__8001090c(uint *param_1)

{
  undefined4 interruptState;
  short bufferCount;

  interruptState = FUN_80081cf8(0);

  bufferCount = *(short *)((char *)param_1 + 8);

  if (bufferCount != 0) {
    bufferCount = bufferCount + -1;
  }

  *(short *)((char *)param_1 + 8) = bufferCount;

  FUN_80081cf8(interruptState);
  return;
}

void FUN_overlay5__80010950(int param_1,undefined param_2)

{

  FUN_8008ce30(param_1,0,0x18);

  *(undefined *)(param_1 + 8) = 2;

  *(undefined *)(param_1 + 9) = param_2;
  return;
}

void FUN_overlay5__80010994(int param_1,int param_2,int param_3)

{
  short bufferSize;
  uint alignedHeight;
  undefined2 bufferType;

  alignedHeight = param_3 + 0xfU & 0xfffffff0;

  *(short *)(param_1 + 0xc) = (short)(param_2 + 0xf >> 4);

  if (*(char *)(param_1 + 9) == '\0') {

    bufferSize = (short)(alignedHeight << 3);
    bufferType = 0x10;
  }
  else {

    bufferSize = (short)alignedHeight * 0xc;
    bufferType = 0x18;
  }

  *(undefined2 *)(param_1 + 4) = bufferType;
  *(short *)(param_1 + 6) = (short)param_3;
  *(short *)(param_1 + 10) = bufferSize;
  return;
}

void FUN_overlay5__800109e4(undefined2 *param_1,int param_2,undefined2 param_3,u_long *param_4)

{
  ushort bufferIndex;
  uint decodingMode;

  decodingMode = (uint)*(byte *)((char *)param_1 + 9);

  bufferIndex = param_1[6];

  *(undefined *)(param_1 + 4) = 0;

  param_1[7] = bufferIndex;

  if (decodingMode == 0) {

    *param_1 = (short)param_2;
  }
  else {

    *param_1 = (short)(param_2 * 3 >> 1);
  }

  param_1[1] = param_3;

  DecDCTReset(1);

  if (decodingMode == 0) {
    FUN_8007af30();
  }

  DecDCTin(param_4,decodingMode);

  DecDCTout(*(u_long **)(param_1 + (bufferIndex & 1) * 2 + 8),(uint)(ushort)param_1[5]);
  return;
}

void FUN_overlay5__80010a90(int param_1)

{

  DecDCTReset(1);

  *(undefined *)(param_1 + 8) = 3;
  return;
}

void FUN_overlay5__80010ac0(ushort *param_1,ushort *param_2)

{
  undefined dataByte1;
  undefined dataByte2;
  ushort dataValue;
  undefined *dataBuffer;
  uint bitData1;
  uint bitData2;
  int bitCount1;
  int bitCount2;
  ushort *outputBuffer;
  int bitOffset;
  undefined *dataBuffer2;
  ushort *sourceData;
  ushort *sourceData2;
  int blockCount;
  int totalBlocks;

  *param_2 = *param_1;
  param_2[1] = param_1[1];

  totalBlocks = ((int)(param_1[2] + 0xf) >> 4) * ((int)(param_1[3] + 0xf) >> 4);

  sourceData = (ushort *)((int)(param_1 + 5) + (uint)param_1[4]);

  blockCount = totalBlocks * 6;

  {
    undefined stack_buffer[256];  // Local stack buffer for allocation
    uintptr_t stack_offset = (uintptr_t)stack_buffer + sizeof(stack_buffer) - (totalBlocks * 0xc + 7U & 0xfffffff8);
    dataBuffer = (undefined *)
             FUN_80083d0c((undefined4 *)(void *)stack_offset, (undefined4 *)((char *)param_1 + 5));
  }

  bitData2 = (uint)sourceData[1];
  sourceData2 = sourceData + 2;
  totalBlocks = 0x10;
  dataBuffer2 = dataBuffer + blockCount;
  outputBuffer = param_2 + 2;
  bitData1 = (uint)*sourceData << 0x10;

LAB_overlay5__80010b8c:

  bitData2 = bitData1 | bitData2;

LAB_overlay5__80010b90:
  bitCount1 = totalBlocks;
  blockCount = blockCount + -1;

  if (blockCount == -1) {
    dataValue = *param_2;

    for (; outputBuffer < param_2 + (uint)dataValue * 2 + 2; outputBuffer = outputBuffer + 1) {
      *outputBuffer = 0xfe00;
    }
    return;
  }

  dataByte1 = *dataBuffer2;
  dataBuffer2 = dataBuffer2 + 1;
  dataByte2 = *dataBuffer;
  dataBuffer = dataBuffer + 1;

  *outputBuffer = CONCAT11(dataByte2,dataByte1);
  outputBuffer = outputBuffer + 1;

LAB_overlay5__80010bbc:

  gte_ldLZCS(bitData2);
  totalBlocks = bitCount1;

  if ((int)bitData2 < 0) {
    bitData1 = 3;
    if (bitData2 >> 0x1d < 6) goto code_r0x80010bd4;
    dataValue = 0x3ff;
    if (bitData2 >> 0x1d == 6) {
      dataValue = 1;
    }
    *outputBuffer = dataValue;
  }
  else {

    bitCount2 = gte_stLZCR();
    bitOffset = bitCount2 * 0x100;

    if (bitData2 >> 0x17 == 0) {
      totalBlocks = bitCount1 + -9;
      bitData2 = bitData2 << 9;
      if (totalBlocks < 1) {
        totalBlocks = bitCount1 + 7;
        dataValue = *sourceData2;
        sourceData2 = sourceData2 + 1;
        bitData2 = bitData2 | (uint)dataValue << (0x10U - totalBlocks & 0x1f);
      }
      bitCount2 = bitCount2 + -9;
    }
    else if (bitCount2 == 5) {
      totalBlocks = bitCount1 + -6;
      bitData2 = bitData2 << 6;
      if (totalBlocks < 1) {
        totalBlocks = bitCount1 + 10;
        dataValue = *sourceData2;
        sourceData2 = sourceData2 + 1;
        bitData2 = bitData2 | (uint)dataValue << (0x10U - totalBlocks & 0x1f);
      }
      *outputBuffer = (ushort)(bitData2 >> 0x10);
      bitData1 = 0x10;
      goto LAB_overlay5__80010cb8;
    }

    bitData1 = *(uint *)(&LAB_overlay5__800114cc + bitOffset + (bitData2 >> (0x17U - bitCount2 & 0x1f) & 0xfc))
            >> 0x1a;
    *outputBuffer = (ushort)*(uint *)(&LAB_overlay5__800114cc +
                               bitOffset + (bitData2 >> (0x17U - bitCount2 & 0x1f) & 0xfc));
  }

LAB_overlay5__80010cb8:
  outputBuffer = outputBuffer + 1;
  bitCount1 = totalBlocks - bitData1;
  bitData2 = bitData2 << (bitData1 & 0x1f);

  if (bitCount1 < 1) {
    bitCount1 = bitCount1 + 0x10;
    dataValue = *sourceData2;
    sourceData2 = sourceData2 + 1;
    bitData2 = bitData2 | (uint)dataValue << (0x10U - bitCount1 & 0x1f);
  }
  goto LAB_overlay5__80010bbc;

code_r0x80010bd4:

  *outputBuffer = 0xfe00;
  outputBuffer = outputBuffer + 1;
  bitData2 = bitData2 << 2;
  totalBlocks = bitCount1 + -2;
  if (bitCount1 + -2 < 1) goto code_r0x80010be8;
  goto LAB_overlay5__80010b90;

code_r0x80010be8:

  totalBlocks = bitCount1 + 0xe;
  dataValue = *sourceData2;
  sourceData2 = sourceData2 + 1;
  bitData1 = (uint)dataValue << (0x10U - totalBlocks & 0x1f);
  goto LAB_overlay5__80010b8c;
}

void FUN_overlay5__80010d38(void)

{
  undefined *memoryPointer;
  undefined4 *arrayPointer;
  int counter;

  counter = 0x1f;

  arrayPointer = &DAT_8017c9dc;
  memoryPointer = &DAT_80132280;

  do {

    *arrayPointer = memoryPointer;

    arrayPointer = arrayPointer + -1;

    counter = counter + -1;

    memoryPointer = memoryPointer + -0x46e0;
  } while (-1 < counter);

  return;
}

void FUN_overlay5__80010d78(void)

{

  FUN_8007d23c(0xffffffff);

  FUN_8007f830(1);

  FUN_8007d23c(3);
  return;
}

void FUN_overlay5__80010da8(void)

{
  bool continueLoop;
  int bufferOffset;
  undefined videoBuffer[15360];
  undefined2 bufferParam1;
  undefined2 bufferParam2;
  undefined2 bufferParam3;
  undefined2 bufferParam4;

  FUN_overlay5__80010d78();

  FUN_8008ce30(videoBuffer,0,0x3c00);

  bufferOffset = 0;
  continueLoop = true;

  while (continueLoop) {

    bufferParam1 = 0;
    bufferParam2 = (undefined2)bufferOffset;
    bufferParam3 = 0x3c0;
    bufferParam4 = 8;

    FUN_8007ba70(&bufferParam1,videoBuffer,0);

    bufferOffset = bufferOffset + 8;

    FUN_8007af30();

    continueLoop = bufferOffset < 0x200;
  }
  return;
}

void FUN_overlay5__80010e64(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined modeValue;
  undefined *callbackPointer;

  FUN_80080858();

  *param_1 = &LAB_overlay5__8001156c;

  FUN_8007fab8(param_1 + 0x1b,0,&DAT_800a6f5c);

  param_1[0x38] = 0;
  param_1[0x39] = 1;
  param_1[0x4e] = param_2;

  if (param_3 == 0) {
    param_1[0x4f] = 0;
  }
  else {
    param_1[0x4f] = 2;
  }

  DAT_800959ac = 0;

  if (param_3 == 0) {
    modeValue = 2;
  }
  else {
    modeValue = 3;
  }

  *(undefined *)((char *)param_1 + 0x1e) = modeValue;

  param_1[0x52] = 0;

  if (param_3 == 0) {
    callbackPointer = &LAB_overlay5__800120cc;
  }
  else {
    callbackPointer = &LAB_overlay5__800120d2_2;
  }

  param_1[0x53] = callbackPointer;

  param_1[0x54] = 0;
  param_1[0x55] = 0;
  return;
}

void FUN_overlay5__80010f2c(undefined4 *param_1,undefined4 param_2)

{

  *param_1 = &LAB_overlay5__8001156c;

  FUN_8007fb38(param_1 + 0x1b);

  FUN_800808c4(param_1,param_2);
  return;
}

void FUN_overlay5__80011328(void)

{
  undefined videoSystemData[24];
  undefined4 systemParam1;
  undefined4 systemParam2;
  undefined4 systemParam3;

  FUN_overlay5__80010e64(videoSystemData,0x18,1);

  FUN_overlay5__80010da8();

  FUN_8007d23c(0xffffffff);

  FUN_8007d0f0(0x31);

  FUN_8007d23c(2);

  systemParam3 = 0x18;
  systemParam2 = 0;
  systemParam1 = 2;

  FUN_800833e8(videoSystemData);

  FUN_overlay5__80010d78();

  FUN_overlay5__80010f2c(videoSystemData,2);
  return;
}

void FUN_overlay5__800113a8(void)

{
  undefined videoSystemData[24];
  undefined4 systemParam1;
  undefined4 systemParam2;
  undefined4 systemParam3;
  undefined4 systemParam4;

  FUN_overlay5__80010e64(videoSystemData,0x1a,0);

  FUN_overlay5__80010da8();

  FUN_8007d23c(0xffffffff);

  FUN_8007d0f0(0x13);

  FUN_8007d23c(2);

  systemParam4 = 8;
  systemParam1 = 4;
  systemParam3 = 0;
  systemParam2 = 1;

  FUN_800833e8(videoSystemData);

  FUN_overlay5__80010d78();

  FUN_overlay5__80010f2c(videoSystemData,2);
  return;
}

void FUN_overlay5__80011430(void)

{
  undefined videoSystemData[24];
  undefined4 systemParam1;
  undefined4 systemParam2;
  undefined4 systemParam3;
  undefined4 systemParam4;

  FUN_overlay5__80010e64(videoSystemData,0x19,0);

  FUN_overlay5__80010da8();

  FUN_8007d23c(0xffffffff);

  FUN_8007d0f0(0x33);

  FUN_8007d23c(2);

  systemParam4 = 0xc;
  systemParam1 = 4;
  systemParam3 = 0;
  systemParam2 = 1;

  FUN_800833e8(videoSystemData);

  FUN_overlay5__80010d78();

  FUN_overlay5__80010f2c(videoSystemData,2);
  return;
}
