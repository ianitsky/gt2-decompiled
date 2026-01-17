
void FUN_global__80013694(int param_1)

{

  param_1 = _LAB_800a8dd8 + param_1;

  if (*(char *)(param_1 + 0x2fa8) == '\x01') {

    *(undefined *)(param_1 + 0x2fa8) = 0;
    return;
  }

  *(undefined *)(param_1 + 0x2fa8) = 1;
  return;
}

void FUN_global__800136c4(void)

{
  int iVar1;
  int iVar2;

  iVar2 = 0x20;

  iVar1 = _LAB_800a8dd8 + 0x20;

  do {

    *(undefined *)(iVar1 + 0x2fa8) = 0;

    iVar2 = iVar2 + -1;

    iVar1 = iVar1 + -1;
  } while (-1 < iVar2);
  return;
}

void FUN_global__800136ec(void)

{
  int iVar1;
  undefined2 uVar2;

  iVar1 = _LAB_800a8dd8;

  *(undefined2 *)(_LAB_800a8dd8 + 0x1a18) = *(undefined2 *)(_LAB_800a8dd8 + 0x68e);

  uVar2 = FUN_80068fe8(iVar1 + 0x690);

  *(undefined2 *)(iVar1 + 0x1a1a) = uVar2;
  return;
}

void FUN_global__80013728(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auStack_148 [12];
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined local_12c;
  undefined auStack_128 [256];

  iVar2 = _LAB_800a8dd8;

  FUN_8006ac68(auStack_148,(int)*(short *)(_LAB_800a8dd8 + 0x2c));

  local_13c = local_13c & 0xff9fffff | 0x200000;

  local_138 = param_1;

  FUN_8007da80(auStack_148,&LAB_800a8de0);

  local_12c = 1;
  local_134 = 0x24a4136;

  if (param_2 == 0) {

    uVar5 = FUN_global__80013558();
    FUN_8008cf34(auStack_128,&DAT_801efb5b,uVar5);

    iVar4 = FUN_8006b044(auStack_148,auStack_128,1,0);
    FUN_8006af40(auStack_148,auStack_128,0x140 - iVar4,0x8a,1,0xfffffffe,0);

    uVar5 = FUN_global__8001358c();
    uVar6 = FUN_global__800135c8();

    FUN_8008cf34(auStack_128,&DAT_801efb74,uVar5,uVar6);
    iVar4 = FUN_8006b044(auStack_148,auStack_128,1,0);
    FUN_8006af40(auStack_148,auStack_128,0x140 - iVar4,0x9e,1,0xfffffffe,0);

    uVar5 = FUN_global__800134c4();
  }
  else {

    FUN_8008cf34(auStack_128,&DAT_801efb5b,(int)*(char *)(iVar2 + 0x68c));
    iVar4 = FUN_8006b044(auStack_148,auStack_128,1,0);
    FUN_8006af40(auStack_148,auStack_128,0x140 - iVar4,0x8a,1,0xfffffffe,0);

    sVar1 = *(short *)(iVar2 + 0x68e);
    iVar4 = FUN_80068fe8(iVar2 + 0x690);
    uVar5 = FUN_global__800135c8();

    FUN_8008cf34(auStack_128,&DAT_801efb74,sVar1 - iVar4,uVar5);
    iVar4 = FUN_8006b044(auStack_148,auStack_128,1,0);
    FUN_8006af40(auStack_148,auStack_128,0x140 - iVar4,0x9e,1,0xfffffffe,0);

    uVar3 = FUN_80068fe8(iVar2 + 0x690);
    *(undefined2 *)(iVar2 + 0x1a1a) = uVar3;
    uVar5 = 0;
  }

  FUN_8006aa68(iVar2 + 0x1a18,param_1,0xb0,0xaa,0x80,0,uVar5);
  return;
}

void FUN_global__800139c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_130 [12];
  uint local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined local_114;
  undefined auStack_110 [256];

  FUN_8006ac68(auStack_130,(int)*(short *)(_LAB_800a8dd8 + 0x2c));

  local_124 = local_124 & 0xff9fffff | 0x200000;

  local_120 = param_1;

  FUN_8007da80(auStack_130,&LAB_800a8de0);

  local_114 = 1;
  local_11c = 0x24a4136;

  uVar1 = FUN_global__80013518();

  FUN_8008cf34(auStack_110,&DAT_801b9a34,uVar1);

  iVar2 = FUN_8006b044(auStack_130,auStack_110,1,0);
  FUN_8006af40(auStack_130,auStack_110,0x140 - iVar2,0xe0,1,0xfffffffe,0);
  return;
}

bool FUN_global__80013e14(int param_1)

{
  int iVar1;
  short *psVar2;
  bool bVar3;

  psVar2 = *(short **)(_LAB_800a8dd8 + 0xc);

  bVar3 = *psVar2 == 0;

  if (param_1 == 0) {

    bVar3 = bVar3 && (psVar2[1] == 0 || psVar2[1] == 3);
  }
  else if (psVar2[1] != 0) {

    bVar3 = false;
  }

  if ((bVar3 != false) && (iVar1 = FUN_800696c4(_LAB_800a8dd8 + 0x1a1c,0), iVar1 == 0)) {

    bVar3 = false;
  }

  return bVar3;
}

bool FUN_global__80013ea0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;

  iVar3 = _LAB_800a8dd8;

  *param_1 = &LAB_global__800210e4;
  *param_2 = &LAB_global__800210e4;
  bVar2 = false;

  switch(**(undefined2 **)(iVar3 + 0xc)) {
  case 0:

    iVar5 = FUN_800696c4(iVar3 + 0x1a1c,0);
    if (iVar5 == 0) {

      puVar4 = (undefined4 *)&DAT_801b9866;
      break;
    }

    goto switchD_global__80013f18_caseD_5;
  case 1:

    puVar4 = (undefined4 *)&DAT_801b972e;
    break;
  case 2:

    puVar4 = &DAT_801b9630;
    break;
  case 3:

    puVar4 = (undefined4 *)&DAT_801b9866;
    break;
  case 4:

    puVar4 = (undefined4 *)&DAT_801b96d8;
    break;
  default:

    goto switchD_global__80013f18_caseD_5;
  }

  *param_1 = puVar4;
  bVar2 = true;

switchD_global__80013f18_caseD_5:

  sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 2);

  if (sVar1 == 2) {

    puVar6 = &DAT_801b9655;
  }
  else if (sVar1 < 3) {

    if (sVar1 != 1) goto LAB_global__80013ff0;

    puVar6 = &DAT_801b9752;
  }
  else if (sVar1 == 3) {

    if (param_3 == 0) goto LAB_global__80013ff0;

    puVar6 = &DAT_801b96a9;
  }
  else {

    if (sVar1 != 4) goto LAB_global__80013ff0;

    puVar6 = &DAT_801b9703;
  }

  *param_2 = puVar6;
  bVar2 = true;

LAB_global__80013ff0:

  return !bVar2;
}

undefined4 FUN_global__80015b00(void)

{
  return 0xffffffff;
}

void FUN_global__80015b08(int param_1)

{
  undefined2 *puVar1;
  code *pcVar2;

  puVar1 = _LAB_800a8dd8;

  if (param_1 < 0) {

    pcVar2 = FUN_global__80015b00;
  }
  else {

    pcVar2 = (code *)(&PTR_LAB_global__80014024_global__8004b7d8)[param_1];
  }

  *(code **)(_LAB_800a8dd8 + 2) = pcVar2;

  *puVar1 = (short)param_1;

  (**(code **)(puVar1 + 2))(0,0);
  return;
}

void FUN_global__80015b6c(void)

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

  iVar1 = _LAB_800a8dd8;
  iVar6 = _LAB_800a8dd8 + 0x60;

  *(undefined4 *)(_LAB_800a8dd8 + 0x30) = 0x10009c;
  *(undefined4 *)(iVar1 + 0x34) = 0xe;
  *(undefined4 *)(iVar1 + 0x38) = 0x20a2278;
  *(undefined4 *)(iVar1 + 0x3c) = 0x2000000;
  *(undefined4 *)(iVar1 + 0x40) = 0x2dedede;
  *(undefined4 *)(iVar1 + 0x44) = 0x2000000;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined2 *)(iVar1 + 0x48) = 0xffff;
  *(undefined4 *)(iVar1 + 0x4c) = 0x20e427e;
  *(undefined4 *)(iVar1 + 0x50) = 0x2151515;
  *(undefined4 *)(iVar1 + 0x54) = 0xc600b0;
  *(undefined4 *)(iVar1 + 0x58) = 0x20160;
  *(undefined4 *)(iVar1 + 0x5c) = 0xc;
  *(undefined2 *)(iVar1 + 0x5e) = 0xffff;

  FUN_8006e1cc(iVar6,&LAB_global__8004b644,0);
  FUN_8006e1cc(iVar1 + 0xf8,&LAB_global__8004b674,0);
  FUN_8006e1cc(iVar1 + 400,&LAB_global__8004b6a4,0);
  FUN_8006e1cc(iVar1 + 0x228,&LAB_global__8004b6d4,0);
  FUN_8006d9c8(&LAB_global__8004b704);
  FUN_8006cdcc(&DAT_global__8004b724,&LAB_global__80013aa4,0);
  FUN_8006e1cc(iVar1 + 0x2c0,&LAB_global__8004b758,0);

  puVar2 = &DAT_global__8004b788;
  puVar3 = (undefined4 *)(iVar1 + 0x35c);

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
  } while (puVar4 + 4 != (undefined4 *)&LAB_global__8004b7b8);

  uVar7 = puVar4[5];
  puVar5[4] = 0;
  puVar5[5] = uVar7;

  *(undefined **)(iVar1 + 0x24) = &LAB_global__800210e4;
  *(undefined **)(iVar1 + 0x28) = &LAB_global__800210e4;

  FUN_global__80013430();
  return;
}

int FUN_global__80015cf8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = *param_1;

  puVar2 = (undefined4 *)param_1[3];
  _LAB_800a8e00 = *puVar2;
  _LAB_800a8e04 = puVar2[1];
  _LAB_800a8e08 = puVar2[2];

  puVar2 = (undefined4 *)param_1[4];
  _LAB_800a8de0 = *puVar2;
  _LAB_800a8de4 = puVar2[1];
  _LAB_800a8de8 = puVar2[2];

  puVar2 = (undefined4 *)param_1[5];
  _LAB_800a8df0 = *puVar2;
  _LAB_800a8df4 = puVar2[1];
  _LAB_800a8df8 = puVar2[2];

  *(int *)(iVar1 + 8) = param_1[1];
  *(int *)(iVar1 + 0xc) = param_1[2];

  _LAB_800a8dd8 = iVar1;

  *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 6);

  return iVar1 + 0x246d4;
}

void FUN_global__80015d98(void)

{

  FUN_global__80015b6c();

  FUN_global__80015b08(0);
  return;
}

undefined4 FUN_global__80015dc0(undefined4 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;

  iVar1 = _LAB_800a8dd8;

  *(undefined4 *)(_LAB_800a8dd8 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;

  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x18) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    *(undefined4 *)(iVar1 + 0x1c) = param_1[3];
  }

  FUN_8006be64(iVar1 + 0x30);
  FUN_8006bcb8(iVar1 + 0x4c);

  uVar2 = FUN_8006e43c(iVar1 + 0x60,param_1);
  *(undefined2 *)(iVar1 + 0xf4) = uVar2;

  uVar2 = FUN_8006e43c(iVar1 + 0xf8,param_1);
  *(undefined2 *)(iVar1 + 0x18c) = uVar2;

  uVar2 = FUN_8006e43c(iVar1 + 400,param_1);
  *(undefined2 *)(iVar1 + 0x224) = uVar2;

  uVar2 = FUN_8006e43c(iVar1 + 0x228,param_1);
  *(undefined2 *)(iVar1 + 700) = uVar2;

  uVar2 = FUN_8006d9dc(&LAB_global__8004b704,param_1);
  *(undefined2 *)(iVar1 + 0x356) = uVar2;

  uVar2 = FUN_8006cfc4(&DAT_global__8004b724,param_1);
  *(undefined2 *)(iVar1 + 0x358) = uVar2;

  uVar2 = FUN_8006e43c(iVar1 + 0x2c0,param_1);
  *(undefined2 *)(iVar1 + 0x354) = uVar2;

  iVar3 = (**(code **)(iVar1 + 4))(1,0);

  while( true ) {
    if (iVar3 == -1) {

      return 0;
    }
    if (iVar3 == 0x16) {

      break;
    }

    iVar3 = FUN_global__80015b08();
  }

  if (-1 < *(short *)(iVar1 + 0x48)) {

    *(ushort *)(iVar1 + 0x48) = ~*(ushort *)(iVar1 + 0x34);
    *(ushort *)(iVar1 + 0x5e) = ~*(ushort *)(iVar1 + 0x5c);
  }

  *(undefined **)(iVar1 + 0x24) = &LAB_global__800210e4;
  *(undefined **)(iVar1 + 0x28) = &LAB_global__800210e4;

  FUN_global__80013430();
  FUN_global__80015b08(0xffffffff);

  return 1;
}

void FUN_global__80015f4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_60 [12];
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  iVar1 = _LAB_800a8dd8;

  local_30 = 0x2000000;
  local_2c = 0x242362a;

  iVar3 = param_1 + 0x10;

  FUN_8006ac68(auStack_60,(int)*(short *)(_LAB_800a8dd8 + 0x2c));
  FUN_8007da80(auStack_60,&LAB_800a8df0);

  local_44 = 1;
  local_4c = 0x25c5248;
  local_54 = local_54 & 0xff9fffff | 0x200000;
  local_50 = param_1;

  if (DAT_801c98e0 == '\0') {

    FUN_global__8001330c(param_1,*(undefined4 *)(iVar1 + 0x24),0xb0,0x102,0x2606060);
    FUN_global__8001330c(param_1,*(undefined4 *)(iVar1 + 0x28),0xb0,0x126,0x2606060);
  }
  else {

    FUN_8006adb4(auStack_60,*(undefined4 *)(iVar1 + 0x24),0xb0,0x112,1);
    FUN_8006adb4(auStack_60,*(undefined4 *)(iVar1 + 0x28),0xb0,0x136,1);
  }

  iVar2 = FUN_8006beb4(iVar1 + 0x30);
  if (iVar2 != 0) {

    local_4c = FUN_8006b548(&local_30,&local_2c,iVar2,0x80);

    FUN_8006ac90(auStack_60,&DAT_801b9a6c,0x14,0x8a,0);
    FUN_8006bef4(iVar1 + 0x30,param_1,0x10,0x7a);
    FUN_8007da44(param_1,0x220);

    *(undefined2 *)(iVar1 + 0x54) = 0xb0;
    *(undefined2 *)(iVar1 + 0x56) = 0xc6;
    FUN_8006bd08(iVar1 + 0x4c,param_1);

    *(undefined2 *)(iVar1 + 0x54) = 0xb0;
    *(undefined2 *)(iVar1 + 0x56) = 0x6e;
    FUN_8006bd08(iVar1 + 0x4c,param_1);

    FUN_8007da44(param_1,0x220);

    local_24 = 0x2141414;
    local_3c = 0x160;
    local_3e = 0x6e;
    local_28 = 0x25a5a5a;
    local_40 = 0;
    local_3a = 0x58;

    local_38 = FUN_8006b548(&local_30,&local_28,iVar2,0x80);
    local_34 = FUN_8006b548(&local_30,&local_24,iVar2,0x80);

    FUN_8006b6e4(iVar3,&local_40);
    FUN_8007da44(iVar3,0x200);
  }

  FUN_8006e5b8(iVar1 + 0x60,param_1,auStack_60);
  FUN_8006e5b8(iVar1 + 0xf8,param_1,auStack_60);
  FUN_8006e5b8(iVar1 + 400,param_1,auStack_60);
  FUN_8006e5b8(iVar1 + 0x228,param_1,auStack_60);
  FUN_8006daf8(&LAB_global__8004b704,param_1,auStack_60);
  FUN_8007da44(param_1,0x20);
  FUN_8006d50c(&DAT_global__8004b724,iVar3);
  FUN_8006e5b8(iVar1 + 0x2c0,param_1,auStack_60);

  (**(code **)(iVar1 + 4))(2,param_1);
  return;
}

