
void FUN_global__8001e928(void)

{
  undefined4 uVar1;

  uVar1 = DAT_800a8d60;
  if (DAT_801c98e0 == '\0') {
    FUN_8007f174(DAT_800a8d60);
    FUN_8006ecd8(uVar1,&DAT_801b9e70);
    FUN_8006ecd8(uVar1,&DAT_801b9e84);
    FUN_8006ecd8(uVar1,&DAT_801b9ea0);
    FUN_8006ecd8(uVar1,&DAT_801b9ebf);
  }
  return;
}

void FUN_global__8001e9a0
               (undefined4 param_1,char *param_2,int param_3,short param_4,int param_5,uint param_6)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;

  uVar3 = DAT_800a8d60;
  iVar5 = 0;
  if (DAT_801c98e0 == '\0') {
    if (param_5 != 0) {
      cVar1 = *param_2;
      pcVar4 = param_2;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 2;
        iVar5 = iVar5 + 0xc;
        cVar1 = *pcVar4;
      }
      param_3 = param_3 - (iVar5 >> 1);
    }
    for (; *param_2 != '\0'; param_2 = param_2 + 2) {
      iVar5 = FUN_8007f18c(uVar3,CONCAT11(*param_2,param_2[1]));
      if (iVar5 != 0) {
        iVar5 = FUN_8007f01c(iVar5,param_1,param_6 | 0x2000000);
        sVar2 = (short)param_3;
        *(short *)(iVar5 + 4) = sVar2;
        *(short *)(iVar5 + 6) = param_4;
        *(short *)(iVar5 + 0xc) = sVar2 + 0xf;
        *(short *)(iVar5 + 0xe) = param_4;
        *(short *)(iVar5 + 0x14) = sVar2;
        *(short *)(iVar5 + 0x16) = param_4 + 0x1f;
        *(short *)(iVar5 + 0x1c) = sVar2 + 0xf;
        *(short *)(iVar5 + 0x1e) = param_4 + 0x1f;
        *(ushort *)(iVar5 + 0x12) = *(ushort *)(iVar5 + 0x12) & 0xff9f | 0x20;
      }
      param_3 = param_3 + 0xc;
    }
  }
  return;
}

int FUN_global__8001ead8(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_global__80020cb4();
  iVar2 = 1;
  if (DAT_801cd554 < 100) {
    iVar2 = (uint)(DAT_801d1568 < *(int *)(param_1 * 0xa4 + iVar1 + 0x94)) << 1;
  }
  return iVar2;
}

void FUN_global__8001eb60(int param_1)

{
  int iVar1;

  iVar1 = FUN_global__80020cb4();
  iVar1 = iVar1 + param_1 * 0xa4 + 4;
  FUN_8005e7f0(&DAT_801cd554,iVar1);
  DAT_801d1568 = DAT_801d1568 - *(int *)(iVar1 + 0x90);
  return;
}

void FUN_global__8001ebd4
               (undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  short local_98;
  short local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined4 local_90;
  undefined auStack_88 [12];
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  undefined auStack_68 [64];

  iVar1 = FUN_global__80020cb4();
  iVar1 = iVar1 + param_2 * 0xa4 + 4;
  FUN_8006ac68(auStack_88,0x1e);
  FUN_8007da80(auStack_88,&DAT_801b95c0);
  local_7c = local_7c & 0xff9fffff | 0x200000;
  if (param_6 < 0) {
    uVar4 = param_5 + 0x80 + param_6;
  }
  else {
    uVar4 = param_5 * param_6 >> 7;
  }
  if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  local_74 = (int)uVar4 / 2 | (int)uVar4 / 2 << 8 | ((int)uVar4 / 3) * 0x10000 | 0x2000000;
  local_78 = param_1;
  uVar2 = FUN_80060ae8(*(undefined4 *)(iVar1 + 0x8c));
  FUN_8006ac90(auStack_88,uVar2,param_3 + -0x6e,param_4 + 8,1);
  local_98 = (short)param_3 + -0x7c;
  local_96 = (short)param_4 + -8;
  local_94 = 9;
  local_92 = 0x10;
  local_90 = FUN_80060d28(*(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(iVar1 + 4));
  FUN_8006bb08(param_1,&local_98,uVar4);
  FUN_global__8001e808(auStack_68,*(undefined4 *)(iVar1 + 0x90));
  FUN_8006b184(auStack_88,auStack_68,param_3 + 0x78,param_4 + 8,1,0xfffffffe,0);
  piVar3 = (int *)FUN_80081478(param_1,uVar4 | uVar4 << 8 | uVar4 << 0x10);
  *piVar3 = param_3 + -0x80 + (param_4 + -0xc) * 0x10000;
  piVar3[1] = 0x3e300000;
  piVar3[2] = 0x180100;
  FUN_8007da44(param_1,0xc);
  return;
}

void FUN_global__8001f508(void)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(DAT_800b1588 + 8);
  if (DAT_801c98e0 == '\0') {
    FUN_8007f174(uVar1);
    FUN_8006ecd8(uVar1,&DAT_801efb39);
    FUN_8006ecd8(uVar1,&DAT_801efb4a);
  }
  return;
}

void FUN_global__8001f570(undefined4 param_1)

{
  if (DAT_801c98e0 == '\0') {
    FUN_8006ecd8(*(undefined4 *)(DAT_800b1588 + 8),param_1);
  }
  return;
}

void FUN_global__8001f5b0
               (undefined4 param_1,char *param_2,int param_3,short param_4,int param_5,uint param_6)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;

  uVar5 = *(undefined4 *)(DAT_800b1588 + 8);
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

void FUN_global__8001f6ec(void)

{
  int iVar1;

  iVar1 = DAT_800b1588;
  if (DAT_801c98e0 == '\0') {
    FUN_global__8001f508();
    FUN_global__8001f570(*(undefined4 *)(iVar1 + 0x28));
    FUN_global__8001f570(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}

void FUN_global__8001f73c(void)

{
  int iVar1;

  iVar1 = DAT_800b1588;
  if (DAT_801c98e0 == '\0') {
    FUN_global__8001f508();
    FUN_global__8001f570(*(undefined4 *)(iVar1 + 0x24));
  }
  return;
}

uint FUN_global__8001fbfc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = 0xaaaa;
  uVar1 = 0x3770;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + uVar4);
      uVar3 = 0;
      uVar5 = uVar5 + uVar2 ^ uVar2 << 8;
      do {
        uVar1 = uVar1 << 1;
        if ((uVar1 & 0x10000) != 0) {
          uVar1 = uVar1 ^ 0x11021;
        }
        uVar1 = uVar1 | uVar2 >> 7 & 1;
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 << 1;
      } while (uVar3 < 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return uVar1 & 0xffff | uVar5 << 0x10;
}

bool FUN_global__8001fc7c(int param_1)

{
  int iVar1;

  iVar1 = FUN_global__8001fbfc(param_1,0x6ba4);
  return *(int *)(param_1 + 0x6ba4) == iVar1;
}

void FUN_global__80020248(void)

{
  FUN_8007d3e8((int)*(short *)(DAT_800b1588 + 0x10),"BASCUS-94194GT");
  return;
}

undefined4 FUN_global__800205c0(void)

{
  return 0xffffffff;
}

void FUN_global__800205c8(int param_1)

{
  int iVar1;
  code *pcVar2;

  iVar1 = DAT_800b1588;
  if (param_1 < 0) {
    pcVar2 = FUN_global__800205c0;
  }
  else {
    pcVar2 = (code *)(&PTR_LAB_global__8001ff1c_global__8004c878)[param_1];
  }
  *(code **)(DAT_800b1588 + 4) = pcVar2;
  *(short *)(iVar1 + 2) = (short)param_1;
  (**(code **)(iVar1 + 4))(0,0);
  return;
}

void FUN_global__8002062c(void)

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

  iVar1 = DAT_800b1588;
  iVar6 = DAT_800b1588 + 0x50;
  *(undefined4 *)(DAT_800b1588 + 0x34) = 0x10009c;
  *(undefined4 *)(iVar1 + 0x38) = 0xe;
  *(undefined4 *)(iVar1 + 0x3c) = 0x2783618;
  *(undefined4 *)(iVar1 + 0x40) = 0x2000000;
  *(undefined4 *)(iVar1 + 0x44) = 0x2dedede;
  *(undefined4 *)(iVar1 + 0x48) = 0x2000000;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined2 *)(iVar1 + 0x4c) = 0xffff;
  FUN_8006e1cc(iVar6,&LAB_global__8004c718,0);
  FUN_8006e1cc(iVar1 + 0xe8,&LAB_global__8004c748,0);
  *(undefined *)(iVar1 + 0x165) = 1;
  FUN_8006e1cc(iVar1 + 0x180,&LAB_global__8004c778,0);
  FUN_8006e1cc(iVar1 + 0x218,&LAB_global__8004c7a8,0);
  FUN_8006e1cc(iVar1 + 0x348,&LAB_global__8004c7d8,0);
  puVar2 = &DAT_global__8004c838;
  puVar3 = (undefined4 *)(iVar1 + 0x3e0);
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
  } while (puVar4 + 4 != (undefined4 *)0x8004c868);
  uVar7 = puVar4[5];
  puVar5[4] = 0;
  puVar5[5] = uVar7;
  FUN_8006e1cc(iVar1 + 0x2b0,&LAB_global__8004c808,0);
  *(undefined **)(iVar1 + 0x28) = &LAB_global__80023d98;
  *(undefined **)(iVar1 + 0x2c) = &LAB_global__80023d98;
  FUN_global__8001f6ec();
  return;
}

int FUN_global__80020788(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[3];
  DAT_800b15b0 = *puVar2;
  DAT_800b15b4 = puVar2[1];
  DAT_800b15b8 = puVar2[2];
  puVar2 = (undefined4 *)param_1[4];
  DAT_800b1590 = *puVar2;
  DAT_800b1594 = puVar2[1];
  DAT_800b1598 = puVar2[2];
  puVar2 = (undefined4 *)param_1[5];
  DAT_800b15a0 = *puVar2;
  DAT_800b15a4 = puVar2[1];
  DAT_800b15a8 = puVar2[2];
  *(int *)(iVar1 + 8) = param_1[1];
  *(int *)(iVar1 + 0xc) = param_1[2];
  DAT_800b1588 = iVar1;
  *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 6);
  return iVar1 + 0x1041c;
}

void FUN_global__80020828(undefined2 param_1)

{
  undefined2 *puVar1;

  puVar1 = DAT_800b1588;
  *DAT_800b1588 = param_1;
  *(undefined2 **)(puVar1 + 0x20c) = puVar1 + 0x20e;
  FUN_8006a038();
  FUN_global__8002062c();
  FUN_global__800205c8(0);
  return;
}

undefined4 FUN_global__80020868(undefined4 param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;

  psVar1 = DAT_800b1588;
  FUN_8006be64(DAT_800b1588 + 0x1a);
  sVar2 = FUN_8006e43c(psVar1 + 0x28,param_1);
  psVar1[0x72] = sVar2;
  sVar2 = FUN_8006e43c(psVar1 + 0x74,param_1);
  psVar1[0xbe] = sVar2;
  sVar2 = FUN_8006e43c(psVar1 + 0xc0,param_1);
  psVar1[0x10a] = sVar2;
  sVar2 = FUN_8006e43c(psVar1 + 0x10c,param_1);
  psVar1[0x156] = sVar2;
  sVar2 = FUN_8006e43c(psVar1 + 0x1a4,param_1);
  psVar1[0x1ee] = sVar2;
  sVar2 = FUN_8006e43c(psVar1 + 0x158,param_1);
  psVar1[0x1a2] = sVar2;
  iVar3 = (**(code **)(psVar1 + 2))(1,0);
  while (iVar3 != 8) {
    if (iVar3 < 9) {
      if (iVar3 == -1) {
        return 0;
      }
    }
    else if (iVar3 == 0xd) {
      if (-1 < psVar1[0x26]) {
        psVar1[0x26] = ~psVar1[0x1c];
      }
      *(undefined **)(psVar1 + 0x14) = &LAB_global__80023d98;
      *(undefined **)(psVar1 + 0x16) = &LAB_global__80023d98;
      FUN_global__8001f6ec();
      FUN_global__800205c8(0xffffffff);
      return 1;
    }
    iVar3 = FUN_global__800205c8();
  }
  sVar2 = *psVar1;
  if (sVar2 != 1) {
    if (sVar2 < 2) {
      if (sVar2 != 0) {
        return 0;
      }
      if (-1 < psVar1[0x26]) {
        psVar1[0x26] = ~psVar1[0x1c];
      }
      *(undefined **)(psVar1 + 0x14) = &LAB_global__80023d98;
      *(undefined **)(psVar1 + 0x16) = &LAB_global__80023d98;
      FUN_global__8001f6ec();
      uVar4 = 0xffffffff;
      goto LAB_global__800209bc;
    }
    if (sVar2 != 2) {
      return 0;
    }
  }
  uVar4 = 8;
LAB_global__800209bc:
  FUN_global__800205c8(uVar4);
  return 2;
}

void FUN_global__80020a3c(undefined4 param_1)

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

  iVar1 = DAT_800b1588;
  local_20 = 0x2000000;
  local_1c = 0x242362a;
  FUN_8006ac68(auStack_40,(int)*(short *)(DAT_800b1588 + 0x30));
  FUN_8007da80(auStack_40,&DAT_800b15a0);
  local_24 = 1;
  local_2c = 0x25c5248;
  local_34 = local_34 & 0xff9fffff | 0x200000;
  local_30 = param_1;
  if (DAT_801c98e0 == '\0') {
    FUN_global__8001f5b0(param_1,*(undefined4 *)(iVar1 + 0x28),0xb0,0xc6,1,0x747474);
    FUN_global__8001f5b0(param_1,*(undefined4 *)(iVar1 + 0x2c),0xb0,0xea,1,0x747474);
  }
  else {
    FUN_8006adb4(auStack_40,*(undefined4 *)(iVar1 + 0x28),0xb0,0xd6,1);
    FUN_8006adb4(auStack_40,*(undefined4 *)(iVar1 + 0x2c),0xb0,0xfa,1);
  }
  uVar2 = FUN_8006beb4(iVar1 + 0x34);
  if (uVar2 != 0) {
    if (DAT_801c98e0 == '\0') {
      FUN_global__8001f5b0
                (param_1,(&PTR_DAT_global__8004c870)[*(short *)(iVar1 + 0x10)],0x1c,0x66,0,
                 uVar2 | uVar2 << 8 | uVar2 << 0x10);
    }
    else {
      local_2c = FUN_8006b548(&local_20,&local_1c,uVar2,0x80);
      FUN_8006ac90(auStack_40,(&PTR_DAT_global__8004c870)[*(short *)(iVar1 + 0x10)],0x1c,0x7e,1);
    }
    FUN_8006bef4(iVar1 + 0x34,param_1,0x18,0x6e);
    FUN_8007da44(param_1,0x220);
  }
  FUN_8006e5b8(iVar1 + 0x50,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0xe8,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x180,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x218,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x348,param_1,auStack_40);
  FUN_8006e5b8(iVar1 + 0x2b0,param_1,auStack_40);
  (**(code **)(iVar1 + 4))(2,param_1);
  return;
}

void FUN_global__80020cb4(void)

{
  FUN_8006a2e4(*(undefined4 *)(DAT_800b1588 + 0x418),*(undefined4 *)(DAT_800b1588 + 0x418));
  return;
}

void FUN_global__80020ce0(void)

{
  FUN_8006a2ec(*(undefined4 *)(DAT_800b1588 + 0x418),*(undefined4 *)(DAT_800b1588 + 0x418));
  return;
}

void FUN_global__80020d0c(void)

{
  FUN_8006a2f4(*(undefined4 *)(DAT_800b1588 + 0x418),*(undefined4 *)(DAT_800b1588 + 0x418));
  return;
}

