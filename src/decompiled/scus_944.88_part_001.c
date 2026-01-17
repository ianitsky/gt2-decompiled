// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"

// Keep local type aliases for compatibility
// Note: __WORDSIZE is already defined by system headers, so we don't redefine it
#ifndef __GLIBC_HAVE_LONG_LONG
#define __GLIBC_HAVE_LONG_LONG 1
#endif

void FUN_80010000(int *param_1)

{
  int fileHandle;
  int baseMemoryAddress;
  int *decompressionBuffer;
  int fileSize;

  fileHandle = FUN_8001146c("gt2.ovl");
  baseMemoryAddress = DAT_801c93e8;

  fileSize = *(int *)(fileHandle + 2);
  *param_1 = fileSize - baseMemoryAddress;

  DAT_801c93e0 = *(int *)(fileHandle + 10);
  param_1[1] = DAT_801c93e0;

  DAT_801c93d0 = baseMemoryAddress + *param_1;

  decompressionBuffer = (int *)FUN_8008d0d0(DAT_801c93e0);
  param_1[2] = (int)decompressionBuffer;

  if (decompressionBuffer == (int *)0x0) {

    decompressionBuffer = param_1 + 3;
    fileSize = 0x30;
  }
  else {

    fileSize = param_1[1];
  }

  FUN_8007ab74(decompressionBuffer, baseMemoryAddress + *param_1, fileSize);

  if (param_1[2] != 0) {

    FUN_8008cfe0(param_1 + 3, param_1[2], 0x30);
  }

  return;
}

void FUN_80010010(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_s1;

  iVar2 = FUN_8001146c(param_1 + 0x1d30);
  iVar1 = DAT_801c93e8;

  *unaff_s1 = *(int *)(iVar2 + 2) - DAT_801c93e8;
  DAT_801c93e0 = *(int *)(iVar2 + 10);
  iVar2 = *unaff_s1;
  unaff_s1[1] = DAT_801c93e0;
  DAT_801c93d0 = iVar1 + iVar2;

  piVar3 = (int *)FUN_8008d0d0(DAT_801c93e0);
  unaff_s1[2] = (int)piVar3;

  if (piVar3 == (int *)0x0) {

    piVar3 = unaff_s1 + 3;
    iVar4 = 0x30;
  }
  else {

    iVar4 = unaff_s1[1];
  }

  FUN_8007ab74(piVar3,iVar1 + iVar2,iVar4);

  if (unaff_s1[2] != 0) {
    FUN_8008cfe0(unaff_s1 + 3,unaff_s1[2],0x30);
  }

  return;
}

void FUN_80010020(void)

{
  int iVar1;
  int in_v0;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_s1;

  iVar1 = DAT_801c93e8;

  *unaff_s1 = *(int *)(in_v0 + 2) - DAT_801c93e8;
  DAT_801c93e0 = *(int *)(in_v0 + 10);
  iVar2 = *unaff_s1;
  unaff_s1[1] = DAT_801c93e0;
  DAT_801c93d0 = iVar1 + iVar2;

  piVar3 = (int *)FUN_8008d0d0(DAT_801c93e0);
  unaff_s1[2] = (int)piVar3;

  if (piVar3 == (int *)0x0) {

    piVar3 = unaff_s1 + 3;
    iVar4 = 0x30;
  }
  else {

    iVar4 = unaff_s1[1];
  }

  FUN_8007ab74(piVar3,iVar1 + iVar2,iVar4);

  if (unaff_s1[2] != 0) {
    FUN_8008cfe0(unaff_s1 + 3,unaff_s1[2],0x30);
  }

  return;
}

void FUN_80010030(undefined4 param_1,int param_2)

{
  int in_v0;
  int iVar1;
  int *piVar2;
  int in_v1;
  int iVar3;
  int *unaff_s1;

  *unaff_s1 = in_v1 - param_2;
  DAT_801c93e0 = *(int *)(in_v0 + 10);
  iVar1 = *unaff_s1;
  unaff_s1[1] = DAT_801c93e0;
  DAT_801c93d0 = param_2 + iVar1;

  piVar2 = (int *)FUN_8008d0d0(DAT_801c93e0);
  unaff_s1[2] = (int)piVar2;

  if (piVar2 == (int *)0x0) {

    piVar2 = unaff_s1 + 3;
    iVar3 = 0x30;
  }
  else {

    iVar3 = unaff_s1[1];
  }

  FUN_8007ab74(piVar2,param_2 + iVar1,iVar3);

  if (unaff_s1[2] != 0) {
    FUN_8008cfe0(unaff_s1 + 3,unaff_s1[2],0x30);
  }

  return;
}

void FUN_80010040(undefined4 param_1,int param_2)

{
  int in_v0;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_s1;

  DAT_801c93e0 = *(int *)(in_v0 + 10);
  iVar1 = *unaff_s1;
  unaff_s1[1] = DAT_801c93e0;
  DAT_801c93d0 = param_2 + iVar1;

  piVar2 = (int *)FUN_8008d0d0(DAT_801c93e0);
  unaff_s1[2] = (int)piVar2;

  if (piVar2 == (int *)0x0) {

    piVar2 = unaff_s1 + 3;
    iVar3 = 0x30;
  }
  else {

    iVar3 = unaff_s1[1];
  }

  FUN_8007ab74(piVar2,param_2 + iVar1,iVar3);

  if (unaff_s1[2] != 0) {
    FUN_8008cfe0(unaff_s1 + 3,unaff_s1[2],0x30);
  }

  return;
}

void FUN_800100c0(void)

{

  FUN_80010000(&DAT_801ef610);
  return;
}

undefined4 * FUN_800100e4(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined auStack_118 [256];

  pcVar1 = param_1 + 1;

  if (*param_1 == '/') {
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {

      return &DAT_800a97d0;
    }
    param_2 = (undefined4 *)0x0;
  }

  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_800a97d0;
  }

  while( true ) {

    iVar2 = FUN_80011b3c(param_1,0x2f);

    if (iVar2 == 0) {

      for (; (iVar2 = FUN_8008cf00((int)param_2 + 7,param_1),
              puVar4 = param_2,
              iVar2 != 0 &&
             (puVar4 = (undefined4 *)0x0,
             (*(byte *)((int)param_2 + 6) & 0x80) == 0));
          param_2 = param_2 + 8) {
      }
      return puVar4;
    }

    FUN_8008cf64(auStack_118,param_1,iVar2 - (int)param_1);
    auStack_118[iVar2 - (int)param_1] = 0;

    iVar3 = FUN_800100e4(auStack_118,param_2);
    param_1 = (char *)(iVar2 + 1);

    if (iVar3 == 0) break;

    param_2 = &DAT_800a97d0 + (uint)*(ushort *)(iVar3 + 4) * 8;
  }

  return (undefined4 *)0x0;
}

void FUN_80010228(void)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined **ppuVar3;

  puVar2 = &DAT_801e2ef0;

  for (ppuVar3 = &PTR_s___carcolor_8009118c;
       *ppuVar3 != (undefined *)0x0;
       ppuVar3 = ppuVar3 + 1) {

    puVar1 = (undefined *)FUN_800100e4(*ppuVar3,0);

    *puVar2 = 0xffff;

    if (puVar1 != (undefined *)0x0) {

      if ((puVar1[6] & 1) != 0) {

        puVar1 = &UNK_800a97f0 + (uint)*(ushort *)(puVar1 + 4) * 0x20;
      }

      *puVar2 = *(undefined2 *)(puVar1 + 4);
    }

    puVar2 = puVar2 + 1;
  }

  return;
}

void FUN_800102dc(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3, uVar4, uVar5;
  undefined4 *puVar6;

  puVar6 = &DAT_800a97d0;

  FUN_8005d7d0(&DAT_800a97d0,0,0x8c000);

  puVar2 = &DAT_801e35f0;
  do {

    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *puVar2 = *puVar6;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;

    puVar6 = puVar6 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar6 != (undefined4 *)&UNK_800b57d0);

  puVar2 = &DAT_800a97d0;
  uVar1 = DAT_801e3604 & 0xfffff800;
  puVar6 = (undefined4 *)((int)&DAT_800a97d0 + uVar1);

  do {

    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *puVar2 = *puVar6;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;

    puVar6 = puVar6 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar6 != (undefined4 *)(&UNK_801357d0 + uVar1));

  FUN_80010228();

  return;
}

void FUN_80010410(undefined4 *param_1)

{
  undefined4 *in_v0;
  undefined4 *in_v1;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_t1;
  undefined4 in_t2;

  while( true ) {

    param_1[2] = in_t1;
    param_1[3] = in_t2;

    puVar1 = in_v1 + 4;

    if (puVar1 == in_v0) break;

    uVar2 = in_v1[5];
    in_t1 = in_v1[6];
    in_t2 = in_v1[7];

    param_1[4] = *puVar1;
    param_1[5] = uVar2;

    in_v1 = puVar1;
    param_1 = param_1 + 4;
  }

  FUN_80010228();

  return;
}

void FUN_80010420(undefined4 *param_1)

{
  undefined4 *in_v0;
  undefined4 *in_v1;
  undefined4 uVar1, uVar2, uVar3;

  for (; in_v1 != in_v0; in_v1 = in_v1 + 4) {

    uVar1 = in_v1[1];
    uVar2 = in_v1[2];
    uVar3 = in_v1[3];

    param_1[4] = *in_v1;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;

    param_1 = param_1 + 4;
  }

  FUN_80010228();

  return;
}

void FUN_8001047c(void)

{

  uint highAddress = DAT_801e30ba;
  uint lowAddress = DAT_801e30b8;

  uint rangeDifference = highAddress - lowAddress - 1;

  DAT_801c93c4 = rangeDifference;

  return;
}

void FUN_800104a0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;

  FUN_8008ce30(&DAT_801c98e0,0,0xb6);

  iVar1 = 10;
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {

    *(undefined4 *)(&DAT_801c98e0 + iVar1) = 0xa090302;
    *(undefined4 *)((int)&DAT_801c98e1 + iVar1 + 3) = 0x50d080b;
    *(undefined *)((int)&DAT_801c98e5 + iVar1 + 3) = 0xc;
    (&UNK_801c98e9)[iVar1] = 4;
    *(undefined *)((int)&DAT_801c98ea + iVar1) = 0;

    *(undefined4 *)((int)&DAT_801c98ea + iVar1 + 1) = 0xa098282;
    *(undefined4 *)((int)&DAT_801c98ee + iVar1 + 1) = 0x50d080b;
    (&DAT_801c98f3)[iVar1] = 0xc;
    (&DAT_801c98f4)[iVar1] = 4;
    *(undefined *)((int)&DAT_801c98f5 + iVar1) = 0;

    *(undefined4 *)((int)&DAT_801c98f5 + iVar1 + 1) = 0x82818080;
    *(undefined4 *)((int)&DAT_801c98f9 + iVar1 + 1) = 0x100080b;
    (&DAT_801c98fe)[iVar1] = 0xc;
    (&DAT_801c98ff)[iVar1] = 4;
    *(undefined *)((int)&DAT_801c9900 + iVar1) = 0;

    *(undefined4 *)((int)&DAT_801c9900 + iVar1 + 1) = 0xa098080;
    *(undefined4 *)((int)&DAT_801c9904 + iVar1 + 1) = 0x50d080b;
    (&DAT_801c9909)[iVar1] = 0xc;
    (&DAT_801c990a)[iVar1] = 4;
    *(undefined *)((int)&DAT_801c990b + iVar1) = 1;

    *(undefined4 *)(&UNK_801c991e + iVar1) = 0x780040;
    *(undefined4 *)(&UNK_801c9922 + iVar1) = 0xc00088;
    *(undefined4 *)(&UNK_801c9926 + iVar1) = 0xf00010;
    *(undefined4 *)((int)&DAT_801c9928 + iVar1 + 2) = 0xf00010;
    *(undefined4 *)((int)&DAT_801c992c + iVar1 + 2) = 0xf00010;

    iVar1 = iVar1 + 0x52;
  }

  iVar1 = 0x3c74;
  DAT_801c9993 = 0xf0;
  DAT_801c9994 = 0xc0;
  DAT_801c9991 = 1;
  DAT_801c9992 = 1;
  DAT_801c9995 = 1;
  DAT_801c98e0 = 1;
  DAT_801c998e = 0;
  DAT_801c998f = 0;

  DAT_801c98e1._1_1_ = 0;
  DAT_801c98e1._2_1_ = 2;
  DAT_801c98e1._3_1_ = 1;
  DAT_801c98e5._0_1_ = 0;
  DAT_801c98e5._1_1_ = 2;
  DAT_801c98e5._3_1_ = 1;

  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    FUN_80010798(&DAT_801c98e0 + iVar1);
    iVar1 = iVar1 + 0x4028;
  }

  iVar1 = 0x218;
  for (iVar4 = 0; iVar4 < (int)(uint)DAT_801e18e6; iVar4 = iVar4 + 1) {
    FUN_8005dd68(&DAT_801c98e0 + iVar1);
    iVar1 = iVar1 + 0x24;
  }

  iVar4 = 0x1418;
  for (iVar1 = 0; iVar3 = 0, iVar1 < 6; iVar1 = iVar1 + 1) {
    puVar2 = &DAT_801c98e0 + iVar4;
    for (; iVar3 < 10; iVar3 = iVar3 + 1) {
      FUN_8005de1c(puVar2);
      puVar2 = puVar2 + 0xa4;
    }
    iVar4 = iVar4 + 0x668;
  }

  FUN_8005e07c(&DAT_801cd368);
  FUN_8005e07c(&DAT_801cd40c);
  FUN_8005e07c(&DAT_801cd4b0);
  FUN_800107b4(&DAT_801c9998);

  return;
}

void FUN_80010798(undefined2 *param_1)

{

  param_1[0x200c] = 0xffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x200a) = 10000;
  *(undefined *)((int)param_1 + 0x401b) = 0;
  return;
}

void FUN_800107b4(int param_1)

{

  FUN_8008ce30(param_1,0,0x160);

  *(undefined4 *)(param_1 + 0x40) = 1;

  return;
}

void FUN_800107e8(void)

{

  FUN_8008ce30(&DAT_801c98a0,0,0x40);

  DAT_800a6f18 = 0xffc0;
  DAT_800a6f1a = 0x40;

  return;
}

void FUN_80010810(void)

{
  int in_v0;

  *(undefined2 *)(in_v0 + 0x6f1a) = 0x40;

  return;
}

void FUN_8001082c(void)

{

  DAT_801c93c3 = 0x60;
  return;
}

void FUN_8001083c(void)

{

  DAT_801ef5f0 = 0;
  DAT_801ef5f1 = 0;
  DAT_801ef5f2 = 0;
  DAT_801ef5f8 = 0;
  DAT_801ef5fc = 0xffff;
  DAT_801ef5fe = 0;
  DAT_801ef600 = 0;
  return;
}

void FUN_80010868(void)

{
  FUN_80011af4();
  FUN_80011c70();
  FUN_80011ce4();
  FUN_800104a0();
  FUN_800107e8();
  FUN_8001082c();
  FUN_8001083c();
  FUN_8001047c();
  return;
}

void FUN_800108c0(void)

{

  TMR_SYSCLOCK_MAX._0_2_ = 0xffff;
  TMR_SYSCLOCK_MODE._0_2_ = 0x248;

  DAT_801c93d4 = (uint)(ushort)TMR_DOTCLOCK_VAL ^
                 (uint)(ushort)TMR_HRETRACE_VAL << 4 ^
                 (uint)(ushort)TMR_SYSCLOCK_VAL << 8 ^
                 (uint)_DAT_1f801130 << 0xc;
  return;
}