void FUN_global__80016254(void)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 auStack_7240 [912];
  undefined4 auStack_6400 [6398];

  FUN_80082fac(&LAB_global__80021104,auStack_7240);

  puVar6 = &DAT_801b9630;
  puVar5 = (undefined4 *)((int)auStack_7240 + (uint)DAT_801c98e0 * 0xe47);
  puVar4 = (undefined4 *)((int)auStack_6400 + (uint)DAT_801c98e0 * 0xe47);

  if (((uint)puVar5 & 3) == 0) {

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
    } while (puVar5 != puVar4);
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
    } while (puVar5 != puVar4);
  }

  uVar1 = *(undefined *)(puVar5 + 1);
  uVar2 = *(undefined *)((int)puVar5 + 5);
  uVar3 = *(undefined *)((int)puVar5 + 6);

  *puVar6 = *puVar5;
  *(undefined *)(puVar6 + 1) = uVar1;
  *(undefined *)((int)puVar6 + 5) = uVar2;
  *(undefined *)((int)puVar6 + 6) = uVar3;
  return;
}

void FUN_global__8001636c(void)

{

  FUN_global__80016254();

  FUN_global__8001da08();
  return;
}

void FUN_global__80016394(undefined *param_1,undefined *param_2)

{
  undefined uVar1;

  *param_1 = *param_2;

  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);

  uVar1 = param_2[1];

  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined2 *)(param_1 + 0x12) = 0x80;

  param_1[8] = uVar1;
  return;
}

void FUN_global__800163c8(int param_1)

{
  short sVar1;

  if (*(short *)(param_1 + 0x10) < 0) {

    if (*(short *)(param_1 + 0x10) < -1) {
      *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar1;

    if (0xb < sVar1) {
      *(undefined2 *)(param_1 + 0x10) = 0xc;
      return;
    }
  }
  return;
}

void FUN_global__80016410(byte *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  int local_40;
  int local_3c;
  ushort local_38;
  int local_30;

  iVar11 = 1;

  piVar7 = *(int **)(param_1 + 0xc);

  uVar5 = 0;

  if (*(short *)(param_1 + 0x10) != -1) {

    iVar10 = (int)*(short *)(param_1 + 4);
    iVar12 = (int)*(short *)(param_1 + 6);

    iVar6 = (int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11;

    if ((*param_1 & 0x60) == 0x20) {
      iVar10 = iVar10 + iVar6;
    }
    else if ((*param_1 & 0x60) == 0x40) {
      iVar10 = iVar10 - iVar6;
    }

    iVar6 = (int)*(short *)(param_1 + 0x10);

    if (iVar6 < 0) {
      iVar11 = iVar6 + 0xd;
      if (-2 < iVar6) {
        return;
      }

      local_42 = ((short)*(ushort *)(*(int *)(param_1 + 0xc) + 6) >> 1) -
                 (short)((((int)((uint)*(ushort *)(*(int *)(param_1 + 0xc) + 6) << 0x10) >> 0x11) *
                         iVar11) / 0xc);

      iVar6 = ((uint)param_1[8] + (int)(-(uint)param_1[8] * iVar11) / 0xc) * 2;
      if (0xc0 < iVar6) {
        iVar6 = 0xc0;
      }

      sVar2 = (short)*(ushort *)(piVar7 + 1) >> 1;
      sVar1 = (short)((*(short *)(param_1 + 2) * iVar11) / 0xc);
      local_48 = (short)((*(short *)(piVar7 + 1) * iVar11) / 0xc);

      local_44 = (sVar2 * 2 + sVar1) - local_48;
      local_46 = *(short *)(param_1 + 6) - local_42;
      local_42 = local_42 * 2;
      sVar2 = (short)iVar10 - sVar2;
      local_48 = sVar2 + local_48;

      local_40 = 0;
      local_3c = iVar6;
      FUN_8006b61c(param_2,&local_48);

      local_48 = sVar2 - sVar1;
      local_3c = 0;
      local_40 = iVar6;
      FUN_8006b61c(param_2,&local_48);

      uVar4 = 0x20;
    }
    else {

      uVar8 = (uint)param_1[8];
      uVar9 = uVar8;

      if (iVar6 < 0xc) {
        uVar9 = (int)(uVar8 * iVar6) / 0xc;
        uVar5 = uVar8 - uVar9;
        iVar11 = ((int)*(short *)(param_1 + 2) * (0xc - iVar6)) / 0xc;
      }

      local_30 = uVar9 * (int)*(short *)(param_1 + 0x12);

      uVar8 = (*param_1 & 0x18) << 2;
      local_38 = (ushort)uVar8;
      uVar9 = local_30 >> 7;

      if ((*param_1 & 4) != 0 && iVar6 < 0xc) {

        uVar5 = uVar5 | uVar5 << 8 | uVar5 << 0x10 | 0x2000000;

        piVar3 = (int *)FUN_80081478(param_2,uVar5);
        *piVar3 = ((iVar10 - iVar11) - ((int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11)) +
                  (iVar12 - ((int)((uint)*(ushort *)((int)piVar7 + 6) << 0x10) >> 0x11)) * 0x10000;
        piVar3[1] = *piVar7;
        piVar3[2] = piVar7[1];

        piVar3 = (int *)FUN_80081478(param_2,uVar5);
        *piVar3 = ((iVar10 + iVar11) - ((int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11)) +
                  (iVar12 - ((int)((uint)*(ushort *)((int)piVar7 + 6) << 0x10) >> 0x11)) * 0x10000;
        piVar3[1] = *piVar7;
        piVar3[2] = piVar7[1];

        FUN_8007da44(param_2,*(ushort *)(piVar7 + 2) | uVar8);
      }

      if ((*param_1 & 2) == 0) {

        piVar3 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10);
        *piVar3 = (iVar10 - ((int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11)) +
                  (iVar12 - ((int)((uint)*(ushort *)((int)piVar7 + 6) << 0x10) >> 0x11)) * 0x10000;
        piVar3[1] = *piVar7;
        piVar3[2] = piVar7[1];
      }
      else {

        piVar3 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10 | 0x2000000);
        *piVar3 = (iVar10 - ((int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11)) +
                  (iVar12 - ((int)((uint)*(ushort *)((int)piVar7 + 6) << 0x10) >> 0x11)) * 0x10000;
        piVar3[1] = *piVar7;
        piVar3[2] = piVar7[1];
        FUN_8007da44(param_2,*(ushort *)(piVar7 + 2) | uVar8);

        if ((*param_1 & 1) != 0) {
          if (param_3 == 0) {
            uVar9 = local_30 >> 8;
          }
          else {

            piVar3 = (int *)FUN_80081478(param_2,0x2000000);
            *piVar3 = (iVar10 - ((int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11)) +
                      (iVar12 - ((int)((uint)*(ushort *)((int)piVar7 + 6) << 0x10) >> 0x11)) *
                      0x10000;
            piVar3[1] = *piVar7;
            piVar3[2] = piVar7[1];
            FUN_8007da44(param_2,*(undefined2 *)(piVar7 + 2));
          }

          piVar3 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10 | 0x2000000);
          *piVar3 = (iVar10 - ((int)((uint)*(ushort *)(piVar7 + 1) << 0x10) >> 0x11)) +
                    (iVar12 - ((int)((uint)*(ushort *)((int)piVar7 + 6) << 0x10) >> 0x11)) * 0x10000
          ;
          piVar3[1] = *piVar7;
          piVar3[2] = piVar7[1];
          FUN_8007da44(param_2,*(ushort *)(piVar7 + 2) | 0x40);
        }
      }
      uVar4 = *(ushort *)(piVar7 + 2) | local_38;
    }
    FUN_8007da44(param_2,uVar4);
  }
  return;
}

void FUN_global__800169b0(void)

{
  undefined4 uVar1;

  uVar1 = DAT_800a8d60;

  if (DAT_801c98e0 == '\0') {

    FUN_8007f174(DAT_800a8d60);

    FUN_8006ecd8(uVar1,&DAT_801efb39);
    FUN_8006ecd8(uVar1,&DAT_801efb4a);
  }
  return;
}

void FUN_global__80016a10(undefined4 param_1)

{

  if (DAT_801c98e0 == '\0') {

    FUN_8006ecd8(DAT_800a8d60,param_1);
  }
  return;
}

void FUN_global__80016a48(void)

{

  if (DAT_801c98e0 == '\0') {

    FUN_global__800169b0();

    FUN_global__80016a10(DAT_800b121c);
    FUN_global__80016a10(DAT_800b1220);
  }
  return;
}

void FUN_global__80016a94
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

    FUN_8007da44(param_1,0x220);
  }
  return;
}

uint FUN_global__80017d74(undefined *param_1)

{
  uint uVar1;

  uVar1 = 0;

  switch(*param_1) {
  case 0:
    return (uint)DAT_801c98e1._1_1_;
  case 1:
    return (uint)DAT_801c98e1._2_1_;
  case 2:
    return (uint)DAT_801c98e1._3_1_;
  case 3:
    return (uint)(byte)DAT_801c98e5;
  case 4:
    return (uint)DAT_801c98e5._1_1_;
  case 5:
    return (int)DAT_801c98e5._2_1_;
  case 6:
    return (int)DAT_801c98e5._3_1_;
  case 7:
    return (uint)DAT_801c998e;
  case 8:
    return (uint)DAT_801c998f;
  case 9:
    return (uint)DAT_801c9990;
  case 10:
    return (uint)DAT_801c9991;
  case 0xb:
    return (uint)DAT_801c9992;
  case 0xc:
    return (uint)DAT_801c9993;
  case 0xd:
    return (uint)DAT_801c9994;
  case 0xe:
    uVar1 = (uint)(DAT_801c9916 == '\0');
  }
  return uVar1;
}

void FUN_global__80017e68(byte *param_1,int param_2)

{
  undefined uVar1;

  if (*param_1 < 0xf) {
    uVar1 = (undefined)param_2;
    switch(*param_1) {
    case 0:

      DAT_801c98e1._1_1_ = param_2 != 0;
      return;
    case 1:

      DAT_801c98e1._2_1_ = uVar1;
      return;
    case 2:

      DAT_801c98e1._3_1_ = uVar1;
      return;
    case 3:
      DAT_801c98e5._0_1_ = param_2 != 0;
      return;
    case 4:
      DAT_801c98e5._1_1_ = uVar1;
      return;
    case 5:
      DAT_801c98e5._2_1_ = uVar1;
      return;
    case 6:
      DAT_801c98e5._3_1_ = uVar1;
      return;
    case 7:
      DAT_801c998e = uVar1;
      return;
    case 8:
      DAT_801c998f = uVar1;
      return;
    case 9:
      DAT_801c9990 = uVar1;
      return;
    case 10:
      DAT_801c9991 = uVar1;
      return;
    case 0xb:
      DAT_801c9992 = uVar1;
      return;
    case 0xc:
      DAT_801c9993 = uVar1;
      return;
    case 0xd:
      DAT_801c9994 = uVar1;
      return;
    case 0xe:
      DAT_801c9916 = param_2 != 1;
      DAT_801c9968 = DAT_801c9916;
    }
  }
  return;
}

bool FUN_global__80017f2c(int param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  cVar1 = *(char *)(param_1 + 1);

  if (cVar1 == '\x02') {

    iVar3 = FUN_global__80017d74(param_1);
    sVar2 = *(short *)(param_1 + 2);

    iVar5 = iVar3 + param_2 + param_3;
    goto LAB_global__80018004;
  }

  if (cVar1 < '\x03') {
    if (cVar1 != '\x01') goto LAB_global__80017fec;

    iVar3 = FUN_global__80017d74(param_1);
    param_2 = param_2 << 4;

    iVar5 = FUN_global__80017d74(param_1);
    iVar4 = iVar5 + 0xf;

    if (iVar4 < 0) {
      iVar4 = iVar5 + 0x1e;
    }

    iVar5 = (iVar4 >> 4) << 4;
  }
  else {
    if (cVar1 == '\x03') {
      param_2 = param_2 + param_3;
    }
LAB_global__80017fec:
    iVar5 = FUN_global__80017d74(param_1);
    iVar3 = iVar5;
  }
  sVar2 = *(short *)(param_1 + 2);
  iVar5 = iVar5 + param_2;
LAB_global__80018004:
  if (iVar5 < sVar2) {
    iVar5 = (int)sVar2;
  }
  if (*(short *)(param_1 + 4) <= iVar5) {
    iVar5 = *(short *)(param_1 + 4) + -1;
  }
  FUN_global__80017e68(param_1,iVar5);
  return iVar3 != iVar5;
}

void FUN_global__8001805c
               (int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               int param_6)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  undefined auStack_d8 [12];
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined auStack_b8 [64];
  undefined auStack_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;

  local_38 = 0x250463c;

  iVar6 = FUN_global__80017d74();

  if (param_6 != 0) {
    local_38 = 0x260503c;
  }

  FUN_8006ac68(auStack_d8,0x1e);
  local_cc = local_cc & 0xff9fffff | 0x200000;
  local_c8 = param_2;
  FUN_8007da80(auStack_d8,&DAT_801b95c0);

  local_c4 = FUN_8006b548(&DAT_global__8004bccc,&local_38,param_5,0x80);

  FUN_8006af40(auStack_d8,*(undefined4 *)(param_1 + 0xc),param_3 + *(short *)(param_1 + 6),param_4,1
               ,0xfffffffe,0);

  cVar1 = *(char *)(param_1 + 1);
  sVar5 = (short)param_4;

  if (cVar1 == '\x01') {
    iVar8 = 0;
    do {

      local_38 = 0x2783c28;
      if (iVar6 <= iVar8 << 4) {
        local_38 = 0x23c1e0c;
      }

      uVar9 = FUN_8006b548(&DAT_global__8004bccc,&local_38,param_5,0x80);

      psVar7 = (short *)FUN_8007d024(param_2,uVar9);
      sVar4 = *(short *)(param_1 + 8);
      iVar8 = iVar8 + 1;

      psVar7[1] = sVar5 + -0x14;
      psVar7[2] = 5;
      psVar7[3] = 0x14;
      *psVar7 = sVar4 + (short)param_3;

      param_3 = param_3 + 6;
    } while (iVar8 < 0x10);
  }

  else if (cVar1 < '\x02') {
    iVar8 = 0;
    if (cVar1 == '\0') {

      for (; iVar8 < *(short *)(param_1 + 4); iVar8 = iVar8 + 1) {

        local_34 = 0x2404040;

        uVar9 = *(undefined4 *)(iVar8 * 4 + *(int *)(param_1 + 0x10));

        if (iVar8 == iVar6) {
          local_34 = 0x20a3c78;
        }

        local_c4 = FUN_8006b548(&DAT_global__8004bccc,&local_34,param_5,0x80);

        FUN_8006af40(auStack_d8,uVar9,param_3 + *(short *)(param_1 + 8),param_4,1,0xfffffffe,0);

        param_3 = param_3 + 0x3c;
      }
    }
  }

  else if (cVar1 == '\x02') {

    local_38 = 0x2785030;
    uVar9 = FUN_8006b548(&DAT_global__8004bccc,&local_38,param_5,0x80);
    psVar7 = (short *)FUN_8007d024(param_2,uVar9);
    sVar4 = *(short *)(param_1 + 8);

    psVar7[2] = 0x8c;
    psVar7[1] = sVar5 + -10;
    psVar7[3] = 4;
    *psVar7 = sVar4 + (short)param_3;

    sVar4 = *(short *)(param_1 + 2);
    sVar2 = *(short *)(param_1 + 4);
    local_30 = 0;
    sVar3 = *(short *)(param_1 + 8);

    local_38 = 0x2909090;
    uVar9 = FUN_8006b548(&DAT_global__8004bccc,&local_38,param_5,0x80);
    psVar7 = (short *)FUN_8007d024(param_2,uVar9);

    *psVar7 = (short)param_3 + sVar3 + (short)(((iVar6 - sVar4) * 0x8c) / ((int)sVar2 - (int)sVar4))
              + -1;
    psVar7[2] = 2;
    iVar8 = 0;
    psVar7[1] = sVar5 + -0xd;
    psVar7[3] = 10;

    if (iVar6 < 0) {
      local_30 = iVar6 * -10;
    }
    else {
      iVar8 = iVar6 * 10;
    }

    param_4 = param_4 + 0x12;

    FUN_8006ae28(auStack_d8,&DAT_801b9cad,param_3 + *(short *)(param_1 + 8) + 0x10,param_4,1);
    FUN_8008cf34(auStack_b8,&DAT_801b9cb7,iVar8);
    FUN_8006b184(auStack_d8,auStack_b8,param_3 + *(short *)(param_1 + 8) + 0x38,param_4,1,0xfffffffe
                 ,0);

    FUN_8006ae28(auStack_d8,&DAT_801b9cb2,param_3 + *(short *)(param_1 + 8) + 0x60,param_4,1);
    FUN_8008cf34(auStack_b8,&DAT_801b9cb7,local_30);
    FUN_8006b184(auStack_d8,auStack_b8,param_3 + *(short *)(param_1 + 8) + 0x88,param_4,1,0xfffffffe
                 ,0);
  }

  else if (cVar1 == '\x03') {

    FUN_8008cedc(auStack_78,&DAT_801b9b29);

    if (1 < iVar6) {
      FUN_8008cf34(auStack_78,&DAT_801b9b32,iVar6);
    }

    local_38 = 0x2783c28;
    local_c4 = FUN_8006b548(&DAT_global__8004bccc,&local_38,param_5,0x80);

    FUN_8006af40(auStack_d8,auStack_78,param_3 + *(short *)(param_1 + 8),param_4,1,0xfffffffe,0);
  }
  return;
}

int FUN_global__80019218(int param_1)

{
  int iVar1;

  if (param_1 == 9) {
    return 0x81;
  }
  if (param_1 == 10) {
    iVar1 = 0x82;
  }
  else {
    iVar1 = 0x83;
    if (param_1 != 4) {
      return param_1;
    }
  }
  return iVar1;
}

int FUN_global__80019250(int param_1)

{
  int iVar1;

  if (param_1 == 0x81) {
    return 9;
  }
  if (param_1 == 0x82) {
    iVar1 = 10;
  }
  else {
    iVar1 = 4;
    if (param_1 != 0x83) {
      return param_1;
    }
  }
  return iVar1;
}

int FUN_global__80019288(int param_1)

{

  if (param_1 == 0xc3) {
    return 3;
  }
  if (param_1 == 0xa3) {
    return 2;
  }
  if (param_1 == 0xc2) {
    return 1;
  }
  if (param_1 == 0xa2) {
    return 0;
  }
  if (param_1 == 0xc1) {
    return 7;
  }
  if (param_1 == 0xa1) {
    return 6;
  }
  if (param_1 != 0xc0) {

    return (uint)(param_1 == 0xa0) << 2;
  }
  return 5;
}

int FUN_global__80019308(void)

{
  int iVar1;

  iVar1 = FUN_global__80019250();

  if (iVar1 - 9U < 2 || iVar1 == 4) {

    iVar1 = *(short *)(&LAB_global__8004c2fc + iVar1 * 2) * 0xc + -0x7ffb3e2c;
  }
  else {

    iVar1 = 0;
  }

  return iVar1;
}

void FUN_global__8001937c(undefined4 *param_1)

{
  *param_1 = 3;
  return;
}

void FUN_global__80019388(int *param_1,int param_2,int param_3)

{
  undefined uVar1;
  undefined uVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

  iVar6 = 3;
  iVar5 = 0;
  bVar3 = *(byte *)(param_2 + 2);

  if (bVar3 == 4) {
    iVar5 = 0;
  }
  else if (bVar3 < 5) {
    if (bVar3 != 2) {
      *param_1 = 3;
      goto LAB_global__80019418;
    }
    iVar5 = 2;
  }
  else {
    if ((bVar3 != 5) && (bVar3 != 7)) {
      *param_1 = 3;
      goto LAB_global__80019418;
    }
    iVar5 = 1;
  }

  *param_1 = iVar5;
  iVar6 = iVar5;

LAB_global__80019418:

  if (iVar6 != 3) {

    piVar4 = (int *)((int)&DAT_801c98ea + iVar5 * 0xb + param_3 * 0x52);

    iVar6 = piVar4[1];
    uVar1 = *(undefined *)(piVar4 + 2);
    uVar2 = *(undefined *)((int)piVar4 + 9);

    param_1[2] = *piVar4;
    param_1[3] = iVar6;
    *(undefined *)(param_1 + 4) = uVar1;
    *(undefined *)((int)param_1 + 0x11) = uVar2;
    *(undefined *)((int)param_1 + 0x12) = *(undefined *)((int)piVar4 + 10);

    param_1[1] = *(int *)((int)&DAT_801c98ea + iVar5 * 4 + 0x2d + param_3 * 0x52);
  }
  return;
}

void FUN_global__80019498(int *param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar5 = 0;
  iVar4 = *param_1;

  if (iVar4 == 1) {
    iVar5 = 1;
    iVar6 = iVar5;
  }
  else {
    iVar6 = 3;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        iVar5 = 0;
        iVar6 = iVar5;
      }
    }
    else if (iVar4 == 2) {
      iVar5 = 2;
      iVar6 = iVar5;
    }
  }

  if (iVar6 != 3) {

    piVar3 = (int *)((int)&DAT_801c98ea + iVar5 * 0xb + param_2 * 0x52);

    iVar4 = param_1[3];
    uVar1 = *(undefined *)(param_1 + 4);
    uVar2 = *(undefined *)((int)param_1 + 0x11);

    *piVar3 = param_1[2];
    piVar3[1] = iVar4;
    *(undefined *)(piVar3 + 2) = uVar1;
    *(undefined *)((int)piVar3 + 9) = uVar2;
    *(undefined *)((int)piVar3 + 10) = *(undefined *)((int)param_1 + 0x12);

    *(int *)((int)&DAT_801c98ea + iVar5 * 4 + 0x2d + param_2 * 0x52) = param_1[1];
  }
  return;
}

