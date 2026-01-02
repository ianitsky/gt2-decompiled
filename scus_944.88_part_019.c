
int FUN_overlay0__80028288(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;

  piVar6 = (int *)(param_1 + 0xc);
  uVar9 = 0xffffffff;
  iVar8 = -1;
  iVar7 = 0;

  piVar10 = piVar6 + *(ushort *)(param_1 + 4);

  for (; piVar6 != piVar10; piVar6 = piVar6 + 1) {
    iVar2 = *piVar6;

    uVar5 = *(int *)(iVar2 + 0x30) - *param_2;
    uVar3 = *(int *)(iVar2 + 0x34) - param_2[1];
    uVar1 = *(int *)(iVar2 + 0x38) - param_2[2];

    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
    }
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }

    uVar4 = uVar3;
    if (uVar5 < uVar3) {
      uVar4 = uVar5;
      uVar5 = uVar3;
    }
    uVar3 = uVar1;
    if (uVar5 < uVar1) {
      uVar3 = uVar5;
      uVar5 = uVar1;
    }
    uVar1 = uVar3;
    if (uVar4 < uVar3) {
      uVar1 = uVar4;
      uVar4 = uVar3;
    }

    uVar5 = uVar5 + (uVar4 >> 1) + (uVar1 >> 2);

    if (uVar5 < uVar9) {
      iVar8 = iVar7;
      uVar9 = uVar5;
    }
    iVar7 = iVar7 + 1;
  }

  if (0 < iVar8) {
    iVar8 = FUN_overlay0__80028394(param_1,iVar8);
  }
  return iVar8;
}

uint FUN_overlay0__80028394(int param_1,uint param_2,undefined4 param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;

  puVar5 = *(ushort **)(param_1 + param_2 * 4 + 0xc);
  uVar6 = param_2;

  if (puVar5 != (ushort *)0x0) {

    do {

      iVar4 = FUN_overlay0__80027bbc(puVar5,param_3);
      if (iVar4 != 0) break;

      param_2 = (uint)*puVar5;
      puVar5 = *(ushort **)(puVar5 + 2);
    } while (puVar5 != (ushort *)0x0);

    uVar6 = param_2;

    if (puVar5 != (ushort *)0x0) {
      puVar3 = *(ushort **)(puVar5 + 4);
      puVar2 = puVar5;

      while (((puVar1 = puVar3, puVar1 != (ushort *)0x0 &&
              (iVar4 = FUN_overlay0__80027bbc(puVar1,param_3), iVar4 == 1)) &&
             (uVar6 = param_2, puVar5 != puVar1))) {

        uVar6 = (uint)puVar2[1];
        puVar2 = puVar1;
        puVar3 = *(ushort **)(puVar1 + 4);
      }
    }
  }
  return uVar6;
}

void FUN_overlay0__80028470(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;

  puVar9 = param_3 + 2;

  iVar7 = *(int *)(param_1 + param_2 * 4 + 0xc);

  iVar2 = FUN_overlay0__80027c1c(iVar7,puVar9);
  iVar8 = 8;

  if (iVar2 == 0) {

    iVar6 = *(int *)(iVar7 + 4);
    iVar5 = *(int *)(iVar7 + 8);

    do {

      iVar2 = FUN_overlay0__80027c1c(iVar6,puVar9);
      iVar7 = iVar6;
      if (iVar2 != 0) goto LAB_overlay0__800284bc;

      iVar2 = FUN_overlay0__80027c1c(iVar5,puVar9);
      iVar8 = iVar8 + -1;
      iVar7 = iVar5;
      if (iVar2 != 0) goto LAB_overlay0__800284bc;

      iVar6 = *(int *)(iVar6 + 4);
      iVar5 = *(int *)(iVar5 + 8);
    } while (iVar8 != 0);

    *param_3 = 0;
    *(undefined *)param_3 = 7;
    *(undefined *)((int)param_3 + 1) = 4;
    param_3[5] = 0x7fffffff;
  }
  else {

LAB_overlay0__800284bc:
    uVar3 = *(uint *)(iVar2 + 4);
    *param_3 = 0;

    bVar1 = (byte)(uVar3 >> 0x18);
    *(byte *)param_3 = bVar1 >> 4;
    *(byte *)((int)param_3 + 1) = (byte)(uVar3 >> 0x17) & 3;
    *(byte *)((int)param_3 + 2) = bVar1 >> 1 & 3;

    uVar4 = FUN_overlay0__80027c70(iVar7,iVar2,puVar9);
    param_3[5] = uVar4;
  }
  return;
}

undefined8 FUN_overlay0__80028588(int *param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_30;
  int local_2c;
  int local_28;

  iVar3 = FUN_overlay0__80028394();

  iVar9 = param_1[iVar3 + 3];

  iVar10 = *(int *)(iVar9 + 8);

  local_30 = *param_3 - *(int *)(iVar9 + 0x18);
  local_2c = param_3[1] - *(int *)(iVar9 + 0x1c);
  local_28 = param_3[2] - *(int *)(iVar9 + 0x20);

  uVar4 = FUN_80081a78(&local_30,iVar9 + 0x24);

  iVar3 = (uint)*(ushort *)(iVar9 + 0x16) << 0x10;
  uVar5 = iVar3 >> 0x10;

  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar5;
  uVar11 = (uint)lVar1;

  local_30 = *(int *)(iVar10 + 0x18) - *param_3;
  local_2c = *(int *)(iVar10 + 0x1c) - param_3[1];
  local_28 = *(int *)(iVar10 + 0x20) - param_3[2];

  uVar7 = (int)((ulonglong)lVar1 >> 0x20) + uVar4 * (iVar3 >> 0x1f) + uVar5 * ((int)uVar4 >> 0x1f);

  uVar8 = uVar11 >> 0xc | uVar7 * 0x100000;

  uVar4 = FUN_80081a78(&local_30,iVar10 + 0x24);

  iVar3 = (uint)*(ushort *)(iVar9 + 0x14) << 0x10;
  uVar5 = iVar3 >> 0x10;

  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar5;

  iVar3 = ((uint)lVar1 >> 0xc |
          ((int)((ulonglong)lVar1 >> 0x20) + uVar4 * (iVar3 >> 0x1f) + uVar5 * ((int)uVar4 >> 0x1f))
          * 0x100000) + uVar8;

  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {

    iVar3 = FUN_80086084(uVar11 & 0xfffff000,((int)uVar8 >> 0x1f) << 0xc | uVar7 & 0xfff,iVar3,
                         iVar3 >> 0x1f);
  }

  iVar6 = *param_1;

  iVar10 = *(int *)(iVar10 + 0x10) - *(int *)(iVar9 + 0x10);

  if (iVar6 < iVar10) {
    iVar2 = -iVar6;
  }
  else {

    lVar1 = (longlong)iVar10 * (longlong)iVar3;
    iVar2 = iVar6;
    if (-1 < iVar10) goto LAB_overlay0__80028778;
  }

  lVar1 = (longlong)(iVar10 + iVar2) * (longlong)iVar3;

LAB_overlay0__80028778:

  iVar3 = *(int *)(iVar9 + 0x10) + (int)(lVar1 >> 0xc);

  if (iVar6 < iVar3) {
    iVar3 = iVar3 - iVar6;
  }
  else if (iVar3 < 0) {
    iVar3 = iVar3 + iVar6;
  }

  return CONCAT44((int)((ulonglong)(lVar1 >> 0xc) >> 0x20),iVar3);
}

void FUN_overlay0__800287dc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;

  local_18 = *param_3;
  local_14 = param_3[1];

  local_10 = -param_3[2];

  FUN_overlay0__80028394(*(undefined4 *)(param_1 + 0xb544),param_2,&local_18);
  return;
}

void FUN_overlay0__80028830(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;

  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = param_2[2];
  local_1c = param_2[3];
  local_14 = param_2[5];
  local_18 = -param_2[4];

  uVar1 = FUN_overlay0__80028394(*(undefined4 *)(param_1 + 0xb544),local_24 & 0xffff,&local_20);

  local_24 = CONCAT22(local_24._2_2_,uVar1);

  FUN_overlay0__80028470(*(undefined4 *)(param_1 + 0xb544),uVar1,&local_28);

  *param_2 = local_28;
  param_2[1] = local_24;
  param_2[2] = local_20;
  param_2[3] = local_1c;
  param_2[4] = -local_18;
  param_2[5] = local_14;
  return;
}

int FUN_overlay0__80028900(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  undefined auStack_20 [4];
  ushort local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  local_18 = param_2 << 4;
  local_14 = param_4 << 4;
  local_10 = param_3 << 4;

  local_1c = *(ushort *)param_5;

  FUN_overlay0__80028830(param_1,auStack_20);

  *param_5 = (uint)local_1c;

  if (local_c != 0x7fffffff) {
    local_c = local_c >> 4;
  }
  return local_c;
}

void FUN_overlay0__80028968(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 local_d0 [44];

  puVar4 = local_d0;
  puVar3 = param_3;
  do {
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    *puVar4 = *puVar3;
    puVar4[1] = uVar9;
    puVar4[2] = uVar10;
    puVar4[3] = uVar11;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar3 != param_3 + 0x2c);

  iVar5 = 0;
  puVar3 = local_d0;
  do {
    iVar5 = iVar5 + 1;
    puVar3[6] = 0x1000;
    puVar3[1] = -puVar3[1];
    puVar3[4] = -puVar3[4];
    puVar3 = puVar3 + 0xb;
  } while (iVar5 < 4);

  iVar16 = 0;
  iVar15 = 0;
  iVar14 = 0;

  iVar12 = *(int *)(*(int *)(param_1 + 0xb544) + param_2 * 4 + 0xc);

  FUN_overlay0__80027fc4(iVar12,local_d0);

  iVar5 = *(int *)(iVar12 + 8);
  iVar12 = *(int *)(iVar12 + 4);

  do {
    if (7 < iVar14) break;
    bVar1 = true;
    iVar13 = iVar12;

    if (iVar16 < 0x100000) {
      FUN_overlay0__80027fc4(iVar12,local_d0);
      iVar13 = *(int *)(iVar12 + 4);

      uVar8 = *(int *)(iVar13 + 0x18) - *(int *)(iVar12 + 0x18);
      uVar6 = *(int *)(iVar13 + 0x1c) - *(int *)(iVar12 + 0x1c);
      uVar2 = *(int *)(iVar13 + 0x20) - *(int *)(iVar12 + 0x20);

      if ((int)uVar8 < 0) uVar8 = -uVar8;
      if ((int)uVar6 < 0) uVar6 = -uVar6;
      if ((int)uVar2 < 0) uVar2 = -uVar2;

      uVar7 = uVar6;
      if (uVar8 < uVar6) {
        uVar7 = uVar8;
        uVar8 = uVar6;
      }
      uVar6 = uVar2;
      if (uVar8 < uVar2) {
        uVar6 = uVar8;
        uVar8 = uVar2;
      }
      uVar2 = uVar6;
      if (uVar7 < uVar6) {
        uVar2 = uVar7;
        uVar7 = uVar6;
      }

      iVar16 = iVar16 + uVar8 + (uVar7 >> 1) + (uVar2 >> 2);
      bVar1 = false;
    }

    iVar12 = iVar5;
    if (iVar15 < 0x100000) {
      FUN_overlay0__80027fc4(iVar5,local_d0);
      iVar12 = *(int *)(iVar5 + 8);

      uVar8 = *(int *)(iVar5 + 0x18) - *(int *)(iVar12 + 0x18);
      uVar6 = *(int *)(iVar5 + 0x1c) - *(int *)(iVar12 + 0x1c);
      uVar2 = *(int *)(iVar5 + 0x20) - *(int *)(iVar12 + 0x20);

      if ((int)uVar8 < 0) uVar8 = -uVar8;
      if ((int)uVar6 < 0) uVar6 = -uVar6;
      if ((int)uVar2 < 0) uVar2 = -uVar2;

      uVar7 = uVar6;
      if (uVar8 < uVar6) {
        uVar7 = uVar8;
        uVar8 = uVar6;
      }
      uVar6 = uVar2;
      if (uVar8 < uVar2) {
        uVar6 = uVar8;
        uVar8 = uVar2;
      }
      uVar2 = uVar6;
      if (uVar7 < uVar6) {
        uVar2 = uVar7;
        uVar7 = uVar6;
      }

      iVar15 = iVar15 + uVar8 + (uVar7 >> 1) + (uVar2 >> 2);
      bVar1 = false;
    }

    iVar14 = iVar14 + 1;
    iVar5 = iVar12;
    iVar12 = iVar13;
  } while (!bVar1);

  iVar5 = 0;
  puVar3 = local_d0;
  do {
    iVar5 = iVar5 + 1;
    puVar3[1] = -puVar3[1];
    *(short *)((int)puVar3 + 0x1e) = -*(short *)((int)puVar3 + 0x1e);
    puVar3[4] = -puVar3[4];
    puVar3 = puVar3 + 0xb;
  } while (iVar5 < 4);

  puVar3 = local_d0;
  do {
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    *param_3 = *puVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar10;
    param_3[3] = uVar11;
    puVar3 = puVar3 + 4;
    param_3 = param_3 + 4;
  } while (puVar3 != (undefined4 *)&stack0xffffffe0);
  return;
}

void FUN_overlay0__80028c6c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;

  local_18 = *param_3;
  local_14 = param_3[1];

  local_10 = -param_3[2];

  FUN_overlay0__80028588(*(undefined4 *)(param_1 + 0xb544),param_2,&local_18);
  return;
}

void FUN_overlay0__80028cc0(void)

{
  undefined uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 auStack_c8b0 [1604];
  undefined4 auStack_afa0 [11238];

  FUN_8005d8a0(8,auStack_c8b0);

  puVar4 = &DAT_801c6c50;

  puVar3 = (undefined4 *)((int)auStack_c8b0 + (uint)DAT_801c98e0 * 0x1915);

  puVar2 = (undefined4 *)((int)auStack_afa0 + (uint)DAT_801c98e0 * 0x1915);

  if (((uint)puVar3 & 3) == 0) {

    do {
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar3 != puVar2);
  }
  else {

    do {
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar3 != puVar2);
  }

  uVar1 = *(undefined *)(puVar3 + 1);
  *puVar4 = *puVar3;
  *(undefined *)(puVar4 + 1) = uVar1;
  return;
}

void FUN_overlay0__80028ddc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  uint *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;

  local_40 = 0;
  local_38 = &local_60;

  iVar2 = FUN_80060e94(*(undefined *)(param_1 + 0x174b));
  local_3c = &local_50;

  local_60 = FUN_80081534(*(undefined2 *)(iVar2 + 0xc));
  local_30 = 0;
  local_5c = FUN_80081534(*(undefined2 *)(iVar2 + 0x14));
  local_2c = 0x5c;
  local_58 = FUN_80081534(*(undefined2 *)(iVar2 + 0x10));
  local_54 = 0;

  local_50 = (uint)*(ushort *)(iVar2 + 0xe);
  local_4c = (uint)*(ushort *)(iVar2 + 0x16);
  iVar10 = 0x1a;
  local_48 = (uint)*(ushort *)(iVar2 + 0x12);
  local_44 = 0x1000;
  local_34 = param_1;

  for (; iVar4 = local_2c, local_40 < (int)(uint)DAT_800af231; local_40 = local_40 + 1) {

    uVar7 = *(undefined4 *)((int)&DAT_801d5860 + local_2c);

    iVar3 = FUN_8005d950(*(undefined4 *)((int)&DAT_801d585c + local_2c));

    puVar9 = &DAT_8015f894 + local_30;

    iVar3 = (uint)*(ushort *)(iVar3 + 4) + (*(ushort *)(iVar2 + 8) & 1) * 2;

    *local_34 = puVar9;

    FUN_8006158c(iVar3,puVar9,iVar10);
    FUN_800615c8(iVar3,&DAT_8018ec00);
    FUN_8006788c(&DAT_80192fa0,iVar10);
    iVar3 = FUN_80061634(&DAT_8018ec00,uVar7);

    iVar4 = FUN_800615e8(*(undefined4 *)(&DAT_801d5864 + iVar4),&DAT_8019a1a0);
    if (iVar4 != 0) {

      FUN_8008cfe0(&UNK_8018ec20 + iVar3 * 0x240,&DAT_8019a1b4,0x20);

      FUN_800678e8(&DAT_8019a1a0,iVar10,0);
    }

    bVar1 = true;
    iVar4 = 0;
    puVar6 = local_38;
    puVar8 = local_3c;

    do {
      if (bVar1) {

        FUN_80067960(&DAT_80199fa0,&UNK_8018ec20 + iVar3 * 0x240,*puVar6,*puVar8);
      }
      else {

        FUN_8008ce30(&DAT_80199fa0,0,0x200);
      }

      FUN_80067824(&DAT_80199fa0,iVar10,iVar4);
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      iVar5 = iVar4 + 1;

      FUN_8006155c(puVar9,iVar4,DAT_80199fa0);
      bVar1 = iVar5 < 3;
      iVar4 = iVar5;
    } while (iVar5 < 4);

    iVar10 = iVar10 + -1;
    local_34 = local_34 + 1;
    local_30 = local_30 + 0x5000;
    local_2c = local_2c + 0xd0;
  }
  return;
}