void FUN_80010928(void)

{

  FUN_8007f830(1);

  DAT_80011df4 = DAT_80011df4 + 1;

  return;
}

void FUN_80010954(void)

{

  VSyncCallback(FUN_80010928);

  do {
  } while (DAT_80011df4 < 4);

  VSyncCallback((f *)0x0);

  return;
}

void FUN_80010998(void)

{
  FUN_8005d9bc();
  ResetCallback();
  FUN_80010954();
  CdInit();
  FUN_8007f848();
  InitCARD(0);
  StartCARD();
  _bu_init();
  PadInitDirect(&DAT_801f0c98,&DAT_801f0cba);
  FUN_8007fe34();
  DecDCTReset(0);
  InitGeom();
  FUN_800108c0();
  return;
}

void FUN_80010a24(undefined4 *param_1)

{

  FUN_8007fe8c();

  *param_1 = &LAB_80011d3e_2;

  param_1[0x23] = 0x10;

  return;
}

void FUN_80010a60(undefined4 *param_1)

{

  *param_1 = &LAB_80011d3e_2;

  FUN_8007fec8();

  return;
}

void FUN_80010a88(int param_1)

{

  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x72) = 1;

  FUN_80080100(param_1 + 0x38);

  FUN_800800b4(param_1 + 0x38,param_1 + 0x70);

  return;
}

void FUN_80010c20(void)

{
  undefined4 *in_v0;

  *in_v0 = 0;
  in_v0[1] = 0x2000280;

  return;
}

void FUN_80010c68(void)

{
  bool bVar1;
  int iVar2;
  undefined2 local_8010;
  undefined2 local_800e;
  undefined2 local_800c;
  undefined2 local_800a;
  undefined auStack_8008 [32768];

  FUN_8008ce30(auStack_8008,0,0x8000);

  iVar2 = 0;
  local_800c = 0x400;
  local_8010 = 0;
  local_800a = 0x10;
  bVar1 = true;

  while (bVar1) {
    local_800e = (undefined2)iVar2;

    FUN_8007ba70(&local_8010,auStack_8008,0);

    iVar2 = iVar2 + 0x10;

    FUN_8007af30();

    bVar1 = iVar2 < 0x200;
  }

  return;
}

void FUN_80010cec(void)

{
  undefined **ppuVar1;
  undefined auStack_b8 [56];
  undefined auStack_80 [32];
  undefined auStack_60 [40];
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_28;

  FUN_80010c68();

  FUN_80010a24(auStack_b8);
  FUN_8007ff70(auStack_b8,0x27);
  FUN_80080494(auStack_60,&DAT_800a97d0,0xc0000);
  FUN_80080088(auStack_80,&DAT_800a8d5c,0x100);
  FUN_80010a88(auStack_b8);

  for (ppuVar1 = &PTR_LAB_8003322a_2_80033da0; *ppuVar1 != (undefined *)0x0; ppuVar1 = ppuVar1 + 2)
  {

    DAT_80033dcc = (undefined2)(0xa0 << (*(byte *)((int)ppuVar1 + 7) & 0x1f));

    FUN_80082fac(*ppuVar1,&DAT_800a97d0);
    FUN_8007bca0(&DAT_800a97d0,&DAT_80033dc0,&LAB_80033dc8);

    local_38 = 0;
    local_34 = (uint)*(ushort *)(ppuVar1 + 1);
    local_30 = (uint)*(byte *)((int)ppuVar1 + 6);
    local_28 = (uint)(*(char *)((int)ppuVar1 + 7) != '\0');

    FUN_800833e8(auStack_b8);
  }

  FUN_80010a60(auStack_b8,2);

  return;
}

void FUN_80010e14(void)

{

  FUN_8007d09c();
  FUN_80079dbc();
  FUN_80079e2c(0x3c);
  FUN_80079e64();
  FUN_80079eec(0x3c);
  FUN_80079ef8(4);
  FUN_8007a0e0(1);

  FUN_800686c8();
  FUN_8007c43c();
  FUN_8007f924();
  FUN_8007e8a0();
  FUN_800804f8();

  FUN_80010cec();

  FUN_80011494(&DAT_80011d38);

  FUN_800102dc();
  FUN_800100c0();
  FUN_80010868();

  FUN_8007a104(0xfff,0xfff);
  FUN_8007f830(1);

  return;
}

int FUN_80010f1c(int param_1,int param_2)

{

  if (*(int *)(param_1 + 0x168) != param_2) {

    *(int *)(param_1 + 0x168) = param_2;

    FUN_8007ab74(param_1 + 0x16c,param_2,0x800);
  }

  return param_1 + 0x16c;
}

undefined4 FUN_80010f5c(undefined4 *param_1)

{
  char cVar1;
  undefined uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7, uVar8, uVar9;
  int iVar10;

  iVar10 = 0x10;
  param_1[0x5a] = 0xffffffff;
  *(undefined *)(param_1 + 0x11) = 0;

  while( true ) {

    pcVar3 = (char *)FUN_80010f1c(param_1,iVar10);

    if (pcVar3 == (char *)0x0) {
      return 0xffffffff;
    }

    iVar4 = strncmp(pcVar3 + 1,"CD001",5);

    if ((iVar4 != 0) || (*pcVar3 == -1)) break;

    puVar6 = (undefined4 *)((int)param_1 + 0x22);

    if (*pcVar3 == '\x01') {

      puVar5 = (undefined4 *)(pcVar3 + 0x9c);

      if ((((uint)puVar5 | (uint)puVar6) & 3) == 0) {

        do {
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          uVar9 = puVar5[3];
          *puVar6 = *puVar5;
          puVar6[1] = uVar7;
          puVar6[2] = uVar8;
          puVar6[3] = uVar9;
          puVar5 = puVar5 + 4;
          puVar6 = puVar6 + 4;
        } while (puVar5 != (undefined4 *)(pcVar3 + 0xbc));
      }
      else {

        do {
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          uVar9 = puVar5[3];
          *puVar6 = *puVar5;
          puVar6[1] = uVar7;
          puVar6[2] = uVar8;
          puVar6[3] = uVar9;
          puVar5 = puVar5 + 4;
          puVar6 = puVar6 + 4;
        } while (puVar5 != (undefined4 *)(pcVar3 + 0xbc));
      }

      cVar1 = *(char *)((int)puVar5 + 1);
      *(char *)puVar6 = *(char *)puVar5;
      *(char *)((int)puVar6 + 1) = cVar1;

      puVar5 = (undefined4 *)((int)param_1 + 0x22);
      puVar6 = (undefined4 *)((int)param_1 + 0x42);

      if ((((uint)puVar5 | (uint)param_1) & 3) == 0) {
        do {
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          uVar9 = puVar5[3];
          *param_1 = *puVar5;
          param_1[1] = uVar7;
          param_1[2] = uVar8;
          param_1[3] = uVar9;
          puVar5 = puVar5 + 4;
          param_1 = param_1 + 4;
        } while (puVar5 != puVar6);
      }
      else {
        do {
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          uVar9 = puVar5[3];
          *param_1 = *puVar5;
          param_1[1] = uVar7;
          param_1[2] = uVar8;
          param_1[3] = uVar9;
          puVar5 = puVar5 + 4;
          param_1 = param_1 + 4;
        } while (puVar5 != puVar6);
      }

      uVar2 = *(undefined *)((int)puVar5 + 1);
      *(undefined *)param_1 = *(undefined *)puVar5;
      *(undefined *)((int)param_1 + 1) = uVar2;

      return 0xffffffff;
    }

    iVar10 = iVar10 + 1;
  }

  *(undefined *)(param_1 + 0x11) = 2;
  return 0xffffffff;
}

int FUN_80011154(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_118 [256];

  *(undefined *)(param_1 + 0x44) = 0;

  iVar4 = param_1 + 0x22;

  if ((*param_2 != '/') || (pcVar1 = param_2 + 1, param_2 = param_2 + 1, *pcVar1 != '\0')) {

    do {

      iVar2 = FUN_80011b3c(param_2,0x2f);
      iVar3 = iVar2 - (int)param_2;

      if (iVar2 == 0) {
        iVar3 = FUN_8008cfc4(param_2);
      }

      FUN_8008cf64(auStack_118,param_2,iVar3);
      auStack_118[iVar3] = 0;

      iVar4 = FUN_8001124c(param_1,*(undefined4 *)(iVar4 + 2),auStack_118);

      if (iVar2 == 0) {
        return iVar4;
      }

      if (iVar4 == 0) {
        return 0;
      }

      param_2 = (char *)(iVar2 + 1);

    } while ((*(byte *)(iVar4 + 0x19) & 2) != 0);

    *(undefined *)(param_1 + 0x44) = 3;
    param_1 = 0;
  }

  return param_1;
}

byte * FUN_8001124c(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  uchar *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined auStack_128 [264];

  FUN_8008cedc(auStack_128,param_3);
  FUN_8008d020(auStack_128,0x80011da0);

  iVar6 = 0;
  iVar4 = 0;
  *(undefined *)(param_1 + 0x44) = 0;

  while( true ) {

    puVar2 = (uchar *)FUN_80010f1c(param_1,param_2);
    pbVar3 = puVar2 + iVar4;

    if (puVar2 == (uchar *)0x0) {
      return (byte *)0x0;
    }

    pbVar7 = puVar2 + 0x800;

    if (iVar4 != 0) break;

    while( true ) {
      pbVar5 = pbVar3 + *pbVar3;

      if (*pbVar3 == 0) {
        *(undefined *)(param_1 + 0x44) = 3;
        return (byte *)0x0;
      }

      iVar6 = (int)pbVar7 - (int)pbVar3;

      if (pbVar7 < pbVar5) break;

      iVar4 = FUN_8008d060(pbVar3 + 0x21,auStack_128,pbVar3[0x20]);
      pbVar1 = pbVar3;

joined_r0x800112ec:
      pbVar3 = pbVar5;

      if (iVar4 == 0) {
        return pbVar1;
      }
    }

    iVar4 = (int)pbVar5 - (int)pbVar7;

    bcopy(pbVar3,(uchar *)(param_1 + 0x45),iVar6);
  }

  bcopy(puVar2,(uchar *)(iVar6 + param_1 + 0x45),iVar4);

  iVar4 = FUN_8008d060(param_1 + 0x66,auStack_128,*(undefined *)(param_1 + 0x65));

  pbVar5 = pbVar3;
  pbVar1 = (byte *)(param_1 + 0x45);

  goto joined_r0x800112ec;
}

undefined4 FUN_80011390(int param_1)

{
  undefined uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  puVar2 = (undefined4 *)FUN_80011154();
  puVar5 = (undefined4 *)(param_1 + 0x22);

  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {

    puVar4 = puVar2 + 8;

    if ((((uint)puVar2 | (uint)puVar5) & 3) == 0) {

      do {

        uVar3 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar5 = *puVar2;
        puVar5[1] = uVar3;
        puVar5[2] = uVar6;
        puVar5[3] = uVar7;
        puVar2 = puVar2 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar2 != puVar4);
    }
    else {

      do {

        uVar3 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar5 = *puVar2;
        puVar5[1] = uVar3;
        puVar5[2] = uVar6;
        puVar5[3] = uVar7;
        puVar2 = puVar2 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar2 != puVar4);
    }

    uVar1 = *(undefined *)((int)puVar2 + 1);
    *(undefined *)puVar5 = *(undefined *)puVar2;
    *(undefined *)((int)puVar5 + 1) = uVar1;

    uVar3 = 0;
  }

  return uVar3;
}

void FUN_8001146c(undefined4 param_1)

{

  FUN_80011154(&LAB_800a8e5c,param_1);
  return;
}

void FUN_80011494(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;

  FUN_80010f5c(&LAB_800a8e5c);
  FUN_80011390(&LAB_800a8e5c,param_1);

  iVar1 = FUN_80011154(&LAB_800a8e5c,"gt2.vol");
  DAT_801c93e8 = *(undefined4 *)(iVar1 + 2);

  iVar1 = FUN_80011154(&LAB_800a8e5c,"music.dat");
  if (iVar1 == 0) {

    uVar2 = 0;
  }
  else {

    uVar2 = *(undefined4 *)(iVar1 + 2);
  }

  FUN_80080eec(&PTR_s_Apollo_440___Cold_Rock_the_Mic_800959c0,uVar2);

  iVar1 = FUN_80011154(&LAB_800a8e5c,"stream.dat");
  if (iVar1 != 0) {
    DAT_801c93cc = *(undefined4 *)(iVar1 + 2);
  }

  return;
}

uint FUN_80011570(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;

  iVar4 = 0;
  uVar3 = 0x6262;
  pcVar2 = "bbbrduenfaozraspyo";

  do {
    pcVar2 = (char *)((int)pcVar2 + 2);

    if (uVar3 == ((int)*param_1 | (int)param_1[1] << 8)) break;

    uVar3 = (uint)*(ushort *)pcVar2;
    iVar4 = iVar4 + 1;
  } while (uVar3 != 0);

  cVar1 = param_1[6];
  if (cVar1 == '5') {
    uVar3 = 2;
  }
  else if (cVar1 < '6') {
    uVar3 = 0;
    if (cVar1 == '4') {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
    if (cVar1 == '6') {
      uVar3 = 3;
    }
  }

  return ((iVar4 << 0xc |

          (param_1[2] + -0x30) * 100 + (param_1[3] + -0x30) * 10 + -0x30 + (int)param_1[4]) << 3 |
         uVar3) << 0xd |
         (int)param_1[7];
}

int FUN_80011670(char *param_1)

{
  char cVar1;
  int iVar2;

  iVar2 = 0;

  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;

    if (9 < (int)cVar1 - 0x30U) break;

    iVar2 = iVar2 * 10 + -0x30 + (int)cVar1;
  }

  return iVar2;
}

void FUN_800116ac(void)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;

  cVar2 = '\0';
  uVar1 = 0x2d;

  pcVar3 = "-0123456789abcdefghijklmnopqrstuvwxyz";

  do {

    (&DAT_801ef630)[uVar1] = cVar2;

    if (uVar1 - 0x61 < 0x1a) {
      (&DAT_801ef610)[uVar1] = cVar2;
    }

    pcVar3 = (char *)((byte *)pcVar3 + 1);
    uVar1 = (uint)(byte)*pcVar3;
    cVar2 = cVar2 + '\x01';

  } while (uVar1 != 0);

  return;
}

void FUN_80011708(void)

{
  return;
}

void FUN_80011710(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  short sVar7;
  undefined4 *puVar8;

  iVar2 = FUN_800100e4("/carobj",0);
  iVar3 = (uint)*(ushort *)(iVar2 + 4) * 0x20;
  puVar5 = &DAT_800a97d0 + (uint)*(ushort *)(iVar2 + 4) * 8;

  if ((*(byte *)((int)&DAT_800a97d4 + iVar3 + 2) & 3) == 1) {
    puVar8 = (undefined4 *)(&UNK_800a97f0 + iVar3);
    do {
      puVar5 = puVar8;
      puVar8 = puVar5 + 8;
    } while ((*(byte *)((int)puVar5 + 6) & 3) == 1);
  }

  sVar7 = 0;
  pbVar6 = (byte *)((int)puVar5 + 0x66);
  puVar8 = &DAT_801df5d0;

  while( true ) {

    uVar4 = FUN_80060924((int)puVar5 + 7);
    *puVar8 = uVar4;

    uVar1 = *(undefined2 *)(pbVar6 + -0x62);
    sVar7 = sVar7 + 1;
    *(undefined2 *)((int)puVar8 + 6) = 0;
    *(undefined2 *)(puVar8 + 1) = uVar1;
    puVar8 = puVar8 + 2;

    if ((*pbVar6 & 0x80) != 0) break;

    pbVar6 = pbVar6 + 0x80;
    puVar5 = puVar5 + 0x20;
  }

  DAT_801c93c8 = sVar7;

  (&DAT_801df5d4)[sVar7 * 4] = (&DAT_801df5d4)[(sVar7 + -1) * 4] + 4;
  return;
}