int FUN_global__80019598(int *param_1,uint param_2)

{
  int iVar1;

  for (iVar1 = 4; iVar1 < 10; iVar1 = iVar1 + 1) {
    if (*(byte *)((int)param_1 + iVar1 + 8) == param_2) {
      return iVar1;
    }
  }

  iVar1 = *param_1;

  if (iVar1 == 1) {

    if (*(byte *)((int)param_1 + 10) == param_2) {
      return 2;
    }

    if (*(byte *)((int)param_1 + 0xb) != param_2) {

      if (((int)((uint)*(byte *)((int)param_1 + 10) << 0x18) < 0) &&
         (*(byte *)((int)param_1 + 6) == param_2)) {
        return 2;
      }

      if (-1 < *(char *)((int)param_1 + 0xb)) {
        return -1;
      }

      if (*(byte *)((int)param_1 + 7) != param_2) {
        return -1;
      }
      return 3;
    }
  }
  else {

    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return -1;
      }

      if (*(byte *)((int)param_1 + 10) == param_2) {
        return 2;
      }
    }
    else {
      if (iVar1 != 2) {
        return -1;
      }

      if (*(byte *)((int)param_1 + 10) == param_2) {
        return 2;
      }
      if (*(byte *)((int)param_1 + 0xb) == param_2) {
        return 3;
      }

      param_2 = FUN_global__80019218();
      if (*(byte *)((int)param_1 + 10) == param_2) {
        return 2;
      }
    }

    if (*(byte *)((int)param_1 + 0xb) != param_2) {
      return -1;
    }
  }
  return 3;
}

void FUN_global__800196e8(int *param_1,int param_2,undefined4 param_3)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;

  iVar3 = FUN_global__80019598(param_1,param_3);
  iVar4 = *param_1;
  uVar2 = (undefined)param_3;

  if (iVar4 == 1) {

    if (-1 < iVar3) {

      uVar1 = *(undefined *)((int)param_1 + param_2 + 8);

      if (param_2 == 2) {

        if (*(char *)((int)param_1 + 10) < '\0') {
          uVar1 = *(undefined *)((int)param_1 + 6);
        }
      }

      else if ((param_2 == 3) && (*(char *)((int)param_1 + 0xb) < '\0')) {

        uVar1 = *(undefined *)((int)param_1 + 7);
      }

      if (iVar3 == 2) {
        if (*(char *)((int)param_1 + 10) < '\0') {

          *(undefined *)((int)param_1 + 6) = uVar1;
        }
        else {

          *(undefined *)((int)param_1 + 10) = uVar1;
        }
      }

      else if (iVar3 == 3) {
        if (*(char *)((int)param_1 + 0xb) < '\0') {

          *(undefined *)((int)param_1 + 7) = uVar1;
        }
        else {

          *(undefined *)((int)param_1 + 0xb) = uVar1;
        }
      }

      else if (-1 < iVar3) {
        *(undefined *)((int)param_1 + iVar3 + 8) = uVar1;
      }
    }

    if (param_2 != 2) {
      if (param_2 != 3) {

        *(undefined *)((int)param_1 + param_2 + 8) = uVar2;
        return;
      }

      if (*(char *)((int)param_1 + 10) < '\0') {

        *(undefined *)((int)param_1 + 10) = *(undefined *)((int)param_1 + 6);
        *(undefined *)((int)param_1 + 5) = 0;
      }
      *(undefined *)((int)param_1 + 0xb) = uVar2;
      return;
    }

    if (*(char *)((int)param_1 + 0xb) < '\0') {

      *(undefined *)((int)param_1 + 0xb) = *(undefined *)((int)param_1 + 7);
      *(undefined *)((int)param_1 + 5) = 0;
    }
    *(undefined *)((int)param_1 + 10) = uVar2;
    return;
  }

  if (iVar4 < 2) {
    if (iVar4 != 0) {
      return;
    }

    if (-1 < iVar3) {

      *(undefined *)((int)param_1 + iVar3 + 8) = *(undefined *)((int)param_1 + param_2 + 8);
    }
  }
  else {
    if (iVar4 != 2) {
      return;
    }

    if (-1 < iVar3) {

      if ((iVar3 < 4) && (1 < iVar3)) {

        uVar1 = FUN_global__80019218(*(undefined *)((int)param_1 + param_2 + 8));
        *(undefined *)((int)param_1 + iVar3 + 8) = uVar1;
      }

      else if (-1 < iVar3) {

        uVar1 = FUN_global__80019250(*(undefined *)((int)param_1 + param_2 + 8));
        *(undefined *)((int)param_1 + iVar3 + 8) = uVar1;
      }
    }

    if ((param_2 < 4) && (1 < param_2)) {

      uVar2 = FUN_global__80019218(param_3);
      *(undefined *)((int)param_1 + param_2 + 8) = uVar2;
      return;
    }
  }

  *(undefined *)((int)param_1 + param_2 + 8) = uVar2;
  return;
}

undefined4 FUN_global__80019934(int *param_1,uint *param_2)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = param_2[1];

  if ((*param_2 & 0x10000) != 0) {

    if ((uVar3 & 0xfffeffff) == 0) {
      return 0;
    }

LAB_global__80019a60:
    FUN_80060840(0);
    return 0;
  }

  iVar2 = *param_1;

  if (iVar2 == 1) {

    if ((uVar3 & 0xfffffff0) != 0) goto LAB_global__80019a60;

    uVar4 = (uint)*(byte *)(param_1 + 1);

    if (((uVar3 & 4) != 0) && (uVar4 = uVar4 - 1, (int)uVar4 < 0)) {
      uVar4 = 2;
    }

    if (((uVar3 & 8) != 0) && (uVar4 = uVar4 + 1, 2 < (int)uVar4)) {
      uVar4 = 0;
    }

    if (uVar4 == *(byte *)(param_1 + 1)) {
      return 1;
    }

    FUN_80060840(5);
    *(char *)(param_1 + 1) = (char)uVar4;

    if (uVar4 == 0) {
      uVar1 = 0x82;
      *(undefined *)(param_1 + 2) = 0x82;
      goto LAB_global__80019b04;
    }
    if (uVar4 == 1) {
      uVar1 = 0x80;
      *(undefined *)(param_1 + 2) = 0x80;
      goto LAB_global__80019b04;
    }
    *(undefined *)(param_1 + 2) = 2;
  }
  else {

    if (iVar2 < 2) {
      if (iVar2 != 0) {
        return 1;
      }

      if ((uVar3 & 0xfffffffc) != 0) {
        FUN_80060840(0);
        return 0;
      }
      return 1;
    }
    if (iVar2 != 2) {
      return 1;
    }

    if ((uVar3 & 0xfffffff0) != 0) goto LAB_global__80019a60;

    uVar4 = (uint)*(byte *)(param_1 + 1);

    if (((uVar3 & 4) != 0) && (uVar4 = uVar4 - 1, (int)uVar4 < 0)) {
      uVar4 = 1;
    }

    if (((uVar3 & 8) != 0) && (uVar4 = uVar4 + 1, 1 < (int)uVar4)) {
      uVar4 = 0;
    }

    if (uVar4 == *(byte *)(param_1 + 1)) {
      return 1;
    }

    FUN_80060840(5);
    *(char *)(param_1 + 1) = (char)uVar4;

    if (uVar4 == 0) {
      uVar1 = 0x80;
      *(undefined *)(param_1 + 2) = 0x80;
      goto LAB_global__80019b04;
    }
    *(undefined *)(param_1 + 2) = 2;
  }

  uVar1 = 3;
