
void FUN_overlay0__80050cc4(int param_1,int param_2)

{

  *(ushort *)(param_1 + 0xae) = *(short *)(param_1 + 0xae) + 0xcU & 0x3fff;

  if (0xfb90 < param_2) {

    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 0x8000;
  }
  return;
}

undefined4 FUN_overlay0__80050d00(void)

{
  undefined4 uVar1;

  uVar1 = 1;

  if (DAT_801d5866 != 2) {
    if (DAT_801d5866 < 3) {
      if (DAT_801d5866 != 0) goto LAB_overlay0__80050d54;
    }
    else if (DAT_801d5866 != 0xb) goto LAB_overlay0__80050d54;
  }

  uVar1 = 0;

LAB_overlay0__80050d54:

  if (DAT_801d5865 == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}

void FUN_overlay0__80050d78(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_30;
  uint local_2c;
  undefined auStack_28 [16];

  uVar2 = DAT_801d5f58;
  uVar3 = 0xffff;
  local_30 = DAT_801d58b8;
  uVar6 = (uint)DAT_801d5f68;

  FUN_8008cedc(auStack_28,&LAB_overlay0__8005a980);

  if (DAT_801d5866 == 8) {
    local_2c = uVar2;
    puVar4 = &DAT_801cd40c;
    uVar5 = 0;
  }
  else if (DAT_801d5866 < 9) {
    if (DAT_801d5866 != 7) goto LAB_overlay0__80050e60;
    local_2c = uVar2;
    puVar4 = &DAT_801cd368;
    uVar5 = 0;
  }
  else {
    if (DAT_801d5866 != 9) goto LAB_overlay0__80050e60;
    puVar4 = &DAT_801cd4b0;
    uVar5 = 1;
    local_2c = uVar6;
  }

  uVar3 = FUN_8005e0d0(puVar4,&local_30,uVar5);

LAB_overlay0__80050e60:

  iVar1 = DAT_801c90a0;
  *(undefined2 *)(DAT_801c90a0 + 2) = uVar3;
  *(uint *)(iVar1 + 8) = uVar2;
  *(uint *)(iVar1 + 0xc) = uVar6;
  return;
}

void FUN_overlay0__80052838(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_801c90a8;

  DAT_801c90d4 = param_1;

  if ((DAT_801c90d0 != 0) && (DAT_801c98e0 == '\0')) {

    FUN_8007f174(DAT_801c90a8);

    FUN_8006ecd8(uVar1,param_1);

    FUN_8006ecd8(uVar1,DAT_801c90d8);
  }
  return;
}

void FUN_overlay0__800528b0(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_801c90a8;

  DAT_801c90d8 = param_1;

  if ((DAT_801c90d0 != 0) && (DAT_801c98e0 == '\0')) {

    FUN_8007f174(DAT_801c90a8);

    FUN_8006ecd8(uVar1,DAT_801c90d4);

    FUN_8006ecd8(uVar1,param_1);
  }
  return;
}

void FUN_overlay0__80052928(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

  FUN_8005eac0(param_3,param_1,param_2);
  return;
}

int FUN_overlay0__80052958(int param_1)

{
  int iVar1;

  iVar1 = 0;

  do {

    if (*(int *)(param_1 + 0x10) == 0) {

      return iVar1;
    }

    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x10;
  } while (iVar1 < 8);

  return 8;
}

int FUN_overlay0__8005298c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;

  piVar2 = *(int **)(param_1 + param_2 * 0x10 + 0x18);

  while (iVar1 = *piVar2, piVar2 = piVar2 + 3, iVar1 != 0) {

    iVar3 = iVar3 + 1;
  }

  return iVar3;
}

void FUN_overlay0__800529c0
               (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auStack_60 [12];
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;

  local_3c = FUN_overlay0__80052958();

  FUN_8006ac68(auStack_60,6);

  local_38 = &local_40;

  local_30 = param_6 / 6;
  local_54 = local_54 & 0xff9fffff | 0x200000;
  local_34 = local_30 | local_30 * 0x100;
  local_30 = local_30 * 0x10000;

  iVar4 = param_1;
  local_50 = param_2;

  for (iVar5 = 0; iVar5 < local_3c; iVar5 = iVar5 + 1) {

    local_40 = 0x278500a;

    iVar6 = *(int *)(iVar4 + 0x18);

    sVar1 = *(short *)(*(short *)(iVar4 + 0x1c) * 2 + param_8 + 0x17b0);

    iVar3 = 0;

    if ((*(byte *)(iVar4 + 0x1f) >> 6 & 1) != 0) {

      local_40 = 0x20c3060;
      iVar3 = 8;
    }

    FUN_8007da80(auStack_60,&DAT_801c9120);
    local_4c = FUN_8006b548(&LAB_overlay0__8005b95e_2,local_38,param_6,0x80);
    iVar3 = param_5 + iVar3;
    FUN_8006ac90(auStack_60,*(undefined4 *)(iVar4 + 0x10),param_4 + 4,iVar3,1);

    FUN_8007da80(auStack_60,&DAT_801c9150);
    local_4c = FUN_8006b548(&LAB_overlay0__8005b95e_2,&DAT_overlay0__8005b970,param_6,0x80);
    FUN_8006ac90(auStack_60,*(undefined4 *)(sVar1 * 0xc + iVar6),param_4 + 0x94,iVar3,1);

    if (iVar5 == param_3) {

      iVar6 = 8 - param_7;
      if (iVar6 < 0) {
        iVar6 = 0;
      }

      local_40 = FUN_8006b548(&LAB_overlay0__8005b95a_2,param_1 + 8,param_6,0x180);
      local_40 = FUN_8006b548(local_38,&DAT_overlay0__8005b96c,iVar6,8);

      piVar2 = (int *)FUN_80081478(param_2);
      *piVar2 = param_4 + (iVar3 + -0x18) * 0x10000 + -8;
      piVar2[1] = 0x79993400;
    }
    else {

      piVar2 = (int *)FUN_80081478(param_2,local_34 | local_30);
      *piVar2 = param_4 + (iVar3 + -0x18) * 0x10000 + -8;
      piVar2[1] = 0x79993400;
    }

    piVar2[2] = 0x180100;

    iVar4 = iVar4 + 0x10;

    FUN_8007da44(param_2,0x236);

    param_4 = param_4 + 4;
    param_5 = param_5 + 0x20;
  }
  return;
}

undefined * FUN_overlay0__80052cb4(int param_1)

{
  int iVar1;
  undefined **ppuVar2;

  iVar1 = FUN_8005f7c8(&DAT_8016e894);
  if (iVar1 == 0) {

    ppuVar2 = &PTR_PTR_DAT_overlay0__8005be54_overlay0__8005c3a4;
  }
  else {

    iVar1 = FUN_8005f790(&DAT_8016e894);
    if (iVar1 == 0) {

      ppuVar2 = &PTR_PTR_DAT_overlay0__8005be54_overlay0__8005c384;
    }
    else {

      ppuVar2 = &PTR_PTR_DAT_overlay0__8005be54_overlay0__8005c364;
    }
  }

  return ppuVar2[param_1];
}

undefined4 FUN_overlay0__80052d40(void)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_8005f7c8(&DAT_8016e894);

  uVar2 = 7;

  if (iVar1 != 0) {

    uVar2 = 8;
  }

  return uVar2;
}

void FUN_overlay0__800534b4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_overlay0__80052cb4(param_2);

  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);

  uVar2 = *(undefined4 *)(iVar1 + 8);

  *(char *)(param_1 + 5) = (char)param_2;

  *(undefined4 *)(param_1 + 0x34) = uVar2;

  FUN_overlay0__80052838(*(undefined4 *)(iVar1 + 4));
  return;
}

void FUN_overlay0__8005350c(int param_1,int param_2)

{
  int iVar1;

  *(char *)(param_1 + 6) = (char)param_2;

  iVar1 = (int)DAT_801c90c8;

  *(undefined2 *)(param_1 + 0x10) = 0;

  iVar1 = FUN_overlay0__80052cb4(iVar1);

  FUN_overlay0__800528b0(*(undefined4 *)(iVar1 + param_2 * 0x10 + 0x14));
  return;
}

void FUN_overlay0__80053558(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;

  *param_1 = param_2;

  DAT_801c90c8 = 0;
  DAT_801c90ca = 0;
  DAT_801c90d0 = 1;
  DAT_801c90d4 = &LAB_overlay0__8005a9a8;
  DAT_801c90d8 = &LAB_overlay0__8005a9a8;

  param_1[1] = param_3;
  *(undefined *)(param_1 + 2) = 0;
  param_1[7] = 0xffff;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;

  FUN_overlay0__800534b4(param_1,0);
  FUN_overlay0__8005350c(param_1,0);

  uVar1 = FUN_overlay0__80052d40();
  param_1[4] = uVar1;

  *(undefined4 *)(param_1 + 10) = 0x4000de;
  *(undefined4 *)(param_1 + 0xc) = 0xc;
  *(undefined4 *)(param_1 + 0xe) = 0xc0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x909090;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x16] = 0xffff;

  FUN_8006cdcc(&DAT_overlay0__8005c3dc,&LAB_overlay0__80052d84,param_1);
  DAT_overlay0__8005c428 = 0xffff;

  FUN_overlay0__80057628(param_1 + 0x1c,param_1 + 0x26);
  FUN_80073ce4(&LAB_overlay0__8005c42a_2);
  return;
}

void FUN_overlay0__80053674(int param_1)

{

  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}

void FUN_overlay0__80053684(int param_1)

{

  *(ushort *)(param_1 + 0x2c) = ~*(ushort *)(param_1 + 0x18);

  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  return;
}

undefined4 FUN_overlay0__800536a4(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 local_40 [2];
  undefined2 local_3c;
  undefined2 local_38;

  DAT_801c90d0 = param_3;

  iVar3 = FUN_overlay0__800576fc(param_1 + 0x38);
  if (iVar3 != 0) {

    FUN_overlay0__80057854(param_1 + 0x38,local_40);
    DAT_overlay0__8005c44c = local_40[0];

    uRam8005c44e = local_3c;
    uRam8005c450 = local_38;

    func_0x80073cfc();
  }

  FUN_80073d4c(&LAB_overlay0__8005c42a_2);
  FUN_8006be64(param_1 + 0x14);

  sVar2 = *(short *)(param_1 + 10);
  sVar4 = *(short *)(param_1 + 10);
  if (sVar2 < 0) {

    *(short *)(param_1 + 10) = sVar4 + 1;
    sVar2 = *(short *)(param_1 + 10);
    sVar4 = *(short *)(param_1 + 10);
  }
  if (0 < sVar2) {

    *(short *)(param_1 + 10) = sVar4 + -1;
  }

  sVar2 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar2;
  if (0x3c < sVar2) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }

  sVar2 = *(short *)(param_1 + 0xc) + 1;
  *(short *)(param_1 + 0xc) = sVar2;
  if (0x2d < sVar2) {
    *(undefined2 *)(param_1 + 0xc) = 0;
  }

  FUN_8006be64(&DAT_overlay0__8005c410);

  if (*(short *)(param_1 + 0xe) < 0) {
    FUN_8006cfc4(&DAT_overlay0__8005c3dc,0);
    return 0xffffffff;
  }

  cVar1 = *(char *)(param_1 + 4);

  if (cVar1 != '\x01') {
    if (cVar1 < '\x02') {
      if (cVar1 != '\0') {
        return 0xffffffff;
      }

      FUN_8006cfc4(&DAT_overlay0__8005c3dc,0);
      if (param_2 == 0) {
        return 0xffffffff;
      }

      uVar6 = *(uint *)(param_2 + 4);
      if ((uVar6 & 0x10) != 0) {
        DAT_801c90d0 = 0;
        return 0xfffffff8;
      }
      if ((uVar6 & 0x500) != 0) {
        DAT_801c90d0 = 0;
        return 0xfffffffc;
      }
      if ((uVar6 & 0xa08) == 0) {

        iVar5 = (int)*(char *)(param_1 + 5);
        uVar6 = uVar6 | *(uint *)(param_2 + 0xc);
        iVar3 = iVar5;

        if ((uVar6 & 1) != 0) {
          iVar3 = iVar5 + -1;
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          if (iVar3 != iVar5) {
            *(undefined2 *)(param_1 + 10) = 0xfffa;
          }
        }

        if ((uVar6 & 2) != 0) {
          iVar3 = iVar3 + 1;
          if (*(short *)(param_1 + 8) <= iVar3) {
            iVar3 = *(short *)(param_1 + 8) + -1;
          }
          if (iVar3 == *(char *)(param_1 + 5)) {
            return 0xffffffff;
          }
          *(undefined2 *)(param_1 + 10) = 6;
        }

        if (iVar3 != *(char *)(param_1 + 5)) {
          FUN_overlay0__800534b4(param_1,iVar3);
          return 0xfffffffe;
        }
        return 0xffffffff;
      }

      uVar7 = 0xfffffffb;
      iVar3 = 0;
      DAT_801c90c8 = (short)*(char *)(param_1 + 5);
      *(undefined *)(param_1 + 4) = 1;
    }
    else {
      if (cVar1 != '\x02') {
        return 0xffffffff;
      }

      iVar3 = FUN_8006cfc4(&DAT_overlay0__8005c3dc,param_2);
      if (iVar3 == -3) {
        *(undefined2 *)(param_1 + 0x10) = 0;
        return 0xfffffffe;
      }
      if (iVar3 < -2) {
        if (iVar3 == -4) {
          return 0xfffffff9;
        }
      }
      else {
        if (iVar3 == -2) {
          return 0xffffffff;
        }
        if (iVar3 == -1) {

          *(undefined2 *)(param_1 + 0x10) = 0;
          uVar7 = 0xfffffffa;
          DAT_overlay0__8005c428 = 0xfff7;
          FUN_8006ced8(&DAT_overlay0__8005c3dc);
          FUN_80073d30(&LAB_overlay0__8005c42a_2);
          FUN_overlay0__800576d8(param_1 + 0x38);
          iVar3 = (int)*(char *)(param_1 + 6);
          *(undefined *)(param_1 + 4) = 1;
          goto LAB_overlay0__80053c6c;
        }
      }

      uVar7 = 0xfffffffb;
      iVar5 = FUN_overlay0__80052cb4((int)DAT_801c90c8);
      FUN_overlay0__80052928
                ((int)*(short *)(iVar5 + DAT_801c90ca * 0x10 + 0x1c),iVar3,&DAT_8016e894);
      *(undefined2 *)(param_1 + 0x10) = 0;
      DAT_overlay0__8005c428 = 0xfff7;
      FUN_8006ced8(&DAT_overlay0__8005c3dc);
      FUN_80073d30(&LAB_overlay0__8005c42a_2);
      FUN_overlay0__800576d8(param_1 + 0x38);
      iVar3 = (int)*(char *)(param_1 + 6);
      *(undefined *)(param_1 + 4) = 1;
    }

LAB_overlay0__80053c6c:

    FUN_overlay0__8005350c(param_1,iVar3);
    return uVar7;
  }

  FUN_8006cfc4(&DAT_overlay0__8005c3dc,0);
  if (param_2 == 0) {
    return 0xffffffff;
  }

  uVar6 = *(uint *)(param_2 + 4);
  if ((uVar6 & 0x10) != 0) {
    DAT_801c90d0 = 0;
    return 0xfffffff8;
  }
  if ((uVar6 & 0x504) != 0) {
    *(undefined *)(param_1 + 4) = 0;
    return 0xfffffffa;
  }
  if ((uVar6 & 0xa00) == 0) {

    iVar3 = (int)*(char *)(param_1 + 6);
    uVar6 = uVar6 | *(uint *)(param_2 + 0xc);

    if (((uVar6 & 1) != 0) && (iVar3 = iVar3 + -1, iVar3 < 0)) {
      iVar3 = 0;
    }

    uVar7 = FUN_overlay0__80052cb4((int)DAT_801c90c8);
    iVar5 = FUN_overlay0__80052958(uVar7);

    if (((uVar6 & 2) != 0) && (iVar3 = iVar3 + 1, iVar5 <= iVar3)) {
      iVar3 = iVar5 + -1;
    }

    if (iVar3 != *(char *)(param_1 + 6)) {
      FUN_overlay0__8005350c(param_1,iVar3);
      return 0xfffffffe;
    }
    return 0xffffffff;
  }

  DAT_801c90ca = (short)*(char *)(param_1 + 6);
  iVar3 = FUN_overlay0__80052cb4((int)DAT_801c90c8);
  sVar2 = *(short *)(iVar3 + DAT_801c90ca * 0x10 + 0x1c);
  iVar8 = (int)sVar2;
  iVar5 = FUN_overlay0__8005298c(iVar3);
  iVar3 = iVar3 + DAT_801c90ca * 0x10;
  DAT_801c90cc = *(byte *)(iVar3 + 0x1f) >> 7;

  if (((*(byte *)(iVar3 + 0x1f) >> 6 ^ 1) & 1) != 0) {
    uVar6 = DAT_801d5de4 >> 1 & 3;
    if (uVar6 == 1) {
      if (1 < iVar8 - 0xfU) goto LAB_overlay0__80053a58;
    }
    else if ((uVar6 != 2) || (iVar8 != 0xd)) {
LAB_overlay0__80053a58:

      DAT_overlay0__8005c428 = 0;
      DAT_overlay0__8005c3dc = (undefined2)iVar5;
      DAT_overlay0__8005c3e2 = *(undefined2 *)(&DAT_80170044 + iVar8 * 2);
      FUN_8006ce70();

      if (DAT_801c90cc != 0) {
        iVar8 = 0;
        iVar3 = param_1;
        if (0 < iVar5) {
          do {
            *(short *)(iVar3 + 0x2a54) = sVar2;
            *(short *)(iVar3 + 0x2a56) = (short)iVar8;
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar8 < iVar5);
        }
        FUN_overlay0__80057654(param_1 + 0x38,iVar5,&DAT_8016e894,param_1 + 0x2a54);
      }
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined *)(param_1 + 4) = 2;
      return 0xfffffffb;
    }
  }

  return 0xfffffff9;
}

