
void FUN_overlay0__80026bb4(int param_1,int param_2)
{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;

  iVar14 = *(int *)(param_2 + 0x20);
  uVar11 = *(uint *)(param_1 + 0x30);
  iVar5 = uVar11 + iVar14;

  iVar13 = *(int *)(param_2 + 0x24);
  uVar10 = *(uint *)(param_1 + 0x34);
  iVar6 = uVar10 + iVar13;

  iVar12 = *(int *)(param_2 + 0x28);
  uVar9 = *(uint *)(param_1 + 0x38);
  iVar4 = uVar9 + iVar12;

  lVar1 = (longlong)iVar4 * (longlong)iVar4;
  lVar2 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)*(int *)(param_1 + 0x2c);

  uVar7 = 0;
  iVar8 = 0x40000;

  lVar3 = lVar2 + lVar1 + (longlong)iVar5 * (longlong)iVar5 + (longlong)iVar6 * (longlong)iVar6;
  iVar5 = (int)((ulonglong)lVar3 >> 0x20);
  iVar4 = 0;

  if (lVar3 < 0x4000000000000) {
    do {
      do {

        uVar7 = uVar7 >> 2 | iVar8 << 0x1e;
        iVar8 = iVar8 >> 2;
        iVar4 = iVar4 + 1;
      } while (iVar5 < iVar8);
    } while ((iVar8 == iVar5) && ((uint)lVar3 < uVar7));
  }

  if (iVar4 != 0) {
    iVar4 = iVar4 + -1;
  }

  if (1 < iVar4) {
    iVar4 = 2;
  }

  *(short *)(param_2 + 0x9a) = (short)iVar4;

  FUN_80081a34((undefined4 *)(param_2 + 0x9c),param_2,iVar4,(int)((ulonglong)lVar1 >> 0x20),lVar2);

  gte_ldR11R12(*(undefined4 *)(param_2 + 0x9c));
  gte_ldR13R21(*(undefined4 *)(param_2 + 0xa0));
  gte_ldR22R23(*(undefined4 *)(param_2 + 0xa4));
  gte_ldR31R32(*(undefined4 *)(param_2 + 0xa8));
  gte_ldR33(*(undefined4 *)(param_2 + 0xac));

  iVar5 = (int)(iVar14 + (uVar11 & 0xffc00000)) >> 10;
  iVar6 = (int)(iVar13 + (uVar10 & 0xffc00000)) >> 10;
  iVar4 = (int)(iVar12 + (uVar9 & 0xffc00000)) >> 10;

  gte_ldsv_(iVar5,iVar4,iVar6);
  gte_rtir_b();

  read_mt(iVar5,iVar6,iVar4);
  gte_ldtr(iVar5,iVar6,iVar4);

  *(int *)(param_2 + 0x78) = iVar5;
  *(int *)(param_2 + 0x7c) = iVar6;
  *(int *)(param_2 + 0x80) = iVar4;
  return;
}

void FUN_overlay0__80026db0(int *param_1,int param_2)
{
  int iVar1;

  *param_1 = *param_1 + param_2;

  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 1] = param_1[iVar1 + 1] + param_2;
  }

  param_1[9] = param_1[9] + param_2;
  param_1[10] = param_1[10] + param_2;
  return;
}

void FUN_overlay0__80026e04(void)
{
  return;
}

void FUN_overlay0__80026e0c(int param_1,int param_2)
{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar7 = 0;
  iVar5 = param_1;
  iVar6 = param_1;

  for (iVar8 = 0; iVar8 < 0x10; iVar8 = iVar8 + 1) {

    piVar3 = (int *)(iVar7 + param_1 + 0x28);
    iVar4 = 0;
    iVar2 = *piVar3;
    uVar1 = *(ushort *)(iVar6 + 8);

    while( true ) {

      *piVar3 = iVar2 + param_2;

      if ((int)(uint)uVar1 <= iVar4) break;

      piVar3 = (int *)(iVar4 * 4 + *(int *)(iVar5 + 0x28));
      iVar2 = *piVar3;
      iVar4 = iVar4 + 1;
    }

    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 2;
  }
  return;
}

void FUN_overlay0__80026e80(void)
{
  return;
}