LAB_global__80019b04:

  *(undefined *)((int)param_1 + 9) = uVar1;
  return 0;
}

undefined4 FUN_global__80019b24(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;

  uVar1 = param_2[1];
  uVar2 = 1;

  if ((((*param_2 & 0x10000) == 0) && (uVar2 = 1, *param_1 == 1)) && (uVar2 = 1, (uVar1 & 0xc) != 0)
     ) {

    uVar3 = (uint)*(byte *)((int)param_1 + 5);

    if (((uVar1 & 4) != 0) && (uVar3 = uVar3 - 1, (int)uVar3 < 0)) {
      uVar3 = 8;
    }

    if (((uVar1 & 8) != 0) && (uVar3 = uVar3 + 1, 8 < (int)uVar3)) {
      uVar3 = 0;
    }

    uVar2 = 1;

    if (uVar3 != *(byte *)((int)param_1 + 5)) {
      FUN_80060840(5);
      uVar2 = 0;

      if (*(char *)((int)param_1 + 5) == '\0') {

        *(undefined *)((int)param_1 + 6) = *(undefined *)((int)param_1 + 10);
        *(undefined *)((int)param_1 + 7) = *(undefined *)((int)param_1 + 0xb);
      }

      *(char *)((int)param_1 + 5) = (char)uVar3;

      if (uVar3 == 0) {

        *(undefined *)((int)param_1 + 10) = *(undefined *)((int)param_1 + 6);
        *(undefined *)((int)param_1 + 0xb) = *(undefined *)((int)param_1 + 7);
      }
      else {

        *(undefined1 *)((int)param_1 + 10) = (&DAT_global__8004c120)[uVar3 * 4];

        *(undefined1 *)((int)param_1 + 0xb) = (&DAT_global__8004c122)[uVar3 * 4];
      }
    }
  }
  return uVar2;
}

void FUN_global__80019c4c(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;

  if (iVar1 == 1) {

    param_1[2] = 0xa098282;
    param_1[3] = 0x50d080b;
    *(undefined *)(param_1 + 4) = 0xc;
    *(undefined *)((int)param_1 + 0x11) = 4;
    *(undefined *)((int)param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 1) = 0;
    *(undefined *)((int)param_1 + 5) = 0;
    return;
  }

  if (iVar1 < 2) {
    if (iVar1 != 0) {
      return;
    }

    param_1[2] = 0xa090302;
    param_1[3] = 0x50d080b;
    *(undefined *)(param_1 + 4) = 0xc;
    *(undefined *)((int)param_1 + 0x11) = 4;
    *(undefined *)((int)param_1 + 0x12) = 0;
    return;
  }
  if (iVar1 != 2) {
    return;
  }

  param_1[2] = -0x7d7e7f80;
  param_1[3] = 0x100080b;
  *(undefined *)(param_1 + 4) = 0xc;
  *(undefined *)((int)param_1 + 0x11) = 4;
  *(undefined *)((int)param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 1) = 0;
  return;
}

undefined4 FUN_global__80019d5c(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar2 = -1;

  iVar4 = (int)*(short *)(&LAB_global__8004c0dc + param_3 * 2);
  uVar3 = param_2[1];

  if (iVar4 == -1) {

    if ((uVar3 & 0xa00) != 0) {
      FUN_global__80019c4c(param_1);
      FUN_80060840(1);
      return 1;
    }
    return 0;
  }

  if (iVar4 < 0) {
    if (iVar4 == -2) {

      if ((uVar3 & 0xa00) == 0) {
        return 0;
      }
      return 2;
    }
  }

  else if (iVar4 == 0) {
    iVar2 = FUN_global__80019934(param_1,param_2);
    if (iVar2 == 0) {
      return 1;
    }
    return 0;
  }

  if ((((*param_1 == 1) && (iVar4 < 4)) && (1 < iVar4)) &&
     (iVar1 = FUN_global__80019b24(param_1,param_2), iVar1 == 0)) {
    return 1;
  }

  if ((*param_2 & 0x10000) == 0) {

    if ((uVar3 & 0x10) != 0) {
      iVar2 = 4;
    }
    if ((uVar3 & 0x20) != 0) {
      iVar2 = 5;
    }
    if ((uVar3 & 0x1000) != 0) {
      iVar2 = 0xc;
    }
    if ((uVar3 & 0x2000) != 0) {
      iVar2 = 0xd;
    }
    if ((uVar3 & 0x200) != 0) {
      iVar2 = 9;
    }
    if ((uVar3 & 0x100) != 0) {
      iVar2 = 8;
    }
    if ((uVar3 & 0x400) != 0) {
      iVar2 = 10;
    }
    if ((uVar3 & 0x800) != 0) {
      iVar2 = 0xb;
    }
  }
  else {

    if ((uVar3 & 1) != 0) {
      iVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      iVar2 = 1;
    }
    if ((uVar3 & 4) != 0) {
      iVar2 = 2;
    }
    if ((uVar3 & 8) != 0) {
      iVar2 = 3;
    }
  }

  if (-1 < iVar2) {
    FUN_80060840(1);
    FUN_global__800196e8(param_1,iVar4,iVar2);
    return 1;
  }
  return 0;
}

void FUN_global__80019f44
               (int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,undefined4 param_8)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined auStack_50 [12];
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined auStack_30 [8];

  FUN_8006ac68(auStack_50,0x1e);
  piVar8 = &DAT_global__8004c2ac;
  local_44 = local_44 & 0xff9fffff | 0x200000;
  local_40 = param_2;
  FUN_8007da80(auStack_50,&DAT_801b95c0);

  iVar5 = 0x30;
  local_3c = 0x142864;
  if (param_7 == param_6) {
    iVar5 = 0x80;
  }
  if (param_7 < 0) {
    iVar5 = 0x80;
  }

  iVar3 = *param_1;
  uVar9 = param_5 * iVar5 >> 7;

  if (iVar3 == 3) {
    return;
  }

  if (param_6 == 9) {
    if (param_7 < 0) {
      return;
    }
    FUN_8007da80(auStack_50,&DAT_801b95d0);
    local_3c = FUN_8006b548(&DAT_global__8004c0d0,&LAB_global__8004c0d8,uVar9,0x80);
    puVar6 = &DAT_801ba0f6;
    param_4 = param_4 + 6;
LAB_global__8001a0d0:
    FUN_8006adb4(auStack_50,puVar6,param_3,param_4,1);
    return;
  }

  if (param_6 < 10) {
    if (param_6 != 0) goto LAB_global__8001a370;

    if (iVar3 == 1) {

      if (*(char *)(param_1 + 1) == '\0') {
        piVar8 = (int *)0x8004c2b8;
      }
      else if (*(char *)(param_1 + 1) == '\x01') {
        piVar8 = (int *)0x8004c2c4;
      }

      piVar2 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10);
      *piVar2 = (param_3 - ((int)((uint)*(ushort *)(piVar8 + 1) << 0x10) >> 0x11)) +
                (param_4 - ((int)((uint)*(ushort *)((int)piVar8 + 6) << 0x10) >> 0x11)) * 0x10000;
      piVar2[1] = *piVar8;
      piVar2[2] = piVar8[1];
      FUN_8007da44(param_2,*(ushort *)(piVar8 + 2) | 0x20);
      if (param_7 != 0) {
        return;
      }

      FUN_8006ba48(auStack_30,param_2,param_3 + 0x10,param_4,6,10,param_8);
      FUN_8006ba48(auStack_30,param_2,param_3 + -0x10,param_4,0xfffffffa,10,param_8);
      uVar4 = 0x20;
      goto LAB_global__8001a5ec;
    }

    if (1 < iVar3) {
      if (iVar3 != 2) {
        return;
      }

      if (*(char *)(param_1 + 1) == '\0') {
        piVar8 = &DAT_global__8004c2d0;
      }

      piVar2 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10);
      *piVar2 = (param_3 - ((int)((uint)*(ushort *)(piVar8 + 1) << 0x10) >> 0x11)) +
                (param_4 - ((int)((uint)*(ushort *)((int)piVar8 + 6) << 0x10) >> 0x11)) * 0x10000;
      piVar2[1] = *piVar8;
      piVar2[2] = piVar8[1];
      FUN_8007da44(param_2,*(ushort *)(piVar8 + 2) | 0x20);
      if (param_7 != 0) {
        return;
      }

      FUN_8006ba48(auStack_30,param_2,param_3 + 0x10,param_4,6,10,param_8);
      FUN_8006ba48(auStack_30,param_2,param_3 + -0x10,param_4,0xfffffffa,10,param_8);
      uVar4 = 0x20;
      goto LAB_global__8001a5ec;
    }

    if (iVar3 != 0) {
      return;
    }

    piVar2 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10);
    *piVar2 = param_3 + -0x10 + (param_4 + -0xc) * 0x10000;
    piVar2[1] = 0x5ff648c0;
  }
  else {

    if (param_6 == 10) {
      if (param_7 < 0) {
        return;
      }
      FUN_8007da80(auStack_50,&DAT_801b95d0);
      local_3c = FUN_8006b548(&DAT_global__8004c0d0,&LAB_global__8004c0d8,uVar9,0x80);
      puVar6 = &DAT_801ba0ee;
      goto LAB_global__8001a0d0;
    }

LAB_global__8001a370:
    uVar7 = 0;

    switch(param_6) {
    case 1:
      uVar7 = (uint)*(byte *)((int)param_1 + 10);
      break;
    case 2:
      uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
      break;
    case 3:
      uVar7 = (uint)*(byte *)((int)param_1 + 0xd);
      break;
    case 4:
      uVar7 = (uint)*(byte *)(param_1 + 3);
      break;
    case 5:
      uVar7 = (uint)*(byte *)((int)param_1 + 0xe);
      break;
    case 6:
      uVar7 = (uint)*(byte *)((int)param_1 + 0xf);
      break;
    case 7:
      uVar7 = (uint)*(byte *)((int)param_1 + 0x11);
      break;
    case 8:
      uVar7 = (uint)*(byte *)(param_1 + 4);
    }

    iVar5 = *param_1;

    if (iVar5 == 1) {
      if (uVar7 < 0x80) {

        iVar5 = (int)(short)(&DAT_global__8004c2dc)[uVar7];
        iVar3 = -0x7ffb3ebc;
      }
      else {

        iVar5 = FUN_global__80019288(uVar7);
        iVar3 = -0x7ffb3db4;
      }
      piVar8 = (int *)(iVar5 * 0xc + iVar3);

      if (param_7 - 1U < 2 && param_6 == 1) {
        FUN_8006ba48(auStack_30,param_2,param_3 + 0x10,param_4 + 0xd,6,10,param_8);
        FUN_8006ba48(auStack_30,param_2,param_3 + -0x10,param_4 + 0xd,0xfffffffa,10,param_8);
        FUN_8007da44(param_2,0x20);
      }
    }

    else if (iVar5 < 2) {
      if (iVar5 == 0) {
        sVar1 = (&DAT_global__8004c2dc)[uVar7];
        iVar5 = -0x7ffb3ebc;
LAB_global__8001a578:
        piVar8 = (int *)(sVar1 * 0xc + iVar5);
      }
    }

    else if (iVar5 == 2) {
      iVar5 = FUN_global__80019250(uVar7);
      sVar1 = *(short *)(&LAB_global__8004c2fc + iVar5 * 2);
      iVar5 = -0x7ffb3e2c;
      goto LAB_global__8001a578;
    }

    piVar2 = (int *)FUN_80081478(param_2,uVar9 | uVar9 << 8 | uVar9 << 0x10);
    *piVar2 = (param_3 - ((int)((uint)*(ushort *)(piVar8 + 1) << 0x10) >> 0x11)) +
              (param_4 - ((int)((uint)*(ushort *)((int)piVar8 + 6) << 0x10) >> 0x11)) * 0x10000;
    piVar2[1] = *piVar8;
  }

  piVar2[2] = piVar8[1];
  uVar4 = *(ushort *)(piVar8 + 2) | 0x20;
LAB_global__8001a5ec:
  FUN_8007da44(param_2,uVar4);
  return;
}

void FUN_global__8001a624
               (undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined auStack_48 [12];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;

  FUN_8006ac68(auStack_48,0x1e);
  local_3c = local_3c & 0xff9fffff | 0x200000;
  local_38 = param_1;
  FUN_8007da80(auStack_48,&DAT_801b95c0);

  ppuVar4 = &PTR_DAT_global__8004c0f4;
  iVar3 = param_3;

  for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {

    local_34 = FUN_8006b548(&DAT_global__8004c0d0,&LAB_global__8004c0d2_2,param_4,0x80);

    puVar1 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;

    FUN_8006adb4(auStack_48,puVar1,param_2,iVar3,1);

    FUN_global__80019f44
              (&DAT_800b13d8,param_1,param_2 + -0x50,iVar3 + -10,param_4,iVar2,param_5,param_7);

    FUN_global__80019f44
              (&DAT_800b13f0,param_1,param_2 + 0x50,iVar3 + -10,param_4,iVar2,param_6,param_7);

    iVar3 = iVar3 + 0x1a;
  }

  if (-1 < param_5) {
    FUN_8007da80(auStack_48,&DAT_801b95d0);
    local_34 = 0xb3060;
    FUN_8006adb4(auStack_48,&DAT_801ba196,param_2,param_3 + -0x18,1);
  }
  return;
}

void FUN_global__8001a7e0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = 0;

  FUN_global__8001937c(&DAT_800b13d8);

  FUN_global__8001937c(&DAT_800b13f0);

  param_1[3] = 0xffff;
  return;
}

void FUN_global__8001a834(undefined2 *param_1)

{
  param_1[1] = 10;
  *param_1 = 10;
  param_1[3] = 4;
  return;
}

void FUN_global__8001a84c(undefined2 *param_1)

{
  param_1[1] = 0xffff;
  *param_1 = 0xffff;
  param_1[3] = 0xffff;
  return;
}