void FUN_overlay0__80029064(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_58 [12];

  if (DAT_801c9991 != '\0') {
    piVar5 = local_58;
    iVar6 = 0x184;

    for (iVar8 = 0; iVar3 = param_1 + iVar6, iVar8 < (int)(uint)DAT_800af231; iVar8 = iVar8 + 1) {

      *piVar5 = -1;
      piVar5[1] = -1;

      if (*(char *)(iVar3 + 0xe) != '\0') {

        *piVar5 = param_3 + (*(short *)(iVar3 + 0x832) * 0xa3 >> 0xc) + 0x30;

        piVar5[1] = param_4 + (*(short *)(iVar3 + 0x83a) * 0xa3 >> 0xc) + 0x30;
      }
      piVar5 = piVar5 + 2;
      iVar6 = iVar6 + 0xb40;
    }

    piVar5 = local_58;
    for (iVar6 = 0; piVar7 = local_58, iVar6 < (int)(uint)DAT_800af231; iVar6 = iVar6 + 1) {
      iVar8 = *piVar5;
      iVar3 = piVar5[1];

      if (-1 < iVar8) {

        uVar4 = 0xff00;
        if (iVar6 == param_5) {
          uVar4 = 0xff;
        }

        psVar1 = (short *)FUN_8007d024(param_2,uVar4);

        *psVar1 = (short)iVar8 + -1;
        psVar1[1] = (short)iVar3 + -1;

        psVar1[2] = 2;
        psVar1[3] = 2;
      }
      piVar5 = piVar5 + 2;
    }

    for (iVar6 = 0; iVar6 < (int)(uint)DAT_800af231; iVar6 = iVar6 + 1) {
      iVar8 = *piVar7;
      iVar3 = piVar7[1];

      if (-1 < iVar8) {

        psVar1 = (short *)FUN_8007d024(param_2,0);

        *psVar1 = (short)iVar8 + -2;
        psVar1[1] = (short)iVar3 + -2;

        psVar1[2] = 4;
        psVar1[3] = 4;
      }
      piVar7 = piVar7 + 2;
    }

    puVar2 = (undefined2 *)FUN_80080450(param_2,0x808080);
    *puVar2 = 9;
    *(undefined *)((int)puVar2 + 0xd) = 0x90;
    puVar2[7] = 0x7f17;
    puVar2[4] = (short)param_3;
    puVar2[5] = (short)param_4;
    *(undefined *)(puVar2 + 6) = 0;
    puVar2[8] = 0x60;
    puVar2[9] = 0x60;
  }
  return;
}

void FUN_overlay0__800292a0(int param_1)

{
  bool bVar1;
  bool bVar2;

  bVar1 = *(char *)(param_1 + 0x2ea) != '\0';

  if (bVar1) {

    bVar2 = false;

    if ((*(char *)(param_1 + 0x1c7) == '\0') || (*(char *)(param_1 + 0x2d7) == '\0')) {
      bVar2 = true;
    }

    if (bVar2) {

      *(undefined *)(param_1 + 0x1c7) = 0;
      *(undefined *)(param_1 + 0x1c9) = 2;
      *(undefined *)(param_1 + 0x2d7) = 0;
      *(undefined *)(param_1 + 0x2d9) = 2;
      *(undefined *)(param_1 + 0x2ea) = 0;
    }
  }
  else if (DAT_801d5866 == '\0') {

    bVar2 = false;

    if ((*(char *)(param_1 + 0x1c7) != '\0') || (*(char *)(param_1 + 0x2d7) != '\0')) {
      bVar2 = true;
    }

    if (bVar2) {

      *(undefined *)(param_1 + 0x1d0) = 0;
      *(undefined *)(param_1 + 0x1c7) = 1;
      *(undefined *)(param_1 + 0x1c9) = 0;
      *(undefined *)(param_1 + 0x2e0) = 1;
      *(undefined *)(param_1 + 0x2d7) = 1;
      *(undefined *)(param_1 + 0x2d9) = 0;
      *(undefined *)(param_1 + 0x2ea) = 1;
    }
  }

  bVar2 = *(char *)(param_1 + 0x2ea) != '\0';

  if (bVar1) {

    FUN_overlay0__800297f4(param_1,(uint)!bVar2 << 1);
  }

  if (!bVar2) {

    FUN_overlay0__8002972c(param_1);
  }

  *(bool *)(param_1 + 0x2eb) = bVar2;
  return;
}

void FUN_overlay0__800293d4(int param_1)

{
  int iVar1;

  if (*(char *)(param_1 + 0x2e9) != '\0') {

    FUN_overlay0__80029e80();
  }

  if (DAT_801d5866 == '\0') {

    if (*(char *)(param_1 + 0x2ea) != '\0') {

      FUN_overlay0__8002e908(param_1,&DAT_800a9688,param_1 + 0xc4);

      FUN_overlay0__8002e908(param_1,&DAT_800aa1c8,param_1 + 0x1d4);
      return;
    }

    iVar1 = (uint)*(byte *)(param_1 + 0x1d0) * 0xb40;
  }
  else {

    FUN_overlay0__8002e818(param_1,*(undefined *)(param_1 + 0x1d0));
    if (*(char *)(param_1 + 0x1d0) != '\0') {
      return;
    }
    iVar1 = 0;
  }

  FUN_overlay0__8002e63c(param_1,(int)&DAT_800a9688 + iVar1,param_1 + 0xc4);
  return;
}

void FUN_overlay0__800294d4(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_140;
  undefined2 local_13c;
  undefined2 uStack_13a;
  undefined4 local_138 [39];
  undefined auStack_9c [108];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  puVar7 = (undefined4 *)(param_1 + param_2 * 0x110 + 0xc4);
  bVar1 = false;

  if (((*(char *)((int)puVar7 + 0x103) == '\0') && (*(char *)((int)puVar7 + 0x109) != '\0')) &&
     (DAT_801d5866 != '\0')) {

    bVar1 = 1 < DAT_801d5864;
  }

  puVar3 = &local_140;

  if (bVar1) {

    puVar2 = puVar7;
    do {

      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar2 != puVar7 + 0x44);

    local_30 = 0;
    local_2c = 0x3333;
    local_28 = 0x8000;

    FUN_8007b050(auStack_9c,&local_30);
    FUN_8007b088(auStack_9c,0,0xffffffe0,0);
    FUN_8007b25c(auStack_9c,0x1000,0x1000,0xfffff000);

    local_140._0_2_ = 0;
    local_140._2_2_ = 0;
    local_13c = 0x78;
    uStack_13a = 0x20;

    FUN_8007b320(&local_140,0xffffffc4,0x3c,0x10,0xfffffff0,0x78,0x7fff);

    local_30 = 0x140064;
    local_2c._0_2_ = 0x78;
    local_2c._2_2_ = 0x20;

    FUN_8008034c(param_1 + 0x94,&local_30);

    local_30 = 0;
    FUN_8007e780(*(undefined4 *)(param_1 + 0x9c),0,&local_30);

    local_30 = 0x10001;
    local_2c = CONCAT22(local_2c._2_2_ + -2,(short)local_2c + -2);
    FUN_8007e780(*(undefined4 *)(param_1 + 0x9c),0,&local_30);

    FUN_overlay0__800298fc(param_1,&local_140,1);
    FUN_overlay0__8001545c(&DAT_800a9504,&local_140,1);
    FUN_overlay0__8002993c(param_1,&local_140,1);
  }

  FUN_overlay0__800298fc(param_1,puVar7,0);
  FUN_overlay0__8001545c(&DAT_800a9504,puVar7,0);
  FUN_overlay0__8002993c(param_1,puVar7,0);
  return;
}

void FUN_overlay0__8002972c(undefined4 param_1)

{

  FUN_overlay0__800293d4();

  FUN_overlay0__800294d4(param_1,0);
  return;
}

void FUN_overlay0__8002975c(int param_1,int param_2)

{
  undefined4 local_20 [4];

  local_20[0] = 0;
  local_20[1] = 0x780140;
  local_20[2] = 0x780000;
  local_20[3] = 0x780140;

  FUN_8008034c(param_1 + 0xa4,local_20 + param_2 * 2);

  FUN_8008034c(param_1 + 0xb4,local_20 + param_2 * 2);
  return;
}

void FUN_overlay0__800297f4(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  if ((param_2 & 1) == 0) {

    FUN_overlay0__800293d4();

    FUN_overlay0__8002975c(param_1,0);

    FUN_overlay0__800294d4(param_1,0);

    (**(code **)(*param_1 + 0x30))(param_1);

    FUN_8007af30();

    *(undefined *)((int)param_1 + 0x2eb) = 0;

    (**(code **)(*param_1 + 0x28))(param_1);

    *(undefined *)((int)param_1 + 0x2eb) = 1;
  }

  uVar4 = DAT_800a9e9c;
  uVar3 = DAT_800a9e98;
  uVar2 = DAT_800a9e94;
  uVar1 = DAT_800a9e90;

  if ((param_2 & 2) == 0) {

    FUN_overlay0__8002975c(param_1,1);

    FUN_overlay0__800294d4(param_1,1);
  }

  DAT_800a9e90 = uVar1;
  DAT_800a9e94 = uVar2;
  DAT_800a9e98 = uVar3;
  DAT_800a9e9c = uVar4;
  return;
}

void FUN_overlay0__800298fc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;

  if (param_3 == 0) {

    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  else {

    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }

  FUN_8007b374(param_2,param_2 + 0xa4,uVar1,0x10);
  return;
}

void FUN_overlay0__8002993c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;

  if (param_3 == 0) {

    iVar2 = *(int *)(param_1 + 0xbc);
  }
  else {

    iVar2 = *(int *)(param_1 + 0x9c) + 0x4178;
  }

  FUN_overlay0__80018d1c(iVar2,param_2,&DAT_800af234,param_3);

  uVar1 = FUN_overlay0__80020110(param_2,&DAT_800b4a34,param_3);

  if (param_3 == 0) {

    FUN_overlay0__8002002c(param_2,&DAT_800b4a34,uVar1);
  }
  return;
}

void FUN_overlay0__800299d8(int param_1)

{
  bool bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;

  *(undefined *)(param_1 + 0x2ec) = 0xff;
  *(undefined *)(param_1 + 0x2ee) = 0xff;
  *(undefined *)(param_1 + 0x2ed) = 0;

  uVar3 = FUN_80083ae0(param_1 + 0x70);

  *(undefined *)(param_1 + 0x2f0) = 0xff;
  *(undefined *)(param_1 + 0x2f1) = 0;

  *(char *)(param_1 + 0x2ef) = (char)uVar3 + (char)(uVar3 / 6) * -6;

  if (DAT_801d5866 == '\x03') {

    *(undefined *)(param_1 + 0x2f1) = 2;
  }
  else if (DAT_801d5866 == '\a') {

    *(undefined *)(param_1 + 0x2f1) = 1;
  }
  else if (DAT_800a9520 != 0) {

    if (DAT_801d5ddc == '\0') {

      bVar1 = false;

      if (DAT_801d5865 == '\x01') {

        iVar4 = FUN_8008cf00(&DAT_801d58a0,"One-Make");
        bVar1 = iVar4 == 0;
      }

      uVar2 = 10;
      if (!bVar1) {
        uVar2 = 0xc;
      }
    }
    else {

      *(undefined *)(param_1 + 0x2f1) = 4;
      uVar2 = 0xb;
    }

    *(undefined *)(param_1 + 0x2f0) = uVar2;
  }

  if (-1 < *(char *)(param_1 + 0x2ee)) {

    iVar4 = FUN_8008103c();

    if ((int)(uint)DAT_800a9520 < iVar4 * 0x3c) {
      DAT_800a951e = (ushort)(iVar4 * 0x3c);
      DAT_800a9520 = DAT_800a951e;
    }
  }

  if (DAT_800a951c != '\0') {

    *(undefined *)(param_1 + 0x2ee) = 0xff;
  }
  return;
}

void FUN_overlay0__80029b60(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;

  iVar3 = (int)*(char *)(param_1 + 0x2ee);
  cVar1 = *(char *)(param_1 + 0x2f0);

  if (*(char *)(param_1 + 0x2e9) == '\0') {

    if (*(char *)(param_1 + 0x2ec) == iVar3) {

      bVar2 = true;

      if (((-1 < *(char *)(param_1 + 0x2ec)) && (DAT_801f0674 == '\0')) &&
         (bVar2 = false, DAT_801f0676 == '\0')) {

        FUN_8007c4ec(6);
        bVar2 = false;
      }

      if ((bVar2) && (-1 < cVar1)) {

        *(undefined *)(param_1 + 0x2f0) = 0xff;

        *(char *)(param_1 + 0x2ee) = cVar1;

        *(undefined *)(param_1 + 0x2ed) = 1;
      }
    }
    else {

      *(char *)(param_1 + 0x2ec) = *(char *)(param_1 + 0x2ee);

      if (iVar3 < 0) {

        FUN_8007c570();
      }
      else {

        FUN_80080f24(iVar3,*(char *)(param_1 + 0x2ed) != '\0');
      }
    }
  }
  else if (DAT_801f0673 != '\0') {

    FUN_8007c4ec(2);
  }
  return;
}

void FUN_overlay0__80029c54(int param_1,undefined param_2,undefined param_3)

{

  *(undefined *)(param_1 + 0x2ee) = param_2;

  *(undefined *)(param_1 + 0x2ed) = param_3;
  return;
}

void FUN_overlay0__80029c60(int param_1)

{

  FUN_overlay0__80029c54(param_1,*(undefined *)(param_1 + 0x2ef),1);
  return;
}

void FUN_overlay0__80029c84(int param_1)

{
  byte bVar1;
  int iVar2;

  if (DAT_800a9522 == 0) {
    iVar2 = -1;

    DAT_800a9522 = (ushort)DAT_801d5864;

    if (DAT_800a951c == '\0') {

      bVar1 = *(byte *)(param_1 + 0x2f1);

      if (bVar1 == 3) {

        iVar2 = 0xd;
      }
      else if (bVar1 < 4) {

        iVar2 = 0xe;
        if (bVar1 == 1) {

          iVar2 = 0x10;
        }
      }
      else {

        iVar2 = 0xe;
      }

      if ((DAT_801d5866 != '\0') && (DAT_801d5866 != '\x03')) {

        *(undefined *)(param_1 + 0x2f0) = 8;
      }
    }

    if (-1 < iVar2) {

      FUN_overlay0__80029c54(param_1,iVar2,0);
    }
  }
  return;
}

void FUN_overlay0__80029d58(void)

{

  DAT_800a94c0 = 0;

  DAT_800a94c1 = 0;
  return;
}

undefined4 FUN_overlay0__80029d6c(undefined4 param_1,int param_2)

{
  uint uVar1;

  DAT_800a94c1 = DAT_800a94c1 + '\x01';

  if ('\x1e' < DAT_800a94c1) {
    DAT_800a94c1 = '\0';
  }

  uVar1 = *(uint *)(param_2 + 0x6c);

  if ((uVar1 & 1) != 0) {

    DAT_800a94c0 = DAT_800a94c0 - 1;

    if ((int)((uint)DAT_800a94c0 << 0x18) < 0) {
      DAT_800a94c0 = 0;
    }

    DAT_800a94c1 = '\0';
  }

  if ((uVar1 & 2) != 0) {

    DAT_800a94c0 = DAT_800a94c0 + 1;

    if ('\x01' < (char)DAT_800a94c0) {
      DAT_800a94c0 = 1;
    }

    DAT_800a94c1 = '\0';
  }

  if ((uVar1 & 0x10a00) != 0) {
    if (DAT_800a94c0 == 0) {

      DAT_800a94c0 = 0;
      DAT_800a94c1 = 0xff;
      return 0;
    }
    if (DAT_800a94c0 == 1) {

      DAT_800a94c1 = -1;
      DAT_800a94c0 = 0;
      DAT_800a8d68._0_1_ = 2;
    }
  }

  return 1;
}