void FUN_overlay0__80026e88(int param_1,int param_2)
{
  int iVar1;

  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + param_2;

  FUN_overlay0__80026db0();

  iVar1 = *(int *)(param_1 + 0x98) + param_2;
  *(int *)(param_1 + 0x98) = iVar1;

  FUN_overlay0__80026e04(iVar1,param_2);

  iVar1 = *(int *)(param_1 + 0x9c) + param_2;
  *(int *)(param_1 + 0x9c) = iVar1;

  FUN_overlay0__80026e0c(iVar1,param_2);

  iVar1 = *(int *)(param_1 + 0xa0) + param_2;
  *(int *)(param_1 + 0xa0) = iVar1;

  FUN_overlay0__80026e80(iVar1,param_2);

  FUN_overlay0__80026db0(param_1 + 0xa4,param_2);
  return;
}

void FUN_overlay0__80026f10(int param_1,int param_2)
{
  int *piVar1;
  int iVar2;
  int iVar3;

  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;

  for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(param_1 + 4); iVar2 = iVar2 + 1) {

    piVar1 = (int *)(iVar2 * 4 + param_1 + 0xc);
    *piVar1 = *piVar1 + param_2;
  }

  iVar3 = 0;
  iVar2 = param_1;

  if (*(short *)(param_1 + 4) != 0) {
    do {

      *(undefined4 *)(*(ushort **)(iVar2 + 0xc) + 2) =
           *(undefined4 *)(param_1 + (uint)**(ushort **)(iVar2 + 0xc) * 4 + 0xc);

      iVar3 = iVar3 + 1;

      *(undefined4 *)(*(int *)(iVar2 + 0xc) + 8) =
           *(undefined4 *)(param_1 + (uint)*(ushort *)(*(int *)(iVar2 + 0xc) + 2) * 4 + 0xc);

      FUN_overlay0__80026e88(*(undefined4 *)(iVar2 + 0xc),param_2);

      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  return;
}

void FUN_overlay0__80027008(void)
{
  return;
}

void FUN_overlay0__80027010(uint *param_1,int param_2)
{
  uint uVar1;

  FUN_8007adc8();

  for (uVar1 = 0; uVar1 < *param_1; uVar1 = uVar1 + 1) {

    param_1[uVar1 * 2 + 2] = param_1[uVar1 * 2 + 2] + param_2;
  }
  return;
}

void FUN_overlay0__80027074(uint *param_1,int param_2)
{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = param_1;

  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {

    param_1[uVar2 + 1] = param_1[uVar2 + 1] + param_2;

    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 1;

    FUN_overlay0__80027010(*puVar1,param_2);
  }
  return;
}

void FUN_overlay0__800270fc(uint *param_1,int param_2)
{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = param_1;

  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {

    param_1[uVar2 + 1] = param_1[uVar2 + 1] + param_2;

    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 1;

    FUN_overlay0__800200bc(*puVar1,param_2);
  }
  return;
}

void FUN_overlay0__80027184(ushort *param_1,int param_2)
{
  int iVar1;

  for (iVar1 = 0; iVar1 < (int)(uint)*param_1; iVar1 = iVar1 + 1) {

    *(int *)(param_1 + iVar1 * 2 + 2) = *(int *)(param_1 + iVar1 * 2 + 2) + param_2;
  }
  return;
}

void FUN_overlay0__800271c0(int param_1)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;

  for (iVar3 = 0; iVar3 < 0x21; iVar3 = iVar3 + 1) {

    piVar2 = (int *)(iVar3 * 4 + param_1 + 0x118);
    *piVar2 = *piVar2 + param_1;
  }

  iVar4 = 0;

  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;

  FUN_overlay0__80026f10(*(undefined4 *)(param_1 + 0x10),param_1);
  FUN_overlay0__80027074(*(undefined4 *)(param_1 + 0x14),param_1);
  FUN_overlay0__800270fc(*(undefined4 *)(param_1 + 0x18),param_1);

  iVar3 = param_1;
  do {

    puVar1 = (undefined4 *)(iVar3 + 0x118);
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;

    FUN_overlay0__80027008(*puVar1,param_1);
  } while (iVar4 < 0x21);

  FUN_overlay0__80027184(*(undefined4 *)(param_1 + 0x1c),param_1);
  FUN_overlay0__80038da0(*(undefined4 *)(param_1 + 0x20));
  return;
}