undefined4 FUN_global__8001a860(short *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  iVar2 = DAT_800a8d68;
  iVar5 = 1;
  iVar6 = 1;

  if (0 < param_1[3]) {
    param_2 = 0;
    param_1[3] = param_1[3] + -1;
  }

  sVar1 = param_1[2];
  param_1[2] = sVar1 + 1;
  if (0x2c < (short)(sVar1 + 1)) {
    param_1[2] = 0;
  }

  FUN_global__80019388(&DAT_800b13d8,iVar2 + 0xdc,0);
  FUN_global__80019388(&DAT_800b13f0,iVar2 + 0x140,1);

  if (param_2 != 0) {
    iVar5 = FUN_global__80019d5c(&DAT_800b13d8,iVar2 + 0x1a4,(int)*param_1);
    iVar6 = FUN_global__80019d5c(&DAT_800b13f0,iVar2 + 0x1b4,(int)param_1[1]);
  }

  FUN_global__80019498(&DAT_800b13d8,0);
  FUN_global__80019498(&DAT_800b13f0,1);

  uVar3 = 0;

  if (iVar5 != 2 && iVar6 != 2) {

    if (param_2 != 0 && iVar5 == 0) {
      iVar5 = (int)*param_1;
      uVar4 = *(uint *)(param_2 + 4) | *(uint *)(param_2 + 0xc);

      if (((uVar4 & 1) != 0) && (iVar5 = iVar5 + -1, iVar5 < 0)) {
        iVar5 = 10;
      }

      if (((uVar4 & 2) != 0) && (iVar5 = iVar5 + 1, 10 < iVar5)) {
        iVar5 = 0;
      }

      if (iVar5 != *param_1) {
        *param_1 = (short)iVar5;
        FUN_80060840(6);
      }
    }

    if (param_2 != 0 && iVar6 == 0) {
      iVar5 = (int)param_1[1];
      uVar4 = *(uint *)(iVar2 + 0x1b8) | *(uint *)(iVar2 + 0x1c0);

      if (((uVar4 & 1) != 0) && (iVar5 = iVar5 + -1, iVar5 < 0)) {
        iVar5 = 10;
      }

      if (((uVar4 & 2) != 0) && (iVar5 = iVar5 + 1, 10 < iVar5)) {
        iVar5 = 0;
      }

      if (iVar5 == param_1[1]) {
        return 0xffffffff;
      }
      param_1[1] = (short)iVar5;
      FUN_80060840(6);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

void FUN_global__8001aa84
               (short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{

  FUN_global__8001a624
            (param_2,param_3,param_4,param_5,(int)*param_1,(int)param_1[1],(int)param_1[2]);
  return;
}

void FUN_global__8001aad4(void)

{
  if (DAT_801c98e0 == '\0') {
    FUN_8007f174(DAT_800a8d60);
  }
  return;
}

void FUN_global__8001ab08(undefined4 param_1)

{
  if (DAT_801c98e0 == '\0') {
    FUN_8006ecd8(DAT_800a8d60,param_1);
  }
  return;
}

void FUN_global__8001ab40
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

void FUN_global__8001ac74(void)

{
  if (DAT_801c98e0 == '\0') {
    FUN_global__8001aad4();
    FUN_global__8001ab08(DAT_800b1408);
  }
  return;
}

void FUN_global__8001ac78(void)

{
  if (DAT_801c98e0 == '\0') {
    FUN_global__8001aad4();
    FUN_global__8001ab08(DAT_800b1408);
  }
  return;
}

void FUN_global__8001acb4(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *param_1;
  iVar2 = iVar1;

  if (iVar1 < 0x40) {
    iVar2 = 0x40;
  }

  if (0xc0 < iVar1) {
    iVar2 = 0xc0;
  }

  if (iVar2 < param_1[4]) {
    iVar2 = param_1[4];
  }

  if (param_1[3] < iVar2) {
    iVar2 = param_1[3];
  }
  *param_1 = iVar2;

  if (iVar2 - param_1[1] < param_1[4]) {
    param_1[1] = iVar2 - param_1[4];
  }
  if (param_1[3] < *param_1 + param_1[1]) {
    param_1[1] = param_1[3] - *param_1;
  }
  if (param_1[1] < 0) {
    param_1[1] = 0;
  }

  if (param_1[1] < param_1[2]) {
    param_1[2] = param_1[1];
  }
  if (param_1[2] < 0) {
    param_1[2] = 0;
  }
  return;
}

void FUN_global__8001ad9c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_global__8001acb4();
  return;
}

void FUN_global__8001adbc(int param_1,undefined4 param_2)

{

  *(undefined4 *)(param_1 + 4) = param_2;

  FUN_global__8001acb4();
  return;
}

void FUN_global__8001addc(undefined4 *param_1,undefined4 param_2)

{

  *param_1 = param_2;

  FUN_global__8001acb4();
  return;
}

void FUN_global__8001adfc(int param_1,int param_2,int param_3)

{
  int iVar1;

  iVar1 = param_2;

  if (param_2 < param_3) {
    iVar1 = param_3;
    param_3 = param_2;
  }

  *(int *)(param_1 + 0xc) = iVar1;

  *(int *)(param_1 + 0x10) = param_3;

  FUN_global__8001acb4();
  return;
}

void FUN_global__8001ae34
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined auStack_40 [12];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;

  uVar1 = 0x80;

  if (-1 < param_7) {
    uVar1 = 0x180;
  }

  FUN_8006ac68(auStack_40,0x1e);

  local_34 = local_34 & 0xff9fffff | 0x200000;

  local_30 = param_2;

  FUN_8007da80(auStack_40,&DAT_801b9620);

  local_2c = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c346_2,param_5,uVar1);

  FUN_8006ac90(auStack_40,param_6,param_3 + -0x76,param_4 + 0x2c,1);

  FUN_8007da80(auStack_40,&DAT_801b95c0);

  local_2c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,uVar1);

  FUN_8006ae28(auStack_40,&DAT_801ba212,param_3 + 0x6e,param_4 + 0x2c,1);
  return;
}

void FUN_global__8001af6c
               (int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_90 [12];
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined auStack_70 [64];
  undefined4 local_30;
  undefined4 local_2c;

  uVar1 = 0x80;
  local_2c = 0x80;
  local_30 = 0x80;

  if (-1 < param_6) {

    uVar1 = 0x180;
    local_2c = 0x180;
    local_30 = 0x180;

    if (param_6 == 1) {
      local_30 = 0x80;
    }
    else if (param_6 < 2) {
      if (param_6 == 0) {
        uVar1 = 0x80;
      }
    }
    else if (param_6 == 2) {
      local_2c = 0x80;
    }
  }

  FUN_8006ac68(auStack_90,0x1e);

  local_84 = local_84 & 0xff9fffff | 0x200000;

  local_80 = param_2;

  FUN_8007da80(auStack_90,&DAT_801b9620);

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c346_2,param_5,0x80);

  FUN_8006ac90(auStack_90,param_7,param_3 + -0x76,param_4 + 0x2c,1);

  FUN_8007da80(auStack_90,&DAT_801b95c0);

  iVar2 = param_3 + 0x48;

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,uVar1);
  FUN_8006ae28(auStack_90,&DAT_801ba1fe,iVar2,param_4 + 0x1e,1);

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,local_30);
  FUN_8006ae28(auStack_90,&DAT_801ba205,iVar2,param_4 + 0x32,1);

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,local_2c);
  FUN_8006ae28(auStack_90,&DAT_801ba20a,iVar2,param_4 + 0x46,1);

  param_3 = param_3 + 0x6e;

  FUN_8008cf34(auStack_70,&DAT_global__80022d7c,*param_1 + -0x80);
  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c344,param_5,uVar1);
  FUN_8006b184(auStack_90,auStack_70,param_3,param_4 + 0x1e,1,0xfffffffe,0);

  FUN_8008cf34(auStack_70,&DAT_global__80022d7c,param_1[1]);
  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c344,param_5,local_30);
  FUN_8006b184(auStack_90,auStack_70,param_3,param_4 + 0x32,1,0xfffffffe,0);

  FUN_8008cf34(auStack_70,&DAT_global__80022d7c,param_1[2]);
  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c344,param_5,local_2c);
  FUN_8006b184(auStack_90,auStack_70,param_3,param_4 + 0x46,1,0xfffffffe,0);
  return;
}

void FUN_global__8001b2c0
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined4 param_6,int param_7,undefined4 param_8,int param_9,int param_10,
               int param_11)

{
  undefined4 uVar1;
  short *psVar2;
  undefined2 *puVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short local_58;
  short local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined auStack_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  iVar4 = *param_1;

  local_58 = (short)param_4 + -0x81;
  local_54 = 0x102;
  iVar6 = param_4 + -0x80;
  local_52 = 0xe;
  sVar5 = (short)param_5;
  local_56 = sVar5 + -7;
  sVar7 = sVar5 + -6;

  local_4c = iVar6 + param_7;
  local_48 = iVar6 + iVar4;
  local_44 = iVar6 + iVar4 + param_1[2];
  local_40 = iVar6 + (iVar4 - param_1[2]);
  local_3c = iVar6 + iVar4 + param_1[1];
  local_38 = iVar6 + (iVar4 - param_1[1]);
  local_34 = iVar6 + param_1[3];
  local_30 = iVar6 + param_1[4];

  uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c326_2,param_6,0x80);
  FUN_8007e780(param_2,uVar1,&local_58);

  local_58 = (short)param_4 + -0x82;
  local_54 = 0x104;
  local_56 = sVar5 + -8;
  local_52 = 0x10;

  uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c326_2,param_6,0x80);
  FUN_8007e780(param_2,uVar1,&local_58);

  FUN_8007da44(param_2,0x20);
  sVar5 = (short)iVar6;

  if (-1 < param_9) {
    if (param_9 < 2) {

      FUN_global__8001af6c(param_1,param_2,param_4,param_5,param_6,param_8,param_3);

      if (-1 < param_7) {
        uVar1 = FUN_8006b548(&LAB_global__8004c31e_2,&LAB_global__8004c33a_2,param_6,0x80);
        puVar3 = (undefined2 *)FUN_8007d024(param_2,uVar1);
        puVar3[2] = 1;
        puVar3[3] = 0xc;
        puVar3[1] = sVar7;
        *puVar3 = (short)local_4c;
        FUN_8006b988(auStack_50,param_2,local_4c,param_5 + -0x16,3,0xe,0);
      }

      uVar1 = FUN_8006b548(&LAB_global__8004c31e_2,&DAT_global__8004c338,param_6,0x80);
      puVar3 = (undefined2 *)FUN_8007d024(param_2,uVar1);
      puVar3[2] = 1;
      puVar3[1] = sVar7;
      puVar3[3] = 6;
      *puVar3 = (undefined2)local_48;

      uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c32a_2,param_6,0x80);
      psVar2 = (short *)FUN_8007d024(param_2,uVar1);
      *psVar2 = (short)local_40;
      psVar2[1] = sVar7;
      psVar2[3] = 0xc;
      psVar2[2] = (short)local_44 - (short)local_40;

      uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c330,param_6,0x80);
      psVar2 = (short *)FUN_8007d024(param_2,uVar1);
      *psVar2 = (short)local_44;
      psVar2[2] = (short)local_3c - (short)local_44;
      psVar2[1] = sVar7;
      psVar2[3] = 0xc;

      uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c330,param_6,0x80);
      psVar2 = (short *)FUN_8007d024(param_2,uVar1);
      *psVar2 = (short)local_38;
      psVar2[2] = (short)local_40 - (short)local_38;
      psVar2[1] = sVar7;
      psVar2[3] = 0xc;

      if (param_9 == 1) {

        iVar4 = 0x100 - (local_34 - iVar6);
        if (0 < iVar4) {
          uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c334,param_6,0x80);
          puVar3 = (undefined2 *)FUN_8007d024(param_2,uVar1);
          puVar3[2] = (short)iVar4;
          puVar3[1] = sVar7;
          puVar3[3] = 0xc;
          *puVar3 = (undefined2)local_34;
        }

        iVar6 = local_30 - iVar6;
        if (0 < iVar6) {
          uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c334,param_6,0x80);
          psVar2 = (short *)FUN_8007d024(param_2,uVar1);
          *psVar2 = sVar5;
          psVar2[2] = (short)iVar6;
          psVar2[1] = sVar7;
          psVar2[3] = 0xc;
        }
      }
    }
    else if (param_9 == 2) {

      if (-1 < param_10) {
        uVar1 = FUN_8006b548(&LAB_global__8004c31e_2,&LAB_global__8004c33a_2,param_6,0x80);
        psVar2 = (short *)FUN_8007d024(param_2,uVar1);
        psVar2[2] = 1;
        *psVar2 = sVar5 + (short)param_10;
        psVar2[1] = sVar7;
        psVar2[3] = 0xc;
      }
      if (-1 < param_11) {
        uVar1 = FUN_8006b548(&LAB_global__8004c31e_2,&LAB_global__8004c33a_2,param_6,0x80);
        psVar2 = (short *)FUN_8007d024(param_2,uVar1);
        psVar2[2] = 1;
        *psVar2 = sVar5 + (short)param_11;
        psVar2[1] = sVar7;
        psVar2[3] = 0xc;
      }
    }
  }

  uVar1 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c322_2,param_6,0x80);
  psVar2 = (short *)FUN_8007d024(param_2,uVar1);
  psVar2[2] = 0x100;
  *psVar2 = sVar5;
  psVar2[1] = sVar7;
  psVar2[3] = 0xc;

  FUN_8007da44(param_2,0);
  return;
}

void FUN_global__8001b7f8(int *param_1)

{

  if (0xff < *param_1) {
    *param_1 = 0xff;
  }

  if (*param_1 < 2) {
    *param_1 = 2;
  }

  if (*param_1 <= param_1[1]) {
    param_1[1] = *param_1 + -1;
  }

  if (param_1[1] < 1) {
    param_1[1] = 1;
  }
  return;
}

void FUN_global__8001b860(int param_1,undefined4 param_2)

{

  *(undefined4 *)(param_1 + 4) = param_2;

  FUN_global__8001b7f8();
  return;
}

void FUN_global__8001b880(undefined4 *param_1,undefined4 param_2)

{

  *param_1 = param_2;

  FUN_global__8001b7f8();
  return;
}

void FUN_global__8001b8a0
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined auStack_40 [12];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;

  uVar1 = 0x80;

  if (-1 < param_7) {
    uVar1 = 0x180;
  }

  FUN_8006ac68(auStack_40,0x1e);

  local_34 = local_34 & 0xff9fffff | 0x200000;

  local_30 = param_2;

  FUN_8007da80(auStack_40,&DAT_801b9620);

  local_2c = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c346_2,param_5,uVar1);

  FUN_8006ac90(auStack_40,param_6,param_3 + -0x76,param_4 + 0x2c,1);

  FUN_8007da80(auStack_40,&DAT_801b95c0);

  local_2c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,uVar1);

  FUN_8006ae28(auStack_40,&DAT_801ba212,param_3 + 0x6e,param_4 + 0x2c,1);
  return;
}

void FUN_global__8001b9d8
               (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined auStack_90 [12];
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined auStack_70 [64];
  undefined4 local_30;

  uVar1 = 0x80;
  local_30 = 0x80;

  if (-1 < param_6) {

    local_30 = 0x180;
    uVar1 = 0x180;

    if (param_6 == 0) {
      uVar1 = 0x80;
    }
    else if (param_6 == 1) {
      local_30 = 0x80;
    }
  }

  FUN_8006ac68(auStack_90,0x1e);

  local_84 = local_84 & 0xff9fffff | 0x200000;

  local_80 = param_2;

  FUN_8007da80(auStack_90,&DAT_801b9620);

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c346_2,param_5,0x80);

  FUN_8006ac90(auStack_90,param_7,param_3 + -0x76,param_4 + 0x2c,1);

  FUN_8007da80(auStack_90,&DAT_801b95c0);

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,uVar1);
  FUN_8006ae28(auStack_90,&DAT_801ba205,param_3 + 0x48,param_4 + 0x1e,1);

  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,local_30);
  FUN_8006ae28(auStack_90,&DAT_801ba20a,param_3 + 0x48,param_4 + 0x32,1);

  FUN_8008cf34(auStack_70,&DAT_global__80022d7c,*param_1);
  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c344,param_5,uVar1);
  FUN_8006b184(auStack_90,auStack_70,param_3 + 0x6e,param_4 + 0x1e,1,0xfffffffe,0);

  FUN_8008cf34(auStack_70,&DAT_global__80022d7c,param_1[1]);
  local_7c = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c344,param_5,local_30);
  FUN_8006b184(auStack_90,auStack_70,param_3 + 0x6e,param_4 + 0x32,1,0xfffffffe,0);
  return;
}