void FUN_overlay0__80029e80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  uint local_58;
  short local_54;
  short local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined auStack_48 [12];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;

  uVar3 = *(undefined4 *)(param_1 + 0x8c);

  if (-1 < DAT_800a94c1) {

    FUN_8006ac68(auStack_48,0xffffffff);
    local_38 = uVar3;
    FUN_8007da80(auStack_48,0x80093130);
    local_34 = 0x2475b5b;

    iVar1 = (int)DAT_800a94c1;
    local_3c = local_3c & 0xff9fffff | 0x200000;
    if (0xe < iVar1) {
      iVar1 = 0xe;
    }

    iVar2 = 0;
    ppuVar8 = &PTR_DAT_overlay0__8002f5e0;
    iVar7 = 0x6d0000;
    iVar6 = 0x9c0000;
    sVar5 = 0x6d;
    sVar4 = 0x9c;
    local_50 = 100;
    local_4e = 0x14;

    do {

      local_54 = sVar4;
      local_52 = sVar5;

      FUN_8006adb4(auStack_48,*ppuVar8,iVar6 >> 0x10,(iVar7 >> 0x10) + 7,0);

      local_58 = 0x2244290;

      if (iVar2 == DAT_800a94c0) {

        local_58 = 0xf2U - (iVar1 * 0x16) / 0xe | (0xf2 - (iVar1 * 0x52) / 0xe) * 0x100 |
                   (0xf2 - (iVar1 * 0x84) / 0xe) * 0x10000 | 0x2000000;
      }

      FUN_800683fc(uVar3,&local_58,0x20);
      local_58 = 0x2181818;
      FUN_800683fc(uVar3,&local_58,0x20);
      FUN_8007da44(uVar3,0);

      ppuVar8 = ppuVar8 + 1;
      iVar7 = iVar7 + 0x160000;
      iVar6 = iVar6 + 0x40000;
      sVar5 = sVar5 + 0x16;
      iVar2 = iVar2 + 1;
      sVar4 = sVar4 + 4;
    } while (iVar2 < 2);
  }
  return;
}

void FUN_overlay0__8002a0c8(short *param_1,short param_2)

{

  *param_1 = param_2 + 0xf0;
  return;
}

void FUN_overlay0__8002a0d4(short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = (int)*param_1;

  if (0 < iVar1) {

    iVar2 = iVar1 - (uint)DAT_801d5864;
    iVar3 = iVar2;

    if (iVar2 < 0) {
      iVar3 = 0;
    }

    *param_1 = (short)iVar3;

    if ((iVar2 < 0xf0) && (0xef < iVar1)) {

      FUN_overlay0__800189c4(1);
      FUN_overlay0__80029c60(param_2);
    }

    else if ((((iVar3 < 300) && (299 < iVar1)) || ((iVar3 < 0x168 && (0x167 < iVar1)))) ||
            ((iVar3 < 0x1a4 && (0x1a3 < iVar1)))) {

      FUN_overlay0__800189c4(0);
    }
  }
  return;
}

void FUN_overlay0__8002a19c(short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined auStack_138 [12];
  uint local_12c;
  undefined4 local_128;
  uint local_124;
  char local_118;
  undefined local_117;

  pcVar5 = &UNK_801c6c90;

  if (DAT_800a951c != '\0') {
    pcVar5 = &DAT_801c847b;
  }

  if (-1 < *param_1) {

    FUN_8006ac68(auStack_138,0xffffffff);
    local_12c = local_12c & 0xff9fffff | 0x200000;
    local_128 = param_2;
    FUN_8007da80(auStack_138,&LAB_8009313c);

    iVar1 = (int)*param_1;

    if (iVar1 < 0xf1) {
      if (iVar1 < 0x79) {

        iVar4 = -iVar1 + 0x78;
        if (0x1f < iVar4) {
          return;
        }

        if (iVar4 < 0x10) {

          iVar1 = iVar4 * 0x22;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 0xf;
          }
          iVar2 = iVar4 * 0x59;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xf;
          }
          iVar4 = iVar4 * 0x86;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xf;
          }

          uVar3 = (iVar1 >> 4) + 0x6eU | ((iVar2 >> 4) + 0x37) * 0x100 |
                  ((iVar4 >> 4) + 10) * 0x10000;
          local_124 = 0x2000000;
        }
        else {

          uVar3 = (-iVar1 + 0x68) * -9 + 0x90;
          local_124 = uVar3 | uVar3 * 0x100 | uVar3 * 0x10000;
          uVar3 = 0x2000000;
        }
        local_124 = local_124 | uVar3;
      }
      else {

        local_124 = 0xa376e;
      }
    }
    else {

      iVar1 = (iVar1 + -0xf0) / 0x3c;
      if (2 < iVar1) {
        return;
      }

      pcVar5 = &local_118;
      local_118 = (char)iVar1 + '1';
      local_117 = 0;
      local_124 = 0x6f6f6f;
    }

    FUN_8006adb4(auStack_138,pcVar5,0xa0,0x6e,0);
  }
  return;
}

void FUN_overlay0__8002a398(undefined2 *param_1)

{

  *param_1 = 0xffff;
  return;
}

void FUN_overlay0__8002a3a4(undefined2 *param_1)

{

  *param_1 = 0;
  return;
}

void FUN_overlay0__8002a3ac(short *param_1)

{
  short sVar1;

  sVar1 = *param_1;

  if ((-1 < *param_1) && (*param_1 = sVar1 + 1, 0x100 < (short)(sVar1 + 1))) {

    *param_1 = 0x100;
  }
  return;
}

void FUN_overlay0__8002a3e0
               (undefined4 param_1,short param_2,short param_3,char *param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  short sVar11;
  int iVar12;

  bVar2 = false;
  sVar11 = 0;
  iVar12 = 0;
  uVar8 = 0;

  iVar6 = ((int)((uint)*(ushort *)(param_4 + 6) << 0x10) >> 0x10) -
          ((int)((uint)*(ushort *)(param_4 + 6) << 0x10) >> 0x1f) >> 1;

  if ((int)param_5 < 0) {
    return;
  }

  if (param_5 < 0x10) {

    bVar1 = (&DAT_overlay0__8002f5f8)[-param_5];
    puVar9 = &LAB_overlay0__8002f5fa_2;
    puVar7 = &DAT_overlay0__8002f604;

    sVar11 = (short)((uint)(byte)(&DAT_overlay0__8002f5e8)[param_5] * iVar6 >> 8);
    uVar10 = param_5;
  }
  else {

    uVar10 = param_5 - 0x40;

    if ((int)param_5 < 0x40) {
      bVar2 = true;
      uVar8 = 0x6680;
      iVar12 = iVar6;
      goto LAB_overlay0__8002a538;
    }

    if (0xf < uVar10) goto LAB_overlay0__8002a538;

    bVar1 = *(byte *)((int)&DAT_overlay0__8002f5a8 + param_5);
    puVar9 = &DAT_overlay0__8002f604;
    puVar7 = &LAB_overlay0__8002f5fa_2;

    sVar11 = -(short)((uint)(byte)(&DAT_overlay0__8002f5f8)[-uVar10] * iVar6 >> 8);
  }

  bVar2 = true;
  uVar8 = FUN_8006b548(puVar7,puVar9,uVar10,0x10);
  iVar12 = (int)((uint)bVar1 * iVar6) >> 7;

LAB_overlay0__8002a538:

  if (bVar2) {

    sVar5 = *(short *)(param_4 + 4);

    iVar6 = FUN_8007e864(param_1,uVar8);

    sVar3 = param_2 - (sVar5 >> 1);
    param_2 = param_2 + (sVar5 >> 1);

    *(short *)(iVar6 + 0x14) = sVar3 - sVar11;
    *(short *)(iVar6 + 0xc) = param_2 - sVar11;
    sVar5 = param_3 - (short)iVar12;
    *(short *)(iVar6 + 0xe) = sVar5;
    *(short *)(iVar6 + 6) = sVar5;
    param_3 = param_3 + (short)iVar12;
    *(short *)(iVar6 + 4) = sVar3 + sVar11;
    *(short *)(iVar6 + 0x1c) = param_2 + sVar11;
    *(short *)(iVar6 + 0x1e) = param_3;
    *(short *)(iVar6 + 0x16) = param_3;

    cVar4 = *param_4;
    *(char *)(iVar6 + 0x18) = cVar4;
    *(char *)(iVar6 + 8) = cVar4;
    cVar4 = *param_4 + param_4[4] + -1;
    *(char *)(iVar6 + 0x20) = cVar4;
    *(char *)(iVar6 + 0x10) = cVar4;
    cVar4 = param_4[1];
    *(char *)(iVar6 + 0x11) = cVar4;
    *(char *)(iVar6 + 9) = cVar4;
    cVar4 = param_4[1] + param_4[6] + -1;
    *(char *)(iVar6 + 0x21) = cVar4;
    *(char *)(iVar6 + 0x19) = cVar4;

    *(undefined2 *)(iVar6 + 10) = *(undefined2 *)(param_4 + 2);
    *(ushort *)(iVar6 + 0x12) = *(ushort *)(param_4 + 8) | 0x20;
  }
  return;
}

void FUN_overlay0__8002a630(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  FUN_overlay0__8002a3e0(param_2,param_3,param_4,&LAB_overlay0__8002f804,(int)*param_1);

  iVar1 = *param_1 + -0x50;

  if (0x10 < iVar1) {
    iVar1 = 0x10;
  }

  FUN_overlay0__8002a3e0(param_2,param_3,param_4,&LAB_overlay0__8002f7f6_2,iVar1);
  return;
}

void FUN_overlay0__8002a6d0(undefined2 *param_1)

{

  *param_1 = 0xffff;

  FUN_overlay0__8002a398(param_1 + 1);
  return;
}

void FUN_overlay0__8002a6f8(undefined2 *param_1)

{

  *param_1 = 0;
  return;
}

undefined4 FUN_overlay0__8002a700(short *param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;

  if (*param_1 < 0) {
    return 1;
  }

  switch(DAT_801d5866) {
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:

    iVar3 = 3;
    do {
      uVar2 = *param_2;
      *param_1 = *param_1 + 1;
      iVar3 = iVar3 + -1;
      if ((uVar2 & 0xa00) == 0) {
        iVar3 = 0;
      }
    } while (0 < iVar3);

    if (0xc6 < *param_1) {
      *param_1 = 0xc6;
      return 0;
    }
    return 1;

  case 2:

    iVar3 = 3;
    do {
      sVar1 = *param_1;
      if (sVar1 == 0x13b) {
LAB_overlay0__8002a98c:
        iVar3 = 0;
        if ((param_2[1] & 0xa00) != 0) {
          FUN_80060840(1);
          *param_1 = *param_1 + 1;
        }
      }
      else {
        if (sVar1 < 0x13c) {
          if (sVar1 == 0x9e) {
            FUN_overlay0__8002a3a4(param_1 + 1);
          }
        }
        else if ((sVar1 == 0x1b9) || (sVar1 == 0x237)) goto LAB_overlay0__8002a98c;
        uVar2 = *param_2;
        *param_1 = *param_1 + 1;
        iVar3 = iVar3 + -1;
        if ((uVar2 & 0xa00) == 0) {
          iVar3 = 0;
        }
      }
      FUN_overlay0__8002a3ac(param_1 + 1);
    } while (0 < iVar3);

    sVar1 = 0x13b;
    if (1 < DAT_801d5df6) {
      sVar1 = 0x238;
    }
    if (sVar1 < *param_1) {
      *param_1 = sVar1;
      return 0;
    }
    break;

  case 3:
    if (DAT_801d5dec == 1) {
      iVar3 = 3;
      do {
        if (*param_1 == 0x78) {
          FUN_80060840(3);
LAB_overlay0__8002a7e4:
          uVar2 = *param_2;
          *param_1 = *param_1 + 1;
          iVar3 = iVar3 + -1;
          if ((uVar2 & 0xa00) == 0) {
            iVar3 = 0;
          }
        }
        else {
          if (*param_1 != 0x92) goto LAB_overlay0__8002a7e4;
          iVar3 = 0;
          if ((param_2[1] & 0xa00) != 0) {
            FUN_80060840(1);
            *param_1 = *param_1 + 1;
          }
        }
        if (iVar3 < 1) {
          if (*param_1 < 0x94) {
            return 1;
          }
          *param_1 = 0x93;
          return 0;
        }
      } while( true );
    }

    sVar1 = *param_1;
    if (*param_1 == 0x1d) {
      if ((param_2[1] & 0xa00) != 0) {
        FUN_80060840(1);
        sVar1 = *param_1;
        goto LAB_overlay0__8002a860;
      }
    }
    else {
LAB_overlay0__8002a860:
      *param_1 = sVar1 + 1;
    }

    if (0x1e < *param_1) {
      *param_1 = 0x1e;
      return 0;
    }
    break;

  default:

    iVar3 = 3;
    do {
      if (*param_1 == 0x9e) {
        FUN_overlay0__8002a3a4(param_1 + 1);
LAB_overlay0__8002aa80:
        uVar2 = *param_2;
        *param_1 = *param_1 + 1;
        iVar3 = iVar3 + -1;
        if ((uVar2 & 0xa00) == 0) {
          iVar3 = 0;
        }
      }
      else {
        if (*param_1 != 0x13b) goto LAB_overlay0__8002aa80;
        iVar3 = 0;
        if ((param_2[1] & 0xa00) != 0) {
          FUN_80060840(1);
          *param_1 = *param_1 + 1;
        }
      }
      FUN_overlay0__8002a3ac(param_1 + 1);
    } while (0 < iVar3);

    if (0x13c < *param_1) {
      *param_1 = 0x13c;
      return 0;
    }
    break;

  case 0xb:

    iVar3 = 3;
    do {
      if (*param_1 == 0xe5) {
        iVar3 = 0;
        if ((param_2[1] & 0xa00) != 0) {
          FUN_80060840(1);
          *param_1 = *param_1 + 1;
        }
      }
      else {
        uVar2 = *param_2;
        *param_1 = *param_1 + 1;
        iVar3 = iVar3 + -1;
        if ((uVar2 & 0xa00) == 0) {
          iVar3 = 0;
        }
      }
    } while (0 < iVar3);

    if (0xe6 < *param_1) {
      *param_1 = 0xe6;
      return 0;
    }
  }

  return 1;
}

void FUN_overlay0__8002ab60(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined auStack_38 [12];
  uint local_2c;
  undefined4 local_28;
  uint local_24;

  if (param_2 < 0x96) {

    FUN_8006ac68(auStack_38,0xffffffff);
    local_28 = param_1;
    FUN_8007da80(auStack_38,&LAB_8009313c);
    uVar2 = 0xa376e;
    iVar1 = param_2 + -0x50;
    local_2c = local_2c & 0xff9fffff | 0x200000;

    if (-1 < iVar1) {
      if (iVar1 < 0xc) {

        uVar2 = FUN_8006b548(&LAB_overlay0__8002f606_2,&LAB_overlay0__8002f60a_2,iVar1,0xc);
      }
      else {

        param_2 = param_2 + -0x5c;
        iVar1 = param_2;

        if (param_2 < 0) {
          iVar1 = 0;
        }
        if (0xc < param_2) {
          iVar1 = 0xc;
        }

        uVar2 = iVar1 * -0xc + 0x90;
        uVar2 = uVar2 | uVar2 * 0x100 | uVar2 * 0x10000 | 0x2000000;
        iVar1 = (iVar1 << 3) / 0xc;

        local_24 = uVar2;

        FUN_8006adb4(auStack_38,&DAT_801c6c99,0xa0 - iVar1,0x82,0);

        FUN_8006adb4(auStack_38,&DAT_801c6c99,iVar1 + 0xa0,0x82,0);
      }
    }

    local_24 = uVar2;

    FUN_8006adb4(auStack_38,&DAT_801c6c99,0xa0,0x82,0);
  }
  return;
}

void FUN_overlay0__8002ace0
               (undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_78;
  undefined local_77;
  undefined4 local_38;
  short local_34;
  short local_32;
  undefined2 local_30;
  undefined2 local_2e;

  if (8 < param_2) {
    param_2 = 8;
  }

  iVar1 = param_3 * 0x18;

  FUN_8007da80(param_7,0x80093130);

  local_78 = (char)param_3 + '1';
  local_77 = 0;

  *(undefined4 *)(param_7 + 0x14) = 0x2004670;
  *(uint *)(param_7 + 0xc) = *(uint *)(param_7 + 0xc) & 0xff9fffff | 0x200000;

  FUN_8006ac90(param_7,&local_78,param_3 * 4 + 0x12,iVar1 + 0x51,1);

  *(undefined4 *)(param_7 + 0x14) = 0x606060;

  if ((param_8 == 0) && (param_4 == 0)) {
    *(undefined4 *)(param_7 + 0x14) = 0x70543a;
  }

  FUN_8006ac90(param_7,&DAT_801d5948 + param_4 * 0xd0,param_3 * 4 + 0x1f,iVar1 + 0x51,0xffffffff);

  iVar2 = *(int *)(&DAT_800a9e34 + param_4 * 0xb40);

  if (param_6 == iVar2) {

    FUN_80068734(&local_78,iVar2);
  }
  else {

    FUN_8008cedc(&local_78,&DAT_801c6caa);

    if ((&DAT_800a9db0)[param_4 * 0xb40] != '\0') {

      FUN_80068b04(&local_78,param_6,iVar2);
    }

    uVar3 = param_5 - (short)(&DAT_800a9cbc)[param_4 * 0x5a0];

    if ((1 < uVar3) && (FUN_8008cf34(&local_78,&DAT_801c6cbd,uVar3 - 1), uVar3 == 2)) {
      FUN_8008cf34(&local_78,&DAT_801c6cb4);
    }
  }

  FUN_8006b3f4(param_7,&local_78,param_3 * 4 + 0x118,iVar1 + 0x51,7,6,1,0);

  local_30 = 0x130;
  local_34 = (short)(param_3 * 4) + 0xac;
  local_2e = 0x16;
  local_32 = (short)iVar1 + 0x4a;

  local_38 = FUN_8006b548(&DAT_overlay0__8002f614,&DAT_overlay0__8002f618,8 - param_2,8);

  FUN_800683fc(param_1,&local_38,0x20);
  FUN_8007da44(param_1,0);
  return;
}