void FUN_global__80020d38(void)

{
  FUN_8006a2fc(*(undefined4 *)(DAT_800b1588 + 0x418),*(undefined4 *)(DAT_800b1588 + 0x418));
  return;
}

void FUN_global__80020d64(void)

{
  FUN_8006a304(*(undefined4 *)(DAT_800b1588 + 0x418),*(undefined4 *)(DAT_800b1588 + 0x418));
  return;
}

void FUN_global__80020d90(void)

{
  FUN_8006a30c(*(undefined4 *)(DAT_800b1588 + 0x418),*(undefined4 *)(DAT_800b1588 + 0x418));
  return;
}

int FUN_global__80020dbc(void)

{
  return DAT_800b1588 + 0x61c;
}

int FUN_global__80020dcc(int param_1)

{
  FUN_8005d8d4(*(undefined4 *)(&LAB_global__8004c8a8 + (uint)DAT_801c98e0 * 4),param_1);
  return (int)*(char *)(param_1 + 0x200);
}

void FUN_global__80020e14(int param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  iVar8 = 0;
  iVar5 = param_1 + param_3 * 0x5c + 0x988;
  sVar1 = *(short *)(iVar5 + 0x52);
  sVar2 = *(short *)(iVar5 + 0x50);
  puVar7 = param_2;
  while( true ) {
    if (sVar1 <= iVar8) break;
    puVar4 = (undefined4 *)(sVar2 * 0x80 + param_1 + 0x1580);
    if ((((uint)puVar4 | (uint)puVar7) & 3) == 0) {
      puVar3 = puVar4 + 0x20;
      puVar6 = puVar7;
      do {
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        *puVar6 = *puVar4;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar4 != puVar3);
    }
    else {
      puVar3 = puVar4 + 0x20;
      puVar6 = puVar7;
      do {
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        *puVar6 = *puVar4;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar4 != puVar3);
    }
    puVar7 = puVar7 + 0x20;
    sVar2 = *(short *)(param_1 + sVar2 * 2 + 0x206);
    iVar8 = iVar8 + 1;
  }
  FUN_80069ac4(param_2,0);
  return;
}

void FUN_global__800221ee(void)

{
  int in_a3;
  undefined2 unaff_s1;

  *(undefined2 *)(in_a3 + 0x2835) = unaff_s1;

  halt_baddata();
}

void FUN_overlay0__80010000(int param_1,undefined param_2)

{
  undefined uVar1;

  FUN_8008ce30(param_1,0,0x110);
  *(undefined *)(param_1 + 0x10c) = param_2;
  uVar1 = DAT_801c998f;
  *(undefined *)(param_1 + 0x107) = 1;
  *(undefined *)(param_1 + 0x10e) = uVar1;
  if (DAT_800a951c != '\0') {
    uVar1 = 2;
    if (DAT_801d5866 != '\x03') {
      uVar1 = DAT_801c998e;
    }
    *(undefined *)(param_1 + 0x107) = uVar1;
  }
  return;
}

void FUN_overlay0__80010088(undefined2 *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x140;
  bVar1 = *(char *)((int)param_1 + 0x103) != '\0';
  param_1[3] = (short)(0xf0 >> bVar1);
  FUN_8007b320(param_1,param_3 + -0xa0,param_3 + 0xa0,(param_4 >> bVar1) + (0x84 >> bVar1),
               (param_4 >> bVar1) - (0x84 >> bVar1),param_2,0x7fff);
  return;
}

void FUN_overlay0__800100f4(int param_1)

{
  undefined4 uVar1;

  *(undefined *)(param_1 + 0x10f) = 0;
  *(undefined *)(param_1 + 0x108) = 0;
  *(undefined *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0x10b) = 1;
  *(undefined *)(param_1 + 0x10a) = 0;
  if (DAT_800a951c == '\0') {
    FUN_overlay0__800102d8();
  }
  else {
    FUN_overlay0__800109fc(param_1);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xcc);
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd4);
  uVar1 = FUN_80081164(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  FUN_800811b0(param_1 + 0xc4,param_1 + 0xa4);
  *(undefined2 *)(param_1 + 0xec) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)(param_1 + 0xee) = *(undefined2 *)(param_1 + 0xae);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_1 + 0xb4);
  *(undefined2 *)(param_1 + 0xf4) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined2 *)(param_1 + 0xf6) = *(undefined2 *)(param_1 + 0xaa);
  *(undefined2 *)(param_1 + 0xf8) = *(undefined2 *)(param_1 + 0xb0);
  return;
}

void FUN_overlay0__800101fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  iVar1 = (uint)*(byte *)(param_1 + 0x10c) * 0xb40;
  *(undefined4 *)(param_1 + 0xa0) = (&DAT_800a969c)[(uint)*(byte *)(param_1 + 0x10c) * 0x2d0];
  uVar2 = *(undefined4 *)(&DAT_800a9ea8 + iVar1);
  uVar3 = *(undefined4 *)(&DAT_800a9eac + iVar1);
  uVar4 = *(undefined4 *)(&DAT_800a9eb0 + iVar1);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(&DAT_800a9ea4 + iVar1);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  uVar2 = *(undefined4 *)(&DAT_800a9eb8 + iVar1);
  uVar3 = *(undefined4 *)(&DAT_800a9ebc + iVar1);
  uVar4 = *(undefined4 *)(&DAT_800a9ec0 + iVar1);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(&DAT_800a9eb4 + iVar1);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  FUN_800811b0(param_1 + 0xc4,param_1 + 0xa4);
  return;
}

void FUN_overlay0__80010298(undefined4 param_1)

{
  FUN_overlay0__80010088
            (param_1,*(undefined2 *)(&DAT_overlay0__8002f370 + (uint)DAT_801c9992 * 2),0,0);
  return;
}

void FUN_overlay0__800102d8(int param_1)

{
  char cVar1;
  uint uVar2;

  if (DAT_800a951c == '\0') {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x9c) + 0x90);
    if ((*(uint *)(*(int *)(param_1 + 0x9c) + 0x8c) & 0x200) != 0) {
      *(undefined *)(param_1 + 0x10f) = 1;
    }
    if (((uVar2 & 0x100) != 0) &&
       (cVar1 = *(char *)(param_1 + 0x10e) + '\x01', *(char *)(param_1 + 0x10e) = cVar1,
       cVar1 == '\x03')) {
      *(undefined *)(param_1 + 0x10e) = 0;
    }
    if (DAT_800a9520 != 0) {
      FUN_overlay0__80010608(param_1);
      return;
    }
  }
  FUN_overlay0__80010298(param_1);
  FUN_overlay0__800103c0(param_1,*(undefined *)(param_1 + 0x10e));
  return;
}

void FUN_overlay0__80010388(int param_1)

{
  FUN_overlay0__80010088();
  FUN_overlay0__800103c0(param_1,*(undefined *)(param_1 + 0x10e));
  return;
}

void FUN_overlay0__800103c0(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  iVar3 = (uint)*(byte *)(param_1 + 0x10c) * 0xb40;
  FUN_overlay0__800101fc();
  *(undefined *)(param_1 + 0x10b) = 0;
  if (param_2 == 0) {
    local_38 = 0;
    local_34 = 0xcccc;
    local_30 = 0;
    FUN_8007b050(param_1 + 0xa4,&local_38);
    if (*(char *)(param_1 + 0x10f) == '\0') {
      *(undefined *)(param_1 + 0x109) = 1;
    }
    else {
      FUN_8007b14c(param_1 + 0xa4,0x800);
    }
    *(undefined *)(param_1 + 0x108) = 1;
    *(undefined *)(param_1 + 0x10a) = 1;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0xb8);
    uVar6 = *(undefined4 *)(param_1 + 0xbc);
    uVar5 = *(undefined4 *)(param_1 + 0xc0);
    iVar4 = (int)*(short *)(param_1 + 0xc4) - (int)*(short *)(&DAT_800a9dee + iVar3);
    iVar3 = (int)*(short *)(param_1 + 0xc6) + (int)*(short *)(&DAT_800a9df0 + iVar3);
    if (*(char *)(param_1 + 0x10f) != '\0') {
      iVar4 = iVar4 + 0x800;
      iVar3 = -iVar3;
    }
    iVar2 = param_1 + 0xa4;
    if (*(char *)(param_1 + 0x103) != '\0') {
      iVar3 = iVar3 + 0x20;
    }
    FUN_8007af60(iVar2);
    local_38 = uVar7;
    local_34 = uVar6;
    local_30 = uVar5;
    FUN_8007b050(iVar2,&local_38);
    FUN_8007b088(iVar2,iVar4,iVar3,0);
    if (*(char *)(param_1 + 0x103) == '\0') {
      iVar3 = (param_2 + -1) * 4;
      local_34 = *(undefined4 *)(&LAB_overlay0__8002f350 + iVar3);
      puVar1 = &DAT_overlay0__8002f358;
    }
    else {
      iVar3 = (param_2 + -1) * 4;
      local_34 = *(undefined4 *)(&DAT_overlay0__8002f360 + iVar3);
      puVar1 = &DAT_overlay0__8002f368;
    }
    local_30 = *(undefined4 *)(puVar1 + iVar3);
    local_38 = 0;
    FUN_8007b050(param_1 + 0xa4,&local_38);
  }
  return;
}

int FUN_overlay0__80010598(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;

  lVar1 = (longlong)(param_2 - param_1) * (longlong)param_3;
  iVar2 = FUN_80086084((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_4,param_4 >> 0x1f);
  return iVar2 + param_1;
}

undefined8 FUN_overlay0__800105e0(int param_1,int param_2,int param_3)

{
  longlong lVar1;

  lVar1 = (longlong)(param_2 - param_1) * (longlong)param_3 >> 0xc;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20),(int)lVar1 + param_1);
}

void FUN_overlay0__80010608(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;

  uVar7 = (uint)DAT_800a9520;
  uVar9 = (uint)DAT_800a951e;
  uVar3 = *(undefined2 *)(&DAT_overlay0__8002f370 + (uint)DAT_801c9992 * 2);
  FUN_overlay0__800101fc();
  if (uVar7 < 0x3c) {
    uVar4 = FUN_overlay0__80010598(uVar3,0x399,uVar7,0x3c);
    FUN_overlay0__80010388(param_1,uVar4);
  }
  else {
    iVar8 = uVar7 - 0x42;
    if ((int)(uVar7 - 0x3c) < 0x3c) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      iVar10 = *(int *)(param_1 + 0xbc);
      uVar12 = *(undefined4 *)(param_1 + 0xb8);
      uVar4 = *(undefined4 *)(param_1 + 0xc0);
      iVar8 = (iVar8 << 0xc) / 0x36;
      iVar5 = FUN_overlay0__800105e0(0,0x5c0,iVar8);
      iVar6 = FUN_overlay0__800105e0(0xaa,0,iVar8);
      iVar11 = param_1 + 0xa4;
      sVar1 = *(short *)(param_1 + 0xc4);
      sVar2 = *(short *)(param_1 + 0xc6);
      FUN_8007af60(iVar11);
      local_38 = uVar12;
      local_34 = iVar10 + 0x4ccc;
      local_30 = uVar4;
      FUN_8007b050(iVar11,&local_38);
      FUN_8007b088(iVar11,sVar1 + iVar5,sVar2 + iVar6,0);
      local_30 = FUN_overlay0__800105e0(0x354bc,0x28000,iVar8);
      local_38 = 0;
      local_34 = 0;
      FUN_8007b050(iVar11,&local_38);
      uVar4 = FUN_overlay0__800105e0(0,0x8c,iVar8);
      iVar8 = FUN_overlay0__800105e0(0,0x100,iVar8);
      FUN_8007b088(iVar11,uVar4,-iVar8,0);
      iVar8 = 0xa0;
      uVar4 = 0;
    }
    else {
      iVar8 = uVar7 - 0x8a;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      iVar10 = (iVar8 << 0xc) / (int)(uVar9 - 0x8a);
      uVar12 = *(undefined4 *)(param_1 + 0xb8);
      uVar4 = *(undefined4 *)(param_1 + 0xc0);
      iVar8 = *(int *)(param_1 + 0xbc);
      sVar1 = *(short *)(param_1 + 0xc4);
      iVar5 = FUN_overlay0__800105e0(0x18,0xaa,iVar10);
      iVar6 = param_1 + 0xa4;
      sVar2 = *(short *)(param_1 + 0xc6);
      FUN_8007af60(iVar6);
      local_38 = uVar12;
      local_34 = iVar8 + 0xcccc;
      local_30 = uVar4;
      FUN_8007b050(iVar6,&local_38);
      FUN_8007b088(iVar6,sVar1 + 0x800,sVar2 + iVar5,0);
      local_30 = FUN_overlay0__800105e0(0x5d4bc,(uVar9 - 0x78) * 0x4ccc,iVar10);
      local_38 = 0;
      local_34 = 0;
      FUN_8007b050(iVar6,&local_38);
      iVar5 = FUN_overlay0__800105e0(0x50,0,iVar10);
      iVar8 = 0;
      if ((-1 < iVar5) && (iVar8 = iVar5, 0x50 < iVar5)) {
        iVar8 = 0x50;
      }
      FUN_8007b088(param_1 + 0xa4,0,-iVar8,0);
      iVar5 = FUN_overlay0__800105e0(0x1c2,0x399,iVar10);
      iVar8 = 0x399;
      if ((iVar5 < 0x39a) && (iVar8 = iVar5, iVar5 < 0x1c2)) {
        iVar8 = 0x1c2;
      }
      uVar4 = 0xffffffb0;
    }
    FUN_overlay0__80010088(param_1,iVar8,0,uVar4);
  }
  return;
}

int FUN_overlay0__8001097c(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_overlay0__80012378();
  if (iVar2 == 0) {
    iVar3 = 0x184;
    for (iVar2 = 0; iVar2 < (int)(uint)DAT_800af231; iVar2 = iVar2 + 1) {
      pcVar1 = &UNK_800a9c80 + iVar3;
      iVar3 = iVar3 + 0xb40;
      if (*pcVar1 == param_1) {
        return iVar2;
      }
    }
  }
  return 0;
}

void FUN_overlay0__800109fc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  int iVar7;
  ushort *puVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;

  iVar7 = FUN_overlay0__80012378();
  cVar4 = DAT_801d5866;
  uVar11 = 1;
  if (iVar7 == 0) {
    uVar11 = (uint)DAT_800af231;
  }
  bVar3 = false;
  uVar14 = *(uint *)(*(int *)(param_1 + 0x9c) + 0x6c);
  if ((uVar14 & 0x800) != 0) {
    cVar5 = *(char *)(param_1 + 0x105) + '\x01';
    *(char *)(param_1 + 0x105) = cVar5;
    bVar3 = true;
    if (cVar5 == '\x03') {
      *(undefined *)(param_1 + 0x105) = 0;
    }
  }
  if (cVar4 == '\0') {
    if ((uVar14 & 0x100) != 0) {
      *(bool *)(param_1 + 0x103) = *(char *)(param_1 + 0x103) == '\0';
    }
  }
  else if (cVar4 == '\x06') {
    if (DAT_800a9520 == 0) {
      if ((uVar14 & 0x1010) == 0x10) {
        (&DAT_800a96a9)[(uint)*(byte *)(param_1 + 0x10c) * 0xb40] = 0xff;
      }
      else if ((uVar14 & 0x1010) == 0x1000) {
        (&DAT_800a96a9)[(uint)*(byte *)(param_1 + 0x10c) * 0xb40] = 1;
      }
    }
  }
  else {
    if ((uVar14 & 3) == 1) {
      uVar10 = (int)(&DAT_800a9e04)[(uint)*(byte *)(param_1 + 0x10c) * 0xb40] - 1;
      if (uVar10 == 0) {
        uVar10 = uVar11;
      }
    }
    else {
      if ((uVar14 & 3) != 2) goto LAB_overlay0__80010bc4;
      uVar10 = (int)(&DAT_800a9e04)[(uint)*(byte *)(param_1 + 0x10c) * 0xb40] + 1;
      if ((int)uVar11 < (int)uVar10) {
        uVar10 = 1;
      }
    }
    uVar6 = FUN_overlay0__8001097c(uVar10);
    *(undefined *)(param_1 + 0x10c) = uVar6;
  }