void FUN_overlay0__8005373a(void)

{
  int in_t9;

  prefetch(in_t9 + -0x5b7d,0x1f);

  halt_baddata();
}

void FUN_overlay0__80053ca8(short *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined auStack_140 [12];
  uint local_134;
  int local_130;
  uint local_12c;
  undefined auStack_120 [12];
  undefined2 local_114;
  undefined2 local_112;
  ushort local_110;
  undefined2 local_10e;
  undefined auStack_108 [64];
  undefined auStack_c8 [128];
  undefined uStack_48;
  undefined auStack_47 [3];
  int local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;

  local_3c = 4;
  local_38 = 0xffffffff;
  local_44 = (int)*(char *)((int)param_1 + 5);
  local_34 = 0xffffffff;
  local_40 = (undefined4 *)FUN_overlay0__80052cb4(local_44);
  local_30 = (int)*param_1;
  iVar11 = (int)param_1[1] + param_1[5] * 10 + -0x1c;

  FUN_8006ac68(auStack_140,6);
  local_134 = local_134 & 0xff9fffff | 0x200000;
  local_130 = param_2;
  FUN_8006bef4(&DAT_overlay0__8005c410,param_2,0,0xd2);
  FUN_8007da44(param_2,0x220);
  FUN_8006d50c(&DAT_overlay0__8005c3dc,param_2);

  if (-1 < DAT_overlay0__8005c428) {
    local_2c = FUN_8006beb4(&DAT_overlay0__8005c410);
    FUN_8007da80(auStack_140,&DAT_801c9150);
    local_12c = FUN_8006b548(&LAB_overlay0__8005b95a_2,&DAT_overlay0__8005b970,local_2c,0x80);
    FUN_8006adb4(auStack_140,local_40[DAT_801c90ca * 4 + 4],0xb0,0xec,1);
  }

  psVar7 = param_1 + 0x1c;

  if (*(char *)(param_1 + 0x21) != '\0') {

    uVar3 = FUN_overlay0__80057910(psVar7,0);
    FUN_800745b0(&LAB_overlay0__8005c42a_2,param_2,uVar3,0,0x30);
    uVar3 = FUN_overlay0__80057954(psVar7,0);
    FUN_800745b0(&LAB_overlay0__8005c42a_2,param_2,uVar3,1,0x30);
  }

  if ((*(char *)(param_1 + 2) == '\x02') &&
     (iVar10 = DAT_overlay0__8005c3e2 + 1,
     *(char *)((int)psVar7 + DAT_overlay0__8005c3e2 + 0xb) != '\0')) {

    uVar3 = FUN_overlay0__80057910(psVar7,iVar10);
    FUN_800745b0(&LAB_overlay0__8005c42a_2,param_2,uVar3,0,0x80);
    uVar3 = FUN_overlay0__80057954(psVar7,iVar10);
    FUN_800745b0(&LAB_overlay0__8005c42a_2,param_2,uVar3,1,0x80);

    FUN_overlay0__80057998(psVar7,auStack_120,iVar10);
    FUN_8007da80(auStack_140,&DAT_801c9110);
    local_12c = FUN_8006b548(&LAB_overlay0__8005b95a_2,&DAT_overlay0__8005b978,0,0x80);
    FUN_8008cf34(auStack_108,&DAT_801c717a,local_114,local_112);
    FUN_8006af40(auStack_140,auStack_108,0x78,0x186,1,local_34,0);
    FUN_8008cf34(auStack_108,&DAT_801c7185,local_110 / 10,(uint)local_110 % 10,local_10e);
    FUN_8006af40(auStack_140,auStack_108,0x78,0x19a,1,local_34,0);
  }

  FUN_800747d0(&LAB_overlay0__8005c42a_2,param_2);

  iVar10 = ((int)param_1[5] << 7) / 6;
  uVar9 = local_44 - 1;
  if (iVar10 < 0) {
    iVar10 = -iVar10;
  }

  local_2c = FUN_8006beb4(param_1 + 10);
  uVar3 = FUN_8006b548(param_1 + 0x18,param_1 + 0x1a,0x80 - iVar10,0x80);
  *(undefined4 *)(param_1 + 0xe) = uVar3;

  if (((uint)~(int)param_1[0x16] >> 0x1f | (uint)(param_1[0x16] < -1)) != 0) {
    uVar4 = FUN_8006beb4(param_1 + 10);

    if (param_1[5] < 0) {
      local_34 = local_44 + 3;
      local_3c = local_3c + 1;
      local_38 = uVar9;
    }

    if (0 < param_1[5]) {
      uVar9 = local_44 - 2;
      local_38 = local_44 + 2;
      iVar11 = iVar11 + -0x3c;
      local_3c = local_3c + 1;
      local_34 = uVar9;
    }

    local_3c = local_3c + uVar9;
    for (; (int)uVar9 < local_3c; uVar9 = uVar9 + 1) {

      if ((~uVar9 >> 0x1f & (uint)((int)uVar9 < (int)param_1[4])) != 0) {
        iVar5 = FUN_overlay0__80052cb4(uVar9);
        iVar5 = *(char *)(iVar5 + 0xc) * 0xc;
        uVar8 = uVar4;

        if (uVar9 == local_38) {
          uVar8 = (int)(uVar4 * (0x80 - iVar10)) >> 7;
        }

        if (uVar9 == local_34) {
          uVar8 = (int)(uVar4 * iVar10) >> 7;
        }

        if (uVar9 != (int)*(char *)((int)param_1 + 5)) {
          uVar8 = (int)uVar8 >> 2;
        }

        piVar6 = (int *)FUN_80081478(param_2 + 4,uVar8 | uVar8 << 8 | uVar8 << 0x10);

        *piVar6 = (local_30 -
                  (((int)((uint)*(ushort *)(&DAT_overlay0__8005b834 + iVar5) << 0x10) >> 0x11) +
                  -0x2a)) + (iVar11 - ((int)((uint)*(ushort *)(&LAB_overlay0__8005b836 + iVar5) <<
                                            0x10) >> 0x11)) * 0x10000;
        piVar6[1] = *(int *)(&DAT_overlay0__8005b830 + iVar5);
        piVar6[2] = *(int *)(&DAT_overlay0__8005b834 + iVar5);
        FUN_8007da44(param_2 + 4,*(ushort *)(&LAB_overlay0__8005b836_2 + iVar5) | 0x20);
      }
      iVar11 = iVar11 + 0x3c;
    }

    if (((*(char *)(param_1 + 2) < '\x02') && (-1 < *(char *)(param_1 + 2))) && (DAT_801c90d0 != 0))
    {
      local_134 = local_134 & 0xff9fffff | 0x200000;
      FUN_8007da80(auStack_140,&DAT_801c9120);
      local_12c = 0x2503c28;
      iVar11 = FUN_8006ae28(auStack_140,&DAT_801c83e6,0x14c,0x68,0);
      FUN_8006ba48(&uStack_48,param_2,0x149 - iVar11,0x5f,0xfffffffb,10,(int)param_1[6]);
    }

    sVar2 = param_1[1];
    iVar11 = local_2c * 0x60;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0x7f;
    }
    uVar9 = iVar11 >> 7;
    FUN_8007da80(auStack_140,&DAT_801c9150);
    local_12c = uVar9 | uVar9 << 8 | uVar9 << 0x10 | 0x2000000;
    iVar11 = local_30 + 0x44;
    local_134 = local_134 & 0xff9fffff | 0x200000;
    FUN_8006ac90(auStack_140,*local_40,iVar11,sVar2 + 0x1e,1);

    if ((DAT_801c98e0 == '\0') && (DAT_801c90d0 != 0)) {
      FUN_overlay0__800498b0(param_2 + 4,local_40[1],iVar11,sVar2 + 0x26,uVar9,0x2808080,0);
    }

    iVar11 = param_2 + 4;
    psVar7 = (short *)FUN_8007d024(iVar11,0);
    iVar10 = -1;
    *psVar7 = (short)local_30 + 0x1a;
    sVar2 = param_1[1];
    psVar7[2] = 0x20;
    psVar7[3] = 0x38;
    psVar7[1] = sVar2 + 4;
    FUN_8007da44(iVar11,0x200);
    FUN_8006bef4(param_1 + 10,iVar11,local_30,(int)param_1[1]);
    FUN_8007da44(iVar11,0x200);

    cVar1 = *(char *)(param_1 + 2);
    iVar11 = (int)param_1[8];

    if (cVar1 == '\x01') {
      iVar10 = (int)*(char *)(param_1 + 3);
      if (DAT_801c90d0 != 0) {
        if (DAT_801c98e0 == '\0') {
          FUN_overlay0__800498b0(param_2,DAT_801c90d8,0xb0,0x1a4,0x80,0x278643c,1);
        }
        else {
          FUN_8007da80(auStack_140,&DAT_801c9150);
          local_12c = 0x278500a;
          FUN_8006adb4(auStack_140,DAT_801c90d8,0xb0,0x1bc,1);
        }
      }
    }
    else if (cVar1 < '\x02') {
      if (cVar1 == '\0') {

        if (0 < local_44) {
          FUN_8006b988(auStack_47,param_2,*param_1 + 0x2a,param_1[1] + 2,6,0xfffffff6,
                       (int)param_1[6]);
        }
        if (local_44 < param_1[4] + -1) {
          FUN_8006b988(auStack_47,param_2,*param_1 + 0x2a,param_1[1] + 0x3e,6,10,
                       (int)param_1[6]);
        }
      }
    }
    else if (cVar1 == '\x02') {

      if (0 < DAT_801d5de2) {
        FUN_8008cf34(auStack_c8,&DAT_801c8442,(DAT_801d5de2 * 1000) / 0x3f6);
        FUN_8007da80(auStack_140,&DAT_801c9120);
        local_12c = FUN_8006b548(&LAB_overlay0__8005b95a_2,&DAT_overlay0__8005b97c,local_2c,0x80);
        FUN_8006b184(auStack_140,auStack_c8,0x140,0xca,1,0xfffffffd,0);
      }
      iVar10 = (int)*(char *)(param_1 + 3);
      iVar11 = 8;
    }

    FUN_overlay0__800529c0
              (local_40,param_2,iVar10,*param_1 + 0x48,param_1[1] + 100,local_2c,iVar11,
               &DAT_8016e894);
  }
  return;
}

void FUN_overlay0__8005471c(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_801c90a8;

  DAT_801c90e8 = param_1;

  if ((DAT_801c90e4 != 0) && (DAT_801c98e0 == '\0')) {

    FUN_8007f174(DAT_801c90a8);

    FUN_8006ecd8(uVar1,param_1);

    FUN_8006ecd8(uVar1,DAT_801c90ec);
  }
  return;
}

void FUN_overlay0__80054794(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_801c90a8;

  DAT_801c90ec = param_1;

  if ((DAT_801c90e4 != 0) && (DAT_801c98e0 == '\0')) {

    FUN_8007f174(DAT_801c90a8);

    FUN_8006ecd8(uVar1,DAT_801c90e8);

    FUN_8006ecd8(uVar1,param_1);
  }
  return;
}