void FUN_80011820(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;

  iVar3 = FUN_800100e4("/carlogo",0);

  iVar4 = (uint)*(ushort *)(iVar3 + 4) * 0x20;
  puVar6 = &DAT_800a97d0 + (uint)*(ushort *)(iVar3 + 4) * 8;

  if ((*(byte *)((int)&DAT_800a97d4 + iVar4 + 2) & 3) == 1) {

    puVar7 = (undefined4 *)(&UNK_800a97f0 + iVar4);
    do {
      puVar6 = puVar7;
      puVar7 = puVar6 + 8;
    } while ((*(byte *)((int)puVar6 + 6) & 3) == 1);
  }

  pbVar8 = (byte *)((int)puVar6 + 0x26);
  puVar7 = puVar6;

  while( true ) {

    uVar5 = FUN_80060924((int)puVar7 + 7);

    if (((0x71 < pbVar8[-0x1a]) || (pbVar8[-0x1a] < 0x70)) &&
       (iVar3 = FUN_8005d950(uVar5), iVar3 != 0)) {

      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(pbVar8 + -0x22);
    }

    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 0x40;

    if ((bVar1 & 0x80) != 0) break;

    puVar7 = puVar7 + 0x10;
  }

  iVar3 = (int)DAT_801c93c8;
  uVar2 = *(undefined2 *)(puVar6 + 1);
  iVar4 = 0;

  if (0 < iVar3) {
    puVar6 = &DAT_801df5d0;
    do {

      if (*(short *)((int)puVar6 + 6) == 0) {
        *(undefined2 *)((int)puVar6 + 6) = uVar2;
      }

      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 2;

    } while (iVar4 < iVar3);
  }

  return;
}

void FUN_8001194c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;

  iVar2 = FUN_800100e4("/carwheel",0);
  iVar3 = (uint)*(ushort *)(iVar2 + 4) * 0x20;
  puVar5 = &DAT_800a97d0 + (uint)*(ushort *)(iVar2 + 4) * 8;

  if ((*(byte *)((int)&DAT_800a97d4 + iVar3 + 2) & 3) == 1) {
    puVar1 = (undefined4 *)(&UNK_800a97f0 + iVar3);
    do {
      puVar5 = puVar1;
      puVar1 = puVar5 + 8;
    } while ((*(byte *)((int)puVar5 + 6) & 3) == 1);
  }

  sVar6 = 0;
  iVar2 = (int)puVar5 + 7;
  puVar5 = &DAT_801e30f0;

  while( true ) {

    uVar4 = FUN_80011570(iVar2);
    *puVar5 = uVar4;

    puVar5 = puVar5 + 1;
    sVar6 = sVar6 + 1;

    if ((*(byte *)(iVar2 + -1) & 0x80) != 0) break;

    iVar2 = iVar2 + 0x20;
  }

  DAT_801c93b4 = sVar6;
  return;
}

void FUN_80011a10(void)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  short sVar8;

  iVar3 = FUN_800100e4("/engine",0);
  iVar4 = (uint)*(ushort *)(iVar3 + 4) * 0x20;
  puVar5 = &DAT_800a97d0 + (uint)*(ushort *)(iVar3 + 4) * 8;

  if ((*(byte *)((int)&DAT_800a97d4 + iVar4 + 2) & 3) == 1) {
    puVar1 = (undefined4 *)(&UNK_800a97f0 + iVar4);
    do {
      puVar5 = puVar1;
      puVar1 = puVar5 + 8;
    } while ((*(byte *)((int)puVar5 + 6) & 3) == 1);
  }

  sVar8 = 0;

  if (*(byte *)((int)puVar5 + 7) < 0x3a) {
    pbVar6 = (byte *)((int)puVar5 + 7);
    puVar7 = &DAT_801df340;
    sVar8 = 0;

    do {

      uVar2 = FUN_80011670(pbVar6);
      *puVar7 = uVar2;

      puVar7 = puVar7 + 1;
      sVar8 = sVar8 + 1;

      if ((pbVar6[0xff] & 0x80) != 0) {
        DAT_801c93bc = sVar8;
        return;
      }

      pbVar6 = pbVar6 + 0x120;

    } while (*pbVar6 < 0x3a);
  }

  DAT_801c93bc = sVar8;
  return;
}

void FUN_80011af4(void)

{
  FUN_800116ac();
  FUN_80011708();
  FUN_80011710();
  FUN_80011820();
  FUN_8001194c();
  FUN_80011a10();
  return;
}

char * FUN_80011b3c(char *param_1,uint param_2)

{
  while( true ) {

    if ((int)*param_1 == 0) {
      return (char *)0x0;
    }

    if (((param_2 ^ (int)*param_1) & 0xff) == 0) break;

    param_1 = param_1 + 1;
  }

  return param_1;
}

void FUN_80011b70(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short sVar7;
  undefined auStack_38 [32];

  iVar1 = FUN_800100e4("/crsmap",0);
  iVar2 = (uint)*(ushort *)(iVar1 + 4) * 0x20;
  puVar5 = &DAT_800a97d0 + (uint)*(ushort *)(iVar1 + 4) * 8;

  if ((*(byte *)((int)&DAT_800a97d4 + iVar2 + 2) & 3) == 1) {
    puVar6 = (undefined4 *)(&UNK_800a97f0 + iVar2);
    do {
      puVar5 = puVar6;
      puVar6 = puVar5 + 8;
    } while ((*(byte *)((int)puVar5 + 6) & 3) == 1);
  }

  sVar7 = 0;
  puVar6 = &DAT_801e33f0;
  DAT_801c93dc = *(undefined2 *)(puVar5 + 1);

  for (iVar1 = (int)puVar5 + 7; (*(byte *)(iVar1 + -1) & 3) != 1; iVar1 = iVar1 + 0x20) {

    FUN_8008cedc(auStack_38,iVar1);

    puVar3 = (undefined *)FUN_80011b3c(auStack_38,0x2e);
    if (puVar3 != (undefined *)0x0) {
      *puVar3 = 0;
    }

    uVar4 = FUN_80083004(auStack_38);
    *puVar6 = uVar4;

    puVar6 = puVar6 + 1;
    sVar7 = sVar7 + 1;
  }

  DAT_801c93e4 = sVar7;
  return;
}

void FUN_80011c20(void)

{
  undefined *in_v0;
  undefined4 uVar1;
  int unaff_s0;
  undefined4 *unaff_s1;
  short unaff_s2;
  uint unaff_s3;

  while( true ) {

    if (in_v0 != (undefined *)0x0) {
      *in_v0 = 0;
    }

    uVar1 = FUN_80083004(&stack0x00000010);
    *unaff_s1 = uVar1;
    unaff_s1 = unaff_s1 + 1;
    unaff_s2 = unaff_s2 + 1;

    if ((*(byte *)(unaff_s0 + 0x1f) & 3) == unaff_s3) break;

    FUN_8008cedc(&stack0x00000010,unaff_s0 + 0x20);
    in_v0 = (undefined *)FUN_80011b3c(&stack0x00000010,0x2e);
    unaff_s0 = unaff_s0 + 0x20;
  }

  DAT_801c93e4 = unaff_s2;
  return;
}

void FUN_80011c70(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;

  FUN_80011b70();

  FUN_8005d8a0(6,&DAT_801e18e0);

  iVar2 = 8;
  for (uVar3 = 0; piVar1 = (int *)(&DAT_801e18e0 + iVar2), uVar3 < DAT_801e18e6; uVar3 = uVar3 + 1)
  {

    *piVar1 = (int)(&DAT_801e18e0 + *piVar1);
    iVar2 = iVar2 + 0x18;
  }
  return;
}

void FUN_80011ce4(void)

{

  FUN_80078790(&DAT_801e2ce0,&DAT_801e2cf0,0x200);

  FUN_800787cc(&DAT_801e2ce0,0xf7,0,1);
  return;
}

void FUN_80014bca(void)

{
  int unaff_s0;

  cacheOp(7,unaff_s0 + -0x1f1e);

  halt_unimplemented();
}

void FUN_8001527c(void)

{
  undefined in_t0;
  int unaff_s8;

  *(undefined *)(unaff_s8 + 0x1bfc) = in_t0;

  halt_unimplemented();
}

void FUN_80016d1c(void)

{
  int unaff_s5;

  prefetch(unaff_s5 + -0x3d3d,9);

  halt_baddata();
}

void FUN_800189aa(void)

{

  halt_baddata();
}

void FUN_80018f7a(void)

{
  uint uVar1;
  uint *puVar2;
  int in_t6;
  undefined unaff_s3;
  uint unaff_s7;
  int in_t9;

  *(undefined *)(in_t6 + 0x6a85) = unaff_s3;

  uVar1 = in_t9 + 0x15f3U & 3;
  puVar2 = (uint *)((in_t9 + 0x15f3U) - uVar1);

  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | unaff_s7 >> (3 - uVar1) * 8;

  halt_baddata();
}

void FUN_80019d22(void)

{
  uint uVar1;
  uint *puVar2;
  int unaff_s0;
  int unaff_s4;

  uVar1 = unaff_s4 - 0x5dabU & 3;

  puVar2 = (uint *)((unaff_s4 - 0x5dabU) - uVar1);

  *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | unaff_s0 << uVar1 * 8;

  halt_baddata();
}

void FUN_8001feee(void)

{
  int in_k0;

  cacheOp(0x1d,in_k0 + 0x67e);

  halt_baddata();
}

void FUN_80020020(void)

{
  int in_v0;

  *(undefined *)(in_v0 + 0x5f5a) = 0;

  halt_baddata();
}

void FUN_80020e28(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint unaff_s5;

  uVar1 = param_2 - 0x1845U & 3;

  puVar2 = (uint *)((param_2 - 0x1845U) - uVar1);

  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | unaff_s5 >> (3 - uVar1) * 8;

  halt_baddata();
}

void FUN_80021902(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s6;
  int unaff_retaddr;

  prefetch(unaff_s6 + 0x1322,0x18);

  setCopReg(2,param_3,*(undefined8 *)(unaff_retaddr + -0x44));

  halt_baddata();
}

void FUN_80022f54(void)

{
  undefined2 in_t6;
  int unaff_s2;

  *(undefined2 *)(unaff_s2 + 0x5a5f) = in_t6;

  halt_baddata();
}

void FUN_80022f98(void)

{

  halt_baddata();
}

void FUN_80023436(void)

{

  halt_baddata();
}

void FUN_80023b7e(void)

{
  undefined2 in_at;
  int in_k0;

  *(undefined2 *)(in_k0 + 0x36d7) = in_at;

  halt_unimplemented();
}

void FUN_80025480(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int in_t8;

  uVar1 = param_1 - 0x1a9dU & 3;

  puVar2 = (uint *)((param_1 - 0x1a9dU) - uVar1);

  *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | in_t8 << uVar1 * 8;

  halt_baddata();
}

void FUN_80025f2a(undefined4 param_1)

{
  int in_v0;

  *(undefined4 *)(in_v0 + -0x105e) = param_1;

  halt_baddata();
}

void FUN_80026baa(void)

{
  int unaff_s1;

  cacheOp(0xf,unaff_s1 + -0x3cbb);

  halt_baddata();
}

void FUN_80027ee4(void)

{

  halt_baddata();
}

void FUN_8002f772(void)

{
  undefined4 in_v1;
  int in_a3;
  int in_t2;

  cacheOp(0x13,in_a3 + -0x13dc);

  *(undefined4 *)(in_t2 + 0x6bd5) = in_v1;

  halt_baddata();
}

void FUN_80030020(void)

{
  func_0x8f251a70();

  halt_baddata();
}

void FUN_8003035a(void)

{

  halt_unimplemented();
}

void FUN_80031020(void)

{
  undefined in_t0;
  int unaff_s0;

  *(undefined *)(unaff_s0 + 0x4122) = in_t0;

  halt_baddata();
}

void FUN_80031204(void)

{
  int in_at;
  int in_v1;
  int in_t1;
  int in_t2;
  int unaff_s2;
  int unaff_s5;
  undefined4 in_k0;

  if (in_t2 == unaff_s2) {

    cacheOp(0x1a,in_t1 + 0x70da);

    halt_baddata();
  }

  *(undefined4 *)(in_at + 0x10) = in_k0;

  if (in_v1 != unaff_s5) {

    halt_baddata();
  }

  halt_unimplemented();
}

void FUN_800319aa(undefined4 param_1,undefined4 param_2)

{
  int in_t5;

  *(undefined4 *)(in_t5 + 0x74a8) = param_2;

  halt_baddata();
}

void FUN_8003728e(int param_1)

{
  int in_t2;

  if (in_t2 != param_1) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_8003a2ee(int param_1)

{
  int in_t2;

  if (in_t2 != param_1) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_8003c0be(int param_1)

{
  int in_t2;

  if (in_t2 != param_1) {

    halt_baddata();
  }

  halt_baddata();
}

undefined4 FUN_8003e8c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined auStackX_0 [16];

  DAT_80091164 = 0;
  puVar1 = (undefined4 *)&DAT_801f0d60;

  DAT_8009113c = param_1;
  DAT_80091140 = param_2;
  DAT_80091144 = unaff_s0;
  DAT_80091148 = unaff_s1;
  DAT_8009114c = unaff_s2;
  DAT_80091150 = unaff_s3;
  DAT_80091154 = unaff_s4;
  DAT_80091158 = unaff_s5;
  DAT_8009115c = unaff_s6;
  DAT_80091160 = unaff_s7;
  DAT_80091168 = (undefined *)&auStackX_0;  // Use local stack variable instead of register
  DAT_8009116c = unaff_s8;
  DAT_80091170 = unaff_retaddr;

  do {
    puVar1 = puVar1 + -1;
    *puVar1 = 0;
  } while (puVar1 != &DAT_801c93b0);

  FUN_8008ce08();
  uVar2 = FUN_8005d6e0(DAT_8009113c,DAT_80091140);
  FUN_80085974(uVar2);

  return uVar2;
}

undefined4 FUN_800400a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined auStackX_0 [16];

  DAT_80091164 = 0;
  puVar1 = (undefined4 *)&DAT_801f0d60;

  DAT_8009113c = param_1;
  DAT_80091140 = param_2;
  DAT_80091144 = unaff_s0;
  DAT_80091148 = unaff_s1;
  DAT_8009114c = unaff_s2;
  DAT_80091150 = unaff_s3;
  DAT_80091154 = unaff_s4;
  DAT_80091158 = unaff_s5;
  DAT_8009115c = unaff_s6;
  DAT_80091160 = unaff_s7;
  DAT_80091168 = (undefined *)&auStackX_0;  // Use local stack variable instead of register
  DAT_8009116c = unaff_s8;
  DAT_80091170 = unaff_retaddr;

  do {
    puVar1 = puVar1 + -1;
    *puVar1 = 0;
  } while (puVar1 != &DAT_801c93b0);

  FUN_8008ce08();
  uVar2 = FUN_8005d6e0(DAT_8009113c,DAT_80091140);
  FUN_80085974(uVar2);

  return uVar2;
}

