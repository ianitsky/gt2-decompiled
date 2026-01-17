// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_014.h"
#include <stdint.h>
#include <stddef.h>
#include <string.h>

// Forward declarations
void FUN_overlay0__80016598(int *param_1, int param_2);
void FUN_overlay0__8001882c(int param_1);

// External variables and labels
extern void LAB_overlay0__8002f4f8(void);
extern undefined4 DAT_801d58b6;
extern undefined4 DAT_800a951c;
extern void LAB_overlay0__8002f000(void);
extern undefined1 UNK_801d58e8[];
extern void *PTR_LAB_overlay0__80057d24_overlay0__8005d348;
extern void *PTR_LAB_overlay0__80050e94_overlay0__8005b7a0;
extern undefined4 DAT_801d5df6;
extern void *PTR_LAB_overlay0__8005947c_overlay0__8005d558;
extern void *PTR_LAB_overlay0__8005947c_overlay0__8005d4c8;
extern void *PTR_LAB_overlay0__80049c68_overlay0__8005ae0c;
extern void *PTR_LAB_overlay0__8004e09c_overlay0__8005b404;
extern void LAB_overlay0__8002f110(void);
extern undefined4 DAT_80091a70;
extern undefined4 DAT_801d58c0;
extern undefined4 DAT_8017d894;
extern undefined4 DAT_overlay0__8002f528;
extern undefined4 DAT_801e306e;
extern undefined4 DAT_801d58d8;
extern undefined4 DAT_801d58dc;
extern undefined4 DAT_overlay0__8002f531;
extern undefined4 DAT_overlay0__8002f530;
extern undefined4 DAT_801c6c38;
extern void LAB_overlay0__80018b00(void);
extern undefined4 DAT_801c6c40;
extern undefined4 DAT_801c6c30;
extern undefined4 DAT_overlay0__8002f534;
extern void LAB_80008000(void);
extern undefined4 _DAT_1f8003ac;

void FUN_overlay0__800166cc(int *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  uint uVar7;

  if ((param_1 != (int *)0x0) && (*(short *)(param_1 + 3) == 0)) {
    uVar6 = 0x78;
    *param_1 = *param_1 + 1;

    bVar1 = param_2[4];
    bVar2 = param_2[3];
    cVar3 = *param_2;
    cVar4 = param_2[1];
    cVar5 = param_2[2];

    if (-1 < param_1[2]) {

      uVar7 = (uint)(cVar3 != *(char *)((int)param_1 + 0x15)) << 3;
      if (cVar4 != *(char *)((int)param_1 + 0x16)) {
        uVar7 = uVar7 | 0x10;
      }
      if (cVar5 != *(char *)((int)param_1 + 0x17)) {
        uVar7 = uVar7 | 0x20;
      }

      if (((uint)bVar2 | (uint)bVar1 << 4 & 0xff) != (uint)*(byte *)(param_1 + 6)) {
        uVar7 = uVar7 | 0x40;
      }
      uVar6 = (undefined)uVar7;

      if (uVar7 == 0) {
        param_1[2] = param_1[2] + 1;
        return;
      }

      FUN_overlay0__80016598(param_1, 0);
    }

    *(undefined *)(param_1 + 5) = uVar6;
    *(char *)((int)param_1 + 0x15) = cVar3;
    *(char *)((int)param_1 + 0x16) = cVar4;
    *(char *)((int)param_1 + 0x17) = cVar5;
    *(byte *)(param_1 + 6) = bVar2 | (byte)((uint)bVar1 << 4);
    param_1[2] = 0;
  }
  return;
}

void FUN_overlay0__800167d0(int param_1,int param_2)

{
  short sVar1;

  if (param_1 != 0) {
    sVar1 = *(short *)(param_1 + 0xc);
    *(undefined2 *)(param_1 + 0xc) = 1;

    if (((sVar1 == 0) && (param_2 == 0)) && (-1 < *(int *)(param_1 + 8))) {

      FUN_overlay0__80016598(param_1, 0);
    }
  }
  return;
}

void FUN_overlay0__8001681c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;

  FUN_8008ce30(param_1 + 6,0,0x1800);

  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + iVar2;
    iVar2 = iVar2 + 1;

    *(short *)((int)param_1 + iVar1 * 8 + 0x1a) = (short)iVar2;
    iVar1 = iVar2 * 2;
  } while (iVar2 < 0x100);

  *(undefined2 *)((int)param_1 + 0x1802) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x12) = 0xffff;

  *param_1 = 0x444;
  param_1[1] = 0x90;
  param_1[2] = 0x48;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[3] = 8;
  return;
}

undefined2 * FUN_overlay0__800168a4(int param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;

  sVar2 = *(short *)(param_1 + 0x14);

  if ((-1 < sVar2) && (1 < DAT_801d5864)) {

    uVar1 = *(undefined2 *)(param_1 + 0x12);

    *(short *)(param_1 + 0x12) = sVar2;

    puVar4 = (undefined2 *)(param_1 + sVar2 * 0x18 + 0x18);

    *(undefined2 *)(param_1 + 0x14) = puVar4[1];
    puVar4[1] = uVar1;

    *puVar4 = (short)param_2;

    if (param_2 == 0) {
      iVar3 = *(int *)(param_1 + 4);
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
    }

    puVar4[5] = (short)(iVar3 * *(short *)(&LAB_overlay0__8002f4f8 + *(short *)(param_1 + 0x10) * 2)
                       >> 0xc);

    sVar2 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar2;
    if (sVar2 == 0x10) {
      *(undefined2 *)(param_1 + 0x10) = 0;
    }
    return puVar4;
  }
  return (undefined2 *)0x0;
}

void FUN_overlay0__80016978(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar7 = -1;
  sVar1 = *(short *)((int)param_1 + 0x12);

  while (iVar4 = (int)sVar1, -1 < iVar4) {
    sVar2 = *(short *)((int)param_1 + iVar4 * 0x18 + 0x1a);
    iVar6 = *param_1;
    iVar5 = param_1[3];

    iVar3 = (uint)*(ushort *)((int)param_1 + iVar4 * 0x18 + 0x1e) -
            (uint)*(ushort *)((int)param_1 + iVar4 * 0x18 + 0x22);
    *(short *)((int)param_1 + iVar4 * 0x18 + 0x1e) = (short)iVar3;

    if (iVar3 * 0x10000 < 0) {

      if (iVar7 < 0) {

        *(short *)((int)param_1 + 0x12) = sVar2;
      }
      else {

        *(short *)((int)param_1 + iVar7 * 0x18 + 0x1a) = sVar2;
      }

      *(undefined2 *)((int)param_1 + iVar4 * 0x18 + 0x1a) = *(undefined2 *)(param_1 + 5);
      *(short *)(param_1 + 5) = sVar1;
      sVar1 = sVar2;
    }
    else {

      param_1[iVar4 * 6 + 10] = param_1[iVar4 * 6 + 10] + iVar6;
      *(short *)(param_1 + iVar4 * 6 + 7) = *(short *)(param_1 + iVar4 * 6 + 7) + (short)iVar5;
      iVar7 = iVar4;
      sVar1 = sVar2;
    }
  }
  return;
}

void FUN_overlay0__80016a3c(int param_1)

{
  *(undefined *)(param_1 + 0x11d700) = 0;
  *(undefined *)(param_1 + 0x11d701) = 0;
  *(undefined *)(param_1 + 0x11d702) = 0;
  return;
}

void FUN_overlay0__80016a58(int param_1,int param_2)

{

  FUN_80080494(param_2 + 0x58,param_1 + 0xe5700,0x38000);

  FUN_80080088(param_2 + 0x38,param_1 + 0xd4cd0,0x10a30);
  return;
}

void FUN_overlay0__80016abc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_1 + 0x11d701) == '\0') {
    *(undefined *)(param_1 + 0x11d701) = 1;
    FUN_overlay0__8001882c(0);
    FUN_overlay0__80028ddc(param_1 + 4);
  }

  iVar2 = 0xb6394;
  for (iVar3 = 0; iVar1 = param_1 + iVar2, iVar3 < (int)(uint)DAT_801d58b6; iVar3 = iVar3 + 1) {
    iVar2 = iVar2 + 0x5000;

    FUN_80061010(iVar1,DAT_800a951c != '\0');
  }
  return;
}

int FUN_overlay0__80016b78(int param_1,undefined4 param_2)

{

  FUN_overlay0__80015ef8(param_1,param_1 + 0x10,param_2);

  *(undefined **)(param_1 + 0xc) = &LAB_overlay0__8002f000;

  FUN_overlay0__800157a8(param_1 + 0x10);

  FUN_overlay0__80047ae4(param_1 + 0x304);

  FUN_overlay0__80047278(param_1 + 0x38c);
  return param_1;
}

void FUN_overlay0__80016bd8(int param_1,undefined4 param_2)

{

  *(undefined **)(param_1 + 0xc) = &LAB_overlay0__8002f000;

  FUN_overlay0__800472ac(param_1 + 0x38c,2);

  FUN_overlay0__80047b18(param_1 + 0x304,2);

  FUN_overlay0__800157fc(param_1 + 0x10,2);

  FUN_overlay0__80015f14(param_1,param_2);
  return;
}

undefined4 FUN_overlay0__80016f88(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack_5e0 [1496];

  if (DAT_801d5866 < 5) {

    if ((DAT_801d5866 < 3) && (DAT_801d5866 != 0)) goto LAB_overlay0__80016ffc;
  }
  else if (DAT_801d5866 != 6) goto LAB_overlay0__80016ffc;

  FUN_overlay0__80016b78(auStack_5e0,param_1);
  FUN_overlay0__80015f48(auStack_5e0);
  FUN_overlay0__80016bd8(auStack_5e0,2);

LAB_overlay0__80016ffc:
  uVar1 = 1;

  if (DAT_801ef5f2 == '\x01') {
    uVar1 = 2;
  }
  else if ((('\x01' < DAT_801ef5f2) && (DAT_801ef5f2 != '\x02')) && (DAT_801ef5f2 == '\x03')) {
    uVar1 = 4;
  }
  return uVar1;
}

void FUN_overlay0__80017098(int param_1)

{
  int iVar1;
  int iVar2;

  *(ushort *)(param_1 + 0x5d2) = (ushort)DAT_801d586b;
  *(ushort *)(param_1 + 0x5d4) = (ushort)DAT_801d58b6;
  *(ushort *)(param_1 + 0x5d6) = (ushort)DAT_801d5869;

  DAT_801d586b = 100;
  DAT_801d5869 = 0;
  DAT_801d58b6 = 1;

  iVar1 = 300;
  for (iVar2 = 1; iVar2 < *(short *)(param_1 + 0x5d4); iVar2 = iVar2 + 1) {
    UNK_801d58e8[iVar1] = 0;
    iVar1 = iVar1 + 0xd0;
  }
  return;
}

void FUN_overlay0__8001710c(int param_1,undefined2 param_2,undefined param_3)

{
  int iVar1;
  int iVar2;

  *(undefined2 *)(param_1 + 0x5d8) = param_2;

  DAT_801d5869 = (undefined)*(undefined2 *)(param_1 + 0x5d6);
  DAT_801d58b6 = (undefined)*(undefined2 *)(param_1 + 0x5d4);
  DAT_801d586b = (undefined)*(undefined2 *)(param_1 + 0x5d2);
  DAT_801d5866 = param_3;

  iVar1 = 0x5c;
  for (iVar2 = 0; iVar2 < *(short *)(param_1 + 0x5d4); iVar2 = iVar2 + 1) {
    UNK_801d58e8[iVar1] = 1;
    iVar1 = iVar1 + 0xd0;
  }
  return;
}

void FUN_overlay0__80017174(int param_1)

{
  int iVar1;

  *(undefined *)(param_1 + 0x38b) = 0;

  do {
    do {
      iVar1 = FUN_800833e8(param_1 + 0x304);
    } while (1 < iVar1);
  } while (iVar1 < 0);
  return;
}

void FUN_overlay0__800171b8(int param_1)

{
  int iVar1;

  *(undefined *)(param_1 + 0x38b) = 1;

  do {
    do {
      iVar1 = FUN_800833e8(param_1 + 0x304);
    } while (1 < iVar1);
  } while (iVar1 < 0);
  return;
}

void FUN_overlay0__80017200(int param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;

  switch(DAT_801d5866) {
  case 1:
  case 10:

    FUN_overlay0__800472d4(param_1 + 0x38c,&PTR_LAB_overlay0__80057d24_overlay0__8005d348);

    do {
      do {
        iVar1 = FUN_800833e8(param_1 + 0x38c);
      } while (1 < iVar1);
    } while (iVar1 < 0);
    break;

  case 2:
  case 0xb:

    if (*(char *)(param_1 + 0x5d1) != '\0') {

      if (param_2 != 0) {

        FUN_overlay0__800472d4(param_1 + 0x38c,&PTR_LAB_overlay0__80050e94_overlay0__8005b7a0);
        do {
          do {
            iVar1 = FUN_800833e8(param_1 + 0x38c);
          } while (1 < iVar1);
        } while (iVar1 < 0);

        if (DAT_801d5df6 < 2) {
          ppuVar2 = &PTR_LAB_overlay0__8005947c_overlay0__8005d558;
        }
        else {
          ppuVar2 = &PTR_LAB_overlay0__8005947c_overlay0__8005d4c8;
        }
        FUN_overlay0__800472d4(param_1 + 0x38c,ppuVar2);
        do {
          do {
            iVar1 = FUN_800833e8(param_1 + 0x38c);
          } while (1 < iVar1);
        } while (iVar1 < 0);
      }
      *(undefined *)(param_1 + 0x5d1) = 0;
    }

    FUN_overlay0__800472d4(param_1 + 0x38c,&PTR_LAB_overlay0__80049c68_overlay0__8005ae0c);
    do {
      do {
        iVar1 = FUN_800833e8(param_1 + 0x38c);
      } while (1 < iVar1);
    } while (iVar1 < 0);
    break;

  case 3:

    FUN_overlay0__8004df34(*(char *)(param_1 + 0x5d1) != '\0');

    FUN_overlay0__800472d4(param_1 + 0x38c,&PTR_LAB_overlay0__8004e09c_overlay0__8005b404);
    do {
      do {
        iVar1 = FUN_800833e8(param_1 + 0x38c);
      } while (1 < iVar1);
    } while (iVar1 < 0);
    *(undefined *)(param_1 + 0x5d1) = 0;
    break;

  case 7:
  case 8:
  case 9:

    if (*(char *)(param_1 + 0x5d1) != '\0') {

      if (param_2 != 0) {
        FUN_overlay0__800472d4(param_1 + 0x38c,&PTR_LAB_overlay0__80050e94_overlay0__8005b7a0);
        do {
          do {
            iVar1 = FUN_800833e8(param_1 + 0x38c);
          } while (1 < iVar1);
        } while (iVar1 < 0);
      }
      *(undefined *)(param_1 + 0x5d1) = 0;
    }

    FUN_overlay0__800472d4(param_1 + 0x38c,&PTR_LAB_overlay0__80057d24_overlay0__8005d348);
    do {
      do {
        iVar1 = FUN_800833e8(param_1 + 0x38c);
      } while (1 < iVar1);
    } while (iVar1 < 0);
  }
  return;
}

int FUN_overlay0__80017438(int param_1,undefined4 param_2)

{

  FUN_overlay0__80015ef8(param_1,param_1 + 0x10,param_2);

  *(undefined **)(param_1 + 0xc) = &LAB_overlay0__8002f110;

  FUN_overlay0__800157a8(param_1 + 0x10);

  FUN_overlay0__80047ae4(param_1 + 0x304);

  FUN_overlay0__80047278(param_1 + 0x38c);
  return param_1;
}

void FUN_overlay0__80017498(int param_1,undefined4 param_2)

{

  *(undefined **)(param_1 + 0xc) = &LAB_overlay0__8002f110;

  FUN_overlay0__800472ac(param_1 + 0x38c,2);

  FUN_overlay0__80047b18(param_1 + 0x304,2);

  FUN_overlay0__800157fc(param_1 + 0x10,2);

  FUN_overlay0__80015f14(param_1,param_2);
  return;
}

undefined4 FUN_overlay0__80017d1c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack_5e8 [1504];

  switch(DAT_801d5866) {
  case 0xc:
    param_1 = 1;
  case 1:
  case 2:
  case 3:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:

    FUN_overlay0__80017438(auStack_5e8,param_1);
    FUN_overlay0__80015f48(auStack_5e8);
    FUN_overlay0__80017498(auStack_5e8,2);
  default:
    uVar1 = 1;

    if (((-1 < DAT_801ef5f2) && ('\x02' < DAT_801ef5f2)) && (DAT_801ef5f2 == '\x03')) {
      uVar1 = 4;
    }
    return uVar1;
  }
}

int FUN_overlay0__80017e18(int param_1,int param_2)

{

  if (param_2 < 0) {
    param_2 = -param_2;
  }

  return ((param_2 - ((param_1 * 0xa000 + 0x5000) / 1000 >> 1)) * 1000 >> 0xc) << 1;
}

void FUN_overlay0__80017e74(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;

  if (*(int *)(param_1 + 0x878) != 0) {

    iVar2 = *(int *)(*(int *)(param_1 + 0x878) + 0x870);

    iVar5 = (int)*(short *)(iVar2 + 0x3c);
    uVar3 = *(ushort *)(iVar2 + 0x4c) - 0x10;

    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }

    iVar4 = (int)*(short *)(iVar2 + 0x44);
    if (*(short *)(iVar2 + 0x44) < iVar5) {
      iVar4 = iVar5;
    }

    if ((int)uVar3 < 0) {

      uVar3 = -uVar3;
      iVar6 = (int)*(short *)(iVar2 + 0x40) >> (uVar3 & 0x1f);
      iVar5 = (int)*(short *)(iVar2 + 0x48) >> (uVar3 & 0x1f);
      iVar4 = iVar4 >> (uVar3 & 0x1f);
    }
    else {

      iVar6 = (int)*(short *)(iVar2 + 0x40) << (uVar3 & 0x1f);
      iVar5 = (int)*(short *)(iVar2 + 0x48) << (uVar3 & 0x1f);
      iVar4 = iVar4 << (uVar3 & 0x1f);
    }

    *(int *)(param_1 + 0x87c) = iVar4 << 4;

    *(short *)(param_2 + 8) = (short)((uint)(iVar6 * -0x7d) >> 9);
    *(short *)(param_2 + 10) = (short)((uint)(iVar5 * 0x7d) >> 9);

    iVar5 = *(int *)(param_1 + 0x878);
    uVar1 = FUN_overlay0__80017e18(*(undefined *)(param_2 + 0x68),(int)*(short *)(iVar5 + 0x20));
    *(undefined2 *)(param_2 + 0x14) = uVar1;
    uVar1 = FUN_overlay0__80017e18(*(undefined *)(param_2 + 0x69),(int)*(short *)(iVar5 + 0x30));
    *(undefined2 *)(param_2 + 0x16) = uVar1;

    local_20 = iVar6 << 4;
    local_28 = 0;
    local_24 = 0;

    FUN_8007b050(param_1 + 0x81c,&local_28);
  }
  return;
}