void FUN_overlay0__8005480c
               (undefined4 param_1,short *param_2,undefined4 param_3,int param_4,int param_5,
               int param_6,int param_7,int param_8,int param_9,int param_10)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  short sVar9;
  undefined auStack_60 [12];
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];

  sVar9 = param_2[2];
  sVar1 = param_2[1];

  FUN_8006ac68(auStack_60,6);
  local_54 = local_54 & 0xff9fffff | 0x200000;
  local_50 = param_1;

  FUN_8007da80(auStack_60,&DAT_801c9110);
  local_4c = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_3,0x100);

  if (param_8 != 0) {
    FUN_8006adb4(auStack_60,param_8,param_4 + 8,param_5 + 4,1);
  }

  if (param_9 != 0) {
    FUN_8006adb4(auStack_60,param_9,param_4 + param_7 + -8,param_5 + 4,1);
  }

  if (param_10 != 0) {

    FUN_8008cf34(&local_40,&DAT_overlay0__8005a9ac,((int)*param_2 - (int)param_2[1]) + 1);

    FUN_8007da80(auStack_60,&DAT_801c9120);
    local_4c = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c486_2,param_3,0x80);

    FUN_8006af40(auStack_60,&local_40,param_4 + param_7 + 2,param_5 + 0x13,0,0xfffffffd,0);
  }

  sVar4 = (short)param_5;
  sVar5 = (short)param_4;

  if (0 < (int)sVar9 - (int)sVar1) {
    sVar2 = *param_2;
    sVar3 = param_2[1];

    uVar6 = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c48a_2,param_3,0x80);
    psVar7 = (short *)FUN_8007d024(param_1,uVar6);

    psVar7[1] = sVar4 + 5;
    psVar7[2] = 4;
    *psVar7 = sVar5 + (short)((param_7 * ((int)sVar2 - (int)sVar3)) / ((int)sVar9 - (int)sVar1)) +
              -2;
    psVar7[3] = 0xc;
  }

  local_30[0] = 0x28282b;
  if (-1 < param_6) {
    local_30[0] = 0x78500a;
  }

  local_40 = sVar5 + 1;
  local_3e = sVar4 + 9;
  local_3c = (short)param_7 + -2;
  local_3a = 5;

  local_38 = FUN_8006b548(&DAT_overlay0__8005c46c,local_30,param_3,0x100);
  local_34 = FUN_8006b548(&DAT_overlay0__8005c46c,local_30,param_3,0x80);

  if (-1 < param_6) {
    param_6 = 8 - param_6;
    if (param_6 < 0) {
      param_6 = 0;
    }

    local_30[0] = local_38;
    local_38 = FUN_8006b548(local_30,&LAB_overlay0__8005c47e_2,param_6,8);
    local_30[0] = local_34;
    local_34 = FUN_8006b548(local_30,&LAB_overlay0__8005c47e_2,param_6,8);
  }

  FUN_8006b77c(param_1,&local_40);

  uVar6 = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c490,param_3,0x80);
  iVar8 = FUN_8007e738(param_1,uVar6);

  *(short *)(iVar8 + 0x14) = sVar5;
  *(short *)(iVar8 + 0x10) = sVar5;
  *(short *)(iVar8 + 4) = sVar5;
  sVar9 = sVar5 + (short)param_7 + -1;
  *(short *)(iVar8 + 0xc) = sVar9;
  *(short *)(iVar8 + 8) = sVar9;
  sVar9 = sVar4 + 8;
  *(short *)(iVar8 + 0x16) = sVar9;
  *(short *)(iVar8 + 10) = sVar9;
  *(short *)(iVar8 + 6) = sVar9;
  *(short *)(iVar8 + 0x12) = sVar4 + 0xe;
  *(short *)(iVar8 + 0xe) = sVar4 + 0xe;

  FUN_8007da44(param_1,0x220);
  return;
}

void FUN_overlay0__80054b9c(undefined *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;

  if (param_2 < 0) {
    param_2 = -param_2;
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
  }

  switch(param_3 & 0xf) {
  case 0:

    FUN_8008cf34(param_1,&DAT_overlay0__8005a9ac,param_2);
    return;
  case 1:

    pcVar1 = "%d.%d";
    iVar2 = param_2 / 10;
    iVar3 = iVar2 * 10;
    break;
  case 3:

    pcVar1 = "%d.%03d";
    iVar2 = param_2 / 1000;
    iVar3 = iVar2 * 1000;
    break;
  case 4:

    param_2 = param_2 * 5;
  case 2:

    pcVar1 = "%d.%02d";
    iVar2 = param_2 / 100;
    iVar3 = iVar2 * 100;
    break;
  default:

    goto switchD_overlay0__80054be0_caseD_5;
  }

  FUN_8008cf34(param_1,pcVar1,iVar2,param_2 - iVar3);
switchD_overlay0__80054be0_caseD_5:
  return;
}

void FUN_overlay0__80054cc8(int param_1)

{

  *(undefined2 *)(param_1 + 0x12) = 0xffff;
  return;
}

void FUN_overlay0__80054cd4
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
               undefined4 *param_5)

{
  undefined4 uVar1;

  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;

  *param_1 = param_2;
  param_1[1] = param_3;

  *(undefined *)(param_1 + 2) = param_4;

  uVar1 = param_5[1];
  *(undefined4 *)((int)param_1 + 10) = *param_5;
  *(undefined4 *)((int)param_1 + 0xe) = uVar1;
  return;
}

void FUN_overlay0__80054d10(int param_1,uint *param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (*(short *)(param_1 + 0x12) < 0) {
    return;
  }

  sVar2 = *(short *)(param_1 + 0x14) + 1;
  *(short *)(param_1 + 0x14) = sVar2;
  if (0x3c < sVar2) {
    *(undefined2 *)(param_1 + 0x14) = 0;
  }

  if (param_2 == (uint *)0x0) {
    return;
  }

  uVar3 = *param_2;
  iVar6 = (int)*(short *)(param_1 + 10);
  iVar5 = 0;

  if ((uVar3 & 0x10) != 0) {
    iVar5 = -1;
  }
  if ((uVar3 & 0x1000) != 0) {
    iVar5 = iVar5 + 1;
  }

  if ((uVar3 & 0xc) != 0) {
    iVar5 = iVar5 * 10;
  }

  if (((param_2[1] | param_2[3]) & 4) != 0) {
    iVar5 = iVar5 + -1;
  }
  if (((param_2[1] | param_2[3]) & 8) != 0) {
    iVar5 = iVar5 + 1;
  }

  if (iVar5 < 0) {

    iVar4 = (int)*(short *)(param_1 + 0xc);
    bVar1 = iVar5 + iVar6 < iVar4;
  }
  else {
    if (iVar5 < 1) goto LAB_overlay0__80054df4;

    iVar4 = (int)*(short *)(param_1 + 0xe);
    bVar1 = iVar4 < iVar5 + iVar6;
  }

  iVar6 = iVar5 + iVar6;
  if (bVar1) {
    iVar6 = iVar4;
  }
LAB_overlay0__80054df4:

  if (*(short *)(param_1 + 10) != iVar6) {
    *(short *)(param_1 + 10) = (short)iVar6;
    FUN_80060840(8);
  }
  return;
}

void FUN_overlay0__80054e20
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined auStack_88 [12];
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined auStack_68 [64];

  FUN_8006ac68(auStack_88,6);
  local_78 = param_2;
  FUN_8007da80(auStack_88,&DAT_801c9120);
  local_7c = local_7c & 0xff9fffff | 0x200000;

  bVar2 = *(byte *)(param_1 + 2) & 0xf;
  uVar4 = 1;

  if (bVar2 == 6) {

    FUN_8007da80(auStack_88,&DAT_801c9110);
    local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_6,0x80);

    FUN_8006adb4(auStack_88,&DAT_801c71c1,param_3 + 4,param_4,1);
    FUN_8006adb4(auStack_88,&DAT_801c71d9,param_3 + 0x7c,param_4,1);

    FUN_8007da80(auStack_88,&DAT_801c9120);
    local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c470,param_6,0x80);

    FUN_8006adb4(auStack_88,*param_1,param_3 + 0x40,param_4,1);
    goto LAB_overlay0__8005513c;
  }

  if (bVar2 < 7) {
    if (bVar2 == 5) {
      local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_6,0x80);
      FUN_8006adb4(auStack_88,&DAT_801c71ee,param_3 + 8,param_4,1);
      puVar3 = &DAT_801c7a36;
LAB_overlay0__80054f80:
      FUN_8006adb4(auStack_88,puVar3,param_3 + 0x78,param_4,1);
      goto LAB_overlay0__8005513c;
    }
  }

  else if (bVar2 == 7) {
    local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_6,0x80);
    FUN_8006adb4(auStack_88,&DAT_801c71c1,param_3 + 8,param_4,1);
    puVar3 = &DAT_801c71d9;
    goto LAB_overlay0__80054f80;
  }

  uVar4 = 0;
  local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c470,param_6,0x80);

  FUN_8006af40(auStack_88,*param_1,param_3,param_4,1,0xfffffffd,0);

  FUN_overlay0__80054b9c(auStack_68,(int)*(short *)((int)param_1 + 10),(int)*(char *)(param_1 + 2));
  local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c478,param_6,0x80);
  FUN_8006b184(auStack_88,auStack_68,param_3 + 0x50,param_4,1,0xfffffffd,0);

  local_74 = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_6,0x80);
  FUN_8006af40(auStack_88,param_1[1],param_3 + 0x54,param_4,0,0xfffffffe,0);

LAB_overlay0__8005513c:

  iVar1 = -1;
  if (param_5 != 0) {
    iVar1 = (int)*(short *)(param_1 + 5);
  }

  FUN_overlay0__8005480c(param_2,(int)param_1 + 10,param_6,param_3 + 8,param_4,iVar1,0x70,0,0,uVar4);
  return;
}

void FUN_overlay0__800551bc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;

  uVar1 = 0;

  switch(*(undefined *)(param_1 + 0xc)) {
  case 0:

    uVar1 = (uint)*(byte *)(param_2 + 0x61);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x60);
    }
    break;
  case 1:

    uVar1 = (uint)*(byte *)(param_2 + 0x5d);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x5c);
    }
    break;
  case 2:

    uVar1 = (uint)*(byte *)(param_2 + 0x6a);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x66);
    }
    break;
  case 3:

    uVar1 = (uint)*(byte *)(param_2 + 0x68);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 100);
    }
    break;
  case 4:

    uVar1 = (uint)*(byte *)(param_2 + 0x5b);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x5a);
    }
    break;
  case 5:

    uVar1 = *(byte *)(param_2 + 0x5f) - 0x80;
    if (param_4 != 0) {
      uVar1 = *(byte *)(param_2 + 0x5e) - 0x80;
    }
    break;
  case 6:

    uVar1 = (uint)*(byte *)(param_2 + 0x6d);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x6c);
    }
    break;
  case 7:

    uVar1 = (uint)*(byte *)(param_2 + 0x51);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x50);
    }
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:

    uVar1 = (uint)*(ushort *)(param_2 + (*(char *)(param_1 + 0xc) + -8) * 2 + 0x3c);
    break;
  case 0x11:

    uVar1 = (uint)*(byte *)(param_2 + 0x53);
    if (param_4 != 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x52);
    }
    break;
  case 0x16:

    uVar1 = (uint)*(byte *)(param_2 + 0x74);
    break;
  case 0x17:

    uVar1 = (uint)*(byte *)(param_2 + 0x75);
    break;
  }

  FUN_overlay0__80054b9c(param_3,uVar1,*(undefined *)(param_1 + 0xd));
  return;
}

void FUN_overlay0__80055328
               (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               int param_6)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined auStack_c0 [12];
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined auStack_a0 [64];
  undefined auStack_60 [8];
  undefined auStack_58 [6];
  short local_52 [13];
  undefined4 local_38;
  int local_34;
  int local_30;

  bVar2 = false;
  sVar9 = 0;
  sVar8 = 1;
  uVar7 = 10;

  FUN_8006ac68(auStack_c0,6);

  local_b4 = local_b4 & 0xff9fffff | 0x200000;
  local_b0 = param_2;

  FUN_8007da80(auStack_c0,&DAT_801c9120);

  uVar10 = 0xe;
  local_38 = 0x24a250e;

  if (param_6 != 0) {
    local_38 = 0x25e4d36;
  }

  local_ac = FUN_8006b548(&DAT_overlay0__8005c46c,&local_38,param_5,0x80);

  FUN_8006af40(auStack_c0,*param_1,param_3,param_4,1,0xfffffffd,0);

  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    iVar3 = FUN_8005f92c(&DAT_8016e894);
    if (iVar3 != 1) {
      return;
    }
  default:

    FUN_overlay0__800551bc(param_1,&DAT_8016e894,auStack_a0,1,0);
    local_ac = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c478,param_5,0x80);
    FUN_8006b184(auStack_c0,auStack_a0,param_3 + 0x78,param_4,1,0xfffffffd,0);

    local_ac = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_5,0x80);
    FUN_8006af40(auStack_c0,param_1[2],param_3 + 0x7a,param_4,0,0xfffffffe,0);

    if ((*(byte *)((int)param_1 + 0xd) & 0x80) == 0) {
      return;
    }

    FUN_overlay0__800551bc(param_1,&DAT_8016e894,auStack_a0,0,0);
    local_ac = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c478,param_5,0x80);
    FUN_8006b184(auStack_c0,auStack_a0,param_3 + 0xb8,param_4,1,0xfffffffd,0);

    local_ac = FUN_8006b548(&DAT_overlay0__8005c46c,&LAB_overlay0__8005c47a_2,param_5,0x80);
    FUN_8006af40(auStack_c0,param_1[2],param_3 + 0xba,param_4,0,0xfffffffe,0);
    return;
  case 8:
    FUN_8005fc9c(&DAT_8016e894,9,auStack_60);
    puVar11 = &DAT_801c71ee;
    puVar4 = &DAT_801c7a36;
    goto LAB_overlay0__80055534;

  case 0x12:
    bVar2 = true;
  case 0x13:
    sVar9 = 0;
    sVar8 = 1;
    uVar7 = 10;

    if (!bVar2) {
      sVar9 = 2;
      sVar8 = 3;
      uVar7 = 0xb;
      bVar2 = true;

switchD_overlay0__80055474_caseD_14:
      if (!bVar2) {
        sVar9 = 4;
        sVar8 = 5;
        uVar7 = 0xc;
      }
    }

    iVar3 = 0;
    puVar4 = auStack_58;
    local_34 = param_3 + 0x6a;
    local_30 = param_3 + 0xb2;

    iVar5 = FUN_8005fc9c(&DAT_8016e894,uVar7,puVar4);
    iVar6 = 0;

    if (iVar5 < 1) {
      return;
    }

    do {
      sVar1 = *(short *)(puVar4 + 6);

      if (sVar1 == sVar9) {
        iVar3 = local_34;
      }
      if (sVar1 == sVar8) {
        iVar3 = local_30;
      }

      if (sVar1 == sVar8 || sVar1 == sVar9) {
        FUN_overlay0__8005480c
                  (param_2,puVar4,param_5,iVar3,param_4 + -0x10,0xffffffff,0x34,&DAT_801c71c1,
                   &DAT_801c71d9,1);
      }

      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar6 < iVar5);
    return;

  case 0x14:
    goto switchD_overlay0__80055474_caseD_14;

  case 0x15:
    uVar10 = 0xd;
    break;

  case 0x16:
    break;

  case 0x17:
    uVar10 = 0xf;
  }

  iVar3 = FUN_8005fc9c(&DAT_8016e894,uVar10,auStack_60);
  if (0 < iVar3) {
    puVar11 = &DAT_801c71c1;
    puVar4 = &DAT_801c71d9;

LAB_overlay0__80055534:
    FUN_overlay0__8005480c
              (param_2,auStack_60,param_5,param_3 + 0x6a,param_4 + -0x10,0xffffffff,0x70,puVar11,
               puVar4,1);
  }
  return;
}

int FUN_overlay0__80055808(int param_1)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;

  while( true ) {
    if (0xf < iVar2) {
      return 0x10;
    }

    piVar1 = (int *)(param_1 + 0x10);
    param_1 = param_1 + 8;

    if (*piVar1 == 0) break;

    iVar2 = iVar2 + 1;
  }

  return iVar2;
}

