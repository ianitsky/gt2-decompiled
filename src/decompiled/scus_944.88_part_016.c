// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_016.h"
#include "scus_944.88_part_006.h"
#include "scus_944.88_part_007.h"
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>

// Forward declarations for GTE functions used in this file
void gte_ldL11L12(undefined4 value);
void gte_ldL13L21(undefined4 value);
void gte_ldL22L23(undefined4 value);
void gte_ldL31L32(undefined4 value);
void gte_ldL33(undefined4 value);
void gte_ldIR1(undefined4 value);
void gte_llir(void);
undefined4 gte_stIR1(void);
int gte_stIR2(void);
void gte_ldVZ0(int value);
void gte_ldVZ1(int value);
void gte_ldVZ2(int value);
void gte_ldVXY0(int address);
void gte_ldVXY1(int address);
void gte_ldVXY2(int address);
void gte_rtpt_b(void);
undefined4 gte_stFLAG(void);
void gte_stSXY0(void);
void gte_stSXY1(void);
void gte_rtps_b(void);
void read_sz_fifo3(int value1, int value2, uint value3);
void gte_stsxy(long *address);
int gte_stSZ3(void);
int gte_stMAC0(void);
int gte_stSXY2(void);
void gte_ldDQB(undefined4 value);
void gte_ldDQA(undefined4 value);

// External variable declarations
extern undefined4 DAT_800b4a48;
extern undefined4 DAT_1f8003f0;
extern undefined4 DAT_1f8003f2;

void FUN_overlay0__8001f7f8(undefined4 param_1,undefined4 param_2)

