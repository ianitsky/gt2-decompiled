
void FUN_80061504(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;

  *param_2 = *(undefined2 *)(param_1 + 0x18);
  uVar1 = *(undefined2 *)(param_1 + 0x1a);
  param_2[2] = 0xc00;
  param_2[3] = 0x7a;
  param_2[1] = uVar1;

  *param_3 = *(undefined2 *)(param_1 + 0x1c);
  uVar1 = *(undefined2 *)(param_1 + 0x1e);
  param_3[2] = 0xc00;
  param_3[3] = 0x7a;
  param_3[1] = uVar1;

  return;
}

int FUN_80061544(int param_1)

{

  return ((int)*(short *)(param_1 + 0x18) - (int)*(short *)(param_1 + 0x22)) * 0x10;
}

void FUN_8006155c(int param_1,int param_2,uint param_3)

{

  *(uint *)(param_1 + param_2 * 4 + 8) =
       (param_3 & 0x1f) << 3 |
       (param_3 & 0x3e0) << 6 |
       (param_3 & 0x7c00) << 9;

  return;
}

void FUN_8006158c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_8005d92c();
  FUN_8006101c(param_2,param_3);
  return;
}

void FUN_800615c8(int param_1)

{
  FUN_8005d92c(param_1 + 1);
  return;
}

bool FUN_800615e8(uint param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;

  bVar1 = (param_1 & 0xffffe0ff) != 0;

  if (bVar1) {

    uVar2 = FUN_80060d74();
    FUN_8005d908(uVar2,param_2);
  }

  return bVar1;
}

uint FUN_80061634(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;

  uVar2 = 0;

  if (param_2 - 0x41 < 0x1a) {
    param_2 = param_2 + 0x20;
  }

  while( true ) {

    if ((int)(uint)*param_1 <= (int)uVar2) {

      return param_2 % (uint)*param_1;
    }

    uVar1 = (uint)*(char *)((int)param_1 + uVar2 + 2);

    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }

    if (uVar1 == param_2) break;

    uVar2 = uVar2 + 1;
  }

  return uVar2;
}

void FUN_800616c4(int param_1,undefined4 *param_2,undefined *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;

  gte_ldTRX(0x40);
  gte_ldTRY(0x40);
  gte_ldR11R12(*param_2);
  gte_ldR13R21(param_2[1]);
  gte_ldR22R23(param_2[2]);
  gte_ldR31R32(param_2[3]);
  gte_ldR33(param_2[4]);

  piVar4 = *(int **)(param_1 + 0x18);
  DAT_1f800074 = param_3 + 2;
  uVar1 = *(ushort *)(param_1 + 2);

  if (piVar4 != piVar4 + uVar1) {
    uVar10 = 0;
    uVar3 = 0;
    piVar5 = piVar4;
    iVar9 = piVar4[1];
    iVar2 = *piVar4;

    do {
      iVar8 = iVar9;
      puVar7 = param_3;

      gte_ldsv_((iVar2 << 0x14) >> 0x16,
                (iVar2 << 10) >> 0x16,
                iVar2 >> 0x16);

      gte_rtirtr_b();

      piVar6 = piVar5 + 1;
      iVar9 = piVar5[2];

      *puVar7 = (char)uVar3;
      puVar7[1] = (char)uVar10;

      uVar3 = gte_stIR1();
      uVar10 = gte_stIR2();

      piVar5 = piVar6;
      param_3 = puVar7 + 2;
      iVar2 = iVar8;

    } while (piVar6 != piVar4 + uVar1);

    puVar7[2] = (char)uVar3;
    puVar7[3] = (char)uVar10;
  }

  return;
}

void FUN_80061798(int param_1,undefined4 param_2)

{

  short *psVar1;
  byte *pbVar2;
  byte bVar3, bVar4, bVar5, bVar6;
  undefined uVar7;
  char cVar8;
  undefined2 uVar9, uVar10, uVar11;
  short sVar12, sVar13, sVar14, sVar15;
  ushort uVar16;
  bool bVar17;
  uint *puVar18;
  int *piVar19, *piVar20;
  undefined4 *puVar21, *puVar23;
  int iVar22;
  uint *puVar24, *puVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined4 **ppuVar29;
  uint uVar30, uVar31;
  uint *puVar32;
  uint **ppuVar33;
  int iVar34;
  uint *puVar35, *puVar36;
  int iVar37;
  uint uVar38;
  undefined4 uVar39;
  int iVar40;
  int iVar41;
  undefined4 uVar42;
  undefined4 *puVar43;
  undefined4 **ppuVar44;
  SVECTOR *pSVar45;
  uint **ppuVar46;
  uint *puVar47;
  undefined4 **ppuVar48, **ppuVar49;
  undefined4 *puVar50;
  uint uVar51, uVar52;
  SVECTOR *pSVar53;
  undefined4 *puVar54, *puVar57;
  uint *puVar55, *puVar58;
  undefined4 **ppuVar56;
  undefined auStack_428 [1032];

  DAT_1f800070 = *(int *)(param_1 + 0x14);
  FUN_800616c4(param_1,param_2,auStack_428);

  gte_ldTRX(DAT_1f800078);
  gte_ldTRY(DAT_1f80007c);
  gte_ldTRZ(DAT_1f800080);
  gte_ldR11R12(DAT_1f800084);
  gte_ldR13R21(DAT_1f800088);
  gte_ldR22R23(DAT_1f80008c);
  gte_ldR31R32(_DAT_1f800090);
  gte_ldR33(DAT_1f800094);

  puVar47 = *(uint **)(param_1 + 0x1c);
  if (*(ushort *)(param_1 + 4) != 0) {
    puVar36 = puVar47 + (uint)*(ushort *)(param_1 + 4) * 4;

    do {

      uVar26 = *puVar47;
      uVar51 = puVar47[1];

      piVar19 = (int *)((uVar26 & 0xff) * 8 + DAT_1f800070);
      iVar40 = *piVar19;
      piVar20 = (int *)(((int)uVar26 >> 5 & 0x7f8U) + DAT_1f800070);
      iVar34 = *piVar20;
      iVar37 = piVar20[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + DAT_1f800070);

      gte_ldVXY0(iVar40);
      gte_ldVZ0(piVar19[1]);
      gte_ldVXY2(iVar34);
      gte_ldVZ2(iVar37);
      gte_ldVXY1(*puVar21);
      gte_ldVZ1(puVar21[1]);

      gte_rtpt_b();

      iVar22 = gte_stFLAG();
      read_sz_fifo3(iVar34,iVar37,iVar40);
      gte_nclip_b();
      iVar27 = gte_stMAC0();

      if (-1 < iVar22) {
        if (DAT_1f800398 < '\0') {
          iVar27 = -iVar27;
        }

        if (0 < iVar27) {

          if ((uint)(iVar34 < iVar37) == (uVar51 & 1)) {
            iVar34 = iVar37;
          }
          if ((uint)(iVar34 < iVar40) == (uVar51 & 1)) {
            iVar34 = iVar40;
          }

          uVar26 = (uint)(iVar34 << (DAT_1f800098 & 0x1f)) >> 0xd;
          iVar27 = uVar26 << 2;
          if (0xfff < uVar26) {
            iVar27 = 0x3ffc;
          }

          iVar27 = DAT_1f800064 + iVar27 + (uVar51 & 0x1e) * 2;
          uVar26 = DAT_1f800064;

          if ((int)(uVar51 & (int)DAT_1f800399) < 0) {

            uVar9 = *(undefined2 *)((puVar47[2] & 0x3fe) + DAT_1f800074);
            uVar10 = *(undefined2 *)((puVar47[2] >> 9 & 0x3fe) + DAT_1f800074);
            *(undefined2 *)(DAT_1f800068 + 3) =
                 *(undefined2 *)((uVar51 >> 4 & 0x3fe) + DAT_1f800074);
            *(undefined2 *)(DAT_1f800068 + 5) = uVar9;
            *(undefined2 *)(DAT_1f800068 + 7) = uVar10;
            sVar13 = DAT_1f8003ae;
            sVar12 = DAT_1f8003ac;
            gte_stSXY0();
            gte_stSXY2();
            gte_stSXY1();
            uVar28 = (uint)DAT_1f8003ac;
            uVar26 = (uint)DAT_1f8003ae;
            DAT_1f800068[1] = DAT_1f8003a4;
            *(short *)((int)DAT_1f800068 + 0xe) = sVar12;
            *(short *)((int)DAT_1f800068 + 0x16) = sVar13;
            *(undefined *)((int)DAT_1f800068 + 3) = 7;
            uVar51 = iVar27 - 0x1eU & 3;
            iVar34 = *(int *)((iVar27 - 0x1eU) - uVar51);
            uVar38 = iVar27 - 0x1eU & 3;
            puVar24 = (uint *)((iVar27 - 0x1eU) - uVar38);
            *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                       (uint)((int)DAT_1f800068 << 8) >> (3 - uVar38) * 8;
            uVar38 = (int)DAT_1f800068 + 2U & 3;
            puVar24 = (uint *)(((int)DAT_1f800068 + 2U) - uVar38);
            *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                       (iVar34 << (3 - uVar51) * 8 | uVar28 & 0xffffffffU >> (uVar51 + 1) * 8) >>
                       (3 - uVar38) * 8;
            DAT_1f800068 = DAT_1f800068 + 8;
          }

          ppuVar46 = DAT_1f80006c;
          uVar51 = iVar27 - 0x1eU & 3;
          iVar34 = *(int *)((iVar27 - 0x1eU) - uVar51);
          DAT_1f800068[1] = (uint *)puVar47[3];
          uVar38 = iVar27 - 0x1eU & 3;
          puVar24 = (uint *)((iVar27 - 0x1eU) - uVar38);
          *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                     (uint)((int)DAT_1f800068 << 8) >> (3 - uVar38) * 8;
          gte_stSXY0();
          gte_stSXY1();
          gte_stSXY2();
          *(undefined *)((int)DAT_1f800068 + 3) = 4;
          bVar17 = ppuVar46 < DAT_1f800068;
          uVar38 = (int)DAT_1f800068 + 2U & 3;
          puVar24 = (uint *)(((int)DAT_1f800068 + 2U) - uVar38);

          *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                     (iVar34 << (3 - uVar51) * 8 | uVar26 & 0xffffffffU >> (uVar51 + 1) * 8) >>
                     (3 - uVar38) * 8;
          DAT_1f800068 = DAT_1f800068 + 5;
          if (bVar17) break;
        }
      }
      puVar47 = puVar47 + 4;
    } while (puVar47 != puVar36);
  }

  puVar47 = *(uint **)(param_1 + 0x20);
  if (*(ushort *)(param_1 + 6) != 0) {
    puVar36 = puVar47 + (uint)*(ushort *)(param_1 + 6) * 4;
    do {

      uVar26 = *puVar47;
      uVar28 = puVar47[1];

      piVar19 = (int *)((uVar26 & 0xff) * 8 + DAT_1f800070);
      iVar34 = *piVar19;
      iVar22 = piVar19[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 5 & 0x7f8U) + DAT_1f800070);
      puVar23 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + DAT_1f800070);

      gte_ldVXY2(iVar34);
      gte_ldVZ2(iVar22);
      gte_ldVXY0(*puVar21);
      gte_ldVZ0(puVar21[1]);
      gte_ldVXY1(*puVar23);
      gte_ldVZ1(puVar23[1]);

      gte_rtpt_b();

      puVar21 = (undefined4 *)(((int)uVar26 >> 0x15 & 0x7f8U) + DAT_1f800070);
      uVar51 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(DAT_1f800070,iVar34,iVar22);
      gte_nclip_b();

      gte_ldVXY0(*puVar21);
      gte_ldVZ0(puVar21[1]);
      iVar27 = gte_stMAC0();

      gte_rtps_b();
      uVar26 = gte_stFLAG();

      iVar37 = gte_stSZ3();
      gte_nclip_b();
      uVar38 = gte_stMAC0();

      if (-1 < (int)(uVar51 | uVar26)) {
        uVar26 = -iVar27 - 1;

        if ((-iVar27 | uVar38) != 0) {
          uVar51 = uVar26 & uVar38 - 1;
          if (DAT_1f800398 < '\0') {
            uVar51 = ~(uVar26 | uVar38 - 1);
          }

          if (-1 < (int)uVar51) {

            uVar26 = uVar28 & 1;
            iVar27 = DAT_1f800070;

            if (DAT_1f800070 < iVar34 == uVar26) {
              iVar27 = iVar34;
            }
            if (iVar27 < iVar22 == uVar26) {
              iVar27 = iVar22;
            }
            if (iVar27 < iVar37 == uVar26) {
              iVar27 = iVar37;
            }

            uVar26 = (uint)(iVar27 << (DAT_1f800098 & 0x1f)) >> 0xd;
            iVar27 = uVar26 << 2;
            if (0xfff < uVar26) {
              iVar27 = 0x3ffc;
            }

            iVar27 = DAT_1f800064 + iVar27 + (uVar28 & 0x1e) * 2;

            if ((int)(uVar28 & (int)DAT_1f800399) < 0) {

              uVar26 = puVar47[2];
              uVar9 = *(undefined2 *)((uVar26 & 0x3fe) + DAT_1f800074);
              uVar10 = *(undefined2 *)((uVar26 >> 9 & 0x3fe) + DAT_1f800074);
              uVar11 = *(undefined2 *)((uVar26 >> 0x12 & 0x3fe) + DAT_1f800074);
              *(undefined2 *)(DAT_1f800068 + 3) =
                   *(undefined2 *)((uVar28 >> 4 & 0x3fe) + DAT_1f800074);
              *(undefined2 *)(DAT_1f800068 + 5) = uVar9;
              *(undefined2 *)(DAT_1f800068 + 9) = uVar10;
              *(undefined2 *)(DAT_1f800068 + 7) = uVar11;
              gte_stSXY1();
              DAT_1f800068[4] = DAT_1f8000c0;
              sVar13 = DAT_1f8003ae;
              sVar12 = DAT_1f8003ac;
              gte_stSXY2();
              gte_stSXY0();
              uVar38 = (uint)DAT_1f8003ac;
              DAT_1f800068[1] = DAT_1f8003a8;
              *(short *)((int)DAT_1f800068 + 0xe) = sVar12;
              *(short *)((int)DAT_1f800068 + 0x16) = sVar13;
              *(undefined *)((int)DAT_1f800068 + 3) = 9;
              uVar26 = iVar27 - 0x1eU & 3;
              iVar34 = *(int *)((iVar27 - 0x1eU) - uVar26);
              uVar51 = iVar27 - 0x1eU & 3;
              puVar24 = (uint *)((iVar27 - 0x1eU) - uVar51);
              *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                         (uint)((int)DAT_1f800068 << 8) >> (3 - uVar51) * 8;
              uVar51 = (int)DAT_1f800068 + 2U & 3;
              puVar24 = (uint *)(((int)DAT_1f800068 + 2U) - uVar51);
              *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                         (iVar34 << (3 - uVar26) * 8 | uVar38 & 0xffffffffU >> (uVar26 + 1) * 8) >>
                         (3 - uVar51) * 8;
              DAT_1f800068 = DAT_1f800068 + 10;
            }

            ppuVar46 = DAT_1f80006c;
            puVar24 = (uint *)puVar47[3];
            DAT_1f800068[1] = puVar24;
            uVar26 = iVar27 - 0x1eU & 3;
            iVar34 = *(int *)((iVar27 - 0x1eU) - uVar26);
            gte_stSXY1();
            DAT_1f800068[3] = DAT_1f8000c0;
            gte_stSXY2();
            gte_stSXY0();
            *DAT_1f800068 =
                 (uint *)((iVar34 << (3 - uVar26) * 8 |
                          (uint)puVar24 & 0xffffffffU >> (uVar26 + 1) * 8) >> 8 | 0x5000000);
            uVar26 = iVar27 - 0x1eU & 3;
            puVar24 = (uint *)((iVar27 - 0x1eU) - uVar26);
            *puVar24 = *puVar24 & -1 << (uVar26 + 1) * 8 |
                       (uint)((int)DAT_1f800068 << 8) >> (3 - uVar26) * 8;
            bVar17 = ppuVar46 < DAT_1f800068;
            DAT_1f800068 = DAT_1f800068 + 6;
            if (bVar17) break;
          }
        }
      }
      puVar47 = puVar47 + 4;
    } while (puVar47 != puVar36);
  }

  puVar47 = *(uint **)(param_1 + 0x24);
  if (*(ushort *)(param_1 + 8) != 0) {
    puVar36 = puVar47 + (uint)*(ushort *)(param_1 + 8) * 6;
    do {

      uVar51 = *puVar47;
      uVar52 = puVar47[1];

      puVar24 = (uint *)((uVar51 & 0xff) * 8 + DAT_1f800070);
      uVar28 = *puVar24;
      puVar25 = (uint *)(((int)uVar51 >> 5 & 0x7f8U) + DAT_1f800070);
      uVar26 = *puVar25;
      uVar38 = puVar25[1];
      puVar21 = (undefined4 *)(((int)uVar51 >> 0xd & 0x7f8U) + DAT_1f800070);

      gte_ldVXY0(uVar28);
      gte_ldVZ0(puVar24[1]);
      gte_ldVXY2(uVar26);
      gte_ldVZ2(uVar38);
      gte_ldVXY1(*puVar21);
      gte_ldVZ1(puVar21[1]);

      gte_rtpt_b();
      iVar34 = gte_stFLAG();
      read_sz_fifo3(uVar26,uVar38,uVar28);
      gte_nclip_b();
      iVar27 = gte_stMAC0();

      if (-1 < iVar34) {
        if (DAT_1f800398 < '\0') {
          iVar27 = -iVar27;
        }
        if (0 < iVar27) {

          if ((uint)((int)uVar26 < (int)uVar38) == (uVar52 & 1)) {
            uVar26 = uVar38;
          }
          if ((uint)((int)uVar26 < (int)uVar28) == (uVar52 & 1)) {
            uVar26 = uVar28;
          }
          uVar26 = (uVar26 << (DAT_1f800098 & 0x1f)) >> 0xd;
          iVar27 = uVar26 << 2;
          if (0xfff < uVar26) {
            iVar27 = 0x3ffc;
          }
          iVar27 = DAT_1f800064 + iVar27 + (uVar52 & 0x1e) * 2;

          if ((int)(uVar52 & (int)DAT_1f800399) < 0) {

            sVar12 = *(short *)((uVar52 >> 4 & 0x3fe) + DAT_1f800074);
            uVar38 = (uint)sVar12;
            uVar9 = *(undefined2 *)((puVar47[2] & 0x3fe) + DAT_1f800074);
            uVar10 = *(undefined2 *)((puVar47[2] >> 9 & 0x3fe) + DAT_1f800074);
            *(short *)(DAT_1f800068 + 3) = sVar12;
            *(undefined2 *)(DAT_1f800068 + 5) = uVar9;
            *(undefined2 *)(DAT_1f800068 + 7) = uVar10;
            sVar13 = DAT_1f8003ae;
            sVar12 = DAT_1f8003ac;
            gte_stSXY0();
            gte_stSXY2();
            gte_stSXY1();
            uVar28 = (uint)DAT_1f8003ac;
            DAT_1f800068[1] = DAT_1f8003a4;
            *(short *)((int)DAT_1f800068 + 0xe) = sVar12;
            *(short *)((int)DAT_1f800068 + 0x16) = sVar13;
            *(undefined *)((int)DAT_1f800068 + 3) = 7;
            uVar26 = iVar27 - 0x1eU & 3;
            iVar34 = *(int *)((iVar27 - 0x1eU) - uVar26);
            uVar51 = iVar27 - 0x1eU & 3;
            puVar24 = (uint *)((iVar27 - 0x1eU) - uVar51);
            *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                       (uint)((int)DAT_1f800068 << 8) >> (3 - uVar51) * 8;
            uVar51 = (int)DAT_1f800068 + 2U & 3;
            puVar24 = (uint *)(((int)DAT_1f800068 + 2U) - uVar51);
            *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                       (iVar34 << (3 - uVar26) * 8 | uVar28 & 0xffffffffU >> (uVar26 + 1) * 8) >>
                       (3 - uVar51) * 8;
            DAT_1f800068 = DAT_1f800068 + 8;
          }

          ppuVar46 = DAT_1f80006c;
          puVar24 = (uint *)puVar47[4];
          puVar25 = (uint *)puVar47[5];
          uVar26 = iVar27 - 0x1eU & 3;
          iVar34 = *(int *)((iVar27 - 0x1eU) - uVar26);
          DAT_1f800068[1] = (uint *)puVar47[3];
          DAT_1f800068[3] = puVar24;
          DAT_1f800068[5] = puVar25;
          uVar51 = iVar27 - 0x1eU & 3;
          puVar24 = (uint *)((iVar27 - 0x1eU) - uVar51);
          *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                     (uint)((int)DAT_1f800068 << 8) >> (3 - uVar51) * 8;
          gte_stSXY0();
          gte_stSXY1();
          gte_stSXY2();
          *(undefined *)((int)DAT_1f800068 + 3) = 6;
          bVar17 = ppuVar46 < DAT_1f800068;
          uVar51 = (int)DAT_1f800068 + 2U & 3;
          puVar24 = (uint *)(((int)DAT_1f800068 + 2U) - uVar51);
          *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                     (iVar34 << (3 - uVar26) * 8 | uVar38 & 0xffffffffU >> (uVar26 + 1) * 8) >>
                     (3 - uVar51) * 8;
          DAT_1f800068 = DAT_1f800068 + 7;
          if (bVar17) break;
        }
      }
      puVar47 = puVar47 + 6;
    } while (puVar47 != puVar36);
  }

  puVar47 = *(uint **)(param_1 + 0x28);
  if (*(ushort *)(param_1 + 10) != 0) {
    puVar36 = puVar47 + (uint)*(ushort *)(param_1 + 10) * 7;
    do {

      uVar26 = *puVar47;
      uVar28 = puVar47[1];

      piVar19 = (int *)((uVar26 & 0xff) * 8 + DAT_1f800070);
      iVar34 = *piVar19;
      iVar22 = piVar19[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 5 & 0x7f8U) + DAT_1f800070);
      puVar23 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + DAT_1f800070);

      gte_ldVXY2(iVar34);
      gte_ldVZ2(iVar22);
      gte_ldVXY0(*puVar21);
      gte_ldVZ0(puVar21[1]);
      gte_ldVXY1(*puVar23);
      gte_ldVZ1(puVar23[1]);

      gte_rtpt_b();
      puVar21 = (undefined4 *)(((int)uVar26 >> 0x15 & 0x7f8U) + DAT_1f800070);
      uVar51 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(DAT_1f800070,iVar34,iVar22);
      gte_nclip_b();
      gte_ldVXY0(*puVar21);
      gte_ldVZ0(puVar21[1]);
      iVar27 = gte_stMAC0();
      gte_rtps_b();
      uVar26 = gte_stFLAG();
      iVar37 = gte_stSZ3();
      gte_nclip_b();
      uVar38 = gte_stMAC0();

      if (-1 < (int)(uVar51 | uVar26)) {
        uVar26 = -iVar27 - 1;

        if ((-iVar27 | uVar38) != 0) {
          uVar51 = uVar26 & uVar38 - 1;
          if (DAT_1f800398 < '\0') {
            uVar51 = ~(uVar26 | uVar38 - 1);
          }

          if (-1 < (int)uVar51) {

            uVar26 = uVar28 & 1;
            iVar27 = DAT_1f800070;

            if (DAT_1f800070 < iVar34 == uVar26) {
              iVar27 = iVar34;
            }
            if (iVar27 < iVar22 == uVar26) {
              iVar27 = iVar22;
            }
            if (iVar27 < iVar37 == uVar26) {
              iVar27 = iVar37;
            }

            uVar26 = (uint)(iVar27 << (DAT_1f800098 & 0x1f)) >> 0xd;
            iVar27 = uVar26 << 2;
            if (0xfff < uVar26) {
              iVar27 = 0x3ffc;
            }

            iVar27 = DAT_1f800064 + iVar27 + (uVar28 & 0x1e) * 2;

            if ((int)(uVar28 & (int)DAT_1f800399) < 0) {

              uVar26 = puVar47[2];
              uVar9 = *(undefined2 *)((uVar26 & 0x3fe) + DAT_1f800074);
              uVar10 = *(undefined2 *)((uVar26 >> 9 & 0x3fe) + DAT_1f800074);
              uVar11 = *(undefined2 *)((uVar26 >> 0x12 & 0x3fe) + DAT_1f800074);
              *(undefined2 *)(DAT_1f800068 + 3) =
                   *(undefined2 *)((uVar28 >> 4 & 0x3fe) + DAT_1f800074);
              *(undefined2 *)(DAT_1f800068 + 5) = uVar9;
              *(undefined2 *)(DAT_1f800068 + 9) = uVar10;
              *(undefined2 *)(DAT_1f800068 + 7) = uVar11;
              gte_stSXY1();
              DAT_1f800068[4] = DAT_1f8000c0;
              sVar13 = DAT_1f8003ae;
              sVar12 = DAT_1f8003ac;
              gte_stSXY2();
              gte_stSXY0();
              uVar38 = (uint)DAT_1f8003ac;
              DAT_1f800068[1] = DAT_1f8003a8;
              *(short *)((int)DAT_1f800068 + 0xe) = sVar12;
              *(short *)((int)DAT_1f800068 + 0x16) = sVar13;
              *(undefined *)((int)DAT_1f800068 + 3) = 9;
              uVar26 = iVar27 - 0x1eU & 3;
              iVar34 = *(int *)((iVar27 - 0x1eU) - uVar26);
              uVar51 = iVar27 - 0x1eU & 3;
              puVar24 = (uint *)((iVar27 - 0x1eU) - uVar51);
              *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                         (uint)((int)DAT_1f800068 << 8) >> (3 - uVar51) * 8;
              uVar51 = (int)DAT_1f800068 + 2U & 3;
              puVar24 = (uint *)(((int)DAT_1f800068 + 2U) - uVar51);
              *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                         (iVar34 << (3 - uVar26) * 8 | uVar38 & 0xffffffffU >> (uVar26 + 1) * 8) >>
                         (3 - uVar51) * 8;
              DAT_1f800068 = DAT_1f800068 + 10;
            }

            ppuVar46 = DAT_1f80006c;
            puVar24 = (uint *)puVar47[3];
            puVar25 = (uint *)puVar47[4];
            puVar32 = (uint *)puVar47[5];
            puVar35 = (uint *)puVar47[6];
            DAT_1f800068[1] = puVar24;
            DAT_1f800068[3] = puVar25;
            DAT_1f800068[7] = puVar32;
            DAT_1f800068[5] = puVar35;
            uVar26 = iVar27 - 0x1eU & 3;
            iVar34 = *(int *)((iVar27 - 0x1eU) - uVar26);
            gte_stSXY1();
            DAT_1f800068[4] = DAT_1f8000c0;
            gte_stSXY2();
            gte_stSXY0();
            *DAT_1f800068 =
                 (uint *)((iVar34 << (3 - uVar26) * 8 |
                          (uint)puVar24 & 0xffffffffU >> (uVar26 + 1) * 8) >> 8 | 0x8000000);
            uVar26 = iVar27 - 0x1eU & 3;
            puVar24 = (uint *)((iVar27 - 0x1eU) - uVar26);
            *puVar24 = *puVar24 & -1 << (uVar26 + 1) * 8 |
                       (uint)((int)DAT_1f800068 << 8) >> (3 - uVar26) * 8;
            bVar17 = ppuVar46 < DAT_1f800068;
            DAT_1f800068 = DAT_1f800068 + 9;
            if (bVar17) break;
          }
        }
      }
      puVar47 = puVar47 + 7;
    } while (puVar47 != puVar36);
  }

  puVar47 = *(uint **)(param_1 + 0x2c);
  iVar27 = 0x1f800000;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    DAT_1f800394 = 0x480;
    puVar36 = puVar47 + (uint)*(ushort *)(param_1 + 0xc) * 7;
    ppuVar46 = DAT_1f800068;
    do {
      iVar34 = *(int *)(iVar27 + 0x70);
      uVar26 = *puVar47;
      uVar51 = puVar47[1];
      piVar19 = (int *)((uVar26 & 0xff) * 8 + iVar34);
      iVar41 = *piVar19;
      piVar20 = (int *)(((int)uVar26 >> 5 & 0x7f8U) + iVar34);
      iVar22 = *piVar20;
      iVar40 = piVar20[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + iVar34);
      gte_ldVXY0(iVar41);
      gte_ldVZ0(piVar19[1]);
      gte_ldVXY2(iVar22);
      gte_ldVZ2(iVar40);
      gte_ldVXY1(*puVar21);
      gte_ldVZ1(puVar21[1]);
      gte_rtpt_b();
      iVar37 = gte_stFLAG();
      read_sz_fifo3(iVar22,iVar40,iVar41);
      gte_nclip_b();
      iVar34 = gte_stMAC0();
      if (-1 < iVar37) {
        if (*(char *)(iVar27 + 0x398) < '\0') {
          iVar34 = -iVar34;
        }
        if (0 < iVar34) {
          if ((uint)(iVar22 < iVar40) == (uVar51 & 1)) {
            iVar22 = iVar40;
          }
          if ((uint)(iVar22 < iVar41) == (uVar51 & 1)) {
            iVar22 = iVar41;
          }
          uVar26 = (uint)(iVar22 << (*(uint *)(iVar27 + 0x98) & 0x1f)) >> 0xd;
          iVar22 = uVar26 << 2;
          if (0xfff < uVar26) {
            iVar22 = 0x3ffc;
          }
          iVar22 = *(int *)(iVar27 + 100) + iVar22 + (uVar51 & 0x1e) * 2;
          if ((int)(uVar51 & (int)*(char *)(iVar27 + 0x399)) < 0) {
            iVar37 = *(int *)(iVar27 + 0x74);
            uVar9 = *(undefined2 *)((puVar47[2] & 0x3fe) + iVar37);
            uVar10 = *(undefined2 *)((puVar47[2] >> 9 & 0x3fe) + iVar37);
            *(undefined2 *)(ppuVar46 + 3) = *(undefined2 *)((uVar51 >> 4 & 0x3fe) + iVar37);
            *(undefined2 *)(ppuVar46 + 5) = uVar9;
            *(undefined2 *)(ppuVar46 + 7) = uVar10;
            gte_stSXY0();
            gte_stSXY2();
            gte_stSXY1();
            sVar12 = *(short *)(iVar27 + 0x3ac);
            uVar9 = *(undefined2 *)(iVar27 + 0x3ae);
            ppuVar46[1] = *(uint **)(iVar27 + 0x3a4);
            *(short *)((int)ppuVar46 + 0xe) = sVar12;
            *(undefined2 *)((int)ppuVar46 + 0x16) = uVar9;
            *(undefined *)((int)ppuVar46 + 3) = 7;
            uVar26 = iVar22 - 0x1eU & 3;
            iVar37 = *(int *)((iVar22 - 0x1eU) - uVar26);
            uVar38 = iVar22 - 0x1eU & 3;
            puVar24 = (uint *)((iVar22 - 0x1eU) - uVar38);
            *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                       (uint)((int)ppuVar46 << 8) >> (3 - uVar38) * 8;
            uVar38 = (int)ppuVar46 + 2U & 3;
            puVar24 = (uint *)(((int)ppuVar46 + 2U) - uVar38);
            *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                       (iVar37 << (3 - uVar26) * 8 | (int)sVar12 & 0xffffffffU >> (uVar26 + 1) * 8)
                       >> (3 - uVar38) * 8;
            ppuVar46 = ppuVar46 + 8;
          }
          puVar32 = (uint *)puVar47[3];
          puVar25 = (uint *)puVar47[5];
          puVar35 = (uint *)puVar47[6];
          uVar26 = *(uint *)(iVar27 + 0x3a0);
          puVar24 = (uint *)(puVar47[4] + ((int)uVar51 >> 0xe & uVar26) + *(int *)(iVar27 + 0x39c));
          if (0x480 < iVar34) {
            *(uint ***)(iVar27 + 0x68) = ppuVar46;
            *(int *)(iVar27 + 0x9c) = iVar22 + -0x20;
            *(uint **)(iVar27 + 0xa4) = puVar25;
            uVar26 = iVar27 + 0xa5U & 3;
            puVar55 = (uint *)((iVar27 + 0xa5U) - uVar26);
            *puVar55 = *puVar55 & -1 << (uVar26 + 1) * 8 | (uint)puVar24 >> (3 - uVar26) * 8;
            *(uint **)(iVar27 + 0xa0) = puVar32;
            gte_stVXY0();
            gte_stVZ0();
            gte_stVXY2();
            gte_stVZ2();
            gte_stVXY1();
            gte_stVZ1();
            *(short *)(iVar27 + 0xae) = (short)puVar24;
            *(short *)(iVar27 + 0xbe) = (short)puVar25;
            *(short *)(iVar27 + 0xce) = (short)puVar35;
            gte_stSXY0();
            gte_stSXY2();
            gte_stSXY1();
            iVar34 = 0x1f800000;
            ppuVar48 = &DAT_1f8000e8;
            DAT_1f8000e8 = &DAT_1f8000a8;
            DAT_1f8000ec = &DAT_1f8000b8;
            DAT_1f8000f0 = &DAT_1f8000c8;
            DAT_1f800388 = DAT_1f800068;
            DAT_1f80038c = DAT_1f800068;
            DAT_1f800390._0_3_ = SUB43(DAT_1f800068,0);
            DAT_1f800390 = CONCAT13(7,(undefined3)DAT_1f800390);
LAB_800623a0:
            pSVar45 = (SVECTOR *)(ppuVar48 + 4);
            puVar21 = *ppuVar48;
            puVar23 = ppuVar48[1];
            puVar43 = ppuVar48[2];
            sVar12 = *(short *)puVar21;
            sVar13 = *(short *)puVar23;
            sVar14 = *(short *)puVar43;
            *(short *)(ppuVar48 + 4) = (short)((int)sVar12 + (int)sVar13 >> 1);
            *(short *)(ppuVar48 + 8) = (short)((int)sVar13 + (int)sVar14 >> 1);
            *(short *)(ppuVar48 + 0xc) = (short)((int)sVar14 + (int)sVar12 >> 1);
            sVar12 = *(short *)((int)puVar21 + 2);
            sVar13 = *(short *)((int)puVar23 + 2);
            sVar14 = *(short *)((int)puVar43 + 2);
            *(short *)((int)ppuVar48 + 0x12) = (short)((int)sVar12 + (int)sVar13 >> 1);
            *(short *)((int)ppuVar48 + 0x22) = (short)((int)sVar13 + (int)sVar14 >> 1);
            *(short *)((int)ppuVar48 + 0x32) = (short)((int)sVar14 + (int)sVar12 >> 1);
            sVar12 = *(short *)(puVar21 + 1);
            sVar13 = *(short *)(puVar23 + 1);
            sVar14 = *(short *)(puVar43 + 1);
            *(short *)(ppuVar48 + 5) = (short)((int)sVar12 + (int)sVar13 >> 1);
            *(short *)(ppuVar48 + 9) = (short)((int)sVar13 + (int)sVar14 >> 1);
            *(short *)(ppuVar48 + 0xd) = (short)((int)sVar14 + (int)sVar12 >> 1);
            gte_ldv0(pSVar45);
            pSVar53 = pSVar45 + 6;
            gte_rtps_b();
            bVar3 = *(byte *)((int)puVar21 + 6);
            bVar4 = *(byte *)((int)puVar23 + 6);
            bVar5 = *(byte *)((int)puVar43 + 6);
            *(char *)&pSVar45->pad = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
            *(char *)&pSVar45[2].pad = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
            *(char *)&pSVar45[4].pad = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
            bVar3 = *(byte *)((int)puVar21 + 7);
            bVar4 = *(byte *)((int)puVar23 + 7);
            bVar5 = *(byte *)((int)puVar43 + 7);
            *(char *)((int)&pSVar45->pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
            *(char *)((int)&pSVar45[2].pad + 1) = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
            *(char *)((int)&pSVar45[4].pad + 1) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
            ppuVar29 = ppuVar48 + 6;
            ppuVar49 = ppuVar48;
            do {
              gte_stFLAG();
              gte_ldVXY0(ppuVar29 + 2);
              gte_ldVZ0(ppuVar29 + 3);
              gte_stsxy((long *)ppuVar29);
              gte_rtps_b();
              pSVar45 = pSVar45 + 2;
              ppuVar29 = ppuVar29 + 4;
            } while (pSVar45 != pSVar53);
            piVar19 = *(int **)(iVar34 + 0x68);
            iVar37 = *(int *)(iVar34 + 0xa0);
            uVar26 = iVar34 + 0xa5U & 3;
            uVar51 = *(int *)((iVar34 + 0xa5U) - uVar26) << (3 - uVar26) * 8 |
                     (uint)pSVar53 & 0xffffffffU >> (uVar26 + 1) * 8;
            uVar26 = *(uint *)(iVar34 + 0xa4);
            iVar22 = 2;
            ppuVar48 = ppuVar49 + 2;
            do {
              iVar40 = iVar22 + -1;
              if (iVar22 == 0) {
                iVar40 = 2;
              }
              puVar21 = ppuVar49[iVar40];
              gte_ldSXY0(*ppuVar48 + 2);
              gte_ldSXY1(ppuVar49 + iVar40 * 4 + 6);
              gte_ldSXY2(puVar21 + 2);
              gte_stSXY0();
              gte_stSXY1();
              gte_nclip_b();
              psVar1 = (short *)((int)*ppuVar48 + 6);
              uVar38 = (uint)psVar1 & 3;
              uVar51 = uVar51 & -1 << (4 - uVar38) * 8 |
                       *(uint *)((int)psVar1 - uVar38) >> uVar38 * 8;
              uVar38 = (int)ppuVar49 + iVar40 * 0x10 + 0x16;
              uVar28 = uVar38 & 3;
              uVar26 = uVar26 & -1 << (4 - uVar28) * 8 | *(uint *)(uVar38 - uVar28) >> uVar28 * 8;
              piVar19[3] = uVar51;
              uVar38 = (uint)(short *)((int)puVar21 + 6U) & 3;
              uVar28 = *(uint *)((int)(short *)((int)puVar21 + 6U) - uVar38);
              piVar19[5] = uVar26;
              piVar20 = piVar19 + -0x1e3ffff8;
              piVar19[7] = (uint)puVar21 & -1 << (4 - uVar38) * 8 | uVar28 >> uVar38 * 8;
              *piVar19 = (int)piVar20;
              iVar40 = gte_stMAC0();
              gte_stSXY2();
              piVar19[1] = iVar37;
              if (iVar40 != 0) {
                *(int **)(iVar34 + 0x38c) = piVar19;
                piVar19 = piVar19 + 8;
              }
              ppuVar48 = ppuVar48 + -1;
              iVar22 = iVar22 + -1;
              *(int **)(iVar34 + 0x68) = piVar19;
            } while (-1 < iVar22);
            uVar26 = 3;
            if (*(uint *)(iVar34 + 0x68) <= *(uint *)(iVar34 + 0x6c)) {
              do {
                if (uVar26 == 3) {
                  ppuVar56 = ppuVar49 + 4;
                  ppuVar29 = ppuVar49 + 8;
                  ppuVar44 = ppuVar49 + 0xc;
                }
                else {
                  ppuVar56 = (undefined4 **)ppuVar49[uVar26];
                  ppuVar29 = ppuVar49 + uVar26 * 4 + 4;
                  if (uVar26 == 0) {
                    ppuVar44 = ppuVar49 + 0xc;
                  }
                  else {
                    ppuVar44 = ppuVar49 + (uVar26 - 1) * 4 + 4;
                  }
                }
                piVar19 = *(int **)(iVar34 + 0x68);
                gte_ldSXY0(ppuVar56 + 2);
                gte_ldSXY1(ppuVar29 + 2);
                gte_ldSXY2(ppuVar44 + 2);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                iVar22 = *(int *)(iVar34 + 0xa0);
                *piVar19 = (int)(piVar19 + -0x1e3ffff8);
                uVar16 = *(ushort *)(iVar34 + 0x394);
                uVar51 = iVar34 + 0xa5U & 3;
                uVar38 = (int)ppuVar56 + 6U & 3;
                piVar20 = (int *)((*(int *)((iVar34 + 0xa5U) - uVar51) << (3 - uVar51) * 8 |
                                  (uint)piVar20 & 0xffffffffU >> (uVar51 + 1) * 8) &
                                  -1 << (4 - uVar38) * 8 |
                                 *(uint *)(((int)ppuVar56 + 6U) - uVar38) >> uVar38 * 8);
                uVar51 = gte_stMAC0();
                uVar38 = *(uint *)(iVar34 + 0xa4);
                gte_stSXY2();
                if ((int)uVar51 < 0) {
                  uVar51 = -uVar51;
                }
                piVar19[1] = iVar22;
                if (uVar16 < uVar51) {
                  if (ppuVar49 != (undefined4 **)(iVar34 + 0x328)) goto code_r0x80062654;
                }
                else {
                  uVar51 = (int)ppuVar29 + 6U & 3;
                  uVar52 = *(uint *)(((int)ppuVar29 + 6U) - uVar51);
                  piVar19[3] = (int)piVar20;
                  uVar28 = (int)ppuVar44 + 6U & 3;
                  uVar30 = *(uint *)(((int)ppuVar44 + 6U) - uVar28);
                  piVar19[5] = uVar38 & -1 << (4 - uVar51) * 8 | uVar52 >> uVar51 * 8;
                  piVar19[7] = (uint)(undefined4 **)(iVar34 + 0x328) & -1 << (4 - uVar28) * 8 |
                               uVar30 >> uVar28 * 8;
                  *(int **)(iVar34 + 0x38c) = piVar19;
                  *(int **)(iVar34 + 0x68) = piVar19 + 8;
                }
                while (uVar26 = uVar26 - 1, (int)uVar26 < 0) {
                  if (ppuVar49 == (undefined4 **)(iVar34 + 0xe8)) {
                    uVar26 = *(uint *)(iVar34 + 0x388);
                    if (*(uint *)(iVar34 + 0x6c) < *(uint *)(iVar34 + 0x68)) {
                      *(uint *)(iVar34 + 0x68) = uVar26;
                    }
                    else if (*(uint *)(iVar34 + 0x68) != uVar26) {
                      iVar37 = *(int *)(iVar34 + 0x38c);
                      uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                      uVar38 = uVar51 & 3;
                      iVar22 = *(int *)(uVar51 - uVar38);
                      uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                      uVar28 = uVar51 & 3;
                      puVar24 = (uint *)(uVar51 - uVar28);
                      *puVar24 = *puVar24 & -1 << (uVar28 + 1) * 8 |
                                 (uVar26 << 8) >> (3 - uVar28) * 8;
                      uVar26 = iVar37 + 2;
                      uVar51 = uVar26 & 3;
                      puVar24 = (uint *)(uVar26 - uVar51);
                      *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                                 (uint)(iVar22 << (3 - uVar38) * 8) >> (3 - uVar51) * 8;
                    }
                    goto LAB_800626ec;
                  }
                  ppuVar48 = ppuVar49 + -0x11;
                  ppuVar49 = ppuVar49 + -0x18;
                  uVar26 = (uint)*(byte *)ppuVar48;
                }
              } while( true );
            }
            *(undefined4 *)(iVar34 + 0x68) = *(undefined4 *)(iVar34 + 0x388);
LAB_800626ec:
            ppuVar46 = *(uint ***)(iVar27 + 0x68);
            if (ppuVar46 < *(uint ***)(iVar27 + 0x6c)) goto LAB_80062750;
            *(uint ***)(iVar27 + 0x68) = ppuVar46;
            goto LAB_80062760;
          }
          ppuVar33 = *(uint ***)(iVar27 + 0x6c);
          uVar51 = iVar22 - 0x1eU & 3;
          iVar34 = *(int *)((iVar22 - 0x1eU) - uVar51);
          ppuVar46[1] = puVar32;
          ppuVar46[3] = puVar24;
          ppuVar46[5] = puVar25;
          ppuVar46[7] = puVar35;
          uVar38 = iVar22 - 0x1eU & 3;
          puVar24 = (uint *)((iVar22 - 0x1eU) - uVar38);
          *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                     (uint)((int)ppuVar46 << 8) >> (3 - uVar38) * 8;
          gte_stSXY0();
          gte_stSXY1();
          gte_stSXY2();
          *(undefined *)((int)ppuVar46 + 3) = 7;
          bVar17 = ppuVar33 < ppuVar46;
          uVar38 = (int)ppuVar46 + 2U & 3;
          puVar24 = (uint *)(((int)ppuVar46 + 2U) - uVar38);
          *puVar24 = *puVar24 & -1 << (uVar38 + 1) * 8 |
                     (iVar34 << (3 - uVar51) * 8 | uVar26 & 0xffffffffU >> (uVar51 + 1) * 8) >>
                     (3 - uVar38) * 8;
          ppuVar46 = ppuVar46 + 8;
          if (bVar17) break;
        }
      }
LAB_80062750:
      puVar47 = puVar47 + 7;
    } while (puVar47 != puVar36);
    *(uint ***)(iVar27 + 0x68) = ppuVar46;
  }