LAB_overlay0__80010bc4:
  if (((uVar14 & 0x400) != 0) &&
     (cVar5 = *(char *)(param_1 + 0x106) + '\x01', *(char *)(param_1 + 0x106) = cVar5, cVar5 == '\t'
     )) {
    *(undefined *)(param_1 + 0x106) = 0;
  }
  if (((uVar14 & 0x200) != 0) &&
     (cVar5 = *(char *)(param_1 + 0x107) + '\x01', *(char *)(param_1 + 0x107) = cVar5,
     cVar5 == '\x03')) {
    *(undefined *)(param_1 + 0x107) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x105);
  if (bVar1 == 1) {
LAB_overlay0__80010dfc:
    FUN_overlay0__80011704(param_1);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      if (cVar4 == '\0') {
        if (bVar3) goto LAB_overlay0__80010dfc;
        if (*(char *)(param_1 + 0x103) == '\0') {
          if (DAT_800a9e04 == '\x01') {
            *(undefined *)(param_1 + 0x10c) = 0;
          }
          else {
            *(undefined *)(param_1 + 0x10c) = 1;
          }
        }
      }
      else {
        *(undefined *)(param_1 + 0x105) = 0;
      }
    }
    iVar7 = (uint)*(byte *)(param_1 + 0x10c) * 0xb40;
    puVar8 = (ushort *)
             FUN_overlay0__800117c4
                       (DAT_800b4a50,
                        (int)(short)(&DAT_800a9cbc)[(uint)*(byte *)(param_1 + 0x10c) * 0x5a0],
                        *(undefined4 *)(&DAT_800a9cb8 + iVar7));
    if (puVar8 == (ushort *)0x0) {
      FUN_overlay0__800102d8(param_1);
    }
    else {
      iVar12 = *(int *)(&DAT_800a9cb8 + iVar7);
      iVar13 = *(int *)(puVar8 + 6);
      iVar7 = *(int *)(puVar8 + 4);
      if (iVar13 < iVar7) {
        iVar13 = iVar13 + *DAT_800b4a44;
      }
      if (iVar12 < iVar7) {
        iVar12 = iVar12 + *DAT_800b4a44;
      }
      iVar13 = iVar13 - iVar7;
      uVar11 = iVar12 - iVar7;
      if (iVar13 == 0) {
        DAT_800a8d6c = 0;
      }
      else {
        DAT_800a8d6c = FUN_80086084(uVar11 * 0x1000,((int)uVar11 >> 0x1f) << 0xc | uVar11 >> 0x14,
                                    iVar13,iVar13 >> 0x1f);
      }
      uVar2 = *puVar8;
      uVar9 = uVar2 & 0xf;
      *(ushort *)(param_1 + 0x100) = uVar2;
      if (uVar9 == 1) {
        FUN_overlay0__800112c4(param_1,puVar8);
      }
      else if (uVar9 < 2) {
        if ((uVar2 & 0xf) == 0) {
          FUN_overlay0__800111a8(param_1,puVar8);
        }
      }
      else if (uVar9 == 2) {
        FUN_overlay0__80011378(param_1,puVar8);
      }
      else if (uVar9 == 3) {
        FUN_overlay0__80011568(param_1,puVar8);
      }
    }
  }

  return;
}

void FUN_overlay0__80010e20(undefined2 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_30;

  uVar8 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  local_30 = uVar8;
  if ((int)uVar8 < 0) {
    local_30 = -uVar8;
  }
  uVar1 = uVar6;
  if ((int)uVar6 < 0) {
    uVar1 = -uVar6;
  }
  uVar12 = uVar7;
  if ((int)uVar7 < 0) {
    uVar12 = -uVar7;
  }
  gte_ldLZCS(local_30 | uVar1 | uVar12);
  iVar4 = gte_stLZCR();
  uVar1 = 0x11 - iVar4;
  iVar4 = (int)uVar6 >> (uVar1 & 0x1f);
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
    iVar5 = uVar8 << (uVar1 & 0x1f);
    iVar4 = uVar6 << (uVar1 & 0x1f);
    iVar2 = uVar7 << (uVar1 & 0x1f);
  }
  else {
    iVar5 = (int)uVar8 >> (uVar1 & 0x1f);
    iVar2 = (int)uVar7 >> (uVar1 & 0x1f);
  }
  iVar10 = 0;
  iVar11 = 0x1000;
  iVar3 = FUN_80081288(iVar5 * iVar5 + iVar4 * iVar4 + iVar2 * iVar2,0,uVar6,local_30);
  if (iVar3 != 0) {
    iVar2 = FUN_80081288(iVar5 * iVar5 + iVar2 * iVar2,0);
    iVar10 = (iVar4 << 0xc) / iVar3;
    iVar11 = (iVar2 << 0xc) / iVar3;
  }
  gte_ldLZCS(local_30 | uVar12);
  iVar4 = gte_stLZCR();
  uVar6 = 0x11 - iVar4;
  iVar4 = (int)uVar8 >> (uVar6 & 0x1f);
  if ((int)uVar6 < 0) {
    iVar4 = uVar8 << (-uVar6 & 0x1f);
    iVar2 = uVar7 << (-uVar6 & 0x1f);
  }
  else {
    iVar2 = (int)uVar7 >> (uVar6 & 0x1f);
  }
  iVar9 = 0;
  iVar5 = 0x1000;
  iVar3 = FUN_80081288(iVar4 * iVar4 + iVar2 * iVar2,0);
  if (iVar3 != 0) {
    iVar9 = (iVar4 << 0xc) / iVar3;
    iVar5 = (iVar2 << 0xc) / iVar3;
  }
  iVar10 = -iVar10;
  iVar5 = -iVar5;
  *param_1 = (short)iVar5;
  param_1[3] = 0;
  param_1[4] = (short)iVar11;
  param_1[5] = (short)iVar10;
  param_1[6] = (short)iVar9;
  param_1[1] = -(short)(-iVar9 * iVar10 >> 0xc);
  param_1[2] = (short)(-iVar9 * iVar11 >> 0xc);
  param_1[7] = -(short)(iVar5 * iVar10 >> 0xc);
  param_1[8] = (short)(iVar5 * iVar11 >> 0xc);
  return;
}

void FUN_overlay0__80011088(int *param_1,int *param_2,int *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  int local_4;

  lVar1 = (longlong)(*param_3 - *param_2) * (longlong)param_4;
  iVar5 = param_2[1];
  lVar2 = (longlong)(param_3[1] - iVar5) * (longlong)param_4;
  iVar4 = param_2[2];
  lVar3 = (longlong)(param_3[2] - iVar4) * (longlong)param_4;
  *param_1 = *param_2 + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14);
  param_1[1] = iVar5 + ((uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14);
  local_8 = (uint)lVar3;
  local_4 = (int)((ulonglong)lVar3 >> 0x20);
  param_1[2] = iVar4 + (local_8 >> 0xc | local_4 << 0x14);
  return;
}

void FUN_overlay0__80011144(int *param_1)

{
  FUN_80081288((*param_1 >> 10) * (*param_1 >> 10) + (param_1[1] >> 10) * (param_1[1] >> 10) +
               (param_1[2] >> 10) * (param_1[2] >> 10),0);
  return;
}

void FUN_overlay0__800111a8(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_overlay0__80011890(param_2 + 0x18,param_1 + 0xb8);
  uVar1 = FUN_overlay0__80028394(DAT_800b4a44,*(undefined2 *)(param_2 + 6),param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  FUN_overlay0__80010e20(param_1 + 0xa4);
  FUN_overlay0__80010088
            (param_1,((int)(((uint)*(ushort *)(param_2 + 0x12) - (uint)*(ushort *)(param_2 + 0x10))
                           * DAT_800a8d6c) >> 0xc) + (uint)*(ushort *)(param_2 + 0x10),0,0);
  return;
}

void FUN_overlay0__800112c4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_overlay0__80010088(param_1,*(undefined4 *)(param_2 + 0x10),0,0);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(int *)(param_1 + 0xc0) = -*(int *)(param_1 + 0xc0);
  FUN_80081374(param_1 + 0xa4,-(int)*(short *)(param_2 + 0x22),-(int)*(short *)(param_2 + 0x20),
               (int)*(short *)(param_2 + 0x24));
  uVar1 = FUN_overlay0__80028394(DAT_800b4a44,*(undefined2 *)(param_2 + 6),param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  return;
}

void FUN_overlay0__80011378(undefined4 param_1,int param_2)

{
  FUN_overlay0__80010088(param_1,*(undefined2 *)(param_2 + 0x12),0,0);
  FUN_overlay0__800113c0(param_1,*(undefined2 *)(param_2 + 0x10));
  return;
}

void FUN_overlay0__800113c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  iVar1 = param_2 * 0x18;
  if ((param_2 == 7) || ((param_2 < 8 && (param_2 == 0)))) {
    *(undefined *)(param_1 + 0x108) = 1;
    *(undefined *)(param_1 + 0x10a) = 1;
    *(undefined *)(param_1 + 0x10b) = 0;
  }
  DAT_overlay0__8002f450 =
       *(int *)(&DAT_800a9f04 + (uint)*(byte *)(param_1 + 0x10c) * 0xb40) + 0x4ccc;
  DAT_overlay0__8002f438 = -DAT_overlay0__8002f450;
  DAT_overlay0__8002f468 = DAT_overlay0__8002f438;
  DAT_overlay0__8002f480 = DAT_overlay0__8002f450;
  FUN_overlay0__800101fc(param_1);
  iVar4 = (int)*(short *)(param_1 + 0xc4);
  iVar3 = (int)*(short *)(param_1 + 0xc6);
  iVar2 = (int)*(short *)(param_1 + 200);
  local_38 = *(undefined4 *)(param_1 + 0xb8);
  local_34 = *(undefined4 *)(param_1 + 0xbc);
  local_30 = *(undefined4 *)(param_1 + 0xc0);
  if (0xb < param_2) {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
  }
  param_1 = param_1 + 0xa4;
  FUN_8007af60(param_1);
  FUN_8007b050(param_1,&local_38);
  FUN_8007b088(param_1,iVar4,iVar3,iVar2);
  FUN_8007b088(param_1,(int)*(short *)(&LAB_overlay0__8002f382_2 + iVar1),
               (int)*(short *)(&LAB_overlay0__8002f386 + iVar1),
               (int)*(short *)(&LAB_overlay0__8002f386_2 + iVar1));
  local_38 = *(undefined4 *)(&LAB_overlay0__8002f376_2 + iVar1);
  local_34 = *(undefined4 *)(&LAB_overlay0__8002f37a_2 + iVar1);
  local_30 = *(undefined4 *)(&LAB_overlay0__8002f37e_2 + iVar1);
  FUN_8007b050(param_1,&local_38);
  FUN_8007b088(param_1,(int)*(short *)(&LAB_overlay0__8002f38a + iVar1),
               (int)*(short *)(&LAB_overlay0__8002f38a_2 + iVar1),
               (int)*(short *)(&LAB_overlay0__8002f38e + iVar1));
  return;
}

void FUN_overlay0__80011568(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;

  iVar2 = (uint)*(byte *)(param_1 + 0x10c) * 0xb40;
  iVar5 = *(int *)((&DAT_800a9f00)[(uint)*(byte *)(param_1 + 0x10c) * 0x2d0] + 0x870);
  FUN_overlay0__80011890(param_2 + 0x1c,param_1 + 0xb8);
  uVar1 = FUN_overlay0__80028394(DAT_800b4a44,*(undefined2 *)(param_2 + 6),param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  local_30 = *(int *)(&DAT_800a9eb8 + iVar2) - *(int *)(param_1 + 0xb8);
  local_28 = *(int *)(&DAT_800a9ec0 + iVar2) - *(int *)(param_1 + 0xc0);
  local_2c = (*(int *)(&DAT_800a9ebc + iVar2) - *(int *)(param_1 + 0xbc)) + 0xcccc;
  FUN_overlay0__80010e20(param_1 + 0xa4,&local_30);
  iVar2 = FUN_overlay0__80011144(&local_30);
  uVar3 = *(ushort *)(iVar5 + 0x4c) - 0x10;
  if ((int)uVar3 < 0) {
    iVar2 = iVar2 * 0x3600 << (-uVar3 & 0x1f);
  }
  else {
    iVar2 = iVar2 * 0x3600 >> (uVar3 & 0x1f);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x10);
  uVar4 = (int)((iVar2 / (int)(uint)*(ushort *)(iVar5 + 0x4e)) * (uint)*(ushort *)(param_2 + 0x14))
          >> 0xc;
  if (((int)uVar4 <= (int)uVar3) &&
     (uVar3 = uVar4, (int)uVar4 < (int)(uint)*(ushort *)(param_2 + 0x12))) {
    uVar3 = (uint)*(ushort *)(param_2 + 0x12);
  }
  FUN_overlay0__80010088(param_1,uVar3,0,0);
  return;
}

void FUN_overlay0__80011704(int param_1)

{
  undefined4 uVar1;

  FUN_overlay0__80010298();
  uVar1 = 0;
  switch(*(undefined *)(param_1 + 0x106)) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    goto LAB_overlay0__8001175c;
  case 2:
    uVar1 = 2;
LAB_overlay0__8001175c:
    FUN_overlay0__800103c0(param_1,uVar1);
    return;
  case 3:
    uVar1 = 0xc;
    break;
  case 4:
    uVar1 = 7;
    break;
  case 5:
    uVar1 = 8;
    break;
  case 6:
    uVar1 = 9;
    break;
  case 7:
    uVar1 = 10;
    break;
  case 8:
    uVar1 = 0xb;
  }
  FUN_overlay0__800113c0(param_1,uVar1);
  return;
}

int FUN_overlay0__800117c4(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  uVar3 = (uint)param_1[1];
  uVar1 = *param_1;
  if ((uVar3 != 0) && ((int)uVar3 < param_2)) {
    param_2 = (param_2 + -1) % (int)uVar3 + 1;
  }
  iVar8 = 0;
  do {
    if ((int)(uint)uVar1 <= iVar8) {
      return 0;
    }
    iVar6 = *(int *)(param_1 + 2);
    if (((int)(uint)*(ushort *)(iVar6 + 2) <= param_2) &&
       (param_2 <= (int)(uint)*(ushort *)(iVar6 + 4))) {
      iVar5 = *(int *)(iVar6 + 0xc);
      iVar7 = *(int *)(iVar6 + 8);
      if (iVar5 < iVar7) {
        iVar5 = iVar5 + *DAT_800b4a44;
      }
      bVar2 = param_3 < iVar7;
      iVar4 = param_3;
      if ((int)(uint)*(ushort *)(iVar6 + 2) < param_2) {
        iVar4 = param_3 + *DAT_800b4a44;
        bVar2 = iVar4 < iVar7;
      }
      if ((!bVar2) && (iVar4 < iVar5)) {
        return iVar6;
      }
    }
    param_1 = param_1 + 2;
    iVar8 = iVar8 + 1;
  } while( true );
}

void FUN_overlay0__80011890(short *param_1,int param_2)

{
  if (*param_1 == 0) {
    FUN_overlay0__800118f8(param_1,param_2);
  }
  else if (*param_1 == 1) {
    FUN_overlay0__80011a58(param_1,param_2);
  }
  *(int *)(param_2 + 8) = -*(int *)(param_2 + 8);
  return;
}