void FUN_overlay0__80017fa0(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  FUN_80061504(*(undefined4 *)(param_1 + 0x878),&local_18,&local_10);
  local_e = 0;
  local_16 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar8 = 0;
  iVar7 = 0;
  iVar4 = param_1;

  for (uVar3 = 0; (int)uVar3 < 4; uVar3 = uVar3 + 1) {

    if ((uVar3 & 2) == 0) {

      iVar5 = (int)*(short *)(param_1 + 0x410);
      sVar2 = *(short *)(param_1 + 0x44);
      local_16 = *(undefined2 *)(param_1 + 0x418);

      iVar7 = 0x1000 - ((int)*(short *)(param_1 + 0x41c) << 0xc) / iVar5;
    }
    else {

      iVar6 = (int)*(short *)(param_1 + 0x412);
      sVar2 = *(short *)(param_1 + 0x46);
      local_e = *(undefined2 *)(param_1 + 0x41a);

      iVar8 = 0x1000 - ((int)*(short *)(param_1 + 0x41e) << 0xc) / iVar6;
    }

    if ((uVar3 & 1) == 0) {
      sVar2 = -sVar2;
    }

    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x878) + uVar3 * 8 + 0x24);

    *(short *)(iVar4 + 0x7cc) = sVar2;
    *(undefined2 *)(iVar4 + 0x7ce) = 0;
    *(undefined2 *)(iVar4 + 2000) = uVar1;
    iVar4 = iVar4 + 0x10;
  }

  local_12 = *(undefined2 *)
              (&DAT_80091a70 + ((uint)(&DAT_801d58c0)[*(short *)(param_1 + 0xc) * 0x34] >> 7 & 6));

  local_18 = (undefined2)iVar5;
  local_14 = (undefined2)iVar7;
  local_10 = (undefined2)iVar6;
  local_c = (undefined2)iVar8;
  local_a = local_12;

  FUN_80061308(*(int *)(param_1 + 0x878) + 0x40,&local_18,&local_10);
  return;
}

void FUN_overlay0__80018100(int param_1)

{

  FUN_8007a118(param_1 + 0x10,1);

  FUN_8007a118(param_1 + 0x1c,1);
  return;
}

void FUN_overlay0__80018138(char *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;

  *param_1 = param_3;

  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0x95] = '\0';
  param_1[0x94] = '\0';

  if (param_3 == '\0') {

    FUN_80078f10(param_1 + 0x24,*param_2,0,0);
    FUN_80078f10(param_1 + 0x4c,param_2[3],0,0);
    FUN_overlay0__80018100(param_1 + 0x24);
    FUN_overlay0__80018100(param_1 + 0x4c);
  }
  else if (param_3 == '\x01') {

    FUN_80078f10(param_1 + 0x4c,*param_2,0,0);
  }

  uVar1 = FUN_800788e4(&DAT_8017d894,0x11);
  FUN_80078598(param_1 + 0x74,uVar1);
  uVar1 = FUN_800788e4(&DAT_8017d894,0xb);
  FUN_80078598(param_1 + 0x7c,uVar1);
  uVar1 = FUN_800788e4(&DAT_8017d894,0xf);
  FUN_80078598(param_1 + 0x84,uVar1);
  uVar1 = FUN_800788e4(&DAT_8017d894,0xe);
  FUN_80078598(param_1 + 0x8c,uVar1);
  return;
}

void FUN_overlay0__8001826c(char *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_28;
  short local_26;

  sVar1 = *(short *)(param_1 + 0xc);
  sVar2 = *(short *)(param_1 + 2);
  iVar7 = (int)sVar2;

  iVar6 = (*(short *)(param_1 + 0x10) + 0x1000 >> 1) * 0x7f >> 0xc;

  *(short *)(param_1 + 0x2e) = sVar2;
  *(short *)(param_1 + 0x56) = sVar2;

  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_1 + 4);

  FUN_8007a170(&local_28,(int)sVar1,iVar6);

  iVar5 = (int)((uint)DAT_801c9994 * (int)local_28) / 0xff;
  iVar3 = (int)((uint)DAT_801c9994 * (int)local_26) / 0xff;

  if (0x3fff < iVar5) {
    iVar5 = 0x3fff;
  }
  if (0x3fff < iVar3) {
    iVar3 = 0x3fff;
  }

  *(short *)(param_1 + 0x30) = (short)(iVar5 * *(short *)(param_1 + 0x16) >> 0xe);
  *(short *)(param_1 + 0x32) = (short)(iVar3 * *(short *)(param_1 + 0x16) >> 0xe);
  *(short *)(param_1 + 0x58) = (short)(iVar5 * *(short *)(param_1 + 0x18) >> 0xe);
  *(short *)(param_1 + 0x5a) = (short)(iVar3 * *(short *)(param_1 + 0x18) >> 0xe);

  if (*param_1 == '\x01') {
    *(short *)(param_1 + 0x58) = (short)((uint)(*(short *)(param_1 + 0x58) * 0xccc) >> 0xc);
    *(short *)(param_1 + 0x5a) = (short)((uint)(*(short *)(param_1 + 0x5a) * 0xccc) >> 0xc);
  }

  uVar4 = (uint)(byte)param_1[1] * 6;

  FUN_80078ff8(param_1 + 0x24,uVar4 & 0xfe);
  FUN_80078ff8(param_1 + 0x4c,uVar4 + 1 & 0xff);

  FUN_800785a8(param_1 + 0x74,iVar5 * *(short *)(param_1 + 0x1a) >> 0xe,
               iVar3 * *(short *)(param_1 + 0x1a) >> 0xe,uVar4 + 2,
               iVar7 * *(short *)(param_1 + 6) >> 0xc);
  FUN_800785a8(param_1 + 0x7c,iVar5 * *(short *)(param_1 + 0x1c) >> 0xe,
               iVar3 * *(short *)(param_1 + 0x1c) >> 0xe,uVar4 + 4,iVar7);
  FUN_800785a8(param_1 + 0x84,iVar5 * *(short *)(param_1 + 0x1e) >> 0xe,
               iVar3 * *(short *)(param_1 + 0x1e) >> 0xe,uVar4 + 3,
               iVar7 * *(short *)(param_1 + 8) >> 0xc);
  FUN_800785a8(param_1 + 0x8c,iVar5 * *(short *)(param_1 + 0x20) >> 0xe,
               iVar3 * *(short *)(param_1 + 0x20) >> 0xe,uVar4 + 3,
               iVar7 * *(short *)(param_1 + 10) >> 0xc);

  if ((*param_1 == '\0') && (*(short *)(param_1 + 0x22) != 0)) {
    FUN_overlay0__80018760(param_1,4,iVar6,(int)*(short *)(param_1 + 0x22) * (int)sVar1 >> 0xe);
  }

  if (*param_1 == '\0') {
    FUN_80078c88(param_1 + 0x24);
  }
  else if (*param_1 != '\x01') {
    return;
  }
  FUN_80078c88(param_1 + 0x4c);
  return;
}

void FUN_overlay0__800186f0(char *param_1)

{

  if (*param_1 == '\0') {

    FUN_80078f74(param_1 + 0x24);
  }
  else if (*param_1 != '\x01') goto LAB_overlay0__80018730;

  FUN_80078f74(param_1 + 0x4c);
LAB_overlay0__80018730:

  FUN_80078760(param_1 + 0x74);
  FUN_80078760(param_1 + 0x7c);
  FUN_80078760(param_1 + 0x84);
  FUN_80078760(param_1 + 0x8c);
  return;
}

void FUN_overlay0__80018760(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{

  FUN_80078900(&DAT_8017d894,(&DAT_overlay0__8002f528)[param_2],param_3,param_4,
               (uint)*(byte *)(param_1 + 1) * 6);
  return;
}

void FUN_overlay0__800187a8(int param_1,undefined4 param_2)

{

  if (*(char *)(param_1 + 0x11d702) == '\0') {
    *(undefined *)(param_1 + 0x11d702) = 1;

    FUN_80078790(param_1 + 0xd4394,param_1 + 0xd43a0,0x500);

    FUN_800787cc(param_1 + 0xd4394,param_2,0,1);
  }
  return;
}

void FUN_overlay0__8001882c(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;

  iVar7 = 0;

  FUN_80078960(param_1 + 0xd48d0,0x400);
  uVar3 = DAT_80092e74;
  uVar10 = 1;

  if (DAT_801d5866 == '\0') {
    uVar10 = 2;
  }

  uVar11 = (uint)DAT_801e306e;
  iVar9 = 0;
  iVar5 = 0xd48a0;
  bVar2 = uVar10 != 0;
  iVar8 = 0x5c;

  while (bVar2) {
    iVar7 = iVar7 + 2;
    iVar9 = iVar9 + 1;

    iVar4 = FUN_80060de0(*(undefined2 *)((int)&DAT_801d58d8 + iVar8 + 2));
    iVar6 = iVar5 + 0xc;
    iVar4 = uVar11 + iVar4 * 9;
    bVar1 = *(byte *)((int)&DAT_801d58dc + iVar8);

    FUN_80078840(param_1 + iVar5,iVar4,1,0);
    iVar5 = iVar5 + 0x18;

    FUN_80078840(param_1 + iVar6,iVar4 + (uint)bVar1 + 1,1,0);

    bVar2 = iVar9 < (int)uVar10;
    iVar8 = iVar8 + 0xd0;
  }

  if (uVar10 < 2) {
    FUN_80078840(param_1 + iVar7 * 0xc + 0xd48a0,0xc0,1,1);
    FUN_80078840(param_1 + (iVar7 + 1) * 0xc + 0xd48a0,0xc1,1,1);
  }

  FUN_80078950(uVar3);
  return;
}

void FUN_overlay0__800189c4(int param_1)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = (&DAT_overlay0__8002f531)[param_1 * 2];

  if ((&DAT_overlay0__8002f530)[param_1 * 2] == cVar1) {
    uVar2 = 0x40;
  }
  else {

    FUN_80078900(&DAT_8017d894,(&DAT_overlay0__8002f530)[param_1 * 2],0,0x4000,0xffffffff);
    uVar2 = 0x7f;
  }

  FUN_80078900(&DAT_8017d894,cVar1,uVar2,0x4000,0xffffffff);
  return;
}

void FUN_overlay0__80018a68(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  FUN_80081084();

  DAT_801c6c38 = &LAB_overlay0__80018b00;
  DAT_801c6c40 = 0;

  local_18 = 0xe3000000;
  local_c = 0xe1000020;
  local_14 = 0xe403c140;
  local_10 = 0xe5000000;

  FUN_80081110(&local_18,4);
  return;
}

void FUN_overlay0__80018ad8(void)

{

  FUN_800810d0(&DAT_801c6c30);
  return;
}

void FUN_overlay0__80018ce8(undefined4 param_1)

{

  FUN_8007b778(param_1,0,0,0);

  gte_ldtr(0,0,0);
  return;
}