undefined4 FUN_8004243c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined auStackX_0 [16];

  DAT_80091164 = 0;
  puVar1 = (undefined4 *)&DAT_801f0d60;

  DAT_8009113c = param_1;
  DAT_80091140 = param_2;
  DAT_80091144 = unaff_s0;
  DAT_80091148 = unaff_s1;
  DAT_8009114c = unaff_s2;
  DAT_80091150 = unaff_s3;
  DAT_80091154 = unaff_s4;
  DAT_80091158 = unaff_s5;
  DAT_8009115c = unaff_s6;
  DAT_80091160 = unaff_s7;
  DAT_80091168 = (undefined *)&auStackX_0;  // Use local stack variable instead of register
  DAT_8009116c = unaff_s8;
  DAT_80091170 = unaff_retaddr;

  do {
    puVar1 = puVar1 + -1;
    *puVar1 = 0;
  } while (puVar1 != &DAT_801c93b0);

  FUN_8008ce08();
  uVar2 = FUN_8005d6e0(DAT_8009113c,DAT_80091140);
  FUN_80085974(uVar2);

  return uVar2;
}

void FUN_8004a556(int param_1)

{
  int in_t2;

  if (in_t2 != param_1) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_8005a3a6(int param_1)

{
  int in_t2;

  if (in_t2 != param_1) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_8005a3b6(int param_1)

{
  int in_t2;

  if (in_t2 != param_1) {

    halt_baddata();
  }

  halt_baddata();
}

undefined4 start(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined auStackX_0 [16];

  DAT_80091164 = 0;
  puVar1 = (undefined4 *)&DAT_801f0d60;

  DAT_8009113c = param_1;
  DAT_80091140 = param_2;
  DAT_80091144 = unaff_s0;
  DAT_80091148 = unaff_s1;
  DAT_8009114c = unaff_s2;
  DAT_80091150 = unaff_s3;
  DAT_80091154 = unaff_s4;
  DAT_80091158 = unaff_s5;
  DAT_8009115c = unaff_s6;
  DAT_80091160 = unaff_s7;
  DAT_80091168 = (undefined *)&auStackX_0;  // Use local stack variable instead of register
  DAT_8009116c = unaff_s8;
  DAT_80091170 = unaff_retaddr;

  do {
    puVar1 = puVar1 + -1;
    *puVar1 = 0;
  } while (puVar1 != &DAT_801c93b0);

  FUN_8008ce08();

  uVar2 = FUN_8005d6e0(DAT_8009113c,DAT_80091140);

  FUN_80085974(uVar2);

  return uVar2;
}

undefined4 FUN_8005d6e0(void)

{
  FUN_80085a98();
  FUN_80010e14();
  FUN_8005d9f0();
  FUN_8005da3c(1);
  return 0;
}

void FUN_8005d718(int param_1)

{

  FUN_8005d74c((&DAT_801e2ef0)[param_1]);
  return;
}

uint FUN_8005d74c(int param_1)

{

  return (uint)(&DAT_801e3600)[param_1] >> 0xb;
}

void FUN_8005d768(int param_1)

{

  FUN_8005d79c((&DAT_801e2ef0)[param_1]);
  return;
}

int FUN_8005d79c(int param_1)

{

  return ((&DAT_801e3600)[param_1 + 1] & 0xfffff800) - (&DAT_801e3600)[param_1];
}

void FUN_8005d7d0(undefined4 param_1,int param_2)

{

  FUN_8007ab78(param_1,(DAT_801c93e8 + ((param_2 << 0xb) >> 0xb)) * 0x800);
  return;
}

void FUN_8005d848(int param_1,undefined4 param_2,code *param_3)

{

  (*param_3)(param_2,(uint)(&DAT_801e3600)[param_1] >> 0xb,
             ((&DAT_801e3600)[param_1 + 1] & 0xfffff800) - (&DAT_801e3600)[param_1]);
  return;
}

void FUN_8005d8a0(int param_1)

{

  FUN_8005d908((&DAT_801e2ef0)[param_1]);
  return;
}

void FUN_8005d8d4(int param_1)

{

  FUN_8005d92c((&DAT_801e2ef0)[param_1]);
  return;
}

void FUN_8005d908(undefined4 param_1,undefined4 param_2)

{

  FUN_8005d848(param_1,param_2,FUN_8005d7d0);
  return;
}

void FUN_8005d92c(undefined4 param_1,undefined4 param_2)

{

  FUN_8005d848(param_1,param_2,&LAB_8005d80c);
  return;
}

uint * FUN_8005d950(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  iVar2 = (int)DAT_801c93c8;

  while( true ) {
    iVar3 = iVar2;
    iVar2 = iVar4 + iVar3 >> 1;

    uVar1 = (&DAT_801df5d0)[iVar2 * 2];

    if (param_1 == uVar1) {

      return &DAT_801df5d0 + iVar2 * 2;
    }

    if (iVar3 <= iVar4) break;

    if (uVar1 < param_1) {

      iVar4 = iVar2 + 1;
      iVar2 = iVar3;
    }

  }

  return (uint *)0x0;
}

void FUN_8005d9bc(void)

{

  FUN_8008ce30(&DAT_800a8d5c,0,0x120654);
  return;
}

void FUN_8005d9f0(void)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_8007ad58(&DAT_801c942c);

  if (pcVar1 != (code *)0x0) {

    (*pcVar1)(DAT_801c945c,DAT_801c9460,DAT_801c9464,DAT_801c9468);
  }
  return;
}

void FUN_8005da3c(int param_1)

{

  FUN_8005da7c(param_1,(&PTR_LAB_80091174)[param_1],0,0,0,0);
  return;
}

void FUN_8005da7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  int iVar2;

  DAT_801c9464 = param_5;
  DAT_801c9468 = param_6;
  DAT_801c945c = param_3;
  DAT_801c9460 = param_4;

  FUN_8005dad8();
  puVar1 = &DAT_801c942c;

  FUN_8007ad90(&DAT_801c942c,param_2);

  FUN_80078370();
  FUN_800783dc();

  if (DAT_801ef618 == 0) {

    FUN_8007ab74(&DAT_800a8d5c,DAT_801c93d0,DAT_801c93e0);
    iVar2 = (int)&DAT_800a8d5c + *(int *)(&DAT_801ef61c + (int)puVar1 * 8);
  }
  else {

    iVar2 = DAT_801ef618 + *(int *)(&DAT_801ef61c + (int)puVar1 * 8);
  }

  FUN_80082fac(iVar2,FUN_80010000);

  FlushCache();

  FUN_8005d9bc();
  return;
}

void FUN_8005dad8(int param_1)

{
  int iVar1;

  FUN_80078370();
  FUN_800783dc();

  if (DAT_801ef618 == 0) {

    FUN_8007ab74(&DAT_800a8d5c,DAT_801c93d0,DAT_801c93e0);
    iVar1 = (int)&DAT_800a8d5c + *(int *)(&DAT_801ef61c + param_1 * 8);
  }
  else {

    iVar1 = DAT_801ef618 + *(int *)(&DAT_801ef61c + param_1 * 8);
  }

  FUN_80082fac(iVar1,FUN_80010000);

  FlushCache();
  FUN_8005d9bc();
  return;
}

byte FUN_8005db90(int param_1,uint param_2)

{
  byte bVar1;

  bVar1 = *(byte *)(param_1 + (int)param_2 / 2 + 0x60);

  if ((param_2 & 1) == 0) {

    return bVar1 & 0xf;
  }

  return bVar1 >> 4;
}

undefined4 FUN_8005dbc0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;

  iVar1 = FUN_8005db90();
  uVar3 = 0;

  if (((-1 < (int)param_2) && (uVar3 = 0, param_3 != 0)) &&
     (uVar3 = 0, iVar1 == 0 || param_3 < iVar1)) {

    bVar2 = *(byte *)(param_1 + (int)param_2 / 2 + 0x60);

    if ((param_2 & 1) == 0) {

      bVar2 = bVar2 & 0xf0 | (byte)param_3;
    }
    else {

      bVar2 = bVar2 & 0xf | (byte)(param_3 << 4);
    }

    *(byte *)(param_1 + (int)param_2 / 2 + 0x60) = bVar2;
    uVar3 = 1;
  }
  return uVar3;
}

void FUN_8005dc64(int param_1,int param_2)

{

  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_2;

  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;

  if (param_2 == 1) {

    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  return;
}

void FUN_8005dc9c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;

  uVar1 = *(int *)(param_1 + 0x5c) + param_2;
  *(uint *)(param_1 + 0x5c) = uVar1;

  if (100000000 < uVar1) {

    iVar2 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar2;

    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x7fffffff;
    }

    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -100000000;
  }
  return;
}

void FUN_8005dcf4(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;

  if ((-1 < param_2) && (pbVar3 = (byte *)(param_1 + param_2), param_2 < 0x20)) {

    bVar1 = *pbVar3;
    uVar2 = bVar1 | param_3;
    *pbVar3 = (byte)uVar2;

    if (((uVar2 >> 2 & 1) != 1) && (param_3 == 2)) {

      uVar2 = ((uVar2 & 0x38) >> 3) + 1;

      if (4 < uVar2) {
        uVar2 = 5;
        *pbVar3 = bVar1 | 6;
      }

      *pbVar3 = *pbVar3 & 199 | (byte)(uVar2 << 3);
    }
  }
  return;
}

void FUN_8005dd68(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  *param_1 = 0xffffffff;

  iVar2 = 3;
  puVar1 = param_1 + 3;

  do {
    puVar1[1] = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);

  *(undefined2 *)(param_1 + 4) = 0;

  return;
}

int FUN_8005dd94(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = *param_1;
  uVar3 = 0;

  if (param_2 < 3) {
    uVar2 = param_1[param_2 + 1];
  }

  if (-1 < param_2 + -1) {
    uVar3 = param_1[param_2];
  }

  if (uVar2 == 0xffffffff && uVar3 != 0xffffffff) {
    uVar2 = *param_1;
  }

  uVar1 = ~uVar2;

  if (uVar2 == uVar3) {
    uVar2 = 0xffffffff;
    uVar1 = 0;
  }

  if (uVar1 == 0 || uVar3 == 0xffffffff) {
    return -1;
  }

  return uVar2 - uVar3;
}

void FUN_8005de1c(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;

  iVar3 = 0;
  iVar1 = 4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = param_1;

  do {

    FUN_8005dd68(param_1 + iVar1);

    puVar2[0x68] = 0;

    puVar2 = puVar2 + 0xc;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x14;

  } while (iVar3 < 5);

  return;
}

int FUN_8005de8c(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;

  if (*param_2 == 0xffffffff) {
    return -1;
  }

  iVar2 = 0;

  while( true ) {

    if (4 < iVar3) {
      return -1;
    }

    iVar1 = iVar2 + param_1;

    if ((*(int *)(iVar2 + param_1 + 4) == -1) ||
       (iVar2 = iVar2 + 0x14, *param_2 < *(uint *)(iVar1 + 4))) break;

    iVar3 = iVar3 + 1;
  }

  return iVar3;
}

void FUN_8005defc(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3, uVar4, uVar5;
  int iVar6;
  int iVar7, iVar8, iVar9, iVar10;

  iVar1 = FUN_8005de8c();
  iVar6 = 3;

  if (iVar1 < 4) {

    iVar10 = param_1 + 0x3c;
    iVar9 = 0x50;
    iVar8 = 0x8c;
    iVar7 = 0x98;

    do {

      FUN_8008cedc(param_1 + iVar7, param_1 + iVar8);

      iVar2 = param_1 + iVar9;
      uVar3 = *(undefined4 *)(iVar10 + 8);
      uVar4 = *(undefined4 *)(iVar10 + 0xc);
      uVar5 = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar10 + 4);
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(undefined4 *)(iVar2 + 0xc) = uVar4;
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar10 + 0x14);

      iVar10 = iVar10 + -0x14;
      iVar9 = iVar9 + -0x14;
      iVar8 = iVar8 + -0xc;
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + -0xc;

    } while (iVar1 <= iVar6);
  }

  iVar6 = param_1 + iVar1 * 0x14;

  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(iVar6 + 4) = *param_2;
  *(undefined4 *)(iVar6 + 8) = uVar3;
  *(undefined4 *)(iVar6 + 0xc) = uVar4;
  *(undefined4 *)(iVar6 + 0x10) = uVar5;
  *(undefined4 *)(iVar6 + 0x14) = param_2[4];

  FUN_8008cedc(param_1 + iVar1 * 0xc + 0x68, param_3);

  return;
}

void FUN_8005e03c(int param_1,uint param_2,undefined4 param_3)

{

  if (param_2 < 8) {

    FUN_8008cedc(param_2 * 0x14 + param_1 + 0xc, param_3);
  }
  return;
}

void FUN_8005e07c(int param_1)

{
  int iVar1;
  int iVar2;

  FUN_8008ce30(param_1, 0, 0xa4);

  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {

    *(undefined4 *)(iVar1 + param_1 + 8) = 0xffffffff;
    iVar1 = iVar1 + 0x14;
  }
  return;
}

int FUN_8005e0d0(byte *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6, uVar7, uVar8;
  int iVar9;

  iVar5 = 0;

  if (8 < *param_1) {
    *param_1 = 0;
  }

  iVar3 = 0;
  while( true ) {

    if ((char)*param_1 <= iVar5) goto LAB_8005e1e8;

    if (*param_2 == *(int *)(param_1 + iVar3 + 4)) break;

    iVar3 = iVar3 + 0x14;
    iVar5 = iVar5 + 1;
  }

  if (param_3 == 0) {

    bVar1 = (uint)param_2[1] < *(uint *)(param_1 + iVar3 + 8);
  }
  else {

    bVar1 = *(uint *)(param_1 + iVar3 + 8) < (uint)param_2[1];
  }

  iVar5 = iVar5 + 1;

  if (!bVar1) {
    return -1;
  }

  if (iVar5 < (char)*param_1) {
    pbVar4 = param_1 + iVar5 * 0x14;
    iVar3 = iVar5 * 0x14 + -0x14;

    do {

      uVar6 = *(undefined4 *)(pbVar4 + 8);
      uVar7 = *(undefined4 *)(pbVar4 + 0xc);
      uVar8 = *(undefined4 *)(pbVar4 + 0x10);
      *(undefined4 *)(param_1 + iVar3 + 4) = *(undefined4 *)(pbVar4 + 4);
      *(undefined4 *)(param_1 + iVar3 + 8) = uVar6;
      *(undefined4 *)(param_1 + iVar3 + 0xc) = uVar7;
      *(undefined4 *)(param_1 + iVar3 + 0x10) = uVar8;
      *(undefined4 *)(param_1 + iVar3 + 0x14) = *(undefined4 *)(pbVar4 + 0x14);

      pbVar4 = pbVar4 + 0x14;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x14;

    } while (iVar5 < (char)*param_1);
  }

  *(undefined4 *)(param_1 + (char)*param_1 * 0x14 + -0xc) = 0xffffffff;
  *param_1 = *param_1 - 1;

LAB_8005e1e8:
  iVar3 = 0;

  for (iVar5 = 0; iVar5 < (char)*param_1; iVar5 = iVar5 + 1) {
    if (param_3 == 0) {

      bVar1 = (uint)param_2[1] < *(uint *)(param_1 + iVar3 + 8);
    }
    else {

      bVar1 = *(uint *)(param_1 + iVar3 + 8) < (uint)param_2[1];
    }

    iVar3 = iVar3 + 0x14;
    if (bVar1) goto LAB_8005e248;
  }

  if (7 < iVar5) {
    return -1;
  }

LAB_8005e248:
  iVar3 = 6;

  if (iVar5 < 7) {
    pbVar4 = param_1 + 0x78;
    iVar2 = 0x8c;

    do {

      uVar6 = *(undefined4 *)(pbVar4 + 8);
      uVar7 = *(undefined4 *)(pbVar4 + 0xc);
      uVar8 = *(undefined4 *)(pbVar4 + 0x10);
      *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(pbVar4 + 4);
      *(undefined4 *)(param_1 + iVar2 + 8) = uVar6;
      *(undefined4 *)(param_1 + iVar2 + 0xc) = uVar7;
      *(undefined4 *)(param_1 + iVar2 + 0x10) = uVar8;
      *(undefined4 *)(param_1 + iVar2 + 0x14) = *(undefined4 *)(pbVar4 + 0x14);

      pbVar4 = pbVar4 + -0x14;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x14;

    } while (iVar5 <= iVar3);
  }

  iVar3 = param_2[1];
  iVar2 = param_2[2];
  iVar9 = param_2[3];

  *(int *)(param_1 + iVar5 * 0x14 + 4) = *param_2;
  *(int *)(param_1 + iVar5 * 0x14 + 8) = iVar3;
  *(int *)(param_1 + iVar5 * 0x14 + 0xc) = iVar2;
  *(int *)(param_1 + iVar5 * 0x14 + 0x10) = iVar9;
  *(int *)(param_1 + iVar5 * 0x14 + 0x14) = param_2[4];

  if ((char)*param_1 < '\b') {
    *param_1 = *param_1 + 1;
  }

  return iVar5;
}