void FUN_overlay0__800118f8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;

  iVar4 = 0;
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  iVar7 = 0;
  iVar2 = param_1;
  if (uVar3 != 0) {
    do {
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + *(int *)(iVar2 + 4);
      iVar2 = iVar2 + 0x10;
    } while (iVar7 < (int)uVar3);
  }
  if ((iVar4 == 0) || (uVar3 < 2)) {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    *param_2 = *(undefined4 *)(param_1 + 8);
    param_2[1] = uVar5;
    param_2[2] = uVar6;
  }
  else {
    uVar1 = (uint)((longlong)iVar4 * (longlong)DAT_800a8d6c) >> 0xc |
            (int)((ulonglong)((longlong)iVar4 * (longlong)DAT_800a8d6c) >> 0x20) << 0x14;
    iVar2 = 0;
    if (0 < (int)(uVar3 - 1)) {
      do {
        iVar7 = iVar2 + 1;
        iVar4 = *(int *)(param_1 + iVar7 * 0x10 + 4);
        if ((int)uVar1 < iVar4) break;
        uVar1 = uVar1 - iVar4;
        iVar2 = iVar7;
      } while (iVar7 < (int)(uVar3 - 1));
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_80086084(uVar1 << 0xc,((int)uVar1 >> 0x1f) << 0xc | uVar1 >> 0x14,iVar4,
                           iVar4 >> 0x1f);
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xfff < iVar4) {
      iVar4 = 0x1000;
    }
    FUN_overlay0__80011088(param_2,param_1 + iVar2 * 0x10 + 8,iVar2 * 0x10 + param_1 + 0x18,iVar4);
  }
  return;
}

void FUN_overlay0__80011a58(int param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar5 = 0;
  uVar4 = (uint)*(ushort *)(param_1 + 2);
  iVar6 = 0;
  iVar7 = param_1;
  if (uVar4 != 0) {
    do {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + *(int *)(iVar7 + 4);
      iVar7 = iVar7 + 0x38;
    } while (iVar6 < (int)uVar4);
  }
  if ((iVar5 == 0) || (uVar4 < 2)) {
    iVar7 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x10);
    *param_2 = *(int *)(param_1 + 8);
    param_2[1] = iVar7;
    param_2[2] = iVar5;
  }
  else {
    iVar6 = 0;
    uVar3 = (uint)((longlong)iVar5 * (longlong)DAT_800a8d6c) >> 0xc |
            (int)((ulonglong)((longlong)iVar5 * (longlong)DAT_800a8d6c) >> 0x20) << 0x14;
    iVar7 = param_1;
    if (uVar4 != 0) {
      do {
        iVar5 = *(int *)(iVar7 + 4);
        if ((int)uVar3 < iVar5) break;
        uVar3 = uVar3 - iVar5;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x38;
      } while (iVar6 < (int)uVar4);
    }
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_80086084(uVar3 << 0xc,((int)uVar3 >> 0x1f) << 0xc | uVar3 >> 0x14,iVar5,
                           iVar5 >> 0x1f);
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (0xfff < iVar7) {
      iVar7 = 0x1000;
    }
    iVar7 = iVar7 << 0xc;
    uVar4 = (uint)((longlong)iVar7 * (longlong)iVar7) >> 0x18 |
            (int)((ulonglong)((longlong)iVar7 * (longlong)iVar7) >> 0x20) << 8;
    param_1 = param_1 + iVar6 * 0x38 + 4;
    uVar3 = (uint)((longlong)(int)uVar4 * (longlong)iVar7) >> 0x18 |
            (int)((ulonglong)((longlong)(int)uVar4 * (longlong)iVar7) >> 0x20) << 8;
    uVar2 = ((longlong)*(int *)(param_1 + 0x14) * (longlong)(int)uVar3 >> 0x18) +
            ((longlong)*(int *)(param_1 + 0x18) * (longlong)(int)uVar4 >> 0x18) +
            ((longlong)*(int *)(param_1 + 0x1c) * (longlong)iVar7 >> 0x18);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x10) * (uVar2 & 0xffffffff);
    *param_2 = *(int *)(param_1 + 4) +
               ((uint)lVar1 >> 0x18 |
               ((int)((ulonglong)lVar1 >> 0x20) + *(uint *)(param_1 + 0x10) * (int)(uVar2 >> 0x20))
               * 0x100);
    uVar2 = ((longlong)*(int *)(param_1 + 0x20) * (longlong)(int)uVar3 >> 0x18) +
            ((longlong)*(int *)(param_1 + 0x24) * (longlong)(int)uVar4 >> 0x18) +
            ((longlong)*(int *)(param_1 + 0x28) * (longlong)iVar7 >> 0x18);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x10) * (uVar2 & 0xffffffff);
    param_2[1] = *(int *)(param_1 + 8) +
                 ((uint)lVar1 >> 0x18 |
                 ((int)((ulonglong)lVar1 >> 0x20) + *(uint *)(param_1 + 0x10) * (int)(uVar2 >> 0x20)
                 ) * 0x100);
    uVar2 = ((longlong)*(int *)(param_1 + 0x2c) * (longlong)(int)uVar3 >> 0x18) +
            ((longlong)*(int *)(param_1 + 0x30) * (longlong)(int)uVar4 >> 0x18) +
            ((longlong)*(int *)(param_1 + 0x34) * (longlong)iVar7 >> 0x18);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x10) * (uVar2 & 0xffffffff);
    param_2[2] = *(int *)(param_1 + 0xc) +
                 ((uint)lVar1 >> 0x18 |
                 ((int)((ulonglong)lVar1 >> 0x20) + *(uint *)(param_1 + 0x10) * (int)(uVar2 >> 0x20)
                 ) * 0x100);
  }
  return;
}

undefined4 * FUN_overlay0__80011ec8(undefined4 *param_1)

{
  FUN_overlay0__800157a8();
  *param_1 = &LAB_overlay0__8002eec0;
  return param_1;
}

void FUN_overlay0__80011efc(undefined4 *param_1)

{
  *param_1 = &LAB_overlay0__8002eec0;
  FUN_overlay0__800157fc();
  return;
}

void FUN_overlay0__80011f24(undefined4 param_1)

{
  undefined auStack_300 [760];

  FUN_overlay0__80011ec8(auStack_300);
  FUN_overlay0__80015824(auStack_300,param_1);
  FUN_overlay0__80011efc(auStack_300,2);
  return;
}

undefined * FUN_overlay0__800122c4(void)

{
  return &DAT_800a93f8;
}

undefined4 * FUN_overlay0__800122d0(void)

{
  return &DAT_801d5f88 + DAT_801d5f86 * 0x43f;
}

undefined4 * FUN_overlay0__80012304(void)

{
  if (DAT_800a951c != '\0') {
    return &DAT_801d5f88 + DAT_800a96a8 * 0x43f;
  }
  return &DAT_801da4a0;
}

undefined * FUN_overlay0__80012360(void)

{
  return &DAT_800a90b2;
}

undefined4 * FUN_overlay0__8001236c(void)

{
  return &DAT_800a8d70;
}

bool FUN_overlay0__80012378(void)

{
  return DAT_801d5866 == '\x06';
}

void FUN_overlay0__8001239c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  puVar1 = &DAT_800a96b4;
  do {
    puVar3 = param_1;
    puVar2 = puVar1;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar1 = puVar2 + 4;
    param_1 = puVar3 + 4;
  } while (puVar2 + 4 != (undefined4 *)&UNK_800a9b04);
  uVar4 = puVar2[5];
  uVar5 = puVar2[6];
  puVar3[4] = _UNK_800a9b04;
  puVar3[5] = uVar4;
  puVar3[6] = uVar5;
  FUN_overlay0__80031440();
  return;
}

void FUN_overlay0__80012410(void)

{
  undefined4 uVar1;

  uVar1 = FUN_overlay0__800122c4();
  FUN_overlay0__8003fe4c(uVar1);
  if ((DAT_overlay0__8002f4b4 == 0) && (DAT_overlay0__8002f4b4 = 1, DAT_800a951c == '\0')) {
    uVar1 = FUN_overlay0__80012304();
    FUN_overlay0__8003fe14(uVar1);
    uVar1 = FUN_overlay0__80012360();
    FUN_overlay0__8003fde0(uVar1);
    uVar1 = FUN_overlay0__800122d0();
    FUN_overlay0__8003fe14(uVar1);
    uVar1 = FUN_overlay0__8001236c();
    FUN_overlay0__8003fde0(uVar1);
  }
  return;
}

void FUN_overlay0__800124b0(void)

{
  int iVar1;

  FUN_overlay0__800163b8(DAT_800aa1e4,1,0x1000);
  iVar1 = FUN_overlay0__80012360();
  *(undefined2 *)(iVar1 + 2) = 0;
  return;
}

void FUN_overlay0__800124e8(void)

{
  int iVar1;
  undefined auStack_18 [16];

  FUN_overlay0__80014074(&DAT_800aa1c8,auStack_18);
  iVar1 = FUN_overlay0__80012360();
  *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 1;
  return;
}

bool FUN_overlay0__8001252c(void)

{
  if (DAT_800a951c != '\0') {
    return false;
  }
  if (DAT_800aa1e4 != 0) {
    return *(short *)(DAT_800aa1e4 + 0xc) != 0;
  }
  return true;
}

int FUN_overlay0__80012570(void)

{
  int iVar1;
  int iVar2;

  iVar2 = DAT_801d5f86 + 1;
  if (iVar2 == 4) {
    iVar2 = 0;
  }
  iVar1 = DAT_801d5f84 + 1;
  if (3 < iVar1) {
    iVar1 = 4;
  }
  DAT_801d5f86 = (short)iVar2;
  DAT_801d5f84 = (short)iVar1;
  return iVar2;
}

void FUN_overlay0__800125bc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_43f0 [4348];

  iVar10 = (int)DAT_801d5f84;
  iVar7 = (int)DAT_801d5f86;
  puVar9 = local_43f0;
  puVar4 = local_43f0;
  if (3 < iVar10) {
    iVar8 = 0;
    if (0 < iVar10) {
      puVar6 = &DAT_801d5e88 + iVar7 * 0x87e;
      do {
        puVar2 = (undefined4 *)(puVar6 + 0x80);
        puVar1 = puVar9;
        do {
          puVar5 = puVar1;
          puVar3 = puVar2;
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar13 = puVar3[3];
          *puVar5 = *puVar3;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          puVar2 = puVar3 + 4;
          puVar1 = puVar5 + 4;
        } while (puVar2 != (undefined4 *)(puVar6 + 0x8f8));
        uVar11 = puVar3[5];
        uVar12 = puVar3[6];
        puVar5[4] = *puVar2;
        puVar5[5] = uVar11;
        puVar5[6] = uVar12;
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 0x87e;
        if (3 < iVar7) {
          iVar7 = 0;
          puVar6 = &DAT_801d5e88;
        }
        iVar8 = iVar8 + 1;
        puVar9 = puVar9 + 0x43f;
      } while (iVar8 < iVar10);
    }
    puVar9 = &DAT_801d5f88;
    iVar7 = 3;
    do {
      puVar2 = puVar4;
      puVar1 = puVar9;
      do {
        puVar5 = puVar1;
        puVar3 = puVar2;
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        *puVar5 = *puVar3;
        puVar5[1] = uVar11;
        puVar5[2] = uVar12;
        puVar5[3] = uVar13;
        puVar2 = puVar3 + 4;
        puVar1 = puVar5 + 4;
      } while (puVar2 != puVar4 + 0x43c);
      uVar11 = puVar3[5];
      uVar12 = puVar3[6];
      puVar5[4] = *puVar2;
      puVar5[5] = uVar11;
      puVar5[6] = uVar12;
      puVar9 = puVar9 + 0x43f;
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 0x43f;
    } while (iVar7 != -1);
    DAT_801d5f86 = 0;
  }
  if (DAT_overlay0__8002f4b0 != '\0') {
    DAT_overlay0__8002f4b1 = 1;
    puVar9 = &DAT_800aa1c8;
    puVar4 = &DAT_800a9688;
    do {
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      *puVar9 = *puVar4;
      puVar9[1] = uVar11;
      puVar9[2] = uVar12;
      puVar9[3] = uVar13;
      puVar4 = puVar4 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar4 != &DAT_800aa1c8);
    puVar9 = &DAT_801d5988;
    puVar4 = &DAT_801d58b8;
    DAT_800a9508 = DAT_800a9504;
    do {
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      *puVar9 = *puVar4;
      puVar9[1] = uVar11;
      puVar9[2] = uVar12;
      puVar9[3] = uVar13;
      puVar4 = puVar4 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar4 != &DAT_801d5988);
    DAT_801d5a16 = 2;
    puVar4 = &DAT_801dea7a;
    puVar9 = &DAT_801de8ba;
    do {
      uVar11 = puVar9[1];
      uVar12 = puVar9[2];
      uVar13 = puVar9[3];
      *puVar4 = *puVar9;
      puVar4[1] = uVar11;
      puVar4[2] = uVar12;
      puVar4[3] = uVar13;
      puVar9 = puVar9 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar9 != &DAT_801dea7a);
  }
  return;
}