LAB_80062760:
  puVar47 = *(uint **)(param_1 + 0x30);
  iVar27 = 0x1f800000;
  if (*(ushort *)(param_1 + 0xe) != 0) {
    DAT_1f8003b4 = puVar47 + (uint)*(ushort *)(param_1 + 0xe) * 7;
    DAT_1f800394 = 0x800;
    ppuVar46 = DAT_1f800068;
    do {
      iVar34 = *(int *)(iVar27 + 0x70);
      uVar26 = *puVar47;
      uVar28 = puVar47[1];
      piVar19 = (int *)((uVar26 & 0xff) * 8 + iVar34);
      iVar37 = *piVar19;
      iVar40 = piVar19[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 5 & 0x7f8U) + iVar34);
      uVar39 = *puVar21;
      uVar42 = puVar21[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + iVar34);
      gte_ldVXY2(iVar37);
      gte_ldVZ2(iVar40);
      gte_ldVXY0(uVar39);
      gte_ldVZ0(uVar42);
      gte_ldVXY1(*puVar21);
      gte_ldVZ1(puVar21[1]);
      gte_rtpt_b();
      *(undefined4 *)(iVar27 + 0xb8) = uVar39;
      *(undefined4 *)(iVar27 + 0xbc) = uVar42;
      puVar21 = (undefined4 *)(((int)uVar26 >> 0x15 & 0x7f8U) + iVar34);
      uVar51 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(iVar34,iVar37,iVar40);
      gte_nclip_b();
      gte_ldVXY0(*puVar21);
      gte_ldVZ0(puVar21[1]);
      iVar22 = gte_stMAC0();
      gte_rtps_b();
      uVar26 = gte_stFLAG();
      iVar41 = gte_stSZ3();
      gte_nclip_b();
      uVar38 = gte_stMAC0();
      if (-1 < (int)(uVar51 | uVar26)) {
        uVar26 = -iVar22;
        iVar22 = uVar26 + uVar38;
        if ((uVar26 | uVar38) != 0) {
          uVar51 = uVar26 - 1 & uVar38 - 1;
          if (*(char *)(iVar27 + 0x398) < '\0') {
            uVar51 = ~(uVar26 - 1 | uVar38 - 1);
          }
          if (-1 < (int)uVar51) {
            uVar26 = uVar28 & 1;
            if (iVar34 < iVar37 == uVar26) {
              iVar34 = iVar37;
            }
            if (iVar34 < iVar40 == uVar26) {
              iVar34 = iVar40;
            }
            if (iVar34 < iVar41 == uVar26) {
              iVar34 = iVar41;
            }
            uVar26 = (uint)(iVar34 << (*(uint *)(iVar27 + 0x98) & 0x1f)) >> 0xd;
            iVar34 = uVar26 << 2;
            if (0xfff < uVar26) {
              iVar34 = 0x3ffc;
            }
            iVar34 = *(int *)(iVar27 + 100) + iVar34 + (uVar28 & 0x1e) * 2;
            if ((int)(uVar28 & (int)*(char *)(iVar27 + 0x399)) < 0) {
              iVar37 = *(int *)(iVar27 + 0x74);
              uVar26 = puVar47[2];
              uVar9 = *(undefined2 *)((uVar26 & 0x3fe) + iVar37);
              uVar10 = *(undefined2 *)((uVar26 >> 9 & 0x3fe) + iVar37);
              uVar11 = *(undefined2 *)((uVar26 >> 0x12 & 0x3fe) + iVar37);
              *(undefined2 *)(ppuVar46 + 3) = *(undefined2 *)((uVar28 >> 4 & 0x3fe) + iVar37);
              *(undefined2 *)(ppuVar46 + 5) = uVar9;
              *(undefined2 *)(ppuVar46 + 9) = uVar10;
              *(undefined2 *)(ppuVar46 + 7) = uVar11;
              gte_stSXY1();
              ppuVar46[4] = *(uint **)(iVar27 + 0xc0);
              gte_stSXY2();
              gte_stSXY0();
              sVar12 = *(short *)(iVar27 + 0x3ac);
              uVar9 = *(undefined2 *)(iVar27 + 0x3ae);
              ppuVar46[1] = *(uint **)(iVar27 + 0x3a8);
              *(short *)((int)ppuVar46 + 0xe) = sVar12;
              *(undefined2 *)((int)ppuVar46 + 0x16) = uVar9;
              *(undefined *)((int)ppuVar46 + 3) = 9;
              uVar26 = iVar34 - 0x1eU & 3;
              iVar37 = *(int *)((iVar34 - 0x1eU) - uVar26);
              uVar51 = iVar34 - 0x1eU & 3;
              puVar36 = (uint *)((iVar34 - 0x1eU) - uVar51);
              *puVar36 = *puVar36 & -1 << (uVar51 + 1) * 8 |
                         (uint)((int)ppuVar46 << 8) >> (3 - uVar51) * 8;
              uVar51 = (int)ppuVar46 + 2U & 3;
              puVar36 = (uint *)(((int)ppuVar46 + 2U) - uVar51);
              *puVar36 = *puVar36 & -1 << (uVar51 + 1) * 8 |
                         (iVar37 << (3 - uVar26) * 8 | (int)sVar12 & 0xffffffffU >> (uVar26 + 1) * 8
                         ) >> (3 - uVar51) * 8;
              ppuVar46 = ppuVar46 + 10;
            }
            puVar32 = (uint *)puVar47[3];
            puVar25 = (uint *)puVar47[5];
            puVar24 = (uint *)puVar47[6];
            puVar36 = (uint *)(puVar47[4] + ((int)uVar28 >> 0xe & *(uint *)(iVar27 + 0x3a0)) +
                              *(int *)(iVar27 + 0x39c));
            if (iVar22 < 0) {
              iVar22 = -iVar22;
            }
            if (0x800 < iVar22) {
              *(uint ***)(iVar27 + 0x68) = ppuVar46;
              *(int *)(iVar27 + 0x9c) = iVar34 + -0x20;
              *(uint **)(iVar27 + 0xa0) = puVar32;
              gte_stVXY2();
              gte_stVZ2();
              gte_stVXY1();
              gte_stVZ1();
              gte_stVXY0();
              gte_stVZ0();
              gte_stSXY1();
              gte_stSXY0();
              gte_stSXY2();
              *(uint **)(iVar27 + 0xa4) = puVar25;
              uVar26 = iVar27 + 0xa5U & 3;
              puVar32 = (uint *)((iVar27 + 0xa5U) - uVar26);
              *puVar32 = *puVar32 & -1 << (uVar26 + 1) * 8 | (uint)puVar36 >> (3 - uVar26) * 8;
              *(short *)(iVar27 + 0xae) = (short)puVar36;
              *(short *)(iVar27 + 0xbe) = (short)puVar25;
              *(short *)(iVar27 + 0xce) = (short)puVar24;
              *(short *)(iVar27 + 0xde) = (short)((uint)puVar24 >> 0x10);
              iVar34 = 0x1f800000;
              ppuVar48 = &DAT_1f8000e8;
              DAT_1f8000e8 = &DAT_1f8000a8;
              DAT_1f8000ec = &DAT_1f8000b8;
              DAT_1f8000f0 = &DAT_1f8000c8;
              DAT_1f8000f4 = &DAT_1f8000d8;
              DAT_1f800388 = DAT_1f800068;
              DAT_1f80038c = DAT_1f800068;
              DAT_1f800390._0_3_ = SUB43(DAT_1f800068,0);
              DAT_1f800390 = CONCAT13(9,(undefined3)DAT_1f800390);
LAB_80062a84:
              pSVar45 = (SVECTOR *)(ppuVar48 + 4);
              puVar21 = *ppuVar48;
              puVar23 = ppuVar48[1];
              puVar43 = ppuVar48[2];
              puVar54 = ppuVar48[3];
              sVar12 = *(short *)puVar21;
              sVar13 = *(short *)puVar23;
              sVar14 = *(short *)puVar43;
              iVar37 = (int)sVar12 + (int)sVar13;
              *(short *)(ppuVar48 + 8) = (short)(iVar37 >> 1);
              sVar15 = *(short *)puVar54;
              *(short *)(ppuVar48 + 0xc) = (short)((int)sVar13 + (int)sVar14 >> 1);
              iVar22 = (int)sVar14 + (int)sVar15;
              *(short *)(ppuVar48 + 0x10) = (short)(iVar22 >> 1);
              *(short *)(ppuVar48 + 0x14) = (short)((int)sVar15 + (int)sVar12 >> 1);
              *(short *)(ppuVar48 + 4) = (short)(iVar37 + iVar22 >> 2);
              sVar12 = *(short *)((int)puVar21 + 2);
              sVar13 = *(short *)((int)puVar23 + 2);
              sVar14 = *(short *)((int)puVar43 + 2);
              iVar37 = (int)sVar12 + (int)sVar13;
              *(short *)((int)ppuVar48 + 0x22) = (short)(iVar37 >> 1);
              sVar15 = *(short *)((int)puVar54 + 2);
              *(short *)((int)ppuVar48 + 0x32) = (short)((int)sVar13 + (int)sVar14 >> 1);
              iVar22 = (int)sVar14 + (int)sVar15;
              *(short *)((int)ppuVar48 + 0x42) = (short)(iVar22 >> 1);
              *(short *)((int)ppuVar48 + 0x52) = (short)((int)sVar15 + (int)sVar12 >> 1);
              *(short *)((int)ppuVar48 + 0x12) = (short)(iVar37 + iVar22 >> 2);
              sVar12 = *(short *)(puVar21 + 1);
              sVar13 = *(short *)(puVar23 + 1);
              sVar14 = *(short *)(puVar43 + 1);
              iVar37 = (int)sVar12 + (int)sVar13;
              *(short *)(ppuVar48 + 9) = (short)(iVar37 >> 1);
              sVar15 = *(short *)(puVar54 + 1);
              *(short *)(ppuVar48 + 0xd) = (short)((int)sVar13 + (int)sVar14 >> 1);
              iVar22 = (int)sVar14 + (int)sVar15;
              *(short *)(ppuVar48 + 0x11) = (short)(iVar22 >> 1);
              *(short *)(ppuVar48 + 0x15) = (short)((int)sVar15 + (int)sVar12 >> 1);
              *(short *)(ppuVar48 + 5) = (short)(iVar37 + iVar22 >> 2);
              gte_ldv0(pSVar45);
              pSVar53 = pSVar45 + 10;
              gte_rtps_b();
              bVar3 = *(byte *)((int)puVar21 + 6);
              bVar4 = *(byte *)((int)puVar23 + 6);
              bVar5 = *(byte *)((int)puVar43 + 6);
              iVar37 = (uint)bVar3 + (uint)bVar4;
              *(char *)&pSVar45[2].pad = (char)(iVar37 >> 1);
              bVar6 = *(byte *)((int)puVar54 + 6);
              *(char *)&pSVar45[4].pad = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
              iVar22 = (uint)bVar5 + (uint)bVar6;
              *(char *)&pSVar45[6].pad = (char)(iVar22 >> 1);
              *(char *)&pSVar45[8].pad = (char)((int)((uint)bVar6 + (uint)bVar3) >> 1);
              *(char *)&pSVar45->pad = (char)(iVar37 + iVar22 >> 2);
              bVar3 = *(byte *)((int)puVar21 + 7);
              bVar4 = *(byte *)((int)puVar23 + 7);
              bVar5 = *(byte *)((int)puVar43 + 7);
              iVar37 = (uint)bVar3 + (uint)bVar4;
              *(char *)((int)&pSVar45[2].pad + 1) = (char)(iVar37 >> 1);
              bVar6 = *(byte *)((int)puVar54 + 7);
              *(char *)((int)&pSVar45[4].pad + 1) = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
              iVar22 = (uint)bVar5 + (uint)bVar6;
              *(char *)((int)&pSVar45[6].pad + 1) = (char)(iVar22 >> 1);
              *(char *)((int)&pSVar45[8].pad + 1) = (char)((int)((uint)bVar6 + (uint)bVar3) >> 1);
              *(char *)((int)&pSVar45->pad + 1) = (char)(iVar37 + iVar22 >> 2);
              ppuVar29 = ppuVar48 + 6;
              ppuVar49 = ppuVar48;
              do {
                gte_stFLAG();
                gte_ldVXY0(ppuVar29 + 2);
                gte_ldVZ0(ppuVar29 + 3);
                gte_stsxy((long *)ppuVar29);
                gte_rtps_b();
                pSVar45 = pSVar45 + 2;
                ppuVar29 = ppuVar29 + 4;
              } while (pSVar45 != pSVar53);
              piVar19 = *(int **)(iVar34 + 0x68);
              iVar22 = *(int *)(iVar34 + 0xa0);
              uVar26 = iVar34 + 0xa5U & 3;
              uVar28 = *(int *)((iVar34 + 0xa5U) - uVar26) << (3 - uVar26) * 8 |
                       (uint)puVar23 & 0xffffffffU >> (uVar26 + 1) * 8;
              uVar38 = *(uint *)(iVar34 + 0xa4);
              uVar26 = 3;
              uVar51 = 2;
              do {
                uVar52 = uVar51 & 3;
                puVar21 = ppuVar49[uVar52];
                gte_ldSXY0(ppuVar49[uVar26] + 2);
                gte_ldSXY1(ppuVar49 + uVar52 * 4 + 10);
                gte_ldSXY2(puVar21 + 2);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                psVar1 = (short *)((int)ppuVar49[uVar26] + 6);
                uVar26 = (uint)psVar1 & 3;
                uVar28 = uVar28 & -1 << (4 - uVar26) * 8 |
                         *(uint *)((int)psVar1 - uVar26) >> uVar26 * 8;
                uVar26 = (int)ppuVar49 + uVar52 * 0x10 + 0x26;
                uVar52 = uVar26 & 3;
                uVar38 = uVar38 & -1 << (4 - uVar52) * 8 | *(uint *)(uVar26 - uVar52) >> uVar52 * 8;
                piVar19[3] = uVar28;
                uVar26 = (uint)(short *)((int)puVar21 + 6U) & 3;
                uVar52 = *(uint *)((int)(short *)((int)puVar21 + 6U) - uVar26);
                piVar19[5] = uVar38;
                piVar19[7] = (uint)puVar21 & -1 << (4 - uVar26) * 8 | uVar52 >> uVar26 * 8;
                *piVar19 = (int)(piVar19 + -0x1e3ffff8);
                iVar37 = gte_stMAC0();
                gte_stSXY2();
                piVar19[1] = iVar22 + -0x8000000;
                if (iVar37 != 0) {
                  *(int **)(iVar34 + 0x38c) = piVar19;
                  piVar19 = piVar19 + 8;
                }
                *(int **)(iVar34 + 0x68) = piVar19;
                bVar17 = -1 < (int)uVar51;
                uVar26 = uVar51;
                uVar51 = uVar51 - 1;
              } while (bVar17);
              uVar26 = 3;
              if (*(uint *)(iVar34 + 0x68) <= *(uint *)(iVar34 + 0x6c)) {
                uVar51 = 2;
                do {
                  puVar21 = ppuVar49[uVar26];
                  ppuVar56 = ppuVar49 + uVar26 * 4 + 8;
                  ppuVar29 = ppuVar49 + (uVar51 & 3) * 4 + 8;
                  puVar36 = *(uint **)(iVar34 + 0x68);
                  gte_ldSXY0(ppuVar56 + 2);
                  gte_ldSXY1(puVar21 + 2);
                  gte_ldSXY2(ppuVar49 + 6);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar51 = *(uint *)(iVar34 + 0xa0);
                  *puVar36 = (uint)(puVar36 + -0x1dbffff6);
                  puVar36[1] = uVar51;
                  uVar16 = *(ushort *)(iVar34 + 0x394);
                  iVar37 = gte_stMAC0();
                  gte_ldSXY0(ppuVar29 + 2);
                  uVar51 = iVar34 + 0xa5U & 3;
                  uVar31 = *(uint *)(iVar34 + 0xa4);
                  gte_nclip_b();
                  uVar38 = (uint)(short *)((int)puVar21 + 6U) & 3;
                  uVar30 = (*(int *)((iVar34 + 0xa5U) - uVar51) << (3 - uVar51) * 8 |
                           (uint)(puVar36 + -0x1dbffff6) & 0xffffffffU >> (uVar51 + 1) * 8) &
                           -1 << (4 - uVar38) * 8 |
                           *(uint *)((int)(short *)((int)puVar21 + 6U) - uVar38) >> uVar38 * 8;
                  uVar51 = (uint)(short *)((int)ppuVar56 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)ppuVar56 + 6U) - uVar51);
                  puVar36[3] = uVar30;
                  uVar38 = (int)ppuVar49 + 0x16U & 3;
                  uVar52 = *(uint *)(((int)ppuVar49 + 0x16U) - uVar38);
                  puVar36[5] = uVar31 & -1 << (4 - uVar51) * 8 | uVar28 >> uVar51 * 8;
                  uVar51 = (uint)(short *)((int)ppuVar29 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)ppuVar29 + 6U) - uVar51);
                  puVar36[9] = -1 << (4 - uVar38) * 8 & 0x77000000U | uVar52 >> uVar38 * 8;
                  puVar36[7] = uVar30 & -1 << (4 - uVar51) * 8 | uVar28 >> uVar51 * 8;
                  iVar22 = gte_stMAC0();
                  gte_stSXY0();
                  uVar38 = iVar37 - iVar22;
                  gte_stSXY2();
                  if ((int)uVar38 < 0) {
                    uVar38 = -uVar38;
                  }
                  uVar51 = uVar26;
                  if (uVar16 < uVar38) {
                    if (ppuVar49 != (undefined4 **)(iVar34 + 0x328)) goto code_r0x80062e0c;
                  }
                  else {
                    *(uint **)(iVar34 + 0x38c) = puVar36;
                    *(uint **)(iVar34 + 0x68) = puVar36 + 10;
                  }
                  while( true ) {
                    uVar26 = uVar51 - 1;
                    uVar51 = uVar51 - 2;
                    if (-1 < (int)uVar26) break;
                    if (ppuVar49 == (undefined4 **)(iVar34 + 0xe8)) {
                      uVar26 = *(uint *)(iVar34 + 0x388);
                      if (*(uint *)(iVar34 + 0x6c) < *(uint *)(iVar34 + 0x68)) {
                        *(uint *)(iVar34 + 0x68) = uVar26;
                      }
                      else if (*(uint *)(iVar34 + 0x68) != uVar26) {
                        iVar37 = *(int *)(iVar34 + 0x38c);
                        uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                        uVar38 = uVar51 & 3;
                        iVar22 = *(int *)(uVar51 - uVar38);
                        uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                        uVar28 = uVar51 & 3;
                        puVar36 = (uint *)(uVar51 - uVar28);
                        *puVar36 = *puVar36 & -1 << (uVar28 + 1) * 8 |
                                   (uVar26 << 8) >> (3 - uVar28) * 8;
                        uVar26 = iVar37 + 2;
                        uVar51 = uVar26 & 3;
                        puVar36 = (uint *)(uVar26 - uVar51);
                        *puVar36 = *puVar36 & -1 << (uVar51 + 1) * 8 |
                                   (uint)(iVar22 << (3 - uVar38) * 8) >> (3 - uVar51) * 8;
                      }
                      goto LAB_80062e8c;
                    }
                    ppuVar48 = ppuVar49 + -0x11;
                    ppuVar49 = ppuVar49 + -0x18;
                    uVar51 = (uint)*(byte *)ppuVar48;
                  }
                } while( true );
              }
              *(undefined4 *)(iVar34 + 0x68) = *(undefined4 *)(iVar34 + 0x388);
LAB_80062e8c:
              ppuVar46 = *(uint ***)(iVar27 + 0x68);
              if (ppuVar46 < *(uint ***)(iVar27 + 0x6c)) goto LAB_80062f00;
              *(uint ***)(iVar27 + 0x68) = ppuVar46;
              goto LAB_80062f14;
            }
            ppuVar33 = *(uint ***)(iVar27 + 0x6c);
            ppuVar46[3] = puVar36;
            ppuVar46[5] = puVar25;
            ppuVar46[9] = puVar24;
            uVar26 = (int)ppuVar46 + 0x1dU & 3;
            puVar36 = (uint *)(((int)ppuVar46 + 0x1dU) - uVar26);
            *puVar36 = *puVar36 & -1 << (uVar26 + 1) * 8 | (uint)puVar24 >> (3 - uVar26) * 8;
            ppuVar46[1] = puVar32;
            uVar26 = iVar34 - 0x1eU & 3;
            iVar22 = *(int *)((iVar34 - 0x1eU) - uVar26);
            gte_stSXY1();
            ppuVar46[4] = *(uint **)(iVar27 + 0xc0);
            gte_stSXY2();
            gte_stSXY0();
            *ppuVar46 = (uint *)((uint)(iVar22 << (3 - uVar26) * 8) >> 8 | 0x9000000);
            uVar26 = iVar34 - 0x1eU & 3;
            puVar36 = (uint *)((iVar34 - 0x1eU) - uVar26);
            *puVar36 = *puVar36 & -1 << (uVar26 + 1) * 8 |
                       (uint)((int)ppuVar46 << 8) >> (3 - uVar26) * 8;
            bVar17 = ppuVar33 < ppuVar46;
            ppuVar46 = ppuVar46 + 10;
            if (bVar17) break;
          }
        }
      }