void FUN_8005e2fc(undefined2 *param_1)

{
  int iVar1;
  int iVar2;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffff;

  FUN_8005dd68(param_1 + 0x68);
  FUN_8005dd68(param_1 + 0x72);

  iVar2 = 0;
  iVar1 = 8;

  do {

    FUN_8005dd68((int)param_1 + iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x14;
  } while (iVar2 < 10);

  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;

  return;
}

undefined4 FUN_8005e378(int param_1,int param_2)

{

  param_2 = param_2 - ((int)*(short *)(param_1 + 2) - (int)*(short *)(param_1 + 4));

  if (param_2 < 0) {
    return 0xffffffff;
  }

  if (param_2 < *(short *)(param_1 + 4)) {

    return *(undefined4 *)(param_2 * 0x14 + param_1 + 8);
  }

  return 0xffffffff;
}

void FUN_8005e3c4(int param_1,int param_2,undefined4 param_3,undefined2 param_4,int param_5)

{
  bool bVar1;
  short sVar2;
  undefined4 *puVar3, *puVar5;
  int iVar4;
  undefined4 uVar6, uVar7, uVar8;

  if (param_5 != 0) {
    param_3 = 0xffffffff;
  }

  if (*(short *)(param_1 + 2) != param_2) {

    *(undefined4 *)(param_1 + 0xe4) = param_3;
    *(undefined2 *)(param_1 + 0xf4) = param_4;

    sVar2 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar2;

    if (10 < sVar2) {

      puVar5 = (undefined4 *)(param_1 + 8);
      puVar3 = (undefined4 *)(param_1 + 0x1c);

      do {

        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        *puVar5 = *puVar3;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar3 = puVar3 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar3 != (undefined4 *)(param_1 + 0xcc));

      *puVar5 = *puVar3;
      *(undefined2 *)(param_1 + 4) = 10;
    }

    bVar1 = false;
    iVar4 = param_1 + (*(short *)(param_1 + 4) + -1) * 0x14;

    uVar6 = *(undefined4 *)(param_1 + 0xe8);
    uVar7 = *(undefined4 *)(param_1 + 0xec);
    uVar8 = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(iVar4 + 0xc) = uVar6;
    *(undefined4 *)(iVar4 + 0x10) = uVar7;
    *(undefined4 *)(iVar4 + 0x14) = uVar8;
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_1 + 0xf4);

    if (*(uint *)(param_1 + 0xe4) != 0xffffffff) {

      bVar1 = *(uint *)(param_1 + 0xe4) < *(uint *)(param_1 + 0xd0);
    }

    if (bVar1) {
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 2);
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xec);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xf4);
    }

    sVar2 = *(short *)(param_1 + 2) + 1;
    *(short *)(param_1 + 2) = sVar2;

    if (999 < sVar2) {
      *(undefined2 *)(param_1 + 2) = 999;
    }

    FUN_8005dd68(param_1 + 0xe4);
  }

  return;
}

void FUN_8005e548(int param_1,undefined4 param_2)

{

  FUN_8008ce30(param_1 + 0x10,0,0x10);

  FUN_8008cedc(param_1 + 0x10,param_2);

  return;
}

void FUN_8005e590(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  *(undefined4 *)(param_1 + 0x40) = param_2;

  uVar1 = FUN_80060eb4();

  puVar2 = (undefined4 *)FUN_80060e94(uVar1);

  FUN_8008ce30(param_1 + 0x20,0,0x20);

  FUN_8008cedc(param_1 + 0x20,*puVar2);

  return;
}

void FUN_8005e5f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = FUN_80083004(param_2);

  FUN_8005e590(param_1,uVar1);

  return;
}

void FUN_8005e624(int param_1)

{

  FUN_8008ce30(param_1,0,0xc);

  *(undefined4 *)(param_1 + 4) = 0xffffffff;

  return;
}

void FUN_8005e67c(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  iVar1 = param_1;

  do {
    iVar2 = iVar2 + 1;

    *(char *)(iVar1 + 0x88) = *(char *)(iVar1 + 0x88) + *(char *)(iVar1 + 0x8e);

    iVar1 = param_1 + iVar2;

  } while (iVar2 < 6);

  return;
}

void FUN_8005e6b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;

LAB_8005e6b4:

  if (5 < iVar5) {
    return;
  }

  for (iVar4 = 0; iVar1 = iVar5, iVar4 < iVar5; iVar4 = iVar4 + 1) {
    iVar2 = iVar5;

    if (*(char *)(param_1 + *(char *)(param_2 + iVar4) + 0x88) <
        *(char *)(param_1 + iVar5 + 0x88))
    goto LAB_8005e6fc;
  }
  goto LAB_8005e724;

LAB_8005e6fc:

  do {
    iVar3 = iVar2 + -1;

    *(undefined *)(param_2 + iVar2) = ((undefined *)(param_2 + iVar2))[-1];
    iVar1 = iVar4;
    iVar2 = iVar3;
  } while (iVar4 < iVar3);

LAB_8005e724:

  *(char *)(param_2 + iVar1) = (char)iVar5;

  iVar5 = iVar5 + 1;
  goto LAB_8005e6b4;
}

undefined4 * FUN_8005e764(void)

{
  int iVar1;

  iVar1 = FUN_80060eb4(DAT_801d589c);

  return &DAT_801c9af8 + iVar1 * 9;
}

void FUN_8005e7b0(int param_1,int param_2)

{

  param_2 = *(int *)(param_1 + 0x4014) + param_2;
  *(int *)(param_1 + 0x4014) = param_2;

  if (99999999 < param_2) {
    *(undefined4 *)(param_1 + 0x4014) = 99999999;
  }

  if (*(int *)(param_1 + 0x4014) < 0) {
    *(undefined4 *)(param_1 + 0x4014) = 0;
  }

  return;
}

undefined4 FUN_8005e7f0(short *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3, uVar4, uVar5;

  if (99 < *param_1) {
    return 0;
  }

  puVar1 = (undefined4 *)(param_1 + *param_1 * 0x52 + 2);

  puVar2 = param_2 + 0x28;

  do {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    param_2 = param_2 + 4;
    puVar1 = puVar1 + 4;
  } while (param_2 != puVar2);

  *puVar1 = *param_2;

  *param_1 = *param_1 + 1;

  return 1;
}

bool FUN_8005e874(int param_1,int param_2)

{
  int iVar1;

  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 7;
  }

  return ((uint)*(byte *)(param_1 + (param_2 >> 3) + 0x9a) &
         1 << (param_2 + (iVar1 >> 3) * -8 & 0x1fU)) != 0;
}

void FUN_8005e93c(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_298 [200];
  undefined auStack_1d0 [426];
  undefined local_26;
  byte local_25;

  FUN_8005f410(param_1,auStack_298);

  FUN_80077214(auStack_298,auStack_1d0);

  local_26 = 0;

  FUN_80074b38(auStack_1d0,(uint)local_25 * 10,param_2);

  return;
}

void FUN_8005e99c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined auStack_2a8 [40];
  int local_280, local_27c, local_278, local_274, local_270;
  undefined2 local_21c;
  undefined local_21a;
  undefined auStack_1e0 [42];
  undefined local_1b6;
  undefined local_36;
  byte local_35;

  uVar2 = (uint)*(ushort *)(param_1 + 0x7e);
  uVar1 = *(ushort *)(param_1 + 0x80);

  FUN_8005f410(param_1,auStack_2a8);

  local_280 = param_1 + uVar2 * 4 + 0xbd8;
  local_27c = param_1 + uVar2 * 0x40 + 0xc00;
  local_278 = param_1 + uVar2 * 8 + 0xe80;

  local_274 = param_1 + (uint)uVar1 * 4 + 0xf70;
  local_270 = param_1 + (uint)uVar1 * 0x40 + 0xf98;

  local_21c = *(undefined2 *)(param_1 + 0x7c);
  local_21a = *(undefined *)(param_1 + 0x7b);

  FUN_80077214(auStack_2a8,auStack_1e0);

  local_36 = 0;

  FUN_80074b38(auStack_1e0,(uint)local_35 * 10,param_2);

  FUN_80074e04(local_1b6,param_2,param_3,param_4);

  return;
}

bool FUN_8005eaa4(int param_1,int param_2)

{

  return *(char *)(param_1 + param_2 * 0x24 + 0x1238) != '\0';
}

void FUN_8005eac0(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4, iVar5;
  undefined2 local_20 [8];

  *(short *)(param_2 * 2 + param_1 + 0x17b0) = (short)param_3;

  switch(param_2) {

  case 0:
    uVar3 = 0x12;
    iVar5 = param_1 + param_3 * 0x4c + 0x988;
    *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + param_3 * 4 + 0xab8);
    goto LAB_8005ee30;

  case 1:
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + param_3 * 4 + 0xae0);
    break;
  case 2:
    uVar3 = 1;
    iVar5 = param_1 + param_3 * 0x10 + 0xae8;
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + param_3 * 4 + 0xb08);
    goto LAB_8005ee30;
  case 3:
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + param_3 * 4 + 0xbb0);
    break;
  case 4:
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + param_3 * 4 + 0xf48);
    break;
  case 5:
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + param_3 * 4 + 0x688);
    break;

  case 6:
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + param_3 * 4 + 0x12a8);
    FUN_80076240(0x11,param_1 + param_3 * 0x24 + 0x1218,param_1);

    iVar5 = FUN_8005eaa4(param_1,param_3);
    if (iVar5 != 0) {

      FUN_8005e93c(param_1,local_20);
      iVar4 = 0;
      puVar2 = local_20;
      iVar5 = param_1;
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + 1;
        *(undefined2 *)(iVar5 + 0x3c) = uVar1;
        iVar5 = iVar5 + 2;
      } while (iVar4 < 8);

      *(undefined *)(param_1 + 0x7b) = *(undefined *)(param_1 + 0x4e);
      *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x4c);
      *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x17b6);
      *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_1 + 0x17b8);
    }
    break;

  case 7:
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + param_3 * 4 + 0x12f8);
    break;
  case 8:
    *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1338);
    break;
  case 9:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1360);
    break;
  case 10:
    *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1380);
    break;
  case 0xb:
    *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_1 + param_3 * 4 + 0x13a0);
    break;
  case 0xc:
    *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_1 + param_3 * 4 + 0x13c0);
    break;

  case 0xd:
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + 0x148c);
    FUN_80076240(0xc,param_1 + 0x1428,param_1);

    *(undefined2 *)(param_1 + 0x17ce) = 0;
    *(undefined2 *)(param_1 + 0x17d0) = 0;
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x14c4);
    *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_1 + param_3 * 4 + 0x13f8);
    break;

  case 0xe:
    *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1420);
    break;

  case 0xf:
    uVar3 = 0xc;
    iVar5 = param_1 + param_3 * 0x14 + 0x1428;
    *(undefined2 *)(param_1 + 0x17ca) = 0;
    *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_1 + 0x13f8);
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + param_3 * 4 + 0x148c);
    goto LAB_8005ee30;

  case 0x10:
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + param_3 * 4 + 0x14c4);
    break;
  case 0x11:
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1500);
    break;
  case 0x12:
    *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1540);
    break;
  case 0x13:
    uVar3 = 5;
    iVar5 = param_1 + param_3 * 0x1c + 0x1550;
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_1 + param_3 * 4 + 0x15dc);
    goto LAB_8005ee30;
  case 0x14:
    uVar3 = 0x1b;
    iVar5 = param_1 + param_3 * 0x10 + 0x15f0;
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1610);
    goto LAB_8005ee30;
  case 0x15:
    uVar3 = 0x1c;
    iVar5 = param_1 + param_3 * 0x10 + 0x1618;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1638);
    goto LAB_8005ee30;
  case 0x16:
    uVar3 = 0x15;
    iVar5 = param_1 + param_3 * 0x20 + 0x1640;
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + param_3 * 4 + 0x1700);

LAB_8005ee30:

    FUN_80076240(uVar3,iVar5);
    break;

  default:
    return;
  }

  return;
}

undefined4 FUN_8005ee4c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{

  switch(param_2) {

  case 0:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0xab8);
  case 1:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0xae0);
  case 2:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0xb08);
  case 3:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0xbb0);
  case 4:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0xf48);
  case 5:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x688);
  case 6:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x12a8);
  case 7:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x12f8);
  case 8:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1338);
  case 9:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1360);
  case 10:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1380);
  case 0xb:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x13a0);
  case 0xc:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x13c0);
  case 0xd:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x13f8);
  case 0xe:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1420);
  case 0xf:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x148c);
  case 0x10:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x14c4);
  case 0x11:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1500);
  case 0x12:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1540);
  case 0x13:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x15dc);
  case 0x14:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1610);
  case 0x15:
    return *(undefined4 *)(param_1 + param_3 * 4 + 0x1638);
  case 0x16:
    param_4 = *(undefined4 *)(param_1 + param_3 * 4 + 0x1700);
    break;

  }

  return param_4;
}