{

  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;

  uint uVar10;
  uint uVar11;

  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar17;

  undefined4 *puVar16;
  long *r0;
  long *plVar19;
  undefined4 *puVar20;
  undefined4 *puVar22;
  undefined4 *puVar25;
  uint *puVar26;
  undefined *puVar24;
  undefined *puVar32;

  uint uVar21;
  uint uVar23;
  uint in_t5;
  uint uVar18;
  int iVar27;
  int iVar29;
  int iVar33;

  undefined4 uVar28;
  undefined4 uVar30;
  undefined4 uVar31;

  undefined auStack_58 [16];
  undefined4 local_48;

  puVar32 = auStack_58;
  local_48 = 0;

  while( true ) {

    if (**(uint **)(puVar32 + 0x5c) <= *(uint *)(puVar32 + 0x10)) break;

    puVar26 = *(uint **)(puVar32 + 0x5c) + *(uint *)(puVar32 + 0x10) * 7 + 1;

    DAT_1f8000b0 = puVar26[4];
    DAT_1f8000b4.value = puVar26[5];
    DAT_1f8000b8 = puVar26[6];

    FUN_80081374(&DAT_1f80009c,-(int)*(short *)((int)puVar26 + 2),(int)*(short *)puVar26,
                 (int)*(short *)(puVar26 + 1));

    FUN_8007b25c(&DAT_1f80009c,(int)*(short *)(puVar26 + 2),(int)*(short *)((int)puVar26 + 10),
                 -(int)*(short *)(puVar26 + 3));

    iVar29 = *(int *)(puVar32 + 0x58);
    sVar7 = *(short *)((int)puVar26 + 0xe);

    iVar27 = *(int *)(DAT_800b4a48 + *(short *)((int)puVar26 + 6) * 4 + 4);

    puVar22 = (undefined4 *)(iVar29 + 8);
    puVar20 = &DAT_1f800000;

    do {
      puVar16 = puVar20;
      puVar25 = puVar22;

      uVar28 = puVar25[1];
      uVar30 = puVar25[2];
      uVar31 = puVar25[3];

      *puVar16 = *puVar25;
      puVar16[1] = uVar28;
      puVar16[2] = uVar30;
      puVar16[3] = uVar31;

      puVar22 = puVar25 + 4;
      puVar20 = puVar16 + 4;
    } while (puVar22 != (undefined4 *)(iVar29 + 0x68));

    uVar28 = puVar25[5];
    puVar16[4] = *puVar22;
    puVar16[5] = uVar28;

    FUN_8007b008(0x1f800000,&DAT_1f80009c);

    uVar28 = FUN_8007ae38(iVar27,&DAT_1f800014,
                          (*(int *)(*(int *)(puVar32 + 0x58) + 0x78) << 0xc) / (int)sVar7);

    iVar29 = FUN_8007aef4(iVar27,uVar28);

    if (iVar29 != -1) {

      iVar27 = *(int *)(iVar27 + iVar29 * 8 + 8);

      FUN_8007b8a0(0x1f800000,0x1000,(int)*(short *)(iVar27 + 0x54),0xc);

      uVar10 = FUN_8007b8f8(0x1f800000,iVar27 + 0x44,iVar27 + 0x4c);
      *(uint *)(puVar32 + 0x14) = uVar10;

      if ((uVar10 & 0x1f) == 0) {

        DAT_1f80006c = DAT_801c93f0 + -0x2000;
        DAT_1f800068 = DAT_801c93ec;

        puVar22 = *(undefined4 **)(iVar27 + 0x24);
        iVar29 = 0x1f800000;

        if (*(ushort *)(iVar27 + 0x40) != 0) {

          puVar25 = puVar22 + (uint)*(ushort *)(iVar27 + 0x40) * 7;

          gte_ldL11L12((uint)DAT_1f8003f2);
          gte_ldL13L21((uint)DAT_1f8003f0 * -0x10000);
          gte_ldL22L23(0);
          gte_ldL31L32(0);
          gte_ldL33(0);

          plVar19 = puVar22 + 3;
          r0 = DAT_801c93ec + 8;
          puVar20 = DAT_801c93ec;

          do {

            uVar30 = *puVar22;
            iVar17 = plVar19[-2];

            gte_ldIR1(plVar19[-1] & 0xffff);
            gte_llir();

            sVar7 = (short)((uint)uVar30 >> 0x10);
            sVar6 = sVar7 + (short)((uint)plVar19[-1] >> 0x10);

            *(short *)(iVar29 + 0x9e) = sVar6;
            *(short *)(iVar29 + 0xa6) = sVar6;
            *(short *)(iVar29 + 0xae) = sVar7;
            *(short *)(iVar29 + 0xb6) = sVar7;

            uVar28 = gte_stIR1();
            iVar13 = gte_stIR2();

            sVar7 = (short)uVar30;
            sVar6 = sVar7 - (short)uVar28;
            iVar15 = iVar17 + iVar13;
            sVar7 = sVar7 + (short)uVar28;
            iVar17 = iVar17 - iVar13;

            *(short *)(iVar29 + 0x9c) = sVar6;
            *(short *)(iVar29 + 0xa4) = sVar7;
            *(short *)(iVar29 + 0xac) = sVar6;
            *(short *)(iVar29 + 0xb4) = sVar7;

            gte_ldVZ0(iVar17);
            gte_ldVZ1(iVar15);
            gte_ldVZ2(iVar15);

            gte_ldVXY0(iVar29 + 0xa4);
            gte_ldVXY1(iVar29 + 0x9c);
            gte_ldVXY2(iVar29 + 0xac);

            gte_rtpt_b();

            lVar14 = plVar19[2];
            uVar11 = plVar19[3];

            r0[-5] = plVar19[1];
            r0[-3] = lVar14;
            r0[-1] = uVar11;

            uVar10 = (int)r0 + 5U & 3;
            puVar26 = (uint *)(((int)r0 + 5U) - uVar10);
            *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 | uVar11 >> (3 - uVar10) * 8;

            uVar11 = gte_stFLAG();
            read_sz_fifo3(iVar15,iVar17,in_t5);

            gte_ldVXY0(iVar29 + 0xb4);
            gte_stSXY0();
            gte_stSXY1();
            gte_rtps_b();

            iVar13 = *(int *)(iVar29 + 100);
            lVar14 = *plVar19;

            *puVar20 = 0x9000000;
            r0[-7] = lVar14;

            uVar18 = *(uint *)(iVar29 + 0x98);

            uVar10 = gte_stFLAG();
            gte_stSXY1();
            uVar10 = uVar11 | uVar10;

            gte_stsxy(r0);

            if (-1 < (int)uVar10) {

              iVar12 = gte_stSZ3();
              iVar17 = (((int)(iVar15 + iVar17 + in_t5 + iVar12) >> 2) << (uVar18 & 0x1f)) >> 0xd;

              iVar15 = iVar17 << 2;
              if (0xfff < iVar17) {
                iVar15 = 0x3ffc;
              }

              uVar10 = iVar13 + iVar15 + 2;
              uVar18 = uVar10 & 3;
              iVar17 = *(int *)(uVar10 - uVar18);

              uVar10 = iVar13 + iVar15 + 2;
              uVar21 = uVar10 & 3;
              puVar26 = (uint *)(uVar10 - uVar21);

              *puVar26 = *puVar26 & -1 << (uVar21 + 1) * 8 |
                         (uint)((int)puVar20 << 8) >> (3 - uVar21) * 8;

              uVar10 = (int)puVar20 + 2U & 3;
              puVar26 = (uint *)(((int)puVar20 + 2U) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 |
                         (iVar17 << (3 - uVar18) * 8 | uVar11 & 0xffffffffU >> (uVar18 + 1) * 8) >>
                         (3 - uVar10) * 8;

              r0 = r0 + 10;
              puVar20 = puVar20 + 10;
            }

            puVar22 = puVar22 + 7;
            plVar19 = plVar19 + 7;
          } while (puVar22 != puVar25);

          *(undefined4 **)(iVar29 + 0x68) = puVar20;

          gte_ldL11L12(*(undefined4 *)(iVar29 + 0x2c));
          gte_ldL13L21(*(undefined4 *)(iVar29 + 0x30));
          gte_ldL22L23(*(undefined4 *)(iVar29 + 0x34));
          gte_ldL31L32(*(undefined4 *)(iVar29 + 0x38));
          gte_ldL33(*(undefined4 *)(iVar29 + 0x3c));
        }

        puVar22 = *(undefined4 **)(iVar27 + 0x28);

        if (*(ushort *)(iVar27 + 0x42) != 0) {

          *(undefined4 **)(puVar32 + 0x18) = puVar22 + (uint)*(ushort *)(iVar27 + 0x42) * 5;

          *(int *)(puVar32 + 0x24) = DAT_1f800064 + -0x20;

          *(undefined4 *)(puVar32 + 0x1c) = 0x61f;
          *(undefined4 *)(puVar32 + 0x20) = 0xec8;

          gte_ldDQB(0);

          puVar24 = (undefined *)((int)DAT_1f800068 + 0x31);
          *(undefined4 **)(puVar32 + 0x28) = puVar22 + 4;

          do {

            uVar10 = (*(uint **)(puVar32 + 0x28))[-3];

            gte_ldDQA((int)uVar10 >> 0x10);
            gte_ldVXY0(*puVar22);
            gte_ldVZ0(uVar10);

            gte_rtps_b();

            iVar29 = gte_stFLAG();
            iVar13 = gte_stSZ3();

            if (-1 < iVar29) {

              iVar15 = gte_stMAC0();
              iVar29 = gte_stSXY2();

              iVar13 = (iVar13 << ((ushort)DAT_1f800098 & 0x1f)) >> 0xd;
              sVar7 = (short)iVar29;

              if (0xfff < iVar13) {
                iVar13 = 0xfff;
              }

              uVar10 = (ushort)DAT_1f800098 - 10;
              iVar13 = *(int *)(puVar32 + 0x24) + iVar13 * 4;

              if ((int)uVar10 < 0) {
                iVar15 = iVar15 << (-uVar10 & 0x1f);
              }
              else {
                iVar15 = iVar15 >> (uVar10 & 0x1f);
              }

              uVar23 = (**(uint **)(puVar32 + 0x28) & 0xfefefe) >> 1;
              uVar10 = (uVar23 & 0xfcfcfc) >> 2;

              iVar33 = *(int *)(puVar32 + 0x1c) * (iVar15 >> 0xf);

              uVar23 = uVar23 | 0x3e000000;
              uVar21 = uVar10 | 0x3e000000;

              iVar12 = *(int *)(puVar32 + 0x20);
              in_t5 = (uVar10 & 0xf8f8f8) >> 3 | 0x3e000000;

              *(short *)(puVar24 + -0x11) = sVar7;
              *(short *)(puVar24 + 0x23) = sVar7;
              *(short *)(puVar24 + 0x57) = sVar7;
              *(short *)(puVar24 + 0x8b) = sVar7;

              sVar9 = (short)((uint)iVar29 >> 0x10);
              *(short *)(puVar24 + -0xf) = sVar9;

              iVar12 = iVar12 * (iVar15 >> 0xf);

              *(short *)(puVar24 + 0x25) = sVar9;
              *(short *)(puVar24 + 0x59) = sVar9;
              *(short *)(puVar24 + 0x8d) = sVar9;
              iVar17 = iVar33 >> 0xd;
              sVar1 = (short)iVar17;
              sVar8 = sVar7 - sVar1;
              *(short *)(puVar24 + -0x29) = sVar8;
              *(short *)(puVar24 + 0xb) = sVar8;
              sVar6 = (short)(iVar33 >> 0xc);
              *(short *)(puVar24 + 0x3f) = sVar8 + sVar6;
              *(short *)(puVar24 + 0x73) = sVar8 + sVar6;
              iVar15 = iVar12 >> 0xd;
              sVar5 = (short)iVar15;
              sVar7 = sVar7 - sVar5;
              iVar12 = iVar12 >> 0xc;
              sVar3 = (short)iVar12;
              sVar8 = sVar7 + sVar3;
              *(short *)(puVar24 + -0x1d) = sVar7 - sVar1;
              *(short *)(puVar24 + 0x17) = sVar8 - sVar1;
              sVar9 = sVar9 + sVar5;
              iVar17 = (iVar29 >> 0x10) - iVar17;
              *(short *)(puVar24 + 0x7f) = (sVar8 - sVar1) + sVar6;
              iVar15 = iVar17 + iVar15;
              sVar4 = (short)iVar17;
              sVar2 = sVar4 + sVar6;
              *(short *)(puVar24 + -0x27) = sVar9;
              *(short *)(puVar24 + 0xd) = sVar9;
              *(short *)(puVar24 + -0x1b) = (short)iVar15;
              uVar11 = iVar15 - iVar12;
              *(short *)(puVar24 + 0x19) = sVar2 + sVar5;
              *(short *)(puVar24 + -5) = sVar7;
              *(short *)(puVar24 + 0x2f) = sVar8;
              *(short *)(puVar24 + 0x4b) = (sVar7 - sVar1) + sVar6;
              *(short *)(puVar24 + 99) = sVar7;
              *(short *)(puVar24 + 0x97) = sVar8;
              *(short *)(puVar24 + -3) = sVar4;
              *(short *)(puVar24 + 0x31) = sVar2;
              *(short *)(puVar24 + 0x41) = sVar9 - sVar3;
              *(short *)(puVar24 + 0x4d) = (short)uVar11;
              *(short *)(puVar24 + 0x65) = sVar4;
              *(short *)(puVar24 + 0x75) = sVar9 - sVar3;
              *(short *)(puVar24 + 0x81) = (sVar2 + sVar5) - sVar3;
              *(short *)(puVar24 + 0x99) = sVar2;
              *DAT_1f800068 = 0xc000000;
              *(uint *)(puVar24 + -0x2d) = uVar21;
              *(uint *)(puVar24 + -0x21) = in_t5;
              *(uint *)(puVar24 + -0x15) = uVar23;
              *(uint *)(puVar24 + -9) = uVar21;
              *(undefined2 *)(puVar24 + -0x23) = 0x7f57;
              *(undefined2 *)(puVar24 + -0x17) = 0x29;
              puVar24[-0x25] = 0xa0;
              puVar24[-0x24] = 0x40;
              puVar24[-0x19] = 0x80;
              puVar24[-0x18] = 0x40;
              puVar24[-0xd] = 0xa0;
              puVar24[-0xc] = 0x60;
              puVar24[-1] = 0x80;
              *puVar24 = 0x60;
              uVar10 = iVar13 + 2U & 3;
              uVar11 = *(int *)((iVar13 + 2U) - uVar10) << (3 - uVar10) * 8 |
                       uVar11 & 0xffffffffU >> (uVar10 + 1) * 8;
              uVar10 = iVar13 + 2U & 3;
              puVar26 = (uint *)((iVar13 + 2U) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 |
                         (uint)((int)DAT_1f800068 << 8) >> (3 - uVar10) * 8;
              uVar10 = (int)DAT_1f800068 + 2U & 3;
              puVar26 = (uint *)(((int)DAT_1f800068 + 2U) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 | uVar11 >> (3 - uVar10) * 8;
              DAT_1f800068[0xd] = 0xc000000;
              *(undefined2 *)(puVar24 + 0x11) = 0x7f57;
              *(undefined2 *)(puVar24 + 0x1d) = 0x29;
              *(uint *)(puVar24 + 7) = uVar21;
              *(uint *)(puVar24 + 0x13) = in_t5;
              *(uint *)(puVar24 + 0x1f) = uVar23;
              *(uint *)(puVar24 + 0x2b) = uVar21;
              puVar24[0xf] = 0xa0;
              puVar24[0x10] = 0x40;
              puVar24[0x1b] = 0xbf;
              puVar24[0x1c] = 0x40;
              puVar24[0x27] = 0xa0;
              puVar24[0x28] = 0x60;
              puVar24[0x33] = 0xbf;
              puVar24[0x34] = 0x60;
              uVar10 = iVar13 + 2U & 3;
              uVar11 = *(int *)((iVar13 + 2U) - uVar10) << (3 - uVar10) * 8 |
                       uVar11 & 0xffffffffU >> (uVar10 + 1) * 8;
              uVar10 = iVar13 + 2U & 3;
              puVar26 = (uint *)((iVar13 + 2U) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 |
                         (uint)((int)(DAT_1f800068 + 0xd) * 0x100) >> (3 - uVar10) * 8;
              uVar10 = (int)DAT_1f800068 + 0x36U & 3;
              puVar26 = (uint *)(((int)DAT_1f800068 + 0x36U) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 | uVar11 >> (3 - uVar10) * 8;
              DAT_1f800068[0x1a] = 0xc000000;
              *(uint *)(puVar24 + 0x3b) = uVar21;
              *(uint *)(puVar24 + 0x47) = in_t5;
              *(uint *)(puVar24 + 0x53) = uVar23;
              *(uint *)(puVar24 + 0x5f) = uVar21;
              *(undefined2 *)(puVar24 + 0x45) = 0x7f57;
              *(undefined2 *)(puVar24 + 0x51) = 0x29;
              puVar24[0x43] = 0xa0;
              puVar24[0x44] = 0x7f;
              puVar24[0x4f] = 0x80;
              puVar24[0x50] = 0x7f;
              puVar24[0x5b] = 0xa0;
              puVar24[0x5c] = 0x60;
              puVar24[0x67] = 0x80;
              puVar24[0x68] = 0x60;
              uVar10 = iVar13 + 2U & 3;
              uVar18 = *(int *)((iVar13 + 2U) - uVar10) << (3 - uVar10) * 8 |
                       uVar11 & 0xffffffffU >> (uVar10 + 1) * 8;
              uVar10 = iVar13 + 2U & 3;
              puVar26 = (uint *)((iVar13 + 2U) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 |
                         (uint)((int)(DAT_1f800068 + 0x1a) * 0x100) >> (3 - uVar10) * 8;
              uVar10 = (int)DAT_1f800068 + 0x6aU & 3;
              puVar26 = (uint *)(((int)DAT_1f800068 + 0x6aU) - uVar10);
              *puVar26 = *puVar26 & -1 << (uVar10 + 1) * 8 | uVar18 >> (3 - uVar10) * 8;
              DAT_1f800068[0x27] = 0xc000000;
              *(undefined2 *)(puVar24 + 0x79) = 0x7f57;
              *(undefined2 *)(puVar24 + 0x85) = 0x29;
              *(uint *)(puVar24 + 0x6f) = uVar21;
              *(uint *)(puVar24 + 0x7b) = in_t5;
              *(uint *)(puVar24 + 0x87) = uVar23;
              *(uint *)(puVar24 + 0x93) = uVar21;
              puVar24[0x77] = 0xa0;
              puVar24[0x78] = 0x7f;
              puVar24[0x83] = 0xbf;
              puVar24[0x84] = 0x7f;
              puVar24[0x8f] = 0xa0;
              puVar24[0x90] = 0x60;
              puVar24[0x9b] = 0xbf;
              puVar24[0x9c] = 0x60;
              uVar10 = iVar13 + 2U & 3;
              iVar29 = *(int *)((iVar13 + 2U) - uVar10);
              uVar11 = iVar13 + 2U & 3;
              puVar26 = (uint *)((iVar13 + 2U) - uVar11);
              *puVar26 = *puVar26 & -1 << (uVar11 + 1) * 8 |
                         (uint)((int)(DAT_1f800068 + 0x27) * 0x100) >> (3 - uVar11) * 8;
              uVar11 = (int)DAT_1f800068 + 0x9eU & 3;
              puVar26 = (uint *)(((int)DAT_1f800068 + 0x9eU) - uVar11);
              *puVar26 = *puVar26 & -1 << (uVar11 + 1) * 8 |
                         (iVar29 << (3 - uVar10) * 8 | uVar18 & 0xffffffffU >> (uVar10 + 1) * 8) >>
                         (3 - uVar11) * 8;
              puVar24 = puVar24 + 0xd0;
              DAT_1f800068 = DAT_1f800068 + 0x34;
            }
            puVar22 = puVar22 + 5;
            *(int *)(puVar32 + 0x28) = *(int *)(puVar32 + 0x28) + 0x14;
          } while (puVar22 != *(undefined4 **)(puVar32 + 0x18));
        }
        if ((*(uint *)(puVar32 + 0x14) >> 0x10 & 0x3f) == 0) {
          FUN_overlay0__80019b58(iVar27);
        }
        else {
          FUN_overlay0__8001c17c(iVar27);
        }
        DAT_801c93ec = DAT_1f800068;
      }
    }
    *(int *)(puVar32 + 0x10) = *(int *)(puVar32 + 0x10) + 1;
  }
  return;
}

void FUN_overlay0__8002002c(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  iVar2 = param_2;

  do {

    if ((param_3 & 1) != 0) {

      FUN_overlay0__8001f7f8(param_1,*(undefined4 *)(iVar2 + 0x118));
    }

    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 1;

    param_3 = param_3 >> 1;
  } while (iVar1 < 0x20);

  FUN_overlay0__8001f7f8(param_1,*(undefined4 *)(param_2 + iVar1 * 4 + 0x118));
  return;
}

void FUN_overlay0__800200bc(int *param_1,int param_2)

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

undefined4 FUN_overlay0__80020110(int param_1,int param_2,int param_3)

{

  ushort uVar1;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar10;
  short sVar11;
  short sVar12;

  uint *puVar2;
  undefined4 *puVar9;
  undefined4 *puVar13;
  ushort *puVar14;
  int *piVar15;
  int *piVar31;
  long *plVar17;
  undefined4 *puVar20;
  int **ppiVar21;
  long *r0;
  int *piVar28;
  undefined *puVar32;
  int **ppiVar33;
  undefined4 *puVar34;
  uint *puVar36;
  int **ppiVar40;
  undefined *puVar41;

  int iVar16;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar35;
  int iVar42;

  uint uVar18;
  uint uVar19;
  uint uVar26;
  uint uVar27;
  uint uVar29;
  uint uVar30;

  long lVar22;

  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;

  undefined auStack_1080 [16];
  int *local_1070 [3];
  undefined2 local_1064 [2042];
  ushort local_70 [4];
  uint local_68;
  uint local_38;
  int local_34;
  int **local_30;
  int **local_2c;

  puVar41 = auStack_1080;
  local_34 = *(int *)(param_2 + 0x10);
  puVar34 = (undefined4 *)(param_1 + 8);
  puVar9 = &DAT_1f800000;
  do {
    puVar20 = puVar9;
    puVar13 = puVar34;
    uVar37 = puVar13[1];
    uVar38 = puVar13[2];
    uVar39 = puVar13[3];
    *puVar20 = *puVar13;
    puVar20[1] = uVar37;
    puVar20[2] = uVar38;
    puVar20[3] = uVar39;
    puVar34 = puVar13 + 4;
    puVar9 = puVar20 + 4;
  } while (puVar34 != (undefined4 *)(param_1 + 0x68));
  uVar37 = puVar13[5];
  puVar20[4] = *puVar34;
  puVar20[5] = uVar37;
  FUN_overlay0__80020e38(0x1f800000);
  DAT_1f8003a0 = *(undefined4 *)(local_34 + 8);
  FUN_overlay0__80020e84(0x1f800000);
  if (param_3 == 0) {
    _DAT_1f800398 = 0x480;
    DAT_1f80039c = 0x800;
  }
  else {
    _DAT_1f800398 = 0x120;
    DAT_1f80039c = 0x200;
  }
  FUN_800811b0(local_70,param_1 + 0xa4);
  local_68 = 0;
  iVar35 = 0;
  local_2c = (int **)0x0;
  DAT_1f8003f0 = (short)DAT_80093150[local_70[0] & 0xfff] >> 1;
  DAT_1f8003f2 = (short)DAT_80093150[(local_70[0] & 0xfff) + 0x400] >> 1;
  puVar14 = *(ushort **)(*(int *)(local_34 + *(int *)(param_1 + 0xa0) * 4 + 0xc) + 0xa0);
  ppiVar33 = local_1070;
  local_38 = (uint)*puVar14;
  do {
    if ((int)local_38 <= iVar35) {
      DAT_1f80006c = DAT_801c93f0 + -0x2000;
      local_30 = local_2c;
      DAT_1f800068 = DAT_801c93ec;
      while (iVar35 = *(int *)(puVar41 + 0x1050), iVar35 != 0) {
        iVar16 = *(int *)(iVar35 + 4);
        uVar1 = *(ushort *)(iVar35 + 0xc);
        *(uint *)(puVar41 + 0x101c) = (uint)*(ushort *)(iVar35 + 0xe);
        FUN_overlay0__80026bb4(iVar16,0x1f800000);
        iVar35 = iVar16 + 0xa4;
        if (*(int *)(puVar41 + 0x1088) != 0) {
          iVar35 = *(int *)(iVar16 + 0x94);
        }
        *(int *)(puVar41 + 0x1020) = iVar35;
        if ((DAT_800a951c == 0) && (2 < uVar1)) {
          puVar34 = *(undefined4 **)(iVar35 + 0x28);
          if (*(ushort *)(iVar35 + 0x42) != 0) {
            *(undefined4 **)(puVar41 + 0x1034) = puVar34 + (uint)*(ushort *)(iVar35 + 0x42) * 5;
            *(int *)(puVar41 + 0x1040) = DAT_1f800064 + -0x20;
            *(undefined4 *)(puVar41 + 0x1038) = 0x61f;
            *(undefined4 *)(puVar41 + 0x103c) = 0xec8;
            gte_ldDQB(0);
            puVar36 = puVar34 + 4;
            puVar32 = (undefined *)((int)DAT_1f800068 + 0x31);
            do {
              gte_ldDQA((int)puVar36[-3] >> 0x10);
              gte_ldVXY0(*puVar34);
              gte_ldVZ0(puVar36[-3]);
              gte_rtps_b();
              iVar35 = gte_stFLAG();
              iVar16 = gte_stSZ3();
              if (-1 < iVar35) {
                iVar23 = gte_stMAC0();
                iVar35 = gte_stSXY2();
                iVar16 = iVar16 >> (((ushort)DAT_1f800098 >> 16) + 3 & 0x1f);
                sVar10 = (short)iVar35;
                if (0xfff < iVar16) {
                  iVar16 = 0xfff;
                }
                iVar23 = (iVar23 << (((ushort)DAT_1f800098 >> 16) & 0x1f)) >> 0xf;
                uVar29 = (*puVar36 & 0xfefefe) >> 1;
                uVar19 = (uVar29 & 0xfcfcfc) >> 2;
                iVar42 = *(int *)(puVar41 + 0x1038) * iVar23;
                uVar29 = uVar29 | 0x3e000000;
                uVar27 = uVar19 | 0x3e000000;
                iVar25 = *(int *)(puVar41 + 0x103c);
                uVar30 = (uVar19 & 0xf8f8f8) >> 3 | 0x3e000000;
                *(short *)(puVar32 + -0x11) = sVar10;
                *(short *)(puVar32 + 0x23) = sVar10;
                *(short *)(puVar32 + 0x57) = sVar10;
                *(short *)(puVar32 + 0x8b) = sVar10;
                sVar12 = (short)((uint)iVar35 >> 0x10);
                *(short *)(puVar32 + -0xf) = sVar12;
                iVar25 = iVar25 * iVar23;
                *(short *)(puVar32 + 0x25) = sVar12;
                *(short *)(puVar32 + 0x59) = sVar12;
                *(short *)(puVar32 + 0x8d) = sVar12;
                iVar24 = iVar42 >> 0xd;
                sVar4 = (short)iVar24;
                sVar11 = sVar10 - sVar4;
                *(short *)(puVar32 + -0x29) = sVar11;
                *(short *)(puVar32 + 0xb) = sVar11;
                sVar3 = (short)(iVar42 >> 0xc);
                *(short *)(puVar32 + 0x3f) = sVar11 + sVar3;
                *(short *)(puVar32 + 0x73) = sVar11 + sVar3;
                iVar23 = iVar25 >> 0xd;
                sVar8 = (short)iVar23;
                sVar10 = sVar10 - sVar8;
                iVar25 = iVar25 >> 0xc;
                sVar6 = (short)iVar25;
                sVar11 = sVar10 + sVar6;
                *(short *)(puVar32 + -0x1d) = sVar10 - sVar4;
                *(short *)(puVar32 + 0x17) = sVar11 - sVar4;
                sVar12 = sVar12 + sVar8;
                iVar24 = (iVar35 >> 0x10) - iVar24;
                *(short *)(puVar32 + 0x7f) = (sVar11 - sVar4) + sVar3;
                iVar23 = iVar24 + iVar23;
                sVar7 = (short)iVar24;
                sVar5 = sVar7 + sVar3;
                *(short *)(puVar32 + -0x27) = sVar12;
                *(short *)(puVar32 + 0xd) = sVar12;
                *(short *)(puVar32 + -0x1b) = (short)iVar23;
                uVar18 = iVar23 - iVar25;
                *(short *)(puVar32 + 0x19) = sVar5 + sVar8;
                *(short *)(puVar32 + -5) = sVar10;
                *(short *)(puVar32 + 0x2f) = sVar11;
                *(short *)(puVar32 + 0x4b) = (sVar10 - sVar4) + sVar3;
                *(short *)(puVar32 + 99) = sVar10;
                *(short *)(puVar32 + 0x97) = sVar11;
                *(short *)(puVar32 + -3) = sVar7;
                *(short *)(puVar32 + 0x31) = sVar5;
                *(short *)(puVar32 + 0x41) = sVar12 - sVar6;
                *(short *)(puVar32 + 0x4d) = (short)uVar18;
                *(short *)(puVar32 + 0x65) = sVar7;
                *(short *)(puVar32 + 0x75) = sVar12 - sVar6;
                *(short *)(puVar32 + 0x81) = (sVar5 + sVar8) - sVar6;
                *(short *)(puVar32 + 0x99) = sVar5;
                *DAT_1f800068 = 0xc000000;
                *(uint *)(puVar32 + -0x2d) = uVar27;
                *(uint *)(puVar32 + -0x21) = uVar30;
                *(uint *)(puVar32 + -0x15) = uVar29;
                *(uint *)(puVar32 + -9) = uVar27;
                *(undefined2 *)(puVar32 + -0x23) = 0x7f57;
                *(undefined2 *)(puVar32 + -0x17) = 0x29;
                puVar32[-0x25] = 0xa0;
                puVar32[-0x24] = 0x40;
                puVar32[-0x19] = 0x80;
                puVar32[-0x18] = 0x40;
                puVar32[-0xd] = 0xa0;
                puVar32[-0xc] = 0x60;
                puVar32[-1] = 0x80;
                *puVar32 = 0x60;
                iVar16 = *(int *)(puVar41 + 0x1040) + iVar16 * 4;
                uVar19 = iVar16 + 2U & 3;
                uVar18 = *(int *)((iVar16 + 2U) - uVar19) << (3 - uVar19) * 8 |
                         uVar18 & 0xffffffffU >> (uVar19 + 1) * 8;
                uVar19 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 |
                          (uint)((int)DAT_1f800068 << 8) >> (3 - uVar19) * 8;
                uVar19 = (int)DAT_1f800068 + 2U & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 | uVar18 >> (3 - uVar19) * 8;
                DAT_1f800068[0xd] = 0xc000000;
                *(undefined2 *)(puVar32 + 0x11) = 0x7f57;
                *(undefined2 *)(puVar32 + 0x1d) = 0x29;
                *(uint *)(puVar32 + 7) = uVar27;
                *(uint *)(puVar32 + 0x13) = uVar30;
                *(uint *)(puVar32 + 0x1f) = uVar29;
                *(uint *)(puVar32 + 0x2b) = uVar27;
                puVar32[0xf] = 0xa0;
                puVar32[0x10] = 0x40;
                puVar32[0x1b] = 0xbf;
                puVar32[0x1c] = 0x40;
                puVar32[0x27] = 0xa0;
                puVar32[0x28] = 0x60;
                puVar32[0x33] = 0xbf;
                puVar32[0x34] = 0x60;
                uVar19 = iVar16 + 2U & 3;
                uVar18 = *(int *)((iVar16 + 2U) - uVar19) << (3 - uVar19) * 8 |
                         uVar18 & 0xffffffffU >> (uVar19 + 1) * 8;
                uVar19 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 |
                          (uint)((int)(DAT_1f800068 + 0xd) * 0x100) >> (3 - uVar19) * 8;
                uVar19 = (int)DAT_1f800068 + 0x36U & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 0x36U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 | uVar18 >> (3 - uVar19) * 8;
                DAT_1f800068[0x1a] = 0xc000000;
                *(uint *)(puVar32 + 0x3b) = uVar27;
                *(uint *)(puVar32 + 0x47) = uVar30;
                *(uint *)(puVar32 + 0x53) = uVar29;
                *(uint *)(puVar32 + 0x5f) = uVar27;
                *(undefined2 *)(puVar32 + 0x45) = 0x7f57;
                *(undefined2 *)(puVar32 + 0x51) = 0x29;
                puVar32[0x43] = 0xa0;
                puVar32[0x44] = 0x7f;
                puVar32[0x4f] = 0x80;
                puVar32[0x50] = 0x7f;
                puVar32[0x5b] = 0xa0;
                puVar32[0x5c] = 0x60;
                puVar32[0x67] = 0x80;
                puVar32[0x68] = 0x60;
                uVar19 = iVar16 + 2U & 3;
                uVar26 = *(int *)((iVar16 + 2U) - uVar19) << (3 - uVar19) * 8 |
                         uVar18 & 0xffffffffU >> (uVar19 + 1) * 8;
                uVar19 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 |
                          (uint)((int)(DAT_1f800068 + 0x1a) * 0x100) >> (3 - uVar19) * 8;
                uVar19 = (int)DAT_1f800068 + 0x6aU & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 0x6aU) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 | uVar26 >> (3 - uVar19) * 8;
                DAT_1f800068[0x27] = 0xc000000;
                *(undefined2 *)(puVar32 + 0x79) = 0x7f57;
                *(undefined2 *)(puVar32 + 0x85) = 0x29;
                *(uint *)(puVar32 + 0x6f) = uVar27;
                *(uint *)(puVar32 + 0x7b) = uVar30;
                *(uint *)(puVar32 + 0x87) = uVar29;
                *(uint *)(puVar32 + 0x93) = uVar27;
                puVar32[0x77] = 0xa0;
                puVar32[0x78] = 0x7f;
                puVar32[0x83] = 0xbf;
                puVar32[0x84] = 0x7f;
                puVar32[0x8f] = 0xa0;
                puVar32[0x90] = 0x60;
                puVar32[0x9b] = 0xbf;
                puVar32[0x9c] = 0x60;
                uVar19 = iVar16 + 2U & 3;
                iVar35 = *(int *)((iVar16 + 2U) - uVar19);
                uVar18 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar18);
                *puVar2 = *puVar2 & -1 << (uVar18 + 1) * 8 |
                          (uint)((int)(DAT_1f800068 + 0x27) * 0x100) >> (3 - uVar18) * 8;
                uVar18 = (int)DAT_1f800068 + 0x9eU & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 0x9eU) - uVar18);
                *puVar2 = *puVar2 & -1 << (uVar18 + 1) * 8 |
                          (iVar35 << (3 - uVar19) * 8 | uVar26 & 0xffffffffU >> (uVar19 + 1) * 8) >>
                          (3 - uVar18) * 8;
                puVar32 = puVar32 + 0xd0;
                DAT_1f800068 = DAT_1f800068 + 0x34;
              }
              puVar34 = puVar34 + 5;
              puVar36 = puVar36 + 5;
            } while (puVar34 != *(undefined4 **)(puVar41 + 0x1034));
          }
        }
        else {
          piVar15 = *(int **)(iVar35 + 0x24);
          iVar16 = 0x1f800000;
          if (*(ushort *)(iVar35 + 0x40) != 0) {
            piVar31 = piVar15 + (uint)*(ushort *)(iVar35 + 0x40) * 4;
            gte_ldL11L12((uint)DAT_1f8003f2);
            gte_ldL13L21((uint)DAT_1f8003f0 << 0x10);
            gte_ldL22L23(0);
            gte_ldL31L32(0);
            gte_ldL33(0);
            piVar28 = piVar15 + 3;
            r0 = DAT_1f800068 + 8;
            puVar34 = DAT_1f800068;
            do {
              iVar25 = *piVar15;
              uVar26 = piVar28[-2];
              gte_ldIR1(piVar28[-1] & 0xffff);
              gte_llir();
              iVar24 = iVar25 >> 0x10;
              iVar35 = uVar26 + ((uint)piVar28[-1] >> 0x10);
              gte_ldVZ0(uVar26);
              gte_ldVZ1(iVar35);
              gte_ldVZ2(iVar35);
              uVar37 = gte_stIR1();
              iVar23 = gte_stIR2();
              sVar10 = (short)((uint)iVar25 >> 0x10);
              *(short *)(iVar16 + 0x9c) = (short)iVar25 - (short)uVar37;
              *(short *)(iVar16 + 0x9e) = sVar10 + (short)iVar23;
              *(short *)(iVar16 + 0xa4) = (short)iVar25 + (short)uVar37;
              *(short *)(iVar16 + 0xa6) = sVar10 - (short)iVar23;
              gte_ldVXY0(iVar16 + 0x9c);
              gte_ldVXY1(iVar16 + 0x9c);
              gte_ldVXY2(iVar16 + 0xa4);
              gte_rtpt_b();
              plVar17 = (long *)(*(int *)(iVar16 + 0x3a0) + (uVar26 >> 0x10) * 0x20);
              lVar22 = plVar17[1];
              uVar18 = plVar17[2];
              r0[-5] = *plVar17;
              r0[-3] = lVar22;
              r0[-1] = uVar18;
              uVar19 = (int)r0 + 5U & 3;
              puVar36 = (uint *)(((int)r0 + 5U) - uVar19);
              *puVar36 = *puVar36 & -1 << (uVar19 + 1) * 8 | uVar18 >> (3 - uVar19) * 8;
              uVar18 = gte_stFLAG();
              read_sz_fifo3(iVar23,uVar26,iVar24);
              gte_ldVXY0(iVar16 + 0xa4);
              gte_stSXY0();
              gte_stSXY1();
              gte_rtps_b();
              iVar25 = *(int *)(iVar16 + 100);
              iVar35 = *piVar28;
              *puVar34 = 0x9000000;
              r0[-7] = iVar35;
              uVar19 = gte_stFLAG();
              gte_stSXY1();
              gte_stsxy(r0);
              if (-1 < (int)(uVar18 | uVar19)) {
                uVar19 = gte_stSZ3();
                iVar23 = (int)(iVar23 + uVar26 + iVar24 + uVar19) >>
                         (*(ushort *)(iVar16 + 0x9a) + 5 & 0x1f);
                iVar35 = iVar23 << 2;
                if (0xfff < iVar23) {
                  iVar35 = 0x3ffc;
                }
                uVar18 = iVar25 + iVar35 + 2;
                uVar26 = uVar18 & 3;
                iVar23 = *(int *)(uVar18 - uVar26);
                uVar18 = iVar25 + iVar35 + 2;
                uVar27 = uVar18 & 3;
                puVar36 = (uint *)(uVar18 - uVar27);
                *puVar36 = *puVar36 & -1 << (uVar27 + 1) * 8 |
                           (uint)((int)puVar34 << 8) >> (3 - uVar27) * 8;
                uVar18 = (int)puVar34 + 2U & 3;
                puVar36 = (uint *)(((int)puVar34 + 2U) - uVar18);
                *puVar36 = *puVar36 & -1 << (uVar18 + 1) * 8 |
                           (iVar23 << (3 - uVar26) * 8 | uVar19 & 0xffffffffU >> (uVar26 + 1) * 8)
                           >> (3 - uVar18) * 8;
                r0 = r0 + 10;
                puVar34 = puVar34 + 10;
              }
              piVar15 = piVar15 + 4;
              piVar28 = piVar28 + 4;
            } while (piVar15 != piVar31);
            *(undefined4 **)(iVar16 + 0x68) = puVar34;
            gte_ldL11L12(*(undefined4 *)(iVar16 + 0x2c));
            gte_ldL13L21(*(undefined4 *)(iVar16 + 0x30));
            gte_ldL22L23(*(undefined4 *)(iVar16 + 0x34));
            gte_ldL31L32(*(undefined4 *)(iVar16 + 0x38));
            gte_ldL33(*(undefined4 *)(iVar16 + 0x3c));
          }
          uVar19 = (uint)*(ushort *)(*(int *)(puVar41 + 0x1020) + 0x42);
          puVar34 = *(undefined4 **)(*(int *)(puVar41 + 0x1020) + 0x28);
          if (uVar19 != 0) {
            *(undefined4 **)(puVar41 + 0x1024) = puVar34 + uVar19 * 5;
            *(int *)(puVar41 + 0x1030) = DAT_1f800064 + -0x20;
            *(undefined4 *)(puVar41 + 0x1028) = 0x61f;
            *(undefined4 *)(puVar41 + 0x102c) = 0xec8;
            gte_ldDQB(0);
            puVar36 = puVar34 + 4;
            puVar32 = (undefined *)((int)DAT_1f800068 + 0x31);
            do {
              gte_ldDQA((int)puVar36[-3] >> 0x10);
              gte_ldVXY0(*puVar34);
              gte_ldVZ0(puVar36[-3]);
              gte_rtps_b();
              iVar35 = gte_stFLAG();
              iVar16 = gte_stSZ3();
              if (-1 < iVar35) {
                iVar23 = gte_stMAC0();
                iVar35 = gte_stSXY2();
                iVar16 = iVar16 >> (((ushort)DAT_1f800098 >> 16) + 3 & 0x1f);
                sVar10 = (short)iVar35;
                if (0xfff < iVar16) {
                  iVar16 = 0xfff;
                }
                iVar23 = (iVar23 << (((ushort)DAT_1f800098 >> 16) & 0x1f)) >> 0xf;
                uVar29 = (*puVar36 & 0xfefefe) >> 1;
                uVar19 = (uVar29 & 0xfcfcfc) >> 2;
                iVar42 = *(int *)(puVar41 + 0x1028) * iVar23;
                uVar29 = uVar29 | 0x3e000000;
                uVar27 = uVar19 | 0x3e000000;
                iVar25 = *(int *)(puVar41 + 0x102c);
                uVar30 = (uVar19 & 0xf8f8f8) >> 3 | 0x3e000000;
                *(short *)(puVar32 + -0x11) = sVar10;
                *(short *)(puVar32 + 0x23) = sVar10;
                *(short *)(puVar32 + 0x57) = sVar10;
                *(short *)(puVar32 + 0x8b) = sVar10;
                sVar12 = (short)((uint)iVar35 >> 0x10);
                *(short *)(puVar32 + -0xf) = sVar12;
                iVar25 = iVar25 * iVar23;
                *(short *)(puVar32 + 0x25) = sVar12;
                *(short *)(puVar32 + 0x59) = sVar12;
                *(short *)(puVar32 + 0x8d) = sVar12;
                iVar24 = iVar42 >> 0xd;
                sVar4 = (short)iVar24;
                sVar11 = sVar10 - sVar4;
                *(short *)(puVar32 + -0x29) = sVar11;
                *(short *)(puVar32 + 0xb) = sVar11;
                sVar3 = (short)(iVar42 >> 0xc);
                *(short *)(puVar32 + 0x3f) = sVar11 + sVar3;
                *(short *)(puVar32 + 0x73) = sVar11 + sVar3;
                iVar23 = iVar25 >> 0xd;
                sVar8 = (short)iVar23;
                sVar10 = sVar10 - sVar8;
                iVar25 = iVar25 >> 0xc;
                sVar6 = (short)iVar25;
                sVar11 = sVar10 + sVar6;
                *(short *)(puVar32 + -0x1d) = sVar10 - sVar4;
                *(short *)(puVar32 + 0x17) = sVar11 - sVar4;
                sVar12 = sVar12 + sVar8;
                iVar24 = (iVar35 >> 0x10) - iVar24;
                *(short *)(puVar32 + 0x7f) = (sVar11 - sVar4) + sVar3;
                iVar23 = iVar24 + iVar23;
                sVar7 = (short)iVar24;
                sVar5 = sVar7 + sVar3;
                *(short *)(puVar32 + -0x27) = sVar12;
                *(short *)(puVar32 + 0xd) = sVar12;
                *(short *)(puVar32 + -0x1b) = (short)iVar23;
                uVar18 = iVar23 - iVar25;
                *(short *)(puVar32 + 0x19) = sVar5 + sVar8;
                *(short *)(puVar32 + -5) = sVar10;
                *(short *)(puVar32 + 0x2f) = sVar11;
                *(short *)(puVar32 + 0x4b) = (sVar10 - sVar4) + sVar3;
                *(short *)(puVar32 + 99) = sVar10;
                *(short *)(puVar32 + 0x97) = sVar11;
                *(short *)(puVar32 + -3) = sVar7;
                *(short *)(puVar32 + 0x31) = sVar5;
                *(short *)(puVar32 + 0x41) = sVar12 - sVar6;
                *(short *)(puVar32 + 0x4d) = (short)uVar18;
                *(short *)(puVar32 + 0x65) = sVar7;
                *(short *)(puVar32 + 0x75) = sVar12 - sVar6;
                *(short *)(puVar32 + 0x81) = (sVar5 + sVar8) - sVar6;
                *(short *)(puVar32 + 0x99) = sVar5;
                *DAT_1f800068 = 0xc000000;
                *(uint *)(puVar32 + -0x2d) = uVar27;
                *(uint *)(puVar32 + -0x21) = uVar30;
                *(uint *)(puVar32 + -0x15) = uVar29;
                *(uint *)(puVar32 + -9) = uVar27;
                *(undefined2 *)(puVar32 + -0x23) = 0x7f57;
                *(undefined2 *)(puVar32 + -0x17) = 0x29;
                puVar32[-0x25] = 0xa0;
                puVar32[-0x24] = 0x40;
                puVar32[-0x19] = 0x80;
                puVar32[-0x18] = 0x40;
                puVar32[-0xd] = 0xa0;
                puVar32[-0xc] = 0x60;
                puVar32[-1] = 0x80;
                *puVar32 = 0x60;
                iVar16 = *(int *)(puVar41 + 0x1030) + iVar16 * 4;
                uVar19 = iVar16 + 2U & 3;
                uVar18 = *(int *)((iVar16 + 2U) - uVar19) << (3 - uVar19) * 8 |
                         uVar18 & 0xffffffffU >> (uVar19 + 1) * 8;
                uVar19 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 |
                          (uint)((int)DAT_1f800068 << 8) >> (3 - uVar19) * 8;
                uVar19 = (int)DAT_1f800068 + 2U & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 | uVar18 >> (3 - uVar19) * 8;
                DAT_1f800068[0xd] = 0xc000000;
                *(undefined2 *)(puVar32 + 0x11) = 0x7f57;
                *(undefined2 *)(puVar32 + 0x1d) = 0x29;
                *(uint *)(puVar32 + 7) = uVar27;
                *(uint *)(puVar32 + 0x13) = uVar30;
                *(uint *)(puVar32 + 0x1f) = uVar29;
                *(uint *)(puVar32 + 0x2b) = uVar27;
                puVar32[0xf] = 0xa0;
                puVar32[0x10] = 0x40;
                puVar32[0x1b] = 0xbf;
                puVar32[0x1c] = 0x40;
                puVar32[0x27] = 0xa0;
                puVar32[0x28] = 0x60;
                puVar32[0x33] = 0xbf;
                puVar32[0x34] = 0x60;
                uVar19 = iVar16 + 2U & 3;
                uVar18 = *(int *)((iVar16 + 2U) - uVar19) << (3 - uVar19) * 8 |
                         uVar18 & 0xffffffffU >> (uVar19 + 1) * 8;
                uVar19 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 |
                          (uint)((int)(DAT_1f800068 + 0xd) * 0x100) >> (3 - uVar19) * 8;
                uVar19 = (int)DAT_1f800068 + 0x36U & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 0x36U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 | uVar18 >> (3 - uVar19) * 8;
                DAT_1f800068[0x1a] = 0xc000000;
                *(uint *)(puVar32 + 0x3b) = uVar27;
                *(uint *)(puVar32 + 0x47) = uVar30;
                *(uint *)(puVar32 + 0x53) = uVar29;
                *(uint *)(puVar32 + 0x5f) = uVar27;
                *(undefined2 *)(puVar32 + 0x45) = 0x7f57;
                *(undefined2 *)(puVar32 + 0x51) = 0x29;
                puVar32[0x43] = 0xa0;
                puVar32[0x44] = 0x7f;
                puVar32[0x4f] = 0x80;
                puVar32[0x50] = 0x7f;
                puVar32[0x5b] = 0xa0;
                puVar32[0x5c] = 0x60;
                puVar32[0x67] = 0x80;
                puVar32[0x68] = 0x60;
                uVar19 = iVar16 + 2U & 3;
                uVar26 = *(int *)((iVar16 + 2U) - uVar19) << (3 - uVar19) * 8 |
                         uVar18 & 0xffffffffU >> (uVar19 + 1) * 8;
                uVar19 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 |
                          (uint)((int)(DAT_1f800068 + 0x1a) * 0x100) >> (3 - uVar19) * 8;
                uVar19 = (int)DAT_1f800068 + 0x6aU & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 0x6aU) - uVar19);
                *puVar2 = *puVar2 & -1 << (uVar19 + 1) * 8 | uVar26 >> (3 - uVar19) * 8;
                DAT_1f800068[0x27] = 0xc000000;
                *(undefined2 *)(puVar32 + 0x79) = 0x7f57;
                *(undefined2 *)(puVar32 + 0x85) = 0x29;
                *(uint *)(puVar32 + 0x6f) = uVar27;
                *(uint *)(puVar32 + 0x7b) = uVar30;
                *(uint *)(puVar32 + 0x87) = uVar29;
                *(uint *)(puVar32 + 0x93) = uVar27;
                puVar32[0x77] = 0xa0;
                puVar32[0x78] = 0x7f;
                puVar32[0x83] = 0xbf;
                puVar32[0x84] = 0x7f;
                puVar32[0x8f] = 0xa0;
                puVar32[0x90] = 0x60;
                puVar32[0x9b] = 0xbf;
                puVar32[0x9c] = 0x60;
                uVar19 = iVar16 + 2U & 3;
                iVar35 = *(int *)((iVar16 + 2U) - uVar19);
                uVar18 = iVar16 + 2U & 3;
                puVar2 = (uint *)((iVar16 + 2U) - uVar18);
                *puVar2 = *puVar2 & -1 << (uVar18 + 1) * 8 |
                          (uint)((int)(DAT_1f800068 + 0x27) * 0x100) >> (3 - uVar18) * 8;
                uVar18 = (int)DAT_1f800068 + 0x9eU & 3;
                puVar2 = (uint *)(((int)DAT_1f800068 + 0x9eU) - uVar18);
                *puVar2 = *puVar2 & -1 << (uVar18 + 1) * 8 |
                          (iVar35 << (3 - uVar19) * 8 | uVar26 & 0xffffffffU >> (uVar19 + 1) * 8) >>
                          (3 - uVar18) * 8;
                puVar32 = puVar32 + 0xd0;
                DAT_1f800068 = DAT_1f800068 + 0x34;
              }
              puVar34 = puVar34 + 5;
              puVar36 = puVar36 + 5;
            } while (puVar34 != *(undefined4 **)(puVar41 + 0x1024));
          }
          if (*(int *)(puVar41 + 0x101c) == 0) {
            FUN_overlay0__8002106c((int *)(puVar41 + 0x1020), 0, 0, (undefined4 **)0x0);
          }
          else {
            FUN_overlay0__800234f8(*(undefined4 *)(puVar41 + 0x1020));
          }
        }
        *(undefined4 *)(puVar41 + 0x1050) = **(undefined4 **)(puVar41 + 0x1050);
      }
      DAT_801c93ec = DAT_1f800068;
      return *(undefined4 *)(puVar41 + 0x1018);
    }
    uVar1 = puVar14[1];
    *ppiVar33 = (int *)0x0;
    piVar15 = *(int **)(local_34 + (uVar1 & 0x3fff) * 4 + 0xc);
    ppiVar33[1] = piVar15;
    piVar15 = (int *)FUN_overlay0__80020fd8(0x1f800000,piVar15 + 0xc);
    ppiVar33[2] = piVar15;
    *(ushort *)(ppiVar33 + 3) = uVar1 >> 0xe;
    if ((param_3 == 0) || (piVar15 < (int *)0x640000)) {
      piVar15 = ppiVar33[1];
      local_68 = local_68 | piVar15[3];
      if (param_3 == 0) {
        piVar15 = piVar15 + 0x11;
      }
      else {
        piVar15 = piVar15 + 0x1b;
      }
      iVar16 = FUN_overlay0__80020ec4(0x1f800000,piVar15);
      if (iVar16 != 2) {
        *(short *)((int)ppiVar33 + 0xe) = (short)iVar16;
        local_30 = local_2c;
        ppiVar21 = (int **)0x0;
        if (local_2c != (int **)0x0) {
          do {
            if (ppiVar33[2] < local_30[2]) break;
            ppiVar40 = (int **)*local_30;
            ppiVar21 = local_30;
            local_30 = ppiVar40;
          } while (ppiVar40 != (int **)0x0);
        }
        if (ppiVar21 == (int **)0x0) {
          local_2c = ppiVar33;
        }
        else {
          *ppiVar21 = (int *)ppiVar33;
        }
        *ppiVar33 = (int *)local_30;
      }
    }
    ppiVar33 = ppiVar33 + 4;
    puVar14 = puVar14 + 1;
    iVar35 = iVar35 + 1;
  } while( true );
}