void FUN_overlay0__8001286c
               (int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;

  if (*(char *)(param_1 + 0x45c) != '\0') {
    return;
  }
  if (DAT_800a951c != '\0') {
    return;
  }
  FUN_overlay0__800167d0(DAT_800a96a4,0);
  if (param_2 == 0x405f7dfd) goto LAB_overlay0__80012c24;
  bVar1 = false;
  uVar11 = param_2 / 3 - *(int *)(param_1 + 0x780);
  if (param_5 == 0) {
    if (DAT_800aa1d4._2_1_ != '\0') {
      iVar2 = FUN_overlay0__80012304();
      bVar1 = false;
      if (*(uint *)(iVar2 + 4) <= uVar11) goto LAB_overlay0__80012948;
    }
    bVar1 = true;
  }
LAB_overlay0__80012948:

  if (bVar1) {
    DAT_overlay0__8002f4b0 = 1;
    iVar2 = FUN_overlay0__800122d0();
    *(uint *)(iVar2 + 4) = uVar11;
    puVar4 = &DAT_801d58b8;
    puVar7 = &DAT_801d5988;

    do {
      puVar3 = puVar7;
      puVar5 = puVar4;
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar8 = puVar5[3];
      *puVar3 = *puVar5;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar8;
      puVar4 = puVar5 + 4;
      puVar7 = puVar3 + 4;
    } while (puVar5 + 4 != (undefined4 *)&DAT_801d5938);
    uVar8 = puVar5[5];
    uVar9 = puVar5[6];
    puVar3[4] = _DAT_801d5938;
    puVar3[5] = uVar8;
    puVar3[6] = uVar9;
    puVar7 = &DAT_801dea7a;
    puVar4 = &DAT_801de8ba;

    do {
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar8 = puVar4[3];
      *puVar7 = *puVar4;
      puVar7[1] = uVar9;
      puVar7[2] = uVar10;
      puVar7[3] = uVar8;
      puVar4 = puVar4 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar4 != &DAT_801dea7a);
    puVar4 = (undefined4 *)FUN_overlay0__80012304();
    puVar7 = (undefined4 *)FUN_overlay0__800122d0();
    puVar5 = puVar7 + 0x38;

    do {
      uVar9 = puVar7[1];
      uVar10 = puVar7[2];
      uVar8 = puVar7[3];
      *puVar4 = *puVar7;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar8;
      puVar7 = puVar7 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar7 != puVar5);
    puVar4 = (undefined4 *)FUN_overlay0__80012360();
    puVar7 = (undefined4 *)FUN_overlay0__8001236c();
    puVar5 = puVar7 + 0xd0;

    if ((((uint)puVar7 | (uint)puVar4) & 3) == 0) {

      do {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        uVar8 = puVar7[3];
        *puVar4 = *puVar7;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar8;
        puVar7 = puVar7 + 4;
        puVar4 = puVar4 + 4;
      } while (puVar7 != puVar5);
    }
    else {

      do {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        uVar8 = puVar7[3];
        *puVar4 = *puVar7;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar8;
        puVar7 = puVar7 + 4;
        puVar4 = puVar4 + 4;
      } while (puVar7 != puVar5);
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar7;
    puVar5 = DAT_800a96a4 + 0x404;
    puVar4 = DAT_800a96a4;
    puVar7 = DAT_800aa1e4;

    do {
      puVar6 = puVar7;
      puVar3 = puVar4;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar8 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar9;
      puVar6[2] = uVar10;
      puVar6[3] = uVar8;
      puVar4 = puVar3 + 4;
      puVar7 = puVar6 + 4;
    } while (puVar4 != puVar5);
    uVar8 = puVar3[5];
    uVar9 = puVar3[6];
    puVar6[4] = *puVar4;
    puVar6[5] = uVar8;
    puVar6[6] = uVar9;
    FUN_overlay0__8001239c(&DAT_800aa1f4);
    FUN_overlay0__80014674(&DAT_800aa1c8);
    puVar7 = &DAT_800aa98c;
    iVar2 = 3;
    puVar4 = &DAT_800a9e4c;
    DAT_800aaa40 = DAT_800a9f00;

    do {
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar8 = puVar4[3];
      *puVar7 = *puVar4;
      puVar7[1] = uVar9;
      puVar7[2] = uVar10;
      puVar7[3] = uVar8;
      puVar7 = puVar7 + 4;
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar2 != -1);
    DAT_800aa1d4._2_1_ = '\x01';
    DAT_800aa1d4._3_1_ = 0;
    FUN_overlay0__800145f4(&DAT_800aa1c8);
  }
LAB_overlay0__80012c24:
  if (param_6 != 0) {
    if (DAT_800aa1d4._2_1_ != '\0') {
      FUN_overlay0__8003f724(&DAT_800aa1f4,(int)*(short *)(param_1 + 0x608),(int)(short)param_3);
    }
    iVar2 = FUN_overlay0__80012570();
    DAT_800a96a4 = (undefined4 *)(&DAT_801d6068 + iVar2 * 0x10fc);
    FUN_overlay0__800163b8(DAT_800a96a4,0,0x1000);
    FUN_overlay0__8003f5e0(param_1,param_3,param_4);
  }

  return;
}

void FUN_overlay0__80012cd4(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined2 local_res4;
  undefined4 local_38;
  uint local_30;

  iVar5 = param_2 * 0xd0;
  uVar6 = FUN_overlay0__80028288(DAT_800b4a44,&DAT_800b4a8c);
  iVar12 = (int)DAT_801d5860._2_1_;
  FUN_8008ce30(param_1,0,0xb40);
  bVar4 = false;
  *(undefined *)(param_1 + 0xe) = 1;
  iVar11 = param_1 + 0x81c;
  cVar1 = *(char *)(param_3 + 0x2d);
  local_res4 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0xc) = local_res4;
  *(bool *)(param_1 + 0x10) = cVar1 != '\0';
  *(undefined4 *)(param_1 + 0x878) = (&DAT_800a9504)[param_2];
  FUN_8007af60(iVar11);
  uVar9 = (uint)(byte)(&DAT_801d5945)[iVar5];
  iVar7 = FUN_overlay0__80012378();
  if (iVar7 != 0) {
    iVar7 = FUN_80060e94(DAT_800af230);
    bVar4 = (*(ushort *)(iVar7 + 8) & 0x20) == 0;
  }
  if (bVar4) {
    uVar9 = 2;
  }
  FUN_8007b050(iVar11,&DAT_800b4a8c + uVar9 * 0xc);
  uVar9 = DAT_800b4a88;
  uVar10 = 0;
  local_38 = 0;
  local_30 = 0;
  iVar7 = 0;
  FUN_8007b14c(iVar11,DAT_800b4a88);
  FUN_overlay0__80017e74(param_1,param_3);
  uVar6 = FUN_overlay0__80028394(DAT_800b4a44,uVar6,param_1 + 0x830);
  bVar2 = (&DAT_801d5946)[iVar5];
  uVar3 = (&DAT_801d5947)[iVar5];
  if (bVar2 == 3) {
    iVar11 = FUN_overlay0__80012378();
    if (iVar11 == 0) {
      *(undefined2 **)(param_1 + 0x1c) = &DAT_801d5f84;
      FUN_overlay0__800163b8(&DAT_801d5f84,DAT_800a951c != '\0',0x4400);
    }
    else {
      FUN_overlay0__80013244(param_1);
      if (DAT_800a951c != '\0') {
        uVar10 = 2;
      }
    }
    *(undefined2 *)(param_1 + 0x18) = 2;
    if ((iVar12 != 0) && (iVar7 = 1, 0 < iVar12)) {
      iVar7 = iVar12 * 10;
    }
    local_30 = (uint)DAT_801d58b4;
  }
  else {
    if (bVar2 < 4) {
      if (bVar2 == 2) {
        DAT_overlay0__8002f4b0 = 0;
        iVar11 = FUN_overlay0__80012378();
        if (iVar11 == 0) {
          *(undefined4 **)(param_1 + 0x1c) = &DAT_801da49c;
          FUN_overlay0__800163b8(&DAT_801da49c,1,0x4400);
          uVar10 = 1;
        }
        else {
          puVar8 = &DAT_801d6068 + *(short *)(param_1 + 0xc) * 0x4518;
          *(undefined **)(param_1 + 0x1c) = puVar8;
          if ((&DAT_801d5944)[iVar5] == '\0') {
            *(undefined4 *)(param_1 + 0x878) = DAT_800a9f00;
            FUN_overlay0__800163b8(puVar8,0,0x1000);
            FUN_overlay0__800167d0(puVar8,0);
            *(undefined *)(param_1 + 0xe) = 0;
          }
          *(undefined *)(param_1 + 0xf) = 1;
          FUN_overlay0__800163b8(puVar8,1,0x1000);
          uVar10 = 2;
        }
        *(undefined2 *)(param_1 + 0x18) = 1;
        goto LAB_overlay0__8001303c;
      }
      *(undefined2 *)(param_1 + 0x18) = 0;
    }
    else {
      if (bVar2 == 4) {
        *(undefined4 **)(param_1 + 0x1c) = &DAT_801da49c;
        FUN_overlay0__800163b8(&DAT_801da49c,DAT_800a951c != '\0',0x4400);
        *(undefined2 *)(param_1 + 0x18) = 3;
        if ((iVar12 != 0) && (iVar7 = 1, iVar12 < 0)) {
          iVar7 = iVar12 * -10;
        }
        goto LAB_overlay0__8001303c;
      }
      *(undefined2 *)(param_1 + 0x18) = 0;
    }
    local_38 = 2;
  }
LAB_overlay0__8001303c:
  if (DAT_801d5866 != '\0') {
    iVar7 = 0;
  }
  FUN_overlay0__80033384
            (param_1 + 0x2c,param_3,uVar6,*(int *)(param_1 + 0x830) >> 4,
             -*(int *)(param_1 + 0x838) >> 4,(int)(short)(&DAT_80093150)[uVar9 & 0xfff],
             (int)(short)(&DAT_80093150)[(uVar9 & 0xfff) + 0x400],local_38,uVar3,uVar10,0,param_2,
             -iVar7);
  iVar7 = FUN_overlay0__80012378();
  if (((iVar7 != 0) && ((&DAT_801d5946)[iVar5] != '\x02')) && ((&DAT_801d5946)[iVar5] == '\x03')) {
    if (DAT_800a951c == '\0') {
      FUN_overlay0__8003f6b8(param_1 + 0x2c);
    }
    else {
      DAT_overlay0__8002f4b8 = 1;
    }
  }
  *(uint *)(param_1 + 0x684) =
       (uint)((longlong)(int)local_30 * 600000) >> 0xc |
       (int)((ulonglong)((longlong)(int)local_30 * 600000) >> 0x20) << 0x14;
  FUN_overlay0__80017fa0(param_1);
  FUN_overlay0__800145f4(param_1);
  FUN_overlay0__800133f0(param_1);
  return;
}

void FUN_overlay0__800131ac(int param_1)

{
  short sVar1;

  FUN_overlay0__80014674();
  sVar1 = *(short *)(param_1 + 0x18);
  if (sVar1 != 1) {
    FUN_overlay0__800167d0(*(undefined4 *)(param_1 + 0x1c),DAT_800a951c != '\0');
    sVar1 = *(short *)(param_1 + 0x18);
  }
  if ((sVar1 == 2) && (DAT_800a951c == '\0')) {
    DAT_801de8b8 = (undefined2)((*(int *)(param_1 + 0x684) << 0xc) / 600000);
  }
  return;
}

void FUN_overlay0__80013244(int param_1)

{
  int iVar1;

  iVar1 = (int)*(short *)(param_1 + 0xc);
  if (DAT_800a951c == '\0') {
    (&DAT_801d5f84)[iVar1 * 0x228c] = 0;
    (&DAT_801d5f86)[iVar1 * 0x228c] = 0;
  }
  else {
    *(undefined *)(param_1 + 0x20) = 0;
  }
  *(undefined **)(param_1 + 0x1c) = &DAT_801d6068 + iVar1 * 0x4518;
  FUN_overlay0__800163b8(&DAT_801d6068 + iVar1 * 0x4518,DAT_800a951c != '\0',0x1000);
  return;
}

bool FUN_overlay0__800132d0(int param_1,int param_2)

{
  short sVar1;

  sVar1 = (&DAT_801d5f84)[*(short *)(param_1 + 0xc) * 0x228c];
  if (sVar1 > param_2) {
    *(char *)(param_1 + 0x20) = (char)param_2;
    *(undefined **)(param_1 + 0x1c) =
         &DAT_801d6068 + param_2 * 0x10fc + *(short *)(param_1 + 0xc) * 0x4518;
    FUN_overlay0__800163b8
              (&DAT_801d6068 + param_2 * 0x10fc + *(short *)(param_1 + 0xc) * 0x4518,1,0x1000);
  }
  return sVar1 <= param_2;
}

void FUN_overlay0__8001336c(undefined2 *param_1,int *param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;

  iVar6 = param_2[2];
  *(int *)(param_1 + 10) = *param_2 << 4;
  iVar5 = param_2[1];
  *(int *)(param_1 + 0xc) = iVar6 << 4;
  *(int *)(param_1 + 0xe) = iVar5 * -0x10;
  uVar1 = *(undefined2 *)(param_2 + 6);
  *param_1 = *(undefined2 *)(param_2 + 5);
  sVar2 = *(short *)((int)param_2 + 0x16);
  param_1[3] = uVar1;
  uVar1 = *(undefined2 *)(param_2 + 7);
  param_1[6] = -sVar2;
  uVar3 = *(undefined2 *)(param_2 + 8);
  param_1[1] = uVar1;
  sVar2 = *(short *)((int)param_2 + 0x1e);
  param_1[4] = uVar3;
  sVar4 = *(short *)(param_2 + 3);
  param_1[7] = -sVar2;
  sVar2 = *(short *)(param_2 + 4);
  param_1[2] = -sVar4;
  uVar1 = *(undefined2 *)((int)param_2 + 0xe);
  param_1[5] = -sVar2;
  param_1[8] = uVar1;
  return;
}

void FUN_overlay0__800133f0(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_80;
  int local_7c;
  int local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined auStack_68 [20];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined auStack_48 [20];
  int local_34;
  int local_30;
  int local_2c;

  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
  }

  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x62c);
  *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_1 + 0x830);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x834);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x838);

  FUN_overlay0__8001336c(param_1 + 0x81c,param_1 + 0x688);
  FUN_overlay0__8001336c(param_1 + 0x83c,param_1 + 0x6ac);

  *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x830) - *(int *)(param_1 + 0x85c);
  *(int *)(param_1 + 0x86c) = *(int *)(param_1 + 0x834) - *(int *)(param_1 + 0x860);
  *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x838) - *(int *)(param_1 + 0x864);

  local_70 = 0;
  local_6e = 0;
  local_6c = *(undefined2 *)(param_1 + 0x5a);

  FUN_800814b4(&local_80,param_1 + 0x81c,&local_70);

  *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + (local_80 >> 8);
  *(int *)(param_1 + 0x834) = *(int *)(param_1 + 0x834) + (local_7c >> 8);
  *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + (local_78 >> 8);

  *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + (local_80 >> 8);
  *(int *)(param_1 + 0x854) = *(int *)(param_1 + 0x854) + (local_7c >> 8);
  *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + (local_78 >> 8);

  iVar5 = param_1;
  iVar6 = param_1;

  for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
    sVar2 = *(short *)(iVar6 + 0x49c);
    sVar3 = *(short *)(param_1 + (iVar7 >> 1) * 0x34 + 0x160);
    *(undefined4 *)(iVar5 + 0x7c4) = *(undefined4 *)(iVar5 + 0x7cc);
    *(undefined4 *)(iVar5 + 0x7c8) = *(undefined4 *)(iVar5 + 2000);
    *(short *)(iVar5 + 0x7c6) = sVar3 - sVar2;

    if ((*(char *)(iVar6 + 0x4a8) < '\0') &&
       (iVar4 = FUN_overlay0__800168a4(&DAT_800ada0c,0), iVar4 != 0)) {
      FUN_8007afc0(auStack_68,param_1 + 0x81c);
      FUN_8007af60(auStack_48);
      local_34 = (int)*(short *)(iVar5 + 0x7c4) << 4;
      local_30 = (int)*(short *)(iVar5 + 0x7c6) << 4;
      local_2c = (int)*(short *)(iVar5 + 0x7c8) << 4;
      FUN_8007b008(auStack_68,auStack_48);
      *(undefined4 *)(iVar4 + 0xc) = local_54;
      *(undefined4 *)(iVar4 + 0x10) = local_50;
      *(undefined4 *)(iVar4 + 0x14) = local_4c;
      *(ushort *)(iVar4 + 8) = (ushort)local_4c ^ (ushort)local_54 ^ (ushort)local_50;
      bVar1 = *(byte *)(iVar6 + 0x4a8);
      *(undefined2 *)(iVar4 + 4) = 0;
      *(ushort *)(iVar4 + 6) = (ushort)bVar1 << 4;
    }
    iVar5 = iVar5 + 0x10;
    iVar6 = iVar6 + 0x68;
  }

  if (((DAT_800a951c == '\0') && (*(short *)(param_1 + 0x18) < 4)) &&
     (1 < *(short *)(param_1 + 0x18))) {
    sVar2 = *(short *)(param_1 + 0xc);
    iVar5 = sVar2 * 0xb0;
    *(undefined2 *)(&DAT_800a9588 + iVar5) = 2;

    if (((&DAT_801c9916)[sVar2 * 0x52] == '\0') && (*(int *)(param_1 + 0x24) == 0)) {
      *(undefined2 *)(&DAT_800a9582 + iVar5) = *(undefined2 *)(param_1 + 0x78c);
      *(ushort *)(&DAT_800a9584 + iVar5) = (ushort)*(byte *)(param_1 + 0x78e) << 4;
      *(ushort *)(&DAT_800a9586 + iVar5) = (ushort)*(byte *)(param_1 + 0x78f) << 4;
    }
    else {

      *(undefined2 *)(&DAT_800a9582 + iVar5) = 0;
      *(undefined2 *)(&DAT_800a9584 + iVar5) = 0;
      *(undefined2 *)(&DAT_800a9586 + iVar5) = 0;
    }
  }
  return;
}