void FUN_overlay0__800272c8(int *param_1)
{
  int iVar1;
  int iVar2;

  iVar2 = *param_1;
  param_1 = param_1 + 1;

  while (iVar2 = iVar2 + -1, iVar2 != -1) {

    iVar1 = FUN_8007bca0(param_1,0,0);

    param_1 = (int *)(iVar1 + 3U & 0xfffffffc);
  }
  return;
}

void FUN_overlay0__8002732c(int param_1)
{
  undefined uVar1;

  uVar1 = FUN_80060eb4(DAT_801d589c);

  *(undefined *)(param_1 + 0x5d30) = uVar1;
  return;
}

void FUN_overlay0__8002736c(int param_1,int param_2)
{
  int iVar1;

  iVar1 = (uint)DAT_801e2f7c + param_2 * 2;

  FUN_8005d92c(iVar1 + 1,param_1 + 0xe5700);

  FUN_overlay0__800272c8(param_1 + 0xe5700);

  FUN_8005d92c(iVar1,param_1 + 0x5d34);
  return;
}

void FUN_overlay0__800273d8(int param_1,undefined4 param_2)
{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_80060e94(param_2);

  uVar2 = FUN_80060fb0(*(undefined4 *)(iVar1 + 4));

  FUN_8005d92c(uVar2,param_1 + 0xe5700);

  FUN_8007bca0(param_1 + 0xe5700,&LAB_overlay0__8002f548,&DAT_overlay0__8002f550);
  return;
}

void FUN_overlay0__8002743c(int param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;

  FUN_overlay0__800273d8();

  iVar1 = FUN_80060e94(param_2);

  iVar3 = param_1 + 0xb534;

  iVar2 = (uint)DAT_801e2fc8 + param_2 * 2;

  FUN_8005d92c(iVar2 + 1,iVar3);

  FUN_overlay0__800272c8(iVar3);

  FUN_8005d92c(iVar2,iVar3);

  FUN_overlay0__800271c0(iVar3);

  FUN_overlay0__8002736c(param_1,*(undefined2 *)(iVar1 + 10));
  return;
}

void FUN_overlay0__800274d4(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = param_1 + 0xe5700;
  FUN_8005d8a0(0x6d,iVar4);

  FUN_overlay0__8002eb08(param_1 + 0x450c,iVar4);

  iVar3 = iVar4 + *(int *)(param_1 + 0xe5710);

  *(undefined2 *)(iVar3 + 0xc) = 0x170;
  *(undefined2 *)(iVar3 + 0xe) = 0x1fd;

  iVar2 = iVar3 + 8 + *(int *)(iVar3 + 8);

  *(undefined2 *)(iVar2 + 4) = 0x260;
  *(undefined2 *)(iVar2 + 6) = 0x40;

  FUN_8007bca0(iVar3,0,0);

  iVar2 = FUN_80060e94(*(undefined *)(param_1 + 0x5d30));

  iVar3 = 3;
  if ((*(ushort *)(iVar2 + 8) & 1) != 0) {
    iVar3 = 5;
  }

  iVar1 = iVar3 << 1;

  if ((*(ushort *)(iVar2 + 8) & 2) != 0) {
    iVar3 = 4;
    iVar1 = 8;
  }

  iVar4 = iVar4 + *(int *)((iVar1 + iVar3) * 4 + iVar4 + 0x10);

  *(undefined2 *)(iVar4 + 0xc) = 0x170;
  *(undefined2 *)(iVar4 + 0xe) = 0x1ff;

  iVar2 = iVar4 + 8 + *(int *)(iVar4 + 8);

  *(undefined2 *)(iVar2 + 4) = 0x240;
  *(undefined2 *)(iVar2 + 6) = 0;

  FUN_8007bca0(iVar4,0,0);
  return;
}