void FUN_overlay0__80055840
               (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,undefined4 param_8,char *param_9)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;

  local_44 = FUN_overlay0__80055808();

  iVar2 = param_6 >> 0x1f;
  local_3c = param_6 / 6 + iVar2;
  iVar12 = param_5 * 0x10000 + -0x180008;
  local_40 = param_6 / 5 + iVar2;

  local_38 = (local_40 - iVar2) * 0x100;
  local_30 = (local_40 - iVar2) * 0x10000;
  local_34 = (local_3c - iVar2) * 0x100;
  local_2c = (local_3c - iVar2) * 0x10000;

  for (iVar11 = 0; iVar11 < local_44; iVar11 = iVar11 + 1) {
    cVar1 = *param_9;
    param_9 = param_9 + 1;
    uVar10 = *(undefined4 *)(param_1 + iVar11 * 8 + 0x10);

    if ('\0' < cVar1) {
      uVar3 = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c484,param_6,0x80);
      psVar4 = (short *)FUN_8007d024(param_2,uVar3);
      *psVar4 = (short)param_4 + -8;
      psVar4[1] = (short)param_5 + -0xc;
      psVar4[2] = 4;
      psVar4[3] = 0xc;
    }

    FUN_overlay0__80055328(uVar10,param_2,param_4,param_5,param_6,'\0' < cVar1);

    if (iVar11 == param_3) {
      iVar9 = 8 - param_7;
      if (iVar9 < 0) {
        iVar9 = 0;
      }

      local_48 = FUN_8006b548(&DAT_overlay0__8005c46c,param_1 + 8,param_6,0x180);
      local_48 = FUN_8006b548(&local_48,&LAB_overlay0__8005c47e_2,iVar9,8);
      piVar5 = (int *)FUN_80081478(param_2);
      *piVar5 = param_4 + iVar12;
      piVar5[1] = 0x799a4c00;
    }
    else {

      if (cVar1 < '\x01') {
        uVar6 = local_3c - iVar2;
        uVar7 = local_34;
      }
      else {
        uVar6 = local_40 - iVar2;
        uVar7 = local_38;
      }

      uVar8 = local_2c;
      if ('\0' < cVar1) {
        uVar8 = local_30;
      }

      piVar5 = (int *)FUN_80081478(param_2,uVar6 | uVar7 | uVar8);
      *piVar5 = param_4 + iVar12;
      piVar5[1] = 0x799a4c00;
    }

    piVar5[2] = 0x180100;
    FUN_8007da44(param_2,0x236);

    param_4 = param_4 + 4;
    iVar12 = iVar12 + 0x1e0000;
    param_5 = param_5 + 0x1e;
  }
  return;
}

int FUN_overlay0__80055b14(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = FUN_8005f834(&DAT_8016e894);

  DAT_overlay0__8005d140 = &PTR_DAT_overlay0__8005c6e0;

  iVar2 = FUN_8005f800(&DAT_8016e894);
  if (iVar2 != 0) {
    DAT_overlay0__8005d140 = &PTR_DAT_overlay0__8005c650;
  }

  iVar4 = 1;

  iVar2 = FUN_8005f814(&DAT_8016e894);
  if (iVar2 != 0) {
    PTR_PTR_DAT_overlay0__8005c770_overlay0__8005d144 = (undefined *)&PTR_DAT_overlay0__8005c770;
    iVar4 = 2;
  }

  (&DAT_overlay0__8005d140)[iVar4] =
       (undefined **)(&PTR_PTR_DAT_overlay0__8005c800_overlay0__8005d100)[iVar1];

  iVar2 = FUN_8005f820(&DAT_8016e894);
  if (iVar2 != 0) {
    (&DAT_overlay0__8005d140)[iVar4] =
         (undefined **)(&PTR_PTR_DAT_overlay0__8005cbf0_overlay0__8005d120)[iVar1];
  }

  (&DAT_overlay0__8005d140)[iVar4 + 1] = &PTR_DAT_overlay0__8005cfe0;
  iVar5 = iVar4 + 2;

  iVar2 = 0;

  iVar1 = FUN_8005f8f0(&DAT_8016e894);
  if (iVar1 == 0) {
    iVar1 = FUN_8005f88c(&DAT_8016e894);
    if (iVar1 != 0) {
      iVar2 = 3;

      PTR_PTR_DAT_overlay0__8005c620_overlay0__8005d080 = (undefined *)&PTR_DAT_overlay0__8005c5f0;
      DAT_overlay0__8005d084 = 10;
      PTR_PTR_DAT_overlay0__8005c5f0_overlay0__8005d088 = (undefined *)&PTR_DAT_overlay0__8005c600;
      DAT_overlay0__8005d08c = 0xb;
      PTR_PTR_DAT_overlay0__8005c600_overlay0__8005d090 = (undefined *)&PTR_DAT_overlay0__8005c610;
      DAT_overlay0__8005d094 = 0xc;
    }
  }
  else {
    iVar2 = 1;
    PTR_PTR_DAT_overlay0__8005c620_overlay0__8005d080 = (undefined *)&PTR_DAT_overlay0__8005c620;
    DAT_overlay0__8005d084 = 0xd;
  }

  iVar3 = FUN_8005f904(&DAT_8016e894);
  iVar1 = iVar2;
  if (iVar3 != 0) {
    iVar1 = iVar2 + 1;
    (&PTR_PTR_DAT_overlay0__8005c620_overlay0__8005d080)[iVar2 * 2] =
         (undefined *)&PTR_DAT_overlay0__8005c630;
    (&DAT_overlay0__8005d084)[iVar2 * 4] = 0xe;
  }

  iVar3 = FUN_8005f918(&DAT_8016e894);
  iVar2 = iVar1;
  if (iVar3 != 0) {
    iVar2 = iVar1 + 1;
    (&PTR_PTR_DAT_overlay0__8005c620_overlay0__8005d080)[iVar1 * 2] =
         (undefined *)&PTR_DAT_overlay0__8005c640;
    (&DAT_overlay0__8005d084)[iVar1 * 4] = 0xf;
  }

  (&PTR_PTR_DAT_overlay0__8005c620_overlay0__8005d080)[iVar2 * 2] = (undefined *)0x0;
  (&DAT_overlay0__8005d084)[iVar2 * 4] = 0xffff;

  if (iVar2 != 0) {
    (&DAT_overlay0__8005d140)[iVar5] = &PTR_DAT_overlay0__8005d070;
    iVar5 = iVar4 + 3;
  }

  return iVar5;
}

void FUN_overlay0__80055e90(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;

  DAT_801c90e0 = 0;
  DAT_801c90dc = 0;
  DAT_801c90de = 0;
  DAT_801c90e4 = 1;
  DAT_801c90e8 = &LAB_overlay0__8005a9e0;
  DAT_801c90ec = &LAB_overlay0__8005a9e0;

  uVar1 = FUN_overlay0__80055b14();

  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined *)(param_1 + 2) = 0;
  param_1[5] = 0xffff;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;

  FUN_overlay0__80056000(param_1,0);

  iVar3 = 0;
  iVar2 = 0xa4;
  param_1[4] = uVar1;

  do {
    FUN_overlay0__80054cc8((int)param_1 + iVar2);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x18;
  } while (iVar3 < 0x10);

  FUN_8006cdcc(&DAT_overlay0__8005d154,&LAB_overlay0__80055d50,param_1);
  DAT_overlay0__8005d1a0 = 0xffff;

  *(undefined4 *)(param_1 + 0x112) = 0x4000de;
  *(undefined4 *)(param_1 + 0x114) = 0xc;
  *(undefined4 *)(param_1 + 0x116) = 0xc0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0x909090;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x11e] = 0xffff;
  return;
}

void FUN_overlay0__80055fd0(int param_1)

{

  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x23c) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  return;
}

void FUN_overlay0__80055fe0(int param_1)

{

  *(ushort *)(param_1 + 0x23c) = ~*(ushort *)(param_1 + 0x228);
  *(undefined2 *)(param_1 + 10) = 0xffff;
  return;
}

void FUN_overlay0__80056000(int param_1,int param_2)

{
  bool bVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  bVar1 = false;
  uVar2 = 0;

  iVar9 = (&DAT_overlay0__8005d140)[param_2];

  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x244);
  uVar4 = *(undefined4 *)(iVar9 + 8);
  *(char *)(param_1 + 5) = (char)param_2;
  *(undefined4 *)(param_1 + 0x244) = uVar4;

  iVar6 = param_1;
  iVar7 = iVar9;

  for (iVar8 = 0; iVar5 = FUN_overlay0__80055808(iVar9), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    if (*(short *)(iVar7 + 0x14) == 8) {
      if (bVar1) {
        *(undefined *)(iVar6 + 0x92) = uVar2;
      }
      else {
        uVar2 = FUN_8005fc9c(&DAT_8016e894,8,param_1 + 0x12);
        *(undefined *)(iVar6 + 0x92) = uVar2;
        bVar1 = true;
      }
    }
    else {
      uVar3 = FUN_8005fc9c(&DAT_8016e894,(int)*(short *)(iVar7 + 0x14),param_1 + 0x12);
      *(undefined *)(iVar6 + 0x92) = uVar3;
    }

    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 8;
  }

  FUN_overlay0__8005471c(*(undefined4 *)(iVar9 + 4));
  return;
}

void FUN_overlay0__8005613c(int param_1,int param_2)

{
  int iVar1;

  *(char *)(param_1 + 6) = (char)param_2;

  iVar1 = (int)DAT_801c90dc;

  *(undefined2 *)(param_1 + 0x10) = 0;

  FUN_overlay0__80054794
            (*(undefined4 *)(*(int *)((&DAT_overlay0__8005d140)[iVar1] + param_2 * 8 + 0x10) + 4));
  return;
}

undefined4 FUN_overlay0__80056194(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  undefined **ppuVar14;
  int iVar15;
  int iVar16;
  int iVar17;

  DAT_801c90e4 = param_3;

  FUN_8006be64(param_1 + 0x224);

  sVar7 = *(short *)(param_1 + 0xc);
  sVar4 = *(short *)(param_1 + 0xc);

  if (sVar7 < 0) {
    *(short *)(param_1 + 0xc) = sVar4 + 1;
    sVar7 = *(short *)(param_1 + 0xc);
    sVar4 = *(short *)(param_1 + 0xc);
  }

  if (0 < sVar7) {
    *(short *)(param_1 + 0xc) = sVar4 + -1;
  }

  sVar7 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar7;
  if (0x3c < sVar7) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }

  sVar7 = *(short *)(param_1 + 0xe) + 1;
  *(short *)(param_1 + 0xe) = sVar7;
  if (0x2d < sVar7) {
    *(undefined2 *)(param_1 + 0xe) = 0;
  }

  FUN_8006be64(&DAT_overlay0__8005d188);

  if (*(short *)(param_1 + 10) < 0) {
    FUN_8006cfc4(&DAT_overlay0__8005d154,0);
    return 0xffffffff;
  }

  cVar1 = *(char *)(param_1 + 4);

  if (cVar1 == '\x01') {

    FUN_8006cfc4(&DAT_overlay0__8005d154,0);

    if (param_2 == 0) {
      return 0xffffffff;
    }

    uVar12 = *(uint *)(param_2 + 4);

    if ((uVar12 & 0x1000) == 0) {

      if ((uVar12 & 0x504) != 0) {
        *(undefined *)(param_1 + 4) = 0;
        return 0xfffffffa;
      }

      if ((uVar12 & 0x10000) != 0) {

        FUN_80060410(&DAT_8016e894,
                     (int)*(short *)((&DAT_overlay0__8005d140)[DAT_801c90dc] +
                                     *(char *)(param_1 + 6) * 8 + 0x14));
        return 0xffffffff;
      }

      if ((uVar12 & 0xa00) == 0) {

        iVar10 = (int)*(char *)(param_1 + 6);

        uVar12 = uVar12 | *(uint *)(param_2 + 0xc);

        if (((uVar12 & 1) != 0) && (iVar10 = iVar10 + -1, iVar10 < 0)) {
          iVar10 = 0;
        }

        iVar9 = FUN_overlay0__80055808((&DAT_overlay0__8005d140)[DAT_801c90dc]);

        if (((uVar12 & 2) != 0) && (iVar10 = iVar10 + 1, iVar9 <= iVar10)) {
          iVar10 = iVar9 + -1;
        }

        if (iVar10 != *(char *)(param_1 + 6)) {
          FUN_overlay0__8005613c(param_1,iVar10);
          return 0xfffffffe;
        }
        return 0xffffffff;
      }

      puVar11 = &LAB_overlay0__8005a9e0;
      sVar7 = 0;

      iVar10 = (&DAT_overlay0__8005d140)[DAT_801c90dc] + *(char *)(param_1 + 6) * 8;
      iVar13 = (int)*(short *)(iVar10 + 0x14);
      iVar9 = *(int *)(iVar10 + 0x10);

      iVar10 = FUN_8005fc9c(&DAT_8016e894,iVar13,param_1 + 0x12);
      iVar6 = 0;

      if (iVar10 < 1) {
        return 0xfffffff9;
      }

      iVar17 = 0x12;
      iVar16 = 0xa4;
      ppuVar14 = &PTR_DAT_overlay0__8005c4a4;
      bVar2 = 0 < iVar10;
      iVar15 = param_1;

      do {

        if (!bVar2) {

          DAT_overlay0__8005d154 = (undefined2)iVar10;
          DAT_801c90e0 = DAT_overlay0__8005d154;

          *(undefined *)(param_1 + 4) = 2;
          DAT_overlay0__8005d15a = sVar7;

          FUN_8006ce70();
          DAT_overlay0__8005d1a0 = 0;
          return 0xfffffffb;
        }

        if (iVar13 == 9) {

          puVar11 = &LAB_overlay0__8005a9e0;
        }
        else if (iVar13 < 10) {
          if (iVar13 == 8) {

            puVar11 = *ppuVar14;
            if (iVar6 == iVar10 + -1) {

              puVar11 = &DAT_801c6f4c;
            }
            sVar7 = (short)*(char *)(param_1 + 6);
          }
          else {
LAB_overlay0__80056598:

            puVar11 = &DAT_801c75f4;
            if (0 < iVar6) {
LAB_overlay0__800565a0:

              puVar11 = &DAT_801c75fe;
            }
          }
        }
        else {

          if (0xc < iVar13) goto LAB_overlay0__80056598;

          switch(*(undefined2 *)(iVar15 + 0x18)) {
          case 0:
          case 2:
          case 4:

            puVar11 = &DAT_801c75f4;
            break;
          case 1:
          case 3:
          case 5:

            goto LAB_overlay0__800565a0;
          }
        }

        iVar5 = param_1 + iVar16;
        iVar3 = param_1 + iVar17;

        iVar17 = iVar17 + 8;
        iVar16 = iVar16 + 0x18;
        iVar15 = iVar15 + 8;
        ppuVar14 = ppuVar14 + 1;
        iVar6 = iVar6 + 1;

        FUN_overlay0__80054cd4
                  (iVar5,puVar11,*(undefined4 *)(iVar9 + 8),*(byte *)(iVar9 + 0xd) & 0xf,iVar3);

        bVar2 = iVar6 < iVar10;
      } while( true );
    }
  }
  else {

    if ('\x01' < cVar1) {
      if (cVar1 != '\x02') {

        return 0xffffffff;
      }

      iVar10 = FUN_8006cfc4(&DAT_overlay0__8005d154,param_2);
      if (iVar10 != -2) {
        if (iVar10 < -1) {
          if (iVar10 == -3) {

            return 0xfffffffe;
          }
        }
        else if (iVar10 == -1) {

          *(undefined2 *)(param_1 + 0x10) = 0;
          DAT_overlay0__8005d1a0 = 0xfff7;
          FUN_8006ced8(&DAT_overlay0__8005d154);
          *(undefined *)(param_1 + 4) = 1;
          return 0xfffffffa;
        }

        iVar6 = 0;
        sVar7 = *(short *)((&DAT_overlay0__8005d140)[DAT_801c90dc] + *(char *)(param_1 + 6) * 8 +
                          0x14);
        iVar10 = param_1;
        iVar9 = param_1;

        if (0 < DAT_801c90e0) {
          do {
            uVar8 = *(undefined4 *)(iVar9 + 0xb2);
            *(undefined4 *)(iVar10 + 0x12) = *(undefined4 *)(iVar9 + 0xae);
            *(undefined4 *)(iVar10 + 0x16) = uVar8;
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 8;
            iVar9 = iVar9 + 0x18;
          } while (iVar6 < DAT_801c90e0);
        }

        FUN_8005f9dc(&DAT_8016e894,(int)sVar7,param_1 + 0x12,(int)DAT_801c90e0);

        *(undefined2 *)(param_1 + 0x10) = 0;
        DAT_overlay0__8005d1a0 = 0xfff7;
        FUN_8006ced8(&DAT_overlay0__8005d154);
        *(undefined *)(param_1 + 4) = 1;
        return 0xfffffffa;
      }
      return 0xffffffff;
    }

    if (cVar1 != '\0') {
      return 0xffffffff;
    }

    FUN_8006cfc4(&DAT_overlay0__8005d154,0);

    if (param_2 == 0) {
      return 0xffffffff;
    }

    uVar12 = *(uint *)(param_2 + 4);

    if ((uVar12 & 0x1000) == 0) {

      if ((uVar12 & 0x500) != 0) {
        DAT_801c90e4 = 0;
        return 0xfffffffc;
      }

      if ((uVar12 & 0xa08) == 0) {

        iVar9 = (int)*(char *)(param_1 + 5);

        uVar12 = uVar12 | *(uint *)(param_2 + 0xc);
        iVar10 = iVar9;

        if ((uVar12 & 1) != 0) {
          iVar10 = iVar9 + -1;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          if (iVar10 != iVar9) {
            *(undefined2 *)(param_1 + 0xc) = 0xfffa;
          }
        }

        if ((uVar12 & 2) != 0) {
          iVar10 = iVar10 + 1;
          if (*(short *)(param_1 + 8) <= iVar10) {
            iVar10 = *(short *)(param_1 + 8) + -1;
          }
          if (iVar10 == *(char *)(param_1 + 5)) {
            return 0xffffffff;
          }
          *(undefined2 *)(param_1 + 0xc) = 6;
        }

        if (iVar10 != *(char *)(param_1 + 5)) {
          FUN_overlay0__80056000(param_1,iVar10);
          return 0xfffffffe;
        }
        return 0xffffffff;
      }

      DAT_801c90dc = (short)*(char *)(param_1 + 5);
      *(undefined *)(param_1 + 4) = 1;
      FUN_overlay0__8005613c(param_1,0);
      return 0xfffffffb;
    }
  }

  DAT_801c90e4 = 0;
  return 0xfffffff8;
}