void FUN_overlay0__8001374c(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined2 *puVar3;

  puVar3 = &DAT_801d5e88;

  if (*(short *)(param_1 + 0x18) != 2) {
    if (*(short *)(param_1 + 0x18) != 3) goto LAB_overlay0__800137a4;
    puVar3 = &DAT_801da3a0;
  }

  if (DAT_800a951c == '\0') {
    *(undefined4 *)(puVar3 + param_2 * 2 + 0x74) = param_3;
  }
LAB_overlay0__800137a4:
  puVar2 = (&PTR_DAT_overlay0__8002f4bc)[param_2];
  *(undefined2 *)(param_1 + 0xa8e) = 0x78;
  *(undefined4 *)(param_1 + 0xa94) = param_3;
  *(undefined **)(param_1 + 0xa98) = puVar2;
  piVar1 = DAT_800a9524;

  if (DAT_801d5866 == '\x06') {
    *(undefined4 *)(param_1 + 0xa9c) = 0xffffffff;
    if (*piVar1 != -1) {
      *(int *)(param_1 + 0xa9c) = piVar1[param_2 + 1];
    }
    *(undefined2 *)(param_1 + 0xa90) = 0x78;
    *(undefined4 *)(param_1 + 0xaa0) = param_3;
  }
  return;
}

void FUN_overlay0__80013824
               (int param_1,uint param_2,uint param_3,undefined4 param_4,undefined2 param_5)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  ushort uVar13;
  short local_40 [8];
  undefined2 local_30;

  bVar4 = DAT_801d5866;
  uVar13 = 0;
  local_30 = param_5;
  uVar5 = FUN_80060eb4(DAT_801d589c);
  iVar6 = FUN_80060e94(uVar5);

  if (bVar4 == 6) {
LAB_overlay0__800138c8:
    if (0x3e6 < (int)param_2) {
      return;
    }
    uVar13 = *(ushort *)(iVar6 + 8) >> 5 & 1;
  }
  else {

    if (bVar4 < 7) {
      if (bVar4 == 1) goto LAB_overlay0__800138c8;
    }
    else if (bVar4 == 10) goto LAB_overlay0__800138c8;
    uVar8 = (uint)DAT_801d586b;
    bVar2 = (int)uVar8 < (int)param_2;
    if (uVar8 == 0) {
      uVar8 = 100;
      bVar2 = 100 < (int)param_2;
    }
    if (bVar2) {
      return;
    }

    if ((param_2 == uVar8) || (iVar6 = FUN_overlay0__8003d138(), iVar6 != 0)) {
      uVar13 = 1;
    }
    if (uVar13 != 0) {
      FUN_overlay0__80036acc(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x24) = param_4;
    }
  }
  puVar3 = DAT_800a9524;
  psVar12 = &DAT_801d5e88;

  if (*(short *)(param_1 + 0x18) != 2) {
    if (*(short *)(param_1 + 0x18) != 3) goto LAB_overlay0__80013c18;
    psVar12 = &DAT_801da3a0;
  }

  if (DAT_800a951c == '\0') {
    FUN_8005e3c4(psVar12,param_2,param_3,local_30,*(char *)(param_1 + 0xa8c) != '\0');

    if (DAT_801d5866 == 6) {
      *(undefined4 *)(param_1 + 0xa9c) = 0xffffffff;
      if (*puVar3 != 0xffffffff) {
        *(uint *)(param_1 + 0xa9c) = *puVar3;
      }
      *(undefined2 *)(param_1 + 0xa90) = 0x78;
      *(uint *)(param_1 + 0xaa0) = param_3;
    }

    if (((*(char *)(param_1 + 0xa8c) == '\0') && (*puVar3 == 0xffffffff || param_3 < *puVar3)) &&
       (DAT_801d5866 == 6)) {
      puVar7 = (uint *)(psVar12 + (psVar12[2] + -1) * 10 + 4);
      uVar10 = puVar7[1];
      uVar11 = puVar7[2];
      uVar8 = puVar7[3];
      *puVar3 = *puVar7;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar8;
      puVar3[4] = puVar7[4];
      DAT_801d5de9 = 1;
    }

    if (uVar13 != 0) {
      DAT_801d5de8 = *(undefined *)(param_1 + 0x77c);
      cVar1 = *(char *)(param_1 + 0x77c);
      *(undefined4 *)(psVar12 + 0x7c) = param_4;
      *psVar12 = (short)cVar1;
      FUN_overlay0__8002a6f8(&DAT_800af226);

      if ((bVar4 == 2) || (bVar4 == 0xb)) {
        psVar12 = local_40;

        for (iVar6 = 0; iVar6 < 6; iVar6 = iVar6 + 1) {
          *psVar12 = -1;
          psVar12 = psVar12 + 1;
          (&DAT_801d5e82)[iVar6] = 0;
        }
        iVar9 = 0x184;

        for (iVar6 = 0; iVar6 < (int)(uint)DAT_801d58b6; iVar6 = iVar6 + 1) {
          if ((int)(char)(&UNK_800a9c80)[iVar9] - 1U < 6) {
            local_40[(int)(char)(&UNK_800a9c80)[iVar9] - 1U] = (short)iVar6;
          }
          iVar9 = iVar9 + 0xb40;
        }
        psVar12 = local_40;

        for (iVar6 = 0; iVar6 < 6; iVar6 = iVar6 + 1) {
          if (-1 < *psVar12) {
            (&DAT_801d5e82)[*psVar12] = (&DAT_overlay0__8002f4cc)[iVar6];
          }
          psVar12 = psVar12 + 1;
        }
        FUN_8005e67c();
      }
    }
  }
  else {

    *(undefined4 *)(param_1 + 0xa9c) = 0xffffffff;
    if (*puVar3 != 0xffffffff) {
      *(uint *)(param_1 + 0xa9c) = *puVar3;
    }
  }
LAB_overlay0__80013c18:
  *(undefined2 *)(param_1 + 0xa8e) = 0x78;
  *(uint *)(param_1 + 0xa94) = param_3;
  *(undefined4 **)(param_1 + 0xa98) = &DAT_801c6c64;

  if (((uVar13 != 0) && (*(short *)(param_1 + 0x18) < 4)) && (1 < *(short *)(param_1 + 0x18))) {
    FUN_overlay0__80029c84(DAT_overlay0__8002f4f4);
  }

  return;
}

uint FUN_overlay0__80013c90(int param_1,int param_2,ushort *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  uint local_30;

  FUN_8008ce30(&local_38,0,5);
  local_30 = 0;

  if (param_4 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = *(ushort *)(param_2 + 0x9c);
    uVar7 = *(uint *)(param_2 + 0x8c);
    bVar1 = (uVar3 & 1) != 0;
    uVar8 = 0;
    if (bVar1) {
      uVar5 = *(ushort *)(param_2 + 0x9e);
    }
    uVar4 = (ushort)bVar1;

    if ((uVar3 & 4) != 0) {
      uVar4 = uVar4 | 2;
      uVar6 = (int)(uint)*(ushort *)(param_2 + 0xa2) >> 4;
    }

    if ((uVar3 & 8) != 0) {
      uVar4 = uVar4 | 4;
      uVar8 = (int)(uint)*(ushort *)(param_2 + 0xa4) >> 4;
    }

    if ((uVar7 & 0x400) != 0) {
      uVar4 = uVar4 | 8;
    }
    local_38 = (byte)uVar4;
    local_37 = (byte)uVar7;
    local_36 = (byte)uVar5;
    local_35 = (byte)uVar6;
    local_34 = (byte)uVar8;
    uVar3 = 300;

    if (DAT_801d5866 == '\x03') {
      uVar3 = 0x3c;
    }

    if (DAT_800a9522 < uVar3) {
      FUN_overlay0__800166cc(*(undefined4 *)(param_1 + 0x1c),&local_38);
      *param_3 = uVar4;
    }
    else {
      FUN_overlay0__800167d0(*(undefined4 *)(param_1 + 0x1c),0);
      *param_3 = uVar4;
    }
  }
  else {

    FUN_overlay0__80016428(*(undefined4 *)(param_1 + 0x1c),&local_38);
    uVar4 = (ushort)local_38;
    uVar7 = (uint)local_37;
    uVar5 = (ushort)local_36;
    uVar6 = (uint)local_35;
    uVar8 = (uint)local_34;

    if (*(int *)(param_1 + 0x1c) == 0) {
      local_30 = 1;
    }
    else {
      local_30 = (uint)(*(short *)(*(int *)(param_1 + 0x1c) + 0xc) != 0);
    }
    *param_3 = (ushort)local_38;
  }

  if ((uVar4 & 1) == 0) {
    uVar5 = ((ushort)uVar7 & 1) * 2;
    if ((uVar7 & 2) != 0) {
      uVar5 = uVar5 - 2;
    }
  }
  else {
    uVar5 = (0x80 - uVar5) * 0x20;
  }
  param_3[1] = uVar5;

  if ((uVar4 & 2) == 0) {
    uVar5 = (ushort)((uVar7 & 4) != 0);
  }
  else {
    uVar5 = *(ushort *)(&DAT_overlay0__8002f4d4 + uVar6 * 2);
  }
  param_3[3] = uVar5;

  if ((uVar4 & 4) == 0) {
    uVar5 = (ushort)((uVar7 & 8) != 0);
  }
  else {
    uVar5 = *(ushort *)(&DAT_overlay0__8002f4d4 + uVar8 * 2);
  }
  cVar2 = (uVar7 & 0x40) != 0;
  *(bool *)(param_3 + 5) = (uVar7 & 0x10) != 0;
  *(bool *)((int)param_3 + 9) = (uVar7 & 0x20) != 0;
  param_3[2] = uVar5;

  if ((uVar7 & 0x80) != 0) {
    cVar2 = cVar2 + -1;
  }
  *(char *)(param_3 + 4) = cVar2;
  return local_30;
}

void FUN_overlay0__80013ef0(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar6 = 1;
  bVar2 = false;
  cVar1 = *(char *)(param_1 + 0x21);
  *(undefined *)(param_1 + 0x21) = 0;
  iVar5 = (int)*(char *)(param_1 + 0x20);

  if (DAT_800a951c != '\0') {
    iVar3 = FUN_overlay0__80012378();
    bVar2 = iVar3 != 0;
  }
  iVar3 = iVar5 + cVar1;

  if (bVar2) {

    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (DAT_801d5f84 <= iVar3) {
      iVar3 = DAT_801d5f84 + -1;
    }
    if (iVar5 == iVar3) goto LAB_overlay0__80013f94;
LAB_overlay0__80013fc8:
    DAT_overlay0__8002f4b8 = 1;
    iVar6 = FUN_overlay0__800132d0(param_1,iVar3);
  }
  else {
LAB_overlay0__80013f94:

    iVar3 = FUN_overlay0__80013c90(param_1,&DAT_800a9528,param_2,DAT_800a951c != '\0');
    if (iVar3 == 0) goto LAB_overlay0__80013ff4;
    iVar4 = FUN_overlay0__80012378();
    iVar3 = iVar5 + 1;
    if (iVar4 != 0) goto LAB_overlay0__80013fc8;
  }

  if (iVar6 != 0) {
    DAT_800a8d68._0_1_ = 1;
  }
LAB_overlay0__80013ff4:
  iVar6 = FUN_overlay0__8001236c();
  *(short *)(iVar6 + 2) = *(short *)(iVar6 + 2) + 1;
  return;
}

void FUN_overlay0__80014030(undefined4 param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_overlay0__80013c90(param_1,&DAT_800a95d8,param_2,DAT_800a951c != '\0');

  if (iVar1 != 0) {
    DAT_800a8d68._0_1_ = 1;
  }
  return;
}

void FUN_overlay0__80014074(undefined4 param_1,undefined4 param_2)

{

  FUN_overlay0__80013c90(param_1,&DAT_800a95d8,param_2,1);
  return;
}

void FUN_overlay0__800140a4(int **param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  bool bVar4;
  short sVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int **ppiVar10;
  short sVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int **ppiVar19;
  undefined uVar20;
  undefined local_b0;
  undefined local_af;
  undefined local_ae;
  undefined local_ad;
  undefined local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80 [2];
  short local_78 [28];
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;

  param_1[0x203] = (int *)((int)param_1[0x20c] - *(int *)(param_2 + 0xb8));
  param_1[0x204] = (int *)((int)param_1[0x20d] - *(int *)(param_2 + 0xbc));
  piVar8 = (int *)((int)param_1[0x20e] - *(int *)(param_2 + 0xc0));
  param_1[0x205] = piVar8;
  piVar12 = param_1[0x203];
  piVar7 = param_1[0x204];

  if ((int)piVar12 < 0) {
    piVar12 = (int *)-(int)piVar12;
  }
  if ((int)piVar7 < 0) {
    piVar7 = (int *)-(int)piVar7;
  }
  if ((int)piVar8 < 0) {
    piVar8 = (int *)-(int)piVar8;
  }

  piVar9 = piVar7;
  if (piVar12 < piVar7) {
    piVar9 = piVar12;
    piVar12 = piVar7;
  }
  piVar7 = piVar8;
  if (piVar12 < piVar8) {
    piVar7 = piVar12;
    piVar12 = piVar8;
  }
  piVar8 = piVar7;
  if (piVar9 < piVar7) {
    piVar8 = piVar9;
    piVar9 = piVar7;
  }

  piVar12 = (int *)((int)piVar12 + ((uint)piVar8 >> 2) + ((uint)piVar9 >> 1));
  iVar14 = 0x80000;
  bVar4 = false;

  if (DAT_800a951c == '\0') {
    bVar4 = *(short *)(param_1 + 6) < 2;
  }
  if (bVar4) {
    iVar14 = 0x18000;
  }

  if ((param_3 != 0) && (0x63ffff < (int)piVar12)) {
    return;
  }

  piVar7 = (int *)(iVar14 / (((int)piVar12 >> 0x10) + 1));
  param_1[0x201] = piVar12;

  if (param_3 == 0) {
    ppiVar10 = (int **)0x0;

    for (ppiVar19 = DAT_800ada08;
        (ppiVar19 != (int **)0x0 && ((int)ppiVar19[0x201] <= (int)piVar12));
        ppiVar19 = (int **)*ppiVar19) {
      ppiVar10 = ppiVar19;
    }
    ppiVar6 = param_1;
    if (ppiVar10 != (int **)0x0) {
      *ppiVar10 = (int *)param_1;
      ppiVar6 = DAT_800ada08;
    }
    DAT_800ada08 = ppiVar6;
    *param_1 = (int *)ppiVar19;
  }

  piVar12 = piVar7;
  if (0x4000 < (int)piVar7) {
    piVar12 = (int *)0x4000;
  }
  if (((int)piVar7 < 0x400) && (*(short *)(param_1 + 6) < 2)) {
    piVar12 = (int *)0x0;
  }
  param_1[0x202] = piVar12;

  if (*(char *)((int)param_1 + 0xf) != '\0') {
    return;
  }
  bVar4 = false;

  if (*(ushort *)(param_1 + 3) == (ushort)*(byte *)(param_2 + 0x10c)) {
    bVar4 = *(char *)(param_2 + 0x108) != '\0';
  }
  if (bVar4) {
    return;
  }

  iVar14 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar13 = 0;
  ppiVar10 = param_1;

  do {
    bVar1 = *(byte *)((int)ppiVar10 + 0x4a1);
    if (bVar1 == 1) {
      iVar16 = iVar16 + 1;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar14 = iVar14 + 1;
      }
    }
    else if (bVar1 == 2) {
      iVar17 = iVar17 + 1;
    }
    ppiVar10 = ppiVar10 + 0x1a;
    iVar13 = iVar13 + 1;
    uVar20 = iVar14 < iVar16;
  } while (iVar13 < 4);
  if ((bool)uVar20) {
    iVar14 = iVar16;
  }

  if (iVar14 < iVar17) {
    uVar20 = 2;
  }
  local_b0 = 3;

  if ((param_3 == 0) &&
     (bVar4 = *(ushort *)(param_1 + 3) == (ushort)*(byte *)(param_2 + 0x10c), local_b0 = bVar4,
     *(short *)(param_1 + 6) == 1)) {
    piVar12 = param_1[0x201];
    iVar14 = FUN_overlay0__80012378();

    if ((iVar14 != 0) || ((DAT_800a9520 == 0 && (DAT_800a951c == '\0')))) {
      if (DAT_800af232 == '\0') {
        return;
      }

      if (DAT_801c9995 != 1) {
        if (DAT_801c9995 < 2) {
          if (DAT_801c9995 != 0) goto LAB_overlay0__8001444c;
          iVar14 = FUN_overlay0__80012378();
          if (iVar14 != 0) {
            return;
          }
        }
        else {

          if (DAT_801c9995 == 2) {
            uVar18 = 0x20000;
          }
          else {
            uVar18 = 0x40000;
            if (DAT_801c9995 != 3) goto LAB_overlay0__8001444c;
          }

          if ((int)(uVar18 | 0xffff) < (int)piVar12) goto LAB_overlay0__8001444c;
        }
      }
      uVar20 = 3;
      local_b0 = 3;
    }
  }