void FUN_global__8001bc5c
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined4 param_6,int param_7,undefined4 param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  short *psVar6;
  short sVar7;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined auStack_38 [4];
  int local_34;
  int local_30;

  local_30 = param_4 + -0x80;
  sVar2 = (short)param_5;
  sVar7 = sVar2 + -6;
  local_34 = local_30 + param_7;
  sVar3 = (short)local_30;
  sVar1 = sVar3 + (short)param_1[1];
  local_30 = local_30 + *param_1;

  FUN_global__8001b9d8(param_1,param_2,param_4,param_5,param_6,param_8,param_3);

  local_40 = (short)param_4 + -0x81;
  local_3c = 0x102;
  local_3e = sVar2 + -7;
  local_3a = 0xe;

  uVar4 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c326_2,param_6,0x80);
  FUN_8007e780(param_2,uVar4,&local_40);

  local_40 = (short)param_4 + -0x82;
  local_3c = 0x104;
  local_3e = sVar2 + -8;
  local_3a = 0x10;

  uVar4 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c326_2,param_6,0x80);
  FUN_8007e780(param_2,uVar4,&local_40);

  FUN_8007da44(param_2,0x20);

  if (-1 < param_7) {
    uVar4 = FUN_8006b548(&LAB_global__8004c31e_2,&LAB_global__8004c33a_2,param_6,0x80);
    puVar5 = (undefined2 *)FUN_8007d024(param_2,uVar4);
    puVar5[2] = 1;
    puVar5[3] = 0xc;
    puVar5[1] = sVar7;
    *puVar5 = (short)local_34;
    FUN_8006b988(auStack_38,param_2,local_34,param_5 + -0x16,3,0xe,0);
  }

  uVar4 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c32a_2,param_6,0x80);
  psVar6 = (short *)FUN_8007d024(param_2,uVar4);
  *psVar6 = sVar3;
  psVar6[2] = sVar1 - sVar3;
  psVar6[1] = sVar7;
  psVar6[3] = 0xc;

  uVar4 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c330,param_6,0x80);
  psVar6 = (short *)FUN_8007d024(param_2,uVar4);
  *psVar6 = sVar1;
  psVar6[2] = (short)local_30 - sVar1;
  psVar6[1] = sVar7;
  psVar6[3] = 0xc;

  uVar4 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c322_2,param_6,0x80);
  psVar6 = (short *)FUN_8007d024(param_2,uVar4);
  *psVar6 = sVar3;
  psVar6[2] = 0x100;
  psVar6[1] = sVar7;
  psVar6[3] = 0xc;

  FUN_8007da44(param_2,0);
  return;
}

undefined FUN_global__8001bf00(int param_1)

{

  return *(undefined *)((int)&DAT_801c9900 + param_1 * 0x52);
}

undefined FUN_global__8001bf2c(int param_1)

{

  return *(undefined *)((int)&DAT_801c9900 + param_1 * 0x52 + 2);
}

undefined FUN_global__8001bf58(int param_1)

{

  return *(undefined *)((int)&DAT_801c9900 + param_1 * 0x52 + 3);
}

uint FUN_global__8001bf84(void)

{
  int iVar1;
  uint uVar2;

  iVar1 = FUN_global__8001bf00();

  uVar2 = 0xffffffff;

  if ((0x7f < iVar1) && (iVar1 - 0x80U < 4)) {
    uVar2 = iVar1 - 0x80U;
  }
  return uVar2;
}

uint FUN_global__8001bfc8(void)

{
  int iVar1;
  uint uVar2;

  iVar1 = FUN_global__8001bf2c();

  uVar2 = 0xffffffff;

  if ((0x7f < iVar1) && (iVar1 - 0x80U < 4)) {
    uVar2 = iVar1 - 0x80U;
  }
  return uVar2;
}

uint FUN_global__8001c00c(void)

{
  int iVar1;
  uint uVar2;

  iVar1 = FUN_global__8001bf58();

  uVar2 = 0xffffffff;

  if ((0x7f < iVar1) && (iVar1 - 0x80U < 4)) {
    uVar2 = iVar1 - 0x80U;
  }
  return uVar2;
}

bool FUN_global__8001c050(int param_1)

{
  bool bVar1;
  int iVar2;

  if (*(char *)(param_1 * 100 + DAT_800a8d68 + 0xde) == '\x02') {

    iVar2 = FUN_global__8001bf00();

    bVar1 = 0x7f < iVar2;
  }
  else {

    bVar1 = false;
  }
  return bVar1;
}

bool FUN_global__8001c0b0(int param_1)

{
  bool bVar1;
  int iVar2;

  if (*(char *)(param_1 * 100 + DAT_800a8d68 + 0xde) == '\x02') {

    iVar2 = FUN_global__8001bf2c();

    bVar1 = 0x7f < iVar2;
  }
  else {

    bVar1 = false;
  }
  return bVar1;
}

bool FUN_global__8001c110(int param_1)

{
  bool bVar1;
  int iVar2;

  if (*(char *)(param_1 * 100 + DAT_800a8d68 + 0xde) == '\x02') {

    iVar2 = FUN_global__8001bf58();

    bVar1 = 0x7f < iVar2;
  }
  else {

    bVar1 = false;
  }
  return bVar1;
}

void FUN_global__8001c170(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;

  if (param_3 == 0) {

    uVar1 = *(ushort *)(param_1 + 6);

    iVar2 = (int)((uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)(param_1 + 4)) >> 1;

    param_2[2] = (uint)*(ushort *)(param_1 + 4) - iVar2;

    *param_2 = iVar2;

    param_2[1] = (uint)uVar1 - iVar2;

    FUN_global__8001adfc(param_2,0xff,0);
  }
  return;
}

void FUN_global__8001c1c8(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;

  if (param_3 - 1U < 3) {

    param_1 = param_1 + (param_3 - 1U) * 4;

    uVar1 = *(ushort *)(param_1 + 8);

    *param_2 = (uint)*(ushort *)(param_1 + 10);

    param_2[1] = (uint)uVar1;

    FUN_global__8001b7f8();
  }
  return;
}

void FUN_global__8001c210(short *param_1,undefined4 *param_2,int param_3)

{

  if (param_3 == 0) {

    *param_1 = (short)*param_2 - (short)param_2[1];

    param_1[1] = (short)*param_2 - (short)param_2[2];

    param_1[2] = (short)*param_2 + (short)param_2[2];

    param_1[3] = (short)*param_2 + (short)param_2[1];
  }
  return;
}

void FUN_global__8001c270(int param_1,undefined4 *param_2,int param_3)

{

  if (param_3 - 1U < 3) {

    param_1 = param_1 + (param_3 - 1U) * 4;

    *(short *)(param_1 + 8) = (short)param_2[1];

    *(short *)(param_1 + 10) = (short)*param_2;
  }
  return;
}

bool FUN_global__8001c2a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  DAT_800b1494 = 0;
  DAT_800b1498 = 0;
  DAT_800b149c = 0;
  iVar4 = 0;

  if (*(char *)(param_1 * 100 + DAT_800a8d68 + 0xde) == '\x02') {

    iVar2 = FUN_global__8001c050(param_1);
    if (iVar2 != 0) {

      DAT_800b141a = 1;
      DAT_800b1422 = 2;
      iVar4 = 3;
      DAT_800b1494 = 1;

      DAT_800b1410 = 0;
      DAT_800b1414 = &DAT_801ba29f;
      DAT_800b1412 = 0;
      DAT_800b1418 = 0;
      DAT_800b141c = &DAT_801ba2c0;
      DAT_800b1420 = 0;
      DAT_800b1424 = &DAT_801ba2ef;
    }

    iVar3 = FUN_global__8001c0b0(param_1);
    iVar2 = iVar4;
    if (iVar3 != 0) {

      iVar3 = iVar4 + 1;
      iVar2 = iVar4 + 2;

      (&DAT_800b1414)[iVar4 * 2] = &DAT_801ba30f;
      DAT_800b1498 = 1;
      (&DAT_800b1410)[iVar4 * 4] = 1;
      (&DAT_800b1412)[iVar4 * 4] = 0;
      (&DAT_800b1410)[iVar3 * 4] = 1;
      (&DAT_800b1412)[iVar3 * 4] = 1;
      (&DAT_800b1414)[iVar3 * 2] = &DAT_801ba340;
    }

    iVar3 = FUN_global__8001c110(param_1);
    iVar4 = iVar2;
    if (iVar3 != 0) {

      iVar3 = iVar2 + 1;
      iVar4 = iVar2 + 2;

      (&DAT_800b1414)[iVar2 * 2] = &DAT_801ba364;
      DAT_800b149c = 1;
      (&DAT_800b1410)[iVar2 * 4] = 2;
      (&DAT_800b1412)[iVar2 * 4] = 0;
      (&DAT_800b1410)[iVar3 * 4] = 2;
      (&DAT_800b1412)[iVar3 * 4] = 1;
      (&DAT_800b1414)[iVar3 * 2] = &DAT_801ba38f;
    }

    DAT_800b1490 = iVar4 + 1;
    bVar1 = 1 < DAT_800b1490;

    (&DAT_800b1410)[iVar4 * 4] = 3;
    (&DAT_800b1414)[iVar4 * 2] = &DAT_801ba292;
  }
  else {

    DAT_800b1490 = 0;
    bVar1 = false;
  }
  return bVar1;
}

void FUN_global__8001c48c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  *(undefined2 *)(param_1 + 4) = 3;

  iVar2 = (int)&DAT_801c9928 + param_2 * 0x52;

  *(short *)(param_1 + 2) = (short)param_2;

  uVar1 = FUN_global__8001bf84(param_2);
  FUN_global__8001c170(iVar2,param_1 + 8,uVar1);

  uVar1 = FUN_global__8001bfc8(param_2);
  FUN_global__8001c1c8(iVar2,param_1 + 0x1c,uVar1);

  uVar1 = FUN_global__8001c00c(param_2);
  FUN_global__8001c1c8(iVar2,param_1 + 0x24,uVar1);

  *(undefined4 *)(param_1 + 0x2c) = 0x1c0080;
  *(undefined4 *)(param_1 + 0x30) = 8;
  *(undefined4 *)(param_1 + 0x34) = 0x22854a4;
  *(undefined4 *)(param_1 + 0x38) = 0xa14;
  *(undefined4 *)(param_1 + 0x3c) = 0x949494;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;

  *(undefined4 *)(param_1 + 0x48) = 0x1c0080;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  *(undefined4 *)(param_1 + 0x50) = 0x20116d6;
  *(undefined4 *)(param_1 + 0x54) = 0x14;
  *(undefined4 *)(param_1 + 0x58) = 0x949494;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;

  *(undefined4 *)(param_1 + 100) = 0x1c0080;
  *(undefined4 *)(param_1 + 0x68) = 8;
  *(undefined4 *)(param_1 + 0x6c) = 0x2d4200e;
  *(undefined4 *)(param_1 + 0x70) = 0x140000;
  *(undefined4 *)(param_1 + 0x74) = 0x949494;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  return;
}

void FUN_global__8001c610(int param_1)

{

  FUN_global__8001c48c(param_1,(int)*(short *)(param_1 + 2));

  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  return;
}

void FUN_global__8001c648(int param_1)

{

  *(ushort *)(param_1 + 0x44) = ~*(ushort *)(param_1 + 0x30);

  *(ushort *)(param_1 + 0x60) = ~*(ushort *)(param_1 + 0x4c);

  *(ushort *)(param_1 + 0x7c) = ~*(ushort *)(param_1 + 0x68);
  return;
}

void FUN_global__8001c684(int param_1)

{

  *(undefined2 *)(param_1 + 4) = 3;
  return;
}

undefined4 FUN_global__8001c690(short *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = FUN_global__8001c2a0((int)param_1[1]);
  iVar3 = DAT_800b1494;
  uVar2 = 0;

  if (iVar1 == 1) {

    DAT_800b14a0 = 0;
    DAT_800b14a2 = 0;
    *param_1 = 0;
    DAT_800b14a4 = 0;

    if (iVar3 == 0) {

      param_1[2] = 2;
      DAT_800b1408 = (undefined *)(&DAT_800b1414)[*param_1 * 2];
    }
    else {

      param_1[2] = 0;
      DAT_800b1408 = &DAT_801ba222;
    }

    FUN_global__8001ac78();

    iVar3 = (int)&DAT_801c9928 + param_1[1] * 0x52;

    uVar2 = FUN_global__8001bf84();
    FUN_global__8001c170(iVar3,param_1 + 4,uVar2);

    uVar2 = FUN_global__8001bfc8((int)param_1[1]);
    FUN_global__8001c1c8(iVar3,param_1 + 0xe,uVar2);

    uVar2 = FUN_global__8001c00c((int)param_1[1]);
    FUN_global__8001c1c8(iVar3,param_1 + 0x12,uVar2);

    uVar2 = 1;
  }
  return uVar2;
}