void FUN_overlay0__80056810(short *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined auStack_68 [12];
  uint local_5c;
  int local_58;
  uint local_54;
  undefined uStack_48;
  undefined auStack_47 [3];
  int local_44;
  undefined4 *local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;

  local_44 = (int)*(char *)((int)param_1 + 5);

  iVar13 = (int)param_1[1] + param_1[6] * 10 + -0x1c;

  local_40 = (undefined4 *)(&DAT_overlay0__8005d140)[local_44];

  local_34 = (int)*param_1;

  FUN_8006ac68(auStack_68,6);
  local_58 = param_2;

  FUN_8007da80(auStack_68,&DAT_801c9120);
  local_5c = local_5c & 0xff9fffff | 0x200000;

  iVar7 = ((int)param_1[6] << 7) / 6;

  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  uVar10 = local_44 - 1;
  iVar12 = 4;

  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }

  local_30 = 0x80 - iVar7;

  local_2c = FUN_8006beb4(param_1 + 0x112);

  uVar3 = FUN_8006b548(param_1 + 0x120,param_1 + 0x122,local_30,0x80);
  *(undefined4 *)(param_1 + 0x116) = uVar3;

  if (((uint)~(int)param_1[0x11e] >> 0x1f | (uint)(param_1[0x11e] < -1)) == 0) {
    return;
  }

  uVar4 = FUN_8006beb4(param_1 + 0x112);
  local_30 = (int)(uVar4 * local_30) >> 7;

  if (param_1[6] < 0) {
    iVar12 = 5;
    local_38 = local_44 + 3;
    local_3c = uVar10;
  }

  if (0 < param_1[6]) {
    iVar13 = iVar13 + -0x3c;
    iVar12 = iVar12 + 1;
    uVar10 = local_44 - 2;
    local_3c = local_44 + 2;
    local_38 = uVar10;
  }

  iVar12 = iVar12 + uVar10;
  piVar11 = &DAT_overlay0__8005d140 + uVar10;

  for (; (int)uVar10 < iVar12; uVar10 = uVar10 + 1) {

    if ((~uVar10 >> 0x1f & (uint)((int)uVar10 < (int)param_1[4])) != 0) {

      iVar5 = *(char *)(*piVar11 + 0xc) * 0xc;
      uVar9 = uVar4;

      if (uVar10 == local_3c) {
        uVar9 = local_30;
      }

      if (uVar10 == local_38) {
        uVar9 = (int)(uVar4 * iVar7) >> 7;
      }

      if (uVar10 != (int)*(char *)((int)param_1 + 5)) {
        uVar9 = (int)uVar9 >> 2;
      }

      piVar6 = (int *)FUN_80081478(param_2 + 4,uVar9 | uVar9 << 8 | uVar9 << 0x10);

      *piVar6 = (local_34 -
                (((int)((uint)*(ushort *)(&DAT_overlay0__8005b834 + iVar5) << 0x10) >> 0x11) + -0x2a
                )) + (iVar13 - ((int)((uint)*(ushort *)(&LAB_overlay0__8005b836 + iVar5) << 0x10) >>
                               0x11)) * 0x10000;

      piVar6[1] = *(int *)(&DAT_overlay0__8005b830 + iVar5);
      piVar6[2] = *(int *)(&DAT_overlay0__8005b834 + iVar5);

      FUN_8007da44(param_2 + 4,*(ushort *)(&LAB_overlay0__8005b836_2 + iVar5) | 0x20);
    }

    iVar13 = iVar13 + 0x3c;
    piVar11 = piVar11 + 1;
  }

  if (((*(char *)(param_1 + 2) < '\x02') && (-1 < *(char *)(param_1 + 2))) && (DAT_801c90e4 != 0)) {

    local_5c = local_5c & 0xff9fffff | 0x200000;
    FUN_8007da80(auStack_68,&DAT_801c9120);
    local_54 = 0x2503c28;

    FUN_8006ae28(auStack_68,&DAT_801c83fe,0x14c,0x68,0);
    FUN_8006ba48(&uStack_48,param_2,0x14f,0x5f,5,10,(int)param_1[7]);
  }

  sVar2 = param_1[1];
  iVar12 = (int)sVar2;
  iVar7 = local_2c * 0x60;

  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x7f;
  }
  uVar10 = iVar7 >> 7;

  FUN_8007da80(auStack_68,&DAT_801c9150);
  local_54 = uVar10 | uVar10 << 8 | uVar10 << 0x10 | 0x2000000;

  iVar7 = local_34 + 0x44;
  local_5c = local_5c & 0xff9fffff | 0x200000;
  FUN_8006ac90(auStack_68,*local_40,iVar7,iVar12 + 0x1e,1);

  if ((DAT_801c98e0 == '\0') && (DAT_801c90e4 != 0)) {
    FUN_overlay0__800498b0(param_2 + 4,local_40[1],iVar7,iVar12 + 0x26,uVar10,0x2808080,0);
  }

  iVar7 = param_2 + 4;
  psVar8 = (short *)FUN_8007d024(iVar7,0);
  *psVar8 = (short)local_34 + 0x1a;
  psVar8[1] = sVar2 + 4;
  psVar8[2] = 0x20;
  psVar8[3] = 0x38;
  FUN_8007da44(iVar7,0x200);

  FUN_8006bef4(param_1 + 0x112,iVar7,local_34,iVar12);
  FUN_8007da44(iVar7,0x200);

  FUN_8006d50c(&DAT_overlay0__8005d154,param_2);
  FUN_8006bef4(&DAT_overlay0__8005d188,param_2,0,0xbe);
  FUN_8007da44(param_2,0x220);

  if (-1 < DAT_overlay0__8005d1a0) {
    FUN_8007da80(auStack_68,&DAT_801c9150);
    uVar3 = FUN_8006beb4(&DAT_overlay0__8005d188);
    local_54 = FUN_8006b548(&DAT_overlay0__8005c46c,&DAT_overlay0__8005c49c,uVar3,0x80);
    FUN_8006adb4(auStack_68,*(undefined4 *)local_40[*(char *)(param_1 + 3) * 2 + 4],0xb0,0xd8,1);
  }

  cVar1 = *(char *)(param_1 + 2);
  iVar7 = (int)param_1[8];
  iVar13 = -1;

  if (cVar1 == '\x01') {

    cVar1 = *(char *)(param_1 + 3);
  }
  else {
    if (cVar1 < '\x02') {
      if (cVar1 == '\0') {

        if (0 < local_44) {

          FUN_8006b988(auStack_47,param_2,*param_1 + 0x2a,iVar12 + 2,6,0xfffffff6,(int)param_1[7]);
        }
        if (local_44 < param_1[4] + -1) {

          FUN_8006b988(auStack_47,param_2,*param_1 + 0x2a,iVar12 + 0x3e,6,10,(int)param_1[7]);
        }
      }
      goto LAB_overlay0__80056f64;
    }
    if (cVar1 != '\x02') goto LAB_overlay0__80056f64;

    cVar1 = *(char *)(param_1 + 3);
    iVar7 = 8;
  }

  iVar13 = (int)cVar1;
  if (DAT_801c90e4 != 0) {
    if (DAT_801c98e0 == '\0') {

      FUN_overlay0__800498b0(param_2,DAT_801c90ec,0xb0,0x1a4,0x80,0x2808080,1);
    }
    else {

      FUN_8007da80(auStack_68,&DAT_801c9150);
      local_54 = 0x2808080;
      FUN_8006adb4(auStack_68,DAT_801c90ec,0xb0,0x1bc,1);
    }
  }

LAB_overlay0__80056f64:

  FUN_overlay0__80055840
            (local_40,param_2,iVar13,*param_1 + 0x48,iVar12 + 100,local_2c,iVar7,&DAT_8016e894,
             param_1 + 0x49);
  return;
}

int FUN_overlay0__80056fe0(int param_1)

{

  DAT_801c90f0 = param_1;

  return param_1 + 0x2cc4;
}

void FUN_overlay0__80056ff0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined auStack_2a8 [200];
  undefined4 local_1e0 [112];
  ushort local_20;
  ushort local_1e;
  undefined2 local_1c;
  byte local_1a;

  puVar1 = local_1e0;
  puVar6 = &DAT_801de8ba;
  puVar8 = &DAT_8016e894;

  do {
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *puVar1 = *puVar6;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar6 = puVar6 + 4;
    puVar1 = puVar1 + 4;
  } while (puVar6 != &DAT_801dea7a);

  FUN_8005f410(&DAT_8016e894,auStack_2a8);
  FUN_80077214(auStack_2a8,&DAT_801de8ba);
  FUN_80077188(&DAT_8016e894,auStack_2a8);

  puVar1 = &DAT_801d58c0;
  puVar6 = puVar8;

  do {
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *puVar1 = *puVar6;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar6 = puVar6 + 4;
    puVar1 = puVar1 + 4;
  } while (puVar6 != (undefined4 *)&UNK_8016e914);

  *puVar1 = _UNK_8016e914;

  iVar7 = (int)DAT_801d5de0;
  puVar9 = &DAT_801d157c;

  if (DAT_801d5dde == 0) {
    puVar9 = &DAT_801cd554;
  }
  else if (DAT_801d5dde != 1) goto LAB_overlay0__80057228;

  FUN_8005f958(&DAT_8016e894,&local_20);
  puVar6 = (undefined4 *)(puVar9 + iVar7 * 0x52 + 6);

  do {
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *puVar6 = *puVar8;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar8 = puVar8 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar8 != (undefined4 *)&UNK_8016e914);

  *puVar6 = _UNK_8016e914;

  puVar9[iVar7 * 0x52 + 0x4e] = puVar9[iVar7 * 0x52 + 0x4e] & 0xc000 | local_1e;
  puVar9[iVar7 * 0x52 + 0x4d] = local_1c;
  puVar9[iVar7 * 0x52 + 0x4c] = puVar9[iVar7 * 0x52 + 0x4c] & 0xe000 | local_20;
  puVar9[iVar7 * 0x52 + 0x4c] = local_20 & 0x1fff | (ushort)local_1a << 0xd;

LAB_overlay0__80057228:

  if (DAT_801d5866 == '\x01') {
    puVar8 = &DAT_8016e894;
    puVar6 = &DAT_801da4b8;

    do {
      puVar2 = puVar6;
      puVar1 = puVar8;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar8 = puVar1 + 4;
      puVar6 = puVar2 + 4;
    } while (puVar1 + 4 != (undefined4 *)&UNK_80170074);

    uVar3 = puVar1[5];
    puVar2[4] = _UNK_80170074;
    puVar2[5] = uVar3;
  }
  return;
}

void FUN_overlay0__80057628(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = 9;
  iVar1 = param_1 + 9;

  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 9) = 0;

  *(undefined4 *)(param_1 + 4) = param_2;

  do {
    *(undefined *)(iVar1 + 10) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar2);

  return;
}