void FUN_overlay0__800275e8(int param_1,undefined4 param_2)
{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  undefined **ppuVar16;
  undefined local_50 [8];
  undefined4 local_48;
  int local_44;
  int local_40;
  uint local_3c;
  ushort *local_38;
  undefined *local_34;
  ushort *local_30;

  iVar4 = FUN_80060e94(param_2);

  if ((*(ushort *)(iVar4 + 8) & 0x40) == 0) {

    pcVar13 = &DAT_801d58a0;
    if (DAT_801d5865 == '\0') {
      pcVar13 = "General01";
    }

    if (*pcVar13 != '\0') {

      puVar9 = (ushort *)(param_1 + 0xe5700);
      FUN_8005d8d4(7,puVar9);

      iVar11 = param_1 + 0xe5710;
      local_44 = 0;
      uVar3 = *puVar9;
      iVar4 = 0;

      if (*(short *)(param_1 + 0xe5702) != 0) {
        do {

          iVar5 = FUN_8008cf00(iVar11,pcVar13);
          if (iVar5 == 0) {
            local_44 = iVar11;
          }
          iVar4 = iVar4 + 1;
          iVar11 = iVar11 + (uint)uVar3 * 4 + 0x10;
        } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xe5702));
      }

      if (local_44 != 0) {

        if (DAT_800a951c == '\0') {
          DAT_801d58b0 = FUN_8007d23c(0xffffffff);
        }

        iVar4 = iVar11 + 0x1f60;
        local_34 = local_50;
        local_40 = 0;
        local_48 = DAT_801d58b0;
        local_30 = puVar9;

        for (ppuVar16 = &PTR_DAT_overlay0__8002f558_overlay0__8002f5a4; iVar5 = 0,
            (int)ppuVar16 < -0x7ffd0a20; ppuVar16 = ppuVar16 + 3) {

          local_3c = (uint)*(ushort *)(ppuVar16 + 2);
          uVar15 = (uint)*(byte *)((int)ppuVar16 + 10);

          FUN_8008ce30(local_50,0xffffffff,8);

          for (iVar10 = 0; psVar12 = (short *)(iVar4 + 0xe), iVar10 < (int)uVar15;
              iVar10 = iVar10 + 1) {
            do {
              uVar6 = FUN_80083ae0(&local_48);
            } while (local_34[uVar6 % uVar15] != -1);
            local_34[uVar6 % uVar15] = (char)iVar10;
          }

          local_38 = local_30;
          iVar14 = local_40 * 4 + local_44;

          for (iVar10 = 0; bVar2 = iVar5 < (int)uVar15, iVar10 < (int)(uint)local_38[2];
              iVar10 = iVar10 + 1) {
            if (bVar2) {
              uVar3 = FUN_80083ae0(&local_48);

              if ((*(short *)(iVar14 + 0x12) != 0x13) &&
                 ((uVar3 & 0xfff) <= *(ushort *)(iVar14 + 0x10))) {

                cVar1 = local_34[iVar5];

                psVar12[-1] = *(short *)(ppuVar16 + 1);
                *psVar12 = *(short *)((int)ppuVar16 + 6) + (short)cVar1;

                iVar7 = cVar1 * 4;
                iVar8 = iVar4 + 8 + *(int *)(psVar12 + -3);

                *(undefined2 *)(iVar8 + 4) = *(undefined2 *)(*ppuVar16 + iVar7);
                iVar5 = iVar5 + 1;
                *(undefined2 *)(iVar8 + 6) = *(undefined2 *)(*ppuVar16 + iVar7 + 2);

                FUN_8007bca0(iVar4,0,0);
              }
            }

            psVar12 = (short *)((int)psVar12 + local_3c);
            iVar4 = iVar4 + local_3c;
            iVar14 = iVar14 + 4;
            local_40 = local_40 + 1;
          }

          while (bVar2) {
            cVar1 = local_34[iVar5];

            *(undefined2 *)(iVar11 + 0xc) = *(undefined2 *)(ppuVar16 + 1);
            *(short *)(iVar11 + 0xe) = *(short *)((int)ppuVar16 + 6) + (short)cVar1;

            iVar10 = cVar1 * 4;
            iVar14 = iVar11 + 8 + *(int *)(iVar11 + 8);

            *(undefined2 *)(iVar14 + 4) = *(undefined2 *)(*ppuVar16 + iVar10);
            iVar5 = iVar5 + 1;
            *(undefined2 *)(iVar14 + 6) = *(undefined2 *)(*ppuVar16 + iVar10 + 2);

            FUN_8007bca0(iVar11,0,0);
            bVar2 = iVar5 < (int)uVar15;
          }

          iVar11 = iVar11 + local_3c;
          local_30 = local_30 + 1;
        }
      }
    }
  }
  return;
}