void FUN_overlay0__80020e38(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;

  uVar1 = param_1[2];
  *param_1 = *param_1;
  param_1[2] = param_1[1];
  param_1[1] = uVar1;

  uVar1 = param_1[5];
  param_1[3] = param_1[3];
  param_1[5] = param_1[4];
  uVar2 = param_1[7];
  param_1[4] = uVar1;

  param_1[6] = param_1[6];
  param_1[7] = param_1[8];
  param_1[8] = uVar2;
  return;
}

void FUN_overlay0__80020e84(undefined4 param_1)

{

  FUN_8007b778(param_1,0,0,0);

  gte_ldtr(0,0,0);
  gte_ldRFC(0);
  gte_ldBFC(0);
  gte_ldGFC(0);
  return;
}

undefined FUN_overlay0__80020ec4(int param_1,int *param_2)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  int *piVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;

  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;

  puVar11 = (undefined2 *)(param_1 + 0x9c);
  iVar16 = *(int *)(param_1 + 0x20);
  iVar15 = *(int *)(param_1 + 0x24);
  iVar14 = *(int *)(param_1 + 0x28);
  iVar13 = param_2[8];

  for (iVar12 = 2; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar10 = puVar11 + 2;

    for (piVar9 = param_2; uVar8 = iVar13 + iVar15, piVar9 != param_2 + 8; piVar9 = piVar9 + 2) {

      uVar7 = *piVar9 + iVar16;
      uVar4 = piVar9[1] + iVar14;

      uVar3 = uVar7;
      if ((int)uVar7 < 0) {
        uVar3 = -uVar7;
      }
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = -uVar8;
      }
      uVar6 = uVar4;
      if ((int)uVar4 < 0) {
        uVar6 = -uVar4;
      }

      gte_ldLZCS(uVar3 | uVar5 | uVar6);
      iVar2 = gte_stLZCR();
      uVar3 = 0x13 - iVar2;

      if (-1 < (int)uVar3) {
        uVar7 = (int)uVar7 >> (uVar3 & 0x1f);
        uVar8 = (int)uVar8 >> (uVar3 & 0x1f);
        uVar4 = (int)uVar4 >> (uVar3 & 0x1f);
      }

      *puVar11 = (short)uVar7;
      puVar10[-1] = (short)uVar4;
      *puVar10 = (short)uVar8;

      puVar10 = puVar10 + 4;
      puVar11 = puVar11 + 4;
    }
    iVar13 = param_2[9];
  }

  uVar8 = FUN_8007b640(param_1,param_1 + 0x9c,8);

  if ((uVar8 & 0x1f) == 0) {
    uVar1 = (uVar8 >> 0x10 & 0x3f) != 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

int FUN_overlay0__80020fd8(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = *param_2 + *(int *)(param_1 + 0x20);
  uVar2 = param_2[1] + *(int *)(param_1 + 0x24);
  uVar1 = param_2[2] + *(int *)(param_1 + 0x28);

  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }

  uVar3 = uVar2;
  if (uVar4 < uVar2) {
    uVar3 = uVar4;
    uVar4 = uVar2;
  }
  uVar2 = uVar1;
  if (uVar4 < uVar1) {
    uVar2 = uVar4;
    uVar4 = uVar1;
  }
  uVar1 = uVar2;
  if (uVar3 < uVar2) {
    uVar1 = uVar3;
    uVar3 = uVar2;
  }

  return uVar4 + (uVar3 >> 1) + (uVar1 >> 2);
}

void FUN_overlay0__8002106c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 **param_4)