void FUN_overlay0__8002af8c
               (undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
               int param_6)

{
  int iVar1;
  int iVar2;
  char local_78;
  undefined local_77;
  undefined4 local_38;
  short local_34;
  short local_32;
  undefined2 local_30;
  undefined2 local_2e;

  if (8 < param_2) {
    param_2 = 8;
  }

  iVar2 = param_3 * 4;

  FUN_8007da80(param_6,0x80093130);

  local_78 = (char)param_3 + '1';
  iVar1 = param_3 * 0x18 + 0x51;
  local_77 = 0;

  *(undefined4 *)(param_6 + 0x14) = 0x2004670;
  *(uint *)(param_6 + 0xc) = *(uint *)(param_6 + 0xc) & 0xff9fffff | 0x200000;

  FUN_8006ac90(param_6,&local_78,iVar2 + 0x12,iVar1,1);

  local_32 = (short)(param_3 * 0x18) + 0x4a;

  *(undefined4 *)(param_6 + 0x14) = 0x606060;

  if (param_4 == 0) {
    *(undefined4 *)(param_6 + 0x14) = 0x70543a;
  }

  FUN_8006ac90(param_6,&DAT_801d5948 + param_4 * 0xd0,iVar2 + 0x1f,iVar1,0xffffffff);

  FUN_8008cf34(&local_78,&DAT_801c78bd,param_5);

  FUN_8006ae28(param_6,&local_78,iVar2 + 0x118,iVar1,0xffffffff);

  local_30 = 0x130;
  local_2e = 0x16;
  local_34 = (short)iVar2 + 0xac;

  local_38 = FUN_8006b548(&stack0x00000018,&DAT_overlay0__8002f618,8 - param_2,8);

  FUN_800683fc(param_1,&local_38,0x20);
  FUN_8007da44(param_1,0);
  return;
}

void FUN_overlay0__8002b170(short *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined auStack_a8 [12];
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined auStack_88 [63];
  char acStack_49 [17];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;

  local_2c = &DAT_801c6ca0;
  FUN_8006ac68(auStack_a8,0xffffffff);
  local_98 = param_2;
  FUN_8007da80(auStack_a8,&LAB_8009313c);
  local_9c = local_9c & 0xff9fffff | 0x200000;

  if (*param_1 < 0) {
    return;
  }

  if (DAT_801d5866 == 3) {

    if (DAT_801d5dec != 1) {
      local_94 = 0x6e;

      FUN_8006adb4(auStack_a8,local_2c + 0x3eb,0xa0,0xa0,0);
      return;
    }

    FUN_overlay0__8002ab60(param_2);

    iVar17 = *param_1 + -0x78;

    if (0 < iVar17) {

      pcVar19 = (char *)0x0;
      puVar20 = local_2c + 0x3eb;
      iVar7 = FUN_8007830c(_LAB_80092e6a_2,&DAT_801d586c);
      uVar14 = DAT_801d5df0;
      iVar15 = iVar7 + 0x44;
      local_38 = 0x2000064;

      uVar8 = FUN_overlay0__8003d7b8(iVar15,4);
      if (uVar14 < uVar8) {
        iVar18 = (uint)DAT_801d5868 * 0xa4 + (uint)DAT_801d5867 * 0x668;
        if (((&DAT_801cacf8)[iVar18 + 1] == '\0') &&
           ((byte)(&DAT_801cacf8)[iVar18 + 2] + 1 == (uint)*(byte *)(iVar7 + 0x74))) {
          pcVar19 = "";
          puVar20 = local_2c + 0x17e8;
          local_38 = 0x21e3264;
        }
      }

      uVar8 = FUN_overlay0__8003d7b8(iVar15,3);
      if (uVar14 < uVar8) {
        pcVar19 = (char *)0x8005b1a4;
        puVar20 = &UNK_801c703c;
        local_38 = 0x21e3264;
      }

      uVar8 = FUN_overlay0__8003d7b8(iVar15,2);
      if (uVar14 < uVar8) {
        pcVar19 = "";
        puVar20 = &UNK_801c7051;
        local_38 = 0x2645a46;
      }

      uVar8 = FUN_overlay0__8003d7b8(iVar15,1);
      if (uVar14 < uVar8) {
        pcVar19 = "P";
        puVar20 = &DAT_801c7065;
        local_38 = 0x2284664;
      }

      if (iVar17 == 1) {
        FUN_80060840(3);
      }

      if (0xc < iVar17) {
        iVar17 = 0xc;
      }

      local_94 = FUN_8006b548(&LAB_overlay0__8002f61a_2,&local_38,iVar17,0xc);
      FUN_8006adb4(auStack_a8,puVar20,0xa0,0xce,0xffffffff);
      FUN_8007da80(auStack_a8,0x80093130);
      FUN_80068734(auStack_88,DAT_801d5df0);
      FUN_8006b49c(auStack_a8,auStack_88,0xa0,0xb2,8,7,1,0);

      if (pcVar19 != (char *)0x0) {

        iVar17 = (iVar17 << 4) / 0xc;
        bVar1 = (&DAT_overlay0__8002f5f8)[-iVar17];
        iVar7 = ((int)((uint)*(ushort *)(pcVar19 + 6) << 0x10) >> 0x10) -
                ((int)((uint)*(ushort *)(pcVar19 + 6) << 0x10) >> 0x1f) >> 1;
        bVar2 = (&DAT_overlay0__8002f5e8)[iVar17];
        uVar9 = FUN_8006b548(&DAT_overlay0__8002f604,&LAB_overlay0__8002f5fa_2,iVar17,0x10);

        if (iVar17 == 0x10) {
          uVar9 = 0x808080;
        }

        sVar3 = *(short *)(pcVar19 + 4);
        iVar17 = FUN_8007e864(param_2,uVar9);
        sVar5 = 0xa0 - (sVar3 >> 1);
        sVar6 = (short)((uint)bVar2 * iVar7 >> 8);
        sVar3 = (sVar3 >> 1) + 0xa0;

        *(short *)(iVar17 + 0x14) = sVar5 - sVar6;
        *(short *)(iVar17 + 0xc) = sVar3 - sVar6;
        sVar13 = (short)((int)((uint)bVar1 * iVar7) >> 7);
        sVar12 = 0x6e - sVar13;
        *(short *)(iVar17 + 0xe) = sVar12;
        *(short *)(iVar17 + 6) = sVar12;
        sVar13 = sVar13 + 0x6e;
        *(short *)(iVar17 + 4) = sVar5 + sVar6;
        *(short *)(iVar17 + 0x1c) = sVar3 + sVar6;
        *(short *)(iVar17 + 0x1e) = sVar13;
        *(short *)(iVar17 + 0x16) = sVar13;

        cVar11 = *pcVar19;
        *(char *)(iVar17 + 0x18) = cVar11;
        *(char *)(iVar17 + 8) = cVar11;
        cVar11 = *pcVar19 + pcVar19[4] + -1;
        *(char *)(iVar17 + 0x20) = cVar11;
        *(char *)(iVar17 + 0x10) = cVar11;
        cVar11 = pcVar19[1];
        *(char *)(iVar17 + 0x11) = cVar11;
        *(char *)(iVar17 + 9) = cVar11;
        cVar11 = pcVar19[1] + pcVar19[6] + -1;
        *(char *)(iVar17 + 0x21) = cVar11;
        *(char *)(iVar17 + 0x19) = cVar11;

        *(undefined2 *)(iVar17 + 10) = *(undefined2 *)(pcVar19 + 2);
        *(ushort *)(iVar17 + 0x12) = *(ushort *)(pcVar19 + 8) | 0x20;
      }
    }

    iVar17 = *param_1 + -0x5a;
    if (iVar17 < 1) {
      return;
    }
    uVar14 = iVar17 * 4;
    if (0x10 < iVar17) {
      iVar17 = 0x10;
      uVar14 = 0x40;
    }
    uVar14 = uVar14 | iVar17 << 10;
    uVar8 = iVar17 << 0x12;
    goto LAB_overlay0__8002bb68;
  }

  iVar7 = 0;
  FUN_overlay0__8002ab60(param_2);
  FUN_overlay0__8002a630(param_1 + 1,param_2,0xa0,0xd8);
  uVar9 = 0xffffffff;
  iVar17 = 5;
  pcVar19 = acStack_49 + 6;
  uVar14 = (uint)DAT_801d58b6;

  do {
    *pcVar19 = -1;
    iVar17 = iVar17 + -1;
    pcVar19 = pcVar19 + -1;
  } while (-1 < iVar17);

  iVar17 = 0x184;
  for (iVar15 = 0; iVar15 < 6; iVar15 = iVar15 + 1) {
    if ((int)(char)(&UNK_800a9c80)[iVar17] - 1U < 6) {
      acStack_49[(char)(&UNK_800a9c80)[iVar17]] = (char)iVar15;
    }
    iVar17 = iVar17 + 0xb40;
  }

  for (iVar17 = 0; iVar17 < 6; iVar17 = iVar17 + 1) {
    if (-1 < acStack_49[iVar17 + 1]) {
      uVar9 = *(undefined4 *)(&DAT_800a9e34 + acStack_49[iVar17 + 1] * 0xb40);
      iVar7 = DAT_801d586b + 1;
      iVar15 = (int)(short)(&DAT_800a9cbc)[acStack_49[iVar17 + 1] * 0x5a0];
      if ((short)(&DAT_800a9cbc)[acStack_49[iVar17 + 1] * 0x5a0] <= iVar7)
      goto LAB_overlay0__8002b77c;
      break;
    }
  }
  iVar15 = iVar7;

LAB_overlay0__8002b77c:

  switch(DAT_801d5866) {
  case 0:
    if (uVar14 != 0) {
      iVar7 = 0xbe;
      iVar17 = 0;
      do {
        iVar18 = (int)*param_1;
        iVar16 = iVar18 - iVar7;
        if (iVar16 < 0) goto LAB_overlay0__8002b82c;
        iVar7 = iVar7 + 0x10;
        iVar18 = iVar17 + 1;

        FUN_overlay0__8002ace0
                  (param_2,iVar16,iVar17,(int)acStack_49[iVar17 + 1],iVar15,uVar9,auStack_a8,1);
        iVar17 = iVar18;
      } while (iVar18 < (int)uVar14);
    }
    iVar18 = (int)*param_1;
LAB_overlay0__8002b82c:

    iVar18 = iVar18 + -0xee;
    if (-1 < iVar18) {
      puVar20 = &DAT_801c7814;
      local_34 = 0x144080;
      if (acStack_49[1] != '\0') {
        puVar20 = &DAT_801c782b;
      }
      if (8 < iVar18) {
        iVar18 = 8;
      }

      local_94 = FUN_8006b548(&DAT_overlay0__8002f604,&local_34,iVar18,8);
      FUN_8007da80(auStack_a8,&LAB_8009313c);
      uVar9 = 0xb4;
LAB_overlay0__8002b928:

      FUN_8006adb4(auStack_a8,puVar20,0xa0,uVar9,0);
    }
    break;
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    break;
  case 2:
    if (DAT_801d5df6 < 2) goto switchD_overlay0__8002b7a8_caseD_3;
    if (*param_1 < 0x1ba) {
      if (*param_1 < 0x13c) goto switchD_overlay0__8002b7a8_caseD_3;
      local_2c = &DAT_801c78d7;
      bVar4 = uVar14 != 0;
      iVar17 = 0;

      for (iVar7 = 0x13c; (bVar4 && (-1 < *param_1 - iVar7)); iVar7 = iVar7 + 0x10) {

        FUN_overlay0__8002af8c
                  (param_2,*param_1 - iVar7,iVar17,(int)acStack_49[iVar17 + 1],
                   (int)(char)(&DAT_801d5e82)[acStack_49[iVar17 + 1]],auStack_a8,0x22c62bf);
        bVar4 = iVar17 + 1 < (int)uVar14;
        iVar17 = iVar17 + 1;
      }
    }
    else {

      local_2c = &DAT_801c78c6;
      FUN_8005e6b0(&DAT_801d5df4,acStack_49 + 1);
      bVar4 = uVar14 != 0;
      iVar17 = 0;

      for (iVar7 = 0x1ba; (bVar4 && (-1 < *param_1 - iVar7)); iVar7 = iVar7 + 0x10) {
        iVar15 = (int)(acStack_49 + 1)[iVar17];

        FUN_overlay0__8002af8c
                  (param_2,*param_1 - iVar7,iVar17,iVar15,(int)(char)(&DAT_801d5e7c)[iVar15],
                   auStack_a8,0x2bf622c);
        bVar4 = iVar17 + 1 < (int)uVar14;
        iVar17 = iVar17 + 1;
      }
    }
    break;
  default:
switchD_overlay0__8002b7a8_caseD_3:

    if (uVar14 != 0) {
      iVar7 = 0xbe;
      iVar17 = 0;
      do {
        iVar18 = *param_1 - iVar7;
        if (iVar18 < 0) break;
        iVar7 = iVar7 + 0x10;
        iVar16 = iVar17 + 1;

        FUN_overlay0__8002ace0
                  (param_2,iVar18,iVar17,(int)acStack_49[iVar17 + 1],iVar15,uVar9,auStack_a8,0);
        iVar17 = iVar16;
      } while (iVar16 < (int)uVar14);
    }
    break;
  case 0xb:
    iVar17 = *param_1 + -0xbe;
    if (-1 < iVar17) {
      puVar20 = &UNK_801c84aa;
      local_30 = 0x144080;
      if (acStack_49[1] != '\0') {
        puVar20 = &DAT_801c84bc;
      }
      if (8 < iVar17) {
        iVar17 = 8;
      }

      local_94 = FUN_8006b548(&DAT_overlay0__8002f604,&local_30,iVar17,8);
      FUN_8007da80(auStack_a8,&LAB_8009313c);
      uVar9 = 0x8c;
      goto LAB_overlay0__8002b928;
    }
  }

  if ((DAT_801d5866 != 1) && (((DAT_801d5866 == 0 || (0xb < DAT_801d5866)) || (DAT_801d5866 < 6))))
  {

    iVar17 = *param_1 + -0x9e;
    if (0 < iVar17) {
      uVar14 = iVar17 * 4;
      if (0x10 < iVar17) {
        iVar17 = 0x10;
        uVar14 = 0x40;
      }

      puVar10 = (undefined2 *)
                FUN_8007d024(param_2,uVar14 | iVar17 << 10 | iVar17 << 0x12 | 0x2000000);
      puVar10[1] = 0x32;
      puVar10[2] = 0x140;
      *puVar10 = 0;
      puVar10[3] = 0xbe;
      FUN_8007da44(param_2,0x40);
    }

    if (*param_1 < 0x96) {
      return;
    }

    puVar10 = (undefined2 *)FUN_8007d024(param_2,0x80);
    *puVar10 = 0;
    puVar10[1] = 0x30;
    puVar10[2] = 0x140;
    puVar10[3] = 2;
    FUN_8007da80(auStack_a8,&LAB_8009313c);
    local_94 = 0xa376f;
    FUN_8006adb4(auStack_a8,local_2c,0xa0,0x2e,0);

    puVar10 = (undefined2 *)FUN_8007d024(param_2,0);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0x140;
    puVar10[3] = 0x30;
    return;
  }

  iVar17 = *param_1 + -0x9e;
  if (iVar17 < 1) {
    return;
  }

  iVar7 = iVar17 * 2;
  if (0x10 < iVar17) {
    iVar17 = 0x10;
    iVar7 = 0x20;
  }
  iVar7 = iVar7 + iVar17;
  uVar14 = iVar7 * 2 | iVar7 * 0x200;
  uVar8 = iVar7 * 0x20000;

LAB_overlay0__8002bb68:

  puVar10 = (undefined2 *)FUN_8007d024(param_2,uVar14 | uVar8 | 0x2000000);
  puVar10[2] = 0x140;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[3] = 0xf0;
  FUN_8007da44(param_2,0x40);

  return;
}

void FUN_overlay0__8002bcf0(undefined2 *param_1,uint param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;

  sVar1 = (&DAT_80093150)[(param_2 & 0xfff) + 0x400];

  sVar2 = (&DAT_80093150)[param_2 & 0xfff];

  *param_1 = (short)(((param_3 * sVar1 >> 0xc) - (param_4 * sVar2 >> 0xc)) + 4 >> 4);

  param_1[1] = (short)((param_4 * sVar1 >> 0xc) + (param_3 * sVar2 >> 0xc) + -8 >> 4);
  return;
}