LAB_80062f00:
      puVar47 = puVar47 + 7;
    } while (puVar47 != *(uint **)(iVar27 + 0x3b4));
    *(uint ***)(iVar27 + 0x68) = ppuVar46;
  }
LAB_80062f14:
  puVar47 = *(uint **)(param_1 + 0x34);
  iVar27 = 0x1f800000;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    DAT_1f800394 = 0x480;
    puVar36 = puVar47 + (uint)*(ushort *)(param_1 + 0x10) * 9;
    ppuVar46 = DAT_1f800068;
    do {
      iVar22 = *(int *)(iVar27 + 0x70);
      uVar26 = *puVar47;
      uVar51 = puVar47[1];
      piVar19 = (int *)((uVar26 & 0xff) * 8 + iVar22);
      iVar40 = *piVar19;
      piVar20 = (int *)(((int)uVar26 >> 5 & 0x7f8U) + iVar22);
      iVar34 = *piVar20;
      iVar37 = piVar20[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + iVar22);
      gte_ldVXY0(iVar40);
      gte_ldVZ0(piVar19[1]);
      gte_ldVXY2(iVar34);
      gte_ldVZ2(iVar37);
      gte_ldVXY1(*puVar21);
      gte_ldVZ1(puVar21[1]);
      gte_rtpt_b();
      iVar22 = gte_stFLAG();
      read_sz_fifo3(iVar34,iVar37,iVar40);
      gte_nclip_b();
      uVar26 = gte_stMAC0();
      if (-1 < iVar22) {
        if (*(char *)(iVar27 + 0x398) < '\0') {
          uVar26 = -uVar26;
        }
        if (0 < (int)uVar26) {
          if ((uint)(iVar34 < iVar37) == (uVar51 & 1)) {
            iVar34 = iVar37;
          }
          if ((uint)(iVar34 < iVar40) == (uVar51 & 1)) {
            iVar34 = iVar40;
          }
          uVar38 = (uint)(iVar34 << (*(uint *)(iVar27 + 0x98) & 0x1f)) >> 0xd;
          iVar34 = uVar38 << 2;
          if (0xfff < uVar38) {
            iVar34 = 0x3ffc;
          }
          iVar34 = *(int *)(iVar27 + 100) + iVar34 + (uVar51 & 0x1e) * 2;
          if ((int)(uVar51 & (int)*(char *)(iVar27 + 0x399)) < 0) {
            iVar22 = *(int *)(iVar27 + 0x74);
            uVar9 = *(undefined2 *)((puVar47[2] & 0x3fe) + iVar22);
            uVar10 = *(undefined2 *)((puVar47[2] >> 9 & 0x3fe) + iVar22);
            *(undefined2 *)(ppuVar46 + 3) = *(undefined2 *)((uVar51 >> 4 & 0x3fe) + iVar22);
            *(undefined2 *)(ppuVar46 + 5) = uVar9;
            *(undefined2 *)(ppuVar46 + 7) = uVar10;
            gte_stSXY0();
            gte_stSXY2();
            gte_stSXY1();
            sVar12 = *(short *)(iVar27 + 0x3ac);
            uVar9 = *(undefined2 *)(iVar27 + 0x3ae);
            ppuVar46[1] = *(uint **)(iVar27 + 0x3a4);
            *(short *)((int)ppuVar46 + 0xe) = sVar12;
            *(undefined2 *)((int)ppuVar46 + 0x16) = uVar9;
            *(undefined *)((int)ppuVar46 + 3) = 7;
            uVar38 = iVar34 - 0x1eU & 3;
            iVar22 = *(int *)((iVar34 - 0x1eU) - uVar38);
            uVar28 = iVar34 - 0x1eU & 3;
            puVar24 = (uint *)((iVar34 - 0x1eU) - uVar28);
            *puVar24 = *puVar24 & -1 << (uVar28 + 1) * 8 |
                       (uint)((int)ppuVar46 << 8) >> (3 - uVar28) * 8;
            uVar28 = (int)ppuVar46 + 2U & 3;
            puVar24 = (uint *)(((int)ppuVar46 + 2U) - uVar28);
            *puVar24 = *puVar24 & -1 << (uVar28 + 1) * 8 |
                       (iVar22 << (3 - uVar38) * 8 | (int)sVar12 & 0xffffffffU >> (uVar38 + 1) * 8)
                       >> (3 - uVar28) * 8;
            ppuVar46 = ppuVar46 + 8;
          }
          puVar25 = (uint *)puVar47[3];
          puVar35 = (uint *)puVar47[4];
          puVar55 = (uint *)puVar47[5];
          puVar32 = (uint *)puVar47[7];
          puVar58 = (uint *)puVar47[8];
          uVar38 = *(uint *)(iVar27 + 0x3a0);
          puVar24 = (uint *)(puVar47[6] + ((int)uVar51 >> 0xe & uVar38) + *(int *)(iVar27 + 0x39c));
          if (0x480 < (int)uVar26) {
            *(uint ***)(iVar27 + 0x68) = ppuVar46;
            *(int *)(iVar27 + 0x9c) = iVar34 + -0x20;
            *(uint **)(iVar27 + 0xa4) = puVar32;
            uVar51 = iVar27 + 0xa5U & 3;
            puVar18 = (uint *)((iVar27 + 0xa5U) - uVar51);
            *puVar18 = *puVar18 & -1 << (uVar51 + 1) * 8 | (uint)puVar24 >> (3 - uVar51) * 8;
            *(uint **)(iVar27 + 0xa0) = puVar25;
            *(uint **)(iVar27 + 0xb4) = puVar25;
            *(uint **)(iVar27 + 0xc4) = puVar35;
            *(uint **)(iVar27 + 0xd4) = puVar55;
            gte_stVXY0();
            gte_stVZ0();
            gte_stVXY2();
            gte_stVZ2();
            gte_stVXY1();
            gte_stVZ1();
            *(short *)(iVar27 + 0xae) = (short)puVar24;
            *(short *)(iVar27 + 0xbe) = (short)puVar32;
            *(short *)(iVar27 + 0xce) = (short)puVar58;
            gte_stSXY0();
            gte_stSXY2();
            gte_stSXY1();
            iVar34 = 0x1f800000;
            ppuVar48 = &DAT_1f8000e8;
            DAT_1f8000e8 = &DAT_1f8000a8;
            DAT_1f8000ec = &DAT_1f8000b8;
            DAT_1f8000f0 = &DAT_1f8000c8;
            DAT_1f800388 = DAT_1f800068;
            DAT_1f80038c = DAT_1f800068;
            DAT_1f800390._0_3_ = SUB43(DAT_1f800068,0);
            DAT_1f800390 = CONCAT13(9,(undefined3)DAT_1f800390);
LAB_800631a4:
            pSVar45 = (SVECTOR *)(ppuVar48 + 4);
            puVar21 = *ppuVar48;
            puVar23 = ppuVar48[1];
            puVar43 = ppuVar48[2];
            sVar12 = *(short *)puVar21;
            sVar13 = *(short *)puVar23;
            sVar14 = *(short *)puVar43;
            *(short *)(ppuVar48 + 4) = (short)((int)sVar12 + (int)sVar13 >> 1);
            *(short *)(ppuVar48 + 8) = (short)((int)sVar13 + (int)sVar14 >> 1);
            *(short *)(ppuVar48 + 0xc) = (short)((int)sVar14 + (int)sVar12 >> 1);
            sVar12 = *(short *)((int)puVar21 + 2);
            sVar13 = *(short *)((int)puVar23 + 2);
            sVar14 = *(short *)((int)puVar43 + 2);
            *(short *)((int)ppuVar48 + 0x12) = (short)((int)sVar12 + (int)sVar13 >> 1);
            *(short *)((int)ppuVar48 + 0x22) = (short)((int)sVar13 + (int)sVar14 >> 1);
            *(short *)((int)ppuVar48 + 0x32) = (short)((int)sVar14 + (int)sVar12 >> 1);
            sVar12 = *(short *)(puVar21 + 1);
            sVar13 = *(short *)(puVar23 + 1);
            sVar14 = *(short *)(puVar43 + 1);
            *(short *)(ppuVar48 + 5) = (short)((int)sVar12 + (int)sVar13 >> 1);
            *(short *)(ppuVar48 + 9) = (short)((int)sVar13 + (int)sVar14 >> 1);
            *(short *)(ppuVar48 + 0xd) = (short)((int)sVar14 + (int)sVar12 >> 1);
            uVar28 = puVar21[3];
            uVar51 = puVar23[3];
            uVar38 = puVar43[3];
            ppuVar48[7] = (undefined4 *)((int)((uVar28 & 0xfefefe) + (uVar51 & 0xfefefe)) >> 1);
            ppuVar48[0xb] = (undefined4 *)((int)((uVar51 & 0xfefefe) + (uVar38 & 0xfefefe)) >> 1);
            ppuVar48[0xf] = (undefined4 *)((int)((uVar38 & 0xfefefe) + (uVar28 & 0xfefefe)) >> 1);
            gte_ldv0(pSVar45);
            pSVar53 = pSVar45 + 6;
            gte_rtps_b();
            bVar3 = *(byte *)((int)puVar21 + 6);
            bVar4 = *(byte *)((int)puVar23 + 6);
            bVar5 = *(byte *)((int)puVar43 + 6);
            *(char *)&pSVar45->pad = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
            *(char *)&pSVar45[2].pad = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
            *(char *)&pSVar45[4].pad = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
            bVar3 = *(byte *)((int)puVar21 + 7);
            bVar4 = *(byte *)((int)puVar23 + 7);
            bVar5 = *(byte *)((int)puVar43 + 7);
            *(char *)((int)&pSVar45->pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
            *(char *)((int)&pSVar45[2].pad + 1) = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
            *(char *)((int)&pSVar45[4].pad + 1) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
            ppuVar29 = ppuVar48 + 6;
            ppuVar49 = ppuVar48;
            do {
              gte_stFLAG();
              gte_ldVXY0(ppuVar29 + 2);
              gte_ldVZ0(ppuVar29 + 3);
              gte_stsxy((long *)ppuVar29);
              gte_rtps_b();
              pSVar45 = pSVar45 + 2;
              ppuVar29 = ppuVar29 + 4;
            } while (pSVar45 != pSVar53);
            piVar19 = *(int **)(iVar34 + 0x68);
            uVar7 = *(undefined *)(iVar34 + 0xa3);
            uVar51 = iVar34 + 0xa5U & 3;
            uVar51 = *(int *)((iVar34 + 0xa5U) - uVar51) << (3 - uVar51) * 8 |
                     uVar26 & 0xffffffffU >> (uVar51 + 1) * 8;
            uVar26 = *(uint *)(iVar34 + 0xa4);
            iVar22 = 2;
            ppuVar48 = ppuVar49 + 2;
            do {
              iVar37 = iVar22 + -1;
              if (iVar22 == 0) {
                iVar37 = 2;
              }
              puVar21 = *ppuVar48;
              puVar23 = ppuVar49[iVar37];
              gte_ldSXY0(puVar21 + 2);
              gte_ldSXY1(ppuVar49 + iVar37 * 4 + 6);
              gte_ldSXY2(puVar23 + 2);
              gte_stSXY0();
              gte_stSXY1();
              gte_nclip_b();
              uVar38 = (uint)(short *)((int)puVar21 + 6U) & 3;
              uVar51 = uVar51 & -1 << (4 - uVar38) * 8 |
                       *(uint *)((int)(short *)((int)puVar21 + 6U) - uVar38) >> uVar38 * 8;
              uVar38 = (int)ppuVar49 + iVar37 * 0x10 + 0x16;
              uVar28 = uVar38 & 3;
              uVar26 = uVar26 & -1 << (4 - uVar28) * 8 | *(uint *)(uVar38 - uVar28) >> uVar28 * 8;
              piVar19[3] = uVar51;
              uVar38 = (uint)(short *)((int)puVar23 + 6U) & 3;
              uVar28 = *(uint *)((int)(short *)((int)puVar23 + 6U) - uVar38);
              piVar19[6] = uVar26;
              piVar19[9] = (uint)(ppuVar49 + iVar37) & -1 << (4 - uVar38) * 8 | uVar28 >> uVar38 * 8
              ;
              *piVar19 = (int)(piVar19 + -0x1dbffff6);
              iVar40 = gte_stMAC0();
              gte_stSXY2();
              if (iVar40 != 0) {
                puVar43 = ppuVar49[iVar37 * 4 + 7];
                piVar19[1] = puVar21[3];
                iVar37 = puVar23[3];
                piVar19[4] = (int)puVar43;
                piVar19[7] = iVar37;
                *(undefined *)((int)piVar19 + 7) = uVar7;
                *(int **)(iVar34 + 0x38c) = piVar19;
                piVar19 = piVar19 + 10;
              }
              ppuVar48 = ppuVar48 + -1;
              iVar22 = iVar22 + -1;
              *(int **)(iVar34 + 0x68) = piVar19;
            } while (-1 < iVar22);
            uVar51 = 3;
            if (*(uint *)(iVar34 + 0x68) <= *(uint *)(iVar34 + 0x6c)) {
              do {
                ppuVar48 = (undefined4 **)(uVar51 * 4);
                if (uVar51 == 3) {
                  ppuVar56 = ppuVar49 + 4;
                  ppuVar29 = ppuVar49 + 8;
                  ppuVar44 = ppuVar49 + 0xc;
                }
                else {
                  ppuVar56 = (undefined4 **)ppuVar49[uVar51];
                  ppuVar29 = ppuVar49 + uVar51 * 4 + 4;
                  if (uVar51 == 0) {
                    ppuVar48 = ppuVar49 + 0xc;
                    ppuVar44 = ppuVar48;
                  }
                  else {
                    ppuVar48 = ppuVar49 + (uVar51 - 1) * 4 + 4;
                    ppuVar44 = ppuVar48;
                  }
                }
                piVar19 = *(int **)(iVar34 + 0x68);
                gte_ldSXY0(ppuVar56 + 2);
                gte_ldSXY1(ppuVar29 + 2);
                gte_ldSXY2(ppuVar44 + 2);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                uVar26 = (uint)*(ushort *)(iVar34 + 0x394);
                uVar38 = iVar34 + 0xa5U & 3;
                uVar28 = (int)ppuVar56 + 6U & 3;
                uVar31 = *(uint *)(iVar34 + 0xa4);
                uVar52 = (int)ppuVar29 + 6U & 3;
                uVar30 = *(uint *)(((int)ppuVar29 + 6U) - uVar52);
                piVar19[3] = (*(int *)((iVar34 + 0xa5U) - uVar38) << (3 - uVar38) * 8 |
                             (uint)ppuVar48 & 0xffffffffU >> (uVar38 + 1) * 8) &
                             -1 << (4 - uVar28) * 8 |
                             *(uint *)(((int)ppuVar56 + 6U) - uVar28) >> uVar28 * 8;
                uVar38 = gte_stMAC0();
                gte_stSXY2();
                if ((int)uVar38 < 0) {
                  uVar38 = -uVar38;
                }
                *piVar19 = (int)(piVar19 + -0x1dbffff6);
                if (uVar26 < uVar38) {
                  if (ppuVar49 != (undefined4 **)(iVar34 + 0x328)) goto code_r0x800634c4;
                }
                else {
                  uVar26 = (int)ppuVar44 + 6U & 3;
                  uVar38 = *(uint *)(((int)ppuVar44 + 6U) - uVar26);
                  piVar19[6] = uVar31 & -1 << (4 - uVar52) * 8 | uVar30 >> uVar52 * 8;
                  puVar23 = ppuVar56[3];
                  piVar19[9] = (uint)(undefined4 **)(iVar34 + 0x328) & -1 << (4 - uVar26) * 8 |
                               uVar38 >> uVar26 * 8;
                  puVar21 = ppuVar29[3];
                  piVar19[1] = (int)puVar23;
                  puVar23 = ppuVar44[3];
                  piVar19[4] = (int)puVar21;
                  uVar7 = *(undefined *)(iVar34 + 0xa3);
                  piVar19[7] = (int)puVar23;
                  *(undefined *)((int)piVar19 + 7) = uVar7;
                  *(int **)(iVar34 + 0x38c) = piVar19;
                  *(int **)(iVar34 + 0x68) = piVar19 + 10;
                }
                while (uVar51 = uVar51 - 1, (int)uVar51 < 0) {
                  if (ppuVar49 == (undefined4 **)(iVar34 + 0xe8)) {
                    uVar26 = *(uint *)(iVar34 + 0x388);
                    if (*(uint *)(iVar34 + 0x6c) < *(uint *)(iVar34 + 0x68)) {
                      *(uint *)(iVar34 + 0x68) = uVar26;
                    }
                    else if (*(uint *)(iVar34 + 0x68) != uVar26) {
                      iVar37 = *(int *)(iVar34 + 0x38c);
                      uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                      uVar38 = uVar51 & 3;
                      iVar22 = *(int *)(uVar51 - uVar38);
                      uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                      uVar28 = uVar51 & 3;
                      puVar24 = (uint *)(uVar51 - uVar28);
                      *puVar24 = *puVar24 & -1 << (uVar28 + 1) * 8 |
                                 (uVar26 << 8) >> (3 - uVar28) * 8;
                      uVar26 = iVar37 + 2;
                      uVar51 = uVar26 & 3;
                      puVar24 = (uint *)(uVar26 - uVar51);
                      *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                                 (uint)(iVar22 << (3 - uVar38) * 8) >> (3 - uVar51) * 8;
                    }
                    goto LAB_80063588;
                  }
                  pbVar2 = (byte *)((int)ppuVar49 + -0x41);
                  ppuVar49 = ppuVar49 + -0x18;
                  uVar51 = (uint)(*pbVar2 >> 6);
                }
              } while( true );
            }
            *(undefined4 *)(iVar34 + 0x68) = *(undefined4 *)(iVar34 + 0x388);
LAB_80063588:
            ppuVar46 = *(uint ***)(iVar27 + 0x68);
            if (ppuVar46 < *(uint ***)(iVar27 + 0x6c)) goto LAB_800635f4;
            *(uint ***)(iVar27 + 0x68) = ppuVar46;
            goto LAB_80063604;
          }
          ppuVar33 = *(uint ***)(iVar27 + 0x6c);
          uVar26 = iVar34 - 0x1eU & 3;
          iVar22 = *(int *)((iVar34 - 0x1eU) - uVar26);
          ppuVar46[1] = puVar25;
          ppuVar46[4] = puVar35;
          ppuVar46[7] = puVar55;
          ppuVar46[3] = puVar24;
          ppuVar46[6] = puVar32;
          ppuVar46[9] = puVar58;
          uVar51 = iVar34 - 0x1eU & 3;
          puVar24 = (uint *)((iVar34 - 0x1eU) - uVar51);
          *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                     (uint)((int)ppuVar46 << 8) >> (3 - uVar51) * 8;
          gte_stSXY0();
          gte_stSXY1();
          gte_stSXY2();
          *(undefined *)((int)ppuVar46 + 3) = 9;
          bVar17 = ppuVar33 < ppuVar46;
          uVar51 = (int)ppuVar46 + 2U & 3;
          puVar24 = (uint *)(((int)ppuVar46 + 2U) - uVar51);
          *puVar24 = *puVar24 & -1 << (uVar51 + 1) * 8 |
                     (iVar22 << (3 - uVar26) * 8 | uVar38 & 0xffffffffU >> (uVar26 + 1) * 8) >>
                     (3 - uVar51) * 8;
          ppuVar46 = ppuVar46 + 10;
          if (bVar17) break;
        }
      }
LAB_800635f4:
      puVar47 = puVar47 + 9;
    } while (puVar47 != puVar36);
    *(uint ***)(iVar27 + 0x68) = ppuVar46;
  }