{

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  char cVar7;

  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  bool bVar13;

  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar20;
  undefined4 *puVar25;
  undefined4 *puVar29;
  undefined4 *puVar44;

  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar21;
  int iVar23;
  uint uVar24;
  uint uVar28;
  uint uVar36;
  uint uVar37;
  uint uVar39;

  undefined4 uVar22;

  undefined4 **ppuVar26;
  undefined4 **ppuVar27;
  undefined4 **ppuVar32;
  undefined4 **ppuVar40;
  undefined4 **in_t1;
  undefined4 **ppuVar46;

  short **ppsVar30;
  short *psVar31;
  short *psVar33;
  short *psVar35;
  short **ppsVar43;

  int *piVar34;
  int *piVar38;

  uint *puVar42;

  SVECTOR *pSVar41;
  SVECTOR *pSVar45;
  undefined4 *puVar47;
  uint uVar48;
  uint *puVar49;
  undefined4 uVar50;
  int iVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;

  DAT_1f800070 = *param_1;
  puVar42 = (uint *)param_1[1];
  puVar49 = puVar42 + (uint)*(ushort *)(param_1 + 0xc) * 3;
  ppuVar32 = (undefined4 **)DAT_1f800068;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    do {
      in_t1 = ppuVar32;
      ppsVar43 = DAT_1f80006c;
      uVar39 = *puVar42;
      puVar14 = (uint *)((uVar39 & 0x1ff) * 8 + DAT_1f800070);
      uVar37 = *puVar14;
      puVar15 = (undefined4 *)(((int)uVar39 >> 6 & 0xff8U) + DAT_1f800070);
      puVar16 = (undefined4 *)(((int)uVar39 >> 0xf & 0xff8U) + DAT_1f800070);
      gte_ldVXY0(uVar37);
      gte_ldVZ0(puVar14[1]);
      gte_ldVXY2(*puVar15);
      gte_ldVZ2(puVar15[1]);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(puVar16[1]);
      gte_rtpt_b();
      uVar24 = puVar42[2];
      uVar17 = uVar39 >> 0x15 & 0xc0;
      uVar28 = DAT_1f800064 + uVar17;
      gte_ldRGB(uVar24);
      param_4 = (undefined4 **)gte_stFLAG();
      read_sz_fifo3(uVar17,uVar37,uVar24);
      gte_nclip_b();
      if ((int)uVar17 < (int)uVar24) {
        uVar17 = uVar24;
      }
      if ((int)uVar17 < (int)uVar37) {
        uVar17 = uVar37;
      }
      iVar18 = ((int)uVar17 >> 3) >> (((ushort)DAT_1f800098 >> 16) & 0x1f);
      iVar19 = iVar18 << 2;
      if (0xfff < iVar18) {
        iVar19 = 0x3ffc;
      }
      iVar19 = uVar28 + iVar19;
      uVar17 = gte_stMAC0();
      if (((-1 < (int)param_4) && (uVar17 != 0)) && (-1 < (int)(uVar17 & uVar39))) {
        gte_ldIR0(0);
        gte_dpcs_b();
        uVar17 = iVar19 + 2;
        uVar24 = uVar17 & 3;
        iVar18 = *(int *)(uVar17 - uVar24);
        gte_stRGB2();
        uVar17 = iVar19 + 2;
        uVar37 = uVar17 & 3;
        puVar14 = (uint *)(uVar17 - uVar37);
        *puVar14 = *puVar14 & -1 << (uVar37 + 1) * 8 | (uint)((int)in_t1 << 8) >> (3 - uVar37) * 8;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)in_t1 + 3) = 4;
        bVar13 = ppsVar43 < in_t1;
        uVar17 = (uint)(short *)((int)in_t1 + 2U) & 3;
        puVar14 = (uint *)((int)(short *)((int)in_t1 + 2U) - uVar17);
        *puVar14 = *puVar14 & -1 << (uVar17 + 1) * 8 |
                   (iVar18 << (3 - uVar24) * 8 | uVar28 & 0xffffffffU >> (uVar24 + 1) * 8) >>
                   (3 - uVar17) * 8;
        in_t1 = in_t1 + 5;
        DAT_1f800068 = (short **)in_t1;
        if (bVar13) break;
      }
      puVar42 = puVar42 + 3;
      ppuVar32 = in_t1;
      DAT_1f800068 = (short **)in_t1;
    } while (puVar42 != puVar49);
  }
  iVar18 = DAT_1f800070;
  puVar15 = (undefined4 *)param_1[2];
  if (*(ushort *)((int)param_1 + 0x32) != 0) {
    puVar20 = puVar15 + (uint)*(ushort *)((int)param_1 + 0x32) * 3;
    DAT_1f8003b0 = (short **)*puVar15;
    DAT_1f8003b4 = puVar15[1];
    puVar16 = (undefined4 *)(((uint)DAT_1f8003b0 & 0x1ff) * 8 + DAT_1f800070);
    uVar55 = *puVar16;
    uVar54 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 6 & 0xff8U) + DAT_1f800070);
    uVar53 = *puVar16;
    uVar52 = puVar16[1];
    ppsVar43 = (short **)(((int)DAT_1f8003b0 >> 0xf & 0xff8U) + DAT_1f800070);
    param_4 = (undefined4 **)*ppsVar43;
    do {
      ppsVar30 = DAT_1f80006c;
      gte_ldVXY2(uVar55);
      gte_ldVZ2(uVar54);
      gte_ldVXY0(uVar53);
      gte_ldVZ0(uVar52);
      gte_ldVXY1(param_4);
      gte_ldVZ1(ppsVar43[1]);
      ppuVar32 = (undefined4 **)puVar15[3];
      gte_rtpt_b();
      uVar17 = DAT_1f8003b4 & 0x1ff;
      DAT_1f8003b4 = puVar15[4];
      puVar16 = (undefined4 *)(uVar17 * 8 + iVar18);
      puVar25 = (undefined4 *)(((uint)ppuVar32 & 0x1ff) * 8 + iVar18);
      puVar29 = (undefined4 *)(((int)ppuVar32 >> 6 & 0xff8U) + iVar18);
      uVar17 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(ppuVar32,param_4,in_t1);
      uVar55 = *puVar25;
      gte_nclip_b();
      gte_ldVXY0(*puVar16);
      gte_ldVZ0(puVar16[1]);
      ppsVar43 = (short **)(((int)ppuVar32 >> 0xf & 0xff8U) + iVar18);
      uVar54 = puVar25[1];
      iVar19 = gte_stMAC0();
      gte_rtps_b();
      if ((int)in_t1 < (int)ppuVar32) {
        in_t1 = ppuVar32;
      }
      uVar53 = *puVar29;
      if ((int)in_t1 < (int)param_4) {
        in_t1 = param_4;
      }
      iVar51 = DAT_1f800064 + ((uint)DAT_1f8003b0 >> 0x15 & 0xc0);
      uVar52 = puVar29[1];
      uVar24 = gte_stFLAG();
      ppuVar26 = (undefined4 **)gte_stSZ3();
      gte_nclip_b();
      param_4 = (undefined4 **)*ppsVar43;
      if (-1 < (int)(uVar17 | uVar24)) {
        if ((int)in_t1 < (int)ppuVar26) {
          in_t1 = ppuVar26;
        }
        in_t1 = (undefined4 **)((int)in_t1 >> 3);
        uVar17 = gte_stMAC0();
        if ((-iVar19 | uVar17) != 0) {
          gte_ldRGB(puVar15[2]);
          in_t1 = (undefined4 **)((int)in_t1 >> (((ushort)DAT_1f800098 >> 16) & 0x1f));
          bVar13 = 0xfff < (int)in_t1;
          if (-1 < (int)(-iVar19 - 1U & uVar17 - 1 & (uint)DAT_1f8003b0)) {
            in_t1 = (undefined4 **)((int)in_t1 << 2);
            if (bVar13) {
              in_t1 = (undefined4 **)0x3ffc;
            }
            gte_ldIR0(0);
            gte_dpcs_b();
            psVar33 = (short *)gte_stRGB2();
            DAT_1f8003b0 = (short **)ppuVar32;
            DAT_1f800068[1] = psVar33;
            uVar17 = (int)in_t1 + iVar51 + 2;
            uVar24 = uVar17 & 3;
            iVar19 = *(int *)(uVar17 - uVar24);
            gte_stSXY1();
            DAT_1f800068[3] = DAT_1f8000c0;
            gte_stSXY2();
            gte_stSXY0();
            *DAT_1f800068 = (short *)((uint)(iVar19 << (3 - uVar24) * 8) >> 8 | 0x5000000);
            uVar17 = (int)in_t1 + iVar51 + 2;
            uVar24 = uVar17 & 3;
            puVar42 = (uint *)(uVar17 - uVar24);
            *puVar42 = *puVar42 & -1 << (uVar24 + 1) * 8 |
                       (uint)((int)DAT_1f800068 << 8) >> (3 - uVar24) * 8;
            bVar13 = ppsVar30 < DAT_1f800068;
            DAT_1f800068 = DAT_1f800068 + 6;
            ppuVar32 = (undefined4 **)DAT_1f8003b0;
            if (bVar13) break;
          }
        }
      }
      DAT_1f8003b0 = (short **)ppuVar32;
      puVar15 = puVar15 + 3;
    } while (puVar15 != puVar20);
  }
  iVar18 = 0x1f800000;
  puVar42 = (uint *)param_1[3];
  puVar49 = puVar42 + (uint)*(ushort *)(param_1 + 0xd) * 5;
  ppuVar32 = (undefined4 **)DAT_1f800068;
  if (*(ushort *)(param_1 + 0xd) != 0) {
    do {
      in_t1 = ppuVar32;
      iVar19 = *(int *)(iVar18 + 0x70);
      uVar39 = *puVar42;
      puVar15 = (undefined4 *)((uVar39 & 0x1ff) * 8 + iVar19);
      puVar16 = (undefined4 *)(((int)uVar39 >> 6 & 0xff8U) + iVar19);
      puVar20 = (undefined4 *)(((int)uVar39 >> 0xf & 0xff8U) + iVar19);
      gte_ldVXY0(*puVar15);
      gte_ldVZ0(puVar15[1]);
      gte_ldVXY2(*puVar16);
      gte_ldVZ2(puVar16[1]);
      gte_ldVXY1(*puVar20);
      gte_ldVZ1(puVar20[1]);
      gte_rtpt_b();
      uVar28 = puVar42[2];
      uVar37 = puVar42[4];
      uVar24 = uVar39 >> 0x15 & 0xc0;
      gte_ldRGB(uVar28);
      gte_ldRGB0(uVar28);
      gte_ldRGB1(puVar42[3]);
      gte_ldRGB2(uVar37);
      param_4 = (undefined4 **)gte_stFLAG();
      read_sz_fifo3(uVar24,uVar37,uVar28);
      gte_nclip_b();
      uVar17 = uVar24;
      if ((int)uVar24 < (int)uVar28) {
        uVar17 = uVar28;
      }
      if ((int)uVar17 < (int)uVar37) {
        uVar17 = uVar37;
      }
      iVar19 = ((int)uVar17 >> 3) >> (*(ushort *)(iVar18 + 0x9a) & 0x1f);
      iVar51 = iVar19 << 2;
      if (0xfff < iVar19) {
        iVar51 = 0x3ffc;
      }
      iVar51 = *(int *)(iVar18 + 100) + uVar24 + iVar51;
      uVar17 = gte_stMAC0();
      if (((-1 < (int)param_4) && (uVar17 != 0)) && (-1 < (int)(uVar17 & uVar39))) {
        gte_ldIR0(0);
        gte_dpct_b();
        ppuVar32 = *(undefined4 ***)(iVar18 + 0x6c);
        uVar17 = iVar51 + 2U & 3;
        uVar24 = *(int *)((iVar51 + 2U) - uVar17) << (3 - uVar17) * 8 |
                 (uint)*(ushort *)(iVar18 + 0x9a) & 0xffffffffU >> (uVar17 + 1) * 8;
        gte_strgb3_g3((u_long *)in_t1);
        uVar17 = iVar51 + 2U & 3;
        puVar14 = (uint *)((iVar51 + 2U) - uVar17);
        *puVar14 = *puVar14 & -1 << (uVar17 + 1) * 8 | (uint)((int)in_t1 << 8) >> (3 - uVar17) * 8;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)in_t1 + 3) = 6;
        bVar13 = ppuVar32 < in_t1;
        uVar17 = (int)in_t1 + 2U & 3;
        puVar14 = (uint *)(((int)in_t1 + 2U) - uVar17);
        *puVar14 = *puVar14 & -1 << (uVar17 + 1) * 8 | uVar24 >> (3 - uVar17) * 8;
        in_t1 = in_t1 + 7;
        if (bVar13) break;
      }
      puVar42 = puVar42 + 5;
      ppuVar32 = in_t1;
    } while (puVar42 != puVar49);
    *(undefined4 ***)(iVar18 + 0x68) = in_t1;
  }
  iVar18 = DAT_1f800070;
  puVar15 = (undefined4 *)param_1[4];
  if (*(ushort *)((int)param_1 + 0x36) != 0) {
    puVar20 = puVar15 + (uint)*(ushort *)((int)param_1 + 0x36) * 6;
    DAT_1f8003b0 = (short **)*puVar15;
    DAT_1f8003b4 = puVar15[1];
    puVar16 = (undefined4 *)(((uint)DAT_1f8003b0 & 0x1ff) * 8 + DAT_1f800070);
    uVar56 = *puVar16;
    uVar55 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 6 & 0xff8U) + DAT_1f800070);
    uVar54 = *puVar16;
    uVar53 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 0xf & 0xff8U) + DAT_1f800070);
    uVar52 = *puVar16;
    do {
      ppsVar43 = DAT_1f80006c;
      gte_ldVXY2(uVar56);
      gte_ldVZ2(uVar55);
      gte_ldVXY0(uVar54);
      gte_ldVZ0(uVar53);
      gte_ldVXY1(uVar52);
      gte_ldVZ1(puVar16[1]);
      ppuVar32 = (undefined4 **)puVar15[6];
      gte_rtpt_b();
      uVar17 = DAT_1f8003b4 & 0x1ff;
      DAT_1f8003b4 = puVar15[7];
      puVar16 = (undefined4 *)(uVar17 * 8 + iVar18);
      puVar25 = (undefined4 *)(((uint)ppuVar32 & 0x1ff) * 8 + iVar18);
      puVar29 = (undefined4 *)(((int)ppuVar32 >> 6 & 0xff8U) + iVar18);
      uVar17 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(ppuVar32,param_4,in_t1);
      uVar56 = *puVar25;
      gte_nclip_b();
      gte_ldVXY0(*puVar16);
      gte_ldVZ0(puVar16[1]);
      puVar16 = (undefined4 *)(((int)ppuVar32 >> 0xf & 0xff8U) + iVar18);
      uVar55 = puVar25[1];
      iVar19 = gte_stMAC0();
      gte_rtps_b();
      if ((int)in_t1 < (int)ppuVar32) {
        in_t1 = ppuVar32;
      }
      uVar54 = *puVar29;
      if ((int)in_t1 < (int)param_4) {
        in_t1 = param_4;
      }
      iVar51 = DAT_1f800064 + ((uint)DAT_1f8003b0 >> 0x15 & 0xc0);
      uVar53 = puVar29[1];
      uVar24 = gte_stFLAG();
      ppuVar26 = (undefined4 **)gte_stSZ3();
      gte_nclip_b();
      uVar52 = *puVar16;
      if (-1 < (int)(uVar17 | uVar24)) {
        if ((int)in_t1 < (int)ppuVar26) {
          in_t1 = ppuVar26;
        }
        in_t1 = (undefined4 **)((int)in_t1 >> 3);
        uVar17 = gte_stMAC0();
        if ((-iVar19 | uVar17) != 0) {
          param_4 = (undefined4 **)puVar15[3];
          gte_ldRGB(puVar15[2]);
          in_t1 = (undefined4 **)((int)in_t1 >> (((ushort)DAT_1f800098 >> 16) & 0x1f));
          bVar13 = 0xfff < (int)in_t1;
          if (-1 < (int)(-iVar19 - 1U & uVar17 - 1 & (uint)DAT_1f8003b0)) {
            in_t1 = (undefined4 **)((int)in_t1 << 2);
            if (bVar13) {
              in_t1 = (undefined4 **)0x3ffc;
            }
            gte_ldIR0(0);
            gte_dpcs_b();
            uVar28 = puVar15[5];
            psVar33 = (short *)gte_stRGB2();
            gte_ldRGB0(param_4);
            gte_ldRGB1(puVar15[4]);
            gte_ldRGB2(uVar28);
            gte_dpct();
            DAT_1f8003b0 = (short **)ppuVar32;
            DAT_1f800068[1] = psVar33;
            gte_stRGB0();
            gte_stRGB1();
            gte_stRGB2();
            uVar17 = (int)in_t1 + iVar51 + 2;
            uVar24 = uVar17 & 3;
            iVar19 = *(int *)(uVar17 - uVar24);
            gte_stSXY1();
            DAT_1f800068[4] = DAT_1f8000c0;
            gte_stSXY2();
            gte_stSXY0();
            *DAT_1f800068 =
                 (short *)((iVar19 << (3 - uVar24) * 8 | uVar28 & 0xffffffffU >> (uVar24 + 1) * 8)
                           >> 8 | 0x8000000);
            uVar17 = (int)in_t1 + iVar51 + 2;
            uVar24 = uVar17 & 3;
            puVar42 = (uint *)(uVar17 - uVar24);
            *puVar42 = *puVar42 & -1 << (uVar24 + 1) * 8 |
                       (uint)((int)DAT_1f800068 << 8) >> (3 - uVar24) * 8;
            bVar13 = ppsVar43 < DAT_1f800068;
            DAT_1f800068 = DAT_1f800068 + 9;
            ppuVar32 = (undefined4 **)DAT_1f8003b0;
            if (bVar13) break;
          }
        }
      }
      DAT_1f8003b0 = (short **)ppuVar32;
      puVar15 = puVar15 + 6;
    } while (puVar15 != puVar20);
  }
  iVar18 = 0x1f800000;
  puVar42 = (uint *)param_1[5];
  puVar49 = puVar42 + (uint)*(ushort *)(param_1 + 0xe) * 3;
  if (*(ushort *)(param_1 + 0xe) != 0) {
    DAT_1f800394 = _DAT_1f800398;
    in_t1 = (undefined4 **)DAT_1f800068;
    do {
      iVar19 = *(int *)(iVar18 + 0x70);
      uVar39 = *puVar42;
      puVar14 = (uint *)((uVar39 & 0x1ff) * 8 + iVar19);
      uVar37 = *puVar14;
      puVar15 = (undefined4 *)(((int)uVar39 >> 6 & 0xff8U) + iVar19);
      puVar16 = (undefined4 *)(((int)uVar39 >> 0xf & 0xff8U) + iVar19);
      gte_ldVXY0(uVar37);
      gte_ldVZ0(puVar14[1]);
      gte_ldVXY2(*puVar15);
      gte_ldVZ2(puVar15[1]);
      gte_ldVXY1(*puVar16);
      gte_ldVZ1(puVar16[1]);
      gte_rtpt_b();
      uVar28 = puVar42[2];
      uVar24 = uVar39 >> 0x15 & 0xc0;
      gte_ldRGB(uVar28);
      param_4 = (undefined4 **)gte_stFLAG();
      read_sz_fifo3(uVar24,uVar37,uVar28);
      gte_nclip_b();
      uVar17 = uVar24;
      if ((int)uVar24 < (int)uVar28) {
        uVar17 = uVar28;
      }
      if ((int)uVar17 < (int)uVar37) {
        uVar17 = uVar37;
      }
      iVar19 = ((int)uVar17 >> 3) >> (*(ushort *)(iVar18 + 0x9a) & 0x1f);
      iVar51 = iVar19 << 2;
      if (0xfff < iVar19) {
        iVar51 = 0x3ffc;
      }
      iVar51 = *(int *)(iVar18 + 100) + uVar24 + iVar51;
      uVar17 = gte_stMAC0();
      if (((-1 < (int)param_4) && (uVar17 != 0)) && (-1 < (int)(uVar17 & uVar39))) {
        gte_ldIR0(0);
        gte_dpcs_b();
        ppsVar43 = (short **)(((int)puVar42[1] >> 4 & 0x7ffe0U) + *(int *)(iVar18 + 0x3a0));
        if (uVar17 <= *(ushort *)(ppsVar43 + 3)) {
          ppsVar43 = ppsVar43 + 4;
        }
        puVar15 = (undefined4 *)*ppsVar43;
        param_4 = (undefined4 **)ppsVar43[1];
        puVar16 = (undefined4 *)ppsVar43[2];
        uVar24 = -uVar17;
        if ((int)uVar17 < 0) {
          uVar24 = uVar17;
        }
        uVar24 = *(int *)(iVar18 + 0x398) + uVar24;
        if ((int)uVar24 < 0) {
          *(undefined4 ***)(iVar18 + 0x68) = in_t1;
          *(uint **)(iVar18 + 0x3a8) = puVar42;
          *(int *)(iVar18 + 0x9c) = iVar51;
          *(undefined4 ***)(iVar18 + 0xa4) = param_4;
          uVar17 = iVar18 + 0xa5U & 3;
          puVar42 = (uint *)((iVar18 + 0xa5U) - uVar17);
          *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 | (uint)puVar15 >> (3 - uVar17) * 8;
          gte_stVXY0();
          gte_stVZ0();
          gte_stVXY2();
          gte_stVZ2();
          gte_stVXY1();
          gte_stVZ1();
          *(short *)(iVar18 + 0xae) = (short)puVar15;
          *(short *)(iVar18 + 0xbe) = (short)param_4;
          *(short *)(iVar18 + 0xce) = (short)puVar16;
          gte_stSXY0();
          gte_stSXY2();
          gte_stSXY1();
          gte_stRGB2();
          iVar19 = 0x1f800000;
          ppuVar32 = &DAT_1f8000e8;
          DAT_1f8000e8 = &DAT_1f8000a8;
          DAT_1f8000ec = &DAT_1f8000b8;
          DAT_1f8000f0 = &DAT_1f8000c8;
          DAT_1f800388 = DAT_1f800068;
          DAT_1f80038c = DAT_1f800068;
          memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(DAT_1f800068,0), 3);
          DAT_1f800390.value = CONCAT13(7, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__80021a20:
          pSVar41 = (SVECTOR *)(ppuVar32 + 4);
          puVar15 = *ppuVar32;
          puVar16 = ppuVar32[1];
          puVar20 = ppuVar32[2];
          sVar8 = *(short *)puVar15;
          sVar9 = *(short *)puVar16;
          sVar10 = *(short *)puVar20;
          *(short *)(ppuVar32 + 4) = (short)((int)sVar8 + (int)sVar9 >> 1);
          *(short *)(ppuVar32 + 8) = (short)((int)sVar9 + (int)sVar10 >> 1);
          *(short *)(ppuVar32 + 0xc) = (short)((int)sVar10 + (int)sVar8 >> 1);
          sVar8 = *(short *)((int)puVar15 + 2);
          sVar9 = *(short *)((int)puVar16 + 2);
          sVar10 = *(short *)((int)puVar20 + 2);
          *(short *)((int)ppuVar32 + 0x12) = (short)((int)sVar8 + (int)sVar9 >> 1);
          *(short *)((int)ppuVar32 + 0x22) = (short)((int)sVar9 + (int)sVar10 >> 1);
          *(short *)((int)ppuVar32 + 0x32) = (short)((int)sVar10 + (int)sVar8 >> 1);
          sVar8 = *(short *)(puVar15 + 1);
          sVar9 = *(short *)(puVar16 + 1);
          sVar10 = *(short *)(puVar20 + 1);
          *(short *)(ppuVar32 + 5) = (short)((int)sVar8 + (int)sVar9 >> 1);
          *(short *)(ppuVar32 + 9) = (short)((int)sVar9 + (int)sVar10 >> 1);
          *(short *)(ppuVar32 + 0xd) = (short)((int)sVar10 + (int)sVar8 >> 1);
          gte_ldv0(pSVar41);
          pSVar45 = pSVar41 + 6;
          gte_rtps_b();
          bVar2 = *(byte *)((int)puVar15 + 6);
          bVar3 = *(byte *)((int)puVar16 + 6);
          bVar4 = *(byte *)((int)puVar20 + 6);
          *(char *)&pSVar41->pad = (char)((int)((uint)bVar2 + (uint)bVar3) >> 1);
          *(char *)&pSVar41[2].pad = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
          *(char *)&pSVar41[4].pad = (char)((int)((uint)bVar4 + (uint)bVar2) >> 1);
          bVar2 = *(byte *)((int)puVar15 + 7);
          bVar3 = *(byte *)((int)puVar16 + 7);
          bVar4 = *(byte *)((int)puVar20 + 7);
          *(char *)((int)&pSVar41->pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar3) >> 1);
          *(char *)((int)&pSVar41[2].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
          *(char *)((int)&pSVar41[4].pad + 1) = (char)((int)((uint)bVar4 + (uint)bVar2) >> 1);
          ppuVar27 = ppuVar32 + 6;
          ppuVar26 = ppuVar32;
          do {
            gte_stFLAG();
            gte_ldVXY0(ppuVar27 + 2);
            gte_ldVZ0(ppuVar27 + 3);
            gte_stsxy((long *)ppuVar27);
            gte_rtps_b();
            pSVar41 = pSVar41 + 2;
            ppuVar27 = ppuVar27 + 4;
          } while (pSVar41 != pSVar45);
          piVar38 = *(int **)(iVar19 + 0x68);
          iVar51 = *(int *)(iVar19 + 0xa0);
          uVar17 = iVar19 + 0xa5U & 3;
          uVar24 = *(int *)((iVar19 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                   (uint)pSVar45 & 0xffffffffU >> (uVar17 + 1) * 8;
          uVar17 = *(uint *)(iVar19 + 0xa4);
          param_4 = (undefined4 **)0x2;
          ppuVar32 = ppuVar26 + 2;
          do {
            iVar21 = (int)param_4 + -1;
            if (param_4 == (undefined4 **)0x0) {
              iVar21 = 2;
            }
            puVar15 = ppuVar26[iVar21];
            gte_ldSXY0(*ppuVar32 + 2);
            gte_ldSXY1(ppuVar26 + iVar21 * 4 + 6);
            gte_ldSXY2(puVar15 + 2);
            gte_stSXY0();
            gte_stSXY1();
            gte_nclip_b();
            psVar33 = (short *)((int)*ppuVar32 + 6);
            uVar28 = (uint)psVar33 & 3;
            uVar24 = uVar24 & -1 << (4 - uVar28) * 8 |
                     *(uint *)((int)psVar33 - uVar28) >> uVar28 * 8;
            uVar28 = (int)ppuVar26 + iVar21 * 0x10 + 0x16;
            uVar37 = uVar28 & 3;
            uVar17 = uVar17 & -1 << (4 - uVar37) * 8 | *(uint *)(uVar28 - uVar37) >> uVar37 * 8;
            piVar38[3] = uVar24;
            uVar28 = (uint)(short *)((int)puVar15 + 6U) & 3;
            uVar37 = *(uint *)((int)(short *)((int)puVar15 + 6U) - uVar28);
            piVar38[5] = uVar17;
            piVar34 = piVar38 + -0x1e3ffff8;
            piVar38[7] = (uint)puVar15 & -1 << (4 - uVar28) * 8 | uVar37 >> uVar28 * 8;
            *piVar38 = (int)piVar34;
            iVar21 = gte_stMAC0();
            gte_stSXY2();
            piVar38[1] = iVar51;
            if (iVar21 != 0) {
              *(int **)(iVar19 + 0x38c) = piVar38;
              piVar38 = piVar38 + 8;
            }
            ppuVar32 = ppuVar32 + -1;
            param_4 = (undefined4 **)((int)param_4 + -1);
            *(int **)(iVar19 + 0x68) = piVar38;
          } while (-1 < (int)param_4);
          uVar17 = 3;
          if (*(uint *)(iVar19 + 0x68) <= *(uint *)(iVar19 + 0x6c)) {
            do {
              if (uVar17 == 3) {
                ppuVar46 = ppuVar26 + 4;
                ppuVar27 = ppuVar26 + 8;
                ppuVar40 = ppuVar26 + 0xc;
              }
              else {
                ppuVar46 = (undefined4 **)ppuVar26[uVar17];
                ppuVar27 = ppuVar26 + uVar17 * 4 + 4;
                if (uVar17 == 0) {
                  ppuVar40 = ppuVar26 + 0xc;
                }
                else {
                  ppuVar40 = ppuVar26 + (uVar17 - 1) * 4 + 4;
                }
              }
              piVar38 = *(int **)(iVar19 + 0x68);
              gte_ldSXY0(ppuVar46 + 2);
              gte_ldSXY1(ppuVar27 + 2);
              gte_ldSXY2(ppuVar40 + 2);
              gte_stSXY0();
              gte_stSXY1();
              gte_nclip_b();
              iVar51 = *(int *)(iVar19 + 0xa0);
              *piVar38 = (int)(piVar38 + -0x1e3ffff8);
              param_4 = (undefined4 **)(uint)*(ushort *)(iVar19 + 0x394);
              uVar24 = iVar19 + 0xa5U & 3;
              uVar28 = (int)ppuVar46 + 6U & 3;
              piVar34 = (int *)((*(int *)((iVar19 + 0xa5U) - uVar24) << (3 - uVar24) * 8 |
                                (uint)piVar34 & 0xffffffffU >> (uVar24 + 1) * 8) &
                                -1 << (4 - uVar28) * 8 |
                               *(uint *)(((int)ppuVar46 + 6U) - uVar28) >> uVar28 * 8);
              ppuVar32 = (undefined4 **)gte_stMAC0();
              uVar24 = *(uint *)(iVar19 + 0xa4);
              gte_stSXY2();
              if ((int)ppuVar32 < 0) {
                ppuVar32 = (undefined4 **)-(int)ppuVar32;
              }
              piVar38[1] = iVar51;
              if (param_4 < ppuVar32) {
                if (ppuVar26 != (undefined4 **)(iVar19 + 0x328)) goto code_r0x80021cd4;
              }
              else {
                uVar28 = (int)ppuVar27 + 6U & 3;
                uVar39 = *(uint *)(((int)ppuVar27 + 6U) - uVar28);
                piVar38[3] = (int)piVar34;
                uVar37 = (int)ppuVar40 + 6U & 3;
                uVar48 = *(uint *)(((int)ppuVar40 + 6U) - uVar37);
                piVar38[5] = uVar24 & -1 << (4 - uVar28) * 8 | uVar39 >> uVar28 * 8;
                piVar38[7] = (uint)(undefined4 **)(iVar19 + 0x328) & -1 << (4 - uVar37) * 8 |
                             uVar48 >> uVar37 * 8;
                *(int **)(iVar19 + 0x38c) = piVar38;
                *(int **)(iVar19 + 0x68) = piVar38 + 8;
              }
              while (uVar17 = uVar17 - 1, (int)uVar17 < 0) {
                if (ppuVar26 == (undefined4 **)(iVar19 + 0xe8)) {
                  uVar17 = *(uint *)(iVar19 + 0x388);
                  if (*(uint *)(iVar19 + 0x6c) < *(uint *)(iVar19 + 0x68)) {
                    *(uint *)(iVar19 + 0x68) = uVar17;
                  }
                  else if (*(uint *)(iVar19 + 0x68) != uVar17) {
                    iVar21 = *(int *)(iVar19 + 0x38c);
                    uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                    uVar28 = uVar24 & 3;
                    iVar51 = *(int *)(uVar24 - uVar28);
                    uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                    uVar37 = uVar24 & 3;
                    puVar42 = (uint *)(uVar24 - uVar37);
                    *puVar42 = *puVar42 & -1 << (uVar37 + 1) * 8 | (uVar17 << 8) >> (3 - uVar37) * 8
                    ;
                    uVar17 = iVar21 + 2;
                    uVar24 = uVar17 & 3;
                    puVar42 = (uint *)(uVar17 - uVar24);
                    *puVar42 = *puVar42 & -1 << (uVar24 + 1) * 8 |
                               (uint)(iVar51 << (3 - uVar28) * 8) >> (3 - uVar24) * 8;
                  }
                  goto LAB_overlay0__80021d6c;
                }
                ppuVar32 = ppuVar26 + -0x11;
                ppuVar26 = ppuVar26 + -0x18;
                uVar17 = (uint)*(byte *)ppuVar32;
              }
            } while( true );
          }
          *(undefined4 *)(iVar19 + 0x68) = *(undefined4 *)(iVar19 + 0x388);
LAB_overlay0__80021d6c:
          in_t1 = *(undefined4 ***)(iVar18 + 0x68);
          puVar42 = *(uint **)(iVar18 + 0x3a8);
          if (in_t1 < *(undefined4 ***)(iVar18 + 0x6c)) goto LAB_overlay0__80021dd0;
          *(undefined4 ***)(iVar18 + 0x68) = in_t1;
          goto LAB_overlay0__80021de0;
        }
        ppuVar32 = *(undefined4 ***)(iVar18 + 0x6c);
        uVar17 = iVar51 + 2U & 3;
        iVar19 = *(int *)((iVar51 + 2U) - uVar17);
        gte_stRGB2();
        in_t1[3] = puVar15;
        in_t1[5] = param_4;
        in_t1[7] = puVar16;
        uVar28 = iVar51 + 2U & 3;
        puVar14 = (uint *)((iVar51 + 2U) - uVar28);
        *puVar14 = *puVar14 & -1 << (uVar28 + 1) * 8 | (uint)((int)in_t1 << 8) >> (3 - uVar28) * 8;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)in_t1 + 3) = 7;
        bVar13 = ppuVar32 < in_t1;
        uVar28 = (uint)(short *)((int)in_t1 + 2U) & 3;
        puVar14 = (uint *)((int)(short *)((int)in_t1 + 2U) - uVar28);
        *puVar14 = *puVar14 & -1 << (uVar28 + 1) * 8 |
                   (iVar19 << (3 - uVar17) * 8 | uVar24 & 0xffffffffU >> (uVar17 + 1) * 8) >>
                   (3 - uVar28) * 8;
        in_t1 = in_t1 + 8;
        if (bVar13) break;
      }
LAB_overlay0__80021dd0:
      puVar42 = puVar42 + 3;
    } while (puVar42 != puVar49);
    *(undefined4 ***)(iVar18 + 0x68) = in_t1;
  }