int FUN_overlay0__8002bd84(int param_1,undefined2 param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  *(undefined2 *)(param_1 + 0x882) = *(undefined2 *)(param_1 + 0x3c2);
  *(undefined2 *)(param_1 + 0x884) = *(undefined2 *)(param_1 + 0x134);
  *(undefined2 *)(param_1 + 0x880) = param_2;

  iVar8 = 0;
  iVar4 = (*(short *)(param_1 + 0x884) + 999) / 1000;
  iVar6 = iVar4 * 4;

  *(short *)(param_1 + 0x886) = ((short)iVar4 * 0x1f0 + (short)iVar6) * 2;
  *(short *)(param_1 + 0x888) = (short)iVar6;
  *(short *)(param_1 + 0x88a) = *(short *)(param_1 + 0x882) / 0xfa;

  if (6 < iVar4) {
    pcVar2 = &DAT_overlay0__8002f868;
    do {
      if (*pcVar2 < '\0') break;
      pcVar2 = pcVar2 + 1;
      iVar8 = iVar8 + 1;
    } while (*pcVar2 < iVar4);
  }

  iVar7 = 0;
  iVar5 = 0xc;
  iVar4 = 0;
  bVar1 = iVar6 < 0;

  while (iVar3 = param_1 + 0x880 + iVar5, !bVar1) {
    iVar9 = iVar4 / iVar6;
    iVar5 = iVar5 + 8;
    iVar4 = iVar4 + 0x96c;
    iVar7 = iVar7 + 1;
    iVar9 = (iVar9 + 0x4fa) * 0x10000 >> 0x10;

    FUN_overlay0__8002bcf0(iVar3,iVar9,0x281,0);
    FUN_overlay0__8002bcf0(iVar3 + 4,iVar9,0x204,0);
    bVar1 = iVar6 < iVar7;
  }
  return iVar8;
}

void FUN_overlay0__8002bf14(undefined4 param_1,short param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;

  puVar1 = (uint *)FUN_8007e0b0();
  uVar2 = *param_4;
  iVar3 = (int)param_2;

  puVar1[4] = uVar2 | 0x38000000;
  *puVar1 = uVar2 | 0x38000000;
  uVar2 = param_4[1];
  puVar1[6] = uVar2;
  puVar1[2] = uVar2;

  FUN_overlay0__8002bcf0(puVar1 + 1,iVar3,param_4[2],-param_4[4]);
  FUN_overlay0__8002bcf0(puVar1 + 3,iVar3,param_4[2],param_4[4]);
  FUN_overlay0__8002bcf0(puVar1 + 5,iVar3,param_4[3],-param_4[5]);
  FUN_overlay0__8002bcf0(puVar1 + 7,iVar3,param_4[3],param_4[5]);

  puVar1[1] = puVar1[1] + param_3;
  puVar1[3] = puVar1[3] + param_3;
  puVar1[5] = puVar1[5] + param_3;
  puVar1[7] = puVar1[7] + param_3;
  return;
}

void FUN_overlay0__8002c00c(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;

  uVar9 = param_4 << 0x10 | param_3;

  piVar4 = (int *)FUN_80081478(param_1,0x2606060);
  iVar6 = *(short *)(param_2 + 0x880) * 0xc;

  *piVar4 = (param_3 - ((int)((uint)*(ushort *)(&DAT_overlay0__8002f634 + iVar6) << 0x10) >> 0x11))
            + (param_4 - ((int)((uint)*(ushort *)(&DAT_overlay0__8002f636 + iVar6) << 0x10) >> 0x11)
              ) * 0x10000;

  piVar4[1] = *(int *)(&DAT_overlay0__8002f630 + *(short *)(param_2 + 0x880) * 0xc);
  uVar10 = 0x2505050;
  piVar4[2] = *(int *)(&DAT_overlay0__8002f634 + *(short *)(param_2 + 0x880) * 0xc);

  iVar6 = 0;

  FUN_8007da44(param_1,*(ushort *)(&LAB_overlay0__8002f638 + *(short *)(param_2 + 0x880) * 0xc) |
                       0x20);

  sVar1 = *(short *)(param_2 + 0x888);
  sVar2 = *(short *)(param_2 + 0x88a);

  if (0 < sVar1) {
    bVar3 = 0 < sVar2;
    do {

      if (!bVar3) {
        uVar10 = 0x20000f4;
      }

      iVar5 = FUN_8007d060(param_1,uVar10);
      iVar7 = param_2 + 0x880 + iVar6 * 8;
      iVar6 = iVar6 + 1;

      *(uint *)(iVar5 + 4) = *(int *)(iVar7 + 0xc) + uVar9;
      iVar8 = param_2 + 0x880 + iVar6 * 8;
      *(uint *)(iVar5 + 8) = *(int *)(iVar7 + 0x10) + uVar9;
      *(uint *)(iVar5 + 0xc) = *(int *)(iVar8 + 0xc) + uVar9;
      *(uint *)(iVar5 + 0x10) = *(int *)(iVar8 + 0x10) + uVar9;
      bVar3 = iVar6 < sVar2;
    } while (iVar6 < sVar1);
  }

  FUN_8007da44(param_1,0);
  return;
}

void FUN_overlay0__8002c1cc(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  uVar6 = param_4 << 0x10 | param_3;

  iVar5 = ((*(short *)(param_2 + 0x6d8) * 0x96c) / (int)*(short *)(param_2 + 0x886) + 0x4fa) *
          0x10000 >> 0x10;

  FUN_overlay0__8002bf14(param_1,iVar5,uVar6,&LAB_overlay0__8002f87e_2);
  FUN_overlay0__8002bf14(param_1,iVar5,uVar6,&LAB_overlay0__8002f896_2);

  uVar4 = 0x284078;
  if (*(char *)(param_2 + 0x645) != '\x01') {
    uVar4 = 0x1c2644;
  }

  piVar2 = (int *)FUN_80081478(param_1,uVar4);
  *piVar2 = (param_3 -
            (((int)((uint)*(ushort *)
                           (&DAT_overlay0__8002f70c +
                           (char)(&DAT_overlay0__8002f874)[*(byte *)(param_2 + 0x644)] * 0xc) <<
                   0x10) >> 0x11) + -0x17)) +
            (param_4 -
            (((int)((uint)*(ushort *)
                           (&DAT_overlay0__8002f70e +
                           (char)(&DAT_overlay0__8002f874)[*(byte *)(param_2 + 0x644)] * 0xc) <<
                   0x10) >> 0x11) + -2)) * 0x10000;

  piVar2[1] = *(int *)(&LAB_overlay0__8002f706_2 +
                      (char)(&DAT_overlay0__8002f874)[*(byte *)(param_2 + 0x644)] * 0xc);
  piVar2[2] = *(int *)(&DAT_overlay0__8002f70c +
                      (char)(&DAT_overlay0__8002f874)[*(byte *)(param_2 + 0x644)] * 0xc);

  FUN_8007da44(param_1,0x28);
  psVar3 = (short *)FUN_8007d024(param_1,0x21e1e1e);
  *psVar3 = (short)param_3 + 0x10;
  psVar3[1] = (short)param_4 + -6;
  psVar3[2] = 0xe;
  psVar3[3] = 0x10;
  FUN_8007da44(param_1,0x40);

  piVar2 = (int *)FUN_80081478(param_1,0x284078);
  *piVar2 = (param_3 - 2) + (param_4 + 0x20) * 0x10000;
  piVar2[1] = 0x3923b0d8;
  piVar2[2] = 0x100028;
  FUN_8007da44(param_1,0x28);

  bVar1 = 0;
  iVar5 = 100;
  iVar7 = 0;
  iVar8 = param_3 + 2;
  uVar6 = *(ushort *)(param_2 + 0x6da) / 100;

  do {
    iVar9 = (int)uVar6 / iVar5;
    uVar6 = uVar6 - iVar9 * iVar5;

    if ((bool)(iVar9 != 0 | bVar1)) {
      piVar2 = (int *)FUN_80081478(param_1,0x284078);
      iVar9 = iVar9 * 0xc;

      *piVar2 = (iVar8 - ((int)((uint)*(ushort *)(&DAT_overlay0__8002f67c + iVar9) << 0x10) >> 0x11)
                ) + ((param_4 + 0x18) -
                    ((int)((uint)*(ushort *)(&DAT_overlay0__8002f67e + iVar9) << 0x10) >> 0x11)) *
                    0x10000;
      piVar2[1] = *(int *)(&LAB_overlay0__8002f678 + iVar9);
      bVar1 = 1;
      piVar2[2] = *(int *)(&DAT_overlay0__8002f67c + iVar9);
    }

    iVar5 = iVar5 / 10;
    iVar8 = iVar8 + 0xc;
    if (iVar5 == 1) {
      bVar1 = 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);

  FUN_8007da44(param_1,0x28);
  return;
}

void FUN_overlay0__8002c584(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar2 = 0x2000;

  if (*(short *)(param_2 + 0x154) != 0) {
    iVar3 = *(short *)(param_2 + 0x76e) + -0x1000;

    if (0x3000 < *(short *)(param_2 + 0x154)) {
      iVar2 = 0x4000;
    }

    if (iVar3 < 0) {
      iVar2 = iVar3 * 0x555;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      iVar2 = iVar2 >> 0xc;
    }
    else {
      iVar2 = (iVar3 * 0x555) / iVar2;
    }

    iVar2 = (iVar2 + 0x6aa) * 0x10000 >> 0x10;
    uVar4 = param_4 << 0x10 | param_3;

    FUN_overlay0__8002bf14(param_1,iVar2,uVar4,&LAB_overlay0__8002f8ae_2);
    FUN_overlay0__8002bf14(param_1,iVar2,uVar4,&DAT_overlay0__8002f8c8);

    piVar1 = (int *)FUN_80081478(param_1,0x2606060);
    *piVar1 = (param_3 - 0xe) + (param_4 + -0xe) * 0x10000;
    piVar1[1] = 0x39a3c800;
    piVar1[2] = 0x1c001c;
    FUN_8007da44(param_1,0x28);

    piVar1 = (int *)FUN_80081478(param_1,0x2282828);
    *piVar1 = (param_3 - 0xe) + (param_4 + -0xe) * 0x10000;
    piVar1[1] = 0x39e0c81c;
    piVar1[2] = 0x1c001c;
    FUN_8007da44(param_1,8);
  }
  return;
}

void FUN_overlay0__8002c76c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined auStack_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  char local_80 [64];
  char local_40 [8];
  undefined2 *local_38;
  uint local_34;
  uint local_30;

  bVar2 = DAT_801d5866;
  local_38 = &DAT_801d5e88;
  local_34 = (uint)(*(char *)(param_2 + 0x728) != '\0');
  local_30 = (uint)DAT_801d586b;
  iVar13 = 3;

  if (*(short *)(param_2 + 0x18) == 3) {
    local_38 = &DAT_801da3a0;
  }

  if (DAT_801d5866 == 2) {
LAB_overlay0__8002c830:

    iVar11 = *(char *)(param_2 + 0x77c) + -1;
    iVar12 = iVar11;
    if (iVar11 < 0) {
      iVar12 = 0;
    }
    if (5 < iVar11) {
      iVar12 = 5;
    }

    piVar4 = (int *)FUN_80081478(param_1,0x284078);
    iVar12 = iVar12 * 0xc;
    *piVar4 = (param_3 - (((int)((uint)*(ushort *)(iVar12 + -0x7ffd0864) << 0x10) >> 0x11) + -0x44))
              + (param_4 - (((int)((uint)*(ushort *)(iVar12 + -0x7ffd0862) << 0x10) >> 0x11) + -0xe)
                ) * 0x10000;

    piVar4[1] = *(int *)(iVar12 + -0x7ffd0868);
    piVar4[2] = *(int *)(iVar12 + -0x7ffd0864);
    FUN_8007da44(param_1,*(undefined2 *)(&UNK_overlay0__8002f6f8 + iVar12));
  }
  else if (DAT_801d5866 < 3) {
    if (DAT_801d5866 == 0) goto LAB_overlay0__8002c830;
  }
  else if ((DAT_801d5866 == 4) || (DAT_801d5866 == 0xb)) {
    goto LAB_overlay0__8002c830;
  }

  FUN_8006ac68(auStack_a0,0xffffffff);
  local_90 = param_1;
  FUN_8007da80(auStack_a0,&PTR_PTR_DAT_80093124);
  local_8c = 0x284078;
  iVar12 = param_4 + 0x4c;
  sVar1 = (short)param_3;

  switch(bVar2) {
  case 0:
  case 2:
  case 4:
  case 0xb:

    iVar11 = FUN_8006ac90(auStack_a0,0x801c6c57,param_3 + 4,param_4 + 0x26,0);
    iVar8 = FUN_8006ac90(auStack_a0,&DAT_801c6c64,param_3 + 4,param_4 + 0x40,0);
    if (iVar11 < iVar8) {
      iVar11 = iVar8;
    }

    DAT_overlay0__8002f8e0 = sVar1 + 2;
    DAT_overlay0__8002f8e4 = (short)iVar11 + 5;
    DAT_overlay0__8002f8e2 = (short)param_4 + 0x21;
    FUN_8006b77c(param_1,&DAT_overlay0__8002f8e0);
    DAT_overlay0__8002f8e2 = (short)param_4 + 0x3b;
    FUN_8006b77c(param_1);

    if (local_34 == 0) {
      iVar11 = DAT_overlay0__80046f64 / 3 + ((DAT_overlay0__8002f864 & 0xf) * 1000) / 900;
    }
    else {
      iVar11 = *(int *)(local_38 + 0x7c);
    }
    FUN_80068734(local_80,iVar11);
    FUN_8006b3f4(auStack_a0,local_80,param_3 + 0x46,param_4 + 0x31,7,5,0,2);
    break;

  case 3:
    iVar12 = param_4 + 0x26;
    if ((DAT_801c98a0._2_1_ < 4) && (1 < DAT_801c98a0._2_1_)) {
      iVar12 = param_4 + 0x14;
    }
    sVar3 = FUN_8006ac90(auStack_a0,&DAT_801c6c64,param_3 + 4,iVar12,0);
    DAT_overlay0__8002f8e0 = sVar1 + 2;
    DAT_overlay0__8002f8e4 = sVar3 + 5;
    DAT_overlay0__8002f8e2 = (short)iVar12 + -5;
    FUN_8006b77c(param_1);
    iVar12 = iVar12 + 0xc;
    break;

  case 7:
  case 8:
  case 9:
    param_4 = param_4 + -0x12;
  case 1:
  case 6:
  case 10:
    iVar12 = param_4 + 0x32;
    iVar13 = 6;
    sVar3 = FUN_8006ac90(auStack_a0,&DAT_801c6c64,param_3 + 4,param_4 + 0x26,0);
    DAT_overlay0__8002f8e0 = sVar1 + 2;
    DAT_overlay0__8002f8e4 = sVar3 + 5;
    DAT_overlay0__8002f8e2 = (short)param_4 + 0x21;
    FUN_8006b77c(param_1);
  }

  iVar11 = (int)(short)local_38[2];
  if (DAT_800a951c == '\0') {

    if (local_34 == 0) {
      iVar13 = iVar11 - (iVar13 + -1);
    }
    else {
      iVar13 = (iVar11 + -1) - (iVar13 + -1);
    }
    iVar8 = iVar13 * 0x14 + 8;

    for (; iVar13 < iVar11; iVar13 = iVar13 + 1) {
      if (-1 < iVar13) {
        FUN_80068734(local_80,*(undefined4 *)((int)local_38 + iVar8));
        FUN_8006b3f4(auStack_a0,local_80,param_3 + 0x46,iVar12,7,5,0,2);
        iVar12 = iVar12 + 9;
      }
      iVar8 = iVar8 + 0x14;
    }
  }
  else {

    iVar13 = FUN_overlay0__8003d1e4(param_2 + 0x2c);
    uVar5 = FUN_8005e378(local_38,iVar13 + -1);
    FUN_80068734(local_80,uVar5);
    iVar13 = FUN_8006b3f4(auStack_a0,local_80,param_3 + 0x46,iVar12,7,5,0,2);
    FUN_8006b3f4(auStack_a0,&DAT_overlay0__8002f278,param_3 - (iVar13 + -0x46),iVar12,7,5,0,2);
    FUN_8006ac90(auStack_a0,&DAT_overlay0__8002f27c,param_3 + 0x46,iVar12,0);
    iVar12 = iVar12 + 9;
  }

  if (local_34 == 0) {
    FUN_80068734(local_80,(DAT_overlay0__80046f64 / 3 - *(int *)(param_2 + 0x7ac)) +
                          ((DAT_overlay0__8002f864 & 0xf) * 1000) / 900);
    FUN_8006b3f4(auStack_a0,local_80,param_3 + 0x46,iVar12,7,5,0,2);
  }

  switch(bVar2) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
  case 10:
  case 0xb:
    break;
  default:
    goto switchD_overlay0__8002cdbc_caseD_3;
  }

  FUN_8006ac90(auStack_a0,&DAT_801c6c50,param_3 + 4,param_4 + 8,0);
  FUN_8007da80(auStack_a0,0x80093130);
  uVar6 = (uint)*(short *)(param_2 + 0x634);
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  pcVar10 = local_80;
  if ((int)local_30 < (int)uVar6) {
    uVar6 = local_30;
  }
  iVar13 = param_3 + 0xc;

  if (bVar2 == 6) {
LAB_overlay0__8002ce58:
    if (999 < (int)uVar6) {
      uVar6 = 999;
    }

    FUN_8008cf34(local_40,&LAB_overlay0__8002f27e_2,uVar6);
    iVar12 = FUN_8008cfc4(local_40);
    iVar11 = 0;

    if (0 < iVar12) {
      do {
        pcVar9 = local_40 + iVar11;
        iVar11 = iVar11 + 1;
        *pcVar10 = *pcVar9 + -0x30;
        pcVar10 = pcVar10 + 1;
      } while (iVar11 < iVar12);
    }
    iVar13 = iVar13 + (4 - iVar12) * 8;
  }
  else {

    if (bVar2 < 7) {
      if (bVar2 == 1) goto LAB_overlay0__8002ce58;
    }
    else if (bVar2 == 10) goto LAB_overlay0__8002ce58;

    cVar7 = (char)((int)uVar6 / 10);
    if ((int)uVar6 / 10 == 0) {
      iVar13 = param_3 + 0x14;
    }
    else {
      pcVar10 = local_80 + 1;
      local_80[0] = cVar7;
    }
    *pcVar10 = (char)uVar6 + cVar7 * -10;
    pcVar10[1] = '\v';
    pcVar9 = pcVar10 + 2;

    cVar7 = (char)((int)local_30 / 10);
    if ((int)local_30 / 10 != 0) {
      *pcVar9 = cVar7;
      pcVar9 = pcVar10 + 3;
    }
    *pcVar9 = (char)local_30 + cVar7 * -10;
    pcVar10 = pcVar9 + 1;
  }

  *pcVar10 = -1;
  pcVar10 = local_80;
  cVar7 = local_80[0];

  while (pcVar10 = pcVar10 + 1, -1 < cVar7) {
    piVar4 = (int *)FUN_80081478(param_1,0x284078);
    iVar12 = cVar7 * 0xc;

    *piVar4 = (iVar13 - ((int)((uint)*(ushort *)(&DAT_overlay0__8002f70c + iVar12) << 0x10) >> 0x11)
              ) + (param_4 -
                  (((int)((uint)*(ushort *)(&DAT_overlay0__8002f70e + iVar12) << 0x10) >> 0x11) +
                  -0x13)) * 0x10000;
    piVar4[1] = *(int *)(&LAB_overlay0__8002f706_2 + iVar12);
    iVar13 = iVar13 + 8;
    piVar4[2] = *(int *)(&DAT_overlay0__8002f70c + iVar12);
    cVar7 = *pcVar10;
  }

  FUN_8007da44(param_1,8);