LAB_overlay0__8001444c:
  local_ad = 1;
  local_ae = *(short *)((int)param_1 + 0x63e) != 0;
  local_a4 = param_1[0x21e];
  local_a0 = param_1[0x207];
  local_9c = param_1[0x208];
  local_98 = param_1[0x209];
  local_94 = param_1[0x20a];
  local_90 = param_1[0x20b];
  local_8c = param_1[0x20c];
  local_88 = param_1[0x20d];
  local_84 = param_1[0x20e];
  local_40 = param_1[0x20f];
  local_3c = param_1[0x210];
  local_38 = param_1[0x211];
  local_34 = param_1[0x212];
  local_30 = param_1[0x213];
  local_2c = param_1[0x214];
  local_28 = param_1[0x215];
  local_24 = param_1[0x216];

  iVar14 = ((int)param_1[0x1a1] << 0xc) / 600000;
  uVar18 = 0;
  if (0xfff < iVar14) {
    iVar14 = 0x1000;
  }
  puVar15 = &local_b0;
  local_ac = (undefined)((uint)((0x1000 - iVar14) * 3) >> 7);
  local_aa = 0x7fd7;
  local_a8 = 9;
  ppiVar10 = param_1;
  ppiVar19 = param_1;

  for (; (int)uVar18 < 4; uVar18 = uVar18 + 1) {
    piVar12 = ppiVar19[0x1f2];
    *(int **)(puVar15 + 0x30) = ppiVar19[0x1f1];
    *(int **)(puVar15 + 0x34) = piVar12;
    sVar2 = *(short *)((int)param_1 + ((int)uVar18 >> 1) * 2 + 0x394);
    uVar3 = *(undefined2 *)(ppiVar10 + 299);
    sVar11 = -sVar2;
    if ((uVar18 & 1) == 0) {
      sVar5 = -0x400;
    }
    else {
      sVar5 = 0x400;
      sVar11 = sVar2;
    }
    *(short *)(puVar15 + 0x38) = *(short *)(ppiVar10 + 0x126) + sVar5;
    *(short *)(puVar15 + 0x3a) = sVar11;
    *(undefined2 *)(puVar15 + 0x3c) = uVar3;
    puVar15 = puVar15 + 0x10;
    ppiVar10 = ppiVar10 + 0x1a;
    ppiVar19 = ppiVar19 + 4;
  }
  local_af = uVar20;
  FUN_80067444(param_2,&local_b0,param_3);
  return;
}

void FUN_overlay0__800145f4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;

  bVar1 = *(short *)(param_1 + 0x18) < 2;
  if (bVar1) {

    puVar3 = &UNK_8017ddb8;
    iVar2 = (uint)*(byte *)(param_1 + 0x10) * 0xc;
  }
  else {

    puVar3 = &UNK_8017dda0;
    iVar2 = *(short *)(param_1 + 0xc) * 0x18;
  }

  FUN_overlay0__80018138(param_1 + 0xaa4,puVar3 + iVar2,bVar1);
  *(undefined *)(param_1 + 0xb3c) = 0;
  return;
}

void FUN_overlay0__80014674(int param_1)

{

  FUN_overlay0__800186f0(param_1 + 0xaa4);
  return;
}

void FUN_overlay0__80014694(int param_1)

{
  *(undefined *)(param_1 + 0xb3c) = 1;
  FUN_overlay0__80014674();
  return;
}

void FUN_overlay0__800146b8(int param_1)

{
  *(undefined *)(param_1 + 0xb3c) = 0;
  FUN_overlay0__800145f4();
  return;
}

void FUN_overlay0__800146d8(int param_1,char param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  int iVar16;
  undefined auStack_40 [8];
  undefined auStack_38 [16];

  uVar15 = (undefined2)*(undefined4 *)(param_1 + 0x808);
  if (*(char *)(param_1 + 0xb3c) != '\0') {
    uVar15 = 0;
  }

  param_2 = param_2 + '\x01';
  if ((ushort)*(byte *)(param_3 + 0x10c) == *(ushort *)(param_1 + 0xc)) {
    param_2 = '\x01';
  }
  *(char *)(param_1 + 0xaa5) = param_2;
  *(undefined2 *)(param_1 + 0xab0) = uVar15;

  FUN_80081164(auStack_40,param_1 + 0x80c);
  uVar2 = FUN_80081500(auStack_40,param_3 + 0xec);
  *(undefined2 *)(param_1 + 0xab2) = uVar2;
  uVar2 = FUN_80081500(auStack_40,param_3 + 0xf4);
  *(undefined2 *)(param_1 + 0xab4) = uVar2;

  iVar14 = DAT_800af22c;
  iVar16 = *(int *)(param_3 + 0xfc);
  uVar2 = 0x1000;

  if (iVar16 < DAT_800af22c >> 1) {
    iVar3 = FUN_80081164(auStack_38,param_1 + 0x868);
    iVar4 = FUN_80081500(auStack_40,auStack_38);
    iVar5 = FUN_80081500(auStack_40,param_3 + 0xe4);
    iVar3 = iVar14 + (iVar3 * iVar4 >> 0xc);
    uVar6 = iVar14 + (iVar16 * iVar5 >> 0xc);
    uVar2 = FUN_80086084(uVar6 * 0x1000,((int)uVar6 >> 0x1f) << 0xc | uVar6 >> 0x14,iVar3,
                         iVar3 >> 0x1f);
  }

  iVar16 = 0x2000;
  iVar14 = 0x4000;
  iVar3 = 0x1333;
  *(undefined2 *)(param_1 + 0xaa6) = uVar2;
  iVar4 = 0x1000;
  if (DAT_800a951c != '\0') {
    iVar4 = 0x3000;
  }

  if (*(ushort *)(param_1 + 0xc) == (ushort)*(byte *)(param_3 + 0x10c)) {

    if ((DAT_800a951c == '\0') && (*(short *)(param_1 + 0x76a) == DAT_801c8570)) {
      iVar5 = (int)*(short *)(param_1 + 0x76c) << 3;
      if (0xfff < iVar5) {
        iVar5 = 0x1000;
      }
      FUN_overlay0__80018760(param_1 + 0xaa4,5,0x40,(iVar5 << 0xe) >> 0xc);
    }

    if (((*(short *)(param_1 + 0x18) < 4) && (1 < *(short *)(param_1 + 0x18))) &&
       (iVar4 = 0x3000, *(char *)(param_3 + 0x10b) == '\0')) {
      *(undefined2 *)(param_1 + 0xaa6) = 0x1000;
      *(undefined2 *)(param_1 + 0xab2) = 0;
      *(undefined2 *)(param_1 + 0xab4) = 0;
      uVar15 = 0x4000;

      if (*(char *)(param_3 + 0x10a) == '\0') {
        iVar16 = 0x2199;
        iVar14 = 0x2b33;
        iVar3 = 0x2199;
      }
      else {
        iVar16 = 0x3000;
        iVar14 = 0x1800;
        iVar3 = 0x3000;
      }
    }
  }

  *(undefined2 *)(param_1 + 0xab0) = uVar15;
  *(undefined2 *)(param_1 + 0xaa8) = *(undefined2 *)(param_1 + 0x6d8);
  *(short *)(param_1 + 0xaba) = (short)((int)(iVar16 * (uint)*(byte *)(param_1 + 0x783)) >> 7);
  *(short *)(param_1 + 0xabc) = (short)((int)(iVar14 * (uint)*(byte *)(param_1 + 0x784)) >> 7);

  if (*(short *)(param_1 + 0x770) < 0) {
    *(undefined2 *)(param_1 + 0xac6) = 0;
  }
  else {
    *(short *)(param_1 + 0xac6) = (short)((int)*(short *)(param_1 + 0x770) << 2);
  }

  iVar16 = 0;
  iVar5 = 0;
  iVar12 = 0;
  iVar13 = 0;
  iVar7 = 0;
  iVar9 = 0;
  iVar11 = 0;
  iVar8 = 0;
  iVar10 = 0;

  *(short *)(param_1 + 0xaaa) = (short)(((uint)*(ushort *)(param_1 + 0x772) << 0xc) / 0x1800);
  *(short *)(param_1 + 0xabe) = (short)((int)(iVar3 * (uint)*(byte *)(param_1 + 0x785)) >> 7);
  iVar14 = param_1;

  do {
    bVar1 = *(byte *)(iVar14 + 0x4a0);
    if (bVar1 == 1) {
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + (uint)*(byte *)(iVar14 + 0x4a9);
      iVar11 = iVar11 + (uint)*(byte *)(iVar14 + 0x4ab);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar13 = iVar13 + 1;
        iVar16 = iVar16 + (uint)*(byte *)(iVar14 + 0x4a9);
      }
    }
    else if (bVar1 == 5) {
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + (uint)*(byte *)(iVar14 + 0x4a9);
      iVar8 = iVar8 + (uint)*(byte *)(iVar14 + 0x4ab);
    }
    iVar14 = iVar14 + 0x68;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);

  if (iVar13 != 0) {
    iVar16 = iVar16 * 0x10 * iVar4 >> 0xc;
  }
  if (iVar7 != 0) {
    iVar5 = iVar5 * 0x40 * iVar4 >> 0xc;
    iVar11 = (iVar11 << 7) / iVar7;
  }
  if (iVar9 != 0) {
    iVar12 = iVar12 * 0x10 * iVar4 >> 0xc;
    iVar8 = ((iVar8 << 7) / iVar9) * 0x266 >> 0xc;
  }

  if (0x4000 < iVar16) {
    iVar16 = 0x4000;
  }
  *(short *)(param_1 + 0xac0) = (short)iVar16;

  if (0x4000 < iVar5) {
    iVar5 = 0x4000;
  }
  *(short *)(param_1 + 0xac2) = (short)iVar5;

  if (0x3fff < iVar11) {
    iVar11 = 0x3fff;
  }
  *(short *)(param_1 + 0xaac) = (short)iVar11;

  if (0x4000 < iVar12) {
    iVar12 = 0x4000;
  }
  *(short *)(param_1 + 0xac4) = (short)iVar12;

  if (0x3fff < iVar8) {
    iVar8 = 0x3fff;
  }
  *(short *)(param_1 + 0xaae) = (short)iVar8;

  FUN_overlay0__8001826c(param_1 + 0xaa4);
  return;
}

void FUN_overlay0__80014b54(int param_1,int param_2)

{

  FUN_8007fab8(param_1,param_2,&DAT_800a6f5c);
  *(int *)(param_1 + 100) = (int)&DAT_801c98ea + param_2 * 0x52;
  return;
}

void FUN_overlay0__80014bb4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;

  FUN_80083998(param_1 + 0xc,param_1 + 0x68);
  iVar5 = 0;

  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x54);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_1 + 0x58);

  bVar1 = *(byte *)(param_1 + 2);
  iVar9 = *(int *)(param_1 + 100);

  if (bVar1 == 5) {
LAB_overlay0__80014c88:
    iVar5 = 1;
  }
  else if (bVar1 < 6) {
    if (bVar1 != 2) {
      iVar2 = 0;
      goto LAB_overlay0__80014ca4;
    }
    iVar5 = 2;
  }
  else {
    if (bVar1 == 7) goto LAB_overlay0__80014c88;
    if (bVar1 != 0xe) {
      iVar2 = 0;
      goto LAB_overlay0__80014ca4;
    }
    iVar5 = 3;
  }
  iVar2 = iVar5 * 3;
LAB_overlay0__80014ca4:

  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;

  uVar19 = *(uint *)(param_1 + 0x68);
  uVar18 = *(uint *)(param_1 + 0x6c);
  uVar17 = *(uint *)(param_1 + 0x70);
  uVar16 = *(uint *)(param_1 + 0x74);
  iVar11 = 2;
  *(undefined2 *)(param_1 + 0x9c) = 0;

  for (uVar10 = 0; (int)uVar10 < 0xb; uVar10 = uVar10 + 1) {
    uVar8 = (uint)*(byte *)(iVar9 + (iVar2 * 4 - iVar5) + uVar10);
    uVar3 = 1 << (uVar8 & 0x1f);

    if (uVar8 < 0x80) {
      uVar8 = 1 << (uVar10 & 0x1f);

      if ((uVar19 & uVar3) != 0) {
        uVar12 = uVar12 | uVar8;
      }
      if ((uVar18 & uVar3) != 0) {
        uVar13 = uVar13 | uVar8;
      }
      if ((uVar17 & uVar3) != 0) {
        uVar14 = uVar14 | uVar8;
      }
      if ((uVar16 & uVar3) != 0) {
        uVar15 = uVar15 | uVar8;
      }
    }
    else {

      uVar4 = *(ushort *)((uVar8 & 0x1f) * 2 + param_1 + 0x7a);
      uVar3 = (uint)uVar4;

      if (((uint)*(ushort *)(param_1 + 0x78) & 1 << (uVar8 & 0x1f)) != 0) {
        *(ushort *)(param_1 + 0x9c) = *(ushort *)(param_1 + 0x9c) | (ushort)(1 << (uVar10 & 0x1f));

        if (0x9f < uVar8) {

          if ((uVar8 < 0xc0) || ((0xdf < uVar8 && (uVar3 < 0x80)))) {
            iVar6 = 0x7f - uVar3;
          }
          else {
            iVar6 = uVar3 - 0x80;
          }
          iVar7 = iVar6;
          if (iVar6 < 0) {
            iVar7 = 0;
          }
          uVar4 = (ushort)(iVar7 << 1);
          if (0x7f < iVar6) {
            iVar7 = 0x7f;
            uVar4 = 0xfe;
          }
          uVar4 = uVar4 | (ushort)(iVar7 >> 7);
        }
        *(ushort *)(param_1 + 0x9c + iVar11) = uVar4;
      }
    }
    iVar11 = iVar11 + 2;
  }

  *(uint *)(param_1 + 0x8c) = uVar12;
  *(uint *)(param_1 + 0x90) = uVar13;
  *(uint *)(param_1 + 0x94) = uVar14;
  *(uint *)(param_1 + 0x98) = uVar15;
  return;
}

void FUN_overlay0__80014e28(int param_1,undefined param_2)

{
  undefined4 uVar1;

  FUN_8008ce30(param_1,0,0x5d30);
  *(undefined *)(param_1 + 0x18) = param_2;

  uVar1 = FUN_8005e764();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}

void FUN_overlay0__80014e6c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;

  piVar2 = *(int **)(param_1 + 0x4504);
  if (piVar2 != (int *)0x0) {
    iVar1 = 1;
    do {

      FUN_overlay0__800146d8(piVar2,iVar1,param_2);
      piVar2 = (int *)*piVar2;
      iVar1 = iVar1 + 1;
    } while (piVar2 != (int *)0x0);
  }
  return;
}

void FUN_overlay0__80014ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = 0x184;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {

    FUN_overlay0__800146d8(param_1 + iVar1,0,param_2);
    param_2 = param_2 + 0x110;
    iVar1 = iVar1 + 0xb40;
  }
  return;
}