LAB_overlay0__80021de0:
  puVar15 = (undefined4 *)param_1[6];
  iVar18 = 0x1f800000;
  if (*(ushort *)((int)param_1 + 0x3a) != 0) {
    DAT_1f8003ac = (undefined4)(puVar15 + (uint)*(ushort *)((int)param_1 + 0x3a) * 3);
    DAT_1f800394 = (ushort)DAT_1f80039c;
    DAT_1f8003b0 = (short **)*puVar15;
    DAT_1f8003b4 = puVar15[1];
    puVar16 = (undefined4 *)(((uint)DAT_1f8003b0 & 0x1ff) * 8 + DAT_1f800070);
    uVar56 = *puVar16;
    uVar55 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 6 & 0xff8U) + DAT_1f800070);
    uVar53 = *puVar16;
    uVar52 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 0xf & 0xff8U) + DAT_1f800070);
    uVar54 = *puVar16;
    ppsVar43 = DAT_1f800068;
    do {
      iVar19 = *(int *)(iVar18 + 0x70);
      uVar37 = *(uint *)(iVar18 + 0x3b0);
      uVar28 = *(uint *)(iVar18 + 0x3b4);
      uVar22 = puVar16[1];
      *(undefined4 *)(iVar18 + 0xb8) = uVar53;
      *(undefined4 *)(iVar18 + 0xbc) = uVar52;
      gte_ldVXY2(uVar56);
      gte_ldVZ2(uVar55);
      gte_ldVXY0(uVar53);
      gte_ldVZ0(uVar52);
      gte_ldVXY1(uVar54);
      gte_ldVZ1(uVar22);
      ppuVar32 = (undefined4 **)puVar15[3];
      gte_rtpt_b();
      uVar52 = puVar15[4];
      *(undefined4 ***)(iVar18 + 0x3b0) = ppuVar32;
      puVar16 = (undefined4 *)((uVar28 & 0x1ff) * 8 + iVar19);
      puVar20 = (undefined4 *)(((uint)ppuVar32 & 0x1ff) * 8 + iVar19);
      uVar53 = *puVar16;
      *(undefined4 *)(iVar18 + 0x3b4) = uVar52;
      puVar25 = (undefined4 *)(((int)ppuVar32 >> 6 & 0xff8U) + iVar19);
      uVar24 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(ppuVar32,param_4,in_t1);
      uVar56 = *puVar20;
      gte_nclip_b();
      gte_ldVXY0(uVar53);
      gte_ldVZ0(puVar16[1]);
      puVar16 = (undefined4 *)(((int)ppuVar32 >> 0xf & 0xff8U) + iVar19);
      uVar55 = puVar20[1];
      iVar19 = gte_stMAC0();
      gte_rtps_b();
      uVar17 = -iVar19;
      if ((int)in_t1 < (int)ppuVar32) {
        in_t1 = ppuVar32;
      }
      uVar53 = *puVar25;
      if ((int)in_t1 < (int)param_4) {
        in_t1 = param_4;
      }
      uVar52 = puVar25[1];
      uVar39 = gte_stFLAG();
      ppuVar32 = (undefined4 **)gte_stSZ3();
      gte_nclip_b();
      uVar54 = *puVar16;
      if (-1 < (int)(uVar24 | uVar39)) {
        if ((int)in_t1 < (int)ppuVar32) {
          in_t1 = ppuVar32;
        }
        in_t1 = (undefined4 **)((int)in_t1 >> 3);
        param_4 = *(undefined4 ***)(iVar18 + 0x3a0);
        uVar39 = gte_stMAC0();
        uVar24 = uVar17 + uVar39;
        if ((uVar17 | uVar39) != 0) {
          gte_ldRGB(puVar15[2]);
          in_t1 = (undefined4 **)((int)in_t1 >> (*(ushort *)(iVar18 + 0x9a) & 0x1f));
          bVar13 = 0xfff < (int)in_t1;
          if (-1 < (int)(uVar17 - 1 & uVar39 - 1 & uVar37)) {
            in_t1 = (undefined4 **)((int)in_t1 << 2);
            if (bVar13) {
              in_t1 = (undefined4 **)0x3ffc;
            }
            iVar19 = *(int *)(iVar18 + 100) + (uVar37 >> 0x15 & 0xc0) + (int)in_t1;
            ppsVar30 = (short **)(((int)uVar28 >> 4 & 0x7ffe0U) + (int)param_4);
            if ((int)uVar24 < 0) {
              uVar24 = -uVar24;
            }
            if (uVar24 <= *(ushort *)(ppsVar30 + 3)) {
              ppsVar30 = ppsVar30 + 4;
            }
            param_4 = (undefined4 **)*ppsVar30;
            gte_ldIR0(0);
            *(undefined4 *)(iVar18 + 0x3b8) = uVar56;
            *(undefined4 *)(iVar18 + 0x3bc) = uVar55;
            gte_dpcs_b();
            psVar35 = ppsVar30[1];
            psVar33 = ppsVar30[2];
            psVar31 = (short *)gte_stRGB2();
            if (*(int *)(iVar18 + 0x39c) < (int)uVar24) {
              *(undefined4 *)(iVar18 + 0x3c0) = uVar53;
              *(undefined4 *)(iVar18 + 0x3c4) = uVar52;
              *(undefined4 *)(iVar18 + 0x3c8) = uVar54;
              *(short ***)(iVar18 + 0x68) = ppsVar43;
              *(undefined4 **)(iVar18 + 0x3a8) = puVar15;
              *(int *)(iVar18 + 0x9c) = iVar19;
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
              *(short **)(iVar18 + 0xa4) = psVar35;
              uVar17 = iVar18 + 0xa5U & 3;
              puVar42 = (uint *)((iVar18 + 0xa5U) - uVar17);
              *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 | (uint)param_4 >> (3 - uVar17) * 8;
              *(short *)(iVar18 + 0xae) = (short)param_4;
              *(short *)(iVar18 + 0xbe) = (short)psVar35;
              *(short *)(iVar18 + 0xce) = (short)psVar33;
              *(short *)(iVar18 + 0xde) = (short)((uint)psVar33 >> 0x10);
              iVar19 = 0x1f800000;
              ppuVar32 = &DAT_1f8000e8;
              DAT_1f8000e8 = &DAT_1f8000a8;
              DAT_1f8000ec = &DAT_1f8000b8;
              DAT_1f8000f0 = &DAT_1f8000c8;
              DAT_1f8000f4 = &DAT_1f8000d8;
              DAT_1f800388 = DAT_1f800068;
              DAT_1f80038c = DAT_1f800068;
              memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(DAT_1f800068,0), 3);
              DAT_1f800390.value = CONCAT13(9, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__800220d8:
              pSVar41 = (SVECTOR *)(ppuVar32 + 4);
              puVar15 = *ppuVar32;
              puVar20 = ppuVar32[1];
              puVar25 = ppuVar32[2];
              puVar29 = ppuVar32[3];
              sVar8 = *(short *)puVar15;
              sVar9 = *(short *)puVar20;
              sVar10 = *(short *)puVar25;
              iVar21 = (int)sVar8 + (int)sVar9;
              *(short *)(ppuVar32 + 8) = (short)(iVar21 >> 1);
              sVar11 = *(short *)puVar29;
              *(short *)(ppuVar32 + 0xc) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar51 = (int)sVar10 + (int)sVar11;
              *(short *)(ppuVar32 + 0x10) = (short)(iVar51 >> 1);
              *(short *)(ppuVar32 + 0x14) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)(ppuVar32 + 4) = (short)(iVar21 + iVar51 >> 2);
              sVar8 = *(short *)((int)puVar15 + 2);
              sVar9 = *(short *)((int)puVar20 + 2);
              sVar10 = *(short *)((int)puVar25 + 2);
              iVar21 = (int)sVar8 + (int)sVar9;
              *(short *)((int)ppuVar32 + 0x22) = (short)(iVar21 >> 1);
              sVar11 = *(short *)((int)puVar29 + 2);
              *(short *)((int)ppuVar32 + 0x32) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar51 = (int)sVar10 + (int)sVar11;
              *(short *)((int)ppuVar32 + 0x42) = (short)(iVar51 >> 1);
              *(short *)((int)ppuVar32 + 0x52) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)((int)ppuVar32 + 0x12) = (short)(iVar21 + iVar51 >> 2);
              sVar8 = *(short *)(puVar15 + 1);
              sVar9 = *(short *)(puVar20 + 1);
              sVar10 = *(short *)(puVar25 + 1);
              iVar21 = (int)sVar8 + (int)sVar9;
              *(short *)(ppuVar32 + 9) = (short)(iVar21 >> 1);
              sVar11 = *(short *)(puVar29 + 1);
              *(short *)(ppuVar32 + 0xd) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar51 = (int)sVar10 + (int)sVar11;
              *(short *)(ppuVar32 + 0x11) = (short)(iVar51 >> 1);
              *(short *)(ppuVar32 + 0x15) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)(ppuVar32 + 5) = (short)(iVar21 + iVar51 >> 2);
              gte_ldv0(pSVar41);
              pSVar45 = pSVar41 + 10;
              gte_rtps_b();
              bVar2 = *(byte *)((int)puVar15 + 6);
              bVar3 = *(byte *)((int)puVar20 + 6);
              bVar4 = *(byte *)((int)puVar25 + 6);
              iVar21 = (uint)bVar2 + (uint)bVar3;
              *(char *)&pSVar41[2].pad = (char)(iVar21 >> 1);
              bVar5 = *(byte *)((int)puVar29 + 6);
              *(char *)&pSVar41[4].pad = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
              iVar51 = (uint)bVar4 + (uint)bVar5;
              *(char *)&pSVar41[6].pad = (char)(iVar51 >> 1);
              *(char *)&pSVar41[8].pad = (char)((int)((uint)bVar5 + (uint)bVar2) >> 1);
              *(char *)&pSVar41->pad = (char)(iVar21 + iVar51 >> 2);
              bVar2 = *(byte *)((int)puVar15 + 7);
              bVar3 = *(byte *)((int)puVar20 + 7);
              bVar4 = *(byte *)((int)puVar25 + 7);
              iVar21 = (uint)bVar2 + (uint)bVar3;
              *(char *)((int)&pSVar41[2].pad + 1) = (char)(iVar21 >> 1);
              bVar5 = *(byte *)((int)puVar29 + 7);
              *(char *)((int)&pSVar41[4].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
              iVar51 = (uint)bVar4 + (uint)bVar5;
              *(char *)((int)&pSVar41[6].pad + 1) = (char)(iVar51 >> 1);
              *(char *)((int)&pSVar41[8].pad + 1) = (char)((int)((uint)bVar5 + (uint)bVar2) >> 1);
              *(char *)((int)&pSVar41->pad + 1) = (char)(iVar21 + iVar51 >> 2);
              ppuVar27 = ppuVar32 + 6;
              ppuVar26 = ppuVar32;
              do {
                gte_stFLAG();
                gte_ldVXY0(ppuVar27 + 2);
                gte_ldVZ0(ppuVar27 + 3);
                gte_stsxy((long *)ppuVar27);
                gte_rtps_b();
                pSVar41 = pSVar41 + 2;
                ppuVar27 = ppuVar27 + 4;
              } while (pSVar41 != pSVar45);
              piVar38 = *(int **)(iVar19 + 0x68);
              iVar51 = *(int *)(iVar19 + 0xa0);
              uVar17 = iVar19 + 0xa5U & 3;
              in_t1 = (undefined4 **)
                      (*(int *)((iVar19 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                      (uint)puVar20 & 0xffffffffU >> (uVar17 + 1) * 8);
              uVar28 = *(uint *)(iVar19 + 0xa4);
              uVar17 = 3;
              uVar24 = 2;
              do {
                uVar37 = uVar24 & 3;
                puVar15 = ppuVar26[uVar37];
                gte_ldSXY0(ppuVar26[uVar17] + 2);
                gte_ldSXY1(ppuVar26 + uVar37 * 4 + 10);
                gte_ldSXY2(puVar15 + 2);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                psVar33 = (short *)((int)ppuVar26[uVar17] + 6);
                uVar17 = (uint)psVar33 & 3;
                in_t1 = (undefined4 **)
                        ((uint)in_t1 & -1 << (4 - uVar17) * 8 |
                        *(uint *)((int)psVar33 - uVar17) >> uVar17 * 8);
                uVar17 = (int)ppuVar26 + uVar37 * 0x10 + 0x26;
                uVar37 = uVar17 & 3;
                uVar28 = uVar28 & -1 << (4 - uVar37) * 8 | *(uint *)(uVar17 - uVar37) >> uVar37 * 8;
                piVar38[3] = (int)in_t1;
                uVar17 = (uint)(short *)((int)puVar15 + 6U) & 3;
                uVar37 = *(uint *)((int)(short *)((int)puVar15 + 6U) - uVar17);
                piVar38[5] = uVar28;
                piVar38[7] = (uint)puVar15 & -1 << (4 - uVar17) * 8 | uVar37 >> uVar17 * 8;
                *piVar38 = (int)(piVar38 + -0x1e3ffff8);
                iVar21 = gte_stMAC0();
                gte_stSXY2();
                piVar38[1] = iVar51 + -0x8000000;
                if (iVar21 != 0) {
                  *(int **)(iVar19 + 0x38c) = piVar38;
                  piVar38 = piVar38 + 8;
                }
                *(int **)(iVar19 + 0x68) = piVar38;
                bVar13 = -1 < (int)uVar24;
                uVar17 = uVar24;
                uVar24 = uVar24 - 1;
              } while (bVar13);
              param_4 = (undefined4 **)0x3;
              if (*(uint *)(iVar19 + 0x68) <= *(uint *)(iVar19 + 0x6c)) {
                psVar33 = (short *)0x2;
                do {
                  puVar15 = ppuVar26[(int)param_4];
                  in_t1 = ppuVar26 + (int)param_4 * 4 + 8;
                  ppuVar27 = ppuVar26 + ((uint)psVar33 & 3) * 4 + 8;
                  puVar42 = *(uint **)(iVar19 + 0x68);
                  gte_ldSXY0(in_t1 + 2);
                  gte_ldSXY1(puVar15 + 2);
                  gte_ldSXY2(ppuVar26 + 6);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar17 = *(uint *)(iVar19 + 0xa0);
                  *puVar42 = (uint)(puVar42 + -0x1dbffff6);
                  puVar42[1] = uVar17;
                  uVar12 = *(ushort *)(iVar19 + 0x394);
                  iVar21 = gte_stMAC0();
                  gte_ldSXY0(ppuVar27 + 2);
                  uVar17 = iVar19 + 0xa5U & 3;
                  uVar48 = *(uint *)(iVar19 + 0xa4);
                  gte_nclip_b();
                  uVar24 = (uint)(short *)((int)puVar15 + 6U) & 3;
                  uVar39 = (*(int *)((iVar19 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                           (uint)(puVar42 + -0x1dbffff6) & 0xffffffffU >> (uVar17 + 1) * 8) &
                           -1 << (4 - uVar24) * 8 |
                           *(uint *)((int)(short *)((int)puVar15 + 6U) - uVar24) >> uVar24 * 8;
                  uVar17 = (uint)(short *)((int)in_t1 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)in_t1 + 6U) - uVar17);
                  puVar42[3] = uVar39;
                  uVar24 = (int)ppuVar26 + 0x16U & 3;
                  uVar37 = *(uint *)(((int)ppuVar26 + 0x16U) - uVar24);
                  puVar42[5] = uVar48 & -1 << (4 - uVar17) * 8 | uVar28 >> uVar17 * 8;
                  uVar17 = (uint)(short *)((int)ppuVar27 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)ppuVar27 + 6U) - uVar17);
                  puVar42[9] = -1 << (4 - uVar24) * 8 & 0x77000000U | uVar37 >> uVar24 * 8;
                  puVar42[7] = uVar39 & -1 << (4 - uVar17) * 8 | uVar28 >> uVar17 * 8;
                  iVar51 = gte_stMAC0();
                  gte_stSXY0();
                  uVar17 = iVar21 - iVar51;
                  gte_stSXY2();
                  if ((int)uVar17 < 0) {
                    uVar17 = -uVar17;
                  }
                  ppuVar32 = param_4;
                  if (uVar12 < uVar17) {
                    if (ppuVar26 != (undefined4 **)(iVar19 + 0x328)) goto code_r0x80022460;
                  }
                  else {
                    *(uint **)(iVar19 + 0x38c) = puVar42;
                    *(uint **)(iVar19 + 0x68) = puVar42 + 10;
                  }
                  while( true ) {
                    param_4 = (undefined4 **)((int)ppuVar32 + -1);
                    psVar33 = (short *)((int)ppuVar32 + -2);
                    if (-1 < (int)param_4) break;
                    if (ppuVar26 == (undefined4 **)(iVar19 + 0xe8)) {
                      uVar17 = *(uint *)(iVar19 + 0x388);
                      if (*(uint *)(iVar19 + 0x6c) < *(uint *)(iVar19 + 0x68)) {
                        *(uint *)(iVar19 + 0x68) = uVar17;
                      }
                      else if (*(uint *)(iVar19 + 0x68) != uVar17) {
                        iVar21 = *(int *)(iVar19 + 0x38c);
                        uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                        uVar28 = uVar24 & 3;
                        iVar51 = *(int *)(uVar24 - uVar28);
                        uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                        uVar37 = uVar24 & 3;
                        puVar42 = (uint *)(uVar24 - uVar37);
                        *puVar42 = *puVar42 & -1 << (uVar37 + 1) * 8 |
                                   (uVar17 << 8) >> (3 - uVar37) * 8;
                        uVar17 = iVar21 + 2;
                        uVar24 = uVar17 & 3;
                        puVar42 = (uint *)(uVar17 - uVar24);
                        *puVar42 = *puVar42 & -1 << (uVar24 + 1) * 8 |
                                   (uint)(iVar51 << (3 - uVar28) * 8) >> (3 - uVar24) * 8;
                      }
                      goto LAB_overlay0__800224e0;
                    }
                    ppuVar32 = ppuVar26 + -0x11;
                    ppuVar26 = ppuVar26 + -0x18;
                    ppuVar32 = (undefined4 **)(uint)*(byte *)ppuVar32;
                  }
                } while( true );
              }
              *(undefined4 *)(iVar19 + 0x68) = *(undefined4 *)(iVar19 + 0x388);
LAB_overlay0__800224e0:
              ppsVar43 = *(short ***)(iVar18 + 0x68);
              puVar15 = *(undefined4 **)(iVar18 + 0x3a8);
              uVar56 = *(undefined4 *)(iVar18 + 0x3b8);
              uVar55 = *(undefined4 *)(iVar18 + 0x3bc);
              uVar53 = *(undefined4 *)(iVar18 + 0x3c0);
              uVar52 = *(undefined4 *)(iVar18 + 0x3c4);
              uVar54 = *(undefined4 *)(iVar18 + 0x3c8);
              if (ppsVar43 < *(short ***)(iVar18 + 0x6c)) goto LAB_overlay0__80022568;
              *(short ***)(iVar18 + 0x68) = ppsVar43;
              goto LAB_overlay0__8002257c;
            }
            ppsVar43[3] = (short *)param_4;
            ppsVar43[5] = psVar35;
            ppsVar43[9] = psVar33;
            uVar17 = (int)ppsVar43 + 0x1dU & 3;
            puVar42 = (uint *)(((int)ppsVar43 + 0x1dU) - uVar17);
            *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 | (uint)psVar33 >> (3 - uVar17) * 8;
            ppsVar30 = *(short ***)(iVar18 + 0x6c);
            ppsVar43[1] = psVar31;
            uVar17 = iVar19 + 2U & 3;
            iVar51 = *(int *)((iVar19 + 2U) - uVar17);
            gte_stSXY1();
            ppsVar43[4] = *(short **)(iVar18 + 0xc0);
            gte_stSXY2();
            gte_stSXY0();
            *ppsVar43 = (short *)((uint)(iVar51 << (3 - uVar17) * 8) >> 8 | 0x9000000);
            uVar17 = iVar19 + 2U & 3;
            puVar42 = (uint *)((iVar19 + 2U) - uVar17);
            *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 |
                       (uint)((int)ppsVar43 << 8) >> (3 - uVar17) * 8;
            bVar13 = ppsVar30 < ppsVar43;
            ppsVar43 = ppsVar43 + 10;
            if (bVar13) break;
          }
        }
      }