switchD_overlay0__8002cdbc_caseD_3:
  return;
}

void FUN_overlay0__8002d058(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined auStack_28 [16];

  FUN_80068734(auStack_28,*param_2);
  FUN_8006b3f4(param_1,auStack_28,param_3 + 3,param_4,7,5,0,2);

  FUN_80068ca0(auStack_28,*(undefined2 *)(param_2 + 4));
  FUN_8008d020(auStack_28,&DAT_801c6c87);

  if (*param_2 != -1) {
    FUN_8006b184(param_1,auStack_28,param_3,param_4 + 9,0,3,0xffffffff);
  }
  return;
}

void FUN_overlay0__8002d12c
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  short *psVar1;
  undefined auStack_28 [16];

  FUN_80068734(auStack_28);
  FUN_8006b3f4(param_1,auStack_28,param_3 + 3,param_4,7,5,0,2);

  psVar1 = (short *)FUN_8007d024(param_5,param_6);
  psVar1[1] = (short)param_4 + -6;
  *psVar1 = (short)param_3 + -0x36;
  psVar1[2] = 4;
  psVar1[3] = 4;

  psVar1 = (short *)FUN_8007d024(param_5,0);
  *psVar1 = (short)param_3 + -0x37;
  psVar1[1] = (short)param_4 + -7;
  psVar1[2] = 6;
  psVar1[3] = 6;
  return;
}

void FUN_overlay0__8002d20c
               (undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 local_58;
  undefined local_54;

  if (param_5 == 0) {

    FUN_80068734(&local_58,*(undefined4 *)(param_2 + 4));
    FUN_8006b3f4(param_1,&local_58,param_3 + 3,param_4,7,5,0,2);
  }
  else {

    FUN_80068ca0(&local_58,*(undefined4 *)(param_2 + 4));
    FUN_8008d020(&local_58,&DAT_801c6c87);

    if (*(int *)(param_2 + 4) == -1) {
      local_58 = 0x2d2d2d2d;
      local_54 = 0;
    }

    FUN_8006b184(param_1,&local_58,param_3,param_4,0,3,0xffffffff);
  }
  return;
}

void FUN_overlay0__8002d308(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined auStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;

  uVar4 = DAT_801d5866;

  bVar2 = true;
  bVar1 = true;
  bVar3 = false;
  puVar8 = (undefined4 *)0x0;
  local_30 = 0;

  FUN_8006ac68(auStack_50,0xffffffff);
  local_40 = param_1;
  FUN_8007da80(auStack_50,&PTR_PTR_DAT_80093124);
  local_3c = 0x284078;

  switch(uVar4) {
  case 0:
    goto switchD_overlay0__8002d3bc_caseD_0;
  case 3:
    bVar2 = false;
    bVar1 = false;

    FUN_overlay0__8002d058
              (auStack_50,&UNK_801cacfc + (uint)DAT_801d5867 * 0x668 + (uint)DAT_801d5868 * 0xa4,
               param_3,param_4 + 0x20);

    iVar6 = FUN_8007830c(_LAB_80092e6a_2,&DAT_801d586c);
    iVar6 = iVar6 + 0x44;

    uVar7 = FUN_overlay0__8003d7b8(iVar6,1);
    FUN_overlay0__8002d12c(auStack_50,uVar7,param_3,param_4 + 0x3a,param_1,0x64c0e0);
    uVar7 = FUN_overlay0__8003d7b8(iVar6,2);
    FUN_overlay0__8002d12c(auStack_50,uVar7,param_3,param_4 + 0x43,param_1,0xe0c070);
    uVar7 = FUN_overlay0__8003d7b8(iVar6,3);
    FUN_overlay0__8002d12c(auStack_50,uVar7,param_3,param_4 + 0x4c,param_1,0x1050a0);
    break;
  case 7:
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    puVar8 = &DAT_801cd36c;
    break;
  case 8:
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    puVar8 = (undefined4 *)&UNK_801cd410;
    break;
  case 9:
    local_30 = 1;
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    puVar8 = (undefined4 *)&UNK_801cd4b4;
  }

  sVar5 = FUN_8006ae28(auStack_50,&DAT_801c6c72,param_3,param_4 + 0x14,0);
  DAT_overlay0__8002f8e0 = ((short)param_3 - sVar5) + -2;
  DAT_overlay0__8002f8e4 = sVar5 + 5;
  DAT_overlay0__8002f8e2 = (short)param_4 + 0xf;
  FUN_8006b77c(param_1,&DAT_overlay0__8002f8e0);

  if (bVar1) {
    sVar5 = FUN_8006ae28(auStack_50,&DAT_801c6c79,param_3,param_4 + 0x3a,0);
    DAT_overlay0__8002f8e0 = ((short)param_3 - sVar5) + -2;
    DAT_overlay0__8002f8e4 = sVar5 + 5;
    DAT_overlay0__8002f8e2 = (short)param_4 + 0x35;
    FUN_8006b77c(param_1);
  }

  if (bVar2) {
    FUN_overlay0__8002d058(auStack_50,DAT_800a9524,param_3,param_4 + 0x20);
  }

  if (bVar1) {
    FUN_overlay0__8002d058(auStack_50,&DAT_801d5f58,param_3,param_4 + 0x46);
  }

  if (bVar3) {
    FUN_overlay0__8002d20c(auStack_50,puVar8,param_3,param_4 + 0x20,local_30);
  }
switchD_overlay0__8002d3bc_caseD_0:
  return;
}

void FUN_overlay0__8002d664(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined auStack_58 [12];
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_38 [16];
  uint local_28;
  undefined4 local_24;

  bVar1 = *(char *)(param_2 + 0xa8c) != '\0';

  FUN_8006ac68(auStack_58,0xffffffff);
  local_4c = local_4c & 0xff9fffff | 0x200000;
  iVar2 = (int)*(short *)(param_2 + 0xa90);
  local_48 = param_1;

  if (0 < iVar2) {
    iVar3 = 0;
    local_28 = 0x606060;

    if (*(uint *)(param_2 + 0xaa0) < *(uint *)(param_2 + 0xa9c)) {
      local_28 = 0x2e6010;
    }
    if (*(uint *)(param_2 + 0xa9c) < *(uint *)(param_2 + 0xaa0)) {
      local_28 = 0x61060;
    }

    if (bVar1) {
      local_28 = 0xa1e50;
    }

    if (iVar2 < 0x1f) {
      local_28 = local_28 | 0x2000000;
      iVar3 = ((0x1e - iVar2) * 0x80) / 0x1e;
    }

    if (*(int *)(param_2 + 0xa9c) != -1) {
      FUN_8007da80(auStack_58,&PTR_PTR_DAT_80093124);
      local_44 = FUN_8006b548(&local_28,&LAB_overlay0__8002f8ee_2,iVar3,0x80);
      FUN_80068b04(auStack_38,*(undefined4 *)(param_2 + 0xa9c),*(undefined4 *)(param_2 + 0xaa0));
      FUN_8006b49c(auStack_58,auStack_38,param_3,param_4 + -0x10,7,5,0,2);
    }
  }

  iVar3 = (int)*(short *)(param_2 + 0xa8e);
  iVar2 = 0;
  if (0 < iVar3) {
    local_28 = 0x1e5a78;
    local_24 = 0x285a78;

    if (bVar1) {
      local_28 = 0xa1e50;
    }

    if (iVar3 < 0x1f) {
      local_24 = 0x2285a78;
      local_28 = local_28 | 0x2000000;
      iVar2 = ((0x1e - iVar3) * 0x80) / 0x1e;
    }

    if (*(int *)(param_2 + 0xa98) != 0) {
      FUN_8007da80(auStack_58,&PTR_PTR_DAT_80093124);
      local_44 = FUN_8006b548(&local_24,&LAB_overlay0__8002f8ee_2,iVar2,0x80);
      FUN_8006adb4(auStack_58,*(undefined4 *)(param_2 + 0xa98),param_3,param_4 + -0x1a,1);
    }

    FUN_8007da80(auStack_58,0x80093130);
    local_44 = FUN_8006b548(&local_28,&LAB_overlay0__8002f8ee_2,iVar2,0x80);
    FUN_80068734(auStack_38,*(undefined4 *)(param_2 + 0xa94));
    FUN_8006b49c(auStack_58,auStack_38,param_3,param_4,8,6,0,0);

    if (bVar1) {
      FUN_8006adb4(auStack_58,&DAT_801c7763,param_3,param_4 + 0x10,0);
    }
  }

  iVar2 = (int)*(short *)(param_2 + 0xa92);
  if (0 < iVar2) {
    puVar4 = &UNK_801c7778;

    if (*(char *)(param_2 + 0xa8d) == '\x02') {
      puVar4 = &DAT_801c778d;
    }

    local_28 = 0xa1e50;
    iVar3 = 0;

    if (iVar2 < 0x1f) {
      local_28 = 0x20a1e50;
      iVar3 = ((0x1e - iVar2) * 0x80) / 0x1e;
    }

    FUN_8007da80(auStack_58,0x80093130);
    local_44 = FUN_8006b548(&local_28,&LAB_overlay0__8002f8ee_2,iVar3,0x80);
    FUN_8006adb4(auStack_58,puVar4,param_3,param_4 + 0x20,0);
  }
  return;
}

void FUN_overlay0__8002da3c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_38 [4];

  iVar7 = 0;

  local_38[0] = (int)*(short *)(param_2 + 0x63c);
  local_38[1] = (int)*(short *)(param_2 + 0x63e);
  piVar4 = local_38;
  local_38[2] = (int)*(short *)(param_2 + 0x640);
  puVar8 = &DAT_overlay0__8002f8f8;

  do {
    psVar3 = (short *)FUN_8007d024(param_1,*puVar8);
    iVar6 = *piVar4 * 0x15;

    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }

    piVar4 = piVar4 + 1;
    puVar8 = puVar8 + 1;
    pcVar5 = &DAT_overlay0__8002f8f4 + iVar7;
    iVar7 = iVar7 + 1;

    sVar2 = (short)(iVar6 >> 0xc);
    cVar1 = *pcVar5;

    psVar3[1] = (short)param_4 - (sVar2 + -6);
    psVar3[2] = 6;
    psVar3[3] = sVar2;
    *psVar3 = (short)cVar1 + (short)param_3;
  } while (iVar7 < 3);

  piVar4 = (int *)FUN_80081478(param_1,0x808080);
  *piVar4 = param_3 + -0xc + (param_4 + -0x10) * 0x10000;
  piVar4[1] = 0x39e3c0d8;
  piVar4[2] = 0x200018;
  FUN_8007da44(param_1,0x28);
  return;
}

void FUN_overlay0__8002dbb0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_30 [2];

  uVar2 = param_3 - 7;
  iVar8 = 0;

  local_30[0] = (int)*(short *)(param_2 + 0x498);
  local_30[1] = (int)*(short *)(param_2 + 0x500);

  do {
    uVar7 = (param_4 + -8) * 0x10000 | uVar2;
    iVar6 = local_30[iVar8];
    iVar8 = iVar8 + 1;

    iVar3 = FUN_8007d060(param_1,0x3c6428);
    iVar6 = (int)(short)-(short)iVar6;

    FUN_overlay0__8002bcf0(iVar3 + 4,iVar6,0xffffffe4,0xffffffb4);
    FUN_overlay0__8002bcf0(iVar3 + 8,iVar6,0x1c,0xffffffb4);
    FUN_overlay0__8002bcf0(iVar3 + 0xc,iVar6,0xffffffe4,0x4c);
    FUN_overlay0__8002bcf0(iVar3 + 0x10,iVar6,0x1c,0x4c);

    *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + uVar7;
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + uVar7;
    *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar7;
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + uVar7;

    iVar3 = FUN_8007d060(param_1,0);
    FUN_overlay0__8002bcf0(iVar3 + 4,iVar6,0xffffffcd,0xffffff9d);
    FUN_overlay0__8002bcf0(iVar3 + 8,iVar6,0x33,0xffffff9d);
    FUN_overlay0__8002bcf0(iVar3 + 0xc,iVar6,0xffffffcd,99);
    FUN_overlay0__8002bcf0(iVar3 + 0x10,iVar6,0x33,99);

    uVar2 = param_3 + 7;

    *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + uVar7;
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + uVar7;
    *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar7;
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + uVar7;
  } while (iVar8 < 2);

  cVar1 = *(char *)(param_2 + 0x794);
  uVar5 = 0x303030;

  if ('\0' < cVar1) {
    uVar5 = 0x4080;
  }

  piVar4 = (int *)FUN_80081478(param_1,uVar5);
  *piVar4 = param_3 + -0xc + (param_4 + 1) * 0x10000;
  piVar4[1] = 0x3a60c0f0;
  piVar4[2] = 0xa000c;
  FUN_8007da44(param_1,8);

  uVar5 = 0x303030;

  if (cVar1 < '\0') {
    uVar5 = 0x4080;
  }

  piVar4 = (int *)FUN_80081478(param_1,uVar5);
  *piVar4 = param_3 + 4 + (param_4 + 1) * 0x10000;
  piVar4[1] = 0x3a61c8c8;
  piVar4[2] = 0xa000c;
  FUN_8007da44(param_1,8);
  return;
}