LAB_80063604:
  puVar47 = *(uint **)(param_1 + 0x38);
  iVar27 = 0x1f800000;
  if (*(ushort *)(param_1 + 0x12) != 0) {
    DAT_1f8003b4 = puVar47 + (uint)*(ushort *)(param_1 + 0x12) * 10;
    DAT_1f800394 = 0x800;
    ppuVar46 = DAT_1f800068;
    do {
      iVar34 = *(int *)(iVar27 + 0x70);
      uVar26 = *puVar47;
      uVar28 = puVar47[1];
      piVar19 = (int *)((uVar26 & 0xff) * 8 + iVar34);
      iVar37 = *piVar19;
      iVar40 = piVar19[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 5 & 0x7f8U) + iVar34);
      uVar39 = *puVar21;
      uVar42 = puVar21[1];
      puVar21 = (undefined4 *)(((int)uVar26 >> 0xd & 0x7f8U) + iVar34);
      gte_ldVXY2(iVar37);
      gte_ldVZ2(iVar40);
      gte_ldVXY0(uVar39);
      gte_ldVZ0(uVar42);
      gte_ldVXY1(*puVar21);
      gte_ldVZ1(puVar21[1]);
      gte_rtpt_b();
      *(undefined4 *)(iVar27 + 0xb8) = uVar39;
      *(undefined4 *)(iVar27 + 0xbc) = uVar42;
      puVar21 = (undefined4 *)(((int)uVar26 >> 0x15 & 0x7f8U) + iVar34);
      uVar51 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(iVar34,iVar37,iVar40);
      gte_nclip_b();
      gte_ldVXY0(*puVar21);
      gte_ldVZ0(puVar21[1]);
      iVar22 = gte_stMAC0();
      gte_rtps_b();
      uVar26 = gte_stFLAG();
      iVar41 = gte_stSZ3();
      gte_nclip_b();
      uVar38 = gte_stMAC0();
      if (-1 < (int)(uVar51 | uVar26)) {
        uVar26 = -iVar22;
        iVar22 = uVar26 + uVar38;
        if ((uVar26 | uVar38) != 0) {
          uVar51 = uVar26 - 1 & uVar38 - 1;
          if (*(char *)(iVar27 + 0x398) < '\0') {
            uVar51 = ~(uVar26 - 1 | uVar38 - 1);
          }
          if (-1 < (int)uVar51) {
            uVar26 = uVar28 & 1;
            if (iVar34 < iVar37 == uVar26) {
              iVar34 = iVar37;
            }
            if (iVar34 < iVar40 == uVar26) {
              iVar34 = iVar40;
            }
            if (iVar34 < iVar41 == uVar26) {
              iVar34 = iVar41;
            }
            uVar26 = (uint)(iVar34 << (*(uint *)(iVar27 + 0x98) & 0x1f)) >> 0xd;
            iVar34 = uVar26 << 2;
            if (0xfff < uVar26) {
              iVar34 = 0x3ffc;
            }
            iVar34 = *(int *)(iVar27 + 100) + iVar34 + (uVar28 & 0x1e) * 2;
            if ((int)(uVar28 & (int)*(char *)(iVar27 + 0x399)) < 0) {
              iVar37 = *(int *)(iVar27 + 0x74);
              uVar26 = puVar47[2];
              uVar9 = *(undefined2 *)((uVar26 & 0x3fe) + iVar37);
              uVar10 = *(undefined2 *)((uVar26 >> 9 & 0x3fe) + iVar37);
              uVar11 = *(undefined2 *)((uVar26 >> 0x12 & 0x3fe) + iVar37);
              *(undefined2 *)(ppuVar46 + 3) = *(undefined2 *)((uVar28 >> 4 & 0x3fe) + iVar37);
              *(undefined2 *)(ppuVar46 + 5) = uVar9;
              *(undefined2 *)(ppuVar46 + 9) = uVar10;
              *(undefined2 *)(ppuVar46 + 7) = uVar11;
              gte_stSXY1();
              ppuVar46[4] = *(uint **)(iVar27 + 0xc0);
              gte_stSXY2();
              gte_stSXY0();
              sVar12 = *(short *)(iVar27 + 0x3ac);
              uVar9 = *(undefined2 *)(iVar27 + 0x3ae);
              ppuVar46[1] = *(uint **)(iVar27 + 0x3a8);
              *(short *)((int)ppuVar46 + 0xe) = sVar12;
              *(undefined2 *)((int)ppuVar46 + 0x16) = uVar9;
              *(undefined *)((int)ppuVar46 + 3) = 9;
              uVar26 = iVar34 - 0x1eU & 3;
              iVar37 = *(int *)((iVar34 - 0x1eU) - uVar26);
              uVar51 = iVar34 - 0x1eU & 3;
              puVar36 = (uint *)((iVar34 - 0x1eU) - uVar51);
              *puVar36 = *puVar36 & -1 << (uVar51 + 1) * 8 |
                         (uint)((int)ppuVar46 << 8) >> (3 - uVar51) * 8;
              uVar51 = (int)ppuVar46 + 2U & 3;
              puVar36 = (uint *)(((int)ppuVar46 + 2U) - uVar51);
              *puVar36 = *puVar36 & -1 << (uVar51 + 1) * 8 |
                         (iVar37 << (3 - uVar26) * 8 | (int)sVar12 & 0xffffffffU >> (uVar26 + 1) * 8
                         ) >> (3 - uVar51) * 8;
              ppuVar46 = ppuVar46 + 10;
            }
            puVar32 = (uint *)puVar47[3];
            puVar35 = (uint *)puVar47[4];
            puVar55 = (uint *)puVar47[5];
            puVar58 = (uint *)puVar47[6];
            puVar25 = (uint *)puVar47[8];
            puVar24 = (uint *)puVar47[9];
            puVar36 = (uint *)(puVar47[7] + ((int)uVar28 >> 0xe & *(uint *)(iVar27 + 0x3a0)) +
                              *(int *)(iVar27 + 0x39c));
            if (iVar22 < 0) {
              iVar22 = -iVar22;
            }
            if (0x800 < iVar22) {
              *(uint ***)(iVar27 + 0x68) = ppuVar46;
              *(int *)(iVar27 + 0x9c) = iVar34 + -0x20;
              *(uint **)(iVar27 + 0xa0) = puVar32;
              *(uint **)(iVar27 + 0xb4) = puVar32;
              *(uint **)(iVar27 + 0xc4) = puVar35;
              *(uint **)(iVar27 + 0xd4) = puVar55;
              *(uint **)(iVar27 + 0xe4) = puVar58;
              gte_stVXY2();
              gte_stVZ2();
              gte_stVXY1();
              gte_stVZ1();
              gte_stVXY0();
              gte_stVZ0();
              gte_stSXY1();
              gte_stSXY0();
              gte_stSXY2();
              *(uint **)(iVar27 + 0xa4) = puVar25;
              uVar26 = iVar27 + 0xa5U & 3;
              puVar35 = (uint *)((iVar27 + 0xa5U) - uVar26);
              *puVar35 = *puVar35 & -1 << (uVar26 + 1) * 8 | (uint)puVar36 >> (3 - uVar26) * 8;
              *(short *)(iVar27 + 0xae) = (short)puVar36;
              *(short *)(iVar27 + 0xbe) = (short)puVar25;
              *(short *)(iVar27 + 0xce) = (short)puVar24;
              *(short *)(iVar27 + 0xde) = (short)((uint)puVar24 >> 0x10);
              *(uint **)(iVar27 + 0xb4) = puVar32;
              gte_stRGB0();
              gte_stRGB1();
              gte_stRGB2();
              iVar34 = 0x1f800000;
              ppuVar48 = &DAT_1f8000e8;
              DAT_1f8000e8 = &DAT_1f8000a8;
              DAT_1f8000ec = &DAT_1f8000b8;
              DAT_1f8000f0 = &DAT_1f8000c8;
              DAT_1f8000f4 = &DAT_1f8000d8;
              DAT_1f800388 = DAT_1f800068;
              DAT_1f80038c = DAT_1f800068;
              DAT_1f800390._0_3_ = SUB43(DAT_1f800068,0);
              DAT_1f800390 = CONCAT13(0xc,(undefined3)DAT_1f800390);
LAB_80063954:
              pSVar45 = (SVECTOR *)(ppuVar48 + 4);
              puVar43 = *ppuVar48;
              puVar54 = ppuVar48[1];
              puVar50 = ppuVar48[2];
              puVar57 = ppuVar48[3];
              sVar12 = *(short *)puVar43;
              sVar13 = *(short *)puVar54;
              sVar14 = *(short *)puVar50;
              iVar37 = (int)sVar12 + (int)sVar13;
              *(short *)(ppuVar48 + 8) = (short)(iVar37 >> 1);
              sVar15 = *(short *)puVar57;
              *(short *)(ppuVar48 + 0xc) = (short)((int)sVar13 + (int)sVar14 >> 1);
              iVar22 = (int)sVar14 + (int)sVar15;
              *(short *)(ppuVar48 + 0x10) = (short)(iVar22 >> 1);
              *(short *)(ppuVar48 + 0x14) = (short)((int)sVar15 + (int)sVar12 >> 1);
              *(short *)(ppuVar48 + 4) = (short)(iVar37 + iVar22 >> 2);
              sVar12 = *(short *)((int)puVar43 + 2);
              sVar13 = *(short *)((int)puVar54 + 2);
              sVar14 = *(short *)((int)puVar50 + 2);
              iVar37 = (int)sVar12 + (int)sVar13;
              *(short *)((int)ppuVar48 + 0x22) = (short)(iVar37 >> 1);
              sVar15 = *(short *)((int)puVar57 + 2);
              *(short *)((int)ppuVar48 + 0x32) = (short)((int)sVar13 + (int)sVar14 >> 1);
              iVar22 = (int)sVar14 + (int)sVar15;
              *(short *)((int)ppuVar48 + 0x42) = (short)(iVar22 >> 1);
              *(short *)((int)ppuVar48 + 0x52) = (short)((int)sVar15 + (int)sVar12 >> 1);
              *(short *)((int)ppuVar48 + 0x12) = (short)(iVar37 + iVar22 >> 2);
              sVar12 = *(short *)(puVar43 + 1);
              sVar13 = *(short *)(puVar54 + 1);
              sVar14 = *(short *)(puVar50 + 1);
              iVar37 = (int)sVar12 + (int)sVar13;
              *(short *)(ppuVar48 + 9) = (short)(iVar37 >> 1);
              sVar15 = *(short *)(puVar57 + 1);
              *(short *)(ppuVar48 + 0xd) = (short)((int)sVar13 + (int)sVar14 >> 1);
              iVar22 = (int)sVar14 + (int)sVar15;
              *(short *)(ppuVar48 + 0x11) = (short)(iVar22 >> 1);
              *(short *)(ppuVar48 + 0x15) = (short)((int)sVar15 + (int)sVar12 >> 1);
              *(short *)(ppuVar48 + 5) = (short)(iVar37 + iVar22 >> 2);
              uVar28 = puVar43[3];
              uVar26 = puVar54[3];
              uVar51 = puVar50[3];
              puVar23 = (undefined4 *)((int)((uVar28 & 0xfefefe) + (uVar26 & 0xfefefe)) >> 1);
              ppuVar48[0xb] = puVar23;
              uVar38 = puVar57[3];
              ppuVar48[0xf] = (undefined4 *)((int)((uVar26 & 0xfefefe) + (uVar51 & 0xfefefe)) >> 1);
              puVar21 = (undefined4 *)((int)((uVar51 & 0xfefefe) + (uVar38 & 0xfefefe)) >> 1);
              ppuVar48[0x13] = puVar21;
              ppuVar48[0x17] = (undefined4 *)((int)((uVar38 & 0xfefefe) + (uVar28 & 0xfefefe)) >> 1)
              ;
              ppuVar48[7] = (undefined4 *)
                            ((int)(((uint)puVar23 & 0xfefefe) + ((uint)puVar21 & 0xfefefe)) >> 1);
              gte_ldv0(pSVar45);
              pSVar53 = pSVar45 + 10;
              gte_rtps_b();
              bVar3 = *(byte *)((int)puVar43 + 6);
              bVar4 = *(byte *)((int)puVar54 + 6);
              bVar5 = *(byte *)((int)puVar50 + 6);
              iVar37 = (uint)bVar3 + (uint)bVar4;
              *(char *)&pSVar45[2].pad = (char)(iVar37 >> 1);
              bVar6 = *(byte *)((int)puVar57 + 6);
              *(char *)&pSVar45[4].pad = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
              iVar22 = (uint)bVar5 + (uint)bVar6;
              *(char *)&pSVar45[6].pad = (char)(iVar22 >> 1);
              *(char *)&pSVar45[8].pad = (char)((int)((uint)bVar6 + (uint)bVar3) >> 1);
              *(char *)&pSVar45->pad = (char)(iVar37 + iVar22 >> 2);
              bVar3 = *(byte *)((int)puVar43 + 7);
              bVar4 = *(byte *)((int)puVar54 + 7);
              bVar5 = *(byte *)((int)puVar50 + 7);
              iVar37 = (uint)bVar3 + (uint)bVar4;
              *(char *)((int)&pSVar45[2].pad + 1) = (char)(iVar37 >> 1);
              bVar6 = *(byte *)((int)puVar57 + 7);
              *(char *)((int)&pSVar45[4].pad + 1) = (char)((int)((uint)bVar4 + (uint)bVar5) >> 1);
              iVar22 = (uint)bVar5 + (uint)bVar6;
              *(char *)((int)&pSVar45[6].pad + 1) = (char)(iVar22 >> 1);
              *(char *)((int)&pSVar45[8].pad + 1) = (char)((int)((uint)bVar6 + (uint)bVar3) >> 1);
              *(char *)((int)&pSVar45->pad + 1) = (char)(iVar37 + iVar22 >> 2);
              ppuVar29 = ppuVar48 + 6;
              ppuVar49 = ppuVar48;
              do {
                FUN_8007af30();
                gte_ldVXY0(ppuVar29 + 2);
                gte_ldVZ0(ppuVar29 + 3);
                gte_stsxy((long *)ppuVar29);
                gte_rtps_b();
                pSVar45 = pSVar45 + 2;
                ppuVar29 = ppuVar29 + 4;
              } while (pSVar45 != pSVar53);
              piVar19 = *(int **)(iVar34 + 0x68);
              cVar8 = *(char *)(iVar34 + 0xa3);
              uVar26 = iVar34 + 0xa5U & 3;
              uVar28 = *(int *)((iVar34 + 0xa5U) - uVar26) << (3 - uVar26) * 8 |
                       (uint)puVar54 & 0xffffffffU >> (uVar26 + 1) * 8;
              uVar38 = *(uint *)(iVar34 + 0xa4);
              uVar26 = 3;
              uVar51 = 2;
              do {
                uVar30 = uVar51 & 3;
                puVar21 = ppuVar49[uVar26];
                puVar23 = ppuVar49[uVar30];
                gte_ldSXY0(puVar21 + 2);
                gte_ldSXY1(ppuVar49 + uVar30 * 4 + 10);
                gte_ldSXY2(puVar23 + 2);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                uVar26 = (uint)(short *)((int)puVar21 + 6U) & 3;
                uVar28 = uVar28 & -1 << (4 - uVar26) * 8 |
                         *(uint *)((int)(short *)((int)puVar21 + 6U) - uVar26) >> uVar26 * 8;
                uVar26 = (int)ppuVar49 + uVar30 * 0x10 + 0x26;
                uVar52 = uVar26 & 3;
                uVar38 = uVar38 & -1 << (4 - uVar52) * 8 | *(uint *)(uVar26 - uVar52) >> uVar52 * 8;
                piVar19[3] = uVar28;
                uVar26 = (uint)(short *)((int)puVar23 + 6U) & 3;
                uVar52 = *(uint *)((int)(short *)((int)puVar23 + 6U) - uVar26);
                piVar19[6] = uVar38;
                piVar19[9] = uVar30 * 0x10 + 0x20 & -1 << (4 - uVar26) * 8 | uVar52 >> uVar26 * 8;
                *piVar19 = (int)(piVar19 + -0x1dbffff6);
                iVar22 = gte_stMAC0();
                gte_stSXY2();
                if (iVar22 != 0) {
                  puVar43 = ppuVar49[uVar30 * 4 + 0xb];
                  piVar19[1] = puVar21[3];
                  iVar22 = puVar23[3];
                  piVar19[4] = (int)puVar43;
                  piVar19[7] = iVar22;
                  *(char *)((int)piVar19 + 7) = cVar8 + -8;
                  *(int **)(iVar34 + 0x38c) = piVar19;
                  piVar19 = piVar19 + 10;
                }
                *(int **)(iVar34 + 0x68) = piVar19;
                bVar17 = -1 < (int)uVar51;
                uVar26 = uVar51;
                uVar51 = uVar51 - 1;
              } while (bVar17);
              uVar26 = 3;
              if (*(uint *)(iVar34 + 0x68) <= *(uint *)(iVar34 + 0x6c)) {
                uVar51 = 2;
                do {
                  puVar43 = ppuVar49[uVar26];
                  ppuVar56 = ppuVar49 + uVar26 * 4 + 8;
                  ppuVar29 = ppuVar49 + (uVar51 & 3) * 4 + 8;
                  piVar19 = *(int **)(iVar34 + 0x68);
                  gte_ldSXY0(ppuVar56 + 2);
                  gte_ldSXY1(puVar43 + 2);
                  gte_ldSXY2(ppuVar49 + 6);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  puVar21 = ppuVar56[3];
                  piVar19[1] = puVar43[3];
                  puVar23 = ppuVar49[7];
                  piVar19[4] = (int)puVar21;
                  puVar21 = ppuVar29[3];
                  piVar19[7] = (int)puVar23;
                  piVar19[10] = (int)puVar21;
                  iVar37 = gte_stMAC0();
                  gte_ldSXY0(ppuVar29 + 2);
                  uVar51 = iVar34 + 0xa5U & 3;
                  uVar31 = *(uint *)(iVar34 + 0xa4);
                  gte_nclip_b();
                  uVar38 = (uint)(short *)((int)puVar43 + 6U) & 3;
                  uVar30 = (*(int *)((iVar34 + 0xa5U) - uVar51) << (3 - uVar51) * 8 |
                           (uint)puVar21 & 0xffffffffU >> (uVar51 + 1) * 8) & -1 << (4 - uVar38) * 8
                           | *(uint *)((int)(short *)((int)puVar43 + 6U) - uVar38) >> uVar38 * 8;
                  uVar51 = (uint)(short *)((int)ppuVar56 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)ppuVar56 + 6U) - uVar51);
                  piVar19[3] = uVar30;
                  uVar38 = (int)ppuVar49 + 0x16U & 3;
                  uVar52 = *(uint *)(((int)ppuVar49 + 0x16U) - uVar38);
                  piVar19[6] = uVar31 & -1 << (4 - uVar51) * 8 | uVar28 >> uVar51 * 8;
                  uVar51 = (uint)(short *)((int)ppuVar29 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)ppuVar29 + 6U) - uVar51);
                  piVar19[0xc] = (uint)puVar23 & -1 << (4 - uVar38) * 8 | uVar52 >> uVar38 * 8;
                  piVar19[9] = uVar30 & -1 << (4 - uVar51) * 8 | uVar28 >> uVar51 * 8;
                  iVar22 = gte_stMAC0();
                  uVar38 = iVar37 - iVar22;
                  gte_stSXY0();
                  if ((int)uVar38 < 0) {
                    uVar38 = -uVar38;
                  }
                  gte_stSXY2();
                  uVar51 = uVar26;
                  if (*(ushort *)(iVar34 + 0x394) < uVar38) {
                    if (ppuVar49 != (undefined4 **)(iVar34 + 0x328)) goto code_r0x80063da4;
                  }
                  else {
                    uVar7 = *(undefined *)(iVar34 + 0xa3);
                    *piVar19 = (int)(piVar19 + -0x1cfffff3);
                    *(undefined *)((int)piVar19 + 7) = uVar7;
                    *(int **)(iVar34 + 0x38c) = piVar19;
                    *(int **)(iVar34 + 0x68) = piVar19 + 0xd;
                  }
                  while( true ) {
                    uVar26 = uVar51 - 1;
                    uVar51 = uVar51 - 2;
                    if (-1 < (int)uVar26) break;
                    if (ppuVar49 == (undefined4 **)(iVar34 + 0xe8)) {
                      uVar26 = *(uint *)(iVar34 + 0x388);
                      if (*(uint *)(iVar34 + 0x6c) < *(uint *)(iVar34 + 0x68)) {
                        *(uint *)(iVar34 + 0x68) = uVar26;
                      }
                      else if (*(uint *)(iVar34 + 0x68) != uVar26) {
                        iVar37 = *(int *)(iVar34 + 0x38c);
                        uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                        uVar38 = uVar51 & 3;
                        iVar22 = *(int *)(uVar51 - uVar38);
                        uVar51 = *(int *)(iVar34 + 0x9c) + 2;
                        uVar28 = uVar51 & 3;
                        puVar36 = (uint *)(uVar51 - uVar28);
                        *puVar36 = *puVar36 & -1 << (uVar28 + 1) * 8 |
                                   (uVar26 << 8) >> (3 - uVar28) * 8;
                        uVar26 = iVar37 + 2;
                        uVar51 = uVar26 & 3;
                        puVar36 = (uint *)(uVar26 - uVar51);
                        *puVar36 = *puVar36 & -1 << (uVar51 + 1) * 8 |
                                   (uint)(iVar22 << (3 - uVar38) * 8) >> (3 - uVar51) * 8;
                      }
                      goto LAB_80063e38;
                    }
                    pbVar2 = (byte *)((int)ppuVar49 + -0x41);
                    ppuVar49 = ppuVar49 + -0x18;
                    uVar51 = (uint)(*pbVar2 >> 6);
                  }
                } while( true );
              }
              *(undefined4 *)(iVar34 + 0x68) = *(undefined4 *)(iVar34 + 0x388);
LAB_80063e38:
              ppuVar46 = *(uint ***)(iVar27 + 0x68);
              if (*(uint ***)(iVar27 + 0x6c) <= ppuVar46) {
                *(uint ***)(iVar27 + 0x68) = ppuVar46;
                return;
              }
              goto LAB_80063eb8;
            }
            ppuVar33 = *(uint ***)(iVar27 + 0x6c);
            ppuVar46[3] = puVar36;
            ppuVar46[6] = puVar25;
            ppuVar46[0xc] = puVar24;
            uVar26 = (int)ppuVar46 + 0x25U & 3;
            puVar36 = (uint *)(((int)ppuVar46 + 0x25U) - uVar26);
            *puVar36 = *puVar36 & -1 << (uVar26 + 1) * 8 | (uint)puVar24 >> (3 - uVar26) * 8;
            ppuVar46[1] = puVar32;
            ppuVar46[4] = puVar35;
            ppuVar46[10] = puVar55;
            ppuVar46[7] = puVar58;
            uVar26 = iVar34 - 0x1eU & 3;
            iVar22 = *(int *)((iVar34 - 0x1eU) - uVar26);
            gte_stSXY1();
            ppuVar46[5] = *(uint **)(iVar27 + 0xc0);
            gte_stSXY2();
            gte_stSXY0();
            *ppuVar46 = (uint *)((uint)(iVar22 << (3 - uVar26) * 8) >> 8 | 0xc000000);
            uVar26 = iVar34 - 0x1eU & 3;
            puVar36 = (uint *)((iVar34 - 0x1eU) - uVar26);
            *puVar36 = *puVar36 & -1 << (uVar26 + 1) * 8 |
                       (uint)((int)ppuVar46 << 8) >> (3 - uVar26) * 8;
            bVar17 = ppuVar33 < ppuVar46;
            ppuVar46 = ppuVar46 + 0xd;
            if (bVar17) break;
          }
        }
      }
LAB_80063eb8:
      puVar47 = puVar47 + 10;
    } while (puVar47 != *(uint **)(iVar27 + 0x3b4));
    *(uint ***)(iVar27 + 0x68) = ppuVar46;
  }
  return;
code_r0x80062654:
  *(char *)(ppuVar49 + 7) = (char)uVar26;
  ppuVar48 = ppuVar49 + 0x18;
  *ppuVar48 = ppuVar56;
  ppuVar49[0x19] = ppuVar29;
  ppuVar49[0x1a] = ppuVar44;
  goto LAB_800623a0;
code_r0x80062e0c:
  *(char *)(ppuVar49 + 7) = (char)uVar26;
  ppuVar48 = ppuVar49 + 0x18;
  if ((uVar26 & 1) == 0) {
    *ppuVar48 = puVar21;
    ppuVar49[0x19] = ppuVar56;
    ppuVar49[0x1a] = ppuVar49 + 4;
    ppuVar49[0x1b] = ppuVar29;
  }
  else {
    *ppuVar48 = ppuVar29;
    ppuVar49[0x19] = puVar21;
    ppuVar49[0x1a] = ppuVar56;
    ppuVar49[0x1b] = ppuVar49 + 4;
  }
  goto LAB_80062a84;
code_r0x800634c4:
  *(byte *)((int)ppuVar49 + 0x1f) = *(byte *)((int)ppuVar49 + 0x1f) & 0x3f | (byte)(uVar51 << 6);
  ppuVar48 = ppuVar49 + 0x18;
  *ppuVar48 = ppuVar56;
  ppuVar49[0x19] = ppuVar29;
  ppuVar49[0x1a] = ppuVar44;
  goto LAB_800631a4;
code_r0x80063da4:
  uVar26 = *(byte *)((int)ppuVar49 + 0x1f) & 0x3f | uVar26 << 6;
  *(char *)((int)ppuVar49 + 0x1f) = (char)uVar26;
  ppuVar48 = ppuVar49 + 0x18;
  if (uVar26 == 0) {
    *ppuVar48 = puVar43;
    ppuVar49[0x19] = ppuVar56;
    ppuVar49[0x1a] = ppuVar49 + 4;
    ppuVar49[0x1b] = ppuVar29;
  }
  else {
    *ppuVar48 = ppuVar29;
    ppuVar49[0x19] = puVar43;
    ppuVar49[0x1a] = ppuVar56;
    ppuVar49[0x1b] = ppuVar49 + 4;
  }
  goto LAB_80063954;
}

void FUN_80063ef4(ushort *param_1,undefined4 param_2,uint param_3,uint param_4)