void FUN_overlay0__8002797c(int param_1)
{

  if (*(char *)(param_1 + 0x11d700) == '\0') {

    *(undefined *)(param_1 + 0x11d700) = 1;

    FUN_overlay0__8002743c(param_1,*(undefined *)(param_1 + 0x5d30));

    FUN_overlay0__800274d4(param_1);

    FUN_overlay0__800275e8(param_1,*(undefined *)(param_1 + 0x5d30));
  }
  return;
}

uint * FUN_overlay0__800279e8(short *param_1,int param_2,uint param_3,int param_4)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint **ppuVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint **ppuVar12;
  undefined4 uVar13;
  uint **ppuVar14;

  uVar6 = (int)(param_3 - (int)*param_1) >> ((int)param_1[2] & 0x1fU);
  uVar3 = param_4 - param_1[1] >> ((int)param_1[3] & 0x1fU);

  if ((uVar6 < 4) && (uVar3 < 4)) {

    iVar1 = uVar3 * 4 + uVar6;

    ppuVar12 = *(uint ***)(param_1 + iVar1 * 2 + 0x14);
    ppuVar14 = ppuVar12 + (ushort)param_1[iVar1 + 4];

    if ((ushort)param_1[iVar1 + 4] != 0) {

      puVar4 = *ppuVar12;
      ppuVar7 = ppuVar12 + 1;

      if (ppuVar7 == ppuVar14) {
        ppuVar7 = ppuVar14 + -1;
      }

      uVar3 = *puVar4;

      gte_ldSXY0(param_3 & 0xffff | param_4 << 0x10);

      uVar9 = *(undefined4 *)((uVar3 & 0x1ff) * 8 + param_2);
      gte_ldSXY1(uVar9);

      uVar13 = *(undefined4 *)((uVar3 >> 0xf & 0xff8) + param_2);
      gte_ldSXY2(*(undefined4 *)((uVar3 >> 6 & 0xff8) + param_2));

      uVar11 = *(undefined4 *)((puVar4[1] & 0x1ff) * 8 + param_2);

      gte_nclip_b();
      puVar8 = *ppuVar7;

      while( true ) {
        uVar6 = *puVar8;

        if (-1 < (int)(uVar3 << 1)) {
          uVar11 = uVar13;
        }

        gte_ldSXY1(uVar13);
        iVar1 = gte_stMAC0();
        gte_nclip_b();

        uVar10 = *(undefined4 *)((uVar6 & 0x1ff) * 8 + param_2);
        gte_ldSXY2(uVar11);
        uVar3 = gte_stMAC0();
        gte_nclip_b();

        gte_ldSXY1(uVar9);
        uVar13 = *(undefined4 *)((uVar6 >> 0xf & 0xff8) + param_2);
        iVar5 = gte_stMAC0();
        gte_nclip_b();

        uVar11 = *(undefined4 *)((puVar8[1] & 0x1ff) * 8 + param_2);

        ppuVar7 = ppuVar7 + 1;
        if (ppuVar7 == ppuVar14) {
          ppuVar7 = ppuVar14 + -1;
        }

        gte_ldSXY1(uVar10);
        gte_ldSXY2(*(undefined4 *)((uVar6 >> 6 & 0xff8) + param_2));
        uVar2 = gte_stMAC0();
        gte_nclip_b();

        ppuVar12 = ppuVar12 + 1;

        if (-1 < (int)(-iVar1 | uVar3 | -iVar5 | uVar2)) break;

        uVar3 = uVar6;
        puVar4 = puVar8;
        puVar8 = *ppuVar7;
        uVar9 = uVar10;

        if (ppuVar12 == ppuVar14) {
          return (uint *)0x0;
        }
      }
      return puVar4;
    }
  }
  return (uint *)0x0;
}

uint FUN_overlay0__80027bbc(int param_1,int *param_2)
{
  uint uVar1;
  int local_18;
  int local_14;
  int local_10;

  local_18 = *param_2 - *(int *)(param_1 + 0x18);
  local_14 = param_2[1] - *(int *)(param_1 + 0x1c);
  local_10 = param_2[2] - *(int *)(param_1 + 0x20);

  uVar1 = FUN_80081a78(&local_18,param_1 + 0x24);

  return ~uVar1 >> 0x1f;
}

void FUN_overlay0__80027c1c(int param_1,int *param_2)
{

  FUN_overlay0__800279e8
            (*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa4),
             (int)(*param_2 - (*(uint *)(param_1 + 0x30) & 0xffc00000)) >> 10,
             (int)(param_2[2] - (*(uint *)(param_1 + 0x38) & 0xffc00000)) >> 10);

  return;
}