void FUN_8005f044(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 local_28 [8];

  FUN_8005f410();

  switch(param_3) {

  case 0:
    puVar5 = (undefined *)(param_1 + param_4 * 0x4c + 0x988);
    *(undefined **)(param_2 + 0x20) = puVar5;
    uVar3 = 0x12;
    break;

  case 1:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0xac8);
    *(undefined **)(param_2 + 4) = puVar5;
    uVar3 = 0;
    break;

  case 2:
    puVar5 = (undefined *)(param_1 + param_4 * 0x10 + 0xae8);
    *(undefined **)(param_2 + 8) = puVar5;
    uVar3 = 1;
    break;

  case 3:
    *(int *)(param_2 + 0x28) = param_1 + param_4 * 4 + 0xbd8;
    *(int *)(param_2 + 0x2c) = param_1 + param_4 * 0x40 + 0xc00;
    *(int *)(param_2 + 0x30) = param_1 + param_4 * 8 + 0xe80;
    return;

  case 4:
    *(int *)(param_2 + 0x34) = param_1 + param_4 * 4 + 0xf70;
    *(int *)(param_2 + 0x38) = param_1 + param_4 * 0x40 + 0xf98;
    return;

  case 6:
    iVar4 = param_1 + param_4 * 0x24 + 0x1218;
    *(int *)(param_2 + 0x1c) = iVar4;
    FUN_80076300(0x11,iVar4,param_2);

    iVar4 = FUN_8005eaa4(param_1,param_4);
    if (iVar4 == 0) {
      return;
    }

    FUN_8005e93c(param_1,local_28);
    iVar4 = 0;
    puVar2 = local_28;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(param_2 + 0x7c) = uVar1;
      param_2 = param_2 + 2;
    } while (iVar4 < 8);
    return;

  case 7:
    puVar5 = (undefined *)(param_1 + param_4 * 0x10 + 0x12b8);
    *(undefined **)(param_2 + 0x60) = puVar5;
    uVar3 = 0xf;
    break;
  case 8:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x1308);
    *(undefined **)(param_2 + 0x5c) = puVar5;
    uVar3 = 0xe;
    break;
  case 9:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x1348);
    *(undefined **)(param_2 + 100) = puVar5;
    uVar3 = 0x10;
    break;
  case 10:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x1368);
    *(undefined **)(param_2 + 0x50) = puVar5;
    uVar3 = 10;
    break;
  case 0xb:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 5000);
    *(undefined **)(param_2 + 0x44) = puVar5;
    uVar3 = 7;
    break;
  case 0xc:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x13a8);
    *(undefined **)(param_2 + 0x48) = puVar5;
    uVar3 = 8;
    break;

  case 0xd:
    iVar4 = param_1 + param_4 * 0xc + 0x13c8;
    *(int *)(param_2 + 0x54) = iVar4;
    FUN_80076300(0xb,iVar4,param_2);
    *(int *)(param_2 + 0x58) = param_1 + 0x1428;
    FUN_80076300(0xc,param_1 + 0x1428,param_2);
    uVar3 = 0x13;
    puVar5 = &DAT_000014a0 + param_1;
    *(undefined **)(param_2 + 0x6c) = puVar5;
    break;

  case 0xe:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x1408);
    *(undefined **)(param_2 + 0x4c) = puVar5;
    uVar3 = 9;
    break;

  case 0xf:
    iVar4 = param_1 + param_4 * 0x14 + 0x1428;
    *(int *)(param_2 + 0x58) = iVar4;
    FUN_80076300(0xc,iVar4,param_2);
    uVar3 = 0x15;
    puVar5 = (undefined *)(param_1 + 0x1640);
    *(int *)(param_2 + 0x54) = param_1 + 0x13c8;
    break;

  case 0x10:
    puVar5 = &DAT_000014a0 + param_1 + param_4 * 0xc;
    *(undefined **)(param_2 + 0x6c) = puVar5;
    uVar3 = 0x13;
    break;
  case 0x11:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x14d0);
    *(undefined **)(param_2 + 0x68) = puVar5;
    uVar3 = 0x14;
    break;
  case 0x12:
    puVar5 = (undefined *)(param_1 + param_4 * 0xc + 0x1510);
    *(undefined **)(param_2 + 0x3c) = puVar5;
    uVar3 = 4;
    break;
  case 0x13:
    puVar5 = (undefined *)(param_1 + param_4 * 0x1c + 0x1550);
    *(undefined **)(param_2 + 0x40) = puVar5;
    uVar3 = 5;
    break;
  case 0x14:
    puVar5 = (undefined *)(param_1 + param_4 * 0x10 + 0x15f0);
    *(undefined **)(param_2 + 0x70) = puVar5;
    uVar3 = 0x1b;
    break;
  case 0x15:
    puVar5 = (undefined *)(param_1 + param_4 * 0x10 + 0x1618);
    *(undefined **)(param_2 + 0x74) = puVar5;
    uVar3 = 0x1c;
    break;
  case 0x16:
    puVar5 = (undefined *)(param_1 + param_4 * 0x20 + 0x1640);
    *(undefined **)(param_2 + 0x24) = puVar5;
    uVar3 = 0x15;
    break;

  default:
    goto switchD_8005f094_caseD_ffffffff;
  }

  FUN_80076300(uVar3,puVar5,param_2);

switchD_8005f094_caseD_ffffffff:
  return;
}

void FUN_8005f410(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  FUN_800763c0(param_2,param_1);

  *(int *)(param_2 + 0x20) = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
  *(int *)(param_2 + 4) = param_1 + *(short *)(param_1 + 0x17b2) * 0xc + 0xac8;
  *(int *)(param_2 + 8) = param_1 + *(short *)(param_1 + 0x17b4) * 0x10 + 0xae8;
  *(int *)(param_2 + 0x1c) = param_1 + *(short *)(param_1 + 0x17bc) * 0x24 + 0x1218;

  *(int *)(param_2 + 0x60) = param_1 + *(short *)(param_1 + 0x17be) * 0x10 + 0x12b8;
  *(int *)(param_2 + 0x5c) = param_1 + *(short *)(param_1 + 0x17c0) * 0xc + 0x1308;
  *(int *)(param_2 + 100) = param_1 + *(short *)(param_1 + 0x17c2) * 0xc + 0x1348;
  *(int *)(param_2 + 0x50) = param_1 + *(short *)(param_1 + 0x17c4) * 0xc + 0x1368;
  *(int *)(param_2 + 0x44) = param_1 + *(short *)(param_1 + 0x17c6) * 0xc + 5000;
  *(int *)(param_2 + 0x48) = param_1 + *(short *)(param_1 + 0x17c8) * 0xc + 0x13a8;
  *(int *)(param_2 + 0x54) = param_1 + *(short *)(param_1 + 0x17ca) * 0xc + 0x13c8;

  *(int *)(param_2 + 0x4c) = param_1 + *(short *)(&DAT_000017cc + param_1) * 0xc + 0x1408;
  *(int *)(param_2 + 0x58) = param_1 + *(short *)(param_1 + 0x17ce) * 0x14 + 0x1428;
  *(undefined **)(param_2 + 0x6c) = &DAT_000014a0 + param_1 + *(short *)(param_1 + 0x17d0) * 0xc;
  *(int *)(param_2 + 0x68) = param_1 + *(short *)(param_1 + 0x17d2) * 0xc + 0x14d0;
  *(int *)(param_2 + 0x3c) = param_1 + *(short *)(param_1 + 0x17d4) * 0xc + 0x1510;
  *(int *)(param_2 + 0x40) = param_1 + *(short *)(param_1 + 0x17d6) * 0x1c + 0x1550;
  *(int *)(param_2 + 0x70) = param_1 + *(short *)(param_1 + 0x17d8) * 0x10 + 0x15f0;
  *(int *)(param_2 + 0x74) = param_1 + *(short *)(param_1 + 0x17da) * 0x10 + 0x1618;
  *(int *)(param_2 + 0x24) = param_1 + *(short *)(param_1 + 0x17dc) * 0x20 + 0x1640;

  *(int *)(param_2 + 0xc) = param_1 + *(short *)(param_1 + 0x17de) * 0x18 + 0x1718;
  *(int *)(param_2 + 0x10) = param_1 + *(short *)(param_1 + 0x17e0) * 0x14 + 0x1734;
  *(int *)(param_2 + 0x14) = param_1 + *(short *)(param_1 + 0x17e2) * 0x4c + 0x174c;
  *(int *)(param_2 + 0x18) = param_1 + *(short *)(param_1 + 0x17e4) * 0x10 + 0x179c;

  iVar2 = (int)*(short *)(param_1 + 0x17b6);
  *(int *)(param_2 + 0x28) = param_1 + iVar2 * 4 + 0xbd8;
  *(int *)(param_2 + 0x2c) = param_1 + iVar2 * 0x40 + 0xc00;
  *(int *)(param_2 + 0x30) = param_1 + iVar2 * 8 + 0xe80;

  sVar1 = *(short *)(param_1 + 0x17b8);
  *(int *)(param_2 + 0x34) = param_1 + sVar1 * 4 + 0xf70;
  *(int *)(param_2 + 0x38) = param_1 + sVar1 * 0x40 + 0xf98;

  return;
}

undefined4 FUN_8005f790(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  iVar1 = 1;
  param_1 = param_1 + 4;

  do {

    if (-1 < *(int *)(param_1 + 0x13f8)) {
      uVar2 = 1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);

  return uVar2;
}

undefined4 FUN_8005f7c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  iVar1 = 1;
  param_1 = param_1 + 4;

  do {

    if (-1 < *(int *)(param_1 + 0x148c)) {
      uVar2 = 1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 5);

  return uVar2;
}

bool FUN_8005f800(int param_1)

{
  return *(short *)(param_1 + 0x17b0) == 3;
}

bool FUN_8005f814(int param_1)

{
  return 0 < *(short *)(param_1 + 0x17b4);
}

bool FUN_8005f820(int param_1)

{
  return *(short *)(param_1 + 0x17bc) == 3;
}

undefined FUN_8005f834(int param_1)

{

  return *(undefined *)(param_1 + *(short *)(param_1 + 0x17bc) * 0x24 + 0x1221);
}

bool FUN_8005f88c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined auStack_48 [64];

  iVar2 = FUN_8005fc9c(param_1,10,auStack_48);
  bVar1 = true;

  if (iVar2 < 1) {

    iVar2 = FUN_8005fc9c(param_1,0xb,auStack_48);

    if (iVar2 < 1) {

      iVar2 = FUN_8005fc9c(param_1,0xc,auStack_48);
      bVar1 = 0 < iVar2;
    }
    else {
      bVar1 = true;
    }
  }

  return bVar1;
}

bool FUN_8005f8f0(int param_1)

{
  return *(short *)(param_1 + 0x17dc) == 5;
}

bool FUN_8005f904(int param_1)

{
  return *(short *)(param_1 + 0x17d8) == 1;
}

bool FUN_8005f918(int param_1)

{
  return *(short *)(param_1 + 0x17da) == 1;
}

bool FUN_8005f92c(int param_1)

{

  return *(char *)(param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x9d3) == '\0';
}

void FUN_8005f958(undefined4 param_1,undefined2 *param_2)

{
  undefined auStack_d8 [200];

  FUN_8005f410(param_1,auStack_d8);

  FUN_80077214(auStack_d8,0x1f800000);

  FUN_80075930(0x1f800000,&DAT_1f8001c0);

  param_2[1] = DAT_1f8001c0;
  param_2[2] = DAT_1f8001c4;
  *param_2 = DAT_1f800058._2_2_;
  *(undefined *)(param_2 + 3) = DAT_1f800088._2_1_;

  return;
}

void FUN_8005f9dc(int param_1,undefined4 param_2,undefined2 *param_3,int param_4)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  int iVar4, iVar5;
  undefined2 local_20 [8];

  switch(param_2) {

  case 0:
    *(char *)(param_1 + 0x60) = *(char *)param_3;
    *(char *)(param_1 + 0x61) = *(char *)(param_3 + 4);
    break;
  case 1:
    *(char *)(param_1 + 0x5c) = *(char *)param_3;
    *(char *)(param_1 + 0x5d) = *(char *)(param_3 + 4);
    break;

  case 2:
    iVar4 = FUN_8005f800(param_1);
    if (iVar4 != 1) {

      *(char *)(param_1 + 0x66) = *(char *)param_3;
      *(char *)(param_1 + 0x6a) = *(char *)(param_3 + 4);
      *(char *)(param_1 + 0x67) = *(char *)param_3;
      *(char *)(param_1 + 0x6b) = *(char *)(param_3 + 4);
    }

    *(char *)(param_1 + 100) = *(char *)param_3;
    *(char *)(param_1 + 0x68) = *(char *)(param_3 + 4);
    *(char *)(param_1 + 0x65) = *(char *)param_3;
    *(char *)(param_1 + 0x69) = *(char *)(param_3 + 4);
    break;

  case 3:
    *(char *)(param_1 + 0x66) = *(char *)param_3;
    *(char *)(param_1 + 0x6a) = *(char *)(param_3 + 4);
    *(char *)(param_1 + 0x67) = *(char *)param_3;
    *(char *)(param_1 + 0x6b) = *(char *)(param_3 + 4);
    break;
  case 4:
    *(char *)(param_1 + 0x5a) = *(char *)param_3;
    *(char *)(param_1 + 0x5b) = *(char *)(param_3 + 4);
    break;
  case 5:

    *(char *)(param_1 + 0x5e) = *(char *)param_3 + -0x80;
    *(char *)(param_1 + 0x5f) = *(char *)(param_3 + 4) + -0x80;
    break;
  case 6:
    *(char *)(param_1 + 0x6c) = *(char *)param_3;
    *(char *)(param_1 + 0x6d) = *(char *)(param_3 + 4);
    break;
  case 7:
    *(char *)(param_1 + 0x50) = *(char *)param_3;
    *(char *)(param_1 + 0x51) = *(char *)(param_3 + 4);
    break;

  case 8:
    iVar4 = 0;
    while( true ) {
      iVar5 = FUN_8005f834(param_1);
      bVar2 = iVar5 <= iVar4;
      iVar4 = iVar4 + 1;
      if (bVar2) break;
      uVar1 = *param_3;
      param_3 = param_3 + 4;
      *(undefined2 *)(param_1 + iVar4 * 2 + 0x3c) = uVar1;
    }
    *(undefined2 *)(param_1 + 0x4c) = *param_3;
    break;

  case 9:
    *(char *)(param_1 + 0x4e) = *(char *)param_3;
    iVar4 = FUN_8005eaa4(param_1,(int)*(short *)(param_1 + 0x17bc));
    if (iVar4 != 0) {

      FUN_8005e93c(param_1,local_20);

      iVar5 = 0;
      puVar3 = local_20;
      iVar4 = param_1;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        *(undefined2 *)(iVar4 + 0x3c) = uVar1;
        iVar4 = iVar4 + 2;
      } while (iVar5 < 8);

      *(undefined *)(param_1 + 0x7b) = *(undefined *)(param_1 + 0x4e);
      *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x4c);
      *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x17b6);
      *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_1 + 0x17b8);
    }
    break;

  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    iVar4 = 0;
    if (0 < param_4) {
      do {
        iVar4 = iVar4 + 1;

        *(char *)(param_1 + *(int *)(&DAT_800915a0 + (short)param_3[3] * 4)) = *(char *)param_3;
        param_3 = param_3 + 4;
      } while (iVar4 < param_4);
    }
    break;

  case 0xe:
    *(char *)(param_1 + 0x74) = *(char *)param_3;
    break;
  case 0xf:
    *(char *)(param_1 + 0x75) = *(char *)param_3;
    break;
  case 0x10:
    *(char *)(param_1 + 0x52) = *(char *)param_3;
    *(char *)(param_1 + 0x53) = *(char *)(param_3 + 4);
    break;

  }
  return;
}