void FUN_overlay0__8002de8c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint local_78 [4];
  uint local_68 [4];
  int local_58 [4];
  int local_48 [4];
  uint *local_38;
  int *local_34;
  int *local_30;
  uint *local_2c;

  if ((DAT_overlay0__80046f48 != 0) || (iVar3 = FUN_overlay0__800418e8(), iVar3 == 2)) {

    local_78[0] = (uint)*(byte *)(param_2 + 0x4ae);
    iVar3 = 0;
    local_78[1] = (uint)*(byte *)(param_2 + 0x516);
    local_78[2] = (uint)*(byte *)(param_2 + 0x57e);
    iVar6 = param_2 + 0x2c;
    local_78[3] = (uint)*(byte *)(param_2 + 0x5e6);
    bVar2 = true;
    while (bVar2) {
      pcVar1 = (char *)(iVar6 + 0x49f);
      puVar9 = local_68 + iVar3;
      piVar10 = local_58 + iVar3;
      piVar8 = local_48 + iVar3;
      iVar6 = iVar6 + 0x68;
      iVar3 = iVar3 + 1;
      FUN_overlay0__80043108((int)*pcVar1,puVar9,piVar10,piVar8);
      bVar2 = iVar3 < 4;
    }

    iVar3 = 4;
    iVar6 = param_4 + -8;
    piVar10 = local_48;
    local_30 = piVar10;
    puVar9 = local_68;
    local_38 = puVar9;
    piVar8 = local_58;
    local_34 = piVar8;
    puVar7 = local_78;
    local_2c = puVar7;

    for (iVar11 = 0; iVar11 < 2; iVar11 = iVar11 + 1) {

      uVar4 = FUN_8006b548(&LAB_overlay0__8002f904,&LAB_overlay0__8002f908,*puVar7,0x100);
      piVar5 = (int *)FUN_80081478(param_1,uVar4);
      *piVar5 = param_3 + -0xc + (iVar6 + -6) * 0x10000;
      puVar7 = puVar7 + 2;
      piVar5[1] = 0x3a21c8b0;
      piVar5[2] = 0xd0018;
      FUN_8007da44(param_1,8);

      piVar5 = (int *)FUN_80081478(param_1,*puVar9 | *piVar8 << 8 | *piVar10 << 0x10);
      *piVar5 = param_3 + -0xc + (iVar6 + -6) * 0x10000;
      piVar5[1] = 0x3a20a0e8;
      piVar5[2] = 0xd0018;
      FUN_8007da44(param_1,8);

      uVar4 = FUN_8006b548(&LAB_overlay0__8002f904,&LAB_overlay0__8002f908,
                           *(undefined4 *)((int)local_2c + iVar3),0x100);
      piVar5 = (int *)FUN_80081478(param_1,uVar4);
      *piVar5 = param_3 + -0xc + (iVar6 + -6) * 0x10000;
      piVar10 = piVar10 + 2;
      piVar5[1] = 0x3a22d5b0;
      piVar5[2] = 0xd0018;
      FUN_8007da44(param_1,8);

      piVar5 = (int *)FUN_80081478(param_1,*(uint *)((int)local_38 + iVar3) |
                                           *(int *)((int)local_34 + iVar3) << 8 |
                                           *(int *)((int)local_30 + iVar3) << 0x10);
      *piVar5 = param_3 + -0xc + (iVar6 + -6) * 0x10000;
      puVar9 = puVar9 + 2;
      piVar5[1] = 0x3a23d638;
      piVar8 = piVar8 + 2;
      piVar5[2] = 0xd0018;
      FUN_8007da44(param_1,8);
      iVar3 = iVar3 + 8;
      iVar6 = param_4 + 8;
    }
  }
  return;
}

void FUN_overlay0__8002e204(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined auStack_40 [12];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;

  puVar2 = &LAB_overlay0__8002f318;
  FUN_8006ac68(auStack_40,0xffffffff);
  local_30 = param_1;
  FUN_8007da80(auStack_40,0x80093130);
  local_2c = 0x20c1879;
  local_34 = local_34 & 0xff9fffff;

  switch(*(undefined *)(param_2 + 0x790)) {
  case 1:
    puVar2 = &DAT_801c6cc8;
    break;
  case 2:
    puVar2 = &DAT_801c6d94;
    break;
  case 3:
    puVar2 = &DAT_801c6db2;
    break;
  case 4:
    puVar2 = &DAT_801c6d72;
    break;
  case 5:
    puVar2 = &DAT_801c6d81;
    break;
  case 6:
    puVar2 = &DAT_801c6d8b;
    break;
  case 7:
    puVar2 = &DAT_801c6cda;
    break;
  case 8:
    puVar2 = &DAT_801c6cf8;
    break;
  case 9:
    puVar2 = &DAT_801c6d1e;
    break;
  case 10:
    puVar2 = &DAT_801c6d3b;
    break;
  case 0xb:
    puVar2 = &DAT_801c6d5d;
    break;
  case 0xc:
    puVar2 = &DAT_801c6dd4;
  }

  iVar1 = FUN_8006ad3c(auStack_40,puVar2,0);
  FUN_8006ac90(auStack_40,puVar2,param_3 - (iVar1 >> 1),param_4,0);
  return;
}

void FUN_overlay0__8002e390(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  short local_30;
  ushort local_2e;
  undefined2 local_2c;
  undefined2 local_2a;

  DAT_overlay0__8002f864 = 0;

  if (*(char *)(param_1 + 0x2e7) == '\0') {
    FUN_8005d8d4(0x26,&DAT_8018ec00);
    local_30 = 0x200;
    local_2e = 0;
    local_2c = *(undefined2 *)((int)&DAT_8018ec10 + DAT_8018ec04);
    local_2a = *(undefined2 *)((int)&DAT_8018ec12 + DAT_8018ec04);
    FUN_8007bbd4((int)&DAT_8018ec08 + DAT_8018ec04,&local_30);
  }

  pbVar1 = &DAT_overlay0__8002f630;
  pbVar6 = &DAT_overlay0__8002f631;
  iVar5 = 0x184;

  for (iVar4 = 0; iVar4 < (int)(uint)DAT_801d58b6; iVar4 = iVar4 + 1) {

    *(undefined2 *)(&UNK_800a9f96 + iVar5) = 0;
    *(undefined2 *)(&UNK_800a9f94 + iVar5) = 0;
    *(undefined2 *)(&UNK_800a9f92 + iVar5) = 0;

    iVar2 = FUN_overlay0__8002bd84((int)&DAT_800a9504 + iVar5,iVar4);

    if (*(char *)(param_1 + 0x2e7) == '\0') {
      iVar2 = (&DAT_8018ec04)[iVar2 + 1];
      iVar3 = (int)&DAT_8018ec08 + iVar2;

      if ((*(uint *)((int)&DAT_8018ec04 + iVar2) >> 3 & 1) != 0) {
        iVar3 = iVar3 + *(int *)((int)&DAT_8018ec08 + iVar2);
      }

      local_30 = (*pbVar1 >> 2) + 0x200;
      local_2e = (ushort)*pbVar6;
      local_2c = *(undefined2 *)(iVar3 + 8);
      local_2a = *(undefined2 *)(iVar3 + 10);
      FUN_8007bbd4(iVar3,&local_30);
    }

    pbVar6 = pbVar6 + 0xc;
    pbVar1 = pbVar1 + 0xc;
    iVar5 = iVar5 + 0xb40;
  }

  *(undefined *)(param_1 + 0x2e7) = 1;
  FUN_overlay0__8002a0c8(&DAT_800af224,DAT_800a9520);
  FUN_overlay0__8002a6d0(&DAT_800af226);
  return;
}

void FUN_overlay0__8002e550(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = 0x184;
  for (iVar2 = 0; iVar2 < (int)(uint)DAT_801d58b6; iVar2 = iVar2 + 1) {

    if (0 < *(short *)(&UNK_800a9f92 + iVar1)) {
      *(short *)(&UNK_800a9f92 + iVar1) = *(short *)(&UNK_800a9f92 + iVar1) + -1;
    }

    if (0 < *(short *)(&UNK_800a9f94 + iVar1)) {
      *(short *)(&UNK_800a9f94 + iVar1) = *(short *)(&UNK_800a9f94 + iVar1) + -1;
    }

    if (0 < *(short *)(&UNK_800a9f96 + iVar1)) {
      *(short *)(&UNK_800a9f96 + iVar1) = *(short *)(&UNK_800a9f96 + iVar1) + -1;
    }

    iVar1 = iVar1 + 0xb40;
  }

  if (DAT_overlay0__80046f64 != 0) {
    DAT_overlay0__8002f864 = DAT_overlay0__8002f864 + '\x01';
  }

  FUN_overlay0__8002a0d4(&DAT_800af224,param_1);
  FUN_overlay0__8002a700(&DAT_800af226,param_2);
  return;
}

void FUN_overlay0__8002e63c(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;

  uVar2 = *(undefined4 *)(param_1 + 0x8c);

  if (DAT_801d5866 == '\f') {
    return;
  }

  FUN_overlay0__8002a19c(&DAT_800af224,uVar2);
  FUN_overlay0__8002b170(&DAT_800af226,uVar2);

  FUN_overlay0__8002e204(uVar2,param_2,0xa0,0xb6);
  FUN_overlay0__8002d664(uVar2,param_2,0xa0,0x60);

  if ((DAT_800a951c != '\0') && (bVar1 = *(byte *)(param_3 + 0x107), bVar1 != 1)) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      goto LAB_overlay0__8002e7e8;
    }
    if (bVar1 != 2) {
      return;
    }

    FUN_overlay0__8002da3c(uVar2,param_2,0xc0,0xd0);
    FUN_overlay0__8002dbb0(uVar2,param_2,0x96,0xcc);
  }

  FUN_overlay0__8002d308(uVar2,param_2,0x134,0x10);
  FUN_overlay0__8002c1cc(uVar2,param_2,0x114,0xb4);
  FUN_overlay0__8002c00c(uVar2,param_2,0x114,0xb4);
  FUN_overlay0__8002c584(uVar2,param_2,0xe0,0xcc);
  FUN_overlay0__8002de8c(uVar2,param_2,0x128,0x7c);

  if ((DAT_801d5866 != '\x03') || (DAT_801d5867 == '\0')) {
    FUN_overlay0__80029064(&DAT_800a9504,uVar2,0x10,0x90,0);
  }

LAB_overlay0__8002e7e8:

  FUN_overlay0__8002c76c(uVar2,param_2,0xc,0x10);
  return;
}

void FUN_overlay0__8002e818(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined auStack_30 [12];
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;

  if (DAT_800a951c != '\0') {

    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    FUN_8006ac68(auStack_30,0xffffffff);
    local_20 = uVar1;
    FUN_8007da80(auStack_30,&PTR_PTR_DAT_80093124);
    local_1c = 0x606060;
    local_24 = local_24 & 0xff9fffff | 0x200000;

    FUN_8006ac90(auStack_30,&DAT_801c6e51,0x10,0xd2,0);
    FUN_8006ac90(auStack_30,&DAT_801d5948 + param_2 * 0xd0,0x10,0xde,0);
  }
  return;
}

void FUN_overlay0__8002e908(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  sVar2 = *(short *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x8c);

  if (sVar2 == 0) {
    FUN_overlay0__8002a19c(&DAT_800af224,uVar5);
    FUN_overlay0__8002b170(&DAT_800af226,uVar5);
  }

  puVar3 = (undefined2 *)FUN_8007d024(uVar5,0xc6c6c6);
  uVar4 = 0xc0;
  puVar3[1] = 0x77;
  puVar3[2] = 0x140;
  *puVar3 = 0;
  puVar3[3] = 2;

  if (sVar2 == 0) {
    uVar4 = 0x50;
  }

  FUN_overlay0__8002e204(uVar5,param_2,0xa0,uVar4);

  uVar4 = 0x9c;
  if (sVar2 == 0) {
    uVar4 = 0x30;
  }

  FUN_overlay0__8002d664(uVar5,param_2,0xa0,uVar4);

  if (DAT_800a951c != '\0') {
    bVar1 = *(byte *)(param_3 + 0x107);
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          return;
        }
        goto LAB_overlay0__8002eac8;
      }
      if (bVar1 != 2) {
        return;
      }

      uVar4 = 0xd0;
      if (sVar2 == 0) {
        uVar4 = 0x60;
      }
      FUN_overlay0__8002da3c(uVar5,param_2,0xc0,uVar4);

      uVar4 = 0xd2;
      if (sVar2 == 0) {
        uVar4 = 0x62;
      }
      FUN_overlay0__8002dbb0(uVar5,param_2,0x96,uVar4);
    }
  }

  uVar4 = 0x7c;
  if (sVar2 == 0) {
    uVar4 = 0x10;
  }
  FUN_overlay0__8002d308(uVar5,param_2,0x134,uVar4);

  uVar4 = 0xb4;
  if (sVar2 == 0) {
    uVar4 = 0x44;
  }
  FUN_overlay0__8002c1cc(uVar5,param_2,0x114,uVar4);
  FUN_overlay0__8002c00c(uVar5,param_2,0x114,uVar4);

  uVar4 = 0xcc;
  if (sVar2 == 0) {
    uVar4 = 0x5c;
  }
  FUN_overlay0__8002c584(uVar5,param_2,0xe0,uVar4);

  uVar4 = 0x8c;
  if (sVar2 == 0) {
    uVar4 = 0x1c;
  }
  FUN_overlay0__8002de8c(uVar5,param_2,0x128,uVar4);

LAB_overlay0__8002eac8:

  uVar4 = 0x7c;
  if (sVar2 == 0) {
    uVar4 = 0x10;
  }
  FUN_overlay0__8002c76c(uVar5,param_2,0xc,uVar4);
  return;
}

void FUN_overlay0__8002eb08(undefined4 param_1,int param_2)

{

  FUN_8007bca0(param_2 + *(int *)(param_2 + 0x1c),&LAB_overlay0__8002f90c,&LAB_overlay0__8002f914);

  FUN_8007bca0(param_2 + *(int *)(param_2 + 0x28),&DAT_overlay0__8002f91c,&DAT_overlay0__8002f924);
  return;
}

void FUN_overlay0__8002eb60(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined2 *puVar21;
  short sVar22;
  uint uVar23;
  int iVar24;
  undefined uVar25;
  short *psVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;

  puVar9 = (undefined4 *)(param_2 + 8);
  puVar7 = &DAT_1f800000;

  do {
    puVar12 = puVar7;
    puVar8 = puVar9;
    uVar27 = puVar8[1];
    uVar28 = puVar8[2];
    uVar29 = puVar8[3];
    *puVar12 = *puVar8;
    puVar12[1] = uVar27;
    puVar12[2] = uVar28;
    puVar12[3] = uVar29;
    puVar9 = puVar8 + 4;
    puVar7 = puVar12 + 4;
  } while (puVar9 != (undefined4 *)(param_2 + 0x68));

  uVar27 = puVar8[5];
  puVar12[4] = *puVar9;
  puVar12[5] = uVar27;

  FUN_8007b778(0x1f800000,0,0,0);
  puVar9 = DAT_801c93f0;
  iVar6 = DAT_1f800028;
  iVar5 = DAT_1f800024;
  iVar4 = DAT_1f800020;
  gte_ldtr(0,0,0);
  gte_ldDQB(0);
  puVar21 = (undefined2 *)((int)DAT_801c93ec + 0x22);
  sVar1 = *(short *)(param_1 + 0x12);

  do {
    if (sVar1 < 0) {
      return;
    }
    psVar26 = (short *)(param_1 + sVar1 * 0x18 + 0x18);

    if (psVar26[2] != 0) {

      uVar15 = *(int *)(psVar26 + 6) + iVar4 >> 10;
      uVar23 = *(int *)(psVar26 + 8) + iVar5 >> 10;
      uVar17 = *(int *)(psVar26 + 10) + iVar6 >> 10;

      uVar13 = uVar15;
      if ((int)uVar15 < 0) {
        uVar13 = -uVar15;
      }
      uVar19 = uVar23;
      if ((int)uVar23 < 0) {
        uVar19 = -uVar23;
      }
      uVar10 = uVar17;
      if ((int)uVar17 < 0) {
        uVar10 = -uVar17;
      }

      if ((int)(uVar13 | uVar19 | uVar10) < 0x8000) {
        sVar14 = (short)uVar15;
        sVar22 = (short)uVar23;

        gte_ldVXY0(0x1f80009c);
        gte_ldVZ0(uVar17);
        gte_ldDQA((int)psVar26[2]);
        gte_rtps_b();

        sVar1 = *psVar26;
        iVar16 = 5;
        if (sVar1 != 0) {
          iVar16 = 3;
        }
        sVar2 = psVar26[3];
        iVar11 = gte_stFLAG();
        gte_stSXY2();
        DAT_1f80009c._0_2_ = sVar14;
        DAT_1f80009c._2_2_ = sVar22;

        if (-1 < iVar11) {
          iVar11 = gte_stMAC0();
          iVar18 = gte_stSZ3();
          iVar11 = iVar11 >> 0x10;

          if (iVar11 < 0x100) {
            iVar18 = iVar18 >> 3;

            iVar24 = iVar11 * (short)(&DAT_80093150)[(int)psVar26[4] & 0xfffU] >> 0xc;
            iVar11 = iVar11 * (short)(&DAT_80093150)[((int)psVar26[4] & 0xfffU) + 0x400] >> 0xc;

            if (0xfff < iVar18) {
              iVar18 = 0xfff;
            }
            iVar18 = DAT_1f800064 + iVar18 * 4;

            *DAT_801c93ec = 0x9000000;

            *(undefined *)((int)puVar21 + -0x1b) = 0x2e;
            uVar25 = (undefined)((int)sVar2 >> iVar16);
            *(undefined *)(puVar21 + -0xf) = uVar25;
            *(undefined *)((int)puVar21 + -0x1d) = uVar25;
            *(undefined *)(puVar21 + -0xe) = uVar25;

            if (sVar1 == 0) {
              uVar20 = 0x7f960080;
              uVar29 = 0x29009f;
              uVar28 = 0x1f80;
              uVar27 = 0x1f9f;
            }
            else {
              uVar20 = 0x7f9700c0;
              uVar29 = 0x2900ef;
              uVar28 = 0x2fc0;
              uVar27 = 0x2fef;
            }

            *(undefined4 *)(puVar21 + -0xb) = uVar20;
            sVar2 = (short)iVar11;
            *(undefined4 *)(puVar21 + 1) = uVar27;
            sVar1 = (short)iVar24;
            *(undefined4 *)(puVar21 + -7) = uVar29;
            puVar21[-0xd] = (sVar14 - sVar2) + sVar1;
            puVar21[-0xc] = (sVar22 - sVar1) - sVar2;
            *(undefined4 *)(puVar21 + -3) = uVar28;
            iVar24 = sVar22 + iVar24;
            puVar21[-9] = sVar14 + sVar2 + sVar1;
            uVar23 = iVar24 + iVar11;
            puVar21[-8] = (short)iVar24 - sVar2;
            puVar21[-5] = (sVar14 - sVar2) - sVar1;
            puVar21[-4] = (sVar22 - sVar1) + sVar2;
            puVar21[-1] = (sVar14 + sVar2) - sVar1;
            *puVar21 = (short)uVar23;

            uVar13 = iVar18 + 2;
            uVar15 = uVar13 & 3;
            iVar16 = *(int *)(uVar13 - uVar15);
            uVar13 = iVar18 + 2;
            uVar17 = uVar13 & 3;
            puVar3 = (uint *)(uVar13 - uVar17);

            *puVar3 = *puVar3 & -1 << (uVar17 + 1) * 8 |
                      (uint)((int)DAT_801c93ec << 8) >> (3 - uVar17) * 8;
            uVar13 = (int)DAT_801c93ec + 2U & 3;
            puVar3 = (uint *)(((int)DAT_801c93ec + 2U) - uVar13);
            *puVar3 = *puVar3 & -1 << (uVar13 + 1) * 8 |
                      (iVar16 << (3 - uVar15) * 8 | uVar23 & 0xffffffffU >> (uVar15 + 1) * 8) >>
                      (3 - uVar13) * 8;

            DAT_801c93ec = DAT_801c93ec + 10;
            puVar21 = puVar21 + 0x14;

            if (puVar9 <= DAT_801c93ec) {
              return;
            }
          }
        }
      }
    }
    sVar1 = psVar26[1];
  } while( true );
}