int FUN_overlay0__80027c70(int param_1,uint *param_2,int *param_3)
{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short local_28;
  undefined2 local_26;
  undefined2 local_24;
  longlong local_20;

  iVar9 = *(int *)(param_1 + 0xa4);

  iVar16 = *param_3 - (*(uint *)(param_1 + 0x30) & 0xffc00000);
  uVar3 = *param_2;
  iVar14 = param_3[2] - (*(uint *)(param_1 + 0x38) & 0xffc00000);

  psVar8 = (short *)(iVar9 + (uVar3 & 0x1ff) * 8);
  psVar6 = (short *)(iVar9 + (uVar3 >> 6 & 0xff8));
  psVar12 = (short *)(iVar9 + (uVar3 >> 0xf & 0xff8));
  uVar2 = *(uint *)(param_1 + 0x34);
  psVar7 = psVar6;
  psVar13 = psVar12;

  if ((uVar3 & 0x40000000) != 0) {

    psVar10 = (short *)(iVar9 + (param_2[1] & 0x1ff) * 8);

    iVar11 = (int)*psVar8 + (int)*psVar6 + (int)*psVar12 + (int)*psVar10 >> 2;
    local_28 = (short)iVar11;
    iVar9 = (int)psVar8[1] + (int)psVar6[1] + (int)psVar12[1] + (int)*psVar10 >> 2;
    local_26 = (short)iVar9;
    local_24 = (short)((int)psVar8[2] + (int)psVar6[2] + (int)psVar12[2] + (int)*psVar10 >> 2);

    iVar5 = (iVar16 >> 10) - iVar11;
    iVar4 = (iVar14 >> 10) - iVar9;

    uVar3 = (uint)(iVar5 * (psVar8[1] - iVar9) - iVar4 * (*psVar8 - iVar11)) >> 0x1f;
    if (iVar5 * (psVar6[1] - iVar9) - iVar4 * (*psVar6 - iVar11) < 0) {
      uVar3 = uVar3 | 2;
    }
    if (iVar5 * (psVar12[1] - iVar9) - iVar4 * (*psVar12 - iVar11) < 0) {
      uVar3 = uVar3 | 4;
    }
    if (iVar5 * (psVar10[1] - iVar9) - iVar4 * (*psVar10 - iVar11) < 0) {
      uVar3 = uVar3 | 8;
    }

    psVar13 = &local_28;

    switch(uVar3) {
    case 1:
    case 3:
    case 7:
      psVar7 = psVar8;
      psVar8 = psVar10;
      break;
    case 4:
    case 0xc:
    case 0xd:
      psVar7 = psVar12;
      psVar8 = psVar6;
      break;
    case 8:
    case 9:
    case 0xb:
      psVar7 = psVar10;
      psVar8 = psVar12;
    }
  }

  iVar4 = (int)*psVar13;
  iVar11 = (int)psVar13[1];
  iVar9 = (int)psVar13[2];

  iVar5 = (*psVar8 - iVar4) * (psVar7[1] - iVar11) - (psVar8[1] - iVar11) * (*psVar7 - iVar4);
  iVar15 = iVar9 * 0x400;

  if (iVar5 != 0) {

    local_20 = (longlong)(iVar14 + iVar11 * -0x400) *
               (longlong)
               ((*psVar8 - iVar4) * (psVar7[2] - iVar9) - (psVar8[2] - iVar9) * (*psVar7 - iVar4));

    lVar1 = (longlong)(iVar16 + iVar4 * -0x400) *
            (longlong)
            ((psVar8[2] - iVar9) * (psVar7[1] - iVar11) - (psVar8[1] - iVar11) * (psVar7[2] - iVar9)
            ) + local_20;

    iVar9 = FUN_80086084((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar5,iVar5 >> 0x1f);
    iVar15 = iVar9 + iVar15;
  }

  return (uVar2 & 0xffc00000) + iVar15;
}

void FUN_overlay0__80027fc4(int param_1,int *param_2)
{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  uint *puVar16;

  piVar14 = *(int **)(param_1 + 0x98);
  iVar15 = *piVar14;

  if (iVar15 != 0) {

    psVar7 = (short *)((int)param_2 + 0x2a);

    uVar2 = *(uint *)(param_1 + 0x30) & 0xffc00000;
    uVar3 = *(uint *)(param_1 + 0x38) & 0xffc00000;
    piVar13 = param_2;

    for (iVar12 = 4; puVar16 = (uint *)(piVar14 + 1), iVar12 != 0; iVar12 = iVar12 + -1) {

      iVar6 = (int)(*piVar13 - uVar2) >> 10;
      iVar8 = (int)(*(int *)(psVar7 + -0x13) - uVar3) >> 10;
      iVar5 = (int)(*(int *)(psVar7 + -0xf) - uVar2) >> 10;
      iVar9 = (int)(*(int *)(psVar7 + -0xd) - uVar3) >> 10;

      sVar1 = (short)iVar6;
      sVar11 = (short)iVar5 - sVar1;
      sVar10 = (short)iVar9 - (short)iVar8;

      psVar7[-5] = sVar1;
      psVar7[-4] = (short)iVar8;
      psVar7[-3] = (short)iVar9;
      psVar7[-2] = (short)iVar5;

      if (((((0xfffe < iVar6 + 0x7fffU) || (iVar5 < -0x7fff)) || (0x7fff < iVar5)) ||
          ((iVar8 < -0x7fff || (0x7fff < iVar8)))) || ((iVar9 < -0x7fff || (0x7fff < iVar9)))) {
        sVar10 = 0;
        sVar11 = 0;
      }

      psVar7[-1] = -sVar10;
      *psVar7 = sVar11;

      psVar7 = psVar7 + 0x16;
      piVar13 = piVar13 + 0xb;
    }

    iVar12 = *(int *)(param_1 + 0xa4);

    gte_ldVZ0(0);
    gte_ldVZ1(0);
    gte_ldR33(0);
    gte_ldL33(0);

    while (iVar15 != 0) {
      iVar15 = iVar15 + -1;

      iVar5 = *(int *)((*puVar16 & 0xffff) * 8 + iVar12);
      iVar6 = *(int *)((*puVar16 >> 0x10) * 8 + iVar12);

      gte_ldR31R32(iVar5);
      gte_ldL11L12(iVar5);
      gte_ldL31L32(iVar6);
      gte_ldVXY0((iVar6 >> 0x10) - (iVar5 >> 0x10) & 0xffffU | iVar5 * 0x10000 + iVar6 * -0x10000);

      iVar6 = param_2[8];
      iVar5 = param_2[9];
      psVar7 = (short *)((int)param_2 + 0x1e);
      piVar13 = param_2;

      do {

        gte_ldR11R12(iVar6);
        gte_ldR13R21(iVar5);
        gte_ldR22R23(iVar5);

        gte_mvmva_b(0,0,0,3,0);

        gte_ldVXY1(psVar7 + 5);
        gte_ldL13L21(iVar5);
        gte_ldL22L23(iVar5);

        iVar6 = *(int *)(psVar7 + 0x17);
        iVar5 = *(int *)(psVar7 + 0x19);

        iVar8 = gte_stMAC3();
        iVar9 = gte_stMAC1();
        iVar4 = gte_stMAC2();

        gte_mvmva_b(0,1,1,3,0);

        uVar2 = iVar9 - iVar8;
        uVar3 = uVar2 - (iVar4 - iVar8);

        if (((int)(uVar2 ^ iVar4 - iVar8) < 0) && (-1 < (int)(uVar2 | uVar3))) {

          iVar8 = gte_stMAC2();
          iVar9 = gte_stMAC1();
          iVar4 = gte_stMAC3();

          if (((iVar9 - iVar8 ^ iVar4 - iVar8) < 0) &&
             (iVar8 = FUN_80086084(uVar2 * 0x1000,((int)uVar2 >> 0x1f) << 0xc | uVar2 >> 0x14,uVar3,
                                   (int)uVar3 >> 0x1f), iVar8 < *(int *)(psVar7 + -3))) {

            *(int *)(psVar7 + -3) = iVar8;
            psVar7[-1] = *(short *)((int)piVar14 + 10);
            *psVar7 = -*(short *)(piVar14 + 2);
          }
        }

        piVar13 = piVar13 + 0xb;
        psVar7 = psVar7 + 0x16;
      } while (piVar13 != param_2 + 0x2c);

      puVar16 = puVar16 + 2;
      piVar14 = piVar14 + 2;
    }
  }
  return;
}