LAB_overlay0__80022568:
      puVar15 = puVar15 + 3;
    } while (puVar15 != *(undefined4 **)(iVar18 + 0x3ac));
    *(short ***)(iVar18 + 0x68) = ppsVar43;
  }
LAB_overlay0__8002257c:
  iVar18 = 0x1f800000;
  puVar42 = (uint *)param_1[7];
  puVar49 = puVar42 + (uint)*(ushort *)(param_1 + 0xf) * 5;
  if (*(ushort *)(param_1 + 0xf) != 0) {
    DAT_1f800394 = _DAT_1f800398;
    in_t1 = (undefined4 **)DAT_1f800068;
    do {
      iVar19 = *(int *)(iVar18 + 0x70);
      uVar39 = *puVar42;
      uVar48 = puVar42[1];
      puVar15 = (undefined4 *)((uVar39 & 0x1ff) * 8 + iVar19);
      puVar16 = (undefined4 *)(((int)uVar39 >> 6 & 0xff8U) + iVar19);
      puVar20 = (undefined4 *)(((int)uVar39 >> 0xf & 0xff8U) + iVar19);
      gte_ldVXY0(*puVar15);
      gte_ldVZ0(puVar15[1]);
      gte_ldVXY2(*puVar16);
      gte_ldVZ2(puVar16[1]);
      gte_ldVXY1(*puVar20);
      gte_ldVZ1(puVar20[1]);
      gte_rtpt_b();
      uVar28 = puVar42[2];
      uVar37 = puVar42[4];
      uVar24 = uVar39 >> 0x15 & 0xc0;
      gte_ldRGB(uVar28);
      gte_ldRGB0(uVar28);
      gte_ldRGB1(puVar42[3]);
      gte_ldRGB2(uVar37);
      param_4 = (undefined4 **)gte_stFLAG();
      read_sz_fifo3(uVar24,uVar37,uVar28);
      gte_nclip_b();
      uVar17 = uVar24;
      if ((int)uVar24 < (int)uVar28) {
        uVar17 = uVar28;
      }
      if ((int)uVar17 < (int)uVar37) {
        uVar17 = uVar37;
      }
      iVar19 = ((int)uVar17 >> 3) >> (*(ushort *)(iVar18 + 0x9a) & 0x1f);
      iVar51 = iVar19 << 2;
      if (0xfff < iVar19) {
        iVar51 = 0x3ffc;
      }
      iVar51 = *(int *)(iVar18 + 100) + uVar24 + iVar51;
      uVar17 = gte_stMAC0();
      if (((-1 < (int)param_4) && (uVar17 != 0)) && (-1 < (int)(uVar17 & uVar39))) {
        gte_ldIR0(0);
        gte_dpct_b();
        ppsVar43 = (short **)(((int)uVar48 >> 4 & 0x7ffe0U) + *(int *)(iVar18 + 0x3a0));
        if (uVar17 <= *(ushort *)(ppsVar43 + 3)) {
          ppsVar43 = ppsVar43 + 4;
        }
        puVar15 = (undefined4 *)*ppsVar43;
        param_4 = (undefined4 **)ppsVar43[1];
        puVar16 = (undefined4 *)ppsVar43[2];
        uVar24 = -uVar17;
        if ((int)uVar17 < 0) {
          uVar24 = uVar17;
        }
        uVar24 = *(int *)(iVar18 + 0x398) + uVar24;
        if ((int)uVar24 < 0) {
          *(undefined4 ***)(iVar18 + 0x68) = in_t1;
          *(uint **)(iVar18 + 0x3a8) = puVar42;
          *(int *)(iVar18 + 0x9c) = iVar51;
          *(undefined4 ***)(iVar18 + 0xa4) = param_4;
          uVar17 = iVar18 + 0xa5U & 3;
          puVar42 = (uint *)((iVar18 + 0xa5U) - uVar17);
          *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 | (uint)puVar15 >> (3 - uVar17) * 8;
          gte_stVXY0();
          gte_stVZ0();
          gte_stVXY2();
          gte_stVZ2();
          gte_stVXY1();
          gte_stVZ1();
          *(short *)(iVar18 + 0xae) = (short)puVar15;
          *(short *)(iVar18 + 0xbe) = (short)param_4;
          *(short *)(iVar18 + 0xce) = (short)puVar16;
          gte_stSXY0();
          gte_stSXY2();
          gte_stSXY1();
          gte_stRGB2();
          gte_stRGB2();
          gte_stRGB0();
          gte_stRGB1();
          iVar19 = 0x1f800000;
          ppuVar32 = &DAT_1f8000e8;
          DAT_1f8000e8 = &DAT_1f8000a8;
          DAT_1f8000ec = &DAT_1f8000b8;
          DAT_1f8000f0 = &DAT_1f8000c8;
          DAT_1f800388 = DAT_1f800068;
          DAT_1f80038c = DAT_1f800068;
          memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(DAT_1f800068,0), 3);
          DAT_1f800390.value = CONCAT13(9, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__800227b4:
          pSVar41 = (SVECTOR *)(ppuVar32 + 4);
          puVar15 = *ppuVar32;
          puVar16 = ppuVar32[1];
          puVar20 = ppuVar32[2];
          sVar8 = *(short *)puVar15;
          sVar9 = *(short *)puVar16;
          sVar10 = *(short *)puVar20;
          *(short *)(ppuVar32 + 4) = (short)((int)sVar8 + (int)sVar9 >> 1);
          *(short *)(ppuVar32 + 8) = (short)((int)sVar9 + (int)sVar10 >> 1);
          *(short *)(ppuVar32 + 0xc) = (short)((int)sVar10 + (int)sVar8 >> 1);
          sVar8 = *(short *)((int)puVar15 + 2);
          sVar9 = *(short *)((int)puVar16 + 2);
          sVar10 = *(short *)((int)puVar20 + 2);
          *(short *)((int)ppuVar32 + 0x12) = (short)((int)sVar8 + (int)sVar9 >> 1);
          *(short *)((int)ppuVar32 + 0x22) = (short)((int)sVar9 + (int)sVar10 >> 1);
          *(short *)((int)ppuVar32 + 0x32) = (short)((int)sVar10 + (int)sVar8 >> 1);
          sVar8 = *(short *)(puVar15 + 1);
          sVar9 = *(short *)(puVar16 + 1);
          sVar10 = *(short *)(puVar20 + 1);
          *(short *)(ppuVar32 + 5) = (short)((int)sVar8 + (int)sVar9 >> 1);
          *(short *)(ppuVar32 + 9) = (short)((int)sVar9 + (int)sVar10 >> 1);
          *(short *)(ppuVar32 + 0xd) = (short)((int)sVar10 + (int)sVar8 >> 1);
          uVar28 = puVar15[3];
          uVar17 = puVar16[3];
          uVar24 = puVar20[3];
          ppuVar32[7] = (undefined4 *)((int)((uVar28 & 0xfefefe) + (uVar17 & 0xfefefe)) >> 1);
          ppuVar32[0xb] = (undefined4 *)((int)((uVar17 & 0xfefefe) + (uVar24 & 0xfefefe)) >> 1);
          ppuVar32[0xf] = (undefined4 *)((int)((uVar24 & 0xfefefe) + (uVar28 & 0xfefefe)) >> 1);
          gte_ldv0(pSVar41);
          pSVar45 = pSVar41 + 6;
          gte_rtps_b();
          bVar2 = *(byte *)((int)puVar15 + 6);
          bVar3 = *(byte *)((int)puVar16 + 6);
          bVar4 = *(byte *)((int)puVar20 + 6);
          *(char *)&pSVar41->pad = (char)((int)((uint)bVar2 + (uint)bVar3) >> 1);
          *(char *)&pSVar41[2].pad = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
          *(char *)&pSVar41[4].pad = (char)((int)((uint)bVar4 + (uint)bVar2) >> 1);
          bVar2 = *(byte *)((int)puVar15 + 7);
          bVar3 = *(byte *)((int)puVar16 + 7);
          bVar4 = *(byte *)((int)puVar20 + 7);
          *(char *)((int)&pSVar41->pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar3) >> 1);
          *(char *)((int)&pSVar41[2].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
          *(char *)((int)&pSVar41[4].pad + 1) = (char)((int)((uint)bVar4 + (uint)bVar2) >> 1);
          ppuVar27 = ppuVar32 + 6;
          ppuVar26 = ppuVar32;
          do {
            gte_stFLAG();
            gte_ldVXY0(ppuVar27 + 2);
            gte_ldVZ0(ppuVar27 + 3);
            gte_stsxy((long *)ppuVar27);
            gte_rtps_b();
            pSVar41 = pSVar41 + 2;
            ppuVar27 = ppuVar27 + 4;
          } while (pSVar41 != pSVar45);
          piVar38 = *(int **)(iVar19 + 0x68);
          uVar6 = *(undefined *)(iVar19 + 0xa3);
          uVar17 = iVar19 + 0xa5U & 3;
          uVar24 = *(int *)((iVar19 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                   uVar48 & 0xffffffffU >> (uVar17 + 1) * 8;
          uVar17 = *(uint *)(iVar19 + 0xa4);
          iVar51 = 2;
          ppuVar32 = ppuVar26 + 2;
          do {
            iVar21 = iVar51 + -1;
            if (iVar51 == 0) {
              iVar21 = 2;
            }
            puVar15 = *ppuVar32;
            param_4 = (undefined4 **)ppuVar26[iVar21];
            gte_ldSXY0(puVar15 + 2);
            gte_ldSXY1(ppuVar26 + iVar21 * 4 + 6);
            gte_ldSXY2(param_4 + 2);
            gte_stSXY0();
            gte_stSXY1();
            gte_nclip_b();
            uVar28 = (uint)(short *)((int)puVar15 + 6U) & 3;
            uVar24 = uVar24 & -1 << (4 - uVar28) * 8 |
                     *(uint *)((int)(short *)((int)puVar15 + 6U) - uVar28) >> uVar28 * 8;
            uVar28 = (int)ppuVar26 + iVar21 * 0x10 + 0x16;
            uVar37 = uVar28 & 3;
            uVar17 = uVar17 & -1 << (4 - uVar37) * 8 | *(uint *)(uVar28 - uVar37) >> uVar37 * 8;
            piVar38[3] = uVar24;
            uVar28 = (uint)(short *)((int)param_4 + 6U) & 3;
            uVar37 = *(uint *)((int)(short *)((int)param_4 + 6U) - uVar28);
            piVar38[6] = uVar17;
            piVar38[9] = (uint)(ppuVar26 + iVar21) & -1 << (4 - uVar28) * 8 | uVar37 >> uVar28 * 8;
            *piVar38 = (int)(piVar38 + -0x1dbffff6);
            iVar23 = gte_stMAC0();
            gte_stSXY2();
            if (iVar23 != 0) {
              puVar16 = ppuVar26[iVar21 * 4 + 7];
              piVar38[1] = puVar15[3];
              puVar15 = param_4[3];
              piVar38[4] = (int)puVar16;
              piVar38[7] = (int)puVar15;
              *(undefined *)((int)piVar38 + 7) = uVar6;
              *(int **)(iVar19 + 0x38c) = piVar38;
              piVar38 = piVar38 + 10;
            }
            ppuVar32 = ppuVar32 + -1;
            iVar51 = iVar51 + -1;
            *(int **)(iVar19 + 0x68) = piVar38;
          } while (-1 < iVar51);
          uVar17 = 3;
          if (*(uint *)(iVar19 + 0x68) <= *(uint *)(iVar19 + 0x6c)) {
            do {
              ppuVar32 = (undefined4 **)(uVar17 * 4);
              if (uVar17 == 3) {
                ppuVar46 = ppuVar26 + 4;
                ppuVar27 = ppuVar26 + 8;
                ppuVar40 = ppuVar26 + 0xc;
              }
              else {
                ppuVar46 = (undefined4 **)ppuVar26[uVar17];
                ppuVar27 = ppuVar26 + uVar17 * 4 + 4;
                if (uVar17 == 0) {
                  ppuVar32 = ppuVar26 + 0xc;
                  ppuVar40 = ppuVar32;
                }
                else {
                  ppuVar32 = ppuVar26 + (uVar17 - 1) * 4 + 4;
                  ppuVar40 = ppuVar32;
                }
              }
              ppsVar43 = *(short ***)(iVar19 + 0x68);
              gte_ldSXY0(ppuVar46 + 2);
              gte_ldSXY1(ppuVar27 + 2);
              gte_ldSXY2(ppuVar40 + 2);
              gte_stSXY0();
              gte_stSXY1();
              gte_nclip_b();
              uVar48 = (uint)*(ushort *)(iVar19 + 0x394);
              uVar24 = iVar19 + 0xa5U & 3;
              uVar28 = (int)ppuVar46 + 6U & 3;
              uVar36 = *(uint *)(iVar19 + 0xa4);
              uVar37 = (int)ppuVar27 + 6U & 3;
              uVar39 = *(uint *)(((int)ppuVar27 + 6U) - uVar37);
              ppsVar43[3] = (short *)((*(int *)((iVar19 + 0xa5U) - uVar24) << (3 - uVar24) * 8 |
                                      (uint)ppuVar32 & 0xffffffffU >> (uVar24 + 1) * 8) &
                                      -1 << (4 - uVar28) * 8 |
                                     *(uint *)(((int)ppuVar46 + 6U) - uVar28) >> uVar28 * 8);
              uVar24 = gte_stMAC0();
              gte_stSXY2();
              param_4 = (undefined4 **)(ppsVar43 + -0x1dbffff6);
              if ((int)uVar24 < 0) {
                uVar24 = -uVar24;
              }
              *ppsVar43 = (short *)param_4;
              if (uVar48 < uVar24) {
                if (ppuVar26 != (undefined4 **)(iVar19 + 0x328)) goto code_r0x80022ad4;
              }
              else {
                uVar24 = (int)ppuVar40 + 6U & 3;
                uVar28 = *(uint *)(((int)ppuVar40 + 6U) - uVar24);
                ppsVar43[6] = (short *)(uVar36 & -1 << (4 - uVar37) * 8 | uVar39 >> uVar37 * 8);
                puVar16 = ppuVar46[3];
                ppsVar43[9] = (short *)((uint)(undefined4 **)(iVar19 + 0x328) &
                                        -1 << (4 - uVar24) * 8 | uVar28 >> uVar24 * 8);
                puVar15 = ppuVar27[3];
                ppsVar43[1] = (short *)puVar16;
                puVar16 = ppuVar40[3];
                ppsVar43[4] = (short *)puVar15;
                uVar6 = *(undefined *)(iVar19 + 0xa3);
                ppsVar43[7] = (short *)puVar16;
                *(undefined *)((int)ppsVar43 + 7) = uVar6;
                *(short ***)(iVar19 + 0x38c) = ppsVar43;
                *(short ***)(iVar19 + 0x68) = ppsVar43 + 10;
              }
              while (uVar17 = uVar17 - 1, (int)uVar17 < 0) {
                if (ppuVar26 == (undefined4 **)(iVar19 + 0xe8)) {
                  uVar17 = *(uint *)(iVar19 + 0x388);
                  if (*(uint *)(iVar19 + 0x6c) < *(uint *)(iVar19 + 0x68)) {
                    *(uint *)(iVar19 + 0x68) = uVar17;
                  }
                  else if (*(uint *)(iVar19 + 0x68) != uVar17) {
                    iVar21 = *(int *)(iVar19 + 0x38c);
                    uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                    uVar28 = uVar24 & 3;
                    iVar51 = *(int *)(uVar24 - uVar28);
                    uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                    uVar37 = uVar24 & 3;
                    puVar42 = (uint *)(uVar24 - uVar37);
                    *puVar42 = *puVar42 & -1 << (uVar37 + 1) * 8 | (uVar17 << 8) >> (3 - uVar37) * 8
                    ;
                    uVar17 = iVar21 + 2;
                    uVar24 = uVar17 & 3;
                    puVar42 = (uint *)(uVar17 - uVar24);
                    *puVar42 = *puVar42 & -1 << (uVar24 + 1) * 8 |
                               (uint)(iVar51 << (3 - uVar28) * 8) >> (3 - uVar24) * 8;
                  }
                  goto LAB_overlay0__80022b98;
                }
                pbVar1 = (byte *)((int)ppuVar26 + -0x41);
                ppuVar26 = ppuVar26 + -0x18;
                uVar17 = (uint)(*pbVar1 >> 6);
              }
            } while( true );
          }
          *(undefined4 *)(iVar19 + 0x68) = *(undefined4 *)(iVar19 + 0x388);
LAB_overlay0__80022b98:
          in_t1 = *(undefined4 ***)(iVar18 + 0x68);
          puVar42 = *(uint **)(iVar18 + 0x3a8);
          if (in_t1 < *(undefined4 ***)(iVar18 + 0x6c)) goto LAB_overlay0__80022c04;
          *(undefined4 ***)(iVar18 + 0x68) = in_t1;
          goto LAB_overlay0__80022c14;
        }
        ppuVar32 = *(undefined4 ***)(iVar18 + 0x6c);
        uVar17 = iVar51 + 2U & 3;
        uVar24 = *(int *)((iVar51 + 2U) - uVar17) << (3 - uVar17) * 8 |
                 uVar24 & 0xffffffffU >> (uVar17 + 1) * 8;
        gte_strgb3_gt3((u_long *)in_t1);
        in_t1[3] = puVar15;
        in_t1[6] = param_4;
        in_t1[9] = puVar16;
        uVar17 = iVar51 + 2U & 3;
        puVar14 = (uint *)((iVar51 + 2U) - uVar17);
        *puVar14 = *puVar14 & -1 << (uVar17 + 1) * 8 | (uint)((int)in_t1 << 8) >> (3 - uVar17) * 8;
        gte_stSXY0();
        gte_stSXY1();
        gte_stSXY2();
        *(undefined *)((int)in_t1 + 3) = 9;
        bVar13 = ppuVar32 < in_t1;
        uVar17 = (int)in_t1 + 2U & 3;
        puVar14 = (uint *)(((int)in_t1 + 2U) - uVar17);
        *puVar14 = *puVar14 & -1 << (uVar17 + 1) * 8 | uVar24 >> (3 - uVar17) * 8;
        in_t1 = in_t1 + 10;
        if (bVar13) break;
      }
LAB_overlay0__80022c04:
      puVar42 = puVar42 + 5;
    } while (puVar42 != puVar49);
    *(undefined4 ***)(iVar18 + 0x68) = in_t1;
  }
LAB_overlay0__80022c14:
  puVar15 = (undefined4 *)param_1[8];
  iVar18 = 0x1f800000;
  if (*(ushort *)((int)param_1 + 0x3e) != 0) {
    DAT_1f8003ac = (undefined4)(puVar15 + (uint)*(ushort *)((int)param_1 + 0x3e) * 6);
    DAT_1f800394 = (ushort)DAT_1f80039c;
    DAT_1f8003b0 = (short **)*puVar15;
    DAT_1f8003b4 = puVar15[1];
    puVar16 = (undefined4 *)(((uint)DAT_1f8003b0 & 0x1ff) * 8 + DAT_1f800070);
    uVar56 = *puVar16;
    uVar55 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 6 & 0xff8U) + DAT_1f800070);
    uVar53 = *puVar16;
    uVar52 = puVar16[1];
    puVar16 = (undefined4 *)(((int)DAT_1f8003b0 >> 0xf & 0xff8U) + DAT_1f800070);
    uVar54 = *puVar16;
    ppsVar43 = DAT_1f800068;
    do {
      iVar19 = *(int *)(iVar18 + 0x70);
      uVar28 = *(uint *)(iVar18 + 0x3b0);
      uVar37 = *(uint *)(iVar18 + 0x3b4);
      uVar22 = puVar16[1];
      *(undefined4 *)(iVar18 + 0xb8) = uVar53;
      *(undefined4 *)(iVar18 + 0xbc) = uVar52;
      gte_ldVXY2(uVar56);
      gte_ldVZ2(uVar55);
      gte_ldVXY0(uVar53);
      gte_ldVZ0(uVar52);
      gte_ldVXY1(uVar54);
      gte_ldVZ1(uVar22);
      ppuVar32 = (undefined4 **)puVar15[6];
      gte_rtpt_b();
      uVar52 = puVar15[7];
      *(undefined4 ***)(iVar18 + 0x3b0) = ppuVar32;
      puVar16 = (undefined4 *)((uVar37 & 0x1ff) * 8 + iVar19);
      puVar20 = (undefined4 *)(((uint)ppuVar32 & 0x1ff) * 8 + iVar19);
      uVar53 = *puVar16;
      *(undefined4 *)(iVar18 + 0x3b4) = uVar52;
      puVar25 = (undefined4 *)(((int)ppuVar32 >> 6 & 0xff8U) + iVar19);
      uVar24 = gte_stFLAG();
      gte_stSXY0();
      read_sz_fifo3(ppuVar32,param_4,in_t1);
      uVar56 = *puVar20;
      gte_nclip_b();
      gte_ldVXY0(uVar53);
      gte_ldVZ0(puVar16[1]);
      puVar16 = (undefined4 *)(((int)ppuVar32 >> 0xf & 0xff8U) + iVar19);
      uVar55 = puVar20[1];
      iVar19 = gte_stMAC0();
      gte_rtps_b();
      uVar17 = -iVar19;
      if ((int)in_t1 < (int)ppuVar32) {
        in_t1 = ppuVar32;
      }
      uVar53 = *puVar25;
      if ((int)in_t1 < (int)param_4) {
        in_t1 = param_4;
      }
      uVar52 = puVar25[1];
      uVar39 = gte_stFLAG();
      ppuVar32 = (undefined4 **)gte_stSZ3();
      gte_nclip_b();
      uVar54 = *puVar16;
      if (-1 < (int)(uVar24 | uVar39)) {
        if ((int)in_t1 < (int)ppuVar32) {
          in_t1 = ppuVar32;
        }
        in_t1 = (undefined4 **)((int)in_t1 >> 3);
        param_4 = (undefined4 **)puVar15[2];
        uVar39 = gte_stMAC0();
        uVar24 = uVar17 + uVar39;
        if ((uVar17 | uVar39) != 0) {
          uVar22 = puVar15[3];
          gte_ldRGB(param_4);
          in_t1 = (undefined4 **)((int)in_t1 >> (*(ushort *)(iVar18 + 0x9a) & 0x1f));
          bVar13 = 0xfff < (int)in_t1;
          if (-1 < (int)(uVar17 - 1 & uVar39 - 1 & uVar28)) {
            uVar50 = puVar15[4];
            in_t1 = (undefined4 **)((int)in_t1 << 2);
            if (bVar13) {
              in_t1 = (undefined4 **)0x3ffc;
            }
            iVar19 = *(int *)(iVar18 + 100) + (uVar28 >> 0x15 & 0xc0) + (int)in_t1;
            ppsVar30 = (short **)(((int)uVar37 >> 4 & 0x7ffe0U) + *(int *)(iVar18 + 0x3a0));
            if ((int)uVar24 < 0) {
              uVar24 = -uVar24;
            }
            if (uVar24 <= *(ushort *)(ppsVar30 + 3)) {
              ppsVar30 = ppsVar30 + 4;
            }
            psVar35 = *ppsVar30;
            gte_ldIR0(0);
            *(undefined4 *)(iVar18 + 0x3b8) = uVar56;
            *(undefined4 *)(iVar18 + 0x3bc) = uVar55;
            gte_dpcs_b();
            psVar31 = ppsVar30[1];
            psVar33 = ppsVar30[2];
            param_4 = (undefined4 **)gte_stRGB2();
            gte_ldRGB0(uVar22);
            gte_ldRGB1(uVar50);
            gte_ldRGB2(puVar15[5]);
            gte_dpct();
            if (*(int *)(iVar18 + 0x39c) < (int)uVar24) {
              *(undefined4 *)(iVar18 + 0x3c0) = uVar53;
              *(undefined4 *)(iVar18 + 0x3c4) = uVar52;
              *(undefined4 *)(iVar18 + 0x3c8) = uVar54;
              *(short ***)(iVar18 + 0x68) = ppsVar43;
              *(undefined4 **)(iVar18 + 0x3a8) = puVar15;
              *(int *)(iVar18 + 0x9c) = iVar19;
              *(undefined4 ***)(iVar18 + 0xa0) = param_4;
              gte_stVXY2();
              gte_stVZ2();
              gte_stVXY1();
              gte_stVZ1();
              gte_stVXY0();
              gte_stVZ0();
              gte_stSXY1();
              gte_stSXY0();
              gte_stSXY2();
              *(short **)(iVar18 + 0xa4) = psVar31;
              uVar17 = iVar18 + 0xa5U & 3;
              puVar42 = (uint *)((iVar18 + 0xa5U) - uVar17);
              *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 | (uint)psVar35 >> (3 - uVar17) * 8;
              *(short *)(iVar18 + 0xae) = (short)psVar35;
              *(short *)(iVar18 + 0xbe) = (short)psVar31;
              *(short *)(iVar18 + 0xce) = (short)psVar33;
              *(short *)(iVar18 + 0xde) = (short)((uint)psVar33 >> 0x10);
              *(undefined4 ***)(iVar18 + 0xb4) = param_4;
              gte_stRGB0();
              gte_stRGB1();
              gte_stRGB2();
              iVar19 = 0x1f800000;
              ppuVar32 = &DAT_1f8000e8;
              DAT_1f8000e8 = &DAT_1f8000a8;
              DAT_1f8000ec = &DAT_1f8000b8;
              DAT_1f8000f0 = &DAT_1f8000c8;
              DAT_1f8000f4 = &DAT_1f8000d8;
              DAT_1f800388 = DAT_1f800068;
              DAT_1f80038c = DAT_1f800068;
              memcpy(&DAT_1f800390.bitfield._0_3_, SUB43(DAT_1f800068,0), 3);
              DAT_1f800390.value = CONCAT13(0xc, DAT_1f800390.bitfield._0_3_);
LAB_overlay0__80022f40:
              pSVar41 = (SVECTOR *)(ppuVar32 + 4);
              puVar25 = *ppuVar32;
              puVar29 = ppuVar32[1];
              puVar44 = ppuVar32[2];
              puVar47 = ppuVar32[3];
              sVar8 = *(short *)puVar25;
              sVar9 = *(short *)puVar29;
              sVar10 = *(short *)puVar44;
              iVar21 = (int)sVar8 + (int)sVar9;
              *(short *)(ppuVar32 + 8) = (short)(iVar21 >> 1);
              sVar11 = *(short *)puVar47;
              *(short *)(ppuVar32 + 0xc) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar51 = (int)sVar10 + (int)sVar11;
              *(short *)(ppuVar32 + 0x10) = (short)(iVar51 >> 1);
              *(short *)(ppuVar32 + 0x14) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)(ppuVar32 + 4) = (short)(iVar21 + iVar51 >> 2);
              sVar8 = *(short *)((int)puVar25 + 2);
              sVar9 = *(short *)((int)puVar29 + 2);
              sVar10 = *(short *)((int)puVar44 + 2);
              iVar21 = (int)sVar8 + (int)sVar9;
              *(short *)((int)ppuVar32 + 0x22) = (short)(iVar21 >> 1);
              sVar11 = *(short *)((int)puVar47 + 2);
              *(short *)((int)ppuVar32 + 0x32) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar51 = (int)sVar10 + (int)sVar11;
              *(short *)((int)ppuVar32 + 0x42) = (short)(iVar51 >> 1);
              *(short *)((int)ppuVar32 + 0x52) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)((int)ppuVar32 + 0x12) = (short)(iVar21 + iVar51 >> 2);
              sVar8 = *(short *)(puVar25 + 1);
              sVar9 = *(short *)(puVar29 + 1);
              sVar10 = *(short *)(puVar44 + 1);
              iVar21 = (int)sVar8 + (int)sVar9;
              *(short *)(ppuVar32 + 9) = (short)(iVar21 >> 1);
              sVar11 = *(short *)(puVar47 + 1);
              *(short *)(ppuVar32 + 0xd) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar51 = (int)sVar10 + (int)sVar11;
              *(short *)(ppuVar32 + 0x11) = (short)(iVar51 >> 1);
              *(short *)(ppuVar32 + 0x15) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)(ppuVar32 + 5) = (short)(iVar21 + iVar51 >> 2);
              uVar37 = puVar25[3];
              uVar17 = puVar29[3];
              uVar24 = puVar44[3];
              puVar20 = (undefined4 *)((int)((uVar37 & 0xfefefe) + (uVar17 & 0xfefefe)) >> 1);
              ppuVar32[0xb] = puVar20;
              uVar28 = puVar47[3];
              ppuVar32[0xf] = (undefined4 *)((int)((uVar17 & 0xfefefe) + (uVar24 & 0xfefefe)) >> 1);
              puVar15 = (undefined4 *)((int)((uVar24 & 0xfefefe) + (uVar28 & 0xfefefe)) >> 1);
              ppuVar32[0x13] = puVar15;
              ppuVar32[0x17] = (undefined4 *)((int)((uVar28 & 0xfefefe) + (uVar37 & 0xfefefe)) >> 1)
              ;
              ppuVar32[7] = (undefined4 *)
                            ((int)(((uint)puVar20 & 0xfefefe) + ((uint)puVar15 & 0xfefefe)) >> 1);
              gte_ldv0(pSVar41);
              pSVar45 = pSVar41 + 10;
              gte_rtps_b();
              bVar2 = *(byte *)((int)puVar25 + 6);
              bVar3 = *(byte *)((int)puVar29 + 6);
              bVar4 = *(byte *)((int)puVar44 + 6);
              iVar21 = (uint)bVar2 + (uint)bVar3;
              *(char *)&pSVar41[2].pad = (char)(iVar21 >> 1);
              bVar5 = *(byte *)((int)puVar47 + 6);
              *(char *)&pSVar41[4].pad = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
              iVar51 = (uint)bVar4 + (uint)bVar5;
              *(char *)&pSVar41[6].pad = (char)(iVar51 >> 1);
              *(char *)&pSVar41[8].pad = (char)((int)((uint)bVar5 + (uint)bVar2) >> 1);
              *(char *)&pSVar41->pad = (char)(iVar21 + iVar51 >> 2);
              bVar2 = *(byte *)((int)puVar25 + 7);
              bVar3 = *(byte *)((int)puVar29 + 7);
              bVar4 = *(byte *)((int)puVar44 + 7);
              iVar21 = (uint)bVar2 + (uint)bVar3;
              *(char *)((int)&pSVar41[2].pad + 1) = (char)(iVar21 >> 1);
              bVar5 = *(byte *)((int)puVar47 + 7);
              *(char *)((int)&pSVar41[4].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar4) >> 1);
              iVar51 = (uint)bVar4 + (uint)bVar5;
              *(char *)((int)&pSVar41[6].pad + 1) = (char)(iVar51 >> 1);
              *(char *)((int)&pSVar41[8].pad + 1) = (char)((int)((uint)bVar5 + (uint)bVar2) >> 1);
              *(char *)((int)&pSVar41->pad + 1) = (char)(iVar21 + iVar51 >> 2);
              ppuVar27 = ppuVar32 + 6;
              ppuVar26 = ppuVar32;
              do {
                FUN_8007af30();
                gte_ldVXY0(ppuVar27 + 2);
                gte_ldVZ0(ppuVar27 + 3);
                gte_stsxy((long *)ppuVar27);
                gte_rtps_b();
                pSVar41 = pSVar41 + 2;
                ppuVar27 = ppuVar27 + 4;
              } while (pSVar41 != pSVar45);
              piVar38 = *(int **)(iVar19 + 0x68);
              cVar7 = *(char *)(iVar19 + 0xa3);
              uVar17 = iVar19 + 0xa5U & 3;
              in_t1 = (undefined4 **)
                      (*(int *)((iVar19 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                      (uint)puVar29 & 0xffffffffU >> (uVar17 + 1) * 8);
              uVar28 = *(uint *)(iVar19 + 0xa4);
              uVar17 = 3;
              uVar24 = 2;
              do {
                uVar39 = uVar24 & 3;
                puVar15 = ppuVar26[uVar17];
                puVar20 = ppuVar26[uVar39];
                gte_ldSXY0(puVar15 + 2);
                gte_ldSXY1(ppuVar26 + uVar39 * 4 + 10);
                gte_ldSXY2(puVar20 + 2);
                gte_stSXY0();
                gte_stSXY1();
                gte_nclip_b();
                uVar17 = (uint)(short *)((int)puVar15 + 6U) & 3;
                in_t1 = (undefined4 **)
                        ((uint)in_t1 & -1 << (4 - uVar17) * 8 |
                        *(uint *)((int)(short *)((int)puVar15 + 6U) - uVar17) >> uVar17 * 8);
                uVar17 = (int)ppuVar26 + uVar39 * 0x10 + 0x26;
                uVar37 = uVar17 & 3;
                uVar28 = uVar28 & -1 << (4 - uVar37) * 8 | *(uint *)(uVar17 - uVar37) >> uVar37 * 8;
                piVar38[3] = (int)in_t1;
                uVar17 = (uint)(short *)((int)puVar20 + 6U) & 3;
                uVar37 = *(uint *)((int)(short *)((int)puVar20 + 6U) - uVar17);
                piVar38[6] = uVar28;
                piVar38[9] = uVar39 * 0x10 + 0x20 & -1 << (4 - uVar17) * 8 | uVar37 >> uVar17 * 8;
                *piVar38 = (int)(piVar38 + -0x1dbffff6);
                iVar51 = gte_stMAC0();
                gte_stSXY2();
                if (iVar51 != 0) {
                  puVar25 = ppuVar26[uVar39 * 4 + 0xb];
                  piVar38[1] = puVar15[3];
                  iVar51 = puVar20[3];
                  piVar38[4] = (int)puVar25;
                  piVar38[7] = iVar51;
                  *(char *)((int)piVar38 + 7) = cVar7 + -8;
                  *(int **)(iVar19 + 0x38c) = piVar38;
                  piVar38 = piVar38 + 10;
                }
                *(int **)(iVar19 + 0x68) = piVar38;
                bVar13 = -1 < (int)uVar24;
                uVar17 = uVar24;
                uVar24 = uVar24 - 1;
              } while (bVar13);
              param_4 = (undefined4 **)0x3;
              if (*(uint *)(iVar19 + 0x68) <= *(uint *)(iVar19 + 0x6c)) {
                psVar33 = (short *)0x2;
                do {
                  puVar25 = ppuVar26[(int)param_4];
                  in_t1 = ppuVar26 + (int)param_4 * 4 + 8;
                  ppuVar27 = ppuVar26 + ((uint)psVar33 & 3) * 4 + 8;
                  piVar38 = *(int **)(iVar19 + 0x68);
                  gte_ldSXY0(in_t1 + 2);
                  gte_ldSXY1(puVar25 + 2);
                  gte_ldSXY2(ppuVar26 + 6);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  puVar15 = in_t1[3];
                  piVar38[1] = puVar25[3];
                  puVar20 = ppuVar26[7];
                  piVar38[4] = (int)puVar15;
                  puVar15 = ppuVar27[3];
                  piVar38[7] = (int)puVar20;
                  piVar38[10] = (int)puVar15;
                  iVar21 = gte_stMAC0();
                  gte_ldSXY0(ppuVar27 + 2);
                  uVar17 = iVar19 + 0xa5U & 3;
                  uVar48 = *(uint *)(iVar19 + 0xa4);
                  gte_nclip_b();
                  uVar24 = (uint)(short *)((int)puVar25 + 6U) & 3;
                  uVar39 = (*(int *)((iVar19 + 0xa5U) - uVar17) << (3 - uVar17) * 8 |
                           (uint)puVar15 & 0xffffffffU >> (uVar17 + 1) * 8) & -1 << (4 - uVar24) * 8
                           | *(uint *)((int)(short *)((int)puVar25 + 6U) - uVar24) >> uVar24 * 8;
                  uVar17 = (uint)(short *)((int)in_t1 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)in_t1 + 6U) - uVar17);
                  piVar38[3] = uVar39;
                  uVar24 = (int)ppuVar26 + 0x16U & 3;
                  uVar37 = *(uint *)(((int)ppuVar26 + 0x16U) - uVar24);
                  piVar38[6] = uVar48 & -1 << (4 - uVar17) * 8 | uVar28 >> uVar17 * 8;
                  uVar17 = (uint)(short *)((int)ppuVar27 + 6U) & 3;
                  uVar28 = *(uint *)((int)(short *)((int)ppuVar27 + 6U) - uVar17);
                  piVar38[0xc] = (uint)puVar20 & -1 << (4 - uVar24) * 8 | uVar37 >> uVar24 * 8;
                  piVar38[9] = uVar39 & -1 << (4 - uVar17) * 8 | uVar28 >> uVar17 * 8;
                  iVar51 = gte_stMAC0();
                  uVar17 = iVar21 - iVar51;
                  gte_stSXY0();
                  if ((int)uVar17 < 0) {
                    uVar17 = -uVar17;
                  }
                  gte_stSXY2();
                  ppuVar32 = param_4;
                  if (*(ushort *)(iVar19 + 0x394) < uVar17) {
                    if (ppuVar26 != (undefined4 **)(iVar19 + 0x328)) goto code_r0x80023390;
                  }
                  else {
                    uVar6 = *(undefined *)(iVar19 + 0xa3);
                    *piVar38 = (int)(piVar38 + -0x1cfffff3);
                    *(undefined *)((int)piVar38 + 7) = uVar6;
                    *(int **)(iVar19 + 0x38c) = piVar38;
                    *(int **)(iVar19 + 0x68) = piVar38 + 0xd;
                  }
                  while( true ) {
                    param_4 = (undefined4 **)((int)ppuVar32 + -1);
                    psVar33 = (short *)((int)ppuVar32 + -2);
                    if (-1 < (int)param_4) break;
                    if (ppuVar26 == (undefined4 **)(iVar19 + 0xe8)) {
                      uVar17 = *(uint *)(iVar19 + 0x388);
                      if (*(uint *)(iVar19 + 0x6c) < *(uint *)(iVar19 + 0x68)) {
                        *(uint *)(iVar19 + 0x68) = uVar17;
                      }
                      else if (*(uint *)(iVar19 + 0x68) != uVar17) {
                        iVar21 = *(int *)(iVar19 + 0x38c);
                        uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                        uVar28 = uVar24 & 3;
                        iVar51 = *(int *)(uVar24 - uVar28);
                        uVar24 = *(int *)(iVar19 + 0x9c) + 2;
                        uVar37 = uVar24 & 3;
                        puVar42 = (uint *)(uVar24 - uVar37);
                        *puVar42 = *puVar42 & -1 << (uVar37 + 1) * 8 |
                                   (uVar17 << 8) >> (3 - uVar37) * 8;
                        uVar17 = iVar21 + 2;
                        uVar24 = uVar17 & 3;
                        puVar42 = (uint *)(uVar17 - uVar24);
                        *puVar42 = *puVar42 & -1 << (uVar24 + 1) * 8 |
                                   (uint)(iVar51 << (3 - uVar28) * 8) >> (3 - uVar24) * 8;
                      }
                      goto LAB_overlay0__80023424;
                    }
                    pbVar1 = (byte *)((int)ppuVar26 + -0x41);
                    ppuVar26 = ppuVar26 + -0x18;
                    ppuVar32 = (undefined4 **)(uint)(*pbVar1 >> 6);
                  }
                } while( true );
              }
              *(undefined4 *)(iVar19 + 0x68) = *(undefined4 *)(iVar19 + 0x388);
LAB_overlay0__80023424:
              ppsVar43 = *(short ***)(iVar18 + 0x68);
              puVar15 = *(undefined4 **)(iVar18 + 0x3a8);
              uVar56 = *(undefined4 *)(iVar18 + 0x3b8);
              uVar55 = *(undefined4 *)(iVar18 + 0x3bc);
              uVar53 = *(undefined4 *)(iVar18 + 0x3c0);
              uVar52 = *(undefined4 *)(iVar18 + 0x3c4);
              uVar54 = *(undefined4 *)(iVar18 + 0x3c8);
              if (*(short ***)(iVar18 + 0x6c) <= ppsVar43) {
                *(short ***)(iVar18 + 0x68) = ppsVar43;
                return;
              }
              goto LAB_overlay0__800234b8;
            }
            ppsVar43[3] = psVar35;
            ppsVar43[6] = psVar31;
            ppsVar43[0xc] = psVar33;
            uVar17 = (int)ppsVar43 + 0x25U & 3;
            puVar42 = (uint *)(((int)ppsVar43 + 0x25U) - uVar17);
            *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 | (uint)psVar33 >> (3 - uVar17) * 8;
            ppsVar30 = *(short ***)(iVar18 + 0x6c);
            ppsVar43[1] = (short *)param_4;
            gte_stRGB0();
            gte_stRGB1();
            gte_stRGB2();
            uVar17 = iVar19 + 2U & 3;
            iVar51 = *(int *)((iVar19 + 2U) - uVar17);
            gte_stSXY1();
            ppsVar43[5] = *(short **)(iVar18 + 0xc0);
            gte_stSXY2();
            gte_stSXY0();
            *ppsVar43 = (short *)((uint)(iVar51 << (3 - uVar17) * 8) >> 8 | 0xc000000);
            uVar17 = iVar19 + 2U & 3;
            puVar42 = (uint *)((iVar19 + 2U) - uVar17);
            *puVar42 = *puVar42 & -1 << (uVar17 + 1) * 8 |
                       (uint)((int)ppsVar43 << 8) >> (3 - uVar17) * 8;
            bVar13 = ppsVar30 < ppsVar43;
            ppsVar43 = ppsVar43 + 0xd;
            if (bVar13) break;
          }
        }
      }