void FUN_overlay0__80014f3c(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0x184;
  for (iVar2 = 0; iVar2 < (int)(uint)DAT_800af231; iVar2 = iVar2 + 1) {
    if (*(char *)(param_1 + iVar1 + 0xe) != '\0') {
      FUN_overlay0__80014694();
    }
    iVar1 = iVar1 + 0xb40;
  }
  return;
}

void FUN_overlay0__80014fbc(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0x184;
  for (iVar2 = 0; iVar2 < (int)(uint)DAT_800af231; iVar2 = iVar2 + 1) {
    if (*(char *)(param_1 + iVar1 + 0xe) != '\0') {
      FUN_overlay0__800146b8();
    }
    iVar1 = iVar1 + 0xb40;
  }
  return;
}

void FUN_overlay0__8001503c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  iVar1 = FUN_80060e94(*(undefined *)(param_1 + 0x5d2c));
  if ((*(ushort *)(iVar1 + 8) & 0x20) != 0) {
    DAT_801d586b = 1;
  }
  *(char *)(param_1 + 0x5d2d) = DAT_801d58b6;

  iVar1 = FUN_overlay0__80012378();
  if (iVar1 == 0) {

    if (((DAT_801d58b6 == '\x01' && DAT_801d5a14 != '\0') && (DAT_801d5866 != '\x01')) &&
       (DAT_801d5866 != '\n')) {
      DAT_801d5945 = 0;
      DAT_801d5a16 = 2;
      *(undefined *)(param_1 + 0x5d2d) = 2;
    }
  }
  else {

    if (DAT_800a951c == '\0') {
      puVar3 = &DAT_801d5988;
      if (DAT_801d5a14 == '\0') {

        puVar2 = &DAT_801d58b8;
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
        } while (puVar2 != &DAT_801d5988);
        DAT_801d5a14 = '\0';

        puVar2 = &DAT_801dea7a;
        puVar3 = &DAT_801de8ba;
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
        } while (puVar3 != &DAT_801dea7a);
      }
      *(undefined *)(param_1 + 0x5d2d) = 2;
    }
    DAT_801d5a16 = 2;
  }
  return;
}

void FUN_overlay0__8001523c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (DAT_801d5864 == 1) {
    DAT_801c8570 = 0x3c;
    DAT_801c856c = 0x444;
  }
  else {
    if (DAT_801d5864 < 2) {
      if (DAT_801d5864 != 0) goto LAB_overlay0__800152e4;
    }
    else if (DAT_801d5864 != 2) goto LAB_overlay0__800152e4;
    DAT_801c8570 = 0x1e;
    DAT_801c856c = 0x888;
  }
LAB_overlay0__800152e4:

  if (DAT_800a951c == '\0') {
    FUN_8005e2fc(&DAT_801d5e88);
    FUN_8005e2fc(&DAT_801da3a0);
    FUN_8005e624(&DAT_801d5de8);
  }

  FUN_overlay0__8003c12c();
  DAT_overlay0__8002f4b8 = 0;

  iVar3 = 0x14fda;
  iVar2 = 0x184;
  for (iVar1 = 0; iVar1 < (int)(uint)DAT_800af231; iVar1 = iVar1 + 1) {

    FUN_overlay0__80012cd4(param_1 + iVar2,iVar1,&DAT_801c98e0 + iVar3);
    iVar3 = iVar3 + 0x1c0;
    iVar2 = iVar2 + 0xb40;
  }

  FUN_overlay0__8003c200(param_1 + iVar2);
  FUN_80083a04(param_1 + 0x24);
  FUN_80083a04(param_1 + 0xd4);
  return;
}

void FUN_overlay0__800153b8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0x184;
  for (iVar3 = 0; iVar3 < (int)(uint)DAT_800af231; iVar3 = iVar3 + 1) {
    FUN_overlay0__800131ac(param_1 + iVar2);
    iVar2 = iVar2 + 0xb40;
  }

  bVar1 = false;
  if (DAT_800a951c == '\0') {
    iVar2 = FUN_overlay0__80012378();
    bVar1 = iVar2 != 0;
  }

  if (bVar1) {
    FUN_overlay0__80012570();
    FUN_overlay0__800125bc();
  }
  return;
}

void FUN_overlay0__8001545c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (param_3 == 0) {
    DAT_800ada08 = 0;
  }

  iVar1 = 0x184;
  for (iVar2 = 0; iVar2 < (int)(uint)DAT_800af231; iVar2 = iVar2 + 1) {

    FUN_overlay0__800140a4(param_1 + iVar1,param_2,param_3);
    iVar1 = iVar1 + 0xb40;
  }

  if (param_3 == 0) {
    FUN_overlay0__8002eb60(&DAT_800ada0c,param_2);
  }
  return;
}

void FUN_overlay0__80015510(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{

  (&DAT_800aa114)[param_1 * 0xb40] = param_4 != 0;

  FUN_overlay0__8001374c(&DAT_800a9688 + param_1 * 0x2d0);
  return;
}

void FUN_overlay0__8001555c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5,int param_6)

{

  (&DAT_800aa114)[param_1 * 0xb40] = param_6 != 0;

  FUN_overlay0__80013824(&DAT_800a9688 + param_1 * 0x2d0,param_2,param_4,param_3,param_5);
  return;
}

void FUN_overlay0__800155c4(int param_1,undefined4 param_2)

{
  int iVar1;

  if (DAT_801d5866 != 2) {
    if (DAT_801d5866 < 3) {
      if (DAT_801d5866 != 0) {
        return;
      }
      iVar1 = 1 - param_1;
      (&DAT_800aa124)[iVar1 * 0x2d0] = param_2;
      (&DAT_800aa118)[iVar1 * 0x5a0] = 0x78;
      (&DAT_800aa128)[iVar1 * 0x2d0] = 0;
      (&DAT_800aa124)[param_1 * 0x2d0] = 0;
      (&DAT_800aa118)[param_1 * 0x5a0] = 0x78;
      (&DAT_800aa128)[param_1 * 0x2d0] = param_2;
      return;
    }
    if ((DAT_801d5866 != 4) && (DAT_801d5866 != 0xb)) {
      return;
    }
  }
  if (param_1 != 0) {
    return;
  }
  DAT_800aa124 = 0;
  DAT_800aa118 = 0x78;
  DAT_800aa128 = param_2;
  return;
}

void FUN_overlay0__800156b0(void)

{
  return;
}

void FUN_overlay0__800156b8(int param_1,undefined param_2)

{
  (&DAT_800aa11a)[param_1 * 0x5a0] = 0x78;
  (&DAT_800aa115)[param_1 * 0xb40] = param_2;
  return;
}

void FUN_overlay0__800156ec
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined2 param_5)

{
  DAT_801d5dec = param_3;
  DAT_801d5df0 = param_4;
  *(undefined4 *)(&DAT_800a96ac + param_1 * 0xb40) = 0xffffffff;
  if (param_3 == 1) {
    FUN_8005e3c4(&DAT_801d5e88,1,param_4,param_5,0);
  }
  if (DAT_800a951c == '\0') {
    FUN_overlay0__8002a6f8(&DAT_800af226);
    FUN_overlay0__80029c84(DAT_overlay0__8002f4f4);
  }
  return;
}

void FUN_overlay0__800157a8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;

  FUN_8007fe8c();
  *param_1 = &LAB_overlay0__8002ef98;
  *(undefined *)((int)param_1 + 0x2e6) = 0;

  iVar2 = FUN_8007d23c(0);
  iVar1 = DAT_801c93d4;
  *(undefined *)((int)param_1 + 0x2e7) = 0;
  param_1[0x1c] = iVar2 + iVar1;
  return;
}

void FUN_overlay0__800157fc(undefined4 *param_1)

{
  *param_1 = &LAB_overlay0__8002ef98;
  FUN_8007fec8();
  return;
}

void FUN_overlay0__80015824(int param_1,undefined param_2)

{
  DAT_overlay0__8002f4f4 = param_1;
  *(undefined *)(param_1 + 0x2e8) = param_2;
  FUN_800833e8();
  return;
}

void FUN_overlay0__80015ef8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = &LAB_overlay0__8002ef58;
  param_1[1] = param_2;
  *param_1 = param_3;
  return;
}

void FUN_overlay0__80015f14(int param_1,uint param_2)

{
  *(undefined **)(param_1 + 0xc) = &LAB_overlay0__8002ef58;
  if ((param_2 & 1) != 0) {
    FUN_80086060();
  }
  return;
}

void FUN_overlay0__80015f48(int param_1)

{

  (**(code **)(*(int *)(param_1 + 0xc) + 0xc))();
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(param_1);
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(param_1);
  return;
}

int FUN_overlay0__80015fb0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(int *)(param_1 + 8);
  }
  if (((-1 < param_2) && (param_2 < 4)) && (1 < param_2)) {
    *(int *)(param_1 + 8) = param_2;
    return param_2;
  }
  return param_2;
}

undefined4 * FUN_overlay0__80016328(void)

{
  if (DAT_800a8d60 == 0) {
    FUN_80085b78(&DAT_800a8d60,"12RaceMenuLoop");
  }
  return &DAT_800a8d60;
}

undefined4 * FUN_overlay0__80016368(void)

{

  if (DAT_800a94f0 == 0) {

    FUN_80080038();

    FUN_80085b3c(&DAT_800a94f0,"12RaceViewLoop",&DAT_801f0ce0);
  }

  return &DAT_800a94f0;
}

void FUN_overlay0__800163b8(undefined4 *param_1,int param_2,undefined2 param_3)

{

  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == 0) {

      FUN_8008ce30(param_1,0,0x1c);
    }
    else {

      FUN_8008ce30(param_1 + 5,0,5);
      *(undefined2 *)(param_1 + 3) = 0;
      *(undefined2 *)((int)param_1 + 0xe) = 0;
      param_1[1] = *param_1;
    }

    *(undefined2 *)((int)param_1 + 0x12) = param_3;

    param_1[2] = 0xffffffff;
  }
  return;
}

void FUN_overlay0__80016428(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;

  if ((param_1 != 0) && (iVar5 = *(int *)(param_1 + 4) + -1, *(short *)(param_1 + 0xc) == 0)) {

    *(int *)(param_1 + 4) = iVar5;
    if (iVar5 == 0) {

      *(undefined2 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }

    bVar11 = *(byte *)(param_1 + 0x15);
    bVar12 = *(byte *)(param_1 + 0x16);
    bVar13 = *(byte *)(param_1 + 0x17);
    uVar10 = (uint)*(byte *)(param_1 + 0x18);
    uVar7 = *(int *)(param_1 + 8) - 1;

    if (*(int *)(param_1 + 8) < 1) {

      pbVar8 = (byte *)(param_1 + 0x19 + (uint)*(ushort *)(param_1 + 0xe));
      bVar1 = *pbVar8;
      pbVar9 = pbVar8 + 1;
      *(byte *)(param_1 + 0x14) = bVar1;

      if ((bVar1 & 8) != 0) {
        bVar11 = *pbVar9;
        pbVar9 = pbVar8 + 2;
        *(byte *)(param_1 + 0x15) = bVar11;
      }
      if ((bVar1 & 0x10) != 0) {
        bVar12 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *(byte *)(param_1 + 0x16) = bVar12;
      }
      if ((bVar1 & 0x20) != 0) {
        bVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *(byte *)(param_1 + 0x17) = bVar13;
      }
      if ((bVar1 & 0x40) != 0) {
        bVar2 = *pbVar9;
        uVar10 = (uint)bVar2;
        pbVar9 = pbVar9 + 1;
        *(byte *)(param_1 + 0x18) = bVar2;
      }

      uVar7 = 0;
      pbVar8 = pbVar9;

      if ((bVar1 & 0x80) != 0) {
        uVar7 = (uint)*pbVar9;
        pbVar8 = pbVar9 + 1;

        if ((*pbVar9 & 0x80) != 0) {
          uVar4 = (uint)*pbVar8;
          uVar6 = (uVar7 & 0x7f) << 8;
          uVar7 = uVar6 | uVar4;
          pbVar8 = pbVar9 + 2;

          if ((uVar6 & 0x4000) != 0) {
            bVar2 = *pbVar8;
            uVar7 = (uVar6 & 0x3fff | uVar4) << 8 | (uint)bVar2;
            pbVar8 = pbVar9 + 3;

            if ((uVar6 & 0x2000) != 0) {
              bVar3 = *pbVar8;
              pbVar8 = pbVar9 + 4;
              uVar7 = ((uVar6 & 0x1fff | uVar4) << 8 | (uint)bVar2) << 8 | (uint)bVar3;
            }
          }
        }
        uVar7 = uVar7 << 3;
      }

      uVar7 = uVar7 | bVar1 & 7;

      *(short *)(param_1 + 0xe) = (short)pbVar8 - (short)(param_1 + 0x19);
    }

    *(uint *)(param_1 + 8) = uVar7;

    param_2[3] = (byte)uVar10 & 0xf;
    *param_2 = bVar11;
    param_2[1] = bVar12;
    param_2[2] = bVar13;
    param_2[4] = (byte)(uVar10 >> 4);
  }
  return;
}

void FUN_overlay0__80016598(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;

  uVar9 = *(uint *)(param_1 + 8);
  bVar3 = *(byte *)(param_1 + 0x15);
  bVar8 = *(byte *)(param_1 + 0x16);
  bVar1 = *(byte *)(param_1 + 0x17);
  bVar2 = *(byte *)(param_1 + 0x18);

  puVar6 = (undefined *)(param_1 + 0x19 + (uint)*(ushort *)(param_1 + 0xe));

  uVar5 = *(byte *)(param_1 + 0x14) & 0xf8 | uVar9 & 7;
  if (7 < (int)uVar9) {
    uVar5 = uVar5 | 0x80;
  }

  *puVar6 = (char)uVar5;
  pbVar7 = puVar6 + 1;

  if ((uVar5 & 8) != 0) {
    *pbVar7 = bVar3;
    pbVar7 = puVar6 + 2;
  }
  if ((uVar5 & 0x10) != 0) {
    *pbVar7 = bVar8;
    pbVar7 = pbVar7 + 1;
  }
  if ((uVar5 & 0x20) != 0) {
    *pbVar7 = bVar1;
    pbVar7 = pbVar7 + 1;
  }
  if ((uVar5 & 0x40) != 0) {
    *pbVar7 = bVar2;
    pbVar7 = pbVar7 + 1;
  }

  iVar10 = (int)uVar9 >> 3;
  if ((uVar5 & 0x80) == 0) goto LAB_overlay0__800166a0;

  bVar3 = 0;
  bVar8 = 0;

  if (iVar10 < 0x200000) {
    if (0x3fff < iVar10) {
      bVar3 = 0xc0;
      goto LAB_overlay0__80016678;
    }
    bVar8 = 0x80;
    if (0x7f < iVar10) goto LAB_overlay0__8001668c;
  }
  else {

    *pbVar7 = (byte)((int)uVar9 >> 0x1b) | 0xe0;
    pbVar7 = pbVar7 + 1;
LAB_overlay0__80016678:
    *pbVar7 = (byte)((int)uVar9 >> 0x13) | bVar3;
    pbVar7 = pbVar7 + 1;
LAB_overlay0__8001668c:
    *pbVar7 = (byte)((uint)iVar10 >> 8) | bVar8;
    pbVar7 = pbVar7 + 1;
  }

  *pbVar7 = (byte)iVar10;
  pbVar7 = pbVar7 + 1;

LAB_overlay0__800166a0:

  iVar10 = (int)pbVar7 - (param_1 + 0x19);
  uVar4 = (undefined2)iVar10;
  *(undefined2 *)(param_1 + 0xe) = uVar4;
  *(undefined2 *)(param_1 + 0x10) = uVar4;

  if ((int)(*(ushort *)(param_1 + 0x12) - 0x11) <= iVar10) {
    *(undefined2 *)(param_1 + 0xc) = 1;
  }
  return;
}