void FUN_overlay0__8002f92c(int param_1)

{

  if ((((*(char *)(param_1 + 0x718) == '\0') && (*(short *)(param_1 + 0x78e) == 0)) &&
      (*(char *)(param_1 + 0x786) != '\a')) &&
     ((*(char *)(param_1 + 0x373) != '\x01' || (*(short *)(param_1 + 0x614) != 0x1000)))) {

    if (*(char *)(param_1 + 0x619) == '\0') {
      *(undefined2 *)(param_1 + 0x60a) = 0;

      if (*(short *)(param_1 + 0x612) == 0x1000) {
        return;
      }
      *(undefined2 *)(param_1 + 0x60a) = 0x1000;
      return;
    }

    *(undefined2 *)(param_1 + 0x60a) = 0x1000;

    if ((int)(uint)*(ushort *)(param_1 + 0x10a) <= (int)*(short *)(param_1 + 0x6ac)) {
      return;
    }
  }

  *(undefined2 *)(param_1 + 0x60a) = 0;
  return;
}

void FUN_overlay0__8002f9cc(int param_1)

{

  if (((*(char *)(param_1 + 0x718) == '\0') && (*(short *)(param_1 + 0x78e) == 0)) &&
     (*(char *)(param_1 + 0x786) != '\a')) {

    if (*(char *)(param_1 + 0x619) == '\0') {
      *(undefined2 *)(param_1 + 0x60a) = 0;
      if (*(short *)(param_1 + 0x612) != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x60a) = 0x1000;
      return;
    }

    *(undefined2 *)(param_1 + 0x60a) = 0x1000;

    if (*(short *)(param_1 + 0x612) == 0) {
      return;
    }

    if (0x471 < *(int *)(param_1 + 0x6a4)) {
      return;
    }
    if (*(int *)(param_1 + 0x6a4) < -0x471) {
      return;
    }
  }

  *(undefined2 *)(param_1 + 0x60a) = 0;
  return;
}

void FUN_overlay0__8002fa60(int param_1,int param_2,undefined *param_3)

{
  int iVar1;

  if (*(short *)(param_1 + 0x60a) != 0) {

    iVar1 = *(int *)(param_1 + 0x6a4);

    if (*(char *)(param_1 + 0x618) == '\0') {
      iVar1 = -iVar1;
    }

    if ((-0x473 < iVar1) && (0 < 0x3558 - iVar1)) {

      iVar1 = (int)*(short *)(param_1 + 0x610) + ((0x3558 - iVar1) * 0x1000) / 0x1aac0;
      if (0x1000 < iVar1) {
        iVar1 = 0x1000;
      }
      *(short *)(param_1 + 0x610) = (short)iVar1;
    }

    if (((*(short *)(param_2 + 6) == 0) && (*(char *)(param_2 + 9) == '\0')) &&
       (*(int *)(param_1 + 0x6a4) < -0x472)) {
      *param_3 = 1;
    }
  }
  return;
}

void FUN_overlay0__8002fb18(int param_1,ushort *param_2,undefined *param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined uVar12;

  sVar6 = *(short *)(param_1 + 0x4b0);
  sVar1 = *(short *)(param_1 + 0x518);
  iVar9 = *(int *)(param_1 + 0x6a4);

  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  iVar9 = iVar9 * 0x1cd >> 0xc;

  if (0x7fff < iVar9) {
    iVar9 = 0x7fff;
  }

  sVar3 = FUN_overlay0__8003d848(param_1 + 0x3c,(int)(short)iVar9);
  sVar8 = *(short *)(param_1 + 0x60);

  if (sVar3 < *(short *)(param_1 + 0x60)) {
    sVar8 = sVar3;
  }

  if (*(int *)(param_1 + 0x6a4) < 0x855c) {
LAB_overlay0__8002fc20:
    *(short *)(param_1 + 0x70c) = sVar3;
    *(short *)(param_1 + 0x70a) = -sVar3;
    *(undefined2 *)(param_1 + 0x700) = 0;
  }
  else {
    sVar6 = (short)(((int)sVar6 + (int)sVar1) / 2);

    if ((-(int)sVar8 <= (int)sVar6) && ((int)sVar6 <= (int)sVar8)) {
      goto LAB_overlay0__8002fc20;
    }

    iVar9 = (int)sVar6;

    if (iVar9 < 1) {
      if (iVar9 < 0) {
        *(short *)(param_1 + 0x70c) = sVar3;
        *(short *)(param_1 + 0x70a) = sVar6;

        if (iVar9 < -(int)*(short *)(param_1 + 0x3a)) {
          *(short *)(param_1 + 0x70a) = -*(short *)(param_1 + 0x3a);
        }
        *(undefined2 *)(param_1 + 0x700) = *(undefined2 *)(param_1 + 0x70a);
      }
    }
    else {
      *(short *)(param_1 + 0x70c) = sVar6;

      if (*(short *)(param_1 + 0x3a) < iVar9) {
        *(undefined2 *)(param_1 + 0x70c) = *(undefined2 *)(param_1 + 0x3a);
      }
      *(short *)(param_1 + 0x70a) = -sVar3;
      *(undefined2 *)(param_1 + 0x700) = *(undefined2 *)(param_1 + 0x70c);
    }
  }

  if ((*param_2 & 1) == 0) {

    if ((short)param_2[1] < 1) {
      sVar6 = 0;
      if ((short)param_2[1] < 0) {
        sVar6 = *(short *)(param_1 + 0x70a);
      }
    }
    else {
      sVar6 = *(short *)(param_1 + 0x70c);
    }

    iVar9 = FUN_8007596c((int)sVar6 - (int)*(short *)(param_1 + 0x60c),DAT_overlay0__80046f3c);
    iVar5 = FUN_8007596c((int)*(short *)(param_1 + 0x60e),DAT_overlay0__80046f40);
    iVar9 = iVar9 - iVar5;

    if (sVar6 == 0) {
      iVar5 = FUN_8007596c((int)*(short *)(param_1 + 0x60c),DAT_overlay0__80046f44);
      iVar9 = iVar9 - iVar5;
    }

    iVar9 = FUN_8007598c(iVar9,DAT_1f800000);
    iVar9 = (uint)*(ushort *)(param_1 + 0x60e) + iVar9;
    *(short *)(param_1 + 0x60e) = (short)iVar9;

    iVar5 = (int)*(short *)(param_1 + 0x62);
    iVar10 = iVar9 * 0x10000 >> 0x10;
    iVar9 = -iVar5;

    if ((iVar10 <= iVar5) && (iVar5 = iVar10, iVar10 < iVar9)) {
      iVar5 = iVar9;
    }

    iVar9 = FUN_8007598c(iVar5,DAT_1f800000);
    iVar9 = *(short *)(param_1 + 0x60c) + iVar9;

    if (((((sVar6 < 1) || (iVar9 <= sVar6)) && ((-1 < sVar6 || (sVar6 <= iVar9)))) &&
        (((int)sVar6 <= (int)*(short *)(param_1 + 0x60c) || (iVar9 < sVar6)))) &&
       (((int)*(short *)(param_1 + 0x60c) <= (int)sVar6 || (sVar6 < iVar9)))) {
      goto LAB_overlay0__8002ff2c;
    }

    *(short *)(param_1 + 0x60c) = sVar6;
    *(undefined2 *)(param_1 + 0x60e) = 0;
  }
  else {

    if ((*param_2 & 8) == 0) {
      iVar5 = (int)(short)param_2[1];
      iVar9 = iVar5 * iVar5 >> 0xc;
      if (iVar5 < 0) {
        iVar9 = -iVar9;
      }
    }
    else {
      uVar4 = param_2[1];
      if ((short)uVar4 < 0) {
        uVar4 = -uVar4;
      }
      sVar6 = FUN_overlay0__8003d848(&LAB_overlay0__80046da4,(int)(short)uVar4);
      iVar9 = (int)sVar6;
      if ((short)param_2[1] < 0) {
        iVar9 = -iVar9;
      }
    }

    if (iVar9 < 0) {
      sVar6 = -(short)(*(short *)(param_1 + 0x70a) * iVar9 >> 0xc);
    }
    else {
      sVar6 = (short)((uint)(*(short *)(param_1 + 0x70c) * iVar9) >> 0xc);
    }

    iVar9 = (int)*(short *)(param_1 + 0x60c);
    iVar10 = DAT_1f800000 * 0x5c7 >> 0x10;
    iVar5 = (int)sVar6;

    if (iVar9 < iVar5) {
      iVar9 = iVar9 + iVar10;
      bVar2 = iVar5 < iVar9;
    }
    else {
      if (iVar9 <= iVar5) {
        goto LAB_overlay0__8002ff2c;
      }
      iVar9 = iVar9 - iVar10;
      bVar2 = iVar9 < iVar5;
    }

    if (bVar2) {
      iVar9 = iVar5;
    }
LAB_overlay0__8002ff2c:
    *(short *)(param_1 + 0x60c) = (short)iVar9;
  }

  if (*(short *)(param_1 + 0x700) != 0) {
    sVar6 = (short)(((int)*(short *)(param_1 + 0x60c) << 0xc) / (int)*(short *)(param_1 + 0x700));
    *(short *)(param_1 + 0x700) = sVar6;

    if (sVar6 < 0) {
      *(undefined2 *)(param_1 + 0x700) = 0;
    }
    else if (0x1000 < sVar6) {
      *(undefined2 *)(param_1 + 0x700) = 0x1000;
    }
  }

  uVar12 = 0;
  if (*(char *)(param_1 + 0x786) == '\0') {
    uVar12 = *(undefined *)(param_1 + 0x642);
  }

  if ((*param_2 & 2) != 0) {
    if (*(char *)((int)param_2 + 9) == '\0') {
      *param_3 = 0;
      uVar4 = param_2[3];
    }
    else {
      *param_3 = 1;
      uVar4 = 0x1000;
    }
    *(ushort *)(param_1 + 0x610) = uVar4;

    if (*(short *)(param_1 + 0x610) != 0) {
      *(short *)(param_1 + 0x610) = (short)(*(short *)(param_1 + 0x610) * 7 >> 3) + 0x200;
    }
    goto LAB_overlay0__80030094;
  }

  uVar11 = -(uint)(ushort)(&DAT_overlay0__80046db4)[param_4];
  uVar4 = (&DAT_overlay0__80046db0)[param_4];

  if ((*(char *)((int)param_2 + 9) == '\0') || (*(short *)(param_1 + 0x78e) != 0)) {
    *param_3 = 0;
    if (param_2[3] != 0) {
      goto LAB_overlay0__80030004;
    }
  }
  else {
    *param_3 = 1;
LAB_overlay0__80030004:
    uVar11 = (uint)uVar4;
  }

  iVar9 = *(ushort *)(param_1 + 0x610) + uVar11;
  uVar7 = (undefined2)iVar9;
  iVar9 = iVar9 * 0x10000 >> 0x10;

  if (iVar9 < 0x1001) {
    if (iVar9 < 0) {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0x1000;
  }
  *(undefined2 *)(param_1 + 0x610) = uVar7;

LAB_overlay0__80030094:

  if ((*param_2 & 4) == 0) {
    if (param_2[2] == 0) {
      iVar9 = (uint)*(ushort *)(param_1 + 0x612) - (uint)(ushort)(&DAT_overlay0__80046dbc)[param_4];
      *(short *)(param_1 + 0x612) = (short)iVar9;
      if (iVar9 * 0x10000 < 0) {
        *(undefined2 *)(param_1 + 0x612) = 0;
      }
    }
    else {
      sVar6 = *(short *)(param_1 + 0x612) + (&DAT_overlay0__80046db8)[param_4];
      *(short *)(param_1 + 0x612) = sVar6;
      if (0x1000 < sVar6) {
        *(undefined2 *)(param_1 + 0x612) = 0x1000;
      }
    }
  }
  else {
    uVar4 = param_2[2];
    *(ushort *)(param_1 + 0x612) = uVar4;
    if ((short)uVar4 != 0) {
      *(short *)(param_1 + 0x612) = (short)((short)uVar4 * 7 >> 3) + 0x200;
    }
  }

  if (*(short *)(param_1 + 0x78e) == 0) {
    param_3[1] = *(undefined *)(param_2 + 4);
  }
  else {
    param_3[1] = 0;
  }

  if (*(char *)(param_2 + 5) == '\0') {
    iVar9 = (uint)*(ushort *)(param_1 + 0x614) - (uint)(ushort)(&DAT_overlay0__80046dc4)[param_4];
    *(short *)(param_1 + 0x614) = (short)iVar9;
    if (iVar9 * 0x10000 < 0) {
      *(undefined2 *)(param_1 + 0x614) = 0;
    }
  }
  else {
    sVar6 = *(short *)(param_1 + 0x614) + (&DAT_overlay0__80046dc0)[param_4];
    *(short *)(param_1 + 0x614) = sVar6;
    if (0x1000 < sVar6) {
      *(undefined2 *)(param_1 + 0x614) = 0x1000;
    }
  }

  if (*(char *)(param_1 + 0x372) == '\x01') {
    FUN_overlay0__8002f9cc(param_1);
    FUN_overlay0__8002fa60(param_1,param_2,param_3);
  }
  else {
    FUN_overlay0__8002f92c(param_1,param_2,param_3,uVar12);

    if (*(char *)(param_1 + 0x372) == '\x02') {
      iVar9 = *(int *)(param_1 + 0x6a4);
      if (*(char *)(param_1 + 0x618) == '\0') {
        iVar9 = -iVar9;
      }

      if (-0x473 < iVar9) {
        if (0 < 0x2c74 - iVar9) {
          iVar9 = (int)*(short *)(param_1 + 0x610) + ((0x2c74 - iVar9) * 0x1000) / 0x58e8;
          if (0x1000 < iVar9) {
            iVar9 = 0x1000;
          }
          *(short *)(param_1 + 0x610) = (short)iVar9;
        }

        if (((param_2[3] == 0) && (*(char *)((int)param_2 + 9) == '\0')) &&
           (*(char *)(param_1 + 0x618) == '\0')) {
          *param_3 = 1;
        }
      }
    }
  }
  return;
}
}