void FUN_overlay0__80057654(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  *(undefined *)(param_1 + 2) = 0;
  *(char *)((int)param_1 + 9) = (char)param_2 + '\x01';
  *param_1 = param_3;
  *(undefined *)((int)param_1 + 10) = 0;

  if (0 < param_2) {
    iVar1 = 0;
    iVar3 = 0;

    do {
      iVar2 = iVar3 + 1;

      *(undefined4 *)(iVar1 * 0x40 + iVar3 * 0x34 + param_1[1] + 0x434) =
           *(undefined4 *)(iVar3 * 4 + param_4);

      *(undefined *)((int)param_1 + iVar3 + 0xb) = 0;

      iVar1 = iVar2 * 0x10;
      iVar3 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

void FUN_overlay0__800576d8(int param_1)

{
  int iVar1;

  *(undefined *)(param_1 + 9) = 0;

  iVar1 = 9;
  param_1 = param_1 + 9;

  do {
    *(undefined *)(param_1 + 10) = 0;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + -1;
  } while (-1 < iVar1);

  return;
}

undefined4 FUN_overlay0__800576fc(undefined4 *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;

  uVar8 = 0;
  iVar7 = (int)*(char *)(param_1 + 2);
  bVar4 = false;

  if (iVar7 < *(char *)((int)param_1 + 9)) {

    psVar6 = (short *)(param_1[1] + iVar7 * 0x434);

    if (iVar7 == 0) {
      bVar4 = true;
      FUN_8005f410(*param_1,psVar6 + 2);
    }
    else {

      sVar2 = *psVar6;
      sVar3 = psVar6[1];

      iVar5 = FUN_8005ee4c(*param_1,(int)sVar2,(int)sVar3);

      if (-1 < iVar5) {
        bVar4 = true;
        FUN_8005f044(*param_1,psVar6 + 2,(int)sVar2,(int)sVar3);
      }
    }

    if (bVar4) {

      FUN_80077214(psVar6 + 2,psVar6 + 100);
      FUN_80075930(psVar6 + 100,psVar6 + 0x144);
      FUN_8007489c(psVar6[0x149],psVar6 + 0x14a,psVar6 + 0x15a,psVar6 + 0x16a,psVar6 + 0x17a,
                   psVar6 + 0x1ca);

      *(undefined *)((int)param_1 + iVar7 + 10) = 1;
    }

    cVar1 = *(char *)(param_1 + 2);
    *(char *)(param_1 + 2) = cVar1 + '\x01';
    uVar8 = 0;

    if ((char)(cVar1 + '\x01') == *(char *)((int)param_1 + 9)) {
      uVar8 = 1;
    }
  }
  return uVar8;
}

void FUN_overlay0__80057854(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  iVar5 = -1;
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  iVar4 = 0;

  for (iVar2 = 0; iVar2 < *(char *)(param_1 + 9); iVar2 = iVar2 + 1) {

    iVar3 = *(int *)(param_1 + 4) + iVar4;

    if (*(char *)(param_1 + iVar2 + 10) != '\0') {

      iVar1 = (int)*(short *)(iVar3 + (*(ushort *)(iVar3 + 0x292) - 1) * 2 + 0x294);

      if (iVar5 < iVar1) {
        iVar5 = iVar1;
      }

      if ((int)uVar6 < (int)(uint)*(ushort *)(iVar3 + 0x288)) {
        uVar6 = (uint)*(ushort *)(iVar3 + 0x288);
      }

      if ((int)uVar7 < (int)(uint)*(ushort *)(iVar3 + 0x28c)) {
        uVar7 = (uint)*(ushort *)(iVar3 + 0x28c);
      }
    }

    iVar4 = iVar4 + 0x434;
  }

  *param_2 = iVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;

  return;
}

int FUN_overlay0__80057910(int param_1,int param_2)

{
  int iVar1;

  iVar1 = 0;

  if (*(char *)(param_1 + param_2 + 10) != '\0') {

    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x434 + 0x2f4;
  }

  return iVar1;
}

int FUN_overlay0__80057954(int param_1,int param_2)

{
  int iVar1;

  iVar1 = 0;

  if (*(char *)(param_1 + param_2 + 10) != '\0') {

    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x434 + 0x394;
  }

  return iVar1;
}

void FUN_overlay0__80057998(int param_1,int param_2,int param_3)

{

  if (*(char *)(param_1 + param_3 + 10) != '\0') {

    param_3 = param_3 * 0x434;

    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_3 + *(int *)(param_1 + 4) + 0x288);

    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_3 + *(int *)(param_1 + 4) + 0x28a);

    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + *(int *)(param_1 + 4) + 0x28c);

    *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_3 + *(int *)(param_1 + 4) + 0x28e);
  }

  return;
}

uint FUN_overlay0__80057a28(int param_1,int param_2)

{

  if (*(char *)(param_1 + param_2 + 10) != '\0') {

    return (uint)*(ushort *)(param_2 * 0x434 + *(int *)(param_1 + 4) + 0x288);
  }

  return 0xffffffff;
}

void FUN_overlay0__800580dc(void)

{
  uint uVar1;

  uVar1 = DAT_801c9995 + 1;

  if (3 < uVar1) {
    uVar1 = 0;
  }

  DAT_801c9995 = (char)uVar1;

  return;
}

void FUN_overlay0__80058e28
               (undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
               int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_98 [12];
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined local_7c;
  undefined auStack_78 [64];
  undefined4 local_38;
  short local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;

  uVar2 = *(undefined4 *)(param_3 + 4);

  param_5 = param_5 + (0x80 - param_7) * 2;

  FUN_8006ac68(auStack_98,6);
  local_7c = 1;
  local_88 = param_1;

  FUN_8007da80(auStack_98,&DAT_801c9150);
  local_8c = local_8c & 0xff9fffff | 0x200000;

  local_84 = FUN_8006b548(&DAT_overlay0__8005d208,&DAT_overlay0__8005d338,param_7,0x80);

  FUN_8008cf34(auStack_78,&DAT_overlay0__8005ab48,param_2 + 1);
  iVar1 = param_6 + 0xc;

  FUN_8006af40(auStack_98,auStack_78,param_5 + -2,iVar1,1,0xfffffffe,0);

  if (*(int *)(param_3 + 4) == -1) {

    FUN_8007da80(auStack_98,&DAT_801c9120);
    local_84 = FUN_8006b548(&DAT_overlay0__8005d208,&LAB_overlay0__8005d33e_2,param_7,0x80);
    FUN_8006adb4(auStack_98,&DAT_801c7016,param_5 + 0x70,param_6 + 8,1);
  }
  else {

    local_84 = FUN_8006b548(&DAT_overlay0__8005d208,&LAB_overlay0__8005d33a_2,param_7,0x80);

    if (param_8 == 0) {

      FUN_80068734(auStack_78,uVar2);
      FUN_8006b3f4(auStack_98,auStack_78,param_5 + 0x60,iVar1,8,7,0,0);
    }
    else {

      FUN_80068ca0(auStack_78,uVar2);
      FUN_8008d020(auStack_78,&DAT_801c6c87);
      FUN_8006b184(auStack_98,auStack_78,param_5 + 0x60,iVar1,1,0xfffffffd,0);
    }

    FUN_8007da80(auStack_98,&DAT_801c9120);
    local_84 = FUN_8006b548(&DAT_overlay0__8005d208,&LAB_overlay0__8005d33e_2,param_7,0x80);
    FUN_8006ac90(auStack_98,param_3 + 8,param_5 + 0x70,param_6,1);
    local_84 = FUN_8006b548(&DAT_overlay0__8005d208,&LAB_overlay0__8005d33e_2,param_7,0x80);
    FUN_8006ac90(auStack_98,param_4,param_5 + 0x70,param_6 + 0x12,1);
  }

  local_30 = 400;
  local_2e = 0x28;
  local_34 = (short)param_5 + 200;
  local_32 = (undefined2)param_6;

  local_38 = FUN_8006b548(&DAT_overlay0__8005d208,&LAB_overlay0__8005d342_2,param_7,0x80);
  FUN_800683fc(param_1,&local_38,0x18);
  FUN_8007da44(param_1,0);

  return;
}

void FUN_overlay0__800593f4(int param_1,int param_2)

{

  *(undefined4 *)(param_1 + 0xa8) = 0xc0000;

  if (param_2 < 0x5a) {

    *(int *)(param_1 + 0xa8) = (param_2 * 0x80000) / 0x5a + 0x40000;
  }

  *(undefined2 *)(param_1 + 0xb0) = 0xffc0;

  if (param_2 < 0x5a) {

    *(short *)(param_1 + 0xb0) = -((0x5a - (short)param_2) * 6 + 0x40);
  }

  *(undefined4 *)(param_1 + 0xa4) = 0x4ccc;

  *(ushort *)(param_1 + 0xae) = *(short *)(param_1 + 0xae) + 8U & 0x3fff;

  return;
}

void FUN_overlay0__800595e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;

  puVar3 = DAT_801c90a0;

  DAT_801c90a0[2] = (short)param_1;

  iVar1 = DAT_801d1568;

  *(undefined *)(puVar3 + 1) = 0;
  puVar2 = DAT_801c90a0;
  *(int *)(puVar3 + 6) = param_2;
  *(undefined4 *)(puVar3 + 8) = param_3;
  *puVar3 = 0;

  *(int *)(puVar3 + 4) = iVar1 - param_2;

  *(undefined *)((int)puVar2 + 3) = 0;

  puVar3 = DAT_801c90a0;
  puVar2 = DAT_801c90a0 + 0x10;

  *(undefined4 *)(DAT_801c90a0 + 0xc) = 3;

  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x104) = 0;
  puVar3[0x106] = 0;

  FUN_overlay0__80048d14(puVar2,&LAB_overlay0__8005d3d8);
  FUN_8006c460(DAT_801c90a0 + 0x38,&LAB_overlay0__8005d3f8,(&PTR_DAT_overlay0__8005ab5c)[param_1]);

  puVar3 = DAT_801c90a0 + 0x4c;
  *(undefined4 *)(DAT_801c90a0 + 0x42) = (&DAT_overlay0__8005ab84)[param_1];
  FUN_overlay0__80048d14(puVar3,&DAT_overlay0__8005d414);
  FUN_overlay0__80048d14(DAT_801c90a0 + 0x74,&LAB_overlay0__8005d434);

  DAT_overlay0__8005d46c = 0xffff;

  FUN_8006e1cc(DAT_801c90a0 + 0x9c,&LAB_overlay0__8005d470,0);
  FUN_8006dcb8(DAT_801c90a0 + 0xe6,&LAB_overlay0__8005d4a0);

  return;
}

uint FUN_overlay0__800597c4(uint param_1)

{
  uint uVar1;
  undefined4 local_10 [2];

  local_10[0] = FUN_8007d23c(0);

  uVar1 = FUN_80083ae0(local_10);

  return uVar1 % param_1;
}

void FUN_overlay0__8005a11c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  undefined auStack_88 [64];
  undefined auStack_48 [12];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28 [2];

  local_28[0] = 0x2000000;

  if (-1 < param_5) {

    if (0xc < param_5) {
      param_5 = 0xc;
    }

    FUN_8006ac68(auStack_48,6);
    local_38 = param_1;

    FUN_8007da80(auStack_48,&DAT_801c9130);
    local_3c = local_3c & 0xff9fffff | 0x200000;

    local_34 = FUN_8006b548(local_28,&stack0x00000014,param_5,0xc);

    FUN_80068d0c(auStack_88,param_4);

    FUN_8006b184(auStack_48,auStack_88,param_2,param_3,2,0,0);
  }

  return;
}

void FUN_overlay3__80010000(undefined4 param_1)

{

  FUN_8008ce30(param_1,0xffffffff,0x17e8);

  return;
}