void FUN_overlay0__80018d1c(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  SVECTOR *pSVar11;
  uint *puVar12;
  int iVar13;
  SVECTOR *pSVar14;
  int iVar15;
  int iVar16;
  SVECTOR *pSVar17;
  SVECTOR *pSVar18;
  uint uVar19;
  uint in_t0;
  uint uVar20;
  int iVar21;
  undefined *puVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined auStack_40 [32];

  iVar25 = 0x1f800000;
  puVar7 = (undefined4 *)(param_2 + 8);
  puVar5 = &DAT_1f800000;

  do {
    puVar9 = puVar5;
    puVar6 = puVar7;
    uVar26 = puVar6[1];
    uVar27 = puVar6[2];
    uVar28 = puVar6[3];
    *puVar9 = *puVar6;
    puVar9[1] = uVar26;
    puVar9[2] = uVar27;
    puVar9[3] = uVar28;
    puVar7 = puVar6 + 4;
    puVar5 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)(param_2 + 0x68));

  uVar26 = puVar6[5];
  puVar9[4] = *puVar7;
  puVar9[5] = uVar26;

  uVar8 = param_3;
  uVar19 = param_4;

  FUN_8007af60(auStack_40);
  FUN_8007b14c(auStack_40,0x800);
  FUN_8007b008(0x1f800000,auStack_40);
  FUN_overlay0__80018ce8(0x1f800000);
  DAT_1f800064 = param_1;

  if (param_4 == 0) {
    DAT_1f800070 = param_3 + 0x20;
    puVar12 = (uint *)(DAT_1f800070 + *(int *)(param_3 + 0xc) * 8);
    DAT_overlay0__8002f534 = DAT_overlay0__8002f534 ^ 1;
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x10) * 0xc;

    if (*(ushort *)(param_3 + 0x10) != 0) {
      iVar23 = DAT_overlay0__8002f534 * 0x14 + 8;
      puVar22 = &LAB_80008000;

      do {
        uVar20 = *puVar12;
        iVar16 = *(int *)(iVar21 + 0x70);

        gte_ldv3((SVECTOR *)(iVar16 + (uVar20 & 0xfff) * 8),
                 (SVECTOR *)(iVar16 + ((int)uVar20 >> 9 & 0x7ff8U)),
                 (SVECTOR *)(iVar16 + ((int)puVar12[1] >> 9 & 0x7ff8U)));
        gte_rtpt_b();
        iVar16 = (int)puVar12 + iVar23;
        uVar10 = gte_stFLAG();
        read_sxsy_fifo3(uVar8,uVar19,in_t0);

        if ((-1 < (int)uVar10) && ((uVar8 & uVar19 & in_t0 & (uint)puVar22) == 0)) {
          iVar13 = param_1;
          if (0 < (int)uVar20) {
            iVar13 = param_1 + 4;
          }
          *(uint *)(iVar16 + 8) = uVar8;
          *(uint *)(iVar16 + 0xc) = uVar19;
          *(uint *)(iVar16 + 0x10) = in_t0;
          uVar20 = iVar13 + 2U & 3;
          iVar15 = *(int *)((iVar13 + 2U) - uVar20);
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(iVar16 * 0x100) >> (3 - uVar2) * 8;
          uVar2 = iVar16 + 2U & 3;
          puVar3 = (uint *)((iVar16 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar15 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0xc;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x12) * 0xe;
    if (*(ushort *)(param_3 + 0x12) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x18 + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        pSVar17 = (SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8);
        pSVar14 = (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U));
        pSVar11 = (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U));
        pSVar18 = (SVECTOR *)(iVar13 + (puVar12[1] & 0xfff) * 8);
        gte_ldv3(pSVar17,pSVar14,pSVar11);
        gte_rtpt_b();
        in_t0 = (int)puVar12 + iVar16;
        uVar19 = gte_stFLAG();
        gte_ldv0(pSVar18);
        read_sxsy_fifo3(pSVar11,pSVar14,pSVar17);
        gte_rtps_b();
        *(SVECTOR **)(in_t0 + 8) = pSVar11;
        *(SVECTOR **)(in_t0 + 0xc) = pSVar14;
        *(SVECTOR **)(in_t0 + 0x14) = pSVar17;
        uVar8 = gte_stFLAG();
        uVar10 = gte_stSXY2();
        uVar19 = uVar19 | uVar8;
        uVar8 = (uint)pSVar11 & (uint)pSVar14 & (uint)pSVar17 & uVar10;
        if ((-1 < (int)uVar19) && ((uVar8 & (uint)puVar22) == 0)) {
          iVar13 = iVar23;
          if (0 < (int)uVar20) {
            iVar13 = iVar23 + 4;
          }
          *(uint *)(in_t0 + 0x10) = uVar10;
          uVar20 = iVar13 + 2U & 3;
          iVar15 = *(int *)((iVar13 + 2U) - uVar20);
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (in_t0 << 8) >> (3 - uVar2) * 8;
          uVar2 = in_t0 + 2 & 3;
          puVar3 = (uint *)((in_t0 + 2) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar15 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0xe;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x14) * 0x10;
    if (*(ushort *)(param_3 + 0x14) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x1c + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        gte_ldv3((SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8),
                 (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U)),
                 (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U)));
        gte_rtpt_b();
        iVar13 = (int)puVar12 + iVar16;
        uVar10 = gte_stFLAG();
        read_sxsy_fifo3(uVar8,uVar19,in_t0);
        if ((-1 < (int)uVar10) && ((uVar8 & uVar19 & in_t0 & (uint)puVar22) == 0)) {
          iVar15 = iVar23;
          if (0 < (int)uVar20) {
            iVar15 = iVar23 + 4;
          }
          *(uint *)(iVar13 + 8) = uVar8;
          *(uint *)(iVar13 + 0x10) = uVar19;
          *(uint *)(iVar13 + 0x18) = in_t0;
          uVar20 = iVar15 + 2U & 3;
          iVar1 = *(int *)((iVar15 + 2U) - uVar20);
          uVar2 = iVar15 + 2U & 3;
          puVar3 = (uint *)((iVar15 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(iVar13 * 0x100) >> (3 - uVar2) * 8;
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar1 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0x10;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x16) * 0x14;
    if (*(ushort *)(param_3 + 0x16) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x24 + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        pSVar17 = (SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8);
        pSVar14 = (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U));
        pSVar11 = (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U));
        pSVar18 = (SVECTOR *)(iVar13 + (puVar12[1] & 0xfff) * 8);
        gte_ldv3(pSVar17,pSVar14,pSVar11);
        gte_rtpt_b();
        in_t0 = (int)puVar12 + iVar16;
        uVar19 = gte_stFLAG();
        gte_ldv0(pSVar18);
        read_sxsy_fifo3(pSVar11,pSVar14,pSVar17);
        gte_rtps_b();
        *(SVECTOR **)(in_t0 + 8) = pSVar11;
        *(SVECTOR **)(in_t0 + 0x10) = pSVar14;
        *(SVECTOR **)(in_t0 + 0x20) = pSVar17;
        uVar8 = gte_stFLAG();
        uVar10 = gte_stSXY2();
        uVar19 = uVar19 | uVar8;
        uVar8 = (uint)pSVar11 & (uint)pSVar14 & (uint)pSVar17 & uVar10;
        if ((-1 < (int)uVar19) && ((uVar8 & (uint)puVar22) == 0)) {
          iVar13 = iVar23;
          if (0 < (int)uVar20) {
            iVar13 = iVar23 + 4;
          }
          *(uint *)(in_t0 + 0x18) = uVar10;
          uVar20 = iVar13 + 2U & 3;
          iVar15 = *(int *)((iVar13 + 2U) - uVar20);
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (in_t0 << 8) >> (3 - uVar2) * 8;
          uVar2 = in_t0 + 2 & 3;
          puVar3 = (uint *)((in_t0 + 2) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar15 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0x14;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x18) * 0x12;
    if (*(ushort *)(param_3 + 0x18) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x20 + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        gte_ldv3((SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8),
                 (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U)),
                 (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U)));
        gte_rtpt_b();
        iVar13 = (int)puVar12 + iVar16;
        uVar10 = gte_stFLAG();
        read_sxsy_fifo3(uVar8,uVar19,in_t0);
        if ((-1 < (int)uVar10) && ((uVar8 & uVar19 & in_t0 & (uint)puVar22) == 0)) {
          iVar15 = iVar23;
          if (0 < (int)uVar20) {
            iVar15 = iVar23 + 4;
          }
          *(uint *)(iVar13 + 8) = uVar8;
          *(uint *)(iVar13 + 0x10) = uVar19;
          *(uint *)(iVar13 + 0x18) = in_t0;
          uVar20 = iVar15 + 2U & 3;
          iVar1 = *(int *)((iVar15 + 2U) - uVar20);
          uVar2 = iVar15 + 2U & 3;
          puVar3 = (uint *)((iVar15 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(iVar13 * 0x100) >> (3 - uVar2) * 8;
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar1 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0x12;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x1a) * 0x16;
    if (*(ushort *)(param_3 + 0x1a) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x28 + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        pSVar17 = (SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8);
        pSVar14 = (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U));
        pSVar11 = (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U));
        pSVar18 = (SVECTOR *)(iVar13 + (puVar12[1] & 0xfff) * 8);
        gte_ldv3(pSVar17,pSVar14,pSVar11);
        gte_rtpt_b();
        in_t0 = (int)puVar12 + iVar16;
        uVar19 = gte_stFLAG();
        gte_ldv0(pSVar18);
        read_sxsy_fifo3(pSVar11,pSVar14,pSVar17);
        gte_rtps_b();
        *(SVECTOR **)(in_t0 + 8) = pSVar11;
        *(SVECTOR **)(in_t0 + 0x10) = pSVar14;
        *(SVECTOR **)(in_t0 + 0x20) = pSVar17;
        uVar8 = gte_stFLAG();
        uVar10 = gte_stSXY2();
        uVar19 = uVar19 | uVar8;
        uVar8 = (uint)pSVar11 & (uint)pSVar14 & (uint)pSVar17 & uVar10;
        if ((-1 < (int)uVar19) && ((uVar8 & (uint)puVar22) == 0)) {
          iVar13 = iVar23;
          if (0 < (int)uVar20) {
            iVar13 = iVar23 + 4;
          }
          *(uint *)(in_t0 + 0x18) = uVar10;
          uVar20 = iVar13 + 2U & 3;
          iVar15 = *(int *)((iVar13 + 2U) - uVar20);
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (in_t0 << 8) >> (3 - uVar2) * 8;
          uVar2 = in_t0 + 2 & 3;
          puVar3 = (uint *)((in_t0 + 2) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar15 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0x16;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x1c) * 0x16;
    if (*(ushort *)(param_3 + 0x1c) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x28 + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        gte_ldv3((SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8),
                 (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U)),
                 (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U)));
        gte_rtpt_b();
        iVar13 = (int)puVar12 + iVar16;
        uVar10 = gte_stFLAG();
        read_sxsy_fifo3(uVar8,uVar19,in_t0);
        if ((-1 < (int)uVar10) && ((uVar8 & uVar19 & in_t0 & (uint)puVar22) == 0)) {
          iVar15 = iVar23;
          if (0 < (int)uVar20) {
            iVar15 = iVar23 + 4;
          }
          *(uint *)(iVar13 + 8) = uVar8;
          *(uint *)(iVar13 + 0x14) = uVar19;
          *(uint *)(iVar13 + 0x20) = in_t0;
          uVar20 = iVar15 + 2U & 3;
          iVar1 = *(int *)((iVar15 + 2U) - uVar20);
          uVar2 = iVar15 + 2U & 3;
          puVar3 = (uint *)((iVar15 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(iVar13 * 0x100) >> (3 - uVar2) * 8;
          uVar2 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
                    (iVar1 << (3 - uVar20) * 8 | uVar10 & 0xffffffffU >> (uVar20 + 1) * 8) >>
                    (3 - uVar2) * 8;
        }
        puVar12 = puVar12 + 0x16;
      } while (puVar12 != puVar24);
    }
    iVar21 = 0x1f800000;
    puVar24 = puVar12 + (uint)*(ushort *)(param_3 + 0x1e) * 0x1c;
    if (*(ushort *)(param_3 + 0x1e) != 0) {
      iVar16 = DAT_overlay0__8002f534 * 0x34 + 8;
      puVar22 = &LAB_80008000;
      iVar23 = DAT_1f800064;
      do {
        uVar20 = *puVar12;
        iVar13 = *(int *)(iVar21 + 0x70);
        pSVar17 = (SVECTOR *)(iVar13 + (uVar20 & 0xfff) * 8);
        pSVar14 = (SVECTOR *)(iVar13 + ((int)uVar20 >> 9 & 0x7ff8U));
        pSVar11 = (SVECTOR *)(iVar13 + ((int)puVar12[1] >> 9 & 0x7ff8U));
        pSVar18 = (SVECTOR *)(iVar13 + (puVar12[1] & 0xfff) * 8);
        gte_ldv3(pSVar17,pSVar14,pSVar11);
        gte_rtpt_b();
        iVar13 = (int)puVar12 + iVar16;
        uVar10 = gte_stFLAG();
        gte_ldv0(pSVar18);
        read_sxsy_fifo3(pSVar11,pSVar14,pSVar17);
        gte_rtps_b();
        *(SVECTOR **)(iVar13 + 8) = pSVar11;
        *(SVECTOR **)(iVar13 + 0x14) = pSVar14;
        *(SVECTOR **)(iVar13 + 0x2c) = pSVar17;
        uVar8 = gte_stFLAG();
        uVar19 = gte_stSXY2();
        if ((-1 < (int)(uVar10 | uVar8)) &&
           (((uint)pSVar11 & (uint)pSVar14 & (uint)pSVar17 & uVar19 & (uint)puVar22) == 0)) {
          iVar15 = iVar23;
          if (0 < (int)uVar20) {
            iVar15 = iVar23 + 4;
          }
          *(uint *)(iVar13 + 0x20) = uVar19;
          uVar8 = iVar15 + 2U & 3;
          iVar1 = *(int *)((iVar15 + 2U) - uVar8);
          uVar10 = iVar15 + 2U & 3;
          puVar3 = (uint *)((iVar15 + 2U) - uVar10);
          *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | (uint)(iVar13 << 8) >> (3 - uVar10) * 8;
          uVar10 = iVar13 + 2U & 3;
          puVar3 = (uint *)((iVar13 + 2U) - uVar10);
          *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 |
                    (iVar1 << (3 - uVar8) * 8 | uVar19 & 0xffffffffU >> (uVar8 + 1) * 8) >>
                    (3 - uVar10) * 8;
        }
        puVar12 = puVar12 + 0x1c;
      } while (puVar12 != puVar24);
    }
  }

  bVar4 = true;
  if ((DAT_801d5864 < 2) || (DAT_800a951c == '\0' && DAT_801d5866 == '\0')) {
    bVar4 = false;
  }

  if (bVar4) {
    FUN_overlay0__800196bc(*(int *)(iVar25 + 100) + 4,param_2,param_3);
  }
  return;
}

void FUN_overlay0__800196bc(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  int iVar8;

  uVar1 = *(ushort *)(param_2 + 0x66);
  uVar14 = (uint)uVar1;
  uVar2 = *(ushort *)(param_2 + 0x68);
  uVar12 = (uint)uVar2;
  iVar6 = (int)*(short *)(param_2 + 0x16);

  uVar5 = 0;

  iVar8 = (int)(-(int)*(short *)(param_2 + 10) *
               ((uVar14 << 0xc) / (uint)*(ushort *)(param_2 + 100))) >> 0xd;

  iVar4 = (int)(-(int)*(short *)(param_2 + 0x10) *
               ((uVar12 << 0xc) / (uint)*(ushort *)(param_2 + 100))) >> 0xd;

  iVar10 = iVar8 + iVar4 + iVar6;
  if (-1 < iVar10) {
    uVar5 = 0x31;
  }

  iVar11 = -iVar8 + iVar4 + iVar6;
  if (-1 < iVar11) {
    uVar5 = (uVar5 | 2) ^ 0x60;
  }

  iVar9 = iVar8 + -iVar4 + iVar6;
  if (-1 < iVar9) {
    uVar5 = (uVar5 | 4) ^ 0x90;
  }

  iVar6 = -iVar8 + -iVar4 + iVar6;
  if (-1 < iVar6) {
    uVar5 = (uVar5 | 8) ^ 0xc0;
  }
  uVar7 = *(uint *)(param_3 + 4) & 0xffffff;
  uVar15 = *(uint *)(param_3 + 8) & 0xffffff;
  uVar13 = uVar7;
  if ((uVar5 & 8) != 0) {
    uVar13 = uVar15;
    uVar15 = uVar7;
  }
  uVar19 = 0;
  if ((uVar5 & 0x10) != 0) {
    uVar19 = (undefined2)((int)(uVar12 * iVar10) / (iVar10 - iVar9));
  }
  uVar17 = 0;
  if ((uVar5 & 0x20) != 0) {
    uVar17 = (undefined2)((int)(uVar14 * iVar10) / (iVar10 - iVar11));
  }
  uVar18 = 0;
  if ((uVar5 & 0x40) != 0) {
    uVar18 = (undefined2)((int)(uVar12 * iVar11) / (iVar11 - iVar6));
  }
  uVar16 = 0;
  if ((uVar5 & 0x80) != 0) {
    uVar16 = (undefined2)((int)(uVar14 * iVar9) / (iVar9 - iVar6));
  }
  switch(uVar5 & 0xf) {
  case 0:
  case 0xf:
    puVar3 = (undefined2 *)FUN_8007d024(param_1,uVar15);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    break;
  case 1:
  case 0xe:
    iVar4 = FUN_8007e0e0(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = uVar19;
    *(undefined2 *)(iVar4 + 0xc) = uVar17;
    *(undefined2 *)(iVar4 + 0xe) = 0;
    iVar4 = FUN_8007e0e0(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    iVar4 = FUN_8007d060(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = uVar19;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    *(undefined2 *)(iVar4 + 0x10) = 0;
    *(ushort *)(iVar4 + 0x12) = uVar2;
    break;
  case 2:
  case 0xd:
    iVar4 = FUN_8007e0e0(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(undefined2 *)(iVar4 + 0xe) = uVar18;
    iVar4 = FUN_8007e0e0(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(undefined2 *)(iVar4 + 0xc) = 0;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    iVar4 = FUN_8007d060(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = uVar18;
    *(undefined2 *)(iVar4 + 0xc) = 0;
    goto LAB_overlay0__80019aa4;
  case 3:
  case 0xc:
    iVar4 = FUN_8007d060(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = uVar19;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(undefined2 *)(iVar4 + 0xe) = uVar18;
    *(ushort *)(iVar4 + 0x10) = uVar1;
    *(undefined2 *)(iVar4 + 0x12) = 0;
    iVar4 = FUN_8007d060(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = uVar19;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(ushort *)(iVar4 + 10) = uVar2;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(undefined2 *)(iVar4 + 0xe) = uVar18;
    goto LAB_overlay0__80019aa8;
  case 4:
  case 0xb:
    iVar4 = FUN_8007e0e0(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = uVar16;
    *(ushort *)(iVar4 + 6) = uVar2;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(ushort *)(iVar4 + 10) = uVar2;
    *(undefined2 *)(iVar4 + 0xc) = 0;
    *(undefined2 *)(iVar4 + 0xe) = uVar19;
    iVar4 = FUN_8007e0e0(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar16;
    *(ushort *)(iVar4 + 6) = uVar2;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(undefined2 *)(iVar4 + 0xc) = 0;
    *(undefined2 *)(iVar4 + 0xe) = uVar19;
    iVar4 = FUN_8007d060(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar16;
    *(ushort *)(iVar4 + 6) = uVar2;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    *(ushort *)(iVar4 + 0x10) = uVar1;
    goto LAB_overlay0__80019b24;
  case 5:
  case 10:
    iVar4 = FUN_8007d060(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(undefined2 *)(iVar4 + 8) = 0;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(undefined2 *)(iVar4 + 0xc) = uVar16;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    *(undefined2 *)(iVar4 + 0x10) = 0;
    *(ushort *)(iVar4 + 0x12) = uVar2;
    iVar4 = FUN_8007d060(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar17;
    *(undefined2 *)(iVar4 + 6) = 0;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(undefined2 *)(iVar4 + 0xc) = uVar16;
LAB_overlay0__80019aa4:
    *(ushort *)(iVar4 + 0xe) = uVar2;
LAB_overlay0__80019aa8:
    *(ushort *)(iVar4 + 0x10) = uVar1;
    *(ushort *)(iVar4 + 0x12) = uVar2;
    break;
  case 7:
  case 8:
    iVar4 = FUN_8007e0e0(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = uVar16;
    *(ushort *)(iVar4 + 6) = uVar2;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = uVar18;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(undefined2 *)(iVar4 + 0xe) = 0;
    iVar4 = FUN_8007e0e0(param_1,uVar15);
    *(undefined2 *)(iVar4 + 4) = uVar16;
    *(ushort *)(iVar4 + 6) = uVar2;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = uVar18;
    *(ushort *)(iVar4 + 0xc) = uVar1;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    iVar4 = FUN_8007d060(param_1,uVar13);
    *(undefined2 *)(iVar4 + 4) = uVar16;
    *(ushort *)(iVar4 + 6) = uVar2;
    *(ushort *)(iVar4 + 8) = uVar1;
    *(undefined2 *)(iVar4 + 10) = 0;
    *(undefined2 *)(iVar4 + 0xc) = 0;
    *(ushort *)(iVar4 + 0xe) = uVar2;
    *(undefined2 *)(iVar4 + 0x10) = 0;
LAB_overlay0__80019b24:
    *(undefined2 *)(iVar4 + 0x12) = 0;
  }
  return;
}

void FUN_overlay0__80019b58(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  bool bVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  u_long *puVar21;
  byte *pbVar22;
  uint uVar23;
  byte bVar24;
  uint *puVar25;
  undefined4 uVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  short *psVar31;
  int iVar32;
  short *psVar33;
  short **ppsVar34;
  u_long uVar35;
  short *psVar36;
  uint *puVar37;
  uint uVar38;
  SVECTOR *pSVar39;
  SVECTOR *pSVar40;
  SVECTOR *pSVar41;
  short **ppsVar42;
  uint *puVar43;
  int iVar44;
  short **ppsVar45;
  uint uVar46;
  short **ppsVar47;
  short *psVar48;
  uint uVar49;
  short *psVar50;
  u_long uVar51;
  short **ppsVar52;
  short *psVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  int iVar57;

  DAT_1f800070 = *param_1;
  puVar43 = (uint *)param_1[1];

  if (*(ushort *)(param_1 + 0xc) != 0) {
    puVar37 = puVar43 + (uint)*(ushort *)(param_1 + 0xc) * 3;

    do {
      puVar19 = DAT_1f80006c;
      uVar38 = *puVar43;
      piVar14 = (int *)((uVar38 & 0x3ff) * 8 + DAT_1f800070);
      iVar29 = *piVar14;
      iVar32 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar38 >> 7 & 0x1ff8U) + DAT_1f800070);
      iVar28 = puVar15[1];
      puVar16 = (undefined4 *)(((int)uVar38 >> 0x11 & 0x1ff8U) + DAT_1f800070);

      gte_ldVXY0(iVar29);
      gte_ldVZ0(iVar32);
      gte_ldVXY2(*puVar15);
      gte_ldVZ2(iVar28);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(puVar16[1]);
      gte_rtpt_b();
      gte_ldRGB(puVar43[2]);
      iVar17 = gte_stFLAG();
      read_sz_fifo3(iVar28,iVar32,iVar29);
      gte_nclip_b();
      uVar20 = gte_stMAC0();

      if (((-1 < iVar17) && (uVar20 != 0)) && (-1 < (int)(uVar20 & uVar38))) {
        gte_ldIR0(0);
        gte_dpcs_b();
        uVar20 = uVar38 >> 0x1e & 1;
        if (iVar28 < iVar29 == uVar20) {
          iVar28 = iVar29;
        }
        if (iVar28 < iVar32 == uVar20) {
          iVar28 = iVar32;
        }
        uVar20 = ((uint)(iVar28 << (DAT_1f800098 & 0x1f)) >> 0xd) + (-uVar20 & 0x60);
        iVar28 = uVar20 * 4;
        if (0xfff < uVar20) {
          iVar28 = 0x3ffc;
        }
        uVar20 = DAT_1f800064 + iVar28 + 2;
        uVar38 = uVar20 & 3;
        uVar30 = DAT_1f800064 & 0xffffffffU >> (uVar38 + 1) * 8;
        iVar17 = *(int *)(uVar20 - uVar38);
        gte_stRGB2();
        uVar20 = DAT_1f800064 + iVar28 + 2;
        uVar54 = uVar20 & 3;
        puVar27 = (uint *)(uVar20 - uVar54);
        *puVar27 = *puVar27 & -1 << (uVar54 + 1) * 8 |
                   (uint)((int)DAT_1f800068 << 8) >> (3 - uVar54) * 8;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)DAT_1f800068 + 3) = 4;
        bVar13 = puVar19 < DAT_1f800068;
        uVar20 = (int)DAT_1f800068 + 2U & 3;
        puVar19 = (uint *)(((int)DAT_1f800068 + 2U) - uVar20);
        *puVar19 = *puVar19 & -1 << (uVar20 + 1) * 8 |
                   (iVar17 << (3 - uVar38) * 8 | uVar30) >> (3 - uVar20) * 8;
        DAT_1f800068 = DAT_1f800068 + 5;
        if (bVar13) break;
      }
      puVar43 = puVar43 + 3;
    } while (puVar43 != puVar37);
  }
  puVar43 = (uint *)param_1[2];
  if (*(ushort *)((int)param_1 + 0x32) != 0) {
    puVar37 = puVar43 + (uint)*(ushort *)((int)param_1 + 0x32) * 3;
    do {
      puVar19 = DAT_1f80006c;
      uVar54 = *puVar43;
      piVar14 = (int *)((uVar54 & 0x3ff) * 8 + DAT_1f800070);
      iVar32 = *piVar14;
      iVar44 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar54 >> 7 & 0x1ff8U) + DAT_1f800070);
      puVar16 = (undefined4 *)(((int)uVar54 >> 0x11 & 0x1ff8U) + DAT_1f800070);
      iVar28 = puVar16[1];
      puVar18 = (undefined4 *)((puVar43[1] & 0x3ff) * 8 + DAT_1f800070);
      gte_ldVXY2(iVar32);
      gte_ldVZ2(iVar44);
      gte_ldVXY0(*puVar15);
      gte_ldVZ0(puVar15[1]);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(iVar28);
      gte_rtpt_b();
      uVar38 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(iVar28,iVar32,iVar44);
      gte_nclip_b();
      gte_ldVXY0(*puVar18);
      gte_ldVZ0(puVar18[1]);
      iVar17 = gte_stMAC0();
      gte_rtps_b();
      uVar20 = gte_stFLAG();
      iVar29 = gte_stSZ3();
      gte_nclip_b();
      uVar30 = gte_stMAC0();
      if (-1 < (int)(uVar38 | uVar20)) {
        if (((-iVar17 | uVar30) != 0) && (-1 < (int)(-iVar17 - 1U & uVar30 - 1 & uVar54))) {
          uVar20 = uVar54 >> 0x1e & 1;
          if (iVar28 < iVar32 == uVar20) {
            iVar28 = iVar32;
          }
          if (iVar28 < iVar44 == uVar20) {
            iVar28 = iVar44;
          }
          if (iVar28 < iVar29 == uVar20) {
            iVar28 = iVar29;
          }
          uVar20 = ((uint)(iVar28 << (DAT_1f800098 & 0x1f)) >> 0xd) + (-uVar20 & 0x60);
          iVar28 = uVar20 * 4;
          if (0xfff < uVar20) {
            iVar28 = 0x3ffc;
          }
          iVar28 = DAT_1f800064 + iVar28;
          gte_ldRGB(puVar43[2]);
          gte_ldIR0(0);
          gte_dpcs_b();
          uVar20 = gte_stRGB2();
          DAT_1f800068[1] = uVar20;
          uVar20 = iVar28 + 2;
          uVar38 = uVar20 & 3;
          iVar17 = *(int *)(uVar20 - uVar38);
          gte_stSXY1();
          DAT_1f800068[3] = DAT_1f8000c0;
          gte_stSXY2();
          gte_stSXY0();
          *DAT_1f800068 = (uint)(iVar17 << (3 - uVar38) * 8) >> 8 | 0x5000000;
          uVar20 = iVar28 + 2;
          uVar38 = uVar20 & 3;
          puVar27 = (uint *)(uVar20 - uVar38);
          *puVar27 = *puVar27 & -1 << (uVar38 + 1) * 8 |
                     (uint)((int)DAT_1f800068 << 8) >> (3 - uVar38) * 8;
          bVar13 = puVar19 < DAT_1f800068;
          DAT_1f800068 = DAT_1f800068 + 6;
          if (bVar13) break;
        }
      }
      puVar43 = puVar43 + 3;
    } while (puVar43 != puVar37);
  }
  puVar43 = (uint *)param_1[3];
  iVar28 = 0x1f800000;
  if (*(ushort *)(param_1 + 0xd) != 0) {
    puVar19 = puVar43 + (uint)*(ushort *)(param_1 + 0xd) * 5;
    puVar37 = DAT_1f800068;
    do {
      iVar29 = *(int *)(iVar28 + 0x70);
      uVar38 = *puVar43;
      piVar14 = (int *)((uVar38 & 0x3ff) * 8 + iVar29);
      iVar32 = *piVar14;
      iVar44 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar38 >> 7 & 0x1ff8U) + iVar29);
      iVar17 = puVar15[1];
      puVar16 = (undefined4 *)(((int)uVar38 >> 0x11 & 0x1ff8U) + iVar29);
      gte_ldVXY0(iVar32);
      gte_ldVZ0(iVar44);
      gte_ldVXY2(*puVar15);
      gte_ldVZ2(iVar17);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(puVar16[1]);
      gte_rtpt_b();
      gte_ldRGB(puVar43[2]);
      gte_ldRGB0(puVar43[2]);
      gte_ldRGB1(puVar43[3]);
      gte_ldRGB2(puVar43[4]);
      iVar29 = gte_stFLAG();
      read_sz_fifo3(iVar17,iVar44,iVar32);
      gte_nclip_b();
      uVar20 = gte_stMAC0();
      if (((-1 < iVar29) && (uVar20 != 0)) && (-1 < (int)(uVar20 & uVar38))) {
        gte_ldIR0(0);
        gte_dpct_b();
        uVar20 = uVar38 >> 0x1e & 1;
        if (iVar17 < iVar32 == uVar20) {
          iVar17 = iVar32;
        }
        if (iVar17 < iVar44 == uVar20) {
          iVar17 = iVar44;
        }
        uVar20 = ((uint)(iVar17 << (*(uint *)(iVar28 + 0x98) & 0x1f)) >> 0xd) + (-uVar20 & 0x60);
        iVar17 = uVar20 * 4;
        if (0xfff < uVar20) {
          iVar17 = 0x3ffc;
        }
        iVar17 = *(uint *)(iVar28 + 100) + iVar17;
        puVar21 = *(u_long **)(iVar28 + 0x6c);
        uVar20 = iVar17 + 2U & 3;
        uVar38 = *(int *)((iVar17 + 2U) - uVar20) << (3 - uVar20) * 8 |
                 *(uint *)(iVar28 + 100) & 0xffffffffU >> (uVar20 + 1) * 8;
        gte_strgb3_g3(puVar37);
        uVar20 = iVar17 + 2U & 3;
        puVar27 = (uint *)((iVar17 + 2U) - uVar20);
        *puVar27 = *puVar27 & -1 << (uVar20 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar20) * 8
        ;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)puVar37 + 3) = 6;
        bVar13 = puVar21 < puVar37;
        uVar20 = (int)puVar37 + 2U & 3;
        puVar27 = (uint *)(((int)puVar37 + 2U) - uVar20);
        *puVar27 = *puVar27 & -1 << (uVar20 + 1) * 8 | uVar38 >> (3 - uVar20) * 8;
        puVar37 = puVar37 + 7;
        if (bVar13) break;
      }
      puVar43 = puVar43 + 5;
    } while (puVar43 != puVar19);
    *(uint **)(iVar28 + 0x68) = puVar37;
  }
  puVar43 = (uint *)param_1[4];
  uVar20 = 0x1f800000;
  if (*(ushort *)((int)param_1 + 0x36) != 0) {
    puVar37 = puVar43 + (uint)*(ushort *)((int)param_1 + 0x36) * 6;
    do {
      puVar19 = DAT_1f80006c;
      uVar55 = *puVar43;
      piVar14 = (int *)((uVar55 & 0x3ff) * 8 + DAT_1f800070);
      iVar32 = *piVar14;
      iVar44 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar55 >> 7 & 0x1ff8U) + DAT_1f800070);
      puVar16 = (undefined4 *)(((int)uVar55 >> 0x11 & 0x1ff8U) + DAT_1f800070);
      iVar28 = puVar16[1];
      puVar18 = (undefined4 *)((puVar43[1] & 0x3ff) * 8 + DAT_1f800070);
      gte_ldVXY2(iVar32);
      gte_ldVZ2(iVar44);
      gte_ldVXY0(*puVar15);
      gte_ldVZ0(puVar15[1]);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(iVar28);
      gte_rtpt_b();
      uVar30 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(iVar28,iVar32,iVar44);
      gte_nclip_b();
      gte_ldVXY0(*puVar18);
      gte_ldVZ0(puVar18[1]);
      iVar17 = gte_stMAC0();
      gte_rtps_b();
      uVar38 = gte_stFLAG();
      iVar29 = gte_stSZ3();
      gte_nclip_b();
      uVar54 = gte_stMAC0();
      if (-1 < (int)(uVar30 | uVar38)) {
        if (((-iVar17 | uVar54) != 0) && (-1 < (int)(-iVar17 - 1U & uVar54 - 1 & uVar55))) {
          uVar38 = uVar55 >> 0x1e & 1;
          if (iVar28 < iVar32 == uVar38) {
            iVar28 = iVar32;
          }
          if (iVar28 < iVar44 == uVar38) {
            iVar28 = iVar44;
          }
          if (iVar28 < iVar29 == uVar38) {
            iVar28 = iVar29;
          }
          uVar38 = ((uint)(iVar28 << (DAT_1f800098 & 0x1f)) >> 0xd) + (-uVar38 & 0x60);
          iVar28 = uVar38 * 4;
          if (0xfff < uVar38) {
            iVar28 = 0x3ffc;
          }
          iVar28 = DAT_1f800064 + iVar28;
          gte_ldRGB(puVar43[2]);
          gte_ldIR0(0);
          gte_dpcs_b();
          uVar38 = gte_stRGB2();
          gte_ldRGB0(puVar43[3]);
          gte_ldRGB1(puVar43[4]);
          gte_ldRGB2(puVar43[5]);
          gte_dpct();
          DAT_1f800068[1] = uVar38;
          gte_stRGB0();
          gte_stRGB1();
          gte_stRGB2();
          uVar38 = iVar28 + 2;
          uVar30 = uVar38 & 3;
          iVar17 = *(int *)(uVar38 - uVar30);
          gte_stSXY1();
          DAT_1f800068[4] = DAT_1f8000c0;
          gte_stSXY2();
          gte_stSXY0();
          *DAT_1f800068 = (uint)(iVar17 << (3 - uVar30) * 8) >> 8 | 0x8000000;
          uVar38 = iVar28 + 2;
          uVar30 = uVar38 & 3;
          puVar27 = (uint *)(uVar38 - uVar30);
          *puVar27 = *puVar27 & -1 << (uVar30 + 1) * 8 |
                     (uint)((int)DAT_1f800068 << 8) >> (3 - uVar30) * 8;
          bVar13 = puVar19 < DAT_1f800068;
          DAT_1f800068 = DAT_1f800068 + 9;
          if (bVar13) break;
        }
      }
      puVar43 = puVar43 + 6;
    } while (puVar43 != puVar37);
  }
  puVar43 = (uint *)param_1[5];
  iVar28 = 0x1f800000;
  if (*(ushort *)(param_1 + 0xe) != 0) {
    DAT_1f800394 = 0x480;
    puVar19 = puVar43 + (uint)*(ushort *)(param_1 + 0xe) * 6;
    puVar37 = DAT_1f800068;
    do {
      iVar29 = *(int *)(iVar28 + 0x70);
      uVar30 = *puVar43;
      piVar14 = (int *)((uVar30 & 0x3ff) * 8 + iVar29);
      iVar32 = *piVar14;
      iVar44 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar30 >> 7 & 0x1ff8U) + iVar29);
      iVar17 = puVar15[1];
      puVar16 = (undefined4 *)(((int)uVar30 >> 0x11 & 0x1ff8U) + iVar29);
      gte_ldVXY0(iVar32);
      gte_ldVZ0(iVar44);
      gte_ldVXY2(*puVar15);
      gte_ldVZ2(iVar17);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(puVar16[1]);
      gte_rtpt_b();
      gte_ldRGB(puVar43[2]);
      iVar29 = gte_stFLAG();
      read_sz_fifo3(iVar17,iVar44,iVar32);
      gte_nclip_b();
      uVar38 = gte_stMAC0();
      if (((-1 < iVar29) && (uVar38 != 0)) && (-1 < (int)(uVar38 & uVar30))) {
        gte_ldIR0(0);
        gte_dpcs_b();
        uVar54 = *(uint *)(iVar28 + 0x98);
        uVar30 = uVar30 >> 0x1e & 1;
        if (iVar17 < iVar32 == uVar30) {
          iVar17 = iVar32;
        }
        if (iVar17 < iVar44 == uVar30) {
          iVar17 = iVar44;
        }
        uVar30 = ((uint)(iVar17 << (uVar54 & 0x1f)) >> 0xd) + (-uVar30 & 0x60);
        iVar17 = uVar30 * 4;
        if (0xfff < uVar30) {
          iVar17 = 0x3ffc;
        }
        iVar17 = *(int *)(iVar28 + 100) + iVar17;
        uVar30 = puVar43[3];
        uVar55 = puVar43[4];
        uVar49 = puVar43[5];
        if ((int)uVar38 < 0) {
          uVar38 = -uVar38;
        }
        if (0x480 < (int)uVar38) {
          *(uint **)(iVar28 + 0x68) = puVar37;
          *(uint **)(iVar28 + 0x3a8) = puVar43;
          *(int *)(iVar28 + 0x9c) = iVar17;
          *(uint *)(iVar28 + 0xa4) = uVar55;
          uVar38 = iVar28 + 0xa5U & 3;
          puVar43 = (uint *)((iVar28 + 0xa5U) - uVar38);
          *puVar43 = *puVar43 & -1 << (uVar38 + 1) * 8 | uVar30 >> (3 - uVar38) * 8;
          gte_stVXY0();
          gte_stVZ0();
          gte_stVXY2();
          gte_stVZ2();
          gte_stVXY1();
          gte_stVZ1();
          *(short *)(iVar28 + 0xae) = (short)uVar30;
          *(short *)(iVar28 + 0xbe) = (short)uVar55;
          *(short *)(iVar28 + 0xce) = (short)uVar49;
          DAT_1f800388 = DAT_1f800068;
          gte_stSXY0();
          gte_stSXY2();
          gte_stSXY1();
          gte_stRGB2();
          puVar16 = &DAT_1f8000a8;
          iVar17 = 0x1f800000;
          ppsVar45 = (short **)&DAT_1f8000e8;
          puVar15 = &DAT_1f8000e8;
          pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
          do {
            bVar24 = *pbVar22;
            *puVar15 = puVar16;
            puVar15 = puVar15 + 1;
            if ((bVar24 & 0x20) != 0) {
              gte_ldVXY0(puVar16);
              gte_ldVZ0(pbVar22 + -0xb);
              gte_rtps_b();
              iVar29 = gte_stFLAG();
              gte_stSXY2();
              if (-1 < iVar29) {
                *pbVar22 = bVar24 & 0x1f;
              }
            }
            pbVar22 = pbVar22 + 0x10;
            puVar16 = puVar16 + 4;
          } while (puVar15 != &DAT_1f8000f4);
          DAT_1f80038c = DAT_1f800388;
          memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(&DAT_1f800388, 0), 3);
          DAT_1f800390.value = CONCAT13(7, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001a4c8:
          pSVar39 = (SVECTOR *)(ppsVar45 + 4);
          psVar31 = *ppsVar45;
          psVar33 = ppsVar45[1];
          psVar36 = ppsVar45[2];
          sVar6 = *psVar31;
          sVar7 = *psVar33;
          sVar8 = *psVar36;
          *(short *)(ppsVar45 + 4) = (short)((int)sVar6 + (int)sVar7 >> 1);
          *(short *)(ppsVar45 + 8) = (short)((int)sVar7 + (int)sVar8 >> 1);
          *(short *)(ppsVar45 + 0xc) = (short)((int)sVar8 + (int)sVar6 >> 1);
          sVar6 = psVar31[1];
          sVar7 = psVar33[1];
          sVar8 = psVar36[1];
          *(short *)((int)ppsVar45 + 0x12) = (short)((int)sVar6 + (int)sVar7 >> 1);
          *(short *)((int)ppsVar45 + 0x22) = (short)((int)sVar7 + (int)sVar8 >> 1);
          *(short *)((int)ppsVar45 + 0x32) = (short)((int)sVar8 + (int)sVar6 >> 1);
          sVar6 = psVar31[2];
          sVar7 = psVar33[2];
          sVar8 = psVar36[2];
          *(short *)(ppsVar45 + 5) = (short)((int)sVar6 + (int)sVar7 >> 1);
          *(short *)(ppsVar45 + 9) = (short)((int)sVar7 + (int)sVar8 >> 1);
          *(short *)(ppsVar45 + 0xd) = (short)((int)sVar8 + (int)sVar6 >> 1);
          gte_ldv0(pSVar39);
          gte_rtps_b();
          bVar24 = *(byte *)(psVar31 + 3);
          bVar1 = *(byte *)(psVar33 + 3);
          bVar2 = *(byte *)(psVar36 + 3);
          *(char *)&pSVar39->pad = (char)((int)((uint)bVar24 + (uint)bVar1) >> 1);
          *(char *)&pSVar39[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
          *(char *)&pSVar39[4].pad = (char)((int)((uint)bVar2 + (uint)bVar24) >> 1);
          bVar24 = *(byte *)((int)psVar31 + 7);
          bVar1 = *(byte *)((int)psVar33 + 7);
          bVar2 = *(byte *)((int)psVar36 + 7);
          *(char *)((int)&pSVar39->pad + 1) = (char)((int)((uint)bVar24 + (uint)bVar1) >> 1);
          *(char *)((int)&pSVar39[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
          *(char *)((int)&pSVar39[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar24) >> 1);
          uVar10 = *(ushort *)(iVar17 + 0x62);
          uVar11 = *(ushort *)(iVar17 + 0x5e);
          uVar12 = *(ushort *)(iVar17 + 0x60);
          pSVar41 = pSVar39;
          do {
            iVar32 = gte_stFLAG();
            gte_ldVXY0(pSVar41 + 2);
            gte_ldVZ0(&pSVar41[2].vz);
            gte_stSXY2();
            iVar29 = gte_stIR3();
            gte_rtps_b();
            bVar24 = iVar29 < (int)(uint)uVar10;
            if (pSVar41[1].vx < 0) {
              bVar24 = bVar24 | 2;
            }
            bVar24 = bVar24 | ((int)(uVar11 - 1) < (int)pSVar41[1].vx) << 2;
            if (pSVar41[1].vy < 0) {
              bVar24 = bVar24 | 8;
            }
            bVar24 = bVar24 | ((int)(uVar12 - 1) < (int)pSVar41[1].vy) << 4;
            if (iVar32 < 0) {
              bVar24 = bVar24 | 0x20;
            }
            pSVar40 = pSVar41 + 2;
            *(byte *)((int)&pSVar41[1].pad + 1) = bVar24;
            pSVar41 = pSVar40;
          } while (pSVar40 != pSVar39 + 6);
          piVar14 = *(int **)(iVar17 + 0x68);
          iVar32 = *(int *)(iVar17 + 0xa0);
          uVar38 = iVar17 + 0xa5U & 3;
          uVar20 = *(int *)((iVar17 + 0xa5U) - uVar38) << (3 - uVar38) * 8 |
                   uVar20 & 0xffffffffU >> (uVar38 + 1) * 8;
          uVar38 = *(uint *)(iVar17 + 0xa4);
          iVar29 = 2;
          ppsVar47 = ppsVar45 + 2;
          do {
            iVar44 = iVar29 + -1;
            if (iVar29 == 0) {
              iVar44 = 2;
            }
            psVar31 = *ppsVar47;
            psVar33 = ppsVar45[iVar44];
            bVar24 = *(byte *)((int)psVar31 + 0xf) | *(byte *)((int)ppsVar45 + iVar44 * 0x10 + 0x1f)
                     | *(byte *)((int)psVar33 + 0xf);
            if ((bVar24 & 0x20) == 0) {
              gte_ldSXY0(psVar31 + 4);
              gte_ldSXY1(ppsVar45 + iVar44 * 4 + 6);
              gte_ldSXY2(psVar33 + 4);
              gte_stSXY0();
              gte_stSXY1();
              gte_nclip_b();
              uVar30 = (uint)(psVar31 + 3) & 3;
              uVar20 = uVar20 & -1 << (4 - uVar30) * 8 |
                       *(uint *)((int)(psVar31 + 3) - uVar30) >> uVar30 * 8;
              uVar30 = (int)ppsVar45 + iVar44 * 0x10 + 0x16;
              uVar54 = uVar30 & 3;
              uVar38 = uVar38 & -1 << (4 - uVar54) * 8 | *(uint *)(uVar30 - uVar54) >> uVar54 * 8;
              piVar14[3] = uVar20;
              uVar30 = (uint)(psVar33 + 3) & 3;
              uVar54 = *(uint *)((int)(psVar33 + 3) - uVar30);
              piVar14[5] = uVar38;
              piVar14[7] = bVar24 & 0x20 & -1 << (4 - uVar30) * 8 | uVar54 >> uVar30 * 8;
              *piVar14 = (int)(piVar14 + -0x1e3ffff8);
              iVar44 = gte_stMAC0();
              gte_stSXY2();
              piVar14[1] = iVar32;
              if (iVar44 != 0) {
                *(int **)(iVar17 + 0x38c) = piVar14;
                piVar14 = piVar14 + 8;
              }
            }
            ppsVar47 = ppsVar47 + -1;
            iVar29 = iVar29 + -1;
            *(int **)(iVar17 + 0x68) = piVar14;
          } while (-1 < iVar29);
          uVar38 = 3;
          ppsVar47 = ppsVar45;
          if (*(uint *)(iVar17 + 0x68) <= *(uint *)(iVar17 + 0x6c)) {
            do {
              if (uVar38 == 3) {
                ppsVar52 = ppsVar47 + 4;
                ppsVar42 = ppsVar47 + 8;
                ppsVar34 = ppsVar47 + 0xc;
              }
              else {
                ppsVar52 = (short **)ppsVar47[uVar38];
                ppsVar42 = ppsVar47 + uVar38 * 4 + 4;
                if (uVar38 == 0) {
                  ppsVar34 = ppsVar47 + 0xc;
                }
                else {
                  ppsVar34 = ppsVar47 + (uVar38 - 1) * 4 + 4;
                }
              }
              bVar24 = *(byte *)((int)ppsVar52 + 0xf);
              if ((bVar24 & *(byte *)((int)ppsVar42 + 0xf) & *(byte *)((int)ppsVar34 + 0xf) & 0x1f)
                  == 0) {
                if (((bVar24 | *(byte *)((int)ppsVar42 + 0xf) | *(byte *)((int)ppsVar34 + 0xf)) &
                    0x20) == 0) {
                  piVar14 = *(int **)(iVar17 + 0x68);
                  gte_ldSXY0(ppsVar52 + 2);
                  gte_ldSXY1(ppsVar42 + 2);
                  gte_ldSXY2(ppsVar34 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  iVar32 = *(int *)(iVar17 + 0xa0);
                  *piVar14 = (int)(piVar14 + -0x1e3ffff8);
                  uVar10 = *(ushort *)(iVar17 + 0x394);
                  uVar30 = iVar17 + 0xa5U & 3;
                  iVar29 = *(int *)((iVar17 + 0xa5U) - uVar30);
                  uVar54 = (int)ppsVar52 + 6U & 3;
                  uVar55 = *(uint *)(((int)ppsVar52 + 6U) - uVar54);
                  uVar49 = gte_stMAC0();
                  uVar46 = *(uint *)(iVar17 + 0xa4);
                  gte_stSXY2();
                  if ((int)uVar49 < 0) {
                    uVar49 = -uVar49;
                  }
                  piVar14[1] = iVar32;
                  if (uVar49 <= uVar10) {
                    uVar49 = (int)ppsVar42 + 6U & 3;
                    uVar56 = *(uint *)(((int)ppsVar42 + 6U) - uVar49);
                    piVar14[3] = (iVar29 << (3 - uVar30) * 8 |
                                 (uint)bVar24 & 0xffffffffU >> (uVar30 + 1) * 8) &
                                 -1 << (4 - uVar54) * 8 | uVar55 >> uVar54 * 8;
                    uVar30 = (int)ppsVar34 + 6U & 3;
                    uVar54 = *(uint *)(((int)ppsVar34 + 6U) - uVar30);
                    piVar14[5] = uVar46 & -1 << (4 - uVar49) * 8 | uVar56 >> uVar49 * 8;
                    piVar14[7] = iVar17 + 0x328U & -1 << (4 - uVar30) * 8 | uVar54 >> uVar30 * 8;
                    *(int **)(iVar17 + 0x38c) = piVar14;
                    *(int **)(iVar17 + 0x68) = piVar14 + 8;
                    goto LAB_overlay0__8001a860;
                  }
                }
                if (ppsVar47 != (short **)(iVar17 + 0x328)) goto LAB_overlay0__8001a734;
              }
LAB_overlay0__8001a860:
              while (uVar38 = uVar38 - 1, (int)uVar38 < 0) {
                if (ppsVar47 == (short **)(iVar17 + 0xe8)) {
                  uVar38 = *(uint *)(iVar17 + 0x388);
                  if (*(uint *)(iVar17 + 0x6c) < *(uint *)(iVar17 + 0x68)) {
                    *(uint *)(iVar17 + 0x68) = uVar38;
                  }
                  else if (*(uint *)(iVar17 + 0x68) != uVar38) {
                    iVar32 = *(int *)(iVar17 + 0x38c);
                    uVar30 = *(int *)(iVar17 + 0x9c) + 2;
                    uVar54 = uVar30 & 3;
                    iVar29 = *(int *)(uVar30 - uVar54);
                    uVar30 = *(int *)(iVar17 + 0x9c) + 2;
                    uVar55 = uVar30 & 3;
                    puVar43 = (uint *)(uVar30 - uVar55);
                    *puVar43 = *puVar43 & -1 << (uVar55 + 1) * 8 | (uVar38 << 8) >> (3 - uVar55) * 8
                    ;
                    uVar38 = iVar32 + 2;
                    uVar30 = uVar38 & 3;
                    puVar43 = (uint *)(uVar38 - uVar30);
                    *puVar43 = *puVar43 & -1 << (uVar30 + 1) * 8 |
                               (uint)(iVar29 << (3 - uVar54) * 8) >> (3 - uVar30) * 8;
                  }
                  goto LAB_overlay0__8001a8bc;
                }
                ppsVar45 = ppsVar47 + -0x11;
                ppsVar47 = ppsVar47 + -0x18;
                uVar38 = (uint)*(byte *)ppsVar45;
              }
            } while( true );
          }
          *(undefined4 *)(iVar17 + 0x68) = *(undefined4 *)(iVar17 + 0x388);
LAB_overlay0__8001a8bc:
          puVar37 = *(uint **)(iVar28 + 0x68);
          puVar43 = *(uint **)(iVar28 + 0x3a8);
          if (puVar37 < *(uint **)(iVar28 + 0x6c)) goto LAB_overlay0__8001a920;
          *(uint **)(iVar28 + 0x68) = puVar37;
          goto LAB_overlay0__8001a930;
        }
        puVar25 = *(uint **)(iVar28 + 0x6c);
        uVar38 = iVar17 + 2U & 3;
        iVar29 = *(int *)((iVar17 + 2U) - uVar38);
        gte_stRGB2();
        puVar37[3] = uVar30;
        puVar37[5] = uVar55;
        puVar37[7] = uVar49;
        uVar30 = iVar17 + 2U & 3;
        puVar27 = (uint *)((iVar17 + 2U) - uVar30);
        *puVar27 = *puVar27 & -1 << (uVar30 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar30) * 8
        ;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)puVar37 + 3) = 7;
        bVar13 = puVar25 < puVar37;
        uVar30 = (int)puVar37 + 2U & 3;
        puVar27 = (uint *)(((int)puVar37 + 2U) - uVar30);
        *puVar27 = *puVar27 & -1 << (uVar30 + 1) * 8 |
                   (iVar29 << (3 - uVar38) * 8 | uVar54 & 0xffffffffU >> (uVar38 + 1) * 8) >>
                   (3 - uVar30) * 8;
        puVar37 = puVar37 + 8;
        if (bVar13) break;
      }
LAB_overlay0__8001a920:
      puVar43 = puVar43 + 6;
    } while (puVar43 != puVar19);
    *(uint **)(iVar28 + 0x68) = puVar37;
  }
LAB_overlay0__8001a930:
  puVar43 = (uint *)param_1[6];
  iVar28 = 0x1f800000;
  if (*(ushort *)((int)param_1 + 0x3a) != 0) {
    DAT_1f800394 = 0x800;
    _DAT_1f8003ac = puVar43 + (uint)*(ushort *)((int)param_1 + 0x3a) * 6;
    puVar37 = DAT_1f800068;
    do {
      iVar17 = *(int *)(iVar28 + 0x70);
      uVar56 = *puVar43;
      uVar20 = puVar43[1];
      puVar19 = (uint *)((uVar56 & 0x3ff) * 8 + iVar17);
      uVar49 = *puVar19;
      uVar46 = puVar19[1];
      puVar15 = (undefined4 *)(((int)uVar56 >> 7 & 0x1ff8U) + iVar17);
      uVar26 = *puVar15;
      uVar38 = puVar15[1];
      *(undefined4 *)(iVar28 + 0xb8) = uVar26;
      *(uint *)(iVar28 + 0xbc) = uVar38;
      puVar15 = (undefined4 *)(((int)uVar56 >> 0x11 & 0x1ff8U) + iVar17);
      puVar16 = (undefined4 *)((uVar20 & 0x3ff) * 8 + iVar17);
      gte_ldVXY2(uVar49);
      gte_ldVZ2(uVar46);
      gte_ldVXY0(uVar26);
      gte_ldVZ0(uVar38);
      gte_ldVXY1(*puVar15);
      gte_ldVZ1(puVar15[1]);
      gte_rtpt_b();
      uVar54 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(uVar38,uVar49,uVar46);
      gte_nclip_b();
      gte_ldVXY0(*puVar16);
      gte_ldVZ0(puVar16[1]);
      iVar17 = gte_stMAC0();
      gte_rtps_b();
      uVar30 = gte_stFLAG();
      uVar20 = gte_stSZ3();
      gte_nclip_b();
      uVar55 = gte_stMAC0();
      if (-1 < (int)(uVar54 | uVar30)) {
        uVar30 = -iVar17;
        iVar17 = uVar30 + uVar55;
        if (((uVar30 | uVar55) != 0) && (-1 < (int)(uVar30 - 1 & uVar55 - 1 & uVar56))) {
          uVar30 = uVar56 >> 0x1e & 1;
          if ((int)uVar38 < (int)uVar49 == uVar30) {
            uVar38 = uVar49;
          }
          if ((int)uVar38 < (int)uVar46 == uVar30) {
            uVar38 = uVar46;
          }
          if ((int)uVar38 < (int)uVar20 == uVar30) {
            uVar38 = uVar20;
          }
          uVar38 = ((uVar38 << (*(uint *)(iVar28 + 0x98) & 0x1f)) >> 0xd) + (-uVar30 & 0x60);
          iVar29 = uVar38 * 4;
          if (0xfff < uVar38) {
            iVar29 = 0x3ffc;
          }
          iVar29 = *(int *)(iVar28 + 100) + iVar29;
          gte_ldRGB(puVar43[2]);
          gte_ldIR0(0);
          gte_dpcs_b();
          uVar38 = gte_stRGB2();
          uVar54 = puVar43[3];
          uVar55 = puVar43[4];
          uVar30 = puVar43[5];
          if (iVar17 < 0) {
            iVar17 = -iVar17;
          }
          if (0x800 < iVar17) {
            *(uint **)(iVar28 + 0x68) = puVar37;
            *(uint **)(iVar28 + 0x3a8) = puVar43;
            *(int *)(iVar28 + 0x9c) = iVar29;
            gte_stRGB2();
            gte_stVXY2();
            gte_stVZ2();
            gte_stVXY1();
            gte_stVZ1();
            gte_stVXY0();
            gte_stVZ0();
            gte_stSXY1();
            gte_stSXY0();
            gte_stSXY2();
            *(uint *)(iVar28 + 0xa4) = uVar55;
            uVar20 = iVar28 + 0xa5U & 3;
            puVar43 = (uint *)((iVar28 + 0xa5U) - uVar20);
            *puVar43 = *puVar43 & -1 << (uVar20 + 1) * 8 | uVar54 >> (3 - uVar20) * 8;
            *(short *)(iVar28 + 0xae) = (short)uVar54;
            *(short *)(iVar28 + 0xbe) = (short)uVar55;
            *(short *)(iVar28 + 0xce) = (short)uVar30;
            *(short *)(iVar28 + 0xde) = (short)(uVar30 >> 0x10);
            DAT_1f800388 = DAT_1f800068;
            puVar16 = &DAT_1f8000a8;
            uVar20 = 0x1f800000;
            ppsVar45 = (short **)&DAT_1f8000e8;
            puVar15 = &DAT_1f8000e8;
            pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
            do {
              bVar24 = *pbVar22;
              *puVar15 = puVar16;
              puVar15 = puVar15 + 1;
              if ((bVar24 & 0x20) != 0) {
                gte_ldVXY0(puVar16);
                gte_ldVZ0(pbVar22 + -0xb);
                gte_rtps_b();
                iVar17 = gte_stFLAG();
                gte_stSXY2();
                if (-1 < iVar17) {
                  *pbVar22 = bVar24 & 0x1f;
                }
              }
              pbVar22 = pbVar22 + 0x10;
              puVar16 = puVar16 + 4;
            } while (puVar15 != (undefined4 *)&DAT_1f8000f8);
            DAT_1f80038c = DAT_1f800388;
            memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(&DAT_1f800388, 0), 3);
            DAT_1f800390.value = CONCAT13(9, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001abdc:
            pSVar39 = (SVECTOR *)(ppsVar45 + 4);
            psVar31 = *ppsVar45;
            psVar33 = ppsVar45[1];
            psVar36 = ppsVar45[2];
            psVar50 = ppsVar45[3];
            sVar6 = *psVar31;
            sVar7 = *psVar33;
            sVar8 = *psVar36;
            iVar29 = (int)sVar6 + (int)sVar7;
            *(short *)(ppsVar45 + 8) = (short)(iVar29 >> 1);
            sVar9 = *psVar50;
            *(short *)(ppsVar45 + 0xc) = (short)((int)sVar7 + (int)sVar8 >> 1);
            iVar17 = (int)sVar8 + (int)sVar9;
            *(short *)(ppsVar45 + 0x10) = (short)(iVar17 >> 1);
            *(short *)(ppsVar45 + 0x14) = (short)((int)sVar9 + (int)sVar6 >> 1);
            *(short *)(ppsVar45 + 4) = (short)(iVar29 + iVar17 >> 2);
            sVar6 = psVar31[1];
            sVar7 = psVar33[1];
            sVar8 = psVar36[1];
            iVar29 = (int)sVar6 + (int)sVar7;
            *(short *)((int)ppsVar45 + 0x22) = (short)(iVar29 >> 1);
            sVar9 = psVar50[1];
            *(short *)((int)ppsVar45 + 0x32) = (short)((int)sVar7 + (int)sVar8 >> 1);
            iVar17 = (int)sVar8 + (int)sVar9;
            *(short *)((int)ppsVar45 + 0x42) = (short)(iVar17 >> 1);
            *(short *)((int)ppsVar45 + 0x52) = (short)((int)sVar9 + (int)sVar6 >> 1);
            *(short *)((int)ppsVar45 + 0x12) = (short)(iVar29 + iVar17 >> 2);
            sVar6 = psVar31[2];
            sVar7 = psVar33[2];
            sVar8 = psVar36[2];
            iVar29 = (int)sVar6 + (int)sVar7;
            *(short *)(ppsVar45 + 9) = (short)(iVar29 >> 1);
            sVar9 = psVar50[2];
            *(short *)(ppsVar45 + 0xd) = (short)((int)sVar7 + (int)sVar8 >> 1);
            iVar17 = (int)sVar8 + (int)sVar9;
            *(short *)(ppsVar45 + 0x11) = (short)(iVar17 >> 1);
            *(short *)(ppsVar45 + 0x15) = (short)((int)sVar9 + (int)sVar6 >> 1);
            *(short *)(ppsVar45 + 5) = (short)(iVar29 + iVar17 >> 2);
            gte_ldv0(pSVar39);
            gte_rtps_b();
            bVar24 = *(byte *)(psVar31 + 3);
            bVar1 = *(byte *)(psVar33 + 3);
            bVar2 = *(byte *)(psVar36 + 3);
            iVar29 = (uint)bVar24 + (uint)bVar1;
            *(char *)&pSVar39[2].pad = (char)(iVar29 >> 1);
            bVar3 = *(byte *)(psVar50 + 3);
            *(char *)&pSVar39[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
            iVar17 = (uint)bVar2 + (uint)bVar3;
            *(char *)&pSVar39[6].pad = (char)(iVar17 >> 1);
            *(char *)&pSVar39[8].pad = (char)((int)((uint)bVar3 + (uint)bVar24) >> 1);
            *(char *)&pSVar39->pad = (char)(iVar29 + iVar17 >> 2);
            bVar24 = *(byte *)((int)psVar31 + 7);
            bVar1 = *(byte *)((int)psVar33 + 7);
            bVar2 = *(byte *)((int)psVar36 + 7);
            iVar29 = (uint)bVar24 + (uint)bVar1;
            *(char *)((int)&pSVar39[2].pad + 1) = (char)(iVar29 >> 1);
            bVar3 = *(byte *)((int)psVar50 + 7);
            *(char *)((int)&pSVar39[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
            iVar17 = (uint)bVar2 + (uint)bVar3;
            *(char *)((int)&pSVar39[6].pad + 1) = (char)(iVar17 >> 1);
            *(char *)((int)&pSVar39[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar24) >> 1);
            *(char *)((int)&pSVar39->pad + 1) = (char)(iVar29 + iVar17 >> 2);
            uVar10 = *(ushort *)(uVar20 + 0x62);
            uVar11 = *(ushort *)(uVar20 + 0x5e);
            uVar12 = *(ushort *)(uVar20 + 0x60);
            pSVar41 = pSVar39;
            do {
              iVar29 = gte_stFLAG();
              gte_ldVXY0(pSVar41 + 2);
              gte_ldVZ0(&pSVar41[2].vz);
              gte_stSXY2();
              iVar17 = gte_stIR3();
              gte_rtps_b();
              bVar24 = iVar17 < (int)(uint)uVar10;
              if (pSVar41[1].vx < 0) {
                bVar24 = bVar24 | 2;
              }
              bVar24 = bVar24 | ((int)(uVar11 - 1) < (int)pSVar41[1].vx) << 2;
              if (pSVar41[1].vy < 0) {
                bVar24 = bVar24 | 8;
              }
              bVar24 = bVar24 | ((int)(uVar12 - 1) < (int)pSVar41[1].vy) << 4;
              if (iVar29 < 0) {
                bVar24 = bVar24 | 0x20;
              }
              pSVar40 = pSVar41 + 2;
              *(byte *)((int)&pSVar41[1].pad + 1) = bVar24;
              pSVar41 = pSVar40;
            } while (pSVar40 != pSVar39 + 10);
            piVar14 = *(int **)(uVar20 + 0x68);
            iVar29 = *(int *)(uVar20 + 0xa0);
            uVar38 = uVar20 + 0xa5 & 3;
            uVar54 = *(int *)((uVar20 + 0xa5) - uVar38) << (3 - uVar38) * 8 |
                     (uint)pSVar40 & 0xffffffffU >> (uVar38 + 1) * 8;
            uVar30 = *(uint *)(uVar20 + 0xa4);
            ppsVar47 = ppsVar45 + 3;
            uVar38 = 2;
            iVar17 = 3;
            do {
              uVar38 = uVar38 & 3;
              psVar31 = *ppsVar47;
              psVar33 = ppsVar45[uVar38];
              bVar24 = *(byte *)((int)psVar31 + 0xf) |
                       *(byte *)((int)ppsVar45 + uVar38 * 0x10 + 0x2f) |
                       *(byte *)((int)psVar33 + 0xf);
              if ((bVar24 & 0x20) == 0) {
                gte_ldSXY0(psVar31 + 4);
                gte_ldSXY1(ppsVar45 + uVar38 * 4 + 10);
                gte_ldSXY2(psVar33 + 4);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                uVar55 = (uint)(psVar31 + 3) & 3;
                uVar54 = uVar54 & -1 << (4 - uVar55) * 8 |
                         *(uint *)((int)(psVar31 + 3) - uVar55) >> uVar55 * 8;
                uVar38 = (int)ppsVar45 + uVar38 * 0x10 + 0x26;
                uVar55 = uVar38 & 3;
                uVar30 = uVar30 & -1 << (4 - uVar55) * 8 | *(uint *)(uVar38 - uVar55) >> uVar55 * 8;
                piVar14[3] = uVar54;
                uVar38 = (uint)(psVar33 + 3) & 3;
                uVar55 = *(uint *)((int)(psVar33 + 3) - uVar38);
                piVar14[5] = uVar30;
                piVar14[7] = bVar24 & 0x20 & -1 << (4 - uVar38) * 8 | uVar55 >> uVar38 * 8;
                *piVar14 = (int)(piVar14 + -0x1e3ffff8);
                iVar32 = gte_stMAC0();
                gte_stSXY2();
                piVar14[1] = iVar29 + -0x8000000;
                if (iVar32 != 0) {
                  *(int **)(uVar20 + 0x38c) = piVar14;
                  piVar14 = piVar14 + 8;
                }
              }
              ppsVar47 = ppsVar47 + -1;
              iVar32 = iVar17 + -1;
              *(int **)(uVar20 + 0x68) = piVar14;
              uVar38 = iVar17 - 2;
              iVar17 = iVar32;
            } while (-1 < iVar32);
            uVar38 = 3;
            if (*(uint *)(uVar20 + 0x68) <= *(uint *)(uVar20 + 0x6c)) {
              uVar30 = 2;
              ppsVar47 = ppsVar45;
              do {
                ppsVar52 = ppsVar47 + uVar38 * 4 + 8;
                ppsVar42 = ppsVar47 + (uVar30 & 3) * 4 + 8;
                psVar31 = ppsVar47[uVar38];
                uVar30 = uVar38;
                if ((*(byte *)((int)psVar31 + 0xf) & *(byte *)((int)ppsVar52 + 0xf) &
                     *(byte *)((int)ppsVar47 + 0x1f) & *(byte *)((int)ppsVar42 + 0xf) & 0x1f) == 0)
                {
                  if (((*(byte *)((int)psVar31 + 0xf) | *(byte *)((int)ppsVar52 + 0xf) |
                        *(byte *)((int)ppsVar47 + 0x1f) | *(byte *)((int)ppsVar42 + 0xf)) & 0x20) ==
                      0) {
                    puVar43 = *(uint **)(uVar20 + 0x68);
                    gte_ldSXY0(ppsVar52 + 2);
                    gte_ldSXY1(psVar31 + 4);
                    gte_ldSXY2(ppsVar47 + 6);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();
                    uVar54 = *(uint *)(uVar20 + 0xa0);
                    *puVar43 = (uint)(puVar43 + -0x1dbffff6);
                    puVar43[1] = uVar54;
                    uVar10 = *(ushort *)(uVar20 + 0x394);
                    iVar29 = gte_stMAC0();
                    gte_ldSXY0(ppsVar42 + 2);
                    uVar54 = uVar20 + 0xa5 & 3;
                    uVar23 = *(uint *)(uVar20 + 0xa4);
                    gte_nclip_b();
                    uVar55 = (uint)(psVar31 + 3) & 3;
                    uVar56 = (*(int *)((uVar20 + 0xa5) - uVar54) << (3 - uVar54) * 8 |
                             (uint)(puVar43 + -0x1dbffff6) & 0xffffffffU >> (uVar54 + 1) * 8) &
                             -1 << (4 - uVar55) * 8 |
                             *(uint *)((int)(psVar31 + 3) - uVar55) >> uVar55 * 8;
                    uVar54 = (int)ppsVar52 + 6U & 3;
                    uVar49 = *(uint *)(((int)ppsVar52 + 6U) - uVar54);
                    puVar43[3] = uVar56;
                    uVar55 = (int)ppsVar47 + 0x16U & 3;
                    uVar46 = *(uint *)(((int)ppsVar47 + 0x16U) - uVar55);
                    puVar43[5] = uVar23 & -1 << (4 - uVar54) * 8 | uVar49 >> uVar54 * 8;
                    uVar54 = (int)ppsVar42 + 6U & 3;
                    uVar49 = *(uint *)(((int)ppsVar42 + 6U) - uVar54);
                    puVar43[9] = -1 << (4 - uVar55) * 8 & 0x77000000U | uVar46 >> uVar55 * 8;
                    puVar43[7] = uVar56 & -1 << (4 - uVar54) * 8 | uVar49 >> uVar54 * 8;
                    iVar17 = gte_stMAC0();
                    gte_stSXY0();
                    uVar54 = iVar29 - iVar17;
                    gte_stSXY2();
                    if ((int)uVar54 < 0) {
                      uVar54 = -uVar54;
                    }
                    if (uVar54 <= uVar10) {
                      *(uint **)(uVar20 + 0x38c) = puVar43;
                      *(uint **)(uVar20 + 0x68) = puVar43 + 10;
                      goto LAB_overlay0__8001b030;
                    }
                  }
                  if (ppsVar47 != (short **)(uVar20 + 0x328)) goto code_r0x8001b00c;
                }
LAB_overlay0__8001b030:
                while( true ) {
                  uVar38 = uVar30 - 1;
                  uVar30 = uVar30 - 2;
                  if (-1 < (int)uVar38) break;
                  if (ppsVar47 == (short **)(uVar20 + 0xe8)) {
                    uVar38 = *(uint *)(uVar20 + 0x388);
                    if (*(uint *)(uVar20 + 0x6c) < *(uint *)(uVar20 + 0x68)) {
                      *(uint *)(uVar20 + 0x68) = uVar38;
                    }
                    else if (*(uint *)(uVar20 + 0x68) != uVar38) {
                      iVar29 = *(int *)(uVar20 + 0x38c);
                      uVar30 = *(int *)(uVar20 + 0x9c) + 2;
                      uVar54 = uVar30 & 3;
                      iVar17 = *(int *)(uVar30 - uVar54);
                      uVar30 = *(int *)(uVar20 + 0x9c) + 2;
                      uVar55 = uVar30 & 3;
                      puVar43 = (uint *)(uVar30 - uVar55);
                      *puVar43 = *puVar43 & -1 << (uVar55 + 1) * 8 |
                                 (uVar38 << 8) >> (3 - uVar55) * 8;
                      uVar38 = iVar29 + 2;
                      uVar30 = uVar38 & 3;
                      puVar43 = (uint *)(uVar38 - uVar30);
                      *puVar43 = *puVar43 & -1 << (uVar30 + 1) * 8 |
                                 (uint)(iVar17 << (3 - uVar54) * 8) >> (3 - uVar30) * 8;
                    }
                    goto LAB_overlay0__8001b08c;
                  }
                  ppsVar45 = ppsVar47 + -0x11;
                  ppsVar47 = ppsVar47 + -0x18;
                  uVar30 = (uint)*(byte *)ppsVar45;
                }
              } while( true );
            }
            *(undefined4 *)(uVar20 + 0x68) = *(undefined4 *)(uVar20 + 0x388);
LAB_overlay0__8001b08c:
            puVar37 = *(uint **)(iVar28 + 0x68);
            puVar43 = *(uint **)(iVar28 + 0x3a8);
            if (puVar37 < *(uint **)(iVar28 + 0x6c)) goto LAB_overlay0__8001b100;
            *(uint **)(iVar28 + 0x68) = puVar37;
            goto LAB_overlay0__8001b114;
          }
          puVar37[3] = uVar54;
          puVar37[5] = uVar55;
          puVar37[9] = uVar30;
          uVar54 = (int)puVar37 + 0x1dU & 3;
          puVar19 = (uint *)(((int)puVar37 + 0x1dU) - uVar54);
          *puVar19 = *puVar19 & -1 << (uVar54 + 1) * 8 | uVar30 >> (3 - uVar54) * 8;
          puVar27 = *(uint **)(iVar28 + 0x6c);
          puVar37[1] = uVar38;
          uVar38 = iVar29 + 2U & 3;
          iVar17 = *(int *)((iVar29 + 2U) - uVar38);
          gte_stSXY1();
          puVar37[4] = *(uint *)(iVar28 + 0xc0);
          gte_stSXY2();
          gte_stSXY0();
          *puVar37 = (uint)(iVar17 << (3 - uVar38) * 8) >> 8 | 0x9000000;
          uVar38 = iVar29 + 2U & 3;
          puVar19 = (uint *)((iVar29 + 2U) - uVar38);
          *puVar19 = *puVar19 & -1 << (uVar38 + 1) * 8 |
                     (uint)((int)puVar37 << 8) >> (3 - uVar38) * 8;
          bVar13 = puVar27 < puVar37;
          puVar37 = puVar37 + 10;
          if (bVar13) break;
        }
      }
LAB_overlay0__8001b100:
      puVar43 = puVar43 + 6;
    } while (puVar43 != *(uint **)(iVar28 + 0x3ac));
    *(uint **)(iVar28 + 0x68) = puVar37;
  }
LAB_overlay0__8001b114:
  puVar43 = (uint *)param_1[7];
  iVar28 = 0x1f800000;
  if (*(ushort *)(param_1 + 0xf) != 0) {
    DAT_1f800394 = 0x480;
    puVar19 = puVar43 + (uint)*(ushort *)(param_1 + 0xf) * 8;
    puVar37 = DAT_1f800068;
    do {
      iVar29 = *(int *)(iVar28 + 0x70);
      uVar30 = *puVar43;
      piVar14 = (int *)((uVar30 & 0x3ff) * 8 + iVar29);
      iVar32 = *piVar14;
      iVar44 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar30 >> 7 & 0x1ff8U) + iVar29);
      iVar17 = puVar15[1];
      puVar16 = (undefined4 *)(((int)uVar30 >> 0x11 & 0x1ff8U) + iVar29);
      gte_ldVXY0(iVar32);
      gte_ldVZ0(iVar44);
      gte_ldVXY2(*puVar15);
      gte_ldVZ2(iVar17);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(puVar16[1]);
      gte_rtpt_b();
      gte_ldRGB(puVar43[2]);
      gte_ldRGB0(puVar43[2]);
      gte_ldRGB1(puVar43[6]);
      gte_ldRGB2(puVar43[7]);
      iVar29 = gte_stFLAG();
      read_sz_fifo3(iVar17,iVar44,iVar32);
      gte_nclip_b();
      uVar38 = gte_stMAC0();
      if (((-1 < iVar29) && (uVar38 != 0)) && (-1 < (int)(uVar38 & uVar30))) {
        gte_ldIR0(0);
        gte_dpct_b();
        uVar30 = uVar30 >> 0x1e & 1;
        if (iVar17 < iVar32 == uVar30) {
          iVar17 = iVar32;
        }
        if (iVar17 < iVar44 == uVar30) {
          iVar17 = iVar44;
        }
        uVar30 = ((uint)(iVar17 << (*(uint *)(iVar28 + 0x98) & 0x1f)) >> 0xd) + (-uVar30 & 0x60);
        iVar17 = uVar30 * 4;
        if (0xfff < uVar30) {
          iVar17 = 0x3ffc;
        }
        iVar17 = *(int *)(iVar28 + 100) + iVar17;
        uVar30 = puVar43[3];
        uVar35 = puVar43[4];
        uVar51 = puVar43[5];
        if ((int)uVar38 < 0) {
          uVar38 = -uVar38;
        }
        if (0x480 < (int)uVar38) {
          *(uint **)(iVar28 + 0x68) = puVar37;
          *(uint **)(iVar28 + 0x3a8) = puVar43;
          *(int *)(iVar28 + 0x9c) = iVar17;
          *(u_long *)(iVar28 + 0xa4) = uVar35;
          uVar38 = iVar28 + 0xa5U & 3;
          puVar43 = (uint *)((iVar28 + 0xa5U) - uVar38);
          *puVar43 = *puVar43 & -1 << (uVar38 + 1) * 8 | uVar30 >> (3 - uVar38) * 8;
          gte_stVXY0();
          gte_stVZ0();
          gte_stVXY2();
          gte_stVZ2();
          gte_stVXY1();
          gte_stVZ1();
          *(short *)(iVar28 + 0xae) = (short)uVar30;
          *(short *)(iVar28 + 0xbe) = (short)uVar35;
          *(short *)(iVar28 + 0xce) = (short)uVar51;
          DAT_1f800388 = DAT_1f800068;
          gte_stSXY0();
          gte_stSXY2();
          gte_stSXY1();
          gte_stRGB2();
          gte_stRGB2();
          gte_stRGB0();
          gte_stRGB1();
          puVar16 = &DAT_1f8000a8;
          iVar17 = 0x1f800000;
          ppsVar45 = (short **)&DAT_1f8000e8;
          puVar15 = &DAT_1f8000e8;
          pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
          do {
            bVar24 = *pbVar22;
            *puVar15 = puVar16;
            puVar15 = puVar15 + 1;
            if ((bVar24 & 0x20) != 0) {
              gte_ldVXY0(puVar16);
              gte_ldVZ0(pbVar22 + -0xb);
              gte_rtps_b();
              iVar29 = gte_stFLAG();
              gte_stSXY2();
              if (-1 < iVar29) {
                *pbVar22 = bVar24 & 0x1f;
              }
            }
            pbVar22 = pbVar22 + 0x10;
            puVar16 = puVar16 + 4;
          } while (puVar15 != &DAT_1f8000f4);
          DAT_1f80038c = DAT_1f800388;
          memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(&DAT_1f800388, 0), 3);
          DAT_1f800390.value = CONCAT13(9, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001b360:
          pSVar39 = (SVECTOR *)(ppsVar45 + 4);
          psVar31 = *ppsVar45;
          psVar33 = ppsVar45[1];
          psVar36 = ppsVar45[2];
          sVar6 = *psVar31;
          sVar7 = *psVar33;
          sVar8 = *psVar36;
          *(short *)(ppsVar45 + 4) = (short)((int)sVar6 + (int)sVar7 >> 1);
          *(short *)(ppsVar45 + 8) = (short)((int)sVar7 + (int)sVar8 >> 1);
          *(short *)(ppsVar45 + 0xc) = (short)((int)sVar8 + (int)sVar6 >> 1);
          sVar6 = psVar31[1];
          sVar7 = psVar33[1];
          sVar8 = psVar36[1];
          *(short *)((int)ppsVar45 + 0x12) = (short)((int)sVar6 + (int)sVar7 >> 1);
          *(short *)((int)ppsVar45 + 0x22) = (short)((int)sVar7 + (int)sVar8 >> 1);
          *(short *)((int)ppsVar45 + 0x32) = (short)((int)sVar8 + (int)sVar6 >> 1);
          sVar6 = psVar31[2];
          sVar7 = psVar33[2];
          sVar8 = psVar36[2];
          *(short *)(ppsVar45 + 5) = (short)((int)sVar6 + (int)sVar7 >> 1);
          *(short *)(ppsVar45 + 9) = (short)((int)sVar7 + (int)sVar8 >> 1);
          *(short *)(ppsVar45 + 0xd) = (short)((int)sVar8 + (int)sVar6 >> 1);
          uVar54 = *(uint *)(psVar31 + 6);
          uVar38 = *(uint *)(psVar33 + 6);
          uVar30 = *(uint *)(psVar36 + 6);
          ppsVar45[7] = (short *)((int)((uVar54 & 0xfefefe) + (uVar38 & 0xfefefe)) >> 1);
          ppsVar45[0xb] = (short *)((int)((uVar38 & 0xfefefe) + (uVar30 & 0xfefefe)) >> 1);
          ppsVar45[0xf] = (short *)((int)((uVar30 & 0xfefefe) + (uVar54 & 0xfefefe)) >> 1);
          gte_ldv0(pSVar39);
          gte_rtps_b();
          bVar24 = *(byte *)(psVar31 + 3);
          bVar1 = *(byte *)(psVar33 + 3);
          bVar2 = *(byte *)(psVar36 + 3);
          *(char *)&pSVar39->pad = (char)((int)((uint)bVar24 + (uint)bVar1) >> 1);
          *(char *)&pSVar39[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
          *(char *)&pSVar39[4].pad = (char)((int)((uint)bVar2 + (uint)bVar24) >> 1);
          bVar24 = *(byte *)((int)psVar31 + 7);
          bVar1 = *(byte *)((int)psVar33 + 7);
          bVar2 = *(byte *)((int)psVar36 + 7);
          *(char *)((int)&pSVar39->pad + 1) = (char)((int)((uint)bVar24 + (uint)bVar1) >> 1);
          *(char *)((int)&pSVar39[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
          *(char *)((int)&pSVar39[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar24) >> 1);
          uVar10 = *(ushort *)(iVar17 + 0x62);
          uVar11 = *(ushort *)(iVar17 + 0x5e);
          uVar12 = *(ushort *)(iVar17 + 0x60);
          pSVar41 = pSVar39;
          do {
            iVar32 = gte_stFLAG();
            gte_ldVXY0(pSVar41 + 2);
            gte_ldVZ0(&pSVar41[2].vz);
            gte_stSXY2();
            iVar29 = gte_stIR3();
            gte_rtps_b();
            bVar24 = iVar29 < (int)(uint)uVar10;
            if (pSVar41[1].vx < 0) {
              bVar24 = bVar24 | 2;
            }
            bVar24 = bVar24 | ((int)(uVar11 - 1) < (int)pSVar41[1].vx) << 2;
            if (pSVar41[1].vy < 0) {
              bVar24 = bVar24 | 8;
            }
            bVar24 = bVar24 | ((int)(uVar12 - 1) < (int)pSVar41[1].vy) << 4;
            if (iVar32 < 0) {
              bVar24 = bVar24 | 0x20;
            }
            pSVar40 = pSVar41 + 2;
            *(byte *)((int)&pSVar41[1].pad + 1) = bVar24;
            pSVar41 = pSVar40;
          } while (pSVar40 != pSVar39 + 6);
          piVar14 = *(int **)(iVar17 + 0x68);
          uVar4 = *(undefined *)(iVar17 + 0xa3);
          uVar38 = iVar17 + 0xa5U & 3;
          uVar20 = *(int *)((iVar17 + 0xa5U) - uVar38) << (3 - uVar38) * 8 |
                   uVar20 & 0xffffffffU >> (uVar38 + 1) * 8;
          uVar38 = *(uint *)(iVar17 + 0xa4);
          iVar29 = 2;
          ppsVar47 = ppsVar45 + 2;
          do {
            iVar32 = iVar29 + -1;
            if (iVar29 == 0) {
              iVar32 = 2;
            }
            psVar31 = *ppsVar47;
            psVar33 = ppsVar45[iVar32];
            bVar24 = *(byte *)((int)psVar31 + 0xf) | *(byte *)((int)ppsVar45 + iVar32 * 0x10 + 0x1f)
                     | *(byte *)((int)psVar33 + 0xf);
            if ((bVar24 & 0x20) == 0) {
              gte_ldSXY0(psVar31 + 4);
              gte_ldSXY1(ppsVar45 + iVar32 * 4 + 6);
              gte_ldSXY2(psVar33 + 4);
              gte_stSXY0();
              gte_stSXY1();
              gte_nclip_b();
              uVar30 = (uint)(psVar31 + 3) & 3;
              uVar20 = uVar20 & -1 << (4 - uVar30) * 8 |
                       *(uint *)((int)(psVar31 + 3) - uVar30) >> uVar30 * 8;
              uVar30 = (int)ppsVar45 + iVar32 * 0x10 + 0x16;
              uVar54 = uVar30 & 3;
              uVar38 = uVar38 & -1 << (4 - uVar54) * 8 | *(uint *)(uVar30 - uVar54) >> uVar54 * 8;
              piVar14[3] = uVar20;
              uVar30 = (uint)(psVar33 + 3) & 3;
              uVar54 = *(uint *)((int)(psVar33 + 3) - uVar30);
              piVar14[6] = uVar38;
              piVar14[9] = bVar24 & 0x20 & -1 << (4 - uVar30) * 8 | uVar54 >> uVar30 * 8;
              *piVar14 = (int)(piVar14 + -0x1dbffff6);
              iVar44 = gte_stMAC0();
              gte_stSXY2();
              if (iVar44 != 0) {
                psVar36 = ppsVar45[iVar32 * 4 + 7];
                piVar14[1] = *(int *)(psVar31 + 6);
                iVar32 = *(int *)(psVar33 + 6);
                piVar14[4] = (int)psVar36;
                piVar14[7] = iVar32;
                *(undefined *)((int)piVar14 + 7) = uVar4;
                *(int **)(iVar17 + 0x38c) = piVar14;
                piVar14 = piVar14 + 10;
              }
            }
            ppsVar47 = ppsVar47 + -1;
            iVar29 = iVar29 + -1;
            *(int **)(iVar17 + 0x68) = piVar14;
          } while (-1 < iVar29);
          uVar38 = 3;
          ppsVar47 = ppsVar45;
          if (*(uint *)(iVar17 + 0x68) <= *(uint *)(iVar17 + 0x6c)) {
            do {
              if (uVar38 == 3) {
                ppsVar52 = ppsVar47 + 4;
                ppsVar42 = ppsVar47 + 8;
                ppsVar34 = ppsVar47 + 0xc;
              }
              else {
                ppsVar52 = (short **)ppsVar47[uVar38];
                ppsVar42 = ppsVar47 + uVar38 * 4 + 4;
                if (uVar38 == 0) {
                  ppsVar34 = ppsVar47 + 0xc;
                }
                else {
                  ppsVar34 = ppsVar47 + (uVar38 - 1) * 4 + 4;
                }
              }
              if ((*(byte *)((int)ppsVar52 + 0xf) & *(byte *)((int)ppsVar42 + 0xf) &
                   *(byte *)((int)ppsVar34 + 0xf) & 0x1f) == 0) {
                if (((*(byte *)((int)ppsVar52 + 0xf) | *(byte *)((int)ppsVar42 + 0xf) |
                     *(byte *)((int)ppsVar34 + 0xf)) & 0x20) == 0) {
                  piVar14 = *(int **)(iVar17 + 0x68);
                  gte_ldSXY0(ppsVar52 + 2);
                  gte_ldSXY1(ppsVar42 + 2);
                  gte_ldSXY2(ppsVar34 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar10 = *(ushort *)(iVar17 + 0x394);
                  uVar30 = iVar17 + 0xa5U & 3;
                  uVar54 = (int)ppsVar52 + 6U & 3;
                  uVar46 = *(uint *)(iVar17 + 0xa4);
                  uVar55 = (int)ppsVar42 + 6U & 3;
                  uVar49 = *(uint *)(((int)ppsVar42 + 6U) - uVar55);
                  piVar14[3] = (*(int *)((iVar17 + 0xa5U) - uVar30) << (3 - uVar30) * 8 |
                               iVar17 + 0x328U & 0xffffffffU >> (uVar30 + 1) * 8) &
                               -1 << (4 - uVar54) * 8 |
                               *(uint *)(((int)ppsVar52 + 6U) - uVar54) >> uVar54 * 8;
                  uVar30 = gte_stMAC0();
                  gte_stSXY2();
                  if ((int)uVar30 < 0) {
                    uVar30 = -uVar30;
                  }
                  *piVar14 = (int)(piVar14 + -0x1dbffff6);
                  if (uVar30 <= uVar10) {
                    uVar30 = (int)ppsVar34 + 6U & 3;
                    uVar54 = *(uint *)(((int)ppsVar34 + 6U) - uVar30);
                    piVar14[6] = uVar46 & -1 << (4 - uVar55) * 8 | uVar49 >> uVar55 * 8;
                    psVar33 = ppsVar52[3];
                    piVar14[9] = iVar17 + 0x328U & -1 << (4 - uVar30) * 8 | uVar54 >> uVar30 * 8;
                    psVar31 = ppsVar42[3];
                    piVar14[1] = (int)psVar33;
                    psVar33 = ppsVar34[3];
                    piVar14[4] = (int)psVar31;
                    uVar4 = *(undefined *)(iVar17 + 0xa3);
                    piVar14[7] = (int)psVar33;
                    *(undefined *)((int)piVar14 + 7) = uVar4;
                    *(int **)(iVar17 + 0x38c) = piVar14;
                    *(int **)(iVar17 + 0x68) = piVar14 + 10;
                    goto LAB_overlay0__8001b78c;
                  }
                }
                if (ppsVar47 != (short **)(iVar17 + 0x328)) goto LAB_overlay0__8001b638;
              }
LAB_overlay0__8001b78c:
              while (uVar38 = uVar38 - 1, (int)uVar38 < 0) {
                if (ppsVar47 == (short **)(iVar17 + 0xe8)) {
                  uVar38 = *(uint *)(iVar17 + 0x388);
                  if (*(uint *)(iVar17 + 0x6c) < *(uint *)(iVar17 + 0x68)) {
                    *(uint *)(iVar17 + 0x68) = uVar38;
                  }
                  else if (*(uint *)(iVar17 + 0x68) != uVar38) {
                    iVar32 = *(int *)(iVar17 + 0x38c);
                    uVar30 = *(int *)(iVar17 + 0x9c) + 2;
                    uVar54 = uVar30 & 3;
                    iVar29 = *(int *)(uVar30 - uVar54);
                    uVar30 = *(int *)(iVar17 + 0x9c) + 2;
                    uVar55 = uVar30 & 3;
                    puVar43 = (uint *)(uVar30 - uVar55);
                    *puVar43 = *puVar43 & -1 << (uVar55 + 1) * 8 | (uVar38 << 8) >> (3 - uVar55) * 8
                    ;
                    uVar38 = iVar32 + 2;
                    uVar30 = uVar38 & 3;
                    puVar43 = (uint *)(uVar38 - uVar30);
                    *puVar43 = *puVar43 & -1 << (uVar30 + 1) * 8 |
                               (uint)(iVar29 << (3 - uVar54) * 8) >> (3 - uVar30) * 8;
                  }
                  goto LAB_overlay0__8001b7ec;
                }
                pbVar22 = (byte *)((int)ppsVar47 + -0x41);
                ppsVar47 = ppsVar47 + -0x18;
                uVar38 = (uint)(*pbVar22 >> 6);
              }
            } while( true );
          }
          *(undefined4 *)(iVar17 + 0x68) = *(undefined4 *)(iVar17 + 0x388);
LAB_overlay0__8001b7ec:
          puVar37 = *(u_long **)(iVar28 + 0x68);
          puVar43 = *(uint **)(iVar28 + 0x3a8);
          if (puVar37 < *(u_long **)(iVar28 + 0x6c)) goto LAB_overlay0__8001b858;
          *(uint **)(iVar28 + 0x68) = puVar37;
          goto LAB_overlay0__8001b868;
        }
        puVar21 = *(u_long **)(iVar28 + 0x6c);
        uVar38 = iVar17 + 2U & 3;
        uVar54 = *(int *)((iVar17 + 2U) - uVar38) << (3 - uVar38) * 8 |
                 *(uint *)(iVar28 + 0x98) & 0xffffffffU >> (uVar38 + 1) * 8;
        gte_strgb3_gt3(puVar37);
        puVar37[3] = uVar30;
        puVar37[6] = uVar35;
        puVar37[9] = uVar51;
        uVar38 = iVar17 + 2U & 3;
        puVar27 = (uint *)((iVar17 + 2U) - uVar38);
        *puVar27 = *puVar27 & -1 << (uVar38 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar38) * 8
        ;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)puVar37 + 3) = 9;
        bVar13 = puVar21 < puVar37;
        uVar38 = (int)puVar37 + 2U & 3;
        puVar27 = (uint *)(((int)puVar37 + 2U) - uVar38);
        *puVar27 = *puVar27 & -1 << (uVar38 + 1) * 8 | uVar54 >> (3 - uVar38) * 8;
        puVar37 = puVar37 + 10;
        if (bVar13) break;
      }
LAB_overlay0__8001b858:
      puVar43 = puVar43 + 8;
    } while (puVar43 != puVar19);
    *(uint **)(iVar28 + 0x68) = puVar37;
  }
LAB_overlay0__8001b868:
  puVar43 = (uint *)param_1[8];
  iVar28 = 0x1f800000;
  if (*(ushort *)((int)param_1 + 0x3e) != 0) {
    DAT_1f800394 = 0x800;
    _DAT_1f8003ac = puVar43 + (uint)*(ushort *)((int)param_1 + 0x3e) * 9;
    puVar37 = DAT_1f800068;
    do {
      iVar29 = *(int *)(iVar28 + 0x70);
      uVar54 = *puVar43;
      uVar20 = puVar43[1];
      piVar14 = (int *)((uVar54 & 0x3ff) * 8 + iVar29);
      iVar32 = *piVar14;
      iVar44 = piVar14[1];
      puVar15 = (undefined4 *)(((int)uVar54 >> 7 & 0x1ff8U) + iVar29);
      uVar26 = *puVar15;
      iVar17 = puVar15[1];
      *(undefined4 *)(iVar28 + 0xb8) = uVar26;
      *(int *)(iVar28 + 0xbc) = iVar17;
      puVar15 = (undefined4 *)(((int)uVar54 >> 0x11 & 0x1ff8U) + iVar29);
      puVar16 = (undefined4 *)((uVar20 & 0x3ff) * 8 + iVar29);
      gte_ldVXY2(iVar32);
      gte_ldVZ2(iVar44);
      gte_ldVXY0(uVar26);
      gte_ldVZ0(iVar17);
      gte_ldVXY1(*puVar15);
      gte_ldVZ1(puVar15[1]);
      gte_rtpt_b();
      uVar38 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(iVar17,iVar32,iVar44);
      gte_nclip_b();
      gte_ldVXY0(*puVar16);
      gte_ldVZ0(puVar16[1]);
      iVar29 = gte_stMAC0();
      gte_rtps_b();
      uVar20 = gte_stFLAG();
      iVar57 = gte_stSZ3();
      gte_nclip_b();
      uVar30 = gte_stMAC0();
      if (-1 < (int)(uVar38 | uVar20)) {
        uVar20 = -iVar29;
        iVar29 = uVar20 + uVar30;
        if (((uVar20 | uVar30) != 0) && (-1 < (int)(uVar20 - 1 & uVar30 - 1 & uVar54))) {
          uVar20 = uVar54 >> 0x1e & 1;
          if (iVar17 < iVar32 == uVar20) {
            iVar17 = iVar32;
          }
          if (iVar17 < iVar44 == uVar20) {
            iVar17 = iVar44;
          }
          if (iVar17 < iVar57 == uVar20) {
            iVar17 = iVar57;
          }
          uVar20 = ((uint)(iVar17 << (*(uint *)(iVar28 + 0x98) & 0x1f)) >> 0xd) + (-uVar20 & 0x60);
          iVar17 = uVar20 * 4;
          if (0xfff < uVar20) {
            iVar17 = 0x3ffc;
          }
          iVar17 = *(int *)(iVar28 + 100) + iVar17;
          gte_ldRGB(puVar43[2]);
          gte_ldIR0(0);
          gte_dpcs_b();
          uVar54 = gte_stRGB2();
          gte_ldRGB0(puVar43[6]);
          gte_ldRGB1(puVar43[7]);
          gte_ldRGB2(puVar43[8]);
          gte_dpct();
          uVar38 = puVar43[3];
          uVar30 = puVar43[4];
          uVar20 = puVar43[5];
          if (iVar29 < 0) {
            iVar29 = -iVar29;
          }
          if (0x800 < iVar29) {
            *(uint **)(iVar28 + 0x68) = puVar37;
            *(uint **)(iVar28 + 0x3a8) = puVar43;
            *(int *)(iVar28 + 0x9c) = iVar17;
            *(uint *)(iVar28 + 0xa0) = uVar54;
            gte_stVXY2();
            gte_stVZ2();
            gte_stVXY1();
            gte_stVZ1();
            gte_stVXY0();
            gte_stVZ0();
            gte_stSXY1();
            gte_stSXY0();
            gte_stSXY2();
            *(uint *)(iVar28 + 0xa4) = uVar30;
            uVar55 = iVar28 + 0xa5U & 3;
            puVar43 = (uint *)((iVar28 + 0xa5U) - uVar55);
            *puVar43 = *puVar43 & -1 << (uVar55 + 1) * 8 | uVar38 >> (3 - uVar55) * 8;
            *(short *)(iVar28 + 0xae) = (short)uVar38;
            *(short *)(iVar28 + 0xbe) = (short)uVar30;
            *(short *)(iVar28 + 0xce) = (short)uVar20;
            *(short *)(iVar28 + 0xde) = (short)(uVar20 >> 0x10);
            *(uint *)(iVar28 + 0xb4) = uVar54;
            DAT_1f800388 = DAT_1f800068;
            gte_stRGB0();
            gte_stRGB1();
            gte_stRGB2();
            puVar16 = &DAT_1f8000a8;
            iVar17 = 0x1f800000;
            ppsVar45 = (short **)&DAT_1f8000e8;
            puVar15 = &DAT_1f8000e8;
            pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
            do {
              bVar24 = *pbVar22;
              *puVar15 = puVar16;
              puVar15 = puVar15 + 1;
              if ((bVar24 & 0x20) != 0) {
                gte_ldVXY0(puVar16);
                gte_ldVZ0(pbVar22 + -0xb);
                gte_rtps_b();
                iVar29 = gte_stFLAG();
                gte_stSXY2();
                if (-1 < iVar29) {
                  *pbVar22 = bVar24 & 0x1f;
                }
              }
              pbVar22 = pbVar22 + 0x10;
              puVar16 = puVar16 + 4;
            } while (puVar15 != (undefined4 *)&DAT_1f8000f8);
            DAT_1f80038c = DAT_1f800388;
            memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(&DAT_1f800388, 0), 3);
            DAT_1f800390.value = CONCAT13(0xc, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001bb48:
            pSVar39 = (SVECTOR *)(ppsVar45 + 4);
            psVar36 = *ppsVar45;
            psVar50 = ppsVar45[1];
            psVar48 = ppsVar45[2];
            psVar53 = ppsVar45[3];
            sVar6 = *psVar36;
            sVar7 = *psVar50;
            sVar8 = *psVar48;
            iVar32 = (int)sVar6 + (int)sVar7;
            *(short *)(ppsVar45 + 8) = (short)(iVar32 >> 1);
            sVar9 = *psVar53;
            *(short *)(ppsVar45 + 0xc) = (short)((int)sVar7 + (int)sVar8 >> 1);
            iVar29 = (int)sVar8 + (int)sVar9;
            *(short *)(ppsVar45 + 0x10) = (short)(iVar29 >> 1);
            *(short *)(ppsVar45 + 0x14) = (short)((int)sVar9 + (int)sVar6 >> 1);
            *(short *)(ppsVar45 + 4) = (short)(iVar32 + iVar29 >> 2);
            sVar6 = psVar36[1];
            sVar7 = psVar50[1];
            sVar8 = psVar48[1];
            iVar32 = (int)sVar6 + (int)sVar7;
            *(short *)((int)ppsVar45 + 0x22) = (short)(iVar32 >> 1);
            sVar9 = psVar53[1];
            *(short *)((int)ppsVar45 + 0x32) = (short)((int)sVar7 + (int)sVar8 >> 1);
            iVar29 = (int)sVar8 + (int)sVar9;
            *(short *)((int)ppsVar45 + 0x42) = (short)(iVar29 >> 1);
            *(short *)((int)ppsVar45 + 0x52) = (short)((int)sVar9 + (int)sVar6 >> 1);
            *(short *)((int)ppsVar45 + 0x12) = (short)(iVar32 + iVar29 >> 2);
            sVar6 = psVar36[2];
            sVar7 = psVar50[2];
            sVar8 = psVar48[2];
            iVar32 = (int)sVar6 + (int)sVar7;
            *(short *)(ppsVar45 + 9) = (short)(iVar32 >> 1);
            sVar9 = psVar53[2];
            *(short *)(ppsVar45 + 0xd) = (short)((int)sVar7 + (int)sVar8 >> 1);
            iVar29 = (int)sVar8 + (int)sVar9;
            *(short *)(ppsVar45 + 0x11) = (short)(iVar29 >> 1);
            *(short *)(ppsVar45 + 0x15) = (short)((int)sVar9 + (int)sVar6 >> 1);
            *(short *)(ppsVar45 + 5) = (short)(iVar32 + iVar29 >> 2);
            uVar54 = *(uint *)(psVar36 + 6);
            uVar20 = *(uint *)(psVar50 + 6);
            uVar38 = *(uint *)(psVar48 + 6);
            psVar33 = (short *)((int)((uVar54 & 0xfefefe) + (uVar20 & 0xfefefe)) >> 1);
            ppsVar45[0xb] = psVar33;
            uVar30 = *(uint *)(psVar53 + 6);
            ppsVar45[0xf] = (short *)((int)((uVar20 & 0xfefefe) + (uVar38 & 0xfefefe)) >> 1);
            psVar31 = (short *)((int)((uVar38 & 0xfefefe) + (uVar30 & 0xfefefe)) >> 1);
            ppsVar45[0x13] = psVar31;
            ppsVar45[0x17] = (short *)((int)((uVar30 & 0xfefefe) + (uVar54 & 0xfefefe)) >> 1);
            ppsVar45[7] = (short *)((int)(((uint)psVar33 & 0xfefefe) + ((uint)psVar31 & 0xfefefe))
                                   >> 1);
            gte_ldv0(pSVar39);
            gte_rtps_b();
            bVar24 = *(byte *)(psVar36 + 3);
            bVar1 = *(byte *)(psVar50 + 3);
            bVar2 = *(byte *)(psVar48 + 3);
            iVar32 = (uint)bVar24 + (uint)bVar1;
            *(char *)&pSVar39[2].pad = (char)(iVar32 >> 1);
            bVar3 = *(byte *)(psVar53 + 3);
            *(char *)&pSVar39[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
            iVar29 = (uint)bVar2 + (uint)bVar3;
            *(char *)&pSVar39[6].pad = (char)(iVar29 >> 1);
            *(char *)&pSVar39[8].pad = (char)((int)((uint)bVar3 + (uint)bVar24) >> 1);
            *(char *)&pSVar39->pad = (char)(iVar32 + iVar29 >> 2);
            bVar24 = *(byte *)((int)psVar36 + 7);
            bVar1 = *(byte *)((int)psVar50 + 7);
            bVar2 = *(byte *)((int)psVar48 + 7);
            iVar32 = (uint)bVar24 + (uint)bVar1;
            *(char *)((int)&pSVar39[2].pad + 1) = (char)(iVar32 >> 1);
            bVar3 = *(byte *)((int)psVar53 + 7);
            *(char *)((int)&pSVar39[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
            iVar29 = (uint)bVar2 + (uint)bVar3;
            *(char *)((int)&pSVar39[6].pad + 1) = (char)(iVar29 >> 1);
            *(char *)((int)&pSVar39[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar24) >> 1);
            *(char *)((int)&pSVar39->pad + 1) = (char)(iVar32 + iVar29 >> 2);
            uVar10 = *(ushort *)(iVar17 + 0x62);
            uVar11 = *(ushort *)(iVar17 + 0x5e);
            uVar12 = *(ushort *)(iVar17 + 0x60);
            pSVar41 = pSVar39;
            do {
              iVar32 = gte_stFLAG();
              gte_ldVXY0(pSVar41 + 2);
              gte_ldVZ0(&pSVar41[2].vz);
              gte_stSXY2();
              iVar29 = gte_stIR3();
              gte_rtps_b();
              bVar24 = iVar29 < (int)(uint)uVar10;
              if (pSVar41[1].vx < 0) {
                bVar24 = bVar24 | 2;
              }
              bVar24 = bVar24 | ((int)(uVar11 - 1) < (int)pSVar41[1].vx) << 2;
              if (pSVar41[1].vy < 0) {
                bVar24 = bVar24 | 8;
              }
              bVar24 = bVar24 | ((int)(uVar12 - 1) < (int)pSVar41[1].vy) << 4;
              if (iVar32 < 0) {
                bVar24 = bVar24 | 0x20;
              }
              pSVar40 = pSVar41 + 2;
              *(byte *)((int)&pSVar41[1].pad + 1) = bVar24;
              pSVar41 = pSVar40;
            } while (pSVar40 != pSVar39 + 10);
            piVar14 = *(int **)(iVar17 + 0x68);
            cVar5 = *(char *)(iVar17 + 0xa3);
            uVar20 = iVar17 + 0xa5U & 3;
            uVar30 = *(int *)((iVar17 + 0xa5U) - uVar20) << (3 - uVar20) * 8 |
                     (uint)pSVar40 & 0xffffffffU >> (uVar20 + 1) * 8;
            uVar38 = *(uint *)(iVar17 + 0xa4);
            ppsVar47 = ppsVar45 + 3;
            uVar20 = 2;
            iVar29 = 3;
            do {
              uVar20 = uVar20 & 3;
              psVar31 = *ppsVar47;
              psVar33 = ppsVar45[uVar20];
              bVar24 = *(byte *)((int)psVar31 + 0xf) |
                       *(byte *)((int)ppsVar45 + uVar20 * 0x10 + 0x2f) |
                       *(byte *)((int)psVar33 + 0xf);
              if ((bVar24 & 0x20) == 0) {
                gte_ldSXY0(psVar31 + 4);
                gte_ldSXY1(ppsVar45 + uVar20 * 4 + 10);
                gte_ldSXY2(psVar33 + 4);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                uVar54 = (uint)(psVar31 + 3) & 3;
                uVar30 = uVar30 & -1 << (4 - uVar54) * 8 |
                         *(uint *)((int)(psVar31 + 3) - uVar54) >> uVar54 * 8;
                uVar54 = (int)ppsVar45 + uVar20 * 0x10 + 0x26;
                uVar55 = uVar54 & 3;
                uVar38 = uVar38 & -1 << (4 - uVar55) * 8 | *(uint *)(uVar54 - uVar55) >> uVar55 * 8;
                piVar14[3] = uVar30;
                uVar54 = (uint)(psVar33 + 3) & 3;
                uVar55 = *(uint *)((int)(psVar33 + 3) - uVar54);
                piVar14[6] = uVar38;
                piVar14[9] = bVar24 & 0x20 & -1 << (4 - uVar54) * 8 | uVar55 >> uVar54 * 8;
                *piVar14 = (int)(piVar14 + -0x1dbffff6);
                iVar32 = gte_stMAC0();
                gte_stSXY2();
                if (iVar32 != 0) {
                  psVar36 = ppsVar45[uVar20 * 4 + 0xb];
                  piVar14[1] = *(int *)(psVar31 + 6);
                  iVar32 = *(int *)(psVar33 + 6);
                  piVar14[4] = (int)psVar36;
                  piVar14[7] = iVar32;
                  *(char *)((int)piVar14 + 7) = cVar5 + -8;
                  *(int **)(iVar17 + 0x38c) = piVar14;
                  piVar14 = piVar14 + 10;
                }
              }
              ppsVar47 = ppsVar47 + -1;
              iVar32 = iVar29 + -1;
              *(int **)(iVar17 + 0x68) = piVar14;
              uVar20 = iVar29 - 2;
              iVar29 = iVar32;
            } while (-1 < iVar32);
            uVar20 = 3;
            if (*(uint *)(iVar17 + 0x68) <= *(uint *)(iVar17 + 0x6c)) {
              uVar38 = 2;
              ppsVar47 = ppsVar45;
              do {
                ppsVar52 = ppsVar47 + uVar20 * 4 + 8;
                ppsVar42 = ppsVar47 + (uVar38 & 3) * 4 + 8;
                psVar31 = ppsVar47[uVar20];
                uVar38 = uVar20;
                if ((*(byte *)((int)psVar31 + 0xf) & *(byte *)((int)ppsVar52 + 0xf) &
                     *(byte *)((int)ppsVar47 + 0x1f) & *(byte *)((int)ppsVar42 + 0xf) & 0x1f) == 0)
                {
                  if (((*(byte *)((int)psVar31 + 0xf) | *(byte *)((int)ppsVar52 + 0xf) |
                        *(byte *)((int)ppsVar47 + 0x1f) | *(byte *)((int)ppsVar42 + 0xf)) & 0x20) ==
                      0) {
                    piVar14 = *(int **)(iVar17 + 0x68);
                    gte_ldSXY0(ppsVar52 + 2);
                    gte_ldSXY1(psVar31 + 4);
                    gte_ldSXY2(ppsVar47 + 6);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();
                    psVar33 = ppsVar52[3];
                    piVar14[1] = *(int *)(psVar31 + 6);
                    psVar36 = ppsVar47[7];
                    piVar14[4] = (int)psVar33;
                    psVar33 = ppsVar42[3];
                    piVar14[10] = (int)psVar36;
                    piVar14[7] = (int)psVar33;
                    iVar32 = gte_stMAC0();
                    gte_ldSXY0(ppsVar42 + 2);
                    uVar30 = iVar17 + 0xa5U & 3;
                    uVar56 = *(uint *)(iVar17 + 0xa4);
                    gte_nclip_b();
                    uVar54 = (uint)(psVar31 + 3) & 3;
                    uVar46 = (*(int *)((iVar17 + 0xa5U) - uVar30) << (3 - uVar30) * 8 |
                             (uint)psVar33 & 0xffffffffU >> (uVar30 + 1) * 8) &
                             -1 << (4 - uVar54) * 8 |
                             *(uint *)((int)(psVar31 + 3) - uVar54) >> uVar54 * 8;
                    uVar30 = (int)ppsVar52 + 6U & 3;
                    uVar55 = *(uint *)(((int)ppsVar52 + 6U) - uVar30);
                    piVar14[3] = uVar46;
                    uVar54 = (int)ppsVar47 + 0x16U & 3;
                    uVar49 = *(uint *)(((int)ppsVar47 + 0x16U) - uVar54);
                    piVar14[6] = uVar56 & -1 << (4 - uVar30) * 8 | uVar55 >> uVar30 * 8;
                    uVar30 = (int)ppsVar42 + 6U & 3;
                    uVar55 = *(uint *)(((int)ppsVar42 + 6U) - uVar30);
                    piVar14[0xc] = (uint)psVar36 & -1 << (4 - uVar54) * 8 | uVar49 >> uVar54 * 8;
                    piVar14[9] = uVar46 & -1 << (4 - uVar30) * 8 | uVar55 >> uVar30 * 8;
                    iVar29 = gte_stMAC0();
                    uVar30 = iVar32 - iVar29;
                    gte_stSXY0();
                    if ((int)uVar30 < 0) {
                      uVar30 = -uVar30;
                    }
                    gte_stSXY2();
                    if (uVar30 <= *(ushort *)(iVar17 + 0x394)) {
                      uVar4 = *(undefined *)(iVar17 + 0xa3);
                      *piVar14 = (int)(piVar14 + -0x1cfffff3);
                      *(undefined *)((int)piVar14 + 7) = uVar4;
                      *(int **)(iVar17 + 0x38c) = piVar14;
                      *(int **)(iVar17 + 0x68) = piVar14 + 0xd;
                      goto LAB_overlay0__8001c074;
                    }
                  }
                  if (ppsVar47 != (short **)(iVar17 + 0x328)) goto code_r0x8001c040;
                }
LAB_overlay0__8001c074:
                while( true ) {
                  uVar20 = uVar38 - 1;
                  uVar38 = uVar38 - 2;
                  if (-1 < (int)uVar20) break;
                  if (ppsVar47 == (short **)(iVar17 + 0xe8)) {
                    uVar20 = *(uint *)(iVar17 + 0x388);
                    if (*(uint *)(iVar17 + 0x6c) < *(uint *)(iVar17 + 0x68)) {
                      *(uint *)(iVar17 + 0x68) = uVar20;
                    }
                    else if (*(uint *)(iVar17 + 0x68) != uVar20) {
                      iVar32 = *(int *)(iVar17 + 0x38c);
                      uVar38 = *(int *)(iVar17 + 0x9c) + 2;
                      uVar30 = uVar38 & 3;
                      iVar29 = *(int *)(uVar38 - uVar30);
                      uVar38 = *(int *)(iVar17 + 0x9c) + 2;
                      uVar54 = uVar38 & 3;
                      puVar43 = (uint *)(uVar38 - uVar54);
                      *puVar43 = *puVar43 & -1 << (uVar54 + 1) * 8 |
                                 (uVar20 << 8) >> (3 - uVar54) * 8;
                      uVar20 = iVar32 + 2;
                      uVar38 = uVar20 & 3;
                      puVar43 = (uint *)(uVar20 - uVar38);
                      *puVar43 = *puVar43 & -1 << (uVar38 + 1) * 8 |
                                 (uint)(iVar29 << (3 - uVar30) * 8) >> (3 - uVar38) * 8;
                    }
                    goto LAB_overlay0__8001c0d4;
                  }
                  pbVar22 = (byte *)((int)ppsVar47 + -0x41);
                  ppsVar47 = ppsVar47 + -0x18;
                  uVar38 = (uint)(*pbVar22 >> 6);
                }
              } while( true );
            }
            *(undefined4 *)(iVar17 + 0x68) = *(undefined4 *)(iVar17 + 0x388);
LAB_overlay0__8001c0d4:
            puVar37 = *(uint **)(iVar28 + 0x68);
            puVar43 = *(uint **)(iVar28 + 0x3a8);
            if (*(uint **)(iVar28 + 0x6c) <= puVar37) {
              *(uint **)(iVar28 + 0x68) = puVar37;
              return;
            }
            goto LAB_overlay0__8001c154;
          }
          puVar37[3] = uVar38;
          puVar37[6] = uVar30;
          puVar37[0xc] = uVar20;
          uVar38 = (int)puVar37 + 0x25U & 3;
          puVar19 = (uint *)(((int)puVar37 + 0x25U) - uVar38);
          *puVar19 = *puVar19 & -1 << (uVar38 + 1) * 8 | uVar20 >> (3 - uVar38) * 8;
          puVar27 = *(uint **)(iVar28 + 0x6c);
          puVar37[1] = uVar54;
          gte_stRGB0();
          gte_stRGB1();
          gte_stRGB2();
          uVar20 = iVar17 + 2U & 3;
          iVar29 = *(int *)((iVar17 + 2U) - uVar20);
          gte_stSXY1();
          puVar37[5] = *(uint *)(iVar28 + 0xc0);
          gte_stSXY2();
          gte_stSXY0();
          *puVar37 = (uint)(iVar29 << (3 - uVar20) * 8) >> 8 | 0xc000000;
          uVar20 = iVar17 + 2U & 3;
          puVar19 = (uint *)((iVar17 + 2U) - uVar20);
          *puVar19 = *puVar19 & -1 << (uVar20 + 1) * 8 |
                     (uint)((int)puVar37 << 8) >> (3 - uVar20) * 8;
          bVar13 = puVar27 < puVar37;
          puVar37 = puVar37 + 0xd;
          if (bVar13) break;
        }
      }
LAB_overlay0__8001c154:
      puVar43 = puVar43 + 9;
    } while (puVar43 != *(uint **)(iVar28 + 0x3ac));
    *(uint **)(iVar28 + 0x68) = puVar37;
  }
  return;

LAB_overlay0__8001a734:
  *(char *)(ppsVar47 + 7) = (char)uVar38;
  ppsVar45 = ppsVar47 + 0x18;
  *ppsVar45 = (short *)ppsVar52;
  ppsVar47[0x19] = (short *)ppsVar42;
  ppsVar47[0x1a] = (short *)ppsVar34;
  goto LAB_overlay0__8001a4c8;

code_r0x8001b00c:
  *(char *)(ppsVar47 + 7) = (char)uVar38;
  ppsVar45 = ppsVar47 + 0x18;

  if ((uVar38 & 1) == 0) {

    *ppsVar45 = psVar31;
    ppsVar47[0x19] = (short *)ppsVar52;
    ppsVar47[0x1a] = (short *)(ppsVar47 + 4);
    ppsVar47[0x1b] = (short *)ppsVar42;
  }
  else {

    *ppsVar45 = (short *)ppsVar42;
    ppsVar47[0x19] = psVar31;
    ppsVar47[0x1a] = (short *)ppsVar52;
    ppsVar47[0x1b] = (short *)(ppsVar47 + 4);
  }
  goto LAB_overlay0__8001abdc;

LAB_overlay0__8001b638:
  *(byte *)((int)ppsVar47 + 0x1f) = *(byte *)((int)ppsVar47 + 0x1f) & 0x3f | (byte)(uVar38 << 6);
  ppsVar45 = ppsVar47 + 0x18;
  *ppsVar45 = (short *)ppsVar52;
  ppsVar47[0x19] = (short *)ppsVar42;
  ppsVar47[0x1a] = (short *)ppsVar34;
  goto LAB_overlay0__8001b360;

code_r0x8001c040:
  uVar20 = *(byte *)((int)ppsVar47 + 0x1f) & 0x3f | uVar20 << 6;
  *(char *)((int)ppsVar47 + 0x1f) = (char)uVar20;
  ppsVar45 = ppsVar47 + 0x18;

  if (uVar20 == 0) {

    *ppsVar45 = psVar31;
    ppsVar47[0x19] = (short *)ppsVar52;
    ppsVar47[0x1a] = (short *)(ppsVar47 + 4);
    ppsVar47[0x1b] = (short *)ppsVar42;
  }
  else {

    *ppsVar45 = (short *)ppsVar42;
    ppsVar47[0x19] = psVar31;
    ppsVar47[0x1a] = (short *)ppsVar52;
    ppsVar47[0x1b] = (short *)(ppsVar47 + 4);
  }
  goto LAB_overlay0__8001bb48;
}