undefined4 FUN_global__8001c7b8(short *param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  iVar7 = (int)param_1[1];

  iVar8 = DAT_800a8d68 + iVar7 * 100;
  iVar9 = DAT_800a8d68 + iVar7 * 0x10 + 0x1a4;
  iVar10 = DAT_800a8d68 + (1 - iVar7) * 0x10 + 0x1a4;

  FUN_8006be64(param_1 + 0x16);
  FUN_8006be64(param_1 + 0x24);
  FUN_8006be64(param_1 + 0x32);

  if (param_1[2] == 3) {
LAB_global__8001cdf8:
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;

    if (*(char *)(iVar8 + 0xde) == '\x02') {

      iVar8 = FUN_global__8001bf84((int)param_1[1]);
      if (-1 < iVar8) {
        DAT_800b14a0 = (ushort)(byte)(&DAT_801f0c98)[iVar8 + iVar7 * 0x22 + 4];
      }
      iVar8 = FUN_global__8001bfc8((int)param_1[1]);
      if (-1 < iVar8) {
        DAT_800b14a2 = (ushort)(byte)(&DAT_801f0c98)[iVar8 + iVar7 * 0x22 + 4];
      }
      iVar8 = FUN_global__8001c00c((int)param_1[1]);
      if (-1 < iVar8) {
        DAT_800b14a4 = (ushort)(byte)(&DAT_801f0c98)[iVar8 + iVar7 * 0x22 + 4];
      }
      sVar1 = param_1[2];
      if (sVar1 == 1) {
        uVar4 = *(uint *)(iVar9 + 4) | *(uint *)(iVar10 + 4);
        if ((uVar4 & 0x11000) != 0) {
          DAT_800b14ac = (uint)DAT_800b14a0;
          FUN_global__8001adfc(param_1 + 4,DAT_800b14a8);
          uVar3 = 1;
          param_1[2] = 2;
          goto LAB_global__8001cdcc;
        }
      }
      else {
        if (1 < sVar1) {
          if (sVar1 != 2) {
            return 0xffffffff;
          }
          iVar8 = (int)*param_1;
          iVar7 = 0;
          if (((&DAT_800b1410)[iVar8 * 4] == 3) && ((*(uint *)(iVar9 + 4) & 0xa00) != 0)) {
            iVar7 = (int)&DAT_801c9928 + param_1[1] * 0x52;
            uVar3 = FUN_global__8001bf84();
            FUN_global__8001c210(iVar7,param_1 + 4,uVar3);
            uVar3 = FUN_global__8001bfc8((int)param_1[1]);
            FUN_global__8001c270(iVar7,param_1 + 0xe,uVar3);
            uVar3 = FUN_global__8001c00c((int)param_1[1]);
            FUN_global__8001c270(iVar7,param_1 + 0x12,uVar3);
            param_1[2] = 3;
            return 0;
          }
          if ((*(uint *)(iVar9 + 4) & 0x11000) == 0) goto LAB_global__8001cbf0;
          iVar10 = (int)*param_1;
          sVar1 = (&DAT_800b1410)[iVar10 * 4];
          if (sVar1 == 1) {
            if ((&DAT_800b1412)[iVar10 * 4] == 0) {
              FUN_global__8001b880(param_1 + 0xe,DAT_800b14a2);
            }
            else if ((&DAT_800b1412)[iVar10 * 4] == 1) {
              psVar5 = param_1 + 0xe;
              uVar2 = DAT_800b14a2;
LAB_global__8001cbe0:
              FUN_global__8001b860(psVar5,uVar2);
            }
LAB_global__8001cbe8:
            FUN_80060840(1);
          }
          else if (sVar1 < 2) {
            if (sVar1 == 0) {
              iVar6 = (uint)DAT_800b14a0 - *(int *)(param_1 + 4);
              if (iVar6 < 0) {
                iVar6 = -iVar6;
              }
              sVar1 = (&DAT_800b1412)[iVar10 * 4];
              if (sVar1 == 1) {
                FUN_global__8001adbc(param_1 + 4,iVar6);
              }
              else if (sVar1 < 2) {
                if (sVar1 == 0) {
                  FUN_global__8001addc(param_1 + 4,(uint)DAT_800b14a0);
                }
              }
              else if (sVar1 == 2) {
                FUN_global__8001ad9c();
              }
              goto LAB_global__8001cbe8;
            }
          }
          else if (sVar1 == 2) {
            if ((&DAT_800b1412)[iVar10 * 4] == 0) {
              FUN_global__8001b880(param_1 + 0x12,DAT_800b14a4);
            }
            else if ((&DAT_800b1412)[iVar10 * 4] == 1) {
              psVar5 = param_1 + 0x12;
              uVar2 = DAT_800b14a4;
              goto LAB_global__8001cbe0;
            }
            goto LAB_global__8001cbe8;
          }
LAB_global__8001cbf0:
          uVar4 = *(uint *)(iVar9 + 4) | *(uint *)(iVar9 + 0xc);
          if ((uVar4 & 4) != 0) {
            iVar7 = -1;
          }
          if ((uVar4 & 8) != 0) {
            iVar7 = iVar7 + 1;
          }
          if (iVar7 != 0) {
            iVar10 = (int)*param_1;
            sVar1 = (&DAT_800b1410)[iVar10 * 4];
            if (sVar1 == 1) {
              sVar1 = (&DAT_800b1412)[iVar10 * 4];
              if (sVar1 == 0) {
                iVar10 = *(int *)(param_1 + 0xe);
                psVar5 = param_1 + 0xe;
LAB_global__8001cd38:
                FUN_global__8001b880(psVar5,iVar10 + iVar7);
              }
              else {
                psVar5 = param_1 + 0xe;
joined_r0x8001ccf4:
                if (sVar1 == 1) {
                  FUN_global__8001b860(psVar5,*(int *)(psVar5 + 2) + iVar7);
                }
              }
LAB_global__8001cd54:
              FUN_80060840(5);
            }
            else if (sVar1 < 2) {
              if (sVar1 == 0) {
                sVar1 = (&DAT_800b1412)[iVar10 * 4];
                if (sVar1 == 1) {
                  FUN_global__8001adbc(param_1 + 4,*(int *)(param_1 + 6) + iVar7);
                }
                else if (sVar1 < 2) {
                  if (sVar1 == 0) {
                    FUN_global__8001addc(param_1 + 4,*(int *)(param_1 + 4) + iVar7);
                  }
                }
                else if (sVar1 == 2) {
                  FUN_global__8001ad9c(param_1 + 4,*(int *)(param_1 + 8) + iVar7);
                }
                goto LAB_global__8001cd54;
              }
            }
            else if (sVar1 == 2) {
              sVar1 = (&DAT_800b1412)[iVar10 * 4];
              if (sVar1 == 0) {
                iVar10 = *(int *)(param_1 + 0x12);
                psVar5 = param_1 + 0x12;
                goto LAB_global__8001cd38;
              }
              psVar5 = param_1 + 0x12;
              goto joined_r0x8001ccf4;
            }
          }
          uVar4 = *(uint *)(iVar9 + 4) | *(uint *)(iVar9 + 0xc);
          if (((uVar4 & 1) != 0) && (iVar8 = iVar8 + -1, iVar8 < 0)) {
            iVar8 = DAT_800b1490 + -1;
          }
          if (((uVar4 & 2) != 0) && (iVar8 = iVar8 + 1, DAT_800b1490 <= iVar8)) {
            iVar8 = 0;
          }
          uVar3 = 6;
          if (*param_1 == iVar8) goto LAB_global__8001cdf8;
          *param_1 = (short)iVar8;
LAB_global__8001cdcc:
          FUN_80060840(uVar3);
          DAT_800b1408 = (undefined *)(&DAT_800b1414)[*param_1 * 2];
          FUN_global__8001ac78();
          goto LAB_global__8001cdf8;
        }
        if (sVar1 != 0) {
          return 0xffffffff;
        }
        uVar4 = *(uint *)(iVar9 + 4) | *(uint *)(iVar10 + 4);
        if ((uVar4 & 0x11000) != 0) {
          DAT_800b1408 = &DAT_801ba259;
          DAT_800b14a8 = (uint)DAT_800b14a0;
          param_1[2] = 1;
          FUN_global__8001ac78();
          FUN_80060840(1);
          return 0xffffffff;
        }
      }
      uVar3 = 2;
      if ((uVar4 & 0x500) == 0) goto LAB_global__8001cdf8;
    }
    FUN_80060840(uVar3);
    param_1[2] = 3;
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

void FUN_global__8001ce28(short *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined auStack_68 [12];
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;

  uVar7 = (uint)DAT_800b14a0;
  local_38 = (uint)DAT_800b14a2;
  uVar8 = 0;
  uVar9 = 0xffffffff;
  local_48 = 1;
  local_44 = 1;
  local_40 = 1;
  iVar5 = -1;
  iVar6 = -1;
  local_30 = 0xffffffff;
  local_34 = (uint)DAT_800b14a4;
  local_3c = 0;
  local_2c = -1;

  FUN_8006ac68(auStack_68,0x1e);
  local_5c = local_5c & 0xff9fffff | 0x200000;
  sVar1 = param_1[2];
  local_58 = param_2;

  if (sVar1 == 2) {

    FUN_8007da80(auStack_68,&DAT_801b95c0);
    local_54 = FUN_8006b548(&DAT_global__8004c31c,&LAB_global__8004c34a_2,param_5,0x80);

    FUN_8006adb4(auStack_68,&DAT_801ba3b0,0xb0,0x84,local_40);

LAB_global__8001cf68:

    FUN_global__8001ab40(param_2,DAT_800b1408,0xb0,0x1ae,local_40,0x747474);
  }
  else if ((sVar1 < 3) && (-1 < sVar1)) goto LAB_global__8001cf68;
  sVar1 = param_1[2];
  if (sVar1 == 1) {
    uVar8 = 2;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    uVar9 = DAT_800b14a8;
    local_30 = uVar7;
  }
  else if (sVar1 < 2) {
    if (sVar1 == 0) {
      uVar8 = 2;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      uVar9 = uVar7;
    }
  }
  else if (sVar1 == 2) {
    local_3c = 1;
    iVar2 = (int)*param_1;
    sVar1 = (&DAT_800b1410)[iVar2 * 4];
    uVar8 = 1;
    if (sVar1 == 1) {
      iVar6 = (int)(short)(&DAT_800b1412)[iVar2 * 4];
      iVar5 = 0x40;
    }
    else if (sVar1 < 2) {
      if (sVar1 != 0) goto LAB_global__8001d0b0;
      iVar5 = (int)(short)(&DAT_800b1412)[iVar2 * 4];
      iVar6 = 0x40;
    }
    else {
      if (sVar1 == 2) {
        iVar5 = 0x40;
        local_2c = (int)(short)(&DAT_800b1412)[iVar2 * 4];
        iVar6 = 0x40;
        goto LAB_global__8001d0b0;
      }
      if (sVar1 != 3) goto LAB_global__8001d0b0;
      iVar5 = 0x40;
      iVar6 = 0x40;
    }
    local_2c = 0x40;
  }
  else if (sVar1 == 3) {
    uVar7 = 0xffffffff;
    local_34 = 0xffffffff;
    local_38 = 0xffffffff;
  }
LAB_global__8001d0b0:
  iVar2 = FUN_global__8001c050((int)param_1[1]);
  if (iVar2 == 0) {
    FUN_global__8001ae34(param_1 + 4,param_2,param_3,param_4,param_5,&DAT_801ba107,iVar5);
  }
  else {
    FUN_global__8001b2c0
              (param_1 + 4,param_2,&DAT_801ba107,param_3,param_4,param_5,uVar7,iVar5,uVar8,uVar9,
               local_30);
  }
  if (local_48 != 0) {
    FUN_8006bef4(param_1 + 0x16,param_2,param_3 + -0x7a,param_4 + 0x14);
    FUN_8007da44(param_2,0x220);
  }
  if (local_44 != 0) {
    iVar5 = FUN_global__8001c0b0((int)param_1[1]);
    if (iVar5 == 0) {
      FUN_global__8001b8a0(param_1 + 0xe,param_2,param_3,param_4 + 0x60,param_5,&DAT_801ba111,iVar6)
      ;
    }
    else {
      FUN_global__8001bc5c
                (param_1 + 0xe,param_2,&DAT_801ba111,param_3,param_4 + 0x60,param_5,local_38,iVar6);
      uVar8 = FUN_global__8001bf2c((int)param_1[1]);
      piVar3 = (int *)FUN_global__80019308(uVar8);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_80081478(param_2,param_5 | param_5 << 8 | param_5 << 0x10);
        *piVar4 = (param_3 - ((int)((uint)*(ushort *)(piVar3 + 1) << 0x10) >> 0x11)) +
                  (param_4 - (((int)((uint)*(ushort *)((int)piVar3 + 6) << 0x10) >> 0x11) + -0x84))
                  * 0x10000;
        piVar4[1] = *piVar3;
        piVar4[2] = piVar3[1];
        FUN_8007da44(param_2,*(ushort *)(piVar3 + 2) | 0x20);
      }
    }
    FUN_8006bef4(param_1 + 0x24,param_2,param_3 + -0x7a,param_4 + 0x74);
    FUN_8007da44(param_2,0x220);
  }
  if (local_40 != 0) {
    iVar5 = FUN_global__8001c110((int)param_1[1]);
    if (iVar5 == 0) {
      FUN_global__8001b8a0
                (param_1 + 0x12,param_2,param_3,param_4 + 0xb4,param_5,&DAT_801ba120,local_2c);
    }
    else {
      FUN_global__8001bc5c
                (param_1 + 0x12,param_2,&DAT_801ba120,param_3,param_4 + 0xb4,param_5,local_34,
                 local_2c);
      uVar8 = FUN_global__8001bf58((int)param_1[1]);
      piVar3 = (int *)FUN_global__80019308(uVar8);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_80081478(param_2,param_5 | param_5 << 8 | param_5 << 0x10);
        *piVar4 = (param_3 - ((int)((uint)*(ushort *)(piVar3 + 1) << 0x10) >> 0x11)) +
                  (param_4 - (((int)((uint)*(ushort *)((int)piVar3 + 6) << 0x10) >> 0x11) + -0xd8))
                  * 0x10000;
        piVar4[1] = *piVar3;
        piVar4[2] = piVar3[1];
        FUN_8007da44(param_2,*(ushort *)(piVar3 + 2) | 0x20);
      }
    }
    FUN_8006bef4(param_1 + 0x32,param_2,param_3 + -0x7a,param_4 + 200);
    FUN_8007da44(param_2,0x220);
  }
  if (local_3c != 0) {
    uVar8 = 0x180;
    if ((&DAT_800b1410)[*param_1 * 4] == 3) {
      uVar8 = 0x80;
    }
    FUN_8007da80(auStack_68,&DAT_801b95c0);
    local_54 = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340,param_5,uVar8);
    FUN_8006b184(auStack_68,&DAT_801ba0ee,param_3 + 0x48,param_4 + -0x10,1,0xfffffffe,0);
  }
  return;
}

void thunk_FUN_global__8001d128(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int unaff_s2;
  undefined4 param_11;
  int param_12;
  int param_13;
  int param_14;
  int param_15;
  undefined4 param_16;
  undefined4 param_17;
  undefined4 param_18;
  int param_29;
  int param_30;

  if (param_12 != 0) {
    FUN_8006bef4(unaff_s2 + 0x2c);
    FUN_8007da44();
  }

  if (param_13 != 0) {
    iVar1 = FUN_global__8001c0b0((int)*(short *)(unaff_s2 + 2));
    if (iVar1 == 0) {
      FUN_global__8001b8a0(unaff_s2 + 0x1c);
    }
    else {
      FUN_global__8001bc5c();
      uVar2 = FUN_global__8001bf2c((int)*(short *)(unaff_s2 + 2));
      piVar3 = (int *)FUN_global__80019308(uVar2);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_80081478();

        *piVar4 = (param_29 - ((int)((uint)*(ushort *)(piVar3 + 1) << 0x10) >> 0x11)) +
                  (param_30 - (((int)((uint)*(ushort *)((int)piVar3 + 6) << 0x10) >> 0x11) + -0x84))
                  * 0x10000;
        piVar4[1] = *piVar3;
        piVar4[2] = piVar3[1];
        FUN_8007da44();
      }
    }
    FUN_8006bef4(unaff_s2 + 0x48);
    FUN_8007da44();
  }

  if (param_14 != 0) {
    iVar1 = FUN_global__8001c110((int)*(short *)(unaff_s2 + 2));
    if (iVar1 == 0) {
      FUN_global__8001b8a0(unaff_s2 + 0x24);
    }
    else {
      FUN_global__8001bc5c();
      uVar2 = FUN_global__8001bf58((int)*(short *)(unaff_s2 + 2));
      piVar3 = (int *)FUN_global__80019308(uVar2);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_80081478();

        *piVar4 = (param_29 - ((int)((uint)*(ushort *)(piVar3 + 1) << 0x10) >> 0x11)) +
                  (param_30 - (((int)((uint)*(ushort *)((int)piVar3 + 6) << 0x10) >> 0x11) + -0xd8))
                  * 0x10000;
        piVar4[1] = *piVar3;
        piVar4[2] = piVar3[1];
        FUN_8007da44();
      }
    }
    FUN_8006bef4(unaff_s2 + 100);
    FUN_8007da44();
  }

  if (param_15 != 0) {
    FUN_8007da80(&stack0x00000030,&DAT_801b95c0);
    param_11 = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340);
    FUN_8006b184(&stack0x00000030,&DAT_801ba0ee,param_29 + 0x48,param_30 + -0x10);
  }
  return;
}