int FUN_8005fc9c(int param_1,int param_2,ushort *param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5, iVar6, iVar8, iVar9;
  ushort *puVar7;
  undefined auStack_50 [16];
  ushort auStack_40 [8];
  ushort auStack_30 [8];

  iVar5 = -1;

  switch(param_2) {

  case 0:
    sVar2 = *(short *)(param_1 + 0x17b0);
    if (sVar2 < 3) {
      return -1;
    }

    *param_3 = (ushort)*(byte *)(param_1 + 0x60);
    iVar5 = param_1 + sVar2 * 0x4c + 0x988;
    param_3[2] = (ushort)*(byte *)(iVar5 + 0x1e);
    param_3[1] = (ushort)*(byte *)(iVar5 + 0x1d);
    param_3[4] = (ushort)*(byte *)(param_1 + 0x61);
    param_3[6] = (ushort)*(byte *)(iVar5 + 0x21);
    uVar4 = (ushort)*(byte *)(iVar5 + 0x20);
    goto LAB_8005ff0c;

  case 1:
    sVar2 = *(short *)(param_1 + 0x17b0);
    if (sVar2 < 2) {
      return -1;
    }
    *param_3 = (ushort)*(byte *)(param_1 + 0x5c);
    iVar5 = param_1 + sVar2 * 0x4c + 0x988;
    param_3[2] = (ushort)*(byte *)(iVar5 + 0x14);
    param_3[1] = (ushort)*(byte *)(iVar5 + 0x13);
    param_3[4] = (ushort)*(byte *)(param_1 + 0x5d);
    param_3[6] = (ushort)*(byte *)(iVar5 + 0x17);
    uVar4 = (ushort)*(byte *)(iVar5 + 0x16);
    goto LAB_8005ff0c;

  case 2:
    sVar2 = *(short *)(param_1 + 0x17b0);
    if (sVar2 < 1) {
      return -1;
    }
    *param_3 = (ushort)*(byte *)(param_1 + 100);
    iVar5 = param_1 + sVar2 * 0x4c + 0x988;
    bVar1 = *(byte *)(iVar5 + 0x27);
    param_3[1] = 1;
    param_3[2] = (ushort)bVar1;
    param_3[4] = (ushort)*(byte *)(param_1 + 0x68);
    uVar4 = (ushort)*(byte *)(iVar5 + 0x35);
    goto LAB_8006004c;

  case 3:
    iVar5 = FUN_8005f800(param_1);
    if (iVar5 == 0) {
      return -1;
    }
    sVar2 = *(short *)(param_1 + 0x17b0);
    *param_3 = (ushort)*(byte *)(param_1 + 0x66);
    iVar5 = param_1 + sVar2 * 0x4c + 0x988;
    bVar1 = *(byte *)(iVar5 + 0x2e);
    param_3[1] = 1;
    param_3[2] = (ushort)bVar1;
    param_3[4] = (ushort)*(byte *)(param_1 + 0x6a);
    uVar4 = (ushort)*(byte *)(iVar5 + 0x3c);
    goto LAB_8006004c;

  case 4:
    sVar2 = *(short *)(param_1 + 0x17b0);
    if (sVar2 < 1) {
      return -1;
    }
    *param_3 = (ushort)*(byte *)(param_1 + 0x5a);
    iVar5 = param_1 + sVar2 * 0x4c + 0x988;
    param_3[2] = (ushort)*(byte *)(iVar5 + 10);
    param_3[1] = (ushort)*(byte *)(iVar5 + 9);
    param_3[4] = (ushort)*(byte *)(param_1 + 0x5b);
    param_3[6] = (ushort)*(byte *)(iVar5 + 0xd);
    uVar4 = (ushort)*(byte *)(iVar5 + 0xc);

LAB_8005ff0c:

    iVar5 = 2;
    param_3[5] = uVar4;
    break;
  case 5:
    iVar5 = -1;
    if (2 < *(short *)(param_1 + 0x17b0)) {

      iVar8 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;

      *param_3 = *(byte *)(param_1 + 0x5e) - 0x80;
      param_3[2] = *(byte *)(iVar8 + 0x10) - 0x80;
      param_3[1] = *(byte *)(iVar8 + 0xf) - 0x80;
      param_3[4] = *(byte *)(param_1 + 0x5f) - 0x80;
      param_3[6] = *(byte *)(iVar8 + 0x12) - 0x80;
      param_3[5] = *(byte *)(iVar8 + 0x11) - 0x80;

      iVar5 = 2;
    }
    break;
  case 6:
    sVar2 = *(short *)(param_1 + 0x17b0);
    if (sVar2 < 3) {
      return -1;
    }

    *param_3 = (ushort)*(byte *)(param_1 + 0x6c);
    iVar5 = param_1 + sVar2 * 0x4c + 0x988;
    bVar1 = *(byte *)(iVar5 + 0x43);
    param_3[1] = 1;
    param_3[2] = (ushort)bVar1;
    param_3[4] = (ushort)*(byte *)(param_1 + 0x6d);
    uVar4 = (ushort)*(byte *)(iVar5 + 0x47);
    goto LAB_8006004c;
  case 7:
    if (*(short *)(param_1 + 0x17b4) < 1) {
      return -1;
    }

    iVar5 = param_1 + *(short *)(param_1 + 0x17b4) * 0x10 + 0xae8;
    *param_3 = (ushort)*(byte *)(param_1 + 0x50);
    bVar1 = *(byte *)(iVar5 + 9);
    param_3[1] = 1;
    param_3[2] = (ushort)bVar1;
    param_3[4] = (ushort)*(byte *)(param_1 + 0x51);
    uVar4 = (ushort)*(byte *)(iVar5 + 0xd);

LAB_8006004c:
    iVar5 = 2;
    param_3[5] = 1;
    param_3[6] = uVar4;
    break;
  case 8:
    iVar5 = -1;
    if (2 < *(short *)(param_1 + 0x17bc)) {

      iVar8 = param_1 + *(short *)(param_1 + 0x17bc) * 0x24 + 0x1218;

      FUN_8005e99c(param_1,auStack_50,auStack_40,auStack_30);

      iVar5 = 0;
      puVar7 = param_3 + 1;

      while( true ) {
        iVar9 = FUN_8005f834(param_1);
        bVar3 = iVar9 <= iVar5;
        iVar5 = iVar5 + 1;
        if (bVar3) break;

        *param_3 = *(ushort *)(param_1 + iVar5 * 2 + 0x3c);
        puVar7[1] = auStack_30[iVar5];
        *puVar7 = auStack_40[iVar5];

        if ((short)puVar7[1] < (short)*param_3) {
          puVar7[1] = *param_3;
        }
        if ((short)*param_3 < (short)*puVar7) {
          *puVar7 = *param_3;
        }

        puVar7 = puVar7 + 4;
        param_3 = param_3 + 4;
      }

      *param_3 = *(ushort *)(param_1 + 0x4c);
      param_3[2] = *(ushort *)(iVar8 + 0x1c);
      param_3[1] = *(ushort *)(iVar8 + 0x1e);

      iVar5 = FUN_8005f834(param_1);
      iVar5 = iVar5 + 1;
    }
    break;
  case 9:
    sVar2 = *(short *)(param_1 + 0x17bc);
    if (sVar2 < 3) {
      return -1;
    }

    *param_3 = (ushort)*(byte *)(param_1 + 0x4e);
    param_1 = param_1 + sVar2 * 0x24 + 0x1218;
    param_3[2] = (ushort)*(byte *)(param_1 + 0x23);
    uVar4 = (ushort)*(byte *)(param_1 + 0x22);
    goto LAB_800602b4;
  case 10:
  case 0xb:
  case 0xc:

    iVar5 = 0;
    iVar8 = 0;
    puVar7 = param_3 + 1;

    iVar9 = param_1 + *(short *)(param_1 + 0x17dc) * 0x20 + 0x1640;

    do {

      iVar6 = iVar8 + (param_2 + -10) * 2;

      *param_3 = (ushort)*(byte *)(param_1 + *(int *)(&DAT_800915a0 + iVar6 * 4));
      puVar7[1] = (ushort)*(byte *)(iVar9 + *(int *)(&LAB_800915be_2 + iVar6 * 0xc));
      *puVar7 = (ushort)*(byte *)(iVar9 + *(int *)(&DAT_800915bc + iVar6 * 0xc));
      puVar7[2] = *(ushort *)(&LAB_800915fe_2 + iVar6 * 2);

      if ((short)*puVar7 < (short)puVar7[1]) {
        puVar7 = puVar7 + 4;
        param_3 = param_3 + 4;
        iVar5 = iVar5 + 1;
      }

      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);

    if (iVar5 < 1) {
      iVar5 = -1;
    }
    break;
  case 0xd:
    sVar2 = *(short *)(param_1 + 0x17dc);
    iVar5 = -1;
    if (4 < sVar2) {

      *param_3 = (ushort)*(byte *)(param_1 + 0x6f);
      param_1 = param_1 + sVar2 * 0x20 + 0x1640;
      param_3[2] = (ushort)*(byte *)(param_1 + 0x19);
      bVar1 = *(byte *)(param_1 + 0x18);
      param_3[3] = 1;
      param_3[1] = (ushort)bVar1;

      iVar5 = 1;
    }
    break;
  case 0xe:
    sVar2 = *(short *)(param_1 + 0x17d8);
    if (sVar2 < 1) {
      return -1;
    }

    *param_3 = (ushort)*(byte *)(param_1 + 0x74);
    param_1 = param_1 + sVar2 * 0x10 + 0x15f0;
    param_3[2] = (ushort)*(byte *)(param_1 + 0xd);
    uVar4 = (ushort)*(byte *)(param_1 + 0xc);
    goto LAB_800602b4;
  case 0xf:
    sVar2 = *(short *)(param_1 + 0x17da);
    if (sVar2 < 1) {
      return -1;
    }

    *param_3 = (ushort)*(byte *)(param_1 + 0x75);
    param_1 = param_1 + sVar2 * 0x10 + 0x1618;
    param_3[2] = (ushort)*(byte *)(param_1 + 0xe);
    uVar4 = (ushort)*(byte *)(param_1 + 0xd);

LAB_800602b4:
    iVar5 = 1;
    param_3[1] = uVar4;
    break;
  case 0x10:
    sVar2 = *(short *)(param_1 + 0x17d6);
    iVar5 = -1;
    if (0 < sVar2) {

      *param_3 = (ushort)*(byte *)(param_1 + 0x52);

      iVar5 = param_1 + sVar2 * 0x1c + 0x1550;
      param_3[2] = (ushort)*(byte *)(iVar5 + 0x11);
      param_3[1] = (ushort)*(byte *)(iVar5 + 0x10);
      param_3[4] = (ushort)*(byte *)(param_1 + 0x53);
      param_3[6] = (ushort)*(byte *)(iVar5 + 0x14);
      param_3[5] = (ushort)*(byte *)(iVar5 + 0x13);

      iVar5 = -1;
      if ((short)param_3[1] < (short)param_3[2]) {
        iVar5 = 2;
      }
    }
  }

  return iVar5;
}

void FUN_80060410(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 local_40 [8];
  undefined auStack_30 [16];
  undefined auStack_20 [16];

  switch(param_2) {

  case 0:

    iVar3 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
    *(undefined *)(param_1 + 0x60) = *(undefined *)(iVar3 + 0x1f);
    *(undefined *)(param_1 + 0x61) = *(undefined *)(iVar3 + 0x22);
    break;

  case 1:
    iVar3 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
    *(undefined *)(param_1 + 0x5c) = *(undefined *)(iVar3 + 0x15);
    *(undefined *)(param_1 + 0x5d) = *(undefined *)(iVar3 + 0x18);
    break;

  case 2:
    iVar5 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
    *(undefined *)(param_1 + 100) = *(undefined *)(iVar5 + 0x2a);
    *(undefined *)(param_1 + 0x65) = *(undefined *)(iVar5 + 0x2d);
    *(undefined *)(param_1 + 0x68) = *(undefined *)(iVar5 + 0x38);
    *(undefined *)(param_1 + 0x69) = *(undefined *)(iVar5 + 0x3b);

    iVar3 = FUN_8005f800(param_1);
    if (iVar3 != 1) {
      *(undefined *)(param_1 + 0x66) = *(undefined *)(iVar5 + 0x31);
      *(undefined *)(param_1 + 0x67) = *(undefined *)(iVar5 + 0x34);
      *(undefined *)(param_1 + 0x6a) = *(undefined *)(iVar5 + 0x3f);
      *(undefined *)(param_1 + 0x6b) = *(undefined *)(iVar5 + 0x42);
    }
    break;

  case 3:

    iVar3 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
    *(undefined *)(param_1 + 0x66) = *(undefined *)(iVar3 + 0x31);
    *(undefined *)(param_1 + 0x67) = *(undefined *)(iVar3 + 0x34);
    *(undefined *)(param_1 + 0x6a) = *(undefined *)(iVar3 + 0x3f);
    *(undefined *)(param_1 + 0x6b) = *(undefined *)(iVar3 + 0x42);
    break;

  case 4:
    iVar3 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
    *(undefined *)(param_1 + 0x5a) = *(undefined *)(iVar3 + 0xb);
    *(undefined *)(param_1 + 0x5b) = *(undefined *)(iVar3 + 0xe);
    break;

  case 5:
    *(undefined *)(param_1 + 0x5e) = 0x80;
    *(undefined *)(param_1 + 0x5f) = 0x80;
    break;

  case 6:
    iVar3 = param_1 + *(short *)(param_1 + 0x17b0) * 0x4c + 0x988;
    *(undefined *)(param_1 + 0x6c) = *(undefined *)(iVar3 + 0x46);
    *(undefined *)(param_1 + 0x6d) = *(undefined *)(iVar3 + 0x4a);
    break;

  case 7:

    iVar3 = param_1 + *(short *)(param_1 + 0x17b4) * 0x10 + 0xae8;
    *(undefined *)(param_1 + 0x50) = *(undefined *)(iVar3 + 0xc);
    *(undefined *)(param_1 + 0x51) = *(undefined *)(iVar3 + 0xc);
    break;

  case 8:

    iVar5 = param_1 + *(short *)(param_1 + 0x17bc) * 0x24 + 0x1218;
    *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(iVar5 + 0x1a);

    iVar3 = 0;
    while( true ) {
      iVar2 = FUN_8005f834(param_1);
      if (iVar2 <= iVar3) break;

      *(undefined2 *)(param_1 + (iVar3 + 1) * 2 + 0x3c) = *(undefined2 *)(iVar3 * 2 + iVar5 + 0xc);
      iVar3 = iVar3 + 1;
    }

    iVar3 = FUN_8005eaa4(param_1,(int)*(short *)(param_1 + 0x17bc));
    if (iVar3 != 0) {

      FUN_8005e99c(param_1,local_40,auStack_30,auStack_20);

      iVar3 = 0;
      puVar4 = local_40;
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
        *(undefined2 *)(param_1 + 0x3c) = uVar1;
        param_1 = param_1 + 2;
      } while (iVar3 < 8);
    }
    break;

  case 9:

    *(undefined *)(param_1 + 0x4e) =
         *(undefined *)(*(short *)(param_1 + 0x17bc) * 0x24 + param_1 + 0x1239);
    break;

  case 10:
  case 0xd:

    iVar3 = param_1 + *(short *)(param_1 + 0x17dc) * 0x20 + 0x1640;
    *(undefined *)(param_1 + 0x6e) = *(undefined *)(iVar3 + 0xd);
    *(undefined *)(param_1 + 0x6f) = *(undefined *)(iVar3 + 0x17);
    break;

  case 0xb:
    iVar3 = param_1 + *(short *)(param_1 + 0x17dc) * 0x20 + 0x1640;
    *(undefined *)(param_1 + 0x70) = *(undefined *)(iVar3 + 0x10);
    *(undefined *)(param_1 + 0x71) = *(undefined *)(iVar3 + 0x1a);
    break;

  case 0xc:
    iVar3 = param_1 + *(short *)(param_1 + 0x17dc) * 0x20 + 0x1640;
    *(undefined *)(param_1 + 0x72) = *(undefined *)(iVar3 + 0x13);
    *(undefined *)(param_1 + 0x73) = *(undefined *)(iVar3 + 0x1d);
    break;

  case 0xe:

    *(undefined *)(param_1 + 0x74) =
         *(undefined *)(*(short *)(param_1 + 0x17d8) * 0x10 + param_1 + 0x15fb);
    break;

  case 0xf:

    *(undefined *)(param_1 + 0x75) =
         *(undefined *)(*(short *)(param_1 + 0x17da) * 0x10 + param_1 + 0x1624);
    break;

  case 0x10:

    iVar3 = param_1 + *(short *)(param_1 + 0x17d6) * 0x1c + 0x1550;
    *(undefined *)(param_1 + 0x52) = *(undefined *)(iVar3 + 0x12);
    *(undefined *)(param_1 + 0x53) = *(undefined *)(iVar3 + 0x15);
  }
  return;
}