void FUN_overlay3__80010024(int param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined auStack_b8 [4];
  ushort local_b4;
  ushort local_b2;
  ushort local_b0;
  ushort local_ae;
  ushort local_ac;
  ushort local_aa;
  ushort local_a8;
  ushort local_a6;
  ushort local_a4;
  ushort local_a2;
  ushort local_a0;
  ushort local_9e;
  ushort local_9c;
  ushort local_9a;
  ushort local_98;
  ushort local_96;
  ushort local_94;
  ushort local_92;
  ushort local_90;
  ushort local_8e;
  ushort local_8c;
  ushort local_8a;
  ushort local_88;
  ushort local_86;
  ushort local_84;
  ushort local_82;
  undefined auStack_30 [8];

  FUN_80076954(param_2,auStack_b8);

  puVar3 = (undefined4 *)FUN_80076f2c(0x12,(uint)local_a6);
  bVar2 = *(byte *)(puVar3 + 2);

  puVar5 = (undefined4 *)(param_1 + (uint)bVar2 * 0x4c + 0x988);
  puVar6 = puVar3;

  do {
    puVar11 = puVar6;
    puVar10 = puVar5;
    uVar12 = puVar11[1];
    uVar13 = puVar11[2];
    uVar14 = puVar11[3];
    *puVar10 = *puVar11;
    puVar10[1] = uVar12;
    puVar10[2] = uVar13;
    puVar10[3] = uVar14;
    puVar6 = puVar11 + 4;
    puVar5 = puVar10 + 4;
  } while (puVar6 != puVar3 + 0x10);

  iVar17 = 0;
  iVar18 = 4;
  iVar15 = 0x4c;

  uVar12 = puVar11[5];
  uVar13 = puVar11[6];
  puVar10[4] = *puVar6;
  puVar10[5] = uVar12;
  puVar10[6] = uVar13;

  *(uint *)(param_1 + (uint)bVar2 * 4 + 0xab8) = (uint)local_a6;

  do {

    iVar4 = FUN_80076570(iVar17 + 0x23,param_2,0);

    if (-1 < iVar4) {

      puVar3 = (undefined4 *)FUN_80076f2c(0x12,iVar4);
      puVar5 = puVar3;
      puVar6 = (undefined4 *)(param_1 + iVar15 + 0x988);

      do {
        puVar11 = puVar6;
        puVar10 = puVar5;
        uVar12 = puVar10[1];
        uVar13 = puVar10[2];
        uVar14 = puVar10[3];
        *puVar11 = *puVar10;
        puVar11[1] = uVar12;
        puVar11[2] = uVar13;
        puVar11[3] = uVar14;
        puVar5 = puVar10 + 4;
        puVar6 = puVar11 + 4;
      } while (puVar5 != puVar3 + 0x10);

      uVar12 = puVar10[5];
      uVar13 = puVar10[6];
      puVar11[4] = *puVar5;
      puVar11[5] = uVar12;
      puVar11[6] = uVar13;

      *(int *)(param_1 + iVar18 + 0xab8) = iVar4;
    }

    iVar18 = iVar18 + 4;
    iVar17 = iVar17 + 1;
    iVar15 = iVar15 + 0x4c;
  } while (iVar17 < 3);

  puVar5 = (undefined4 *)FUN_80076f2c(0,(uint)local_b4);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0xac8) = *puVar5;
  *(undefined4 *)(iVar15 + 0xacc) = uVar12;
  *(undefined4 *)(iVar15 + 0xad0) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0xae0) = (uint)local_b4;

  iVar15 = 1;
  do {
    iVar17 = FUN_80076570(iVar15,param_2,0);
    if (-1 < iVar17) {
      puVar5 = (undefined4 *)FUN_80076f2c(0,iVar17);
      iVar18 = param_1 + iVar15 * 0xc;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar18 + 0xac8) = *puVar5;
      *(undefined4 *)(iVar18 + 0xacc) = uVar12;
      *(undefined4 *)(iVar18 + 0xad0) = uVar13;
      *(int *)(param_1 + iVar15 * 4 + 0xae0) = iVar17;
    }
    bVar1 = iVar15 < 1;
    iVar15 = iVar15 + 1;
  } while (bVar1);

  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(1,(uint)local_b2);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0x10;
  iVar15 = param_1 + (uint)bVar2 * 0x10;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0xae8) = *puVar5;
  *(undefined4 *)(iVar15 + 0xaec) = uVar12;
  *(undefined4 *)(iVar15 + 0xaf0) = uVar13;
  *(undefined4 *)(iVar15 + 0xaf4) = uVar14;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0xb08) = (uint)local_b2;

  do {
    iVar15 = FUN_80076570(iVar18 + 2,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(1,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar9 + 0xae8) = *puVar5;
      *(undefined4 *)(iVar9 + 0xaec) = uVar12;
      *(undefined4 *)(iVar9 + 0xaf0) = uVar13;
      *(undefined4 *)(iVar9 + 0xaf4) = uVar14;
      *(int *)(param_1 + iVar4 + 0xb08) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0x10;
  } while (iVar18 < 1);

  uVar16 = (uint)local_a2;
  puVar5 = (undefined4 *)FUN_80076f2c(0x16,uVar16);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];

  *(undefined4 *)(param_1 + 0xb10) = *puVar5;
  *(undefined4 *)(param_1 + 0xb14) = uVar12;
  *(undefined4 *)(param_1 + 0xb18) = uVar13;
  *(undefined4 *)(param_1 + 0xb1c) = uVar14;
  *(uint *)(param_1 + 0xbb0) = uVar16;

  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(param_1 + 0xb90) = *puVar5;
  *(undefined4 *)(param_1 + 0xb94) = uVar12;
  *(undefined4 *)(param_1 + 0xb98) = uVar13;
  *(undefined4 *)(param_1 + 0xb9c) = uVar14;
  *(uint *)(param_1 + 0xbd0) = uVar16;

  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(param_1 + 0xba0) = *puVar5;
  *(undefined4 *)(param_1 + 0xba4) = uVar12;
  *(undefined4 *)(param_1 + 0xba8) = uVar13;
  *(undefined4 *)(param_1 + 0xbac) = uVar14;
  *(uint *)(param_1 + 0xbd4) = uVar16;

  puVar6 = (undefined4 *)FUN_80076f2c(0x18,*(undefined2 *)((int)puVar5 + 10));
  *(undefined4 *)(param_1 + 0xbd8) = *puVar6;
  *(undefined4 *)(param_1 + 0xbf8) = *puVar6;
  *(undefined4 *)(param_1 + 0xbfc) = *puVar6;

  puVar6 = (undefined4 *)FUN_80076f2c(0x19,*(undefined2 *)(puVar5 + 3));
  puVar3 = (undefined4 *)(param_1 + 0xc00);

  if ((((uint)puVar6 | (uint)puVar3) & 3) == 0) {
    puVar10 = puVar6 + 0x10;
    do {
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      *puVar3 = *puVar6;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar6 = puVar6 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar6 != puVar10);
  }
  else {

    puVar10 = puVar6 + 0x10;
    do {
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      *puVar3 = *puVar6;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar6 = puVar6 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar6 != puVar10);
  }

  iVar15 = 0;
  iVar9 = 8;
  iVar4 = 0x40;
  iVar18 = 4;
  iVar17 = 0x10;

  puVar5 = (undefined4 *)FUN_80076f2c(0x1a,*(undefined2 *)((int)puVar5 + 0xe));
  uVar12 = puVar5[1];
  *(undefined4 *)(param_1 + 0xe80) = *puVar5;
  *(undefined4 *)(param_1 + 0xe84) = uVar12;
  uVar12 = puVar5[1];
  *(undefined4 *)(param_1 + 0xec0) = *puVar5;
  *(undefined4 *)(param_1 + 0xec4) = uVar12;
  uVar12 = puVar5[1];
  *(undefined4 *)(param_1 + 0xec8) = *puVar5;
  *(undefined4 *)(param_1 + 0xecc) = uVar12;

  do {

    iVar7 = FUN_80076570(iVar15 + 0x27,param_2,0);

    if (-1 < iVar7) {

      puVar5 = (undefined4 *)FUN_80076f2c(0x16,iVar7);
      iVar8 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar8 + 0xb10) = *puVar5;
      *(undefined4 *)(iVar8 + 0xb14) = uVar12;
      *(undefined4 *)(iVar8 + 0xb18) = uVar13;
      *(undefined4 *)(iVar8 + 0xb1c) = uVar14;
      *(int *)(param_1 + iVar18 + 0xbb0) = iVar7;

      puVar6 = (undefined4 *)FUN_80076f2c(0x18,*(undefined2 *)((int)puVar5 + 10));
      *(undefined4 *)(param_1 + iVar18 + 0xbd8) = *puVar6;

      puVar6 = (undefined4 *)FUN_80076f2c(0x19,*(undefined2 *)(puVar5 + 3));
      puVar10 = (undefined4 *)(param_1 + iVar4 + 0xc00);
      puVar3 = puVar6 + 0x10;

      if ((((uint)puVar6 | (uint)puVar10) & 3) == 0) {

        do {
          uVar12 = puVar6[1];
          uVar13 = puVar6[2];
          uVar14 = puVar6[3];
          *puVar10 = *puVar6;
          puVar10[1] = uVar12;
          puVar10[2] = uVar13;
          puVar10[3] = uVar14;
          puVar6 = puVar6 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar6 != puVar3);
      }
      else {

        do {
          uVar12 = puVar6[1];
          uVar13 = puVar6[2];
          uVar14 = puVar6[3];
          *puVar10 = *puVar6;
          puVar10[1] = uVar12;
          puVar10[2] = uVar13;
          puVar10[3] = uVar14;
          puVar6 = puVar6 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar6 != puVar3);
      }

      puVar5 = (undefined4 *)FUN_80076f2c(0x1a,*(undefined2 *)((int)puVar5 + 0xe));
      uVar12 = puVar5[1];
      *(undefined4 *)(param_1 + iVar9 + 0xe80) = *puVar5;
      *(undefined4 *)(param_1 + iVar9 + 0xe84) = uVar12;
    }

    iVar9 = iVar9 + 8;
    iVar4 = iVar4 + 0x40;
    iVar18 = iVar18 + 4;
    iVar15 = iVar15 + 1;
    iVar17 = iVar17 + 0x10;
  } while (iVar15 < 7);

  uVar16 = (uint)local_a0;
  puVar5 = (undefined4 *)FUN_80076f2c(0x17,uVar16);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(param_1 + 0xed0) = *puVar5;
  *(undefined4 *)(param_1 + 0xed4) = uVar12;
  *(undefined4 *)(param_1 + 0xed8) = uVar13;
  *(uint *)(param_1 + 0xf48) = uVar16;

  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(param_1 + 0xf30) = *puVar5;
  *(undefined4 *)(param_1 + 0xf34) = uVar12;
  *(undefined4 *)(param_1 + 0xf38) = uVar13;
  *(uint *)(param_1 + 0xf68) = uVar16;

  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(param_1 + 0xf3c) = *puVar5;
  *(undefined4 *)(param_1 + 0xf40) = uVar12;
  *(undefined4 *)(param_1 + 0xf44) = uVar13;
  *(uint *)(param_1 + 0xf6c) = uVar16;

  puVar6 = (undefined4 *)FUN_80076f2c(0x18,*(undefined2 *)((int)puVar5 + 6));
  *(undefined4 *)(param_1 + 0xf70) = *puVar6;
  *(undefined4 *)(param_1 + 0xf90) = *puVar6;
  *(undefined4 *)(param_1 + 0xf94) = *puVar6;

  puVar5 = (undefined4 *)FUN_80076f2c(0x19,*(undefined2 *)(puVar5 + 2));
  puVar6 = (undefined4 *)(param_1 + 0xf98);

  if ((((uint)puVar5 | (uint)puVar6) & 3) == 0) {
    puVar3 = puVar5;
    do {
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar12;
      puVar6[2] = uVar13;
      puVar6[3] = uVar14;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar5 + 0x10);
  }
  else {
    puVar3 = puVar5;
    do {
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar12;
      puVar6[2] = uVar13;
      puVar6[3] = uVar14;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar5 + 0x10);
  }
  puVar6 = (undefined4 *)(param_1 + 0x1198);
  if ((((uint)puVar5 | (uint)puVar6) & 3) == 0) {
    puVar3 = puVar5;
    do {
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar12;
      puVar6[2] = uVar13;
      puVar6[3] = uVar14;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar5 + 0x10);
  }
  else {
    puVar3 = puVar5;
    do {
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar12;
      puVar6[2] = uVar13;
      puVar6[3] = uVar14;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar5 + 0x10);
  }
  puVar6 = (undefined4 *)(param_1 + 0x11d8);
  if ((((uint)puVar5 | (uint)puVar6) & 3) == 0) {
    puVar3 = puVar5 + 0x10;
    do {
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar12;
      puVar6[2] = uVar13;
      puVar6[3] = uVar14;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar5 != puVar3);
  }
  else {
    puVar3 = puVar5 + 0x10;
    do {
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar12;
      puVar6[2] = uVar13;
      puVar6[3] = uVar14;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar5 != puVar3);
  }
  iVar15 = 0;
  iVar4 = 0x40;
  iVar18 = 4;
  iVar17 = 0xc;
  do {
    iVar9 = FUN_80076570(iVar15 + 0x27,param_2,0);
    if (-1 < iVar9) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x17,iVar9);
      iVar7 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar7 + 0xed0) = *puVar5;
      *(undefined4 *)(iVar7 + 0xed4) = uVar12;
      *(undefined4 *)(iVar7 + 0xed8) = uVar13;
      *(int *)(param_1 + iVar18 + 0xf48) = iVar9;
      puVar6 = (undefined4 *)FUN_80076f2c(0x18,*(undefined2 *)((int)puVar5 + 6));
      *(undefined4 *)(param_1 + iVar18 + 0xf70) = *puVar6;
      puVar5 = (undefined4 *)FUN_80076f2c(0x19,*(undefined2 *)(puVar5 + 2));
      puVar3 = (undefined4 *)(param_1 + iVar4 + 0xf98);
      puVar6 = puVar5 + 0x10;
      if ((((uint)puVar5 | (uint)puVar3) & 3) == 0) {
        do {
          uVar12 = puVar5[1];
          uVar13 = puVar5[2];
          uVar14 = puVar5[3];
          *puVar3 = *puVar5;
          puVar3[1] = uVar12;
          puVar3[2] = uVar13;
          puVar3[3] = uVar14;
          puVar5 = puVar5 + 4;
          puVar3 = puVar3 + 4;
        } while (puVar5 != puVar6);
      }
      else {
        do {
          uVar12 = puVar5[1];
          uVar13 = puVar5[2];
          uVar14 = puVar5[3];
          *puVar3 = *puVar5;
          puVar3[1] = uVar12;
          puVar3[2] = uVar13;
          puVar3[3] = uVar14;
          puVar5 = puVar5 + 4;
          puVar3 = puVar3 + 4;
        } while (puVar5 != puVar6);
      }
    }
    iVar4 = iVar4 + 0x40;
    iVar18 = iVar18 + 4;
    iVar15 = iVar15 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar15 < 7);
  puVar5 = (undefined4 *)FUN_80076f2c(0x11,(uint)local_a8);
  bVar2 = *(byte *)(puVar5 + 2);
  puVar3 = puVar5 + 8;
  puVar6 = (undefined4 *)(param_1 + (uint)bVar2 * 0x24 + 0x1218);
  do {
    uVar12 = puVar5[1];
    uVar13 = puVar5[2];
    uVar14 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar12;
    puVar6[2] = uVar13;
    puVar6[3] = uVar14;
    puVar5 = puVar5 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar5 != puVar3);
  iVar17 = 0;
  iVar18 = 4;
  iVar15 = 0x24;
  *puVar6 = *puVar5;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x12a8) = (uint)local_a8;
  do {
    iVar4 = FUN_80076570(iVar17 + 0xd,param_2,0);
    if (-1 < iVar4) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x11,iVar4);
      puVar6 = (undefined4 *)(param_1 + iVar15 + 0x1218);
      puVar3 = puVar5 + 8;
      do {
        uVar12 = puVar5[1];
        uVar13 = puVar5[2];
        uVar14 = puVar5[3];
        *puVar6 = *puVar5;
        puVar6[1] = uVar12;
        puVar6[2] = uVar13;
        puVar6[3] = uVar14;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar5 != puVar3);
      *puVar6 = *puVar5;
      *(int *)(param_1 + iVar18 + 0x12a8) = iVar4;
    }
    iVar18 = iVar18 + 4;
    iVar17 = iVar17 + 1;
    iVar15 = iVar15 + 0x24;
  } while (iVar17 < 3);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0xf,(uint)local_8c);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0x10;
  iVar15 = param_1 + (uint)bVar2 * 0x10;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0x12b8) = *puVar5;
  *(undefined4 *)(iVar15 + 0x12bc) = uVar12;
  *(undefined4 *)(iVar15 + 0x12c0) = uVar13;
  *(undefined4 *)(iVar15 + 0x12c4) = uVar14;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x12f8) = (uint)local_8c;
  do {
    iVar15 = FUN_80076570(iVar18 + 3,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0xf,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar9 + 0x12b8) = *puVar5;
      *(undefined4 *)(iVar9 + 0x12bc) = uVar12;
      *(undefined4 *)(iVar9 + 0x12c0) = uVar13;
      *(undefined4 *)(iVar9 + 0x12c4) = uVar14;
      *(int *)(param_1 + iVar4 + 0x12f8) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0x10;
  } while (iVar18 < 3);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0xe,(uint)local_8e);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x1308) = *puVar5;
  *(undefined4 *)(iVar15 + 0x130c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1310) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1338) = (uint)local_8e;
  do {
    iVar15 = FUN_80076570(iVar18 + 10,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0xe,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x1308) = *puVar5;
      *(undefined4 *)(iVar9 + 0x130c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1310) = uVar13;
      *(int *)(param_1 + iVar4 + 0x1338) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 3);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0x10,(uint)local_8a);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x1348) = *puVar5;
  *(undefined4 *)(iVar15 + 0x134c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1350) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1360) = (uint)local_8a;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x21,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x10,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x1348) = *puVar5;
      *(undefined4 *)(iVar9 + 0x134c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1350) = uVar13;
      *(int *)(param_1 + iVar4 + 0x1360) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(10,(uint)local_94);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x1368) = *puVar5;
  *(undefined4 *)(iVar15 + 0x136c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1370) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1380) = (uint)local_94;
  do {
    iVar15 = FUN_80076570(iVar18 + 6,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(10,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x1368) = *puVar5;
      *(undefined4 *)(iVar9 + 0x136c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1370) = uVar13;
      *(int *)(param_1 + iVar4 + 0x1380) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(7,(uint)local_9a);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 5000) = *puVar5;
  *(undefined4 *)(iVar15 + 0x138c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1390) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x13a0) = (uint)local_9a;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x20,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(7,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 5000) = *puVar5;
      *(undefined4 *)(iVar9 + 0x138c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1390) = uVar13;
      *(int *)(param_1 + iVar4 + 0x13a0) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(8,(uint)local_98);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x13a8) = *puVar5;
  *(undefined4 *)(iVar15 + 0x13ac) = uVar12;
  *(undefined4 *)(iVar15 + 0x13b0) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x13c0) = (uint)local_98;
  do {
    iVar15 = FUN_80076570(iVar18 + 9,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(8,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x13a8) = *puVar5;
      *(undefined4 *)(iVar9 + 0x13ac) = uVar12;
      *(undefined4 *)(iVar9 + 0x13b0) = uVar13;
      *(int *)(param_1 + iVar4 + 0x13c0) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0xb,(uint)local_92);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x13c8) = *puVar5;
  *(undefined4 *)(iVar15 + 0x13cc) = uVar12;
  *(undefined4 *)(iVar15 + 0x13d0) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x13f8) = (uint)local_92;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x1d,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0xb,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x13c8) = *puVar5;
      *(undefined4 *)(iVar9 + 0x13cc) = uVar12;
      *(undefined4 *)(iVar9 + 0x13d0) = uVar13;
      *(int *)(param_1 + iVar4 + 0x13f8) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 3);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(9,(uint)local_96);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x1408) = *puVar5;
  *(undefined4 *)(iVar15 + 0x140c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1410) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1420) = (uint)local_96;
  do {
    iVar15 = FUN_80076570(iVar18 + 7,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(9,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x1408) = *puVar5;
      *(undefined4 *)(iVar9 + 0x140c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1410) = uVar13;
      *(int *)(param_1 + iVar4 + 0x1420) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 0x14;
  puVar5 = (undefined4 *)FUN_80076f2c(0xc,(uint)local_90);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 4;
  iVar15 = param_1 + (uint)bVar2 * 0x14;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0x1428) = *puVar5;
  *(undefined4 *)(iVar15 + 0x142c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1430) = uVar13;
  *(undefined4 *)(iVar15 + 0x1434) = uVar14;
  *(undefined4 *)(iVar15 + 0x1438) = puVar5[4];
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x148c) = (uint)local_90;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x2e,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0xc,iVar15);
      iVar9 = param_1 + iVar4;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar9 + 0x1428) = *puVar5;
      *(undefined4 *)(iVar9 + 0x142c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1430) = uVar13;
      *(undefined4 *)(iVar9 + 0x1434) = uVar14;
      *(undefined4 *)(iVar9 + 0x1438) = puVar5[4];
      *(int *)(param_1 + iVar17 + 0x148c) = iVar15;
    }
    iVar4 = iVar4 + 0x14;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 4;
  } while (iVar18 < 4);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0x13,(uint)local_86);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(&DAT_000014a0 + iVar15) = *puVar5;
  *(undefined4 *)(iVar15 + 0x14a4) = uVar12;
  *(undefined4 *)(iVar15 + 0x14a8) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x14c4) = (uint)local_86;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x10,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x13,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(&DAT_000014a0 + iVar9) = *puVar5;
      *(undefined4 *)(iVar9 + 0x14a4) = uVar12;
      *(undefined4 *)(iVar9 + 0x14a8) = uVar13;
      *(int *)(param_1 + iVar4 + 0x14c4) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 2);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0x14,(uint)local_88);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x14d0) = *puVar5;
  *(undefined4 *)(iVar15 + 0x14d4) = uVar12;
  *(undefined4 *)(iVar15 + 0x14d8) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1500) = (uint)local_88;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x1a,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x14,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x14d0) = *puVar5;
      *(undefined4 *)(iVar9 + 0x14d4) = uVar12;
      *(undefined4 *)(iVar9 + 0x14d8) = uVar13;
      *(int *)(param_1 + iVar4 + 0x1500) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 3);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(4,(uint)local_9e);
  bVar2 = *(byte *)((int)puVar5 + 0xb);
  iVar17 = 0xc;
  iVar15 = param_1 + (uint)bVar2 * 0xc;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  *(undefined4 *)(iVar15 + 0x1510) = *puVar5;
  *(undefined4 *)(iVar15 + 0x1514) = uVar12;
  *(undefined4 *)(iVar15 + 0x1518) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1540) = (uint)local_9e;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x12,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(4,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      *(undefined4 *)(iVar9 + 0x1510) = *puVar5;
      *(undefined4 *)(iVar9 + 0x1514) = uVar12;
      *(undefined4 *)(iVar9 + 0x1518) = uVar13;
      *(int *)(param_1 + iVar4 + 0x1540) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0xc;
  } while (iVar18 < 3);
  puVar5 = (undefined4 *)FUN_80076f2c(5,(uint)local_9c);
  iVar18 = param_1 + 4;
  bVar2 = *(byte *)((int)puVar5 + 0xe);
  iVar17 = param_1 + 0x1c;
  iVar15 = param_1 + (uint)bVar2 * 0x1c;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0x1550) = *puVar5;
  *(undefined4 *)(iVar15 + 0x1554) = uVar12;
  *(undefined4 *)(iVar15 + 0x1558) = uVar13;
  *(undefined4 *)(iVar15 + 0x155c) = uVar14;
  uVar12 = puVar5[5];
  uVar13 = puVar5[6];
  *(undefined4 *)(iVar15 + 0x1560) = puVar5[4];
  *(undefined4 *)(iVar15 + 0x1564) = uVar12;
  *(undefined4 *)(iVar15 + 0x1568) = uVar13;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x15dc) = (uint)local_9c;
  for (uVar16 = 1; (int)uVar16 < 5; uVar16 = uVar16 + 1) {
    iVar15 = FUN_80076500(param_2,uVar16 & 0xff,auStack_30);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(5,iVar15);
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar17 + 0x1550) = *puVar5;
      *(undefined4 *)(iVar17 + 0x1554) = uVar12;
      *(undefined4 *)(iVar17 + 0x1558) = uVar13;
      *(undefined4 *)(iVar17 + 0x155c) = uVar14;
      uVar12 = puVar5[5];
      uVar13 = puVar5[6];
      *(undefined4 *)(iVar17 + 0x1560) = puVar5[4];
      *(undefined4 *)(iVar17 + 0x1564) = uVar12;
      *(undefined4 *)(iVar17 + 0x1568) = uVar13;
      *(int *)(iVar18 + 0x15dc) = iVar15;
    }
    iVar18 = iVar18 + 4;
    iVar17 = iVar17 + 0x1c;
  }
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0x1b,(uint)local_84);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0x10;
  iVar15 = param_1 + (uint)bVar2 * 0x10;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0x15f0) = *puVar5;
  *(undefined4 *)(iVar15 + 0x15f4) = uVar12;
  *(undefined4 *)(iVar15 + 0x15f8) = uVar13;
  *(undefined4 *)(iVar15 + 0x15fc) = uVar14;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1610) = (uint)local_84;
  do {
    iVar15 = FUN_80076570(iVar18,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x1b,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar9 + 0x15f0) = *puVar5;
      *(undefined4 *)(iVar9 + 0x15f4) = uVar12;
      *(undefined4 *)(iVar9 + 0x15f8) = uVar13;
      *(undefined4 *)(iVar9 + 0x15fc) = uVar14;
      *(int *)(param_1 + iVar4 + 0x1610) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0x10;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0x1c,(uint)local_82);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0x10;
  iVar15 = param_1 + (uint)bVar2 * 0x10;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0x1618) = *puVar5;
  *(undefined4 *)(iVar15 + 0x161c) = uVar12;
  *(undefined4 *)(iVar15 + 0x1620) = uVar13;
  *(undefined4 *)(iVar15 + 0x1624) = uVar14;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1638) = (uint)local_82;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x26,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x1c,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar9 + 0x1618) = *puVar5;
      *(undefined4 *)(iVar9 + 0x161c) = uVar12;
      *(undefined4 *)(iVar9 + 0x1620) = uVar13;
      *(undefined4 *)(iVar9 + 0x1624) = uVar14;
      *(int *)(param_1 + iVar4 + 0x1638) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0x10;
  } while (iVar18 < 1);
  iVar18 = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)FUN_80076f2c(0x15,(uint)local_a4);
  bVar2 = *(byte *)(puVar5 + 2);
  iVar17 = 0x20;
  iVar15 = param_1 + (uint)bVar2 * 0x20;
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(iVar15 + 0x1640) = *puVar5;
  *(undefined4 *)(iVar15 + 0x1644) = uVar12;
  *(undefined4 *)(iVar15 + 0x1648) = uVar13;
  *(undefined4 *)(iVar15 + 0x164c) = uVar14;
  uVar12 = puVar5[5];
  uVar13 = puVar5[6];
  uVar14 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x1650) = puVar5[4];
  *(undefined4 *)(iVar15 + 0x1654) = uVar12;
  *(undefined4 *)(iVar15 + 0x1658) = uVar13;
  *(undefined4 *)(iVar15 + 0x165c) = uVar14;
  *(uint *)(param_1 + (uint)bVar2 * 4 + 0x1700) = (uint)local_a4;
  do {
    iVar15 = FUN_80076570(iVar18 + 0x15,param_2,0);
    if (-1 < iVar15) {
      puVar5 = (undefined4 *)FUN_80076f2c(0x15,iVar15);
      iVar9 = param_1 + iVar17;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *(undefined4 *)(iVar9 + 0x1640) = *puVar5;
      *(undefined4 *)(iVar9 + 0x1644) = uVar12;
      *(undefined4 *)(iVar9 + 0x1648) = uVar13;
      *(undefined4 *)(iVar9 + 0x164c) = uVar14;
      uVar12 = puVar5[5];
      uVar13 = puVar5[6];
      uVar14 = puVar5[7];
      *(undefined4 *)(iVar9 + 0x1650) = puVar5[4];
      *(undefined4 *)(iVar9 + 0x1654) = uVar12;
      *(undefined4 *)(iVar9 + 0x1658) = uVar13;
      *(undefined4 *)(iVar9 + 0x165c) = uVar14;
      *(int *)(param_1 + iVar4 + 0x1700) = iVar15;
    }
    iVar4 = iVar4 + 4;
    iVar18 = iVar18 + 1;
    iVar17 = iVar17 + 0x20;
  } while (iVar18 < 5);
  puVar5 = (undefined4 *)FUN_80076f2c(2,(uint)local_b0);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(param_1 + 0x1718) = *puVar5;
  *(undefined4 *)(param_1 + 0x171c) = uVar12;
  *(undefined4 *)(param_1 + 0x1720) = uVar13;
  *(undefined4 *)(param_1 + 0x1724) = uVar14;
  uVar12 = puVar5[5];
  *(undefined4 *)(param_1 + 0x1728) = puVar5[4];
  *(undefined4 *)(param_1 + 0x172c) = uVar12;
  *(uint *)(param_1 + 0x1730) = (uint)local_b0;
  puVar5 = (undefined4 *)FUN_80076f2c(3,(uint)local_ae);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(param_1 + 0x1734) = *puVar5;
  *(undefined4 *)(param_1 + 0x1738) = uVar12;
  *(undefined4 *)(param_1 + 0x173c) = uVar13;
  *(undefined4 *)(param_1 + 0x1740) = uVar14;
  *(undefined4 *)(param_1 + 0x1744) = puVar5[4];
  *(uint *)(param_1 + 0x1748) = (uint)local_ae;
  puVar3 = (undefined4 *)FUN_80076f2c(6,(uint)local_ac);
  puVar5 = puVar3;
  puVar6 = (undefined4 *)(param_1 + 0x174c);
  do {
    puVar11 = puVar6;
    puVar10 = puVar5;
    uVar12 = puVar10[1];
    uVar13 = puVar10[2];
    uVar14 = puVar10[3];
    *puVar11 = *puVar10;
    puVar11[1] = uVar12;
    puVar11[2] = uVar13;
    puVar11[3] = uVar14;
    puVar5 = puVar10 + 4;
    puVar6 = puVar11 + 4;
  } while (puVar5 != puVar3 + 0x10);
  uVar12 = puVar10[5];
  uVar13 = puVar10[6];
  puVar11[4] = *puVar5;
  puVar11[5] = uVar12;
  puVar11[6] = uVar13;
  *(uint *)(param_1 + 0x1798) = (uint)local_ac;
  puVar5 = (undefined4 *)FUN_80076f2c(0xd,(uint)local_aa);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(undefined4 *)(param_1 + 0x179c) = *puVar5;
  *(undefined4 *)(param_1 + 0x17a0) = uVar12;
  *(undefined4 *)(param_1 + 0x17a4) = uVar13;
  *(undefined4 *)(param_1 + 0x17a8) = uVar14;
  *(uint *)(param_1 + 0x17ac) = (uint)local_aa;
  return;
}