{

  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int in_v1;
  undefined4 uVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 **ppuVar28;
  int *piVar29;
  ushort uVar30;
  int iVar31;
  undefined4 **ppuVar32;
  uint uVar33;
  undefined2 *puVar34;
  uint *puVar35;
  uint in_t1;
  uint uVar36;
  undefined4 *puVar37;
  SVECTOR *pSVar38;
  undefined4 **ppuVar39;
  uint in_t2;
  uint uVar40;
  undefined4 **ppuVar41;
  undefined4 *puVar42;
  SVECTOR *pSVar43;
  SVECTOR *pSVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  undefined4 **ppuVar47;
  uint *puVar48;
  undefined4 *puVar49;
  int in_t4;
  undefined4 *puVar50;
  uint *puVar51;
  int in_t5;
  undefined4 in_t7;
  uint *puVar52;
  int unaff_s0;
  ushort *puVar53;
  int iVar54;
  uint uVar55;
  undefined2 local_1430 [8];
  undefined auStack_1420 [5128];

  if (*param_1 != 0) {
    puVar34 = local_1430;
    pSVar43 = *(SVECTOR **)(param_1 + 10);
    DAT_1f800070 = auStack_1420;
    iVar54 = (int)(uint)DAT_1f800062 >> 1;
    pSVar38 = pSVar43 + *param_1 + 1;
    puVar53 = param_1;
    gte_ldv0(pSVar43);
    uVar19._0_2_ = pSVar43[1].vz;
    uVar19._2_2_ = pSVar43[1].pad;
    gte_rtps_b();

    do {
      uVar30 = (ushort)param_3;
      *puVar34 = (short)in_t1;
      if ((int)in_t1 < 0) {
        in_t1 = -in_t1;
      }
      if (in_v1 < 0) {
        uVar30 = uVar30 | 2;
      }
      puVar34[1] = (short)in_t2;
      if ((int)in_t2 < 0) {
        in_t2 = -in_t2;
      }
      if (in_t5 < 0) {
        uVar30 = uVar30 | 4;
      }
      puVar34[3] = (short)param_4;
      if ((int)param_4 < 0) {
        param_4 = -param_4;
      }
      if ((int)param_1 < 0) {
        uVar30 = uVar30 | 8;
      }
      *(uint *)(puVar34 + 6) = in_t1 | in_t2 | param_4;
      if (in_t4 < 0) {
        uVar30 = uVar30 | 0x10;
      }
      *(undefined4 *)(puVar34 + 4) = in_t7;
      if (unaff_s0 < 0) {
        uVar30 = uVar30 | 0x20;
      }

      in_t1 = gte_stIR1();
      in_t2 = gte_stIR2();
      param_4 = gte_stIR3();
      unaff_s0 = gte_stFLAG();
      in_t7 = gte_stSXY2();
      gte_llir_b();
      uVar27._0_2_ = pSVar43[1].vx;
      uVar27._2_2_ = pSVar43[1].vy;
      gte_ldVXY1(in_t1 & 0xffff | in_t2 << 0x10);
      gte_ldVZ1(param_4);
      in_v1 = gte_stIR1();
      in_t5 = gte_stIR2();
      gte_lcv1_b();
      puVar34[2] = uVar30;
      gte_ldVXY0(uVar27);
      gte_ldVZ0(uVar19);
      pSVar44 = pSVar43 + 1;
      puVar34 = puVar34 + 8;
      uVar19._0_2_ = pSVar43[2].vz;
      uVar19._2_2_ = pSVar43[2].pad;
      param_1 = (ushort *)gte_stIR1();
      in_t4 = gte_stIR2();
      gte_rtps_b();
      param_3 = (uint)((int)param_4 < iVar54);
      pSVar43 = pSVar44;
    } while (pSVar44 != pSVar38);

    FUN_800616c4(puVar53);
    gte_ldtr(0,0,0);
    gte_ldR11R12(0x1000);
    gte_ldR13R21(0);
    gte_ldR22R23(0x1000);
    gte_ldR31R32(0);
    gte_ldR33(0x1000);

    puVar52 = *(uint **)(puVar53 + 0xe);
    if (puVar53[2] != 0) {
      puVar35 = puVar52 + (uint)puVar53[2] * 4;
      do {

        uVar17 = *puVar52;
        uVar55 = puVar52[1];

        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (uVar17 & 0xff) * 0x10);
        DAT_1f8000ec = (uint *)(DAT_1f800070 + ((int)uVar17 >> 4 & 0xff0));
        DAT_1f8000f0 = (undefined4 *)(DAT_1f800070 + ((int)uVar17 >> 0xc & 0xff0));

        uVar17 = DAT_1f8000e8[1];
        uVar36 = DAT_1f8000ec[1];
        uVar40 = DAT_1f8000f0[1];

        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar17 >> 0x10;
        DAT_1f8000b4._3_1_ = (undefined)uVar17;
        DAT_1f8000bc = DAT_1f8000bc & 0xffff0000 | uVar36 >> 0x10;
        DAT_1f8000c4._3_1_ = (undefined)uVar36;
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar40 >> 0x10;
        DAT_1f8000d4._3_1_ = (undefined)uVar40;

        if ((uVar17 & uVar36 & uVar40 & 0x1f) == 0) {
          DAT_1f8000b0 = DAT_1f8000e8[2];
          DAT_1f8000c0 = DAT_1f8000ec[2];
          DAT_1f8000d0 = DAT_1f8000f0[2];
          gte_ldSXY0(DAT_1f8000b0);
          gte_ldSXY1(DAT_1f8000d0);
          gte_ldSXY2(DAT_1f8000c0);
          gte_nclip_b();

          uVar24 = uVar17;
          if ((uint)((int)uVar17 < (int)uVar36) == (uVar55 & 1)) {
            uVar24 = uVar36;
          }
          if ((uint)((int)uVar24 < (int)uVar40) == (uVar55 & 1)) {
            uVar24 = uVar40;
          }
          uVar24 = ((int)uVar24 >> 0x10) << (DAT_1f800098 & 0x1f);
          if ((int)uVar24 < 0) {
            uVar24 = 0;
          }
          iVar54 = (uVar24 >> 0xd) << 2;
          if (0xfff < uVar24 >> 0xd) {
            iVar54 = 0x3ffc;
          }
          iVar54 = DAT_1f800064 + iVar54 + (uVar55 & 0x1e) * 2;

          uVar24 = gte_stMAC0();
          uVar17 = (uVar17 | uVar36 | uVar40) & 0x20;
          if ((uVar24 | uVar17) != 0) {
            uVar24 = uVar24 - 1;
            if (DAT_1f800398 < '\0') {
              uVar24 = -uVar24;
            }
            if (-1 < (int)(uVar24 & uVar17 - 0x20)) {
              DAT_1f8000a8 = *DAT_1f8000e8;
              uVar36 = *DAT_1f8000ec;
              DAT_1f8000c8 = *DAT_1f8000f0;
              DAT_1f8000b8 = uVar36;
              if (uVar17 == 0) {
                if ((int)(uVar55 & (int)DAT_1f800399) < 0) {

                  uVar6 = *(undefined2 *)((puVar52[2] & 0x3fe) + DAT_1f800074);
                  uVar7 = *(undefined2 *)((puVar52[2] >> 9 & 0x3fe) + DAT_1f800074);
                  *(undefined2 *)(DAT_1f800068 + 3) =
                       *(undefined2 *)((uVar55 >> 4 & 0x3fe) + DAT_1f800074);
                  *(undefined2 *)(DAT_1f800068 + 5) = uVar6;
                  *(undefined2 *)(DAT_1f800068 + 7) = uVar7;
                  uVar36 = DAT_1f8000d0;
                  uVar17 = DAT_1f8000c0;
                  DAT_1f800068[2] = DAT_1f8000b0;
                  DAT_1f800068[4] = uVar17;
                  DAT_1f800068[6] = uVar36;
                  uVar6 = DAT_1f8003ae;
                  sVar9 = DAT_1f8003ac;
                  uVar36 = (uint)DAT_1f8003ac;
                  DAT_1f800068[1] = DAT_1f8003a4;
                  *(short *)((int)DAT_1f800068 + 0xe) = sVar9;
                  *(undefined2 *)((int)DAT_1f800068 + 0x16) = uVar6;
                  *(undefined *)((int)DAT_1f800068 + 3) = 7;
                  uVar17 = iVar54 - 0x1eU & 3;
                  uVar36 = *(int *)((iVar54 - 0x1eU) - uVar17) << (3 - uVar17) * 8 |
                           uVar36 & 0xffffffffU >> (uVar17 + 1) * 8;
                  uVar17 = iVar54 - 0x1eU & 3;
                  puVar48 = (uint *)((iVar54 - 0x1eU) - uVar17);
                  *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                             (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
                  uVar17 = (int)DAT_1f800068 + 2U & 3;
                  puVar48 = (uint *)(((int)DAT_1f800068 + 2U) - uVar17);
                  *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
                  DAT_1f800068 = DAT_1f800068 + 8;
                }

                puVar48 = DAT_1f80006c;
                uVar17 = iVar54 - 0x1eU & 3;
                iVar26 = *(int *)((iVar54 - 0x1eU) - uVar17);
                DAT_1f800068[1] = puVar52[3];
                uVar55 = DAT_1f8000d0;
                uVar40 = DAT_1f8000c0;
                DAT_1f800068[2] = DAT_1f8000b0;
                DAT_1f800068[3] = uVar40;
                DAT_1f800068[4] = uVar55;
                *DAT_1f800068 =
                     (iVar26 << (3 - uVar17) * 8 | uVar36 & 0xffffffffU >> (uVar17 + 1) * 8) >> 8 |
                     0x4000000;
                bVar15 = puVar48 < DAT_1f800068;
                uVar17 = iVar54 - 0x1eU & 3;
                puVar48 = (uint *)((iVar54 - 0x1eU) - uVar17);
                *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                           (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
                DAT_1f800068 = DAT_1f800068 + 5;
                if (bVar15) break;
              }
            }
          }
        }
        puVar52 = puVar52 + 4;
      } while (puVar52 != puVar35);
    }

    puVar52 = *(uint **)(puVar53 + 0x10);
    if (puVar53[3] != 0) {
      puVar35 = puVar52 + (uint)puVar53[3] * 4;
      do {

        uVar17 = *puVar52;
        uVar55 = puVar52[1];

        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (uVar17 & 0xff) * 0x10);
        DAT_1f800148 = (uint *)(DAT_1f800070 + ((int)uVar17 >> 4 & 0xff0));
        DAT_1f8001a8 = (undefined4 *)(DAT_1f800070 + ((int)uVar17 >> 0xc & 0xff0));
        DAT_1f800208 = (undefined4 *)(DAT_1f800070 + ((int)uVar17 >> 0x14 & 0xff0));

        uVar17 = DAT_1f8000e8[1];
        uVar36 = DAT_1f800148[1];
        uVar40 = DAT_1f8001a8[1];
        uVar24 = DAT_1f800208[1];

        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar17 >> 0x10;
        DAT_1f8000b4._3_1_ = (undefined)uVar17;
        DAT_1f8000bc = DAT_1f8000bc & 0xffff0000 | uVar36 >> 0x10;
        DAT_1f8000c4._3_1_ = (undefined)uVar36;
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar40 >> 0x10;
        DAT_1f8000d4._3_1_ = (undefined)uVar40;
        DAT_1f8000dc = DAT_1f8000dc & 0xffff0000 | uVar24 >> 0x10;
        DAT_1f8000e4._3_1_ = (undefined)uVar24;

        if ((uVar17 & uVar36 & uVar40 & uVar24 & 0x1f) == 0) {
          DAT_1f8000b0 = DAT_1f8000e8[2];
          DAT_1f8000c0 = DAT_1f800148[2];
          DAT_1f8000d0 = DAT_1f8001a8[2];
          DAT_1f8000e0 = DAT_1f800208[2];
          gte_ldSXY0(DAT_1f8000c0);
          gte_ldSXY1(DAT_1f8000d0);
          gte_ldSXY2(DAT_1f8000b0);
          gte_nclip_b();
          uVar18 = uVar55 & 1;
          uVar25 = uVar17;
          if ((int)uVar17 < (int)uVar36 == uVar18) {
            uVar25 = uVar36;
          }
          if ((int)uVar25 < (int)uVar40 == uVar18) {
            uVar25 = uVar40;
          }
          iVar54 = gte_stMAC0();
          gte_ldSXYP(DAT_1f8000e0);
          gte_nclip_b();
          if ((int)uVar25 < (int)uVar24 == uVar18) {
            uVar25 = uVar24;
          }

          uVar25 = ((int)uVar25 >> 0x10) << (DAT_1f800098 & 0x1f);
          if ((int)uVar25 < 0) {
            uVar25 = 0;
          }
          iVar26 = (uVar25 >> 0xd) << 2;
          if (0xfff < uVar25 >> 0xd) {
            iVar26 = 0x3ffc;
          }
          iVar26 = DAT_1f800064 + iVar26 + (uVar55 & 0x1e) * 2;

          uVar25 = gte_stMAC0();
          uVar17 = (uVar17 | uVar36 | uVar40 | uVar24) & 0x20;
          if ((-iVar54 | uVar25 | uVar17) != 0) {
            uVar40 = -iVar54 - 1;
            uVar36 = uVar40 & uVar25 - 1;
            if (DAT_1f800398 < '\0') {
              uVar36 = ~(uVar40 | uVar25 - 1);
            }
            if (-1 < (int)(uVar36 & uVar17 - 0x20)) {

              DAT_1f8000a8 = *DAT_1f8000e8;
              uVar36 = *DAT_1f800148;
              DAT_1f8000c8 = *DAT_1f8001a8;
              _DAT_1f8000d8 = *DAT_1f800208;
              DAT_1f8000b8 = uVar36;

              if (uVar17 == 0) {
                if ((int)(uVar55 & (int)DAT_1f800399) < 0) {

                  uVar17 = puVar52[2];
                  uVar6 = *(undefined2 *)((uVar17 & 0x3fe) + DAT_1f800074);
                  uVar7 = *(undefined2 *)((uVar17 >> 9 & 0x3fe) + DAT_1f800074);
                  uVar8 = *(undefined2 *)((uVar17 >> 0x12 & 0x3fe) + DAT_1f800074);
                  *(undefined2 *)(DAT_1f800068 + 3) =
                       *(undefined2 *)((uVar55 >> 4 & 0x3fe) + DAT_1f800074);
                  *(undefined2 *)(DAT_1f800068 + 5) = uVar6;
                  *(undefined2 *)(DAT_1f800068 + 9) = uVar7;
                  *(undefined2 *)(DAT_1f800068 + 7) = uVar8;

                  uVar40 = DAT_1f8000e0;
                  uVar36 = DAT_1f8000d0;
                  uVar17 = DAT_1f8000c0;
                  DAT_1f800068[2] = DAT_1f8000b0;
                  DAT_1f800068[4] = uVar17;
                  DAT_1f800068[8] = uVar36;
                  DAT_1f800068[6] = uVar40;

                  uVar6 = DAT_1f8003ae;
                  sVar9 = DAT_1f8003ac;
                  uVar36 = (uint)DAT_1f8003ac;
                  DAT_1f800068[1] = DAT_1f8003a8;
                  *(short *)((int)DAT_1f800068 + 0xe) = sVar9;
                  *(undefined2 *)((int)DAT_1f800068 + 0x16) = uVar6;
                  *(undefined *)((int)DAT_1f800068 + 3) = 9;

                  uVar17 = iVar26 - 0x1eU & 3;
                  uVar36 = *(int *)((iVar26 - 0x1eU) - uVar17) << (3 - uVar17) * 8 |
                           uVar36 & 0xffffffffU >> (uVar17 + 1) * 8;
                  uVar17 = iVar26 - 0x1eU & 3;
                  puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
                  *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                             (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
                  uVar17 = (int)DAT_1f800068 + 2U & 3;
                  puVar48 = (uint *)(((int)DAT_1f800068 + 2U) - uVar17);
                  *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
                  DAT_1f800068 = DAT_1f800068 + 10;
                }

                puVar48 = DAT_1f80006c;
                uVar17 = iVar26 - 0x1eU & 3;
                iVar54 = *(int *)((iVar26 - 0x1eU) - uVar17);
                DAT_1f800068[1] = puVar52[3];

                uVar24 = DAT_1f8000e0;
                uVar55 = DAT_1f8000d0;
                uVar40 = DAT_1f8000c0;
                DAT_1f800068[2] = DAT_1f8000b0;
                DAT_1f800068[3] = uVar40;
                DAT_1f800068[5] = uVar55;
                DAT_1f800068[4] = uVar24;

                *DAT_1f800068 =
                     (iVar54 << (3 - uVar17) * 8 | uVar36 & 0xffffffffU >> (uVar17 + 1) * 8) >> 8 |
                     0x5000000;
                bVar15 = puVar48 < DAT_1f800068;
                uVar17 = iVar26 - 0x1eU & 3;
                puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
                *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                           (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
                DAT_1f800068 = DAT_1f800068 + 6;
                if (bVar15) break;
              }
            }
          }
        }
        puVar52 = puVar52 + 4;
      } while (puVar52 != puVar35);
    }

    puVar52 = *(uint **)(puVar53 + 0x12);
    if (puVar53[4] != 0) {
      puVar35 = puVar52 + (uint)puVar53[4] * 6;
      do {

        uVar17 = *puVar52;
        uVar55 = puVar52[1];

        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (uVar17 & 0xff) * 0x10);
        DAT_1f8000ec = (uint *)(DAT_1f800070 + ((int)uVar17 >> 4 & 0xff0));
        DAT_1f8000f0 = (undefined4 *)(DAT_1f800070 + ((int)uVar17 >> 0xc & 0xff0));

        uVar17 = DAT_1f8000e8[1];
        uVar36 = DAT_1f8000ec[1];
        uVar40 = DAT_1f8000f0[1];

        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar17 >> 0x10;
        DAT_1f8000b4._3_1_ = (undefined)uVar17;
        DAT_1f8000bc = DAT_1f8000bc & 0xffff0000 | uVar36 >> 0x10;
        DAT_1f8000c4._3_1_ = (undefined)uVar36;
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar40 >> 0x10;
        DAT_1f8000d4._3_1_ = (undefined)uVar40;

        if ((uVar17 & uVar36 & uVar40 & 0x1f) == 0) {
          DAT_1f8000b0 = DAT_1f8000e8[2];
          DAT_1f8000c0 = DAT_1f8000ec[2];
          DAT_1f8000d0 = DAT_1f8000f0[2];
          gte_ldSXY0(DAT_1f8000b0);
          gte_ldSXY1(DAT_1f8000d0);
          gte_ldSXY2(DAT_1f8000c0);
          gte_nclip_b();

          uVar24 = uVar17;
          if ((uint)((int)uVar17 < (int)uVar36) == (uVar55 & 1)) {
            uVar24 = uVar36;
          }
          if ((uint)((int)uVar24 < (int)uVar40) == (uVar55 & 1)) {
            uVar24 = uVar40;
          }
          uVar24 = ((int)uVar24 >> 0x10) << (DAT_1f800098 & 0x1f);
          if ((int)uVar24 < 0) {
            uVar24 = 0;
          }
          iVar54 = (uVar24 >> 0xd) << 2;
          if (0xfff < uVar24 >> 0xd) {
            iVar54 = 0x3ffc;
          }
          iVar54 = DAT_1f800064 + iVar54 + (uVar55 & 0x1e) * 2;

          uVar24 = gte_stMAC0();
          uVar17 = (uVar17 | uVar36 | uVar40) & 0x20;
          if ((uVar24 | uVar17) != 0) {
            uVar24 = uVar24 - 1;
            if (DAT_1f800398 < '\0') {
              uVar24 = -uVar24;
            }
            if (-1 < (int)(uVar24 & uVar17 - 0x20)) {

              DAT_1f8000a8 = *DAT_1f8000e8;
              DAT_1f8000b8 = *DAT_1f8000ec;
              DAT_1f8000c8 = *DAT_1f8000f0;
              if (uVar17 == 0) {
                uVar17 = 0;
                if ((int)(uVar55 & (int)DAT_1f800399) < 0) {

                  sVar9 = *(short *)((puVar52[2] & 0x3fe) + DAT_1f800074);
                  uVar17 = (uint)sVar9;
                  uVar6 = *(undefined2 *)((puVar52[2] >> 9 & 0x3fe) + DAT_1f800074);
                  *(undefined2 *)(DAT_1f800068 + 3) =
                       *(undefined2 *)((uVar55 >> 4 & 0x3fe) + DAT_1f800074);
                  *(short *)(DAT_1f800068 + 5) = sVar9;
                  *(undefined2 *)(DAT_1f800068 + 7) = uVar6;
                  uVar40 = DAT_1f8000d0;
                  uVar36 = DAT_1f8000c0;
                  DAT_1f800068[2] = DAT_1f8000b0;
                  DAT_1f800068[4] = uVar36;
                  DAT_1f800068[6] = uVar40;
                  uVar6 = DAT_1f8003ae;
                  sVar9 = DAT_1f8003ac;
                  uVar55 = (uint)DAT_1f8003ac;
                  DAT_1f800068[1] = DAT_1f8003a4;
                  *(short *)((int)DAT_1f800068 + 0xe) = sVar9;
                  *(undefined2 *)((int)DAT_1f800068 + 0x16) = uVar6;
                  *(undefined *)((int)DAT_1f800068 + 3) = 7;
                  uVar36 = iVar54 - 0x1eU & 3;
                  iVar26 = *(int *)((iVar54 - 0x1eU) - uVar36);
                  uVar40 = iVar54 - 0x1eU & 3;
                  puVar48 = (uint *)((iVar54 - 0x1eU) - uVar40);
                  *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                             (uint)((int)DAT_1f800068 << 8) >> (3 - uVar40) * 8;
                  uVar40 = (int)DAT_1f800068 + 2U & 3;
                  puVar48 = (uint *)(((int)DAT_1f800068 + 2U) - uVar40);
                  *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                             (iVar26 << (3 - uVar36) * 8 | uVar55 & 0xffffffffU >> (uVar36 + 1) * 8)
                             >> (3 - uVar40) * 8;
                  DAT_1f800068 = DAT_1f800068 + 8;
                }

                puVar48 = DAT_1f80006c;
                uVar36 = iVar54 - 0x1eU & 3;
                iVar26 = *(int *)((iVar54 - 0x1eU) - uVar36);
                uVar40 = puVar52[4];
                uVar55 = puVar52[5];
                DAT_1f800068[1] = puVar52[3];
                DAT_1f800068[3] = uVar40;
                DAT_1f800068[5] = uVar55;
                uVar55 = DAT_1f8000d0;
                uVar40 = DAT_1f8000c0;
                DAT_1f800068[2] = DAT_1f8000b0;
                DAT_1f800068[4] = uVar40;
                DAT_1f800068[6] = uVar55;
                *DAT_1f800068 =
                     (iVar26 << (3 - uVar36) * 8 | uVar17 & 0xffffffffU >> (uVar36 + 1) * 8) >> 8 |
                     0x6000000;
                bVar15 = puVar48 < DAT_1f800068;
                uVar17 = iVar54 - 0x1eU & 3;
                puVar48 = (uint *)((iVar54 - 0x1eU) - uVar17);
                *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                           (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
                DAT_1f800068 = DAT_1f800068 + 7;
                if (bVar15) break;
              }
            }
          }
        }
        puVar52 = puVar52 + 6;
      } while (puVar52 != puVar35);
    }

    puVar52 = *(uint **)(puVar53 + 0x14);
    if (puVar53[5] != 0) {
      puVar35 = puVar52 + (uint)puVar53[5] * 7;
      do {

        uVar17 = *puVar52;
        uVar24 = puVar52[1];

        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (uVar17 & 0xff) * 0x10);
        DAT_1f800148 = (uint *)(DAT_1f800070 + ((int)uVar17 >> 4 & 0xff0));
        DAT_1f8001a8 = (undefined4 *)(DAT_1f800070 + ((int)uVar17 >> 0xc & 0xff0));
        DAT_1f800208 = (undefined4 *)(DAT_1f800070 + ((int)uVar17 >> 0x14 & 0xff0));

        uVar17 = DAT_1f8000e8[1];
        uVar36 = DAT_1f800148[1];
        uVar40 = DAT_1f8001a8[1];
        uVar55 = DAT_1f800208[1];

        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar17 >> 0x10;
        DAT_1f8000b4._3_1_ = (undefined)uVar17;
        DAT_1f8000bc = DAT_1f8000bc & 0xffff0000 | uVar36 >> 0x10;
        DAT_1f8000c4._3_1_ = (undefined)uVar36;
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar40 >> 0x10;
        DAT_1f8000d4._3_1_ = (undefined)uVar40;
        DAT_1f8000dc = DAT_1f8000dc & 0xffff0000 | uVar55 >> 0x10;
        DAT_1f8000e4._3_1_ = (undefined)uVar55;

        if ((uVar17 & uVar36 & uVar40 & uVar55 & 0x1f) == 0) {
          DAT_1f8000b0 = DAT_1f8000e8[2];
          DAT_1f8000c0 = DAT_1f800148[2];
          DAT_1f8000d0 = DAT_1f8001a8[2];
          DAT_1f8000e0 = DAT_1f800208[2];
          gte_ldSXY0(DAT_1f8000c0);
          gte_ldSXY1(DAT_1f8000d0);
          gte_ldSXY2(DAT_1f8000b0);
          gte_nclip_b();

          uVar18 = uVar24 & 1;
          uVar25 = uVar17;
          if ((int)uVar17 < (int)uVar36 == uVar18) {
            uVar25 = uVar36;
          }
          if ((int)uVar25 < (int)uVar40 == uVar18) {
            uVar25 = uVar40;
          }
          iVar54 = gte_stMAC0();
          gte_ldSXYP(DAT_1f8000e0);
          gte_nclip_b();
          if ((int)uVar25 < (int)uVar55 == uVar18) {
            uVar25 = uVar55;
          }
          uVar25 = ((int)uVar25 >> 0x10) << (DAT_1f800098 & 0x1f);
          if ((int)uVar25 < 0) {
            uVar25 = 0;
          }
          iVar26 = (uVar25 >> 0xd) << 2;
          if (0xfff < uVar25 >> 0xd) {
            iVar26 = 0x3ffc;
          }
          iVar26 = DAT_1f800064 + iVar26 + (uVar24 & 0x1e) * 2;

          uVar25 = gte_stMAC0();
          uVar17 = (uVar17 | uVar36 | uVar40 | uVar55) & 0x20;
          if ((-iVar54 | uVar25 | uVar17) != 0) {
            uVar40 = -iVar54 - 1;
            uVar36 = uVar40 & uVar25 - 1;
            if (DAT_1f800398 < '\0') {
              uVar36 = ~(uVar40 | uVar25 - 1);
            }
            if (-1 < (int)(uVar36 & uVar17 - 0x20)) {

              DAT_1f8000a8 = *DAT_1f8000e8;
              DAT_1f8000b8 = *DAT_1f800148;
              DAT_1f8000c8 = *DAT_1f8001a8;
              _DAT_1f8000d8 = *DAT_1f800208;
              if (uVar17 == 0) {
                uVar17 = 0;
                if ((int)(uVar24 & (int)DAT_1f800399) < 0) {

                  uVar36 = puVar52[2];
                  sVar9 = *(short *)((uVar36 & 0x3fe) + DAT_1f800074);
                  uVar17 = (uint)sVar9;
                  uVar6 = *(undefined2 *)((uVar36 >> 9 & 0x3fe) + DAT_1f800074);
                  uVar7 = *(undefined2 *)((uVar36 >> 0x12 & 0x3fe) + DAT_1f800074);
                  *(undefined2 *)(DAT_1f800068 + 3) =
                       *(undefined2 *)((uVar24 >> 4 & 0x3fe) + DAT_1f800074);
                  *(short *)(DAT_1f800068 + 5) = sVar9;
                  *(undefined2 *)(DAT_1f800068 + 9) = uVar6;
                  *(undefined2 *)(DAT_1f800068 + 7) = uVar7;
                  uVar55 = DAT_1f8000e0;
                  uVar40 = DAT_1f8000d0;
                  uVar36 = DAT_1f8000c0;
                  DAT_1f800068[2] = DAT_1f8000b0;
                  DAT_1f800068[4] = uVar36;
                  DAT_1f800068[8] = uVar40;
                  DAT_1f800068[6] = uVar55;
                  uVar6 = DAT_1f8003ae;
                  sVar9 = DAT_1f8003ac;
                  uVar55 = (uint)DAT_1f8003ac;
                  DAT_1f800068[1] = DAT_1f8003a8;
                  *(short *)((int)DAT_1f800068 + 0xe) = sVar9;
                  *(undefined2 *)((int)DAT_1f800068 + 0x16) = uVar6;
                  *(undefined *)((int)DAT_1f800068 + 3) = 9;
                  uVar36 = iVar26 - 0x1eU & 3;
                  iVar54 = *(int *)((iVar26 - 0x1eU) - uVar36);
                  uVar40 = iVar26 - 0x1eU & 3;
                  puVar48 = (uint *)((iVar26 - 0x1eU) - uVar40);
                  *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                             (uint)((int)DAT_1f800068 << 8) >> (3 - uVar40) * 8;
                  uVar40 = (int)DAT_1f800068 + 2U & 3;
                  puVar48 = (uint *)(((int)DAT_1f800068 + 2U) - uVar40);
                  *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                             (iVar54 << (3 - uVar36) * 8 | uVar55 & 0xffffffffU >> (uVar36 + 1) * 8)
                             >> (3 - uVar40) * 8;
                  DAT_1f800068 = DAT_1f800068 + 10;
                }

                puVar48 = DAT_1f80006c;
                uVar36 = iVar26 - 0x1eU & 3;
                iVar54 = *(int *)((iVar26 - 0x1eU) - uVar36);
                uVar40 = puVar52[4];
                uVar55 = puVar52[5];
                uVar24 = puVar52[6];
                DAT_1f800068[1] = puVar52[3];
                DAT_1f800068[3] = uVar40;
                DAT_1f800068[7] = uVar55;
                DAT_1f800068[5] = uVar24;
                uVar24 = DAT_1f8000e0;
                uVar55 = DAT_1f8000d0;
                uVar40 = DAT_1f8000c0;
                DAT_1f800068[2] = DAT_1f8000b0;
                DAT_1f800068[4] = uVar40;
                DAT_1f800068[8] = uVar55;
                DAT_1f800068[6] = uVar24;
                *DAT_1f800068 =
                     (iVar54 << (3 - uVar36) * 8 | uVar17 & 0xffffffffU >> (uVar36 + 1) * 8) >> 8 |
                     0x8000000;
                bVar15 = puVar48 < DAT_1f800068;
                uVar17 = iVar26 - 0x1eU & 3;
                puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
                *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                           (uint)((int)DAT_1f800068 << 8) >> (3 - uVar17) * 8;
                DAT_1f800068 = DAT_1f800068 + 9;
                if (bVar15) break;
              }
            }
          }
        }
        puVar52 = puVar52 + 7;
      } while (puVar52 != puVar35);
    }

    puVar52 = *(uint **)(puVar53 + 0x16);
    iVar54 = 0x1f800000;
    if (puVar53[6] != 0) {
      DAT_1f800394 = 0x480;
      DAT_1f8003b4 = puVar52 + (uint)puVar53[6] * 7;
      puVar35 = DAT_1f800068;
      do {

        iVar26 = *(int *)(iVar54 + 0x70);
        uVar17 = *puVar52;
        uVar24 = puVar52[1];

        puVar50 = (undefined4 *)((uVar17 & 0xff) * 0x10 + iVar26);
        puVar45 = (undefined4 *)(((int)uVar17 >> 4 & 0xff0U) + iVar26);
        puVar37 = (undefined4 *)(((int)uVar17 >> 0xc & 0xff0U) + iVar26);

        uVar36 = puVar50[1];
        uVar40 = puVar45[1];
        uVar55 = puVar37[1];

        *(undefined4 **)(iVar54 + 0xe8) = puVar50;
        *(undefined4 **)(iVar54 + 0xec) = puVar45;
        *(undefined4 **)(iVar54 + 0xf0) = puVar37;
        uVar17 = iVar54 + 0xadU & 3;
        puVar48 = (uint *)((iVar54 + 0xadU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xb7) = (char)uVar36;
        uVar17 = iVar54 + 0xbdU & 3;
        puVar48 = (uint *)((iVar54 + 0xbdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar40 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 199) = (char)uVar40;
        uVar17 = iVar54 + 0xcdU & 3;
        puVar48 = (uint *)((iVar54 + 0xcdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar55 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xd7) = (char)uVar55;

        if ((uVar36 & uVar40 & uVar55 & 0x1f) == 0) {
          uVar19 = puVar45[2];
          uVar27 = puVar37[2];
          gte_ldSXY0(puVar50[2]);
          gte_ldSXY1(uVar27);
          gte_ldSXY2(uVar19);
          gte_nclip_b();

          *(undefined4 *)(iVar54 + 0xb0) = puVar50[2];
          *(undefined4 *)(iVar54 + 0xc0) = uVar19;
          *(undefined4 *)(iVar54 + 0xd0) = uVar27;

          uVar17 = uVar36;
          if ((uint)((int)uVar36 < (int)uVar40) == (uVar24 & 1)) {
            uVar17 = uVar40;
          }
          if ((uint)((int)uVar17 < (int)uVar55) == (uVar24 & 1)) {
            uVar17 = uVar55;
          }
          uVar17 = ((int)uVar17 >> 0x10) << (*(uint *)(iVar54 + 0x98) & 0x1f);
          if ((int)uVar17 < 0) {
            uVar17 = 0;
          }
          iVar26 = (uVar17 >> 0xd) << 2;
          if (0xfff < uVar17 >> 0xd) {
            iVar26 = 0x3ffc;
          }
          iVar26 = *(int *)(iVar54 + 100) + iVar26 + (uVar24 & 0x1e) * 2;

          uVar17 = gte_stMAC0();
          uVar36 = (uVar36 | uVar40 | uVar55) & 0x20;
          if ((uVar17 | uVar36) != 0) {
            uVar40 = uVar17 - 1;
            if (*(char *)(iVar54 + 0x398) < '\0') {
              uVar40 = -uVar40;
            }
            if (-1 < (int)(uVar40 & uVar36 - 0x20)) {
              uVar19 = *puVar45;
              uVar27 = *puVar37;
              *(undefined4 *)(iVar54 + 0xa8) = *puVar50;

              *(undefined4 *)(iVar54 + 0xb8) = uVar19;
              *(undefined4 *)(iVar54 + 200) = uVar27;
              if ((int)uVar17 < 0) {
                uVar17 = -uVar17;
              }
              if (uVar36 != 0) {
LAB_80064dbc:

                *(uint **)(iVar54 + 0x68) = puVar35;
                *(int *)(iVar54 + 0x9c) = iVar26 + -0x20;
                *(uint *)(iVar54 + 0xa0) = puVar52[3];
                uVar36 = puVar52[4];
                uVar40 = puVar52[5];
                uVar17 = puVar52[6];
                *(short *)(iVar54 + 0xae) = (short)uVar36;
                *(short *)(iVar54 + 0xbe) = (short)uVar40;
                *(short *)(iVar54 + 0xce) = (short)uVar17;
                *(uint *)(iVar54 + 0xa4) = uVar40;
                uVar17 = iVar54 + 0xa5U & 3;
                puVar35 = (uint *)((iVar54 + 0xa5U) - uVar17);
                *puVar35 = *puVar35 & -1 << (uVar17 + 1) * 8 |
                           uVar36 + ((int)uVar24 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                           *(int *)(iVar54 + 0x39c) >> (3 - uVar17) * 8;
                DAT_1f800388 = DAT_1f800068;

                gte_stSXY0();
                gte_stSXY1();
                gte_stSXY2();
                puVar37 = &DAT_1f8000a8;
                iVar26 = 0x1f800000;
                ppuVar41 = &DAT_1f8000e8;
                ppuVar28 = &DAT_1f8000e8;
                pbVar21 = (byte *)((int)&DAT_1f8000b4 + 3);

                do {
                  bVar23 = *pbVar21;
                  *ppuVar28 = puVar37;
                  ppuVar28 = ppuVar28 + 1;
                  if ((bVar23 & 0x20) != 0) {
                    gte_ldVXY0(puVar37);
                    gte_ldVZ0(pbVar21 + -0xb);
                    gte_rtps_b();
                    iVar20 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar20) {
                      *pbVar21 = bVar23 & 0x1f;
                    }
                  }
                  pbVar21 = pbVar21 + 0x10;
                  puVar37 = puVar37 + 4;
                } while (ppuVar28 != (undefined4 **)&DAT_1f8000f4);

                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390._0_3_ = SUB43(DAT_1f800388,0);
                DAT_1f800390 = CONCAT13(7,(undefined3)DAT_1f800390);
LAB_80064ea0:

                pSVar38 = (SVECTOR *)(ppuVar41 + 4);
                puVar37 = *ppuVar41;
                puVar45 = ppuVar41[1];
                puVar50 = ppuVar41[2];

                sVar9 = *(short *)puVar37;
                sVar10 = *(short *)puVar45;
                sVar11 = *(short *)puVar50;
                *(short *)(ppuVar41 + 4) = (short)((int)sVar9 + (int)sVar10 >> 1);
                *(short *)(ppuVar41 + 8) = (short)((int)sVar10 + (int)sVar11 >> 1);
                *(short *)(ppuVar41 + 0xc) = (short)((int)sVar11 + (int)sVar9 >> 1);

                sVar9 = *(short *)((int)puVar37 + 2);
                sVar10 = *(short *)((int)puVar45 + 2);
                sVar11 = *(short *)((int)puVar50 + 2);
                *(short *)((int)ppuVar41 + 0x12) = (short)((int)sVar9 + (int)sVar10 >> 1);
                *(short *)((int)ppuVar41 + 0x22) = (short)((int)sVar10 + (int)sVar11 >> 1);
                *(short *)((int)ppuVar41 + 0x32) = (short)((int)sVar11 + (int)sVar9 >> 1);

                sVar9 = *(short *)(puVar37 + 1);
                sVar10 = *(short *)(puVar45 + 1);
                sVar11 = *(short *)(puVar50 + 1);
                *(short *)(ppuVar41 + 5) = (short)((int)sVar9 + (int)sVar10 >> 1);
                *(short *)(ppuVar41 + 9) = (short)((int)sVar10 + (int)sVar11 >> 1);
                *(short *)(ppuVar41 + 0xd) = (short)((int)sVar11 + (int)sVar9 >> 1);

                gte_ldv0(pSVar38);
                gte_rtps_b();

                bVar23 = *(byte *)((int)puVar37 + 6);
                bVar1 = *(byte *)((int)puVar45 + 6);
                bVar2 = *(byte *)((int)puVar50 + 6);
                *(char *)&pSVar38->pad = (char)((int)((uint)bVar23 + (uint)bVar1) >> 1);
                *(char *)&pSVar38[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                *(char *)&pSVar38[4].pad = (char)((int)((uint)bVar2 + (uint)bVar23) >> 1);

                bVar23 = *(byte *)((int)puVar37 + 7);
                bVar1 = *(byte *)((int)puVar45 + 7);
                bVar2 = *(byte *)((int)puVar50 + 7);
                *(char *)((int)&pSVar38->pad + 1) = (char)((int)((uint)bVar23 + (uint)bVar1) >> 1);
                *(char *)((int)&pSVar38[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                *(char *)((int)&pSVar38[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar23) >> 1);

                uVar30 = *(ushort *)(iVar26 + 0x62);
                uVar13 = *(ushort *)(iVar26 + 0x5e);
                uVar14 = *(ushort *)(iVar26 + 0x60);
                pSVar43 = pSVar38;

                do {
                  iVar31 = gte_stFLAG();
                  gte_ldVXY0(pSVar43 + 2);
                  gte_ldVZ0(&pSVar43[2].vz);
                  gte_stSXY2();
                  iVar20 = gte_stIR3();
                  gte_rtps_b();

                  bVar23 = iVar20 < (int)(uint)uVar30;
                  if (pSVar43[1].vx < 0) {
                    bVar23 = bVar23 | 2;
                  }
                  bVar23 = bVar23 | ((int)(uVar13 - 1) < (int)pSVar43[1].vx) << 2;
                  if (pSVar43[1].vy < 0) {
                    bVar23 = bVar23 | 8;
                  }
                  bVar23 = bVar23 | ((int)(uVar14 - 1) < (int)pSVar43[1].vy) << 4;
                  if (iVar31 < 0) {
                    bVar23 = bVar23 | 0x20;
                  }
                  pSVar44 = pSVar43 + 2;
                  *(byte *)((int)&pSVar43[1].pad + 1) = bVar23;
                  pSVar43 = pSVar44;
                } while (pSVar44 != pSVar38 + 6);

                piVar29 = *(int **)(iVar26 + 0x68);
                iVar31 = *(int *)(iVar26 + 0xa0);
                uVar17 = iVar26 + 0xa5U & 3;
                uVar24 = *(int *)((iVar26 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                         uVar24 & 0xffffffffU >> (uVar17 + 1) * 8;
                uVar17 = *(uint *)(iVar26 + 0xa4);
                iVar20 = 2;
                ppuVar28 = ppuVar41 + 2;

                do {
                  iVar22 = iVar20 + -1;
                  if (iVar20 == 0) {
                    iVar22 = 2;
                  }
                  puVar37 = *ppuVar28;
                  puVar45 = ppuVar41[iVar22];

                  bVar23 = *(byte *)((int)puVar37 + 0xf) |
                           *(byte *)((int)ppuVar41 + iVar22 * 0x10 + 0x1f) |
                           *(byte *)((int)puVar45 + 0xf);

                  if ((bVar23 & 0x20) == 0) {

                    gte_ldSXY0(puVar37 + 2);
                    gte_ldSXY1(ppuVar41 + iVar22 * 4 + 6);
                    gte_ldSXY2(puVar45 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();

                    uVar36 = (uint)(short *)((int)puVar37 + 6U) & 3;
                    uVar24 = uVar24 & -1 << (4 - uVar36) * 8 |
                             *(uint *)((int)(short *)((int)puVar37 + 6U) - uVar36) >> uVar36 * 8;
                    uVar36 = (int)ppuVar41 + iVar22 * 0x10 + 0x16;
                    uVar40 = uVar36 & 3;
                    uVar17 = uVar17 & -1 << (4 - uVar40) * 8 |
                             *(uint *)(uVar36 - uVar40) >> uVar40 * 8;

                    piVar29[3] = uVar24;
                    uVar36 = (uint)(short *)((int)puVar45 + 6U) & 3;
                    uVar40 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar36);
                    piVar29[5] = uVar17;
                    piVar29[7] = bVar23 & 0x20 & -1 << (4 - uVar36) * 8 | uVar40 >> uVar36 * 8;
                    *piVar29 = (int)(piVar29 + -0x1e3ffff8);
                    iVar22 = gte_stMAC0();
                    gte_stSXY2();
                    piVar29[1] = iVar31;

                    if (iVar22 != 0) {
                      *(int **)(iVar26 + 0x38c) = piVar29;
                      piVar29 = piVar29 + 8;
                    }
                  }
                  ppuVar28 = ppuVar28 + -1;
                  iVar20 = iVar20 + -1;
                  *(int **)(iVar26 + 0x68) = piVar29;
                } while (-1 < iVar20);

                uVar17 = 3;
                ppuVar28 = ppuVar41;
                if (*(uint *)(iVar26 + 0x68) <= *(uint *)(iVar26 + 0x6c)) {

                  do {

                    if (uVar17 == 3) {
                      ppuVar47 = ppuVar28 + 4;
                      ppuVar39 = ppuVar28 + 8;
                      ppuVar32 = ppuVar28 + 0xc;
                    }
                    else {
                      ppuVar47 = (undefined4 **)ppuVar28[uVar17];
                      ppuVar39 = ppuVar28 + uVar17 * 4 + 4;
                      if (uVar17 == 0) {
                        ppuVar32 = ppuVar28 + 0xc;
                      }
                      else {
                        ppuVar32 = ppuVar28 + (uVar17 - 1) * 4 + 4;
                      }
                    }

                    bVar23 = *(byte *)((int)ppuVar47 + 0xf);
                    if ((bVar23 & *(byte *)((int)ppuVar39 + 0xf) & *(byte *)((int)ppuVar32 + 0xf) &
                        0x1f) == 0) {
                      if (((bVar23 | *(byte *)((int)ppuVar39 + 0xf) | *(byte *)((int)ppuVar32 + 0xf)
                           ) & 0x20) == 0) {

                        piVar29 = *(int **)(iVar26 + 0x68);
                        gte_ldSXY0(ppuVar47 + 2);
                        gte_ldSXY1(ppuVar39 + 2);
                        gte_ldSXY2(ppuVar32 + 2);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();

                        iVar31 = *(int *)(iVar26 + 0xa0);
                        *piVar29 = (int)(piVar29 + -0x1e3ffff8);
                        uVar30 = *(ushort *)(iVar26 + 0x394);
                        uVar36 = iVar26 + 0xa5U & 3;
                        iVar20 = *(int *)((iVar26 + 0xa5U) - uVar36);
                        uVar40 = (uint)(short *)((int)ppuVar47 + 6U) & 3;
                        uVar55 = *(uint *)((int)(short *)((int)ppuVar47 + 6U) - uVar40);
                        uVar25 = gte_stMAC0();
                        uVar18 = *(uint *)(iVar26 + 0xa4);
                        gte_stSXY2();

                        if ((int)uVar25 < 0) {
                          uVar25 = -uVar25;
                        }
                        piVar29[1] = iVar31;
                        if (uVar25 <= uVar30) {
                          uVar25 = (uint)(short *)((int)ppuVar39 + 6U) & 3;
                          uVar33 = *(uint *)((int)(short *)((int)ppuVar39 + 6U) - uVar25);
                          piVar29[3] = (iVar20 << (3 - uVar36) * 8 |
                                       (uint)bVar23 & 0xffffffffU >> (uVar36 + 1) * 8) &
                                       -1 << (4 - uVar40) * 8 | uVar55 >> uVar40 * 8;
                          uVar36 = (uint)(short *)((int)ppuVar32 + 6U) & 3;
                          uVar40 = *(uint *)((int)(short *)((int)ppuVar32 + 6U) - uVar36);
                          piVar29[5] = uVar18 & -1 << (4 - uVar25) * 8 | uVar33 >> uVar25 * 8;
                          piVar29[7] = iVar26 + 0x328U & -1 << (4 - uVar36) * 8 |
                                       uVar40 >> uVar36 * 8;
                          *(int **)(iVar26 + 0x38c) = piVar29;
                          *(int **)(iVar26 + 0x68) = piVar29 + 8;
                          goto LAB_80065238;
                        }
                      }
                      if (ppuVar28 != (undefined4 **)(iVar26 + 0x328)) goto LAB_8006510c;
                    }

LAB_80065238:
                    while (uVar17 = uVar17 - 1, (int)uVar17 < 0) {
                      if (ppuVar28 == (undefined4 **)(iVar26 + 0xe8)) {
                        uVar17 = *(uint *)(iVar26 + 0x388);

                        if (*(uint *)(iVar26 + 0x6c) < *(uint *)(iVar26 + 0x68)) {
                          *(uint *)(iVar26 + 0x68) = uVar17;
                        }
                        else if (*(uint *)(iVar26 + 0x68) != uVar17) {
                          iVar31 = *(int *)(iVar26 + 0x38c);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar40 = uVar36 & 3;
                          iVar20 = *(int *)(uVar36 - uVar40);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar55 = uVar36 & 3;
                          puVar35 = (uint *)(uVar36 - uVar55);
                          *puVar35 = *puVar35 & -1 << (uVar55 + 1) * 8 |
                                     (uVar17 << 8) >> (3 - uVar55) * 8;
                          uVar17 = iVar31 + 2;
                          uVar36 = uVar17 & 3;
                          puVar35 = (uint *)(uVar17 - uVar36);
                          *puVar35 = *puVar35 & -1 << (uVar36 + 1) * 8 |
                                     (uint)(iVar20 << (3 - uVar40) * 8) >> (3 - uVar36) * 8;
                        }
                        goto LAB_80065294;
                      }

                      ppuVar41 = ppuVar28 + -0x11;
                      ppuVar28 = ppuVar28 + -0x18;
                      uVar17 = (uint)*(byte *)ppuVar41;
                    }
                  } while( true );
                }

                *(undefined4 *)(iVar26 + 0x68) = *(undefined4 *)(iVar26 + 0x388);

LAB_80065294:

                puVar35 = *(uint **)(iVar54 + 0x68);
                if (puVar35 < *(uint **)(iVar54 + 0x6c)) goto LAB_80065334;
                *(uint **)(iVar54 + 0x68) = puVar35;
                goto LAB_80065348;
              }

              uVar36 = 0;
              if ((int)(uVar24 & (int)*(char *)(iVar54 + 0x399)) < 0) {

                iVar20 = *(int *)(iVar54 + 0x74);
                sVar9 = *(short *)((puVar52[2] & 0x3fe) + iVar20);
                uVar36 = (uint)sVar9;
                uVar6 = *(undefined2 *)((puVar52[2] >> 9 & 0x3fe) + iVar20);
                *(undefined2 *)(puVar35 + 3) = *(undefined2 *)((uVar24 >> 4 & 0x3fe) + iVar20);
                *(short *)(puVar35 + 5) = sVar9;
                *(undefined2 *)(puVar35 + 7) = uVar6;

                uVar40 = *(uint *)(iVar54 + 0xc0);
                uVar55 = *(uint *)(iVar54 + 0xd0);
                puVar35[2] = *(uint *)(iVar54 + 0xb0);
                puVar35[4] = uVar40;
                puVar35[6] = uVar55;

                sVar9 = *(short *)(iVar54 + 0x3ac);
                uVar6 = *(undefined2 *)(iVar54 + 0x3ae);
                puVar35[1] = *(uint *)(iVar54 + 0x3a4);
                *(short *)((int)puVar35 + 0xe) = sVar9;
                *(undefined2 *)((int)puVar35 + 0x16) = uVar6;
                *(undefined *)((int)puVar35 + 3) = 7;

                uVar40 = iVar26 - 0x1eU & 3;
                iVar20 = *(int *)((iVar26 - 0x1eU) - uVar40);
                uVar55 = iVar26 - 0x1eU & 3;
                puVar48 = (uint *)((iVar26 - 0x1eU) - uVar55);
                *puVar48 = *puVar48 & -1 << (uVar55 + 1) * 8 |
                           (uint)((int)puVar35 << 8) >> (3 - uVar55) * 8;
                uVar55 = (int)puVar35 + 2U & 3;
                puVar48 = (uint *)(((int)puVar35 + 2U) - uVar55);
                *puVar48 = *puVar48 & -1 << (uVar55 + 1) * 8 |
                           (iVar20 << (3 - uVar40) * 8 |
                           (int)sVar9 & 0xffffffffU >> (uVar40 + 1) * 8) >> (3 - uVar55) * 8;
                puVar35 = puVar35 + 8;
              }

              if (0x480 < (int)uVar17) goto LAB_80064dbc;
              puVar48 = *(uint **)(iVar54 + 0x6c);
              uVar17 = iVar26 - 0x1eU & 3;
              iVar20 = *(int *)((iVar26 - 0x1eU) - uVar17);

              puVar35[1] = puVar52[3];
              uVar55 = puVar52[5];
              uVar40 = puVar52[6];
              puVar35[3] = puVar52[4] + ((int)uVar24 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                           *(int *)(iVar54 + 0x39c);
              puVar35[5] = uVar55;
              puVar35[7] = uVar40;

              uVar40 = *(uint *)(iVar54 + 0xc0);
              uVar55 = *(uint *)(iVar54 + 0xd0);
              puVar35[2] = *(uint *)(iVar54 + 0xb0);
              puVar35[4] = uVar40;
              puVar35[6] = uVar55;

              *puVar35 = (iVar20 << (3 - uVar17) * 8 | uVar36 & 0xffffffffU >> (uVar17 + 1) * 8) >>
                         8 | 0x7000000;
              bVar15 = puVar48 < puVar35;
              uVar17 = iVar26 - 0x1eU & 3;
              puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
              *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                         (uint)((int)puVar35 << 8) >> (3 - uVar17) * 8;
              puVar35 = puVar35 + 8;
              if (bVar15) break;
            }
          }
        }
LAB_80065334:
        puVar52 = puVar52 + 7;
      } while (puVar52 != *(uint **)(iVar54 + 0x3b4));
      *(uint **)(iVar54 + 0x68) = puVar35;
    }
LAB_80065348:

    puVar52 = *(uint **)(puVar53 + 0x18);
    iVar54 = 0x1f800000;
    if (puVar53[7] != 0) {
      DAT_1f800394 = 0x800;
      DAT_1f8003b4 = puVar52 + (uint)puVar53[7] * 7;
      puVar35 = DAT_1f800068;

      do {

        iVar26 = *(int *)(iVar54 + 0x70);
        uVar17 = *puVar52;
        uVar25 = puVar52[1];

        puVar50 = (undefined4 *)((uVar17 & 0xff) * 0x10 + iVar26);
        puVar45 = (undefined4 *)(((int)uVar17 >> 4 & 0xff0U) + iVar26);
        puVar37 = (undefined4 *)(((int)uVar17 >> 0xc & 0xff0U) + iVar26);
        puVar51 = (uint *)(((int)uVar17 >> 0x14 & 0xff0U) + iVar26);

        uVar36 = puVar50[1];
        uVar40 = puVar45[1];
        uVar55 = puVar37[1];
        uVar24 = puVar51[1];

        *(undefined4 **)(iVar54 + 0xe8) = puVar50;
        *(undefined4 **)(iVar54 + 0x148) = puVar45;
        *(undefined4 **)(iVar54 + 0x1a8) = puVar37;
        *(uint **)(iVar54 + 0x208) = puVar51;

        uVar17 = iVar54 + 0xadU & 3;
        puVar48 = (uint *)((iVar54 + 0xadU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xb7) = (char)uVar36;
        uVar17 = iVar54 + 0xbdU & 3;
        puVar48 = (uint *)((iVar54 + 0xbdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar40 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 199) = (char)uVar40;
        uVar17 = iVar54 + 0xcdU & 3;
        puVar48 = (uint *)((iVar54 + 0xcdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar55 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xd7) = (char)uVar55;
        uVar17 = iVar54 + 0xddU & 3;
        puVar48 = (uint *)((iVar54 + 0xddU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar24 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xe7) = (char)uVar24;

        if ((uVar36 & uVar40 & uVar55 & uVar24 & 0x1f) == 0) {

          uVar19 = puVar45[2];
          uVar27 = puVar37[2];
          uVar33 = puVar51[2];
          gte_ldSXY0(uVar19);
          gte_ldSXY1(uVar27);
          gte_ldSXY2(puVar50[2]);
          *(undefined4 *)(iVar54 + 0xb0) = puVar50[2];
          *(undefined4 *)(iVar54 + 0xc0) = uVar19;
          gte_nclip_b();
          uVar18 = uVar25 & 1;
          uVar17 = uVar36;
          if ((int)uVar36 < (int)uVar40 == uVar18) {
            uVar17 = uVar40;
          }
          if ((int)uVar17 < (int)uVar55 == uVar18) {
            uVar17 = uVar55;
          }
          iVar26 = gte_stMAC0();
          gte_ldSXYP(uVar33);
          uVar16 = -iVar26;
          *(undefined4 *)(iVar54 + 0xd0) = uVar27;
          *(uint *)(iVar54 + 0xe0) = uVar33;
          gte_nclip_b();
          if ((int)uVar17 < (int)uVar24 == uVar18) {
            uVar17 = uVar24;
          }

          uVar17 = ((int)uVar17 >> 0x10) << (*(uint *)(iVar54 + 0x98) & 0x1f);
          if ((int)uVar17 < 0) {
            uVar17 = 0;
          }
          iVar26 = (uVar17 >> 0xd) << 2;
          if (0xfff < uVar17 >> 0xd) {
            iVar26 = 0x3ffc;
          }
          iVar26 = *(int *)(iVar54 + 100) + iVar26 + (uVar25 & 0x1e) * 2;
          uVar17 = gte_stMAC0();
          uVar36 = (uVar36 | uVar40 | uVar55 | uVar24) & 0x20;

          if ((uVar16 | uVar17 | uVar36) != 0) {
            uVar40 = uVar16 - 1 & uVar17 - 1;
            if (*(char *)(iVar54 + 0x398) < '\0') {
              uVar40 = ~(uVar16 - 1 | uVar17 - 1);
            }
            if (-1 < (int)(uVar40 & uVar36 - 0x20)) {
              iVar20 = uVar16 + uVar17;
              if (iVar20 < 0) {
                iVar20 = -iVar20;
              }
              uVar19 = *puVar45;
              uVar27 = *puVar37;
              uVar17 = *puVar51;
              *(undefined4 *)(iVar54 + 0xa8) = *puVar50;
              *(undefined4 *)(iVar54 + 0xb8) = uVar19;
              *(undefined4 *)(iVar54 + 200) = uVar27;
              *(uint *)(iVar54 + 0xd8) = uVar17;

              if (uVar36 != 0) {
LAB_8006560c:

                *(uint **)(iVar54 + 0x68) = puVar35;
                *(int *)(iVar54 + 0x9c) = iVar26 + -0x20;
                *(uint *)(iVar54 + 0xa0) = puVar52[3];
                uVar55 = puVar52[5];
                uVar40 = puVar52[6];
                uVar36 = puVar52[4] + ((int)uVar25 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                         *(int *)(iVar54 + 0x39c);
                *(uint *)(iVar54 + 0xa4) = uVar55;

                uVar17 = iVar54 + 0xa5U & 3;
                puVar35 = (uint *)((iVar54 + 0xa5U) - uVar17);
                *puVar35 = *puVar35 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
                *(short *)(iVar54 + 0xae) = (short)uVar36;
                *(short *)(iVar54 + 0xbe) = (short)uVar55;
                *(short *)(iVar54 + 0xce) = (short)uVar40;
                *(short *)(iVar54 + 0xde) = (short)(uVar40 >> 0x10);

                DAT_1f800388 = DAT_1f800068;
                puVar37 = &DAT_1f8000a8;
                iVar26 = 0x1f800000;
                ppuVar41 = &DAT_1f8000e8;
                ppuVar28 = &DAT_1f8000e8;
                pbVar21 = (byte *)((int)&DAT_1f8000b4 + 3);

                do {
                  bVar23 = *pbVar21;
                  *ppuVar28 = puVar37;
                  ppuVar28 = ppuVar28 + 1;
                  if ((bVar23 & 0x20) != 0) {
                    gte_ldVXY0(puVar37);
                    gte_ldVZ0(pbVar21 + -0xb);
                    gte_rtps_b();
                    iVar20 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar20) {
                      *pbVar21 = bVar23 & 0x1f;
                    }
                  }
                  pbVar21 = pbVar21 + 0x10;
                  puVar37 = puVar37 + 4;
                } while (ppuVar28 != (undefined4 **)&DAT_1f8000f8);

                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390._0_3_ = SUB43(DAT_1f800388,0);
                DAT_1f800390 = CONCAT13(9,(undefined3)DAT_1f800390);
LAB_800656ec:

                pSVar38 = (SVECTOR *)(ppuVar41 + 4);
                puVar37 = *ppuVar41;
                puVar45 = ppuVar41[1];
                puVar50 = ppuVar41[2];
                puVar46 = ppuVar41[3];

                sVar9 = *(short *)puVar37;
                sVar10 = *(short *)puVar45;
                sVar11 = *(short *)puVar50;
                iVar31 = (int)sVar9 + (int)sVar10;
                *(short *)(ppuVar41 + 8) = (short)(iVar31 >> 1);
                sVar12 = *(short *)puVar46;
                *(short *)(ppuVar41 + 0xc) = (short)((int)sVar10 + (int)sVar11 >> 1);
                iVar20 = (int)sVar11 + (int)sVar12;
                *(short *)(ppuVar41 + 0x10) = (short)(iVar20 >> 1);
                *(short *)(ppuVar41 + 0x14) = (short)((int)sVar12 + (int)sVar9 >> 1);
                *(short *)(ppuVar41 + 4) = (short)(iVar31 + iVar20 >> 2);

                sVar9 = *(short *)((int)puVar37 + 2);
                sVar10 = *(short *)((int)puVar45 + 2);
                sVar11 = *(short *)((int)puVar50 + 2);
                iVar31 = (int)sVar9 + (int)sVar10;
                *(short *)((int)ppuVar41 + 0x22) = (short)(iVar31 >> 1);
                sVar12 = *(short *)((int)puVar46 + 2);
                *(short *)((int)ppuVar41 + 0x32) = (short)((int)sVar10 + (int)sVar11 >> 1);
                iVar20 = (int)sVar11 + (int)sVar12;
                *(short *)((int)ppuVar41 + 0x42) = (short)(iVar20 >> 1);
                *(short *)((int)ppuVar41 + 0x52) = (short)((int)sVar12 + (int)sVar9 >> 1);
                *(short *)((int)ppuVar41 + 0x12) = (short)(iVar31 + iVar20 >> 2);

                sVar9 = *(short *)(puVar37 + 1);
                sVar10 = *(short *)(puVar45 + 1);
                sVar11 = *(short *)(puVar50 + 1);
                iVar31 = (int)sVar9 + (int)sVar10;
                *(short *)(ppuVar41 + 9) = (short)(iVar31 >> 1);
                sVar12 = *(short *)(puVar46 + 1);
                *(short *)(ppuVar41 + 0xd) = (short)((int)sVar10 + (int)sVar11 >> 1);
                iVar20 = (int)sVar11 + (int)sVar12;
                *(short *)(ppuVar41 + 0x11) = (short)(iVar20 >> 1);
                *(short *)(ppuVar41 + 0x15) = (short)((int)sVar12 + (int)sVar9 >> 1);
                *(short *)(ppuVar41 + 5) = (short)(iVar31 + iVar20 >> 2);

                gte_ldv0(pSVar38);
                gte_rtps_b();

                bVar23 = *(byte *)((int)puVar37 + 6);
                bVar1 = *(byte *)((int)puVar45 + 6);
                bVar2 = *(byte *)((int)puVar50 + 6);
                iVar31 = (uint)bVar23 + (uint)bVar1;
                *(char *)&pSVar38[2].pad = (char)(iVar31 >> 1);
                bVar3 = *(byte *)((int)puVar46 + 6);
                *(char *)&pSVar38[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)&pSVar38[6].pad = (char)(iVar20 >> 1);
                *(char *)&pSVar38[8].pad = (char)((int)((uint)bVar3 + (uint)bVar23) >> 1);
                *(char *)&pSVar38->pad = (char)(iVar31 + iVar20 >> 2);

                bVar23 = *(byte *)((int)puVar37 + 7);
                bVar1 = *(byte *)((int)puVar45 + 7);
                bVar2 = *(byte *)((int)puVar50 + 7);
                iVar31 = (uint)bVar23 + (uint)bVar1;
                *(char *)((int)&pSVar38[2].pad + 1) = (char)(iVar31 >> 1);
                bVar3 = *(byte *)((int)puVar46 + 7);
                *(char *)((int)&pSVar38[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)((int)&pSVar38[6].pad + 1) = (char)(iVar20 >> 1);
                *(char *)((int)&pSVar38[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar23) >> 1);
                *(char *)((int)&pSVar38->pad + 1) = (char)(iVar31 + iVar20 >> 2);

                uVar30 = *(ushort *)(iVar26 + 0x62);
                uVar13 = *(ushort *)(iVar26 + 0x5e);
                uVar14 = *(ushort *)(iVar26 + 0x60);
                pSVar43 = pSVar38;

                do {
                  iVar31 = gte_stFLAG();
                  gte_ldVXY0(pSVar43 + 2);
                  gte_ldVZ0(&pSVar43[2].vz);
                  gte_stSXY2();
                  iVar20 = gte_stIR3();
                  gte_rtps_b();

                  bVar23 = iVar20 < (int)(uint)uVar30;
                  if (pSVar43[1].vx < 0) {
                    bVar23 = bVar23 | 2;
                  }
                  bVar23 = bVar23 | ((int)(uVar13 - 1) < (int)pSVar43[1].vx) << 2;
                  if (pSVar43[1].vy < 0) {
                    bVar23 = bVar23 | 8;
                  }
                  bVar23 = bVar23 | ((int)(uVar14 - 1) < (int)pSVar43[1].vy) << 4;
                  if (iVar31 < 0) {
                    bVar23 = bVar23 | 0x20;
                  }
                  pSVar44 = pSVar43 + 2;
                  *(byte *)((int)&pSVar43[1].pad + 1) = bVar23;
                  pSVar43 = pSVar44;
                } while (pSVar44 != pSVar38 + 10);

                piVar29 = *(int **)(iVar26 + 0x68);
                iVar31 = *(int *)(iVar26 + 0xa0);
                uVar17 = iVar26 + 0xa5U & 3;
                uVar40 = *(int *)((iVar26 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                         (uint)pSVar44 & 0xffffffffU >> (uVar17 + 1) * 8;
                uVar36 = *(uint *)(iVar26 + 0xa4);
                ppuVar28 = ppuVar41 + 3;
                uVar17 = 2;
                iVar20 = 3;

                do {
                  uVar17 = uVar17 & 3;
                  puVar37 = *ppuVar28;
                  puVar45 = ppuVar41[uVar17];
                  bVar23 = *(byte *)((int)puVar37 + 0xf) |
                           *(byte *)((int)ppuVar41 + uVar17 * 0x10 + 0x2f) |
                           *(byte *)((int)puVar45 + 0xf);

                  if ((bVar23 & 0x20) == 0) {
                    gte_ldSXY0(puVar37 + 2);
                    gte_ldSXY1(ppuVar41 + uVar17 * 4 + 10);
                    gte_ldSXY2(puVar45 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();

                    uVar55 = (uint)(short *)((int)puVar37 + 6U) & 3;
                    uVar40 = uVar40 & -1 << (4 - uVar55) * 8 |
                             *(uint *)((int)(short *)((int)puVar37 + 6U) - uVar55) >> uVar55 * 8;
                    uVar17 = (int)ppuVar41 + uVar17 * 0x10 + 0x26;
                    uVar55 = uVar17 & 3;
                    uVar36 = uVar36 & -1 << (4 - uVar55) * 8 |
                             *(uint *)(uVar17 - uVar55) >> uVar55 * 8;

                    piVar29[3] = uVar40;
                    uVar17 = (uint)(short *)((int)puVar45 + 6U) & 3;
                    uVar55 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar17);
                    piVar29[5] = uVar36;
                    piVar29[7] = bVar23 & 0x20 & -1 << (4 - uVar17) * 8 | uVar55 >> uVar17 * 8;
                    *piVar29 = (int)(piVar29 + -0x1e3ffff8);
                    iVar22 = gte_stMAC0();
                    gte_stSXY2();
                    piVar29[1] = iVar31 + -0x8000000;

                    if (iVar22 != 0) {
                      *(int **)(iVar26 + 0x38c) = piVar29;
                      piVar29 = piVar29 + 8;
                    }
                  }

                  ppuVar28 = ppuVar28 + -1;
                  iVar22 = iVar20 + -1;
                  *(int **)(iVar26 + 0x68) = piVar29;
                  uVar17 = iVar20 - 2;
                  iVar20 = iVar22;
                } while (-1 < iVar22);
                uVar17 = 3;
                if (*(uint *)(iVar26 + 0x68) <= *(uint *)(iVar26 + 0x6c)) {
                  uVar36 = 2;
                  ppuVar28 = ppuVar41;
                  do {
                    ppuVar47 = ppuVar28 + uVar17 * 4 + 8;
                    ppuVar39 = ppuVar28 + (uVar36 & 3) * 4 + 8;
                    puVar37 = ppuVar28[uVar17];
                    uVar36 = uVar17;
                    if ((*(byte *)((int)puVar37 + 0xf) & *(byte *)((int)ppuVar47 + 0xf) &
                         *(byte *)((int)ppuVar28 + 0x1f) & *(byte *)((int)ppuVar39 + 0xf) & 0x1f) ==
                        0) {
                      if (((*(byte *)((int)puVar37 + 0xf) | *(byte *)((int)ppuVar47 + 0xf) |
                            *(byte *)((int)ppuVar28 + 0x1f) | *(byte *)((int)ppuVar39 + 0xf)) & 0x20
                          ) == 0) {
                        puVar35 = *(uint **)(iVar26 + 0x68);
                        gte_ldSXY0(ppuVar47 + 2);
                        gte_ldSXY1(puVar37 + 2);
                        gte_ldSXY2(ppuVar28 + 6);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();
                        uVar40 = *(uint *)(iVar26 + 0xa0);
                        *puVar35 = (uint)(puVar35 + -0x1dbffff6);
                        puVar35[1] = uVar40;
                        uVar30 = *(ushort *)(iVar26 + 0x394);
                        iVar31 = gte_stMAC0();
                        gte_ldSXY0(ppuVar39 + 2);
                        uVar40 = iVar26 + 0xa5U & 3;
                        uVar33 = *(uint *)(iVar26 + 0xa4);
                        gte_nclip_b();
                        uVar55 = (uint)(short *)((int)puVar37 + 6U) & 3;
                        uVar18 = (*(int *)((iVar26 + 0xa5U) - uVar40) << (3 - uVar40) * 8 |
                                 (uint)(puVar35 + -0x1dbffff6) & 0xffffffffU >> (uVar40 + 1) * 8) &
                                 -1 << (4 - uVar55) * 8 |
                                 *(uint *)((int)(short *)((int)puVar37 + 6U) - uVar55) >> uVar55 * 8
                        ;
                        uVar40 = (uint)(short *)((int)ppuVar47 + 6U) & 3;
                        uVar24 = *(uint *)((int)(short *)((int)ppuVar47 + 6U) - uVar40);
                        puVar35[3] = uVar18;
                        uVar55 = (int)ppuVar28 + 0x16U & 3;
                        uVar25 = *(uint *)(((int)ppuVar28 + 0x16U) - uVar55);
                        puVar35[5] = uVar33 & -1 << (4 - uVar40) * 8 | uVar24 >> uVar40 * 8;
                        uVar40 = (uint)(short *)((int)ppuVar39 + 6U) & 3;
                        uVar24 = *(uint *)((int)(short *)((int)ppuVar39 + 6U) - uVar40);
                        puVar35[9] = -1 << (4 - uVar55) * 8 & 0x77000000U | uVar25 >> uVar55 * 8;
                        puVar35[7] = uVar18 & -1 << (4 - uVar40) * 8 | uVar24 >> uVar40 * 8;
                        iVar20 = gte_stMAC0();
                        gte_stSXY0();
                        uVar40 = iVar31 - iVar20;
                        gte_stSXY2();
                        if ((int)uVar40 < 0) {
                          uVar40 = -uVar40;
                        }
                        if (uVar40 <= uVar30) {
                          *(uint **)(iVar26 + 0x38c) = puVar35;
                          *(uint **)(iVar26 + 0x68) = puVar35 + 10;
                          goto LAB_80065b40;
                        }
                      }
                      if (ppuVar28 != (undefined4 **)(iVar26 + 0x328)) goto code_r0x80065b1c;
                    }
LAB_80065b40:
                    while( true ) {
                      uVar17 = uVar36 - 1;
                      uVar36 = uVar36 - 2;
                      if (-1 < (int)uVar17) break;
                      if (ppuVar28 == (undefined4 **)(iVar26 + 0xe8)) {
                        uVar17 = *(uint *)(iVar26 + 0x388);
                        if (*(uint *)(iVar26 + 0x6c) < *(uint *)(iVar26 + 0x68)) {
                          *(uint *)(iVar26 + 0x68) = uVar17;
                        }
                        else if (*(uint *)(iVar26 + 0x68) != uVar17) {
                          iVar31 = *(int *)(iVar26 + 0x38c);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar40 = uVar36 & 3;
                          iVar20 = *(int *)(uVar36 - uVar40);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar55 = uVar36 & 3;
                          puVar35 = (uint *)(uVar36 - uVar55);
                          *puVar35 = *puVar35 & -1 << (uVar55 + 1) * 8 |
                                     (uVar17 << 8) >> (3 - uVar55) * 8;
                          uVar17 = iVar31 + 2;
                          uVar36 = uVar17 & 3;
                          puVar35 = (uint *)(uVar17 - uVar36);
                          *puVar35 = *puVar35 & -1 << (uVar36 + 1) * 8 |
                                     (uint)(iVar20 << (3 - uVar40) * 8) >> (3 - uVar36) * 8;
                        }
                        goto LAB_80065b9c;
                      }
                      ppuVar41 = ppuVar28 + -0x11;
                      ppuVar28 = ppuVar28 + -0x18;
                      uVar36 = (uint)*(byte *)ppuVar41;
                    }
                  } while( true );
                }
                *(undefined4 *)(iVar26 + 0x68) = *(undefined4 *)(iVar26 + 0x388);
LAB_80065b9c:
                puVar35 = *(uint **)(iVar54 + 0x68);
                if (puVar35 < *(uint **)(iVar54 + 0x6c)) goto LAB_80065c48;
                *(uint **)(iVar54 + 0x68) = puVar35;
                goto LAB_80065c5c;
              }

              if ((int)(uVar25 & (int)*(char *)(iVar54 + 0x399)) < 0) {

                iVar31 = *(int *)(iVar54 + 0x74);
                uVar36 = puVar52[2];
                uVar6 = *(undefined2 *)((uVar36 & 0x3fe) + iVar31);
                sVar9 = *(short *)((uVar36 >> 9 & 0x3fe) + iVar31);
                uVar17 = (uint)sVar9;
                uVar7 = *(undefined2 *)((uVar36 >> 0x12 & 0x3fe) + iVar31);
                *(undefined2 *)(puVar35 + 3) = *(undefined2 *)((uVar25 >> 4 & 0x3fe) + iVar31);
                *(undefined2 *)(puVar35 + 5) = uVar6;
                *(short *)(puVar35 + 9) = sVar9;
                *(undefined2 *)(puVar35 + 7) = uVar7;

                uVar36 = *(uint *)(iVar54 + 0xc0);
                uVar40 = *(uint *)(iVar54 + 0xd0);
                uVar55 = *(uint *)(iVar54 + 0xe0);
                puVar35[2] = *(uint *)(iVar54 + 0xb0);
                puVar35[4] = uVar36;
                puVar35[8] = uVar40;
                puVar35[6] = uVar55;

                sVar9 = *(short *)(iVar54 + 0x3ac);
                uVar6 = *(undefined2 *)(iVar54 + 0x3ae);
                puVar35[1] = *(uint *)(iVar54 + 0x3a8);
                *(short *)((int)puVar35 + 0xe) = sVar9;
                *(undefined2 *)((int)puVar35 + 0x16) = uVar6;
                *(undefined *)((int)puVar35 + 3) = 9;

                uVar36 = iVar26 - 0x1eU & 3;
                iVar31 = *(int *)((iVar26 - 0x1eU) - uVar36);
                uVar40 = iVar26 - 0x1eU & 3;
                puVar48 = (uint *)((iVar26 - 0x1eU) - uVar40);
                *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                           (uint)((int)puVar35 << 8) >> (3 - uVar40) * 8;
                uVar40 = (int)puVar35 + 2U & 3;
                puVar48 = (uint *)(((int)puVar35 + 2U) - uVar40);
                *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                           (iVar31 << (3 - uVar36) * 8 |
                           (int)sVar9 & 0xffffffffU >> (uVar36 + 1) * 8) >> (3 - uVar40) * 8;
                puVar35 = puVar35 + 10;
              }

              if (0x800 < iVar20) goto LAB_8006560c;
              puVar51 = *(uint **)(iVar54 + 0x6c);
              uVar36 = iVar26 - 0x1eU & 3;
              iVar20 = *(int *)((iVar26 - 0x1eU) - uVar36);

              puVar35[1] = puVar52[3];
              uVar40 = puVar52[5];
              uVar55 = puVar52[6];
              puVar35[3] = puVar52[4] + ((int)uVar25 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                           *(int *)(iVar54 + 0x39c);
              puVar35[5] = uVar40;
              puVar35[9] = uVar55;

              uVar40 = (int)puVar35 + 0x1dU & 3;
              puVar48 = (uint *)(((int)puVar35 + 0x1dU) - uVar40);
              *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 | uVar55 >> (3 - uVar40) * 8;

              uVar40 = *(uint *)(iVar54 + 0xc0);
              uVar55 = *(uint *)(iVar54 + 0xd0);
              uVar24 = *(uint *)(iVar54 + 0xe0);
              puVar35[2] = *(uint *)(iVar54 + 0xb0);
              puVar35[4] = uVar40;
              puVar35[8] = uVar55;
              puVar35[6] = uVar24;

              *puVar35 = (iVar20 << (3 - uVar36) * 8 | uVar17 & 0xffffffffU >> (uVar36 + 1) * 8) >>
                         8 | 0x9000000;
              bVar15 = puVar51 < puVar35;
              uVar17 = iVar26 - 0x1eU & 3;
              puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
              *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                         (uint)((int)puVar35 << 8) >> (3 - uVar17) * 8;
              puVar35 = puVar35 + 10;
              if (bVar15) break;
            }
          }
        }
LAB_80065c48:
        puVar52 = puVar52 + 7;
      } while (puVar52 != *(uint **)(iVar54 + 0x3b4));
      *(uint **)(iVar54 + 0x68) = puVar35;
    }
LAB_80065c5c:
    puVar52 = *(uint **)(puVar53 + 0x1a);
    iVar54 = 0x1f800000;
    if (puVar53[8] != 0) {
      DAT_1f800394 = 0x480;
      DAT_1f8003b4 = puVar52 + (uint)puVar53[8] * 9;
      puVar35 = DAT_1f800068;
      do {
        iVar26 = *(int *)(iVar54 + 0x70);
        uVar17 = *puVar52;
        uVar24 = puVar52[1];
        puVar50 = (undefined4 *)((uVar17 & 0xff) * 0x10 + iVar26);
        puVar45 = (undefined4 *)(((int)uVar17 >> 4 & 0xff0U) + iVar26);
        puVar37 = (undefined4 *)(((int)uVar17 >> 0xc & 0xff0U) + iVar26);
        uVar36 = puVar50[1];
        uVar40 = puVar45[1];
        uVar55 = puVar37[1];
        *(undefined4 **)(iVar54 + 0xe8) = puVar50;
        *(undefined4 **)(iVar54 + 0xec) = puVar45;
        *(undefined4 **)(iVar54 + 0xf0) = puVar37;
        uVar17 = iVar54 + 0xadU & 3;
        puVar48 = (uint *)((iVar54 + 0xadU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xb7) = (char)uVar36;
        uVar17 = iVar54 + 0xbdU & 3;
        puVar48 = (uint *)((iVar54 + 0xbdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar40 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 199) = (char)uVar40;
        uVar17 = iVar54 + 0xcdU & 3;
        puVar48 = (uint *)((iVar54 + 0xcdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar55 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xd7) = (char)uVar55;
        if ((uVar36 & uVar40 & uVar55 & 0x1f) == 0) {
          uVar19 = puVar45[2];
          uVar27 = puVar37[2];
          gte_ldSXY0(puVar50[2]);
          gte_ldSXY1(uVar27);
          gte_ldSXY2(uVar19);
          gte_nclip_b();
          *(undefined4 *)(iVar54 + 0xb0) = puVar50[2];
          *(undefined4 *)(iVar54 + 0xc0) = uVar19;
          *(undefined4 *)(iVar54 + 0xd0) = uVar27;
          uVar17 = uVar36;
          if ((uint)((int)uVar36 < (int)uVar40) == (uVar24 & 1)) {
            uVar17 = uVar40;
          }
          if ((uint)((int)uVar17 < (int)uVar55) == (uVar24 & 1)) {
            uVar17 = uVar55;
          }
          uVar17 = ((int)uVar17 >> 0x10) << (*(uint *)(iVar54 + 0x98) & 0x1f);
          if ((int)uVar17 < 0) {
            uVar17 = 0;
          }
          iVar26 = (uVar17 >> 0xd) << 2;
          if (0xfff < uVar17 >> 0xd) {
            iVar26 = 0x3ffc;
          }
          iVar26 = *(int *)(iVar54 + 100) + iVar26 + (uVar24 & 0x1e) * 2;
          uVar17 = gte_stMAC0();
          uVar36 = (uVar36 | uVar40 | uVar55) & 0x20;
          if ((uVar17 | uVar36) != 0) {
            uVar40 = uVar17 - 1;
            if (*(char *)(iVar54 + 0x398) < '\0') {
              uVar40 = -uVar40;
            }
            if (-1 < (int)(uVar40 & uVar36 - 0x20)) {
              uVar19 = *puVar45;
              uVar27 = *puVar37;
              *(undefined4 *)(iVar54 + 0xa8) = *puVar50;
              *(undefined4 *)(iVar54 + 0xb8) = uVar19;
              *(undefined4 *)(iVar54 + 200) = uVar27;
              if ((int)uVar17 < 0) {
                uVar17 = -uVar17;
              }

              if (uVar36 != 0) {
LAB_80065ea4:

                *(uint **)(iVar54 + 0x68) = puVar35;
                *(int *)(iVar54 + 0x9c) = iVar26 + -0x20;
                *(uint *)(iVar54 + 0xa0) = puVar52[3];
                uVar36 = puVar52[6];
                uVar40 = puVar52[7];
                uVar17 = puVar52[8];
                *(short *)(iVar54 + 0xae) = (short)uVar36;
                *(short *)(iVar54 + 0xbe) = (short)uVar40;
                *(short *)(iVar54 + 0xce) = (short)uVar17;
                *(uint *)(iVar54 + 0xa4) = uVar40;

                uVar17 = iVar54 + 0xa5U & 3;
                puVar35 = (uint *)((iVar54 + 0xa5U) - uVar17);
                *puVar35 = *puVar35 & -1 << (uVar17 + 1) * 8 |
                           uVar36 + ((int)uVar24 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                           *(int *)(iVar54 + 0x39c) >> (3 - uVar17) * 8;

                DAT_1f800388 = DAT_1f800068;
                gte_stSXY0();
                gte_stSXY1();
                gte_stSXY2();
                puVar37 = &DAT_1f8000a8;
                iVar26 = 0x1f800000;
                ppuVar41 = &DAT_1f8000e8;
                ppuVar28 = &DAT_1f8000e8;
                pbVar21 = (byte *)((int)&DAT_1f8000b4 + 3);

                do {
                  bVar23 = *pbVar21;
                  *ppuVar28 = puVar37;
                  ppuVar28 = ppuVar28 + 1;
                  if ((bVar23 & 0x20) != 0) {
                    gte_ldVXY0(puVar37);
                    gte_ldVZ0(pbVar21 + -0xb);
                    gte_rtps_b();
                    iVar20 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar20) {
                      *pbVar21 = bVar23 & 0x1f;
                    }
                  }
                  pbVar21 = pbVar21 + 0x10;
                  puVar37 = puVar37 + 4;
                } while (ppuVar28 != (undefined4 **)&DAT_1f8000f4);

                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390._0_3_ = SUB43(DAT_1f800388,0);
                DAT_1f800390 = CONCAT13(9,(undefined3)DAT_1f800390);
LAB_80065f88:

                pSVar38 = (SVECTOR *)(ppuVar41 + 4);
                puVar37 = *ppuVar41;
                puVar45 = ppuVar41[1];
                puVar50 = ppuVar41[2];

                sVar9 = *(short *)puVar37;
                sVar10 = *(short *)puVar45;
                sVar11 = *(short *)puVar50;
                *(short *)(ppuVar41 + 4) = (short)((int)sVar9 + (int)sVar10 >> 1);
                *(short *)(ppuVar41 + 8) = (short)((int)sVar10 + (int)sVar11 >> 1);
                *(short *)(ppuVar41 + 0xc) = (short)((int)sVar11 + (int)sVar9 >> 1);

                sVar9 = *(short *)((int)puVar37 + 2);
                sVar10 = *(short *)((int)puVar45 + 2);
                sVar11 = *(short *)((int)puVar50 + 2);
                *(short *)((int)ppuVar41 + 0x12) = (short)((int)sVar9 + (int)sVar10 >> 1);
                *(short *)((int)ppuVar41 + 0x22) = (short)((int)sVar10 + (int)sVar11 >> 1);
                *(short *)((int)ppuVar41 + 0x32) = (short)((int)sVar11 + (int)sVar9 >> 1);

                sVar9 = *(short *)(puVar37 + 1);
                sVar10 = *(short *)(puVar45 + 1);
                sVar11 = *(short *)(puVar50 + 1);
                *(short *)(ppuVar41 + 5) = (short)((int)sVar9 + (int)sVar10 >> 1);
                *(short *)(ppuVar41 + 9) = (short)((int)sVar10 + (int)sVar11 >> 1);
                *(short *)(ppuVar41 + 0xd) = (short)((int)sVar11 + (int)sVar9 >> 1);

                uVar40 = puVar37[3];
                uVar17 = puVar45[3];
                uVar36 = puVar50[3];
                ppuVar41[7] = (undefined4 *)((int)((uVar40 & 0xfefefe) + (uVar17 & 0xfefefe)) >> 1);
                ppuVar41[0xb] =
                     (undefined4 *)((int)((uVar17 & 0xfefefe) + (uVar36 & 0xfefefe)) >> 1);
                ppuVar41[0xf] =
                     (undefined4 *)((int)((uVar36 & 0xfefefe) + (uVar40 & 0xfefefe)) >> 1);

                gte_ldv0(pSVar38);
                gte_rtps_b();

                bVar23 = *(byte *)((int)puVar37 + 6);
                bVar1 = *(byte *)((int)puVar45 + 6);
                bVar2 = *(byte *)((int)puVar50 + 6);
                *(char *)&pSVar38->pad = (char)((int)((uint)bVar23 + (uint)bVar1) >> 1);
                *(char *)&pSVar38[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                *(char *)&pSVar38[4].pad = (char)((int)((uint)bVar2 + (uint)bVar23) >> 1);

                bVar23 = *(byte *)((int)puVar37 + 7);
                bVar1 = *(byte *)((int)puVar45 + 7);
                bVar2 = *(byte *)((int)puVar50 + 7);
                *(char *)((int)&pSVar38->pad + 1) = (char)((int)((uint)bVar23 + (uint)bVar1) >> 1);
                *(char *)((int)&pSVar38[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                *(char *)((int)&pSVar38[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar23) >> 1);

                uVar30 = *(ushort *)(iVar26 + 0x62);
                uVar13 = *(ushort *)(iVar26 + 0x5e);
                uVar14 = *(ushort *)(iVar26 + 0x60);
                pSVar43 = pSVar38;

                do {
                  iVar31 = gte_stFLAG();
                  gte_ldVXY0(pSVar43 + 2);
                  gte_ldVZ0(&pSVar43[2].vz);
                  gte_stSXY2();
                  iVar20 = gte_stIR3();
                  gte_rtps_b();

                  bVar23 = iVar20 < (int)(uint)uVar30;
                  if (pSVar43[1].vx < 0) {
                    bVar23 = bVar23 | 2;
                  }
                  bVar23 = bVar23 | ((int)(uVar13 - 1) < (int)pSVar43[1].vx) << 2;
                  if (pSVar43[1].vy < 0) {
                    bVar23 = bVar23 | 8;
                  }
                  bVar23 = bVar23 | ((int)(uVar14 - 1) < (int)pSVar43[1].vy) << 4;
                  if (iVar31 < 0) {
                    bVar23 = bVar23 | 0x20;
                  }
                  pSVar44 = pSVar43 + 2;
                  *(byte *)((int)&pSVar43[1].pad + 1) = bVar23;
                  pSVar43 = pSVar44;
                } while (pSVar44 != pSVar38 + 6);
                piVar29 = *(int **)(iVar26 + 0x68);
                uVar4 = *(undefined *)(iVar26 + 0xa3);
                uVar17 = iVar26 + 0xa5U & 3;
                uVar24 = *(int *)((iVar26 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                         uVar24 & 0xffffffffU >> (uVar17 + 1) * 8;
                uVar17 = *(uint *)(iVar26 + 0xa4);
                iVar20 = 2;
                ppuVar28 = ppuVar41 + 2;
                do {
                  iVar31 = iVar20 + -1;
                  if (iVar20 == 0) {
                    iVar31 = 2;
                  }
                  puVar37 = *ppuVar28;
                  puVar45 = ppuVar41[iVar31];
                  bVar23 = *(byte *)((int)puVar37 + 0xf) |
                           *(byte *)((int)ppuVar41 + iVar31 * 0x10 + 0x1f) |
                           *(byte *)((int)puVar45 + 0xf);
                  if ((bVar23 & 0x20) == 0) {
                    gte_ldSXY0(puVar37 + 2);
                    gte_ldSXY1(ppuVar41 + iVar31 * 4 + 6);
                    gte_ldSXY2(puVar45 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();
                    uVar36 = (uint)(short *)((int)puVar37 + 6U) & 3;
                    uVar24 = uVar24 & -1 << (4 - uVar36) * 8 |
                             *(uint *)((int)(short *)((int)puVar37 + 6U) - uVar36) >> uVar36 * 8;
                    uVar36 = (int)ppuVar41 + iVar31 * 0x10 + 0x16;
                    uVar40 = uVar36 & 3;
                    uVar17 = uVar17 & -1 << (4 - uVar40) * 8 |
                             *(uint *)(uVar36 - uVar40) >> uVar40 * 8;
                    piVar29[3] = uVar24;
                    uVar36 = (uint)(short *)((int)puVar45 + 6U) & 3;
                    uVar40 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar36);
                    piVar29[6] = uVar17;
                    piVar29[9] = bVar23 & 0x20 & -1 << (4 - uVar36) * 8 | uVar40 >> uVar36 * 8;
                    *piVar29 = (int)(piVar29 + -0x1dbffff6);
                    iVar22 = gte_stMAC0();
                    gte_stSXY2();
                    if (iVar22 != 0) {
                      puVar50 = ppuVar41[iVar31 * 4 + 7];
                      piVar29[1] = puVar37[3];
                      iVar31 = puVar45[3];
                      piVar29[4] = (int)puVar50;
                      piVar29[7] = iVar31;
                      *(undefined *)((int)piVar29 + 7) = uVar4;
                      *(int **)(iVar26 + 0x38c) = piVar29;
                      piVar29 = piVar29 + 10;
                    }
                  }
                  ppuVar28 = ppuVar28 + -1;
                  iVar20 = iVar20 + -1;
                  *(int **)(iVar26 + 0x68) = piVar29;
                } while (-1 < iVar20);
                uVar17 = 3;
                ppuVar28 = ppuVar41;
                if (*(uint *)(iVar26 + 0x68) <= *(uint *)(iVar26 + 0x6c)) {
                  do {
                    if (uVar17 == 3) {
                      ppuVar47 = ppuVar28 + 4;
                      ppuVar39 = ppuVar28 + 8;
                      ppuVar32 = ppuVar28 + 0xc;
                    }
                    else {
                      ppuVar47 = (undefined4 **)ppuVar28[uVar17];
                      ppuVar39 = ppuVar28 + uVar17 * 4 + 4;
                      if (uVar17 == 0) {
                        ppuVar32 = ppuVar28 + 0xc;
                      }
                      else {
                        ppuVar32 = ppuVar28 + (uVar17 - 1) * 4 + 4;
                      }
                    }
                    if ((*(byte *)((int)ppuVar47 + 0xf) & *(byte *)((int)ppuVar39 + 0xf) &
                         *(byte *)((int)ppuVar32 + 0xf) & 0x1f) == 0) {
                      if (((*(byte *)((int)ppuVar47 + 0xf) | *(byte *)((int)ppuVar39 + 0xf) |
                           *(byte *)((int)ppuVar32 + 0xf)) & 0x20) == 0) {
                        piVar29 = *(int **)(iVar26 + 0x68);
                        gte_ldSXY0(ppuVar47 + 2);
                        gte_ldSXY1(ppuVar39 + 2);
                        gte_ldSXY2(ppuVar32 + 2);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();
                        uVar30 = *(ushort *)(iVar26 + 0x394);
                        uVar36 = iVar26 + 0xa5U & 3;
                        uVar40 = (uint)(short *)((int)ppuVar47 + 6U) & 3;
                        uVar18 = *(uint *)(iVar26 + 0xa4);
                        uVar55 = (uint)(short *)((int)ppuVar39 + 6U) & 3;
                        uVar25 = *(uint *)((int)(short *)((int)ppuVar39 + 6U) - uVar55);
                        piVar29[3] = (*(int *)((iVar26 + 0xa5U) - uVar36) << (3 - uVar36) * 8 |
                                     iVar26 + 0x328U & 0xffffffffU >> (uVar36 + 1) * 8) &
                                     -1 << (4 - uVar40) * 8 |
                                     *(uint *)((int)(short *)((int)ppuVar47 + 6U) - uVar40) >>
                                     uVar40 * 8;
                        uVar36 = gte_stMAC0();
                        gte_stSXY2();
                        if ((int)uVar36 < 0) {
                          uVar36 = -uVar36;
                        }
                        *piVar29 = (int)(piVar29 + -0x1dbffff6);
                        if (uVar36 <= uVar30) {
                          uVar36 = (uint)(short *)((int)ppuVar32 + 6U) & 3;
                          uVar40 = *(uint *)((int)(short *)((int)ppuVar32 + 6U) - uVar36);
                          piVar29[6] = uVar18 & -1 << (4 - uVar55) * 8 | uVar25 >> uVar55 * 8;
                          puVar45 = ppuVar47[3];
                          piVar29[9] = iVar26 + 0x328U & -1 << (4 - uVar36) * 8 |
                                       uVar40 >> uVar36 * 8;
                          puVar37 = ppuVar39[3];
                          piVar29[1] = (int)puVar45;
                          puVar45 = ppuVar32[3];
                          piVar29[4] = (int)puVar37;
                          uVar4 = *(undefined *)(iVar26 + 0xa3);
                          piVar29[7] = (int)puVar45;
                          *(undefined *)((int)piVar29 + 7) = uVar4;
                          *(int **)(iVar26 + 0x38c) = piVar29;
                          *(int **)(iVar26 + 0x68) = piVar29 + 10;
                          goto LAB_800663b4;
                        }
                      }
                      if (ppuVar28 != (undefined4 **)(iVar26 + 0x328)) goto LAB_80066260;
                    }
LAB_800663b4:
                    while (uVar17 = uVar17 - 1, (int)uVar17 < 0) {
                      if (ppuVar28 == (undefined4 **)(iVar26 + 0xe8)) {
                        uVar17 = *(uint *)(iVar26 + 0x388);
                        if (*(uint *)(iVar26 + 0x6c) < *(uint *)(iVar26 + 0x68)) {
                          *(uint *)(iVar26 + 0x68) = uVar17;
                        }
                        else if (*(uint *)(iVar26 + 0x68) != uVar17) {
                          iVar31 = *(int *)(iVar26 + 0x38c);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar40 = uVar36 & 3;
                          iVar20 = *(int *)(uVar36 - uVar40);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar55 = uVar36 & 3;
                          puVar35 = (uint *)(uVar36 - uVar55);
                          *puVar35 = *puVar35 & -1 << (uVar55 + 1) * 8 |
                                     (uVar17 << 8) >> (3 - uVar55) * 8;
                          uVar17 = iVar31 + 2;
                          uVar36 = uVar17 & 3;
                          puVar35 = (uint *)(uVar17 - uVar36);
                          *puVar35 = *puVar35 & -1 << (uVar36 + 1) * 8 |
                                     (uint)(iVar20 << (3 - uVar40) * 8) >> (3 - uVar36) * 8;
                        }
                        goto LAB_80066414;
                      }
                      pbVar21 = (byte *)((int)ppuVar28 + -0x41);
                      ppuVar28 = ppuVar28 + -0x18;
                      uVar17 = (uint)(*pbVar21 >> 6);
                    }
                  } while( true );
                }
                *(undefined4 *)(iVar26 + 0x68) = *(undefined4 *)(iVar26 + 0x388);
LAB_80066414:
                puVar35 = *(uint **)(iVar54 + 0x68);
                if (puVar35 < *(uint **)(iVar54 + 0x6c)) goto LAB_800664c0;
                *(uint **)(iVar54 + 0x68) = puVar35;
                goto LAB_800664d4;
              }

              uVar36 = 0;
              if ((int)(uVar24 & (int)*(char *)(iVar54 + 0x399)) < 0) {

                iVar20 = *(int *)(iVar54 + 0x74);
                sVar9 = *(short *)((puVar52[2] & 0x3fe) + iVar20);
                uVar36 = (uint)sVar9;
                uVar6 = *(undefined2 *)((puVar52[2] >> 9 & 0x3fe) + iVar20);
                *(undefined2 *)(puVar35 + 3) = *(undefined2 *)((uVar24 >> 4 & 0x3fe) + iVar20);
                *(short *)(puVar35 + 5) = sVar9;
                *(undefined2 *)(puVar35 + 7) = uVar6;

                uVar40 = *(uint *)(iVar54 + 0xc0);
                uVar55 = *(uint *)(iVar54 + 0xd0);
                puVar35[2] = *(uint *)(iVar54 + 0xb0);
                puVar35[4] = uVar40;
                puVar35[6] = uVar55;

                sVar9 = *(short *)(iVar54 + 0x3ac);
                uVar6 = *(undefined2 *)(iVar54 + 0x3ae);
                puVar35[1] = *(uint *)(iVar54 + 0x3a4);
                *(short *)((int)puVar35 + 0xe) = sVar9;
                *(undefined2 *)((int)puVar35 + 0x16) = uVar6;
                *(undefined *)((int)puVar35 + 3) = 7;

                uVar40 = iVar26 - 0x1eU & 3;
                iVar20 = *(int *)((iVar26 - 0x1eU) - uVar40);
                uVar55 = iVar26 - 0x1eU & 3;
                puVar48 = (uint *)((iVar26 - 0x1eU) - uVar55);
                *puVar48 = *puVar48 & -1 << (uVar55 + 1) * 8 |
                           (uint)((int)puVar35 << 8) >> (3 - uVar55) * 8;
                uVar55 = (int)puVar35 + 2U & 3;
                puVar48 = (uint *)(((int)puVar35 + 2U) - uVar55);
                *puVar48 = *puVar48 & -1 << (uVar55 + 1) * 8 |
                           (iVar20 << (3 - uVar40) * 8 |
                           (int)sVar9 & 0xffffffffU >> (uVar40 + 1) * 8) >> (3 - uVar55) * 8;
                puVar35 = puVar35 + 8;
              }

              if (0x480 < (int)uVar17) goto LAB_80065ea4;
              puVar48 = *(uint **)(iVar54 + 0x6c);
              uVar17 = iVar26 - 0x1eU & 3;
              iVar20 = *(int *)((iVar26 - 0x1eU) - uVar17);

              uVar40 = puVar52[4];
              uVar55 = puVar52[5];
              puVar35[1] = puVar52[3];
              puVar35[4] = uVar40;
              puVar35[7] = uVar55;
              uVar55 = puVar52[7];
              uVar40 = puVar52[8];
              puVar35[3] = puVar52[6] + ((int)uVar24 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                           *(int *)(iVar54 + 0x39c);
              puVar35[6] = uVar55;
              puVar35[9] = uVar40;

              uVar40 = *(uint *)(iVar54 + 0xc0);
              uVar55 = *(uint *)(iVar54 + 0xd0);
              puVar35[2] = *(uint *)(iVar54 + 0xb0);
              puVar35[5] = uVar40;
              puVar35[8] = uVar55;

              *puVar35 = (iVar20 << (3 - uVar17) * 8 | uVar36 & 0xffffffffU >> (uVar17 + 1) * 8) >>
                         8 | 0x9000000;
              bVar15 = puVar48 < puVar35;
              uVar17 = iVar26 - 0x1eU & 3;
              puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
              *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                         (uint)((int)puVar35 << 8) >> (3 - uVar17) * 8;
              puVar35 = puVar35 + 10;
              if (bVar15) break;
            }
          }
        }

LAB_800664c0:
        puVar52 = puVar52 + 9;
      } while (puVar52 != *(uint **)(iVar54 + 0x3b4));
      *(uint **)(iVar54 + 0x68) = puVar35;
    }

LAB_800664d4:
    puVar52 = *(uint **)(puVar53 + 0x1c);
    iVar54 = 0x1f800000;
    if (puVar53[9] != 0) {
      DAT_1f800394 = 0x800;
      DAT_1f8003b4 = puVar52 + (uint)puVar53[9] * 10;
      puVar35 = DAT_1f800068;

      do {
        iVar26 = *(int *)(iVar54 + 0x70);
        uVar17 = *puVar52;
        uVar25 = puVar52[1];
        puVar50 = (undefined4 *)((uVar17 & 0xff) * 0x10 + iVar26);
        puVar45 = (undefined4 *)(((int)uVar17 >> 4 & 0xff0U) + iVar26);
        puVar37 = (undefined4 *)(((int)uVar17 >> 0xc & 0xff0U) + iVar26);
        puVar51 = (uint *)(((int)uVar17 >> 0x14 & 0xff0U) + iVar26);
        uVar36 = puVar50[1];
        uVar40 = puVar45[1];
        uVar55 = puVar37[1];
        uVar24 = puVar51[1];

        *(undefined4 **)(iVar54 + 0xe8) = puVar50;
        *(undefined4 **)(iVar54 + 0x148) = puVar45;
        *(undefined4 **)(iVar54 + 0x1a8) = puVar37;
        *(uint **)(iVar54 + 0x208) = puVar51;

        uVar17 = iVar54 + 0xadU & 3;
        puVar48 = (uint *)((iVar54 + 0xadU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xb7) = (char)uVar36;
        uVar17 = iVar54 + 0xbdU & 3;
        puVar48 = (uint *)((iVar54 + 0xbdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar40 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 199) = (char)uVar40;
        uVar17 = iVar54 + 0xcdU & 3;
        puVar48 = (uint *)((iVar54 + 0xcdU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar55 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xd7) = (char)uVar55;
        uVar17 = iVar54 + 0xddU & 3;
        puVar48 = (uint *)((iVar54 + 0xddU) - uVar17);
        *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 | uVar24 >> (3 - uVar17) * 8;
        *(char *)(iVar54 + 0xe7) = (char)uVar24;

        if ((uVar36 & uVar40 & uVar55 & uVar24 & 0x1f) == 0) {
          uVar19 = puVar45[2];
          uVar27 = puVar37[2];
          uVar33 = puVar51[2];
          gte_ldSXY0(uVar19);
          gte_ldSXY1(uVar27);
          gte_ldSXY2(puVar50[2]);
          *(undefined4 *)(iVar54 + 0xb0) = puVar50[2];
          *(undefined4 *)(iVar54 + 0xc0) = uVar19;
          gte_nclip_b();

          uVar18 = uVar25 & 1;
          uVar17 = uVar36;
          if ((int)uVar36 < (int)uVar40 == uVar18) {
            uVar17 = uVar40;
          }
          if ((int)uVar17 < (int)uVar55 == uVar18) {
            uVar17 = uVar55;
          }
          iVar26 = gte_stMAC0();
          gte_ldSXYP(uVar33);
          uVar16 = -iVar26;
          *(undefined4 *)(iVar54 + 0xd0) = uVar27;
          *(uint *)(iVar54 + 0xe0) = uVar33;
          gte_nclip_b();

          if ((int)uVar17 < (int)uVar24 == uVar18) {
            uVar17 = uVar24;
          }
          uVar17 = ((int)uVar17 >> 0x10) << (*(uint *)(iVar54 + 0x98) & 0x1f);
          if ((int)uVar17 < 0) {
            uVar17 = 0;
          }
          iVar26 = (uVar17 >> 0xd) << 2;
          if (0xfff < uVar17 >> 0xd) {
            iVar26 = 0x3ffc;
          }
          iVar26 = *(int *)(iVar54 + 100) + iVar26 + (uVar25 & 0x1e) * 2;
          uVar17 = gte_stMAC0();
          uVar36 = (uVar36 | uVar40 | uVar55 | uVar24) & 0x20;

          if ((uVar16 | uVar17 | uVar36) != 0) {
            uVar40 = uVar16 - 1 & uVar17 - 1;
            if (*(char *)(iVar54 + 0x398) < '\0') {
              uVar40 = ~(uVar16 - 1 | uVar17 - 1);
            }
            if (-1 < (int)(uVar40 & uVar36 - 0x20)) {
              iVar20 = uVar16 + uVar17;
              if (iVar20 < 0) {
                iVar20 = -iVar20;
              }
              uVar19 = *puVar45;
              uVar27 = *puVar37;
              uVar17 = *puVar51;
              *(undefined4 *)(iVar54 + 0xa8) = *puVar50;
              *(undefined4 *)(iVar54 + 0xb8) = uVar19;
              *(undefined4 *)(iVar54 + 200) = uVar27;
              *(uint *)(iVar54 + 0xd8) = uVar17;
              if (uVar36 != 0) {
LAB_80066798:
                *(uint **)(iVar54 + 0x68) = puVar35;
                *(int *)(iVar54 + 0x9c) = iVar26 + -0x20;
                *(uint *)(iVar54 + 0xa0) = puVar52[3];
                uVar55 = puVar52[8];
                uVar40 = puVar52[9];
                uVar36 = puVar52[7] + ((int)uVar25 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                         *(int *)(iVar54 + 0x39c);
                *(uint *)(iVar54 + 0xa4) = uVar55;
                uVar17 = iVar54 + 0xa5U & 3;
                puVar35 = (uint *)((iVar54 + 0xa5U) - uVar17);
                *puVar35 = *puVar35 & -1 << (uVar17 + 1) * 8 | uVar36 >> (3 - uVar17) * 8;
                *(short *)(iVar54 + 0xae) = (short)uVar36;
                *(short *)(iVar54 + 0xbe) = (short)uVar55;
                *(short *)(iVar54 + 0xce) = (short)uVar40;
                *(short *)(iVar54 + 0xde) = (short)(uVar40 >> 0x10);
                DAT_1f800388 = DAT_1f800068;
                puVar37 = &DAT_1f8000a8;
                iVar26 = 0x1f800000;
                ppuVar41 = &DAT_1f8000e8;
                ppuVar28 = &DAT_1f8000e8;
                pbVar21 = (byte *)((int)&DAT_1f8000b4 + 3);
                do {
                  bVar23 = *pbVar21;
                  *ppuVar28 = puVar37;
                  ppuVar28 = ppuVar28 + 1;
                  if ((bVar23 & 0x20) != 0) {
                    gte_ldVXY0(puVar37);
                    gte_ldVZ0(pbVar21 + -0xb);
                    gte_rtps_b();
                    iVar20 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar20) {
                      *pbVar21 = bVar23 & 0x1f;
                    }
                  }
                  pbVar21 = pbVar21 + 0x10;
                  puVar37 = puVar37 + 4;
                } while (ppuVar28 != (undefined4 **)&DAT_1f8000f8);

                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390._0_3_ = SUB43(DAT_1f800388,0);
                DAT_1f800390 = CONCAT13(0xc,(undefined3)DAT_1f800390);
LAB_80066878:

                pSVar38 = (SVECTOR *)(ppuVar41 + 4);
                puVar50 = *ppuVar41;
                puVar46 = ppuVar41[1];
                puVar42 = ppuVar41[2];
                puVar49 = ppuVar41[3];

                sVar9 = *(short *)puVar50;
                sVar10 = *(short *)puVar46;
                sVar11 = *(short *)puVar42;
                iVar31 = (int)sVar9 + (int)sVar10;
                *(short *)(ppuVar41 + 8) = (short)(iVar31 >> 1);
                sVar12 = *(short *)puVar49;
                *(short *)(ppuVar41 + 0xc) = (short)((int)sVar10 + (int)sVar11 >> 1);
                iVar20 = (int)sVar11 + (int)sVar12;
                *(short *)(ppuVar41 + 0x10) = (short)(iVar20 >> 1);
                *(short *)(ppuVar41 + 0x14) = (short)((int)sVar12 + (int)sVar9 >> 1);
                *(short *)(ppuVar41 + 4) = (short)(iVar31 + iVar20 >> 2);

                sVar9 = *(short *)((int)puVar50 + 2);
                sVar10 = *(short *)((int)puVar46 + 2);
                sVar11 = *(short *)((int)puVar42 + 2);
                iVar31 = (int)sVar9 + (int)sVar10;
                *(short *)((int)ppuVar41 + 0x22) = (short)(iVar31 >> 1);
                sVar12 = *(short *)((int)puVar49 + 2);
                *(short *)((int)ppuVar41 + 0x32) = (short)((int)sVar10 + (int)sVar11 >> 1);
                iVar20 = (int)sVar11 + (int)sVar12;
                *(short *)((int)ppuVar41 + 0x42) = (short)(iVar20 >> 1);
                *(short *)((int)ppuVar41 + 0x52) = (short)((int)sVar12 + (int)sVar9 >> 1);
                *(short *)((int)ppuVar41 + 0x12) = (short)(iVar31 + iVar20 >> 2);

                sVar9 = *(short *)(puVar50 + 1);
                sVar10 = *(short *)(puVar46 + 1);
                sVar11 = *(short *)(puVar42 + 1);
                iVar31 = (int)sVar9 + (int)sVar10;
                *(short *)(ppuVar41 + 9) = (short)(iVar31 >> 1);
                sVar12 = *(short *)(puVar49 + 1);
                *(short *)(ppuVar41 + 0xd) = (short)((int)sVar10 + (int)sVar11 >> 1);
                iVar20 = (int)sVar11 + (int)sVar12;
                *(short *)(ppuVar41 + 0x11) = (short)(iVar20 >> 1);
                *(short *)(ppuVar41 + 0x15) = (short)((int)sVar12 + (int)sVar9 >> 1);
                *(short *)(ppuVar41 + 5) = (short)(iVar31 + iVar20 >> 2);

                uVar55 = puVar50[3];
                uVar17 = puVar46[3];
                uVar36 = puVar42[3];
                puVar45 = (undefined4 *)((int)((uVar55 & 0xfefefe) + (uVar17 & 0xfefefe)) >> 1);
                ppuVar41[0xb] = puVar45;
                uVar40 = puVar49[3];
                ppuVar41[0xf] =
                     (undefined4 *)((int)((uVar17 & 0xfefefe) + (uVar36 & 0xfefefe)) >> 1);
                puVar37 = (undefined4 *)((int)((uVar36 & 0xfefefe) + (uVar40 & 0xfefefe)) >> 1);
                ppuVar41[0x13] = puVar37;
                ppuVar41[0x17] =
                     (undefined4 *)((int)((uVar40 & 0xfefefe) + (uVar55 & 0xfefefe)) >> 1);
                ppuVar41[7] = (undefined4 *)
                              ((int)(((uint)puVar45 & 0xfefefe) + ((uint)puVar37 & 0xfefefe)) >> 1);

                gte_ldv0(pSVar38);
                gte_rtps_b();

                bVar23 = *(byte *)((int)puVar50 + 6);
                bVar1 = *(byte *)((int)puVar46 + 6);
                bVar2 = *(byte *)((int)puVar42 + 6);
                iVar31 = (uint)bVar23 + (uint)bVar1;
                *(char *)&pSVar38[2].pad = (char)(iVar31 >> 1);
                bVar3 = *(byte *)((int)puVar49 + 6);
                *(char *)&pSVar38[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)&pSVar38[6].pad = (char)(iVar20 >> 1);
                *(char *)&pSVar38[8].pad = (char)((int)((uint)bVar3 + (uint)bVar23) >> 1);
                *(char *)&pSVar38->pad = (char)(iVar31 + iVar20 >> 2);

                bVar23 = *(byte *)((int)puVar50 + 7);
                bVar1 = *(byte *)((int)puVar46 + 7);
                bVar2 = *(byte *)((int)puVar42 + 7);
                iVar31 = (uint)bVar23 + (uint)bVar1;
                *(char *)((int)&pSVar38[2].pad + 1) = (char)(iVar31 >> 1);
                bVar3 = *(byte *)((int)puVar49 + 7);
                *(char *)((int)&pSVar38[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)((int)&pSVar38[6].pad + 1) = (char)(iVar20 >> 1);
                *(char *)((int)&pSVar38[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar23) >> 1);
                *(char *)((int)&pSVar38->pad + 1) = (char)(iVar31 + iVar20 >> 2);

                uVar30 = *(ushort *)(iVar26 + 0x62);
                uVar13 = *(ushort *)(iVar26 + 0x5e);
                uVar14 = *(ushort *)(iVar26 + 0x60);
                pSVar43 = pSVar38;

                do {
                  iVar31 = gte_stFLAG();
                  gte_ldVXY0(pSVar43 + 2);
                  gte_ldVZ0(&pSVar43[2].vz);
                  gte_stSXY2();
                  iVar20 = gte_stIR3();
                  gte_rtps_b();

                  bVar23 = iVar20 < (int)(uint)uVar30;
                  if (pSVar43[1].vx < 0) {
                    bVar23 = bVar23 | 2;
                  }
                  bVar23 = bVar23 | ((int)(uVar13 - 1) < (int)pSVar43[1].vx) << 2;
                  if (pSVar43[1].vy < 0) {
                    bVar23 = bVar23 | 8;
                  }
                  bVar23 = bVar23 | ((int)(uVar14 - 1) < (int)pSVar43[1].vy) << 4;
                  if (iVar31 < 0) {
                    bVar23 = bVar23 | 0x20;
                  }
                  pSVar44 = pSVar43 + 2;
                  *(byte *)((int)&pSVar43[1].pad + 1) = bVar23;
                  pSVar43 = pSVar44;
                } while (pSVar44 != pSVar38 + 10);

                piVar29 = *(int **)(iVar26 + 0x68);
                cVar5 = *(char *)(iVar26 + 0xa3);
                uVar17 = iVar26 + 0xa5U & 3;
                uVar40 = *(int *)((iVar26 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                         (uint)pSVar44 & 0xffffffffU >> (uVar17 + 1) * 8;
                uVar36 = *(uint *)(iVar26 + 0xa4);
                ppuVar28 = ppuVar41 + 3;
                uVar17 = 2;
                iVar20 = 3;

                do {
                  uVar17 = uVar17 & 3;
                  puVar37 = *ppuVar28;
                  puVar45 = ppuVar41[uVar17];
                  bVar23 = *(byte *)((int)puVar37 + 0xf) |
                           *(byte *)((int)ppuVar41 + uVar17 * 0x10 + 0x2f) |
                           *(byte *)((int)puVar45 + 0xf);

                  if ((bVar23 & 0x20) == 0) {
                    gte_ldSXY0(puVar37 + 2);
                    gte_ldSXY1(ppuVar41 + uVar17 * 4 + 10);
                    gte_ldSXY2(puVar45 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();

                    uVar55 = (uint)(short *)((int)puVar37 + 6U) & 3;
                    uVar40 = uVar40 & -1 << (4 - uVar55) * 8 |
                             *(uint *)((int)(short *)((int)puVar37 + 6U) - uVar55) >> uVar55 * 8;
                    uVar55 = (int)ppuVar41 + uVar17 * 0x10 + 0x26;
                    uVar24 = uVar55 & 3;
                    uVar36 = uVar36 & -1 << (4 - uVar24) * 8 |
                             *(uint *)(uVar55 - uVar24) >> uVar24 * 8;

                    piVar29[3] = uVar40;
                    uVar55 = (uint)(short *)((int)puVar45 + 6U) & 3;
                    uVar24 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar55);
                    piVar29[6] = uVar36;
                    piVar29[9] = bVar23 & 0x20 & -1 << (4 - uVar55) * 8 | uVar24 >> uVar55 * 8;
                    *piVar29 = (int)(piVar29 + -0x1dbffff6);
                    iVar31 = gte_stMAC0();
                    gte_stSXY2();

                    if (iVar31 != 0) {
                      puVar50 = ppuVar41[uVar17 * 4 + 0xb];
                      piVar29[1] = puVar37[3];
                      iVar31 = puVar45[3];
                      piVar29[4] = (int)puVar50;
                      piVar29[7] = iVar31;
                      *(char *)((int)piVar29 + 7) = cVar5 + -8;
                      *(int **)(iVar26 + 0x38c) = piVar29;
                      piVar29 = piVar29 + 10;
                    }
                  }

                  ppuVar28 = ppuVar28 + -1;
                  iVar31 = iVar20 + -1;
                  *(int **)(iVar26 + 0x68) = piVar29;
                  uVar17 = iVar20 - 2;
                  iVar20 = iVar31;
                } while (-1 < iVar31);

                uVar17 = 3;
                if (*(uint *)(iVar26 + 0x68) <= *(uint *)(iVar26 + 0x6c)) {
                  uVar36 = 2;
                  ppuVar28 = ppuVar41;

                  do {
                    ppuVar47 = ppuVar28 + uVar17 * 4 + 8;
                    ppuVar39 = ppuVar28 + (uVar36 & 3) * 4 + 8;
                    puVar37 = ppuVar28[uVar17];
                    uVar36 = uVar17;

                    if ((*(byte *)((int)puVar37 + 0xf) & *(byte *)((int)ppuVar47 + 0xf) &
                         *(byte *)((int)ppuVar28 + 0x1f) & *(byte *)((int)ppuVar39 + 0xf) & 0x1f) == 0) {

                      if (((*(byte *)((int)puVar37 + 0xf) | *(byte *)((int)ppuVar47 + 0xf) |
                            *(byte *)((int)ppuVar28 + 0x1f) | *(byte *)((int)ppuVar39 + 0xf)) & 0x20) == 0) {

                        piVar29 = *(int **)(iVar26 + 0x68);
                        gte_ldSXY0(ppuVar47 + 2);
                        gte_ldSXY1(puVar37 + 2);
                        gte_ldSXY2(ppuVar28 + 6);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();

                        puVar45 = ppuVar47[3];
                        piVar29[1] = puVar37[3];
                        puVar50 = ppuVar28[7];
                        piVar29[4] = (int)puVar45;
                        puVar45 = ppuVar39[3];
                        piVar29[10] = (int)puVar50;
                        piVar29[7] = (int)puVar45;
                        iVar31 = gte_stMAC0();

                        gte_ldSXY0(ppuVar39 + 2);
                        uVar40 = iVar26 + 0xa5U & 3;
                        uVar33 = *(uint *)(iVar26 + 0xa4);
                        gte_nclip_b();

                        uVar55 = (uint)(short *)((int)puVar37 + 6U) & 3;
                        uVar18 = (*(int *)((iVar26 + 0xa5U) - uVar40) << (3 - uVar40) * 8 |
                                 (uint)puVar45 & 0xffffffffU >> (uVar40 + 1) * 8) &
                                 -1 << (4 - uVar55) * 8 |
                                 *(uint *)((int)(short *)((int)puVar37 + 6U) - uVar55) >> uVar55 * 8;
                        uVar40 = (uint)(short *)((int)ppuVar47 + 6U) & 3;
                        uVar24 = *(uint *)((int)(short *)((int)ppuVar47 + 6U) - uVar40);
                        piVar29[3] = uVar18;
                        uVar55 = (int)ppuVar28 + 0x16U & 3;
                        uVar25 = *(uint *)(((int)ppuVar28 + 0x16U) - uVar55);
                        piVar29[6] = uVar33 & -1 << (4 - uVar40) * 8 | uVar24 >> uVar40 * 8;
                        uVar40 = (uint)(short *)((int)ppuVar39 + 6U) & 3;
                        uVar24 = *(uint *)((int)(short *)((int)ppuVar39 + 6U) - uVar40);
                        piVar29[0xc] = (uint)puVar50 & -1 << (4 - uVar55) * 8 | uVar25 >> uVar55 * 8;
                        piVar29[9] = uVar18 & -1 << (4 - uVar40) * 8 | uVar24 >> uVar40 * 8;

                        iVar20 = gte_stMAC0();
                        uVar40 = iVar31 - iVar20;
                        gte_stSXY0();
                        if ((int)uVar40 < 0) {
                          uVar40 = -uVar40;
                        }
                        gte_stSXY2();

                        if (uVar40 <= *(ushort *)(iVar26 + 0x394)) {
                          uVar4 = *(undefined *)(iVar26 + 0xa3);
                          *piVar29 = (int)(piVar29 + -0x1cfffff3);
                          *(undefined *)((int)piVar29 + 7) = uVar4;
                          *(int **)(iVar26 + 0x38c) = piVar29;
                          *(int **)(iVar26 + 0x68) = piVar29 + 0xd;
                          goto LAB_80066da4;
                        }
                      }
                      if (ppuVar28 != (undefined4 **)(iVar26 + 0x328)) goto code_r0x80066d70;
                    }
LAB_80066da4:

                    while( true ) {
                      uVar17 = uVar36 - 1;
                      uVar36 = uVar36 - 2;
                      if (-1 < (int)uVar17) break;

                      if (ppuVar28 == (undefined4 **)(iVar26 + 0xe8)) {
                        uVar17 = *(uint *)(iVar26 + 0x388);

                        if (*(uint *)(iVar26 + 0x6c) < *(uint *)(iVar26 + 0x68)) {
                          *(uint *)(iVar26 + 0x68) = uVar17;
                        }
                        else if (*(uint *)(iVar26 + 0x68) != uVar17) {
                          iVar31 = *(int *)(iVar26 + 0x38c);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar40 = uVar36 & 3;
                          iVar20 = *(int *)(uVar36 - uVar40);
                          uVar36 = *(int *)(iVar26 + 0x9c) + 2;
                          uVar55 = uVar36 & 3;
                          puVar35 = (uint *)(uVar36 - uVar55);
                          *puVar35 = *puVar35 & -1 << (uVar55 + 1) * 8 |
                                     (uVar17 << 8) >> (3 - uVar55) * 8;
                          uVar17 = iVar31 + 2;
                          uVar36 = uVar17 & 3;
                          puVar35 = (uint *)(uVar17 - uVar36);
                          *puVar35 = *puVar35 & -1 << (uVar36 + 1) * 8 |
                                     (uint)(iVar20 << (3 - uVar40) * 8) >> (3 - uVar36) * 8;
                        }
                        goto LAB_80066e04;
                      }

                      pbVar21 = (byte *)((int)ppuVar28 + -0x41);
                      ppuVar28 = ppuVar28 + -0x18;
                      uVar36 = (uint)(*pbVar21 >> 6);
                    }
                  } while( true );
                }

                *(undefined4 *)(iVar26 + 0x68) = *(undefined4 *)(iVar26 + 0x388);

LAB_80066e04:

                puVar35 = *(uint **)(iVar54 + 0x68);
                if (*(uint **)(iVar54 + 0x6c) <= puVar35) {
                  *(uint **)(iVar54 + 0x68) = puVar35;
                  return;
                }
                goto LAB_80066ec4;
              }

              if ((int)(uVar25 & (int)*(char *)(iVar54 + 0x399)) < 0) {

                iVar31 = *(int *)(iVar54 + 0x74);
                uVar36 = puVar52[2];
                uVar6 = *(undefined2 *)((uVar36 & 0x3fe) + iVar31);
                sVar9 = *(short *)((uVar36 >> 9 & 0x3fe) + iVar31);
                uVar17 = (uint)sVar9;
                uVar7 = *(undefined2 *)((uVar36 >> 0x12 & 0x3fe) + iVar31);
                *(undefined2 *)(puVar35 + 3) = *(undefined2 *)((uVar25 >> 4 & 0x3fe) + iVar31);
                *(undefined2 *)(puVar35 + 5) = uVar6;
                *(short *)(puVar35 + 9) = sVar9;
                *(undefined2 *)(puVar35 + 7) = uVar7;

                uVar36 = *(uint *)(iVar54 + 0xc0);
                uVar40 = *(uint *)(iVar54 + 0xd0);
                uVar55 = *(uint *)(iVar54 + 0xe0);
                puVar35[2] = *(uint *)(iVar54 + 0xb0);
                puVar35[4] = uVar36;
                puVar35[8] = uVar40;
                puVar35[6] = uVar55;

                sVar9 = *(short *)(iVar54 + 0x3ac);
                uVar6 = *(undefined2 *)(iVar54 + 0x3ae);
                puVar35[1] = *(uint *)(iVar54 + 0x3a8);
                *(short *)((int)puVar35 + 0xe) = sVar9;
                *(undefined2 *)((int)puVar35 + 0x16) = uVar6;
                *(undefined *)((int)puVar35 + 3) = 9;

                uVar36 = iVar26 - 0x1eU & 3;
                iVar31 = *(int *)((iVar26 - 0x1eU) - uVar36);
                uVar40 = iVar26 - 0x1eU & 3;
                puVar48 = (uint *)((iVar26 - 0x1eU) - uVar40);
                *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                           (uint)((int)puVar35 << 8) >> (3 - uVar40) * 8;
                uVar40 = (int)puVar35 + 2U & 3;
                puVar48 = (uint *)(((int)puVar35 + 2U) - uVar40);
                *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 |
                           (iVar31 << (3 - uVar36) * 8 |
                           (int)sVar9 & 0xffffffffU >> (uVar36 + 1) * 8) >> (3 - uVar40) * 8;
                puVar35 = puVar35 + 10;
              }

              if (0x800 < iVar20) goto LAB_80066798;
              puVar51 = *(uint **)(iVar54 + 0x6c);
              uVar36 = iVar26 - 0x1eU & 3;
              iVar20 = *(int *)((iVar26 - 0x1eU) - uVar36);

              uVar40 = puVar52[4];
              uVar55 = puVar52[5];
              uVar24 = puVar52[6];
              puVar35[1] = puVar52[3];
              puVar35[4] = uVar40;
              puVar35[10] = uVar55;
              puVar35[7] = uVar24;
              uVar40 = puVar52[8];
              uVar55 = puVar52[9];
              puVar35[3] = puVar52[7] + ((int)uVar25 >> 0xe & *(uint *)(iVar54 + 0x3a0)) +
                           *(int *)(iVar54 + 0x39c);
              puVar35[6] = uVar40;
              puVar35[0xc] = uVar55;

              uVar40 = (int)puVar35 + 0x25U & 3;
              puVar48 = (uint *)(((int)puVar35 + 0x25U) - uVar40);
              *puVar48 = *puVar48 & -1 << (uVar40 + 1) * 8 | uVar55 >> (3 - uVar40) * 8;

              uVar40 = *(uint *)(iVar54 + 0xc0);
              uVar55 = *(uint *)(iVar54 + 0xd0);
              uVar24 = *(uint *)(iVar54 + 0xe0);
              puVar35[2] = *(uint *)(iVar54 + 0xb0);
              puVar35[5] = uVar40;
              puVar35[0xb] = uVar55;
              puVar35[8] = uVar24;

              *puVar35 = (iVar20 << (3 - uVar36) * 8 | uVar17 & 0xffffffffU >> (uVar36 + 1) * 8) >>
                         8 | 0xc000000;
              bVar15 = puVar51 < puVar35;
              uVar17 = iVar26 - 0x1eU & 3;
              puVar48 = (uint *)((iVar26 - 0x1eU) - uVar17);
              *puVar48 = *puVar48 & -1 << (uVar17 + 1) * 8 |
                         (uint)((int)puVar35 << 8) >> (3 - uVar17) * 8;
              puVar35 = puVar35 + 0xd;
              if (bVar15) break;
            }
          }
        }
LAB_80066ec4:

        puVar52 = puVar52 + 10;
      } while (puVar52 != *(uint **)(iVar54 + 0x3b4));
      *(uint **)(iVar54 + 0x68) = puVar35;
    }
  }
  return;
LAB_8006510c:

  *(char *)(ppuVar28 + 7) = (char)uVar17;
  ppuVar41 = ppuVar28 + 0x18;
  *ppuVar41 = ppuVar47;
  ppuVar28[0x19] = ppuVar39;
  ppuVar28[0x1a] = ppuVar32;
  goto LAB_80064ea0;

code_r0x80065b1c:

  *(char *)(ppuVar28 + 7) = (char)uVar17;
  ppuVar41 = ppuVar28 + 0x18;
  if ((uVar17 & 1) == 0) {
    *ppuVar41 = puVar37;
    ppuVar28[0x19] = ppuVar47;
    ppuVar28[0x1a] = ppuVar28 + 4;
    ppuVar28[0x1b] = ppuVar39;
  }
  else {
    *ppuVar41 = ppuVar39;
    ppuVar28[0x19] = puVar37;
    ppuVar28[0x1a] = ppuVar47;
    ppuVar28[0x1b] = ppuVar28 + 4;
  }
  goto LAB_800656ec;

LAB_80066260:

  *(byte *)((int)ppuVar28 + 0x1f) = *(byte *)((int)ppuVar28 + 0x1f) & 0x3f | (byte)(uVar17 << 6);
  ppuVar41 = ppuVar28 + 0x18;
  *ppuVar41 = ppuVar47;
  ppuVar28[0x19] = ppuVar39;
  ppuVar28[0x1a] = ppuVar32;
  goto LAB_80065f88;

code_r0x80066d70:

  uVar17 = *(byte *)((int)ppuVar28 + 0x1f) & 0x3f | uVar17 << 6;
  *(char *)((int)ppuVar28 + 0x1f) = (char)uVar17;
  ppuVar41 = ppuVar28 + 0x18;
  if (uVar17 == 0) {
    *ppuVar41 = puVar37;
    ppuVar28[0x19] = ppuVar47;
    ppuVar28[0x1a] = ppuVar28 + 4;
    ppuVar28[0x1b] = ppuVar39;
  }
  else {
    *ppuVar41 = ppuVar39;
    ppuVar28[0x19] = puVar37;
    ppuVar28[0x1a] = ppuVar47;
    ppuVar28[0x1b] = ppuVar28 + 4;
  }
  goto LAB_80066878;
}