void FUN_global__8001d128(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int unaff_s2;
  undefined4 param_11;
  int param_12;
  int param_13;
  int param_14;
  int param_15;
  undefined4 param_16;
  undefined4 param_17;
  undefined4 param_18;
  int param_29;
  int param_30;

  if (param_12 != 0) {
    FUN_8006bef4(unaff_s2 + 0x2c);
    FUN_8007da44();
  }

  if (param_13 != 0) {
    iVar1 = FUN_global__8001c0b0((int)*(short *)(unaff_s2 + 2));
    if (iVar1 == 0) {
      FUN_global__8001b8a0(unaff_s2 + 0x1c);
    }
    else {
      FUN_global__8001bc5c();
      uVar2 = FUN_global__8001bf2c((int)*(short *)(unaff_s2 + 2));
      piVar3 = (int *)FUN_global__80019308(uVar2);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_80081478();

        *piVar4 = (param_29 - ((int)((uint)*(ushort *)(piVar3 + 1) << 0x10) >> 0x11)) +
                  (param_30 - (((int)((uint)*(ushort *)((int)piVar3 + 6) << 0x10) >> 0x11) + -0x84))
                  * 0x10000;
        piVar4[1] = *piVar3;
        piVar4[2] = piVar3[1];
        FUN_8007da44();
      }
    }
    FUN_8006bef4(unaff_s2 + 0x48);
    FUN_8007da44();
  }

  if (param_14 != 0) {
    iVar1 = FUN_global__8001c110((int)*(short *)(unaff_s2 + 2));
    if (iVar1 == 0) {
      FUN_global__8001b8a0(unaff_s2 + 0x24);
    }
    else {
      FUN_global__8001bc5c();
      uVar2 = FUN_global__8001bf58((int)*(short *)(unaff_s2 + 2));
      piVar3 = (int *)FUN_global__80019308(uVar2);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_80081478();

        *piVar4 = (param_29 - ((int)((uint)*(ushort *)(piVar3 + 1) << 0x10) >> 0x11)) +
                  (param_30 - (((int)((uint)*(ushort *)((int)piVar3 + 6) << 0x10) >> 0x11) + -0xd8))
                  * 0x10000;
        piVar4[1] = *piVar3;
        piVar4[2] = piVar3[1];
        FUN_8007da44();
      }
    }
    FUN_8006bef4(unaff_s2 + 100);
    FUN_8007da44();
  }

  if (param_15 != 0) {
    FUN_8007da80(&stack0x00000030,&DAT_801b95c0);
    param_11 = FUN_8006b548(&DAT_global__8004c31c,&DAT_global__8004c340);
    FUN_8006b184(&stack0x00000030,&DAT_801ba0ee,param_29 + 0x48,param_30 + -0x10);
  }
  return;
}

void FUN_global__8001d4b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined *)(param_1 + 0x11) = 0;
  return;
}

void FUN_global__8001d4d4(int param_1)

{
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0xe) = 0xff;
  return;
}

void FUN_global__8001d4e8(int param_1)

{
  *(undefined2 *)(param_1 + 10) = 0xffef;
  return;
}

int FUN_global__8001d4f4(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_38;
  int local_34;

  iVar4 = -2;

  if (*(short *)(param_1 + 10) < 0) {
    if (*(short *)(param_1 + 10) < -1) {
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
    }
  }
  else {

    sVar1 = *(short *)(param_1 + 10) + 1;
    *(short *)(param_1 + 10) = sVar1;
    if (0x38 < sVar1) {
      *(undefined2 *)(param_1 + 10) = 0xc;
    }

    if (0 < *(short *)(param_1 + 0xc)) {
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
    }
    sVar1 = *(short *)(param_1 + 0xc);
    if (sVar1 < 0) {
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
      sVar1 = *(short *)(param_1 + 0xc);
    }
    if (sVar1 == 0) {
      *(undefined *)(param_1 + 0xe) = 0xff;
    }
    local_38 = param_1;
    local_34 = param_2;

    if (-1 < *(char *)(param_1 + 0xe)) {
      (**(code **)(param_1 + 0x14))(0,&local_38);
    }
    (**(code **)(param_1 + 0x14))(0,&local_38,(int)*(char *)(param_1 + 9));

    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;

      if (param_2 == 0 || *(char *)(param_1 + 0x10) != '\0') {
        return -2;
      }
      uVar3 = *(uint *)(param_2 + 4);
      if ((uVar3 & 0x500) != 0) {
        return -1;
      }

      if (param_4 == 0) {
        uVar3 = *(uint *)(param_3 + 4);
      }
      if ((uVar3 & 0xa00) != 0) {
        (**(code **)(param_1 + 0x14))(3,&local_38,(int)*(char *)(param_1 + 9));
        return (int)*(char *)(param_1 + 9);
      }
      uVar3 = *(uint *)(param_2 + 4) | *(uint *)(param_2 + 0xc);
      if (*(char *)(param_1 + 8) < '\x02') {
        return -2;
      }
      *(undefined *)(param_1 + 0xf) = 1;
      iVar2 = (int)*(char *)(param_1 + 9);

      if ((uVar3 & 4) != 0) {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 9);
        iVar2 = iVar2 + -1;
        iVar4 = -3;
        if (iVar2 < 0) {
          iVar2 = *(char *)(param_1 + 8) + -1;
        }
        *(undefined2 *)(param_1 + 0xc) = 0xfff4;
        *(char *)(param_1 + 9) = (char)iVar2;
        (**(code **)(param_1 + 0x14))(4,&local_38,(int)(char)iVar2);
      }

      if ((uVar3 & 8) == 0) {
        return iVar4;
      }
      *(char *)(param_1 + 0xe) = (char)iVar2;
      iVar2 = iVar2 + 1;
      if (*(char *)(param_1 + 8) <= iVar2) {
        iVar2 = 0;
      }
      *(undefined2 *)(param_1 + 0xc) = 0xc;
      *(char *)(param_1 + 9) = (char)iVar2;
      (**(code **)(param_1 + 0x14))(4,&local_38,(int)(char)iVar2);
      return -3;
    }
    *(undefined *)(param_1 + 0x11) = 0;
  }
  return -2;
}

void FUN_global__8001d7c0(short *param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *local_48 [2];
  undefined4 local_40;
  short local_3c;
  short local_3a;
  short local_38;
  undefined auStack_30 [8];

  sVar1 = *param_1;
  local_3a = param_1[1];
  iVar6 = (int)local_3a;
  uVar2 = (uint)param_1[5];
  iVar5 = uVar2 - 0xc;
  local_48[0] = param_1;
  local_40 = param_2;

  if ((int)uVar2 < 0) {
    if (-2 < (int)uVar2) {
      return;
    }
    iVar5 = ~uVar2 * 0x80;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    sVar3 = (short)(iVar5 >> 4);
    local_3c = sVar1;
  }
  else {

    if ((-1 < iVar5) && ((*(byte *)((int)param_1 + 0xf) & 1) != 0)) {
      iVar4 = ((int)((uint)(ushort)param_1[2] << 0x10) >> 0x11) + 8;
      FUN_8006ba48(auStack_30,param_2,sVar1 + iVar4 + 6,iVar6,6,10,iVar5);
      FUN_8006ba48(auStack_30,param_2,(sVar1 - iVar4) + -6,iVar6,0xfffffffa,10,iVar5);
      FUN_8007da44(param_2,0x20);
    }
    iVar5 = 0x80;
    if (param_1[5] < 0xc) {
      iVar5 = ((int)param_1[5] << 7) / 0xc;
    }
    sVar3 = param_1[2];
    iVar6 = (int)param_1[6];
    iVar4 = (sVar3 * iVar6) / 0xc;
    local_3c = -sVar3;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      local_3c = sVar3;
    }
    sVar3 = (short)((iVar5 * (0xc - iVar6)) / 0xc);

    if (-1 < *(char *)(param_1 + 7)) {
      local_3c = sVar1 + (short)iVar4 + local_3c;
      local_38 = 0x80 - sVar3;
      (**(code **)(param_1 + 10))(1,local_48,(int)*(char *)(param_1 + 7));
    }
    local_3c = sVar1 + (short)(iVar4 / 2);
  }
  local_38 = sVar3;
  (**(code **)(param_1 + 10))(1,local_48,(int)*(char *)((int)param_1 + 9));
  return;
}

void FUN_global__8001da08(void)

{
  undefined uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 auStack_3d50 [488];
  undefined4 auStack_35b0 [3434];

  FUN_80082fac(&LAB_global__80022d7e_2,auStack_3d50);
  puVar4 = &DAT_801ef6b0;
  puVar3 = (undefined4 *)((int)auStack_3d50 + (uint)DAT_801c98e0 * 0x7a9);
  puVar2 = (undefined4 *)((int)auStack_35b0 + (uint)DAT_801c98e0 * 0x7a9);

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

  uVar5 = puVar3[1];
  uVar1 = *(undefined *)(puVar3 + 2);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  *(undefined *)(puVar4 + 2) = uVar1;
  return;
}

void FUN_global__8001e014(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  puVar1 = (uint *)FUN_global__80020ce0();
  iVar6 = 0;
  iVar5 = 0x218;
  puVar4 = puVar1 + 8;

  do {
    if (0x7f < iVar6) {
      return;
    }
    puVar3 = (uint *)(&DAT_801c98e0 + iVar5);

    if (*puVar1 != 0xffffffff) {
      puVar2 = puVar1;

      if (*puVar3 == 0xffffffff) {

        do {
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 4;
        } while (puVar2 != puVar4);
      }
      else {

        if (*puVar3 <= *puVar1) goto LAB_global__8001e0f8;

        do {
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 4;
        } while (puVar2 != puVar4);
      }
      *puVar3 = *puVar2;
    }
LAB_global__8001e0f8:
    puVar4 = puVar4 + 9;
    puVar1 = puVar1 + 9;
    iVar5 = iVar5 + 0x24;
    iVar6 = iVar6 + 1;
  } while( true );
}

int FUN_global__8001e11c(uint *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  if (*param_1 != 0xffffffff) {
    iVar12 = 0x68;
    iVar11 = 4;

    for (iVar10 = 0; puVar5 = (uint *)(param_3 + iVar11), iVar10 < 5; iVar10 = iVar10 + 1) {
      uVar4 = *puVar5;
      if (uVar4 == 0xffffffff) {
        return iVar10;
      }
      if (*param_1 < uVar4) {
        return iVar10;
      }
      if (uVar4 == *param_1) {

        iVar6 = 0;
        puVar7 = param_1;

        do {
          cVar1 = *(char *)puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          cVar2 = *(char *)puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          if (cVar1 != cVar2) goto LAB_global__8001e240;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x14);

        pcVar9 = (char *)(param_3 + iVar12);
        iVar6 = FUN_8008cfc4(pcVar9);
        iVar3 = FUN_8008cfc4(param_2);
        if (iVar6 == iVar3) {
          iVar3 = 0;
          pcVar8 = param_2;
          if (iVar6 < 0) {
            return -1;
          }

          while( true ) {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if (cVar1 != cVar2) break;
            iVar3 = iVar3 + 1;
            if (iVar6 < iVar3) {
              return -1;
            }
          }
        }
      }
LAB_global__8001e240:
      iVar12 = iVar12 + 0xc;
      iVar11 = iVar11 + 0x14;
    }
  }
  return -1;
}

void FUN_global__8001e284(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_30;

  iVar1 = FUN_global__80020d0c();
  iVar8 = 0x1418;

  for (local_30 = 0; iVar7 = 0, local_30 < 6; local_30 = local_30 + 1) {
    puVar4 = &DAT_801c98e0 + iVar8;

    for (; iVar6 = 0, iVar7 < 10; iVar7 = iVar7 + 1) {
      iVar5 = 0x68;
      iVar3 = 4;

      for (; iVar6 < 5; iVar6 = iVar6 + 1) {
        iVar2 = FUN_global__8001e11c(iVar1 + iVar3,iVar1 + iVar5,puVar4);
        if (-1 < iVar2) {
          FUN_8005defc(puVar4,iVar1 + iVar3,iVar1 + iVar5);
        }
        iVar5 = iVar5 + 0xc;
        iVar3 = iVar3 + 0x14;
      }
      iVar1 = iVar1 + 0xa4;
      puVar4 = puVar4 + 0xa4;
    }
    iVar8 = iVar8 + 0x668;
  }
  return;
}

void FUN_global__8001e38c(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;

  pcVar1 = (char *)FUN_global__80020d38();
  iVar2 = 4;

  for (iVar3 = 0; iVar3 < *pcVar1; iVar3 = iVar3 + 1) {
    FUN_8005e0d0(&DAT_801cd368,pcVar1 + iVar2,0);
    iVar2 = iVar2 + 0x14;
  }
  return;
}

void FUN_global__8001e408(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;

  pcVar1 = (char *)FUN_global__80020d64();
  iVar2 = 4;

  for (iVar3 = 0; iVar3 < *pcVar1; iVar3 = iVar3 + 1) {
    FUN_8005e0d0(&DAT_801cd40c,pcVar1 + iVar2,0);
    iVar2 = iVar2 + 0x14;
  }
  return;
}

void FUN_global__8001e484(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;

  pcVar1 = (char *)FUN_global__80020d90();
  iVar2 = 4;

  for (iVar3 = 0; iVar3 < *pcVar1; iVar3 = iVar3 + 1) {
    FUN_8005e0d0(&DAT_801cd4b0,pcVar1 + iVar2,1);
    iVar2 = iVar2 + 0x14;
  }
  return;
}

void FUN_global__8001e61c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;

  bVar1 = true;
  iVar3 = 0;
  iVar2 = param_1;

  do {
    if (*(char *)(iVar2 + 0x2b5c) == '\0') {
      bVar1 = false;
    }
    iVar3 = iVar3 + 1;
    iVar2 = param_1 + iVar3;
  } while (iVar3 < 8);
  iVar2 = 0;

  if (bVar1) {
    puVar4 = &UNK_801ccd00;

    for (; iVar2 < 10; iVar2 = iVar2 + 1) {
      if (puVar4[1] == '\0') {
        puVar4[1] = 1;
      }
      puVar4 = puVar4 + 0xa4;
    }
    bVar1 = true;
    iVar3 = 0;
    iVar2 = param_1;

    do {
      if (*(char *)(iVar2 + 0x2b64) == '\0') {
        bVar1 = false;
      }
      iVar3 = iVar3 + 1;
      iVar2 = param_1 + iVar3;
    } while (iVar3 < 8);
    iVar2 = 0;

    if (bVar1) {
      puVar4 = &UNK_801cc698;

      for (; iVar2 < 10; iVar2 = iVar2 + 1) {
        if (puVar4[1] == '\0') {
          puVar4[1] = 1;
        }
        puVar4 = puVar4 + 0xa4;
      }
    }
  }
  return;
}

void FUN_global__8001e808(char *param_1,uint param_2)

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