void FUN_overlay3__80011858(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  puVar2 = param_2;
  puVar4 = param_1;

  do {
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *puVar4 = *puVar2;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar2 = puVar2 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar2 != param_2 + 0x20);

  *puVar4 = *puVar2;

  iVar3 = FUN_80076f2c(0x12,*(undefined2 *)((int)param_2 + 0x12));
  *(ushort *)(param_1 + 0x5ec) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0,*(undefined2 *)(param_2 + 1));
  *(ushort *)((int)param_1 + 0x17b2) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(1,*(undefined2 *)((int)param_2 + 6));
  *(ushort *)(param_1 + 0x5ed) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x16,*(undefined2 *)((int)param_2 + 0x16));
  *(ushort *)((int)param_1 + 0x17b6) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x17,*(undefined2 *)(param_2 + 6));
  *(ushort *)(param_1 + 0x5ee) = (ushort)*(byte *)(iVar3 + 4);

  iVar3 = FUN_80076f2c(0x11,*(undefined2 *)(param_2 + 4));
  *(ushort *)(param_1 + 0x5ef) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0xf,*(undefined2 *)(param_2 + 0xb));
  *(ushort *)((int)param_1 + 0x17be) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0xe,*(undefined2 *)((int)param_2 + 0x2a));
  *(ushort *)(param_1 + 0x5f0) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x10,*(undefined2 *)((int)param_2 + 0x2e));
  *(ushort *)((int)param_1 + 0x17c2) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(10,*(undefined2 *)(param_2 + 9));
  *(ushort *)(param_1 + 0x5f1) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(7,*(undefined2 *)((int)param_2 + 0x1e));
  *(ushort *)((int)param_1 + 0x17c6) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(8,*(undefined2 *)(param_2 + 8));
  *(ushort *)(param_1 + 0x5f2) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0xb,*(undefined2 *)((int)param_2 + 0x26));
  *(ushort *)((int)param_1 + 0x17ca) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(9,*(undefined2 *)((int)param_2 + 0x22));
  *(ushort *)(param_1 + 0x5f3) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0xc,*(undefined2 *)(param_2 + 10));
  *(ushort *)((int)param_1 + 0x17ce) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x13,*(undefined2 *)((int)param_2 + 0x32));
  *(ushort *)(param_1 + 0x5f4) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x14,*(undefined2 *)(param_2 + 0xc));
  *(ushort *)((int)param_1 + 0x17d2) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(4,*(undefined2 *)((int)param_2 + 0x1a));
  *(ushort *)(param_1 + 0x5f5) = (ushort)*(byte *)(iVar3 + 0xb);

  iVar3 = FUN_80076f2c(5,*(undefined2 *)(param_2 + 7));
  *(ushort *)((int)param_1 + 0x17d6) = (ushort)*(byte *)(iVar3 + 0xe);

  iVar3 = FUN_80076f2c(0x1b,*(undefined2 *)(param_2 + 0xd));
  *(ushort *)(param_1 + 0x5f6) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x1c,*(undefined2 *)((int)param_2 + 0x36));
  *(ushort *)((int)param_1 + 0x17da) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(0x15,*(undefined2 *)(param_2 + 5));
  *(ushort *)(param_1 + 0x5f7) = (ushort)*(byte *)(iVar3 + 8);

  iVar3 = FUN_80076f2c(2,*(undefined2 *)(param_2 + 2));
  bVar1 = *(byte *)(iVar3 + 8);
  *(undefined2 *)(param_1 + 0x5f8) = 0;
  *(undefined2 *)((int)param_1 + 0x17e2) = 0;
  *(ushort *)((int)param_1 + 0x17de) = (ushort)bVar1;

  iVar3 = FUN_80076f2c(0xd,*(undefined2 *)((int)param_2 + 0xe));
  *(ushort *)(param_1 + 0x5f9) = (ushort)*(byte *)(iVar3 + 4);

  return;
}