void FUN_80060840(int param_1)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = (&DAT_8009160d)[param_1 * 2];

  if ((&DAT_8009160c)[param_1 * 2] == cVar1) {

    uVar2 = 0x40;
  }
  else {

    FUN_80078900(&DAT_801e2ce0,
                 (&DAT_8009160c)[param_1 * 2],
                 0,
                 0x4000,
                 0xffffffff);

    uVar2 = 0x7f;
  }

  FUN_80078900(&DAT_801e2ce0,
               cVar1,
               uVar2,
               0x4000,
               0xffffffff);

  return;
}

int FUN_800608e8(uint param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;

  iVar3 = 4;

  do {
    uVar1 = param_1 & 0x3f;
    param_1 = param_1 >> 6;
    pcVar2 = (char *)(param_2 + iVar3);
    iVar3 = iVar3 + -1;

    *pcVar2 = "-0123456789abcdefghijklmnopqrstuvwxyz"[uVar1];

  } while (iVar3 != -1);

  *(undefined *)(param_2 + 5) = 0;

  return param_2;
}

uint FUN_80060924(char *param_1)

{

  return (uint)(byte)(&DAT_801ef630)[param_1[4]] |
         (uint)(byte)(&DAT_801ef630)[param_1[3]] << 6 |
         (uint)(byte)(&DAT_801ef630)[param_1[2]] << 0xc |
         (uint)(byte)(&DAT_801ef630)[param_1[1]] << 0x12 |
         (uint)(byte)(&DAT_801ef630)[*param_1] << 0x18;
}

void FUN_800609f8(undefined4 param_1)

{

  DAT_801c93d8 = param_1;

  FUN_8005d8a0(1);

  return;
}

uint FUN_80060a24(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar4 = 0;

  uVar1 = (uint)*(ushort *)(DAT_801c93d8 + 4);

  while( true ) {
    uVar3 = uVar1;

    uVar1 = (int)(iVar4 + uVar3) >> 1;

    uVar2 = *(uint *)(DAT_801c93d8 + uVar1 * 8 + 8);

    if (param_1 == uVar2) {
      return uVar1;
    }

    if ((int)uVar3 <= iVar4) break;

    if (uVar2 < param_1) {

      iVar4 = uVar1 + 1;
      uVar1 = uVar3;
    }

  }

  return 0;
}

int FUN_80060a88(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  iVar1 = DAT_801c93d8;
  iVar2 = FUN_80060a24();

  uVar3 = *(uint *)(iVar1 + iVar2 * 8 + 0xc);

  *param_2 = iVar1 + (uVar3 & 0x3ffff);

  return (uVar3 >> 0x12 & 0x1f) + 1;
}

int FUN_80060ae8(undefined4 param_1)

{
  int iVar1;
  int local_10 [2];

  iVar1 = FUN_80060a88(param_1,local_10);

  if (local_10[0] == 0) {

    iVar1 = 0;
  }
  else {

    iVar1 = local_10[0] + iVar1 * 3 + 1;
  }

  return iVar1;
}

uint FUN_80060b30(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_801c93d8;
  iVar2 = FUN_80060a24();

  return *(uint *)(iVar1 + iVar2 * 8 + 0xc) >> 0x17 & 0xf;
}

uint FUN_80060b70(void)

{
  uint uVar1;

  uVar1 = FUN_80060b30();

  if (DAT_801c98e0 == 1) {

    uVar1 = uVar1 >> 1;
  }
  else {
    if (DAT_801c98e0 < 2) {
      if (DAT_801c98e0 == 0) {

        uVar1 = uVar1 ^ 1;
      }
      else {

        uVar1 = uVar1 >> 2 ^ 1;
      }
      goto LAB_80060bd8;
    }

    if (DAT_801c98e0 != 2) {

      uVar1 = uVar1 >> 2 ^ 1;
      goto LAB_80060bd8;
    }

    uVar1 = uVar1 >> 3;
  }

  uVar1 = uVar1 ^ 1;

LAB_80060bd8:

  return uVar1 & 1;
}

void FUN_80060bec(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int local_18 [2];

  iVar1 = FUN_80060a88(param_1,local_18);

  *param_2 = local_18[0];
  *param_3 = local_18[0] + iVar1 * 2;

  return;
}

int FUN_80060c90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;

  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }

  while( true ) {

    if (param_3 <= iVar2) {
      return 0;
    }

    iVar1 = (int)*(char *)(param_2 + iVar2);

    if (iVar1 - 0x41U < 0x1a) {
      iVar1 = iVar1 + 0x20;
    }

    if (param_1 == iVar1) break;

    iVar2 = iVar2 + 1;
  }

  return iVar2;
}

undefined2 FUN_80060d28(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  undefined4 local_c;

  uVar1 = FUN_80060bec(param_1,&local_10,&local_c);

  iVar2 = FUN_80060c90(param_2,local_c,uVar1);

  return *(undefined2 *)(iVar2 * 2 + local_10);
}

uint FUN_80060d74(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar1 = (int)DAT_801c93b4;

  while( true ) {
    iVar2 = iVar1;
    iVar1 = iVar3 + iVar2 >> 1;

    if (param_1 == (&DAT_801e30f0)[iVar1]) {

      return (uint)DAT_801e2fc6 + iVar1;
    }

    if (iVar2 <= iVar3) break;

    if ((uint)(&DAT_801e30f0)[iVar1] < param_1) {

      iVar3 = iVar1 + 1;
      iVar1 = iVar2;
    }

  }

  return (uint)DAT_801e2fc6;
}

int FUN_80060de0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar1 = (int)DAT_801c93bc;

  while( true ) {
    iVar2 = iVar1;
    iVar1 = iVar3 + iVar2 >> 1;

    if (param_1 == (ushort)(&DAT_801df340)[iVar1]) {
      return iVar1;
    }

    if (iVar2 <= iVar3) break;

    if ((ushort)(&DAT_801df340)[iVar1] < param_1) {

      iVar3 = iVar1 + 1;
      iVar1 = iVar2;
    }

  }

  return 0;
}

void FUN_80060e44(int param_1)

{

  FUN_8005d908((uint)DAT_801e30b8 + param_1 % DAT_801c93c4 + 1,&DAT_801d585c);

  return;
}

undefined4 * FUN_80060e94(int param_1)

{

  return &DAT_801e18e8 + param_1 * 6;
}

uint FUN_80060eb4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;

  uVar2 = 0;
  iVar3 = 8;

  while( true ) {

    if (DAT_801e18e6 <= uVar2) {
      return 0;
    }

    piVar1 = (int *)(&UNK_801e18e4 + iVar3);
    iVar3 = iVar3 + 0x18;

    if (*piVar1 == param_1) break;

    uVar2 = uVar2 + 1;
  }

  return uVar2;
}

uint FUN_80060fb0(int param_1)

{
  int *piVar1;

  piVar1 = &DAT_801e33f0;

  if (&DAT_801e33f0 + DAT_801c93e4 != &DAT_801e33f0) {

    do {
      if (*piVar1 == param_1) {

        return (uint)DAT_801c93dc + ((int)(piVar1 + 0x1ff87304) >> 2);
      }

      piVar1 = piVar1 + 1;

    } while (piVar1 != &DAT_801e33f0 + DAT_801c93e4);
  }

  return (uint)DAT_801c93dc;
}

void FUN_80061010(void)

{
  return;
}

void FUN_8006101c(int param_1,uint param_2)

{
  ushort *puVar1, *puVar5, *puVar11, *puVar12, *puVar13;
  int iVar2, iVar3;
  byte *pbVar4;
  int iVar6, iVar7, iVar8, iVar9, iVar14, iVar15;
  uint uVar10;

  iVar2 = (param_2 & 0xf) * 4;
  iVar3 = ((param_2 & 0x10) * 0x10 + 0xe0) * 0x40;

  iVar7 = param_1 + 0x868;
  iVar6 = *(int *)(param_1 + 0x868);

  *(uint *)(param_1 + 0x40) = (iVar2 + iVar3) * 0x10000 | param_2;

  puVar5 = (ushort *)(iVar7 + iVar6 * 8 + 4);
  iVar14 = iVar7;

  for (iVar15 = 0; iVar15 < iVar6; iVar15 = iVar15 + 1) {

    puVar11 = puVar5 + 0x28;
    iVar9 = 0;

    *(ushort **)(iVar14 + 8) = puVar5;
    *(ushort **)(puVar5 + 10) = puVar11;
    *(ushort **)(puVar5 + 0xc) = puVar11 + (uint)*puVar5 * 4;

    puVar12 = puVar11 + (uint)*puVar5 * 4 + (uint)puVar5[1] * 2;
    puVar11 = puVar5;
    puVar13 = puVar5;

    do {
      pbVar4 = &DAT_80091660 + iVar9;
      *(ushort **)(puVar11 + 0xe) = puVar12;

      puVar1 = puVar13 + 2;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 2;
      iVar9 = iVar9 + 1;

      puVar12 = (ushort *)((int)puVar12 + (uint)*pbVar4 * (uint)*puVar1);

    } while (iVar9 < 8);

    puVar11 = puVar5 + 4;
    puVar5 = puVar5 + 8;

    for (iVar9 = 4; iVar9 < 8; iVar9 = iVar9 + 1) {
      uVar10 = (uint)puVar11[2];

      iVar8 = *(int *)(puVar5 + 0xe) + (uint)*(byte *)(iVar9 + -0x7ff6e998);

      while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {

        *(short *)(iVar8 + 2) = *(short *)(iVar8 + 2) + (short)iVar2 + (short)iVar3;

        *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) & 0xffe0ffff | (param_2 & 0x1f) << 0x10;

        iVar8 = iVar8 + (uint)(byte)(&DAT_80091660)[iVar9];
      }

      puVar11 = puVar11 + 1;
      puVar5 = puVar5 + 2;
    }

    iVar14 = iVar14 + 8;
    puVar5 = puVar12;
  }

  *(ushort **)(param_1 + 4) = puVar5;
  FUN_8007adc8(iVar7);
  FUN_80061010(param_1,0);

  return;
}

void FUN_800611f8(int *param_1,int *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4, *piVar5, *piVar6, *piVar7;
  int iVar8;
  int iVar9;

  sVar1 = param_3[2];
  iVar9 = (int)*param_3;
  iVar8 = *param_2;
  sVar2 = param_3[1];

  param_2 = param_2 + 1;
  *param_1 = iVar8;
  param_1 = param_1 + 1;

  iVar3 = iVar9 * sVar1 >> 0xc;

  while (iVar8 != 0) {
    piVar7 = param_1 + 1;
    piVar4 = param_2 + 1;

    do {
      piVar6 = param_2;
      piVar5 = param_1;

      *(short *)piVar5 = (short)(*(short *)piVar6 * iVar9 >> 0xc);
      *(short *)((int)piVar7 + -2) = (short)(*(short *)((int)piVar4 + -2) * iVar9 >> 0xc);
      *(short *)piVar7 = (short)((int)*(short *)piVar4 * (int)sVar2 >> 0xc);
      *(short *)(piVar7 + 1) = (short)(*(short *)(piVar4 + 1) * iVar3 >> 0xc);
      *(short *)((int)piVar7 + 6) = (short)(*(short *)((int)piVar4 + 6) * iVar3 >> 0xc);

      iVar8 = iVar8 + -1;
      piVar4 = piVar4 + 3;
      piVar7 = piVar7 + 3;

      *(short *)((int)piVar5 + 6) = (short)((int)*(short *)((int)piVar6 + 6) * (int)sVar2 >> 0xc);
      param_1 = piVar5 + 3;
      param_2 = piVar6 + 3;

    } while (iVar8 != 0);

    iVar8 = piVar6[3];
    param_2 = piVar6 + 4;
    piVar5[3] = iVar8;
    param_1 = piVar5 + 4;
    iVar3 = iVar9;
  }

  return;
}

void FUN_80061308(int param_1,short *param_2,short *param_3)

{
  short sVar1, sVar2, sVar3, sVar4;
  uint uVar5, uVar6;

  sVar1 = *param_2;
  sVar2 = param_2[2];
  sVar3 = *param_3;
  sVar4 = param_3[2];

  *(short *)(param_1 + 4) = (param_2[1] >> 1) - param_2[3];
  *(short *)(param_1 + 6) = (param_3[1] >> 1) - param_3[3];

  uVar5 = (int)sVar1 * (int)sVar2 >> 0xc;
  uVar6 = uVar5 & 0xffff;
  uVar5 = -uVar5 & 0xffff;

  *(uint *)(param_1 + 0xc) = uVar6 | uVar6 << 0x10;
  *(uint *)(param_1 + 8) = uVar5 | uVar6 << 0x10;
  *(uint *)(param_1 + 0x10) = uVar6 | uVar5 << 0x10;
  *(uint *)(param_1 + 0x14) = uVar5 | uVar5 << 0x10;

  uVar5 = (int)sVar3 * (int)sVar4 >> 0xc;
  uVar6 = uVar5 & 0xffff;
  uVar5 = -uVar5 & 0xffff;

  *(uint *)(param_1 + 0x20) = uVar6 | uVar6 << 0x10;
  *(uint *)(param_1 + 0x1c) = uVar5 | uVar6 << 0x10;
  *(uint *)(param_1 + 0x24) = uVar6 | uVar5 << 0x10;
  *(uint *)(param_1 + 0x28) = uVar5 | uVar5 << 0x10;

  FUN_800611f8(param_1 + 0x30,&LAB_80091670,param_2);
  FUN_800611f8(param_1 + 0x440,&DAT_80091878,param_2);
  FUN_800611f8(param_1 + 0x670,&LAB_80091990,param_2);

  FUN_800611f8(param_1 + 0x238,&LAB_80091670,param_3);
  FUN_800611f8(param_1 + 0x558,&DAT_80091878,param_3);
  FUN_800611f8(param_1 + 0x74c,&LAB_80091990,param_3);

  return;
}

void FUN_80061490(int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0xc);

  do {

    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar1 + 0x26);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar1 + 0x22);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(iVar1 + 0x24);

    if ((uVar2 & 1) == 0) {

      *(undefined2 *)(param_1 + 0x38) = 0xfc00;
    }
    else {

      *(undefined2 *)(param_1 + 0x38) = 0x400;
    }

    *(undefined2 *)(param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;

    param_1 = param_1 + 0x10;
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 8;

  } while ((int)uVar2 < 4);

  return;
}