LAB_overlay0__800234b8:
      puVar15 = puVar15 + 6;
    } while (puVar15 != *(undefined4 **)(iVar18 + 0x3ac));
    *(short ***)(iVar18 + 0x68) = ppsVar43;
  }
  return;
code_r0x80021cd4:
  *(char *)(ppuVar26 + 7) = (char)uVar17;
  ppuVar32 = ppuVar26 + 0x18;
  *ppuVar32 = ppuVar46;
  ppuVar26[0x19] = ppuVar27;
  ppuVar26[0x1a] = ppuVar40;
  goto LAB_overlay0__80021a20;
code_r0x80022460:
  *(char *)(ppuVar26 + 7) = (char)param_4;
  ppuVar32 = ppuVar26 + 0x18;
  if (((uint)param_4 & 1) == 0) {
    *ppuVar32 = puVar15;
    ppuVar26[0x19] = in_t1;
    ppuVar26[0x1a] = ppuVar26 + 4;
    ppuVar26[0x1b] = ppuVar27;
  }
  else {
    *ppuVar32 = ppuVar27;
    ppuVar26[0x19] = puVar15;
    ppuVar26[0x1a] = in_t1;
    ppuVar26[0x1b] = ppuVar26 + 4;
  }
  goto LAB_overlay0__800220d8;
code_r0x80022ad4:
  *(byte *)((int)ppuVar26 + 0x1f) = *(byte *)((int)ppuVar26 + 0x1f) & 0x3f | (byte)(uVar17 << 6);
  ppuVar32 = ppuVar26 + 0x18;
  *ppuVar32 = ppuVar46;
  ppuVar26[0x19] = ppuVar27;
  ppuVar26[0x1a] = ppuVar40;
  goto LAB_overlay0__800227b4;
code_r0x80023390:
  uVar17 = *(byte *)((int)ppuVar26 + 0x1f) & 0x3f | (int)param_4 << 6;
  *(char *)((int)ppuVar26 + 0x1f) = (char)uVar17;
  ppuVar32 = ppuVar26 + 0x18;
  if (uVar17 == 0) {
    *ppuVar32 = puVar25;
    ppuVar26[0x19] = in_t1;
    ppuVar26[0x1a] = ppuVar26 + 4;
    ppuVar26[0x1b] = ppuVar27;
  }
  else {
    *ppuVar32 = ppuVar27;
    ppuVar26[0x19] = puVar25;
    ppuVar26[0x1a] = in_t1;
    ppuVar26[0x1b] = ppuVar26 + 4;
  }
  goto LAB_overlay0__80022f40;
}
