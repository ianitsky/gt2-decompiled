// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_017.h"
#include <stdint.h>
#include <stddef.h>

// Helper macro to convert bitfield_16_t to uint for arithmetic operations
#define BITFIELD16_TO_UINT(bf) (*(uint*)&(bf))
// Helper macro to convert uint to bitfield_16_t for assignments (works with expressions)
#define UINT_TO_BITFIELD16(val) ({ uint _val = (val); *(bitfield_16_t*)&_val; })
// Helper macro to access bitfield fields of undefined4 variables
#define DAT_AS_BITFIELD16(dat) (*(bitfield_16_t*)&(dat))

void FUN_overlay0__800234f8(SVECTOR **param_1,uint param_2,uint param_3)

{

  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  char cVar5;

  undefined2 uVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar13;

  bool bVar14;
  int iVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  int in_v1;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  byte *pbVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ushort uVar31;
  int iVar32;
  int iVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 **ppuVar36;
  int *piVar37;
  int iVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 *puVar41;
  undefined2 *puVar42;
  int iVar43;
  uint uVar44;
  undefined4 *puVar45;
  undefined4 **ppuVar46;

  uint in_t0;
  uint uVar47;
  int iVar48;
  undefined4 *puVar49;
  undefined4 uVar50;
  uint in_t1;
  uint uVar51;
  undefined4 uVar52;

  SVECTOR *pSVar53;
  undefined4 uVar54;
  undefined4 **ppuVar55;
  SVECTOR *pSVar56;
  SVECTOR *pSVar57;
  uint uVar58;
  undefined4 uVar59;
  undefined4 **ppuVar60;
  undefined4 *puVar61;
  int in_t3;
  uint *puVar62;
  undefined4 **ppuVar63;
  undefined4 *puVar64;
  int in_t4;
  undefined4 uVar65;
  undefined4 *puVar66;
  undefined4 in_t6;
  undefined4 uVar67;
  int in_t7;
  uint uVar68;
  undefined4 uVar69;
  int iVar70;
  undefined4 uVar71;
  undefined *puVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  SVECTOR **ppSVar75;
  uint uVar76;

  undefined2 local_2038 [8];
  undefined auStack_2028 [8192];

  // Cast globals to bitfield_16_t pointers for structure access (like part_015)
  bitfield_16_t *DAT_1f800098_b16 = (bitfield_16_t *)&DAT_1f800098;
  bitfield_16_t *DAT_1f8000a8_b16 = (bitfield_16_t *)&DAT_1f8000a8;
  bitfield_16_t *DAT_1f8000ac_b16 = (bitfield_16_t *)&DAT_1f8000ac;
  bitfield_16_t *DAT_1f8000b8_b16 = (bitfield_16_t *)&DAT_1f8000b8;
  bitfield_16_t *DAT_1f8000bc_b16 = (bitfield_16_t *)&DAT_1f8000bc;
  bitfield_16_t *DAT_1f8000c8_b16 = (bitfield_16_t *)DAT_1f8000c8;
  bitfield_16_t *DAT_1f8000cc_b16 = (bitfield_16_t *)&DAT_1f8000cc;
  bitfield_16_t *DAT_1f8000dc_b16 = (bitfield_16_t *)&DAT_1f8000dc;
  bitfield_16_t *DAT_1f8003b0_b16 = (bitfield_16_t *)&DAT_1f8003b0;
  bitfield_16_t DAT_1f8000da;  // Local variable like in part_015

  puVar42 = local_2038;

  if (param_1[0xb] != (SVECTOR *)0x0) {

    pSVar56 = *param_1;
    DAT_1f800070 = auStack_2028;
    iVar70 = 1;
    pSVar53 = pSVar56 + (int)((int)&param_1[0xb]->vx + 1);
    ppSVar75 = param_1;

    gte_ldv0(pSVar56);
    {
      bitfield_16_t *uVar16_b16 = (bitfield_16_t *)&uVar16;
      uVar16_b16->_0_2_ = pSVar56[1].vz;
      uVar16_b16->_2_2_ = pSVar56[1].pad;
    }
    gte_rtps_b();

    do {

      uVar31 = (ushort)param_2;

      *puVar42 = (short)in_t0;
      if ((int)in_t0 < 0) {
        in_t0 = -in_t0;
      }
      if (in_v1 < 0) {
        uVar31 = uVar31 | 2;
      }

      puVar42[1] = (short)in_t1;
      if ((int)in_t1 < 0) {
        in_t1 = -in_t1;
      }
      if (in_t4 < 0) {
        uVar31 = uVar31 | 4;
      }

      puVar42[3] = (short)param_3;
      if ((int)param_3 < 0) {
        param_3 = -param_3;
      }
      if ((int)param_1 < 0) {
        uVar31 = uVar31 | 8;
      }

      *(uint *)(puVar42 + 6) = in_t0 | in_t1 | param_3;
      if (in_t3 < 0) {
        uVar31 = uVar31 | 0x10;
      }
      *(undefined4 *)(puVar42 + 4) = in_t6;
      if (in_t7 < 0) {
        uVar31 = uVar31 | 0x20;
      }

      in_t0 = gte_stIR1();
      in_t1 = gte_stIR2();
      param_3 = gte_stIR3();
      in_t7 = gte_stFLAG();
      in_t6 = gte_stSXY2();

      gte_llir_b();

      {
        bitfield_16_t *uVar73_b16 = (bitfield_16_t *)&uVar73;
        uVar73_b16->_0_2_ = pSVar56[1].vx;
        uVar73_b16->_2_2_ = pSVar56[1].vy;
      }

      gte_ldVXY1(in_t0 & 0xffff | in_t1 << 0x10);
      gte_ldVZ1(param_3);

      in_v1 = gte_stIR1();
      in_t4 = gte_stIR2();

      gte_lcv1_b();

      puVar42[2] = uVar31;

      gte_ldVXY0(uVar73);
      gte_ldVZ0(uVar16);

      pSVar57 = pSVar56 + 1;
      puVar42 = puVar42 + 8;

      {
        bitfield_16_t *uVar16_b16 = (bitfield_16_t *)&uVar16;
        uVar16_b16->_0_2_ = pSVar56[2].vz;
        uVar16_b16->_2_2_ = pSVar56[2].pad;
      }

      param_1 = (SVECTOR **)gte_stIR1();
      in_t3 = gte_stIR2();

      gte_rtps_b();

      param_2 = (uint)((int)param_3 < iVar70);
      pSVar56 = pSVar57;
    } while (pSVar57 != pSVar53);

    gte_ldtr(0,0,0);
    gte_ldR11R12(0x1000);
    gte_ldR13R21(0);
    gte_ldR22R23(0x1000);
    gte_ldR31R32(0);
    gte_ldR33(0x1000);

    pSVar56 = ppSVar75[1];

    if (*(ushort *)(ppSVar75 + 0xc) != 0) {

      puVar72 = (undefined *)((int)pSVar56 + (uint)*(ushort *)(ppSVar75 + 0xc) * 0xc);

      do {

        {
          bitfield_16_t *uVar67_b16 = (bitfield_16_t *)&uVar67;
          uVar67_b16->_0_2_ = pSVar56->vx;
          uVar67_b16->_2_2_ = pSVar56->vy;
        }

        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (BITFIELD16_TO_UINT(uVar67) & 0x1ff) * 0x10);
        DAT_1f8000ec = (uint *)(DAT_1f800070 + ((int)BITFIELD16_TO_UINT(uVar67) >> 5 & 0x1ff0));
        DAT_1f8000f0 = (uint *)(DAT_1f800070 + ((int)BITFIELD16_TO_UINT(uVar67) >> 0xe & 0x1ff0));

        uVar47 = DAT_1f8000e8[1];
        uVar51 = DAT_1f8000ec[1];
        uVar58 = DAT_1f8000f0[1];

        uVar21 = DAT_1f8000ac & 0xffff0000 | uVar47 >> 0x10;
        DAT_1f8000b4.value = CONCAT13((char)uVar47,(char *)&DAT_1f8000b4.value);
        uVar40 = DAT_1f8000bc & 0xffff0000 | uVar51 >> 0x10;
        DAT_1f8000c4.bytes._3_1_ = (undefined)uVar51;
        uVar52 = DAT_1f8000cc & 0xffff0000 | uVar58 >> 0x10;
        DAT_1f8000d4.bytes._3_1_ = (undefined)uVar58;

        if ((uVar47 & uVar51 & uVar58 & 0x1f) == 0) {

          gte_ldSXY0(DAT_1f8000e8[2]);
          gte_ldSXY1(DAT_1f8000f0[2]);
          gte_ldSXY2(DAT_1f8000ec[2]);

          uVar68 = uVar47 | uVar51 | uVar58;

          gte_nclip_b();
          uVar19 = gte_stMAC0();
          uVar65 = uVar68 & 0x20;

          if (((BITFIELD16_TO_UINT(uVar19) | BITFIELD16_TO_UINT(uVar65)) != 0) && (-1 < (int)(BITFIELD16_TO_UINT(uVar19) & BITFIELD16_TO_UINT(uVar67) & BITFIELD16_TO_UINT(uVar65) - 0x20))) {

            uVar19 = uVar47;
            if ((int)uVar47 < (int)uVar51) {
              uVar19 = uVar51;
            }
            if ((int)uVar19 < (int)uVar58) {
              uVar19 = uVar58;
            }

            iVar70 = ((int)uVar19 >> 0x13) >> (DAT_1f800098_b16->_2_2_ & 0x1f);
            iVar15 = iVar70 << 2;
            if (0xfff < iVar70) {
              iVar15 = 0x3ffc;
            }

            iVar15 = DAT_1f800064 + (uVar67 >> 0x15 & 0xc0) + iVar15;

            {
              bitfield_16_t *uVar24_b16 = (bitfield_16_t *)&uVar24;
              uVar24_b16->_0_2_ = pSVar56[1].vx;
              uVar24_b16->_2_2_ = pSVar56[1].vy;
            }

            gte_ldIR0(0);
            gte_ldRGB(uVar24);
            gte_dpcs();

            uVar16 = *DAT_1f8000e8;
            uVar19 = *DAT_1f8000ec;
            uVar28 = *DAT_1f8000f0;

            DAT_1f8000bc_b16->_0_2_ = (short)(uVar51 >> 0x10);
            DAT_1f8000cc_b16->_0_2_ = (short)(uVar58 >> 0x10);
            DAT_1f8000ac_b16->_0_2_ = (short)(uVar47 >> 0x10);

            DAT_1f8000a8 = uVar16;
            DAT_1f8000b8 = uVar19;
            DAT_1f8000c8 = uVar28;

            if ((uVar65 != 0) && ((int)uVar67 < 0)) {

              DAT_1f8000b8_b16->_0_2_ = (short)uVar19;
              DAT_1f8000b8_b16->_2_2_ = (short)(uVar19 >> 0x10);

              gte_ldR11R12((int)(short)DAT_1f8000b8);
              gte_ldR22R23((int)DAT_1f8000b8_b16->_2_2_);

              DAT_1f8000c8_b16->_0_2_ = (short)uVar28;
              gte_ldR33((int)(short)DAT_1f8000bc);
              DAT_1f8000c8_b16->_2_2_ = (short)(uVar28 >> 0x10);

              gte_ldIR1((int)(short)*DAT_1f8000c8);
              gte_ldIR2((int)DAT_1f8000c8_b16->_2_2_);
              gte_ldIR3((int)(short)DAT_1f8000cc);

              DAT_1f8000a8_b16->_0_2_ = (short)uVar16;
              iVar70 = (int)(short)DAT_1f8000a8;
              DAT_1f8000a8_b16->_2_2_ = (short)((uint)uVar16 >> 0x10);
              iVar32 = (int)DAT_1f8000a8_b16->_2_2_;

              gte_op0_b(0);
              iVar20 = gte_stMAC1();
              iVar43 = gte_stMAC2();
              iVar48 = gte_stMAC3();

              gte_ldR11R12(0x1000);
              gte_ldR22R23(0x1000);
              gte_ldR33(0x1000);

              if (-1 < (longlong)(int)(short)DAT_1f8000ac * (longlong)iVar48 +
                       (longlong)iVar70 * (longlong)iVar20 + (longlong)iVar32 * (longlong)iVar43)
              goto LAB_overlay0__80023928;
            }

            if ((uVar68 & 0x3f) == 0) {

              uVar47 = iVar15 + 2U & 3;

              gte_stRGB2();

              bVar14 = DAT_1f80006c < DAT_1f800068;

              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();

              uVar51 = (int)DAT_1f800068 << 8;

              DAT_1f8000ac = uVar21;
              DAT_1f8000bc = uVar40;
              DAT_1f8000cc = uVar52;

              *DAT_1f800068 = (uint)(*(int *)((iVar15 + 2U) - uVar47) << (3 - uVar47) * 8) >> 8 | 0x4000000;
              DAT_1f800068 = DAT_1f800068 + 5;

              uVar21 = iVar15 + 2U & 3;
              puVar62 = (uint *)((iVar15 + 2U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar51 >> (3 - uVar21) * 8;

              uVar21 = DAT_1f8000ac;
              uVar40 = DAT_1f8000bc;
              uVar52 = DAT_1f8000cc;

              if (bVar14) break;
            }
            else {

              gte_stRGB2();

              DAT_1f8000ac = CONCAT22(*(undefined2 *)(DAT_1f8000e8 + 3),(short)DAT_1f8000ac);
              DAT_1f8000bc = CONCAT22(*(undefined2 *)(DAT_1f8000ec + 3),(short)DAT_1f8000bc);
              DAT_1f8000cc = CONCAT22(*(undefined2 *)(DAT_1f8000f0 + 3),(short)DAT_1f8000cc);

              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();

              DAT_1f80009c = iVar15;

              FUN_80081580(0x1f800000,3);

              uVar21 = DAT_1f8000ac;
              uVar40 = DAT_1f8000bc;
              uVar52 = DAT_1f8000cc;

              if (DAT_1f80006c <= DAT_1f800068) break;
            }
          }
        }

LAB_overlay0__80023928:

        DAT_1f8000cc = uVar52;
        DAT_1f8000bc = uVar40;
        DAT_1f8000ac = uVar21;

        pSVar56 = (SVECTOR *)&pSVar56[1].vz;
      } while (pSVar56 != (SVECTOR *)puVar72);
    }

    pSVar56 = ppSVar75[2];

    if (*(ushort *)((int)ppSVar75 + 0x32) != 0) {

      DAT_1f8003b0_b16->_0_2_ = pSVar56->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar56->vy;

      DAT_1f8003ac = (SVECTOR *)((int)pSVar56 + (uint)*(ushort *)((int)ppSVar75 + 0x32) * 0xc);

      do {

        {
          bitfield_16_t *uVar52_b16 = (bitfield_16_t *)&uVar52;
          uVar52_b16->_0_2_ = pSVar56[1].vz;
          uVar52_b16->_2_2_ = pSVar56[1].pad;
        }

        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (DAT_1f8003b0 & 0x1ff) * 0x10);
        {
          bitfield_16_t *uVar21_b16 = (bitfield_16_t *)&uVar21;
          uVar21_b16->_0_2_ = pSVar56->vz;
          uVar21_b16->_2_2_ = pSVar56->pad;
        }
        DAT_1f8000ec = (uint *)(DAT_1f800070 + ((int)DAT_1f8003b0 >> 5 & 0x1ff0));

        uVar51 = DAT_1f8000e8[1];
        DAT_1f8000f0 = (uint *)(DAT_1f800070 + ((int)DAT_1f8003b0 >> 0xe & 0x1ff0));
        uVar47 = DAT_1f8000ec[1];

        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar51 >> 0x10;
        DAT_1f8000b4.value = CONCAT13((char)uVar51,(char *)&DAT_1f8000b4.value);

        *(uint **)&DAT_1f8000f4 = (uint *)(DAT_1f800070 + (uVar21 & 0x1ff) * 0x10);
        uVar58 = DAT_1f8000f0[1];
        uVar21 = DAT_1f8000bc & 0xffff0000 | uVar47 >> 0x10;
        DAT_1f8000c4.bytes._3_1_ = (undefined)uVar47;
        uVar67 = (*(uint **)&DAT_1f8000f4)[1];
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar58 >> 0x10;
        DAT_1f8000d4.bytes._3_1_ = (undefined)uVar58;

        uVar40 = uVar51;
        if ((int)uVar51 < (int)uVar47) {
          uVar40 = uVar47;
        }

        {
          bitfield_16_t *uVar65_b16 = (bitfield_16_t *)&uVar65;
          uVar65_b16->_0_2_ = pSVar56[1].vx;
          uVar65_b16->_2_2_ = pSVar56[1].vy;
        }
        uVar19 = DAT_1f8000dc & 0xffff0000 | uVar67 >> 0x10;
        DAT_1f8000e4.bytes._3_1_ = (undefined)uVar67;
        uVar16 = DAT_1f8000e8[2];

        gte_ldRGB(uVar65);

        uVar65 = uVar51 | uVar47 | uVar58 | uVar67;
        if ((uVar51 & uVar47 & uVar58 & uVar67 & 0x1f) == 0) {
          DAT_1f8000c0 = DAT_1f8000ec[2];
          gte_ldSXY2(uVar16);
          if ((int)uVar40 < (int)uVar58) {
            uVar40 = uVar58;
          }
          DAT_1f8000d0 = DAT_1f8000f0[2];
          gte_ldSXY0(DAT_1f8000c0);
          if ((int)uVar40 < (int)uVar67) {
            uVar40 = uVar67;
          }
          iVar70 = ((int)uVar40 >> 0x13) >> (DAT_1f800098_b16->_2_2_ & 0x1f);
          DAT_1f8000e0 = (*(uint **)&DAT_1f8000f4)[2];
          gte_ldSXY1(DAT_1f8000d0);
          iVar15 = iVar70 << 2;
          if (0xfff < iVar70) {
            iVar15 = 0x3ffc;
          }
          gte_nclip_b();
          uVar73 = *DAT_1f8000e8;
          iVar15 = DAT_1f800064 + (DAT_1f8003b0 >> 0x15 & 0xc0) + iVar15;
          iVar70 = gte_stMAC0();
          gte_ldSXYP(DAT_1f8000e0);
          gte_nclip_b();
          uVar59 = *DAT_1f8000ec;
          gte_ldIR0(0);
          uVar68 = gte_stMAC0();
          uVar44 = *DAT_1f8000f0;
          gte_dpcs_b();
          uVar28 = uVar65 & 0x20;
          uVar40 = *(*(uint **)&DAT_1f8000f4);
          DAT_1f8000b0 = uVar16;
          if (((-iVar70 | uVar68 | uVar28) != 0) &&
             (gte_stRGB2(), -1 < (int)(-iVar70 - 1U & uVar68 - 1 & DAT_1f8003b0 & uVar28 - 0x20))) {
            DAT_1f8000bc_b16->_0_2_ = (short)(uVar47 >> 0x10);
            DAT_1f8000dc_b16->_0_2_ = (short)(uVar67 >> 0x10);
            DAT_1f8000a8 = uVar73;
            DAT_1f8000b8 = uVar59;
            DAT_1f8000c8 = uVar44;
            _DAT_1f8000d8 = uVar40;
            if ((uVar28 != 0) && ((int)DAT_1f8003b0 < 0)) {
              DAT_1f8000b8_b16->_0_2_ = (short)uVar59;
              DAT_1f8000b8_b16->_2_2_ = (short)(uVar59 >> 0x10);
              gte_ldR11R12((int)(short)DAT_1f8000b8);
              gte_ldR22R23((int)DAT_1f8000b8_b16->_2_2_);
              DAT_1f8000d8 = (short)uVar40;
              uVar67 = (uint)DAT_1f8000d8;
              gte_ldR33((int)(short)DAT_1f8000bc);
              DAT_1f8000da._0_2_ = (short)(uVar40 >> 0x10);
              uVar40 = *(uint*)&DAT_1f8000da;
              gte_ldIR1(uVar67);
              uVar47 = (uint)(short)DAT_1f8000dc;
              gte_ldIR2(uVar40);
              gte_ldIR3(uVar47);
              gte_ldVXY0(0x1f8000a8);
              gte_ldVZ0(0x1f8000ac);
              gte_op0_b(0);
              gte_ldVXY1(0x1f8000c8);
              gte_ldVZ1(0x1f8000cc);
              read_mt(uVar47,uVar67,uVar40);
              gte_ldR11R12((int)uVar47 >> 0x18 & 0xffffU | ((int)uVar67 >> 0x18) << 0x10);
              gte_ldR13R21((int)uVar40 >> 0x18 & 0xffffU | ((int)uVar47 >> 0xc & 0xfffU) << 0x10);
              gte_ldR22R23((int)uVar67 >> 0xc & 0xfffU | ((int)uVar40 >> 0xc & 0xfffU) << 0x10);
              gte_ldR31R32(uVar47 & 0xfff | (uVar67 & 0xfff) << 0x10);
              uVar40 = uVar40 & 0xfff;
              gte_ldR33(uVar40);
              gte_mvmva_b(0,0,0,3,0);
              iVar32 = gte_stMAC3();
              iVar70 = gte_stMAC2();
              iVar48 = gte_stMAC1();
              gte_mvmva_b(0,0,1,3,0);
              iVar43 = gte_stMAC3();
              iVar20 = gte_stMAC2();
              iVar33 = gte_stMAC1();
              gte_ldR11R12(0x1000);
              gte_ldR13R21(0);
              gte_ldR22R23(0x1000);
              gte_ldR31R32(0);
              gte_ldR33(0x1000);
              if (-1 < (iVar48 + (iVar70 + (iVar32 >> 0xc) >> 0xc) |
                       -(iVar33 + (iVar20 + (iVar43 >> 0xc) >> 0xc)))) goto LAB_overlay0__80023d00;
            }
            DAT_1f8003b0 = uVar52;
            if ((uVar65 & 0x3f) == 0) {
              uVar40 = iVar15 + 2U & 3;
              iVar70 = *(int *)((iVar15 + 2U) - uVar40);
              gte_stRGB2();
              bVar14 = DAT_1f80006c < DAT_1f800068;
              gte_stSXY0();
              gte_stSXY1();
              DAT_1f8000bc = uVar21;
              DAT_1f8000dc = uVar19;
              DAT_1f800068[3] = DAT_1f8000c0;
              gte_stSXY2();
              uVar52 = (int)DAT_1f800068 << 8;
              *DAT_1f800068 = (uint)(iVar70 << (3 - uVar40) * 8) >> 8 | 0x5000000;
              DAT_1f800068 = DAT_1f800068 + 6;
              uVar21 = iVar15 + 2U & 3;
              puVar62 = (uint *)((iVar15 + 2U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
              uVar21 = DAT_1f8000bc;
              uVar19 = DAT_1f8000dc;
              uVar52 = DAT_1f8003b0;
              if (bVar14) break;
            }
            else {
              gte_stRGB2();
              DAT_1f8000ac_b16->_0_2_ = (short)(uVar51 >> 0x10);
              DAT_1f8000ac = CONCAT22(*(undefined2 *)(DAT_1f8000e8 + 3),(short)DAT_1f8000ac);
              DAT_1f8000bc = CONCAT22(*(undefined2 *)(DAT_1f8000ec + 3),(short)DAT_1f8000bc);
              DAT_1f8000cc_b16->_0_2_ = (short)(uVar58 >> 0x10);
              DAT_1f8000cc = CONCAT22(*(undefined2 *)(DAT_1f8000f0 + 3),(short)DAT_1f8000cc);
              DAT_1f8000dc = CONCAT22(*(undefined2 *)(DAT_1f8000f4 + 3),(short)DAT_1f8000dc);
              DAT_1f80009c = iVar15;
              FUN_80081580(0x1f800000,4,uVar40);
              uVar21 = DAT_1f8000bc;
              uVar19 = DAT_1f8000dc;
              uVar52 = DAT_1f8003b0;
              if (DAT_1f80006c <= DAT_1f800068) break;
            }
          }
        }
LAB_overlay0__80023d00:
        DAT_1f8003b0 = uVar52;
        DAT_1f8000dc = uVar19;
        DAT_1f8000bc = uVar21;
        pSVar56 = (SVECTOR *)&pSVar56[1].vz;
      } while (pSVar56 != DAT_1f8003ac);
    }
    pSVar56 = ppSVar75[3];
    iVar70 = 0x1f800000;
    if (*(ushort *)(ppSVar75 + 0xd) != 0) {
      puVar72 = (undefined *)((int)pSVar56 + (uint)*(ushort *)(ppSVar75 + 0xd) * 0x14);
      puVar62 = DAT_1f800068;
      do {
        iVar15 = *(int *)(iVar70 + 0x70);
        {
          bitfield_16_t *uVar51_b16 = (bitfield_16_t *)&uVar51;
          uVar51_b16->_0_2_ = pSVar56->vx;
          uVar51_b16->_2_2_ = pSVar56->vy;
        }
        puVar49 = (undefined4 *)((uVar51 & 0x1ff) * 0x10 + iVar15);
        puVar45 = (undefined4 *)(((int)uVar51 >> 5 & 0x1ff0U) + iVar15);
        puVar41 = (undefined4 *)(((int)uVar51 >> 0xe & 0x1ff0U) + iVar15);
        uVar40 = puVar49[1];
        uVar52 = puVar45[1];
        uVar47 = puVar41[1];
        *(undefined4 **)(iVar70 + 0xe8) = puVar49;
        *(undefined4 **)(iVar70 + 0xec) = puVar45;
        *(undefined4 **)(iVar70 + 0xf0) = puVar41;
        uVar21 = iVar70 + 0xadU & 3;
        puVar17 = (uint *)((iVar70 + 0xadU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xb7) = (char)uVar40;
        uVar21 = iVar70 + 0xbdU & 3;
        puVar17 = (uint *)((iVar70 + 0xbdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 199) = (char)uVar52;
        uVar21 = iVar70 + 0xcdU & 3;
        puVar17 = (uint *)((iVar70 + 0xcdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar47 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xd7) = (char)uVar47;
        if ((uVar40 & uVar52 & uVar47 & 0x1f) == 0) {
          gte_ldSXY0(puVar49[2]);
          gte_ldSXY1(puVar41[2]);
          gte_ldSXY2(puVar45[2]);
          uVar67 = uVar40 | uVar52 | uVar47;
          gte_nclip_b();
          uVar21 = gte_stMAC0();
          uVar58 = uVar67 & 0x20;
          if (((uVar21 | uVar58) != 0) && (-1 < (int)(uVar21 & uVar51 & uVar58 - 0x20))) {
            if ((int)uVar40 < (int)uVar52) {
              uVar40 = uVar52;
            }
            if ((int)uVar40 < (int)uVar47) {
              uVar40 = uVar47;
            }
            iVar15 = ((int)uVar40 >> 0x13) >> (*(ushort *)(iVar70 + 0x9a) & 0x1f);
            iVar20 = iVar15 << 2;
            if (0xfff < iVar15) {
              iVar20 = 0x3ffc;
            }
            iVar20 = *(int *)(iVar70 + 100) + (uVar51 >> 0x15 & 0xc0) + iVar20;
            {
              bitfield_16_t *uVar34_b16 = (bitfield_16_t *)&uVar34;
              bitfield_16_t *uVar69_b16 = (bitfield_16_t *)&uVar69;
              bitfield_16_t *uVar74_b16 = (bitfield_16_t *)&uVar74;
              uVar34_b16->_0_2_ = pSVar56[1].vx;
              uVar34_b16->_2_2_ = pSVar56[1].vy;
              uVar69_b16->_0_2_ = pSVar56[1].vz;
              uVar69_b16->_2_2_ = pSVar56[1].pad;
              uVar74_b16->_0_2_ = pSVar56[2].vx;
              uVar74_b16->_2_2_ = pSVar56[2].vy;
            }
            gte_ldIR0(0);
            gte_ldRGB(uVar34);
            gte_ldRGB0(uVar34);
            gte_ldRGB1(uVar69);
            gte_ldRGB2(uVar74);
            gte_dpct();
            gte_stRGB2();
            uVar16 = *puVar45;
            uVar73 = *puVar41;
            *(undefined4 *)(iVar70 + 0xa8) = *puVar49;
            *(undefined4 *)(iVar70 + 0xb8) = uVar16;
            *(undefined4 *)(iVar70 + 200) = uVar73;
            if ((uVar58 != 0) && ((int)uVar51 < 0)) {
              gte_ldR11R12((int)*(short *)(iVar70 + 0xb8));
              gte_ldR22R23((int)*(short *)(iVar70 + 0xba));
              gte_ldR33((int)*(short *)(iVar70 + 0xbc));
              gte_ldIR1((int)*(short *)(iVar70 + 200));
              gte_ldIR2((int)*(short *)(iVar70 + 0xca));
              gte_ldIR3((int)*(short *)(iVar70 + 0xcc));
              gte_op0_b(0);
              iVar15 = gte_stMAC1();
              iVar32 = gte_stMAC2();
              iVar43 = gte_stMAC3();
              gte_ldR11R12(0x1000);
              gte_ldR22R23(0x1000);
              gte_ldR33(0x1000);
              if (-1 < (longlong)(int)*(short *)(iVar70 + 0xac) * (longlong)iVar43 +
                       (longlong)(int)*(short *)(iVar70 + 0xa8) * (longlong)iVar15 +
                       (longlong)(int)*(short *)(iVar70 + 0xaa) * (longlong)iVar32)
              goto LAB_overlay0__80024014;
            }
            if ((uVar67 & 0x3f) == 0) {
              puVar17 = *(uint **)(iVar70 + 0x6c);
              uVar21 = iVar20 + 2U & 3;
              uVar21 = *(int *)((iVar20 + 2U) - uVar21) << (3 - uVar21) * 8;
              gte_strgb3_g3(puVar62);
              bVar14 = puVar17 < puVar62;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              uVar40 = (int)puVar62 << 8;
              *puVar62 = uVar21 >> 8 | 0x6000000;
              puVar62 = puVar62 + 7;
              uVar21 = iVar20 + 2U & 3;
              puVar17 = (uint *)((iVar20 + 2U) - uVar21);
              *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
              if (bVar14) break;
            }
            else {
              *(uint **)(iVar70 + 0x68) = puVar62;
              *(int *)(iVar70 + 0x9c) = iVar20;
              gte_stRGB0();
              gte_stRGB0();
              gte_stRGB1();
              gte_stRGB2();
              uVar6 = *(undefined2 *)(*(int *)(iVar70 + 0xec) + 0xc);
              *(undefined2 *)(iVar70 + 0xae) = *(undefined2 *)(*(int *)(iVar70 + 0xe8) + 0xc);
              uVar7 = *(undefined2 *)(*(int *)(iVar70 + 0xf0) + 0xc);
              *(undefined2 *)(iVar70 + 0xbe) = uVar6;
              *(undefined2 *)(iVar70 + 0xce) = uVar7;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              FUN_8007bcd0(iVar70,3);
              puVar62 = *(uint **)(iVar70 + 0x68);
              if (*(uint **)(iVar70 + 0x6c) <= puVar62) {
                *(uint **)(iVar70 + 0x68) = puVar62;
                goto LAB_overlay0__80024024;
              }
            }
          }
        }
LAB_overlay0__80024014:
        pSVar56 = (SVECTOR *)&pSVar56[2].vz;
      } while (pSVar56 != (SVECTOR *)puVar72);
      *(uint **)(iVar70 + 0x68) = puVar62;
    }
LAB_overlay0__80024024:
    pSVar56 = ppSVar75[4];
    if (*(ushort *)((int)ppSVar75 + 0x36) != 0) {
      DAT_1f8003b0_b16->_0_2_ = pSVar56->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar56->vy;
      DAT_1f8003ac = pSVar56 + (uint)*(ushort *)((int)ppSVar75 + 0x36) * 3;
      do {
        puVar62 = DAT_1f80006c;
        {
          bitfield_16_t *uVar47_b16 = (bitfield_16_t *)&uVar47;
          uVar47_b16->_0_2_ = pSVar56[3].vx;
          uVar47_b16->_2_2_ = pSVar56[3].vy;
        }
        DAT_1f8000e8 = (undefined4 *)(DAT_1f800070 + (DAT_1f8003b0 & 0x1ff) * 0x10);
        {
          bitfield_16_t *uVar40_b16 = (bitfield_16_t *)&uVar40;
          uVar40_b16->_0_2_ = pSVar56->vz;
          uVar40_b16->_2_2_ = pSVar56->pad;
        }
        DAT_1f8000ec = (uint *)(DAT_1f800070 + ((int)DAT_1f8003b0 >> 5 & 0x1ff0));
        uVar51 = DAT_1f8000e8[1];
        DAT_1f8000f0 = (uint *)(DAT_1f800070 + ((int)DAT_1f8003b0 >> 0xe & 0x1ff0));
        uVar52 = DAT_1f8000ec[1];
        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar51 >> 0x10;
        DAT_1f8000b4.value = CONCAT13((char)uVar51,(char *)&DAT_1f8000b4.value);
        *(uint **)&DAT_1f8000f4 = (uint *)(DAT_1f800070 + (uVar40 & 0x1ff) * 0x10);
        uVar58 = DAT_1f8000f0[1];
        uVar21 = DAT_1f8000bc & 0xffff0000 | uVar52 >> 0x10;
        DAT_1f8000c4.bytes._3_1_ = (undefined)uVar52;
        uVar67 = (*(uint **)&DAT_1f8000f4)[1];
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar58 >> 0x10;
        DAT_1f8000d4.bytes._3_1_ = (undefined)uVar58;
        uVar40 = uVar51;
        if ((int)uVar51 < (int)uVar52) {
          uVar40 = uVar52;
        }
        {
          bitfield_16_t *uVar68_b16 = (bitfield_16_t *)&uVar68;
          uVar68_b16->_0_2_ = pSVar56[1].vx;
          uVar68_b16->_2_2_ = pSVar56[1].vy;
        }
        uVar19 = DAT_1f8000dc & 0xffff0000 | uVar67 >> 0x10;
        DAT_1f8000e4.bytes._3_1_ = (undefined)uVar67;
        uVar16 = DAT_1f8000e8[2];
        gte_ldRGB(uVar68);
        uVar65 = uVar51 | uVar52 | uVar58 | uVar67;
        if ((uVar51 & uVar52 & uVar58 & uVar67 & 0x1f) == 0) {
          uVar68 = DAT_1f8000ec[2];
          gte_ldSXY2(uVar16);
          if ((int)uVar40 < (int)uVar58) {
            uVar40 = uVar58;
          }
          DAT_1f8000d0 = DAT_1f8000f0[2];
          gte_ldSXY0(uVar68);
          if ((int)uVar40 < (int)uVar67) {
            uVar40 = uVar67;
          }
          iVar70 = ((int)uVar40 >> 0x13) >> (DAT_1f800098_b16->_2_2_ & 0x1f);
          DAT_1f8000e0 = (*(uint **)&DAT_1f8000f4)[2];
          gte_ldSXY1(DAT_1f8000d0);
          iVar15 = iVar70 << 2;
          if (0xfff < iVar70) {
            iVar15 = 0x3ffc;
          }
          gte_nclip_b();
          uVar73 = *DAT_1f8000e8;
          iVar15 = DAT_1f800064 + (DAT_1f8003b0 >> 0x15 & 0xc0) + iVar15;
          iVar70 = gte_stMAC0();
          gte_ldSXYP(DAT_1f8000e0);
          gte_nclip_b();
          {
            bitfield_16_t *uVar50_b16 = (bitfield_16_t *)&uVar50;
            uVar50_b16->_0_2_ = pSVar56[1].vz;
            uVar50_b16->_2_2_ = pSVar56[1].pad;
          }
          gte_ldIR0(0);
          uVar40 = gte_stMAC0();
          {
            bitfield_16_t *uVar44_b16 = (bitfield_16_t *)&uVar44;
            uVar44_b16->_0_2_ = pSVar56[2].vx;
            uVar44_b16->_2_2_ = pSVar56[2].vy;
          }
          gte_dpcs_b();
          uVar28 = uVar65 & 0x20;
          {
            bitfield_16_t *uVar35_b16 = (bitfield_16_t *)&uVar35;
            uVar35_b16->_0_2_ = pSVar56[2].vz;
            uVar35_b16->_2_2_ = pSVar56[2].pad;
          }
          DAT_1f8000b0 = uVar16;
          DAT_1f8000c0 = uVar68;
          if ((-iVar70 | uVar40 | uVar28) != 0) {
            uVar76 = gte_stRGB2();
            gte_ldRGB0(uVar50);
            gte_ldRGB1(uVar44);
            uVar59 = *DAT_1f8000ec;
            gte_ldRGB2(uVar35);
            gte_dpct_b();
            uVar44 = *DAT_1f8000f0;
            if (-1 < (int)(-iVar70 - 1U & uVar40 - 1 & DAT_1f8003b0 & uVar28 - 0x20)) {
              _DAT_1f8000d8 = *(*(uint **)&DAT_1f8000f4);
              DAT_1f8000bc_b16->_0_2_ = (short)(uVar52 >> 0x10);
              DAT_1f8000dc_b16->_0_2_ = (short)(uVar67 >> 0x10);
              DAT_1f8000a8 = uVar73;
              DAT_1f8000b8 = uVar59;
              DAT_1f8000c8 = uVar44;
              if ((uVar28 != 0) && ((int)DAT_1f8003b0 < 0)) {
                DAT_1f8000b8_b16->_0_2_ = (short)uVar59;
                DAT_1f8000b8_b16->_2_2_ = (short)(uVar59 >> 0x10);
                gte_ldR11R12((int)(short)DAT_1f8000b8);
                gte_ldR22R23((int)DAT_1f8000b8_b16->_2_2_);
                uVar52 = (uint)DAT_1f8000d8;
                gte_ldR33((int)(short)DAT_1f8000bc);
                DAT_1f8000da._0_2_ = (short)(_DAT_1f8000d8 >> 0x10);
                uVar59 = *(uint*)&DAT_1f8000da;
                gte_ldIR1(uVar52);
                uVar40 = (uint)(short)DAT_1f8000dc;
                gte_ldIR2(uVar59);
                gte_ldIR3(uVar40);
                gte_ldVXY0(0x1f8000a8);
                gte_ldVZ0(0x1f8000ac);
                gte_op0_b(0);
                gte_ldVXY1(0x1f8000c8);
                gte_ldVZ1(0x1f8000cc);
                read_mt(uVar40,uVar52,uVar59);
                gte_ldR11R12((int)uVar40 >> 0x18 & 0xffffU | ((int)uVar52 >> 0x18) << 0x10);
                gte_ldR13R21((int)uVar59 >> 0x18 & 0xffffU | ((int)uVar40 >> 0xc & 0xfffU) << 0x10);
                gte_ldR22R23((int)uVar52 >> 0xc & 0xfffU | ((int)uVar59 >> 0xc & 0xfffU) << 0x10);
                gte_ldR31R32(uVar40 & 0xfff | (uVar52 & 0xfff) << 0x10);
                uVar59 = uVar59 & 0xfff;
                gte_ldR33(uVar59);
                gte_mvmva_b(0,0,0,3,0);
                iVar32 = gte_stMAC3();
                iVar70 = gte_stMAC2();
                iVar48 = gte_stMAC1();
                gte_mvmva_b(0,0,1,3,0);
                iVar43 = gte_stMAC3();
                iVar20 = gte_stMAC2();
                iVar33 = gte_stMAC1();
                gte_ldR11R12(0x1000);
                gte_ldR13R21(0);
                gte_ldR22R23(0x1000);
                gte_ldR31R32(0);
                gte_ldR33(0x1000);
                uVar44 = iVar48 + (iVar70 + (iVar32 >> 0xc) >> 0xc) |
                         -(iVar33 + (iVar20 + (iVar43 >> 0xc) >> 0xc));
                if (-1 < (int)uVar44) goto LAB_overlay0__80024424;
              }
              DAT_1f8003b0 = uVar47;
              if ((uVar65 & 0x3f) == 0) {
                uVar40 = iVar15 + 2U & 3;
                iVar70 = *(int *)((iVar15 + 2U) - uVar40);
                DAT_1f8000bc = uVar21;
                DAT_1f8000dc = uVar19;
                DAT_1f800068[1] = uVar76;
                bVar14 = puVar62 < DAT_1f800068;
                gte_stRGB0();
                gte_stRGB1();
                gte_stRGB2();
                gte_stSXY0();
                gte_stSXY1();
                DAT_1f800068[4] = uVar68;
                gte_stSXY2();
                uVar52 = (int)DAT_1f800068 << 8;
                *DAT_1f800068 =
                     (iVar70 << (3 - uVar40) * 8 | uVar44 & 0xffffffffU >> (uVar40 + 1) * 8) >> 8 |
                     0x8000000;
                DAT_1f800068 = DAT_1f800068 + 9;
                uVar21 = iVar15 + 2U & 3;
                puVar62 = (uint *)((iVar15 + 2U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
                uVar21 = DAT_1f8000bc;
                uVar19 = DAT_1f8000dc;
                uVar47 = DAT_1f8003b0;
                if (bVar14) break;
              }
              else {
                gte_stRGB0();
                gte_stRGB1();
                gte_stRGB2();
                DAT_1f8000ac_b16->_0_2_ = (short)(uVar51 >> 0x10);
                DAT_1f8000ac = CONCAT22(*(undefined2 *)(DAT_1f8000e8 + 3),(short)DAT_1f8000ac);
                DAT_1f8000bc = CONCAT22(*(undefined2 *)(DAT_1f8000ec + 3),(short)DAT_1f8000bc);
                DAT_1f8000cc_b16->_0_2_ = (short)(uVar58 >> 0x10);
                DAT_1f8000cc = CONCAT22(*(undefined2 *)(DAT_1f8000f0 + 3),(short)DAT_1f8000cc);
                DAT_1f8000dc = CONCAT22(*(undefined2 *)(DAT_1f8000f4 + 3),(short)DAT_1f8000dc);
                DAT_1f80009c = iVar15;
                DAT_1f8000a0 = uVar76;
                DAT_1f8000b4.value = uVar76;
                FUN_8007bcd0(0x1f800000,4,uVar59);
                uVar21 = DAT_1f8000bc;
                uVar19 = DAT_1f8000dc;
                uVar47 = DAT_1f8003b0;
                if (DAT_1f80006c <= DAT_1f800068) break;
              }
            }
          }
        }
LAB_overlay0__80024424:
        DAT_1f8003b0 = uVar47;
        DAT_1f8000dc = uVar19;
        DAT_1f8000bc = uVar21;
        pSVar56 = pSVar56 + 3;
      } while (pSVar56 != DAT_1f8003ac);
    }
    pSVar56 = ppSVar75[5];
    iVar70 = 0x1f800000;
    if (*(ushort *)(ppSVar75 + 0xe) != 0) {
      DAT_1f800394 = _DAT_1f800398;
      puVar72 = (undefined *)((int)pSVar56 + (uint)*(ushort *)(ppSVar75 + 0xe) * 0xc);
      puVar62 = DAT_1f800068;
      do {
        iVar15 = *(int *)(iVar70 + 0x70);
        {
          bitfield_16_t *uVar58_b16 = (bitfield_16_t *)&uVar58;
          bitfield_16_t *iVar20_b16 = (bitfield_16_t *)&iVar20;
          uVar58_b16->_0_2_ = pSVar56->vx;
          uVar58_b16->_2_2_ = pSVar56->vy;
          iVar20_b16->_0_2_ = pSVar56->vz;
          iVar20_b16->_2_2_ = pSVar56->pad;
        }
        puVar49 = (undefined4 *)((uVar58 & 0x1ff) * 0x10 + iVar15);
        puVar45 = (undefined4 *)(((int)uVar58 >> 5 & 0x1ff0U) + iVar15);
        puVar41 = (undefined4 *)(((int)uVar58 >> 0xe & 0x1ff0U) + iVar15);
        uVar40 = puVar49[1];
        uVar52 = puVar45[1];
        uVar47 = puVar41[1];
        *(undefined4 **)(iVar70 + 0xe8) = puVar49;
        *(undefined4 **)(iVar70 + 0xec) = puVar45;
        *(undefined4 **)(iVar70 + 0xf0) = puVar41;
        uVar21 = iVar70 + 0xadU & 3;
        puVar17 = (uint *)((iVar70 + 0xadU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xb7) = (char)uVar40;
        uVar21 = iVar70 + 0xbdU & 3;
        puVar17 = (uint *)((iVar70 + 0xbdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 199) = (char)uVar52;
        uVar21 = iVar70 + 0xcdU & 3;
        puVar17 = (uint *)((iVar70 + 0xcdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar47 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xd7) = (char)uVar47;
        if ((uVar40 & uVar52 & uVar47 & 0x1f) == 0) {
          gte_ldSXY0(puVar49[2]);
          gte_ldSXY1(puVar41[2]);
          gte_ldSXY2(puVar45[2]);
          gte_nclip_b();
          uVar21 = gte_stMAC0();
          uVar51 = (uVar40 | uVar52 | uVar47) & 0x20;
          if (((uVar21 | uVar51) != 0) && (-1 < (int)(uVar21 & uVar58 & uVar51 - 0x20))) {
            if ((int)uVar40 < (int)uVar52) {
              uVar40 = uVar52;
            }
            if ((int)uVar40 < (int)uVar47) {
              uVar40 = uVar47;
            }
            iVar15 = ((int)uVar40 >> 0x13) >> (*(ushort *)(iVar70 + 0x9a) & 0x1f);
            iVar32 = iVar15 << 2;
            if (0xfff < iVar15) {
              iVar32 = 0x3ffc;
            }
            iVar32 = *(int *)(iVar70 + 100) + (uVar58 >> 0x15 & 0xc0) + iVar32;
            {
              bitfield_16_t *uVar22_b16 = (bitfield_16_t *)&uVar22;
              uVar22_b16->_0_2_ = pSVar56[1].vx;
              uVar22_b16->_2_2_ = pSVar56[1].vy;
            }
            gte_ldIR0(0);
            gte_ldRGB(uVar22);
            gte_dpcs();
            puVar17 = (uint *)((iVar20 >> 4 & 0x7ffe0U) + *(int *)(iVar70 + 0x3a0));
            if (uVar21 <= *(ushort *)(puVar17 + 3)) {
              puVar17 = puVar17 + 4;
            }
            uVar40 = *puVar17;
            uVar52 = puVar17[1];
            uVar47 = puVar17[2];
            uVar16 = *puVar45;
            uVar73 = *puVar41;
            *(undefined4 *)(iVar70 + 0xa8) = *puVar49;
            *(undefined4 *)(iVar70 + 0xb8) = uVar16;
            *(undefined4 *)(iVar70 + 200) = uVar73;
            if (uVar51 != 0) {
              if ((int)uVar58 < 0) {
                gte_ldR11R12((int)*(short *)(iVar70 + 0xb8));
                gte_ldR22R23((int)*(short *)(iVar70 + 0xba));
                gte_ldR33((int)*(short *)(iVar70 + 0xbc));
                gte_ldIR1((int)*(short *)(iVar70 + 200));
                gte_ldIR2((int)*(short *)(iVar70 + 0xca));
                gte_ldIR3((int)*(short *)(iVar70 + 0xcc));
                gte_op0_b(0);
                iVar15 = gte_stMAC1();
                iVar20 = gte_stMAC2();
                iVar43 = gte_stMAC3();
                gte_ldR11R12(0x1000);
                gte_ldR22R23(0x1000);
                gte_ldR33(0x1000);
                if (-1 < (longlong)(int)*(short *)(iVar70 + 0xac) * (longlong)iVar43 +
                         (longlong)(int)*(short *)(iVar70 + 0xa8) * (longlong)iVar15 +
                         (longlong)(int)*(short *)(iVar70 + 0xaa) * (longlong)iVar20)
                goto LAB_overlay0__80024c84;
              }
              gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar70 + 0xe8) + 0xc) |
                                      *(ushort *)(*(int *)(iVar70 + 0xec) + 0xc) |
                                     *(ushort *)(*(int *)(iVar70 + 0xf0) + 0xc)));
              iVar15 = gte_stLZCR();
              uVar21 = iVar15 - 0x11;
              if (0 < (int)uVar21) {
                *(short *)(iVar70 + 0xa8) =
                     (short)((int)*(short *)(iVar70 + 0xa8) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xaa) =
                     (short)((int)*(short *)(iVar70 + 0xaa) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xac) =
                     (short)((int)*(short *)(iVar70 + 0xac) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xb8) =
                     (short)((int)*(short *)(iVar70 + 0xb8) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xba) =
                     (short)((int)*(short *)(iVar70 + 0xba) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xbc) =
                     (short)((int)*(short *)(iVar70 + 0xbc) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 200) = (short)((int)*(short *)(iVar70 + 200) << (uVar21 & 0x1f))
                ;
                *(short *)(iVar70 + 0xca) =
                     (short)((int)*(short *)(iVar70 + 0xca) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xcc) =
                     (short)((int)*(short *)(iVar70 + 0xcc) << (uVar21 & 0x1f));
              }
LAB_overlay0__80024784:
              *(uint **)(iVar70 + 0x68) = puVar62;
              *(SVECTOR **)(iVar70 + 0x3a8) = pSVar56;
              *(int *)(iVar70 + 0x9c) = iVar32;
              gte_stRGB2();
              *(uint *)(iVar70 + 0xa4) = uVar52;
              uVar21 = iVar70 + 0xa5U & 3;
              puVar62 = (uint *)((iVar70 + 0xa5U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
              *(short *)(iVar70 + 0xae) = (short)uVar40;
              *(short *)(iVar70 + 0xbe) = (short)uVar52;
              *(short *)(iVar70 + 0xce) = (short)uVar47;
              DAT_1f800388 = DAT_1f800068;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              puVar62 = &DAT_1f8000a8;
              iVar15 = 0x1f800000;
              ppuVar60 = &DAT_1f8000e8;
              ppuVar36 = &DAT_1f8000e8;
              pbVar23 = (byte *)((int)&DAT_1f8000b4 + 3);
              do {
                bVar27 = *pbVar23;
                *ppuVar36 = puVar62;
                ppuVar36 = ppuVar36 + 1;
                if ((bVar27 & 0x20) != 0) {
                  gte_ldVXY0(puVar62);
                  gte_ldVZ0(pbVar23 + -0xb);
                  gte_rtps_b();
                  iVar20 = gte_stFLAG();
                  gte_stSXY2();
                  if (-1 < iVar20) {
                    *pbVar23 = bVar27 & 0x1f;
                  }
                }
                pbVar23 = pbVar23 + 0x10;
                puVar62 = puVar62 + 4;
              } while (ppuVar36 != &DAT_1f8000f4);
              DAT_1f80038c = DAT_1f800388;
              DAT_1f800390.bitfield._0_3_[0] = ((char *)&DAT_1f800388)[0];
              DAT_1f800390.bitfield._0_3_[1] = ((char *)&DAT_1f800388)[1];
              DAT_1f800390.bitfield._0_3_[2] = ((char *)&DAT_1f800388)[2];
              DAT_1f800390.value = CONCAT13(7,(char *)DAT_1f800390.bitfield._0_3_);
LAB_overlay0__80024840:
              pSVar53 = (SVECTOR *)(ppuVar60 + 4);
              puVar41 = *ppuVar60;
              puVar45 = ppuVar60[1];
              puVar49 = ppuVar60[2];
              sVar8 = *(short *)puVar41;
              sVar9 = *(short *)puVar45;
              sVar10 = *(short *)puVar49;
              *(short *)(ppuVar60 + 4) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar60 + 8) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar60 + 0xc) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)((int)puVar41 + 2);
              sVar9 = *(short *)((int)puVar45 + 2);
              sVar10 = *(short *)((int)puVar49 + 2);
              *(short *)((int)ppuVar60 + 0x12) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)((int)ppuVar60 + 0x22) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)((int)ppuVar60 + 0x32) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)(puVar41 + 1);
              sVar9 = *(short *)(puVar45 + 1);
              sVar10 = *(short *)(puVar49 + 1);
              *(short *)(ppuVar60 + 5) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar60 + 9) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar60 + 0xd) = (short)((int)sVar10 + (int)sVar8 >> 1);
              gte_ldv0(pSVar53);
              gte_rtps_b();
              bVar27 = *(byte *)((int)puVar41 + 6);
              bVar1 = *(byte *)((int)puVar45 + 6);
              bVar2 = *(byte *)((int)puVar49 + 6);
              *(char *)&pSVar53->pad = (char)((int)((uint)bVar27 + (uint)bVar1) >> 1);
              *(char *)&pSVar53[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)&pSVar53[4].pad = (char)((int)((uint)bVar2 + (uint)bVar27) >> 1);
              bVar27 = *(byte *)((int)puVar41 + 7);
              bVar1 = *(byte *)((int)puVar45 + 7);
              bVar2 = *(byte *)((int)puVar49 + 7);
              *(char *)((int)&pSVar53->pad + 1) = (char)((int)((uint)bVar27 + (uint)bVar1) >> 1);
              *(char *)((int)&pSVar53[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)((int)&pSVar53[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar27) >> 1);
              uVar31 = *(ushort *)(iVar15 + 0x62);
              uVar12 = *(ushort *)(iVar15 + 0x5e);
              uVar13 = *(ushort *)(iVar15 + 0x60);
              pSVar56 = pSVar53;
              do {
                iVar32 = gte_stFLAG();
                gte_ldVXY0(pSVar56 + 2);
                gte_ldVZ0(&pSVar56[2].vz);
                gte_stSXY2();
                iVar20 = gte_stIR3();
                gte_rtps_b();
                bVar27 = iVar20 < (int)(uint)uVar31;
                if (pSVar56[1].vx < 0) {
                  bVar27 = bVar27 | 2;
                }
                bVar27 = bVar27 | ((int)(uVar12 - 1) < (int)pSVar56[1].vx) << 2;
                if (pSVar56[1].vy < 0) {
                  bVar27 = bVar27 | 8;
                }
                bVar27 = bVar27 | ((int)(uVar13 - 1) < (int)pSVar56[1].vy) << 4;
                if (iVar32 < 0) {
                  bVar27 = bVar27 | 0x20;
                }
                pSVar57 = pSVar56 + 2;
                *(byte *)((int)&pSVar56[1].pad + 1) = bVar27;
                pSVar56 = pSVar57;
              } while (pSVar57 != pSVar53 + 6);
              piVar37 = *(int **)(iVar15 + 0x68);
              iVar32 = *(int *)(iVar15 + 0xa0);
              uVar21 = iVar15 + 0xa5U & 3;
              uVar58 = *(int *)((iVar15 + 0xa5U) - uVar21) << (3 - uVar21) * 8 |
                       uVar58 & 0xffffffffU >> (uVar21 + 1) * 8;
              uVar21 = *(uint *)(iVar15 + 0xa4);
              iVar20 = 2;
              ppuVar36 = ppuVar60 + 2;
              do {
                iVar43 = iVar20 + -1;
                if (iVar20 == 0) {
                  iVar43 = 2;
                }
                puVar41 = *ppuVar36;
                puVar45 = ppuVar60[iVar43];
                bVar27 = *(byte *)((int)puVar41 + 0xf) |
                         *(byte *)((int)ppuVar60 + iVar43 * 0x10 + 0x1f) |
                         *(byte *)((int)puVar45 + 0xf);
                if ((bVar27 & 0x20) == 0) {
                  gte_ldSXY0(puVar41 + 2);
                  gte_ldSXY1(ppuVar60 + iVar43 * 4 + 6);
                  gte_ldSXY2(puVar45 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar40 = (uint)(short *)((int)puVar41 + 6U) & 3;
                  uVar58 = uVar58 & -1 << (4 - uVar40) * 8 |
                           *(uint *)((int)(short *)((int)puVar41 + 6U) - uVar40) >> uVar40 * 8;
                  uVar40 = (int)ppuVar60 + iVar43 * 0x10 + 0x16;
                  uVar52 = uVar40 & 3;
                  uVar21 = uVar21 & -1 << (4 - uVar52) * 8 |
                           *(uint *)(uVar40 - uVar52) >> uVar52 * 8;
                  piVar37[3] = uVar58;
                  uVar40 = (uint)(short *)((int)puVar45 + 6U) & 3;
                  uVar52 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar40);
                  piVar37[5] = uVar21;
                  piVar37[7] = bVar27 & 0x20 & -1 << (4 - uVar40) * 8 | uVar52 >> uVar40 * 8;
                  *piVar37 = (int)(piVar37 + -0x1e3ffff8);
                  iVar43 = gte_stMAC0();
                  gte_stSXY2();
                  piVar37[1] = iVar32;
                  if (iVar43 != 0) {
                    *(int **)(iVar15 + 0x38c) = piVar37;
                    piVar37 = piVar37 + 8;
                  }
                }
                ppuVar36 = ppuVar36 + -1;
                iVar20 = iVar20 + -1;
                *(int **)(iVar15 + 0x68) = piVar37;
              } while (-1 < iVar20);
              uVar21 = 3;
              ppuVar36 = ppuVar60;
              if (*(uint *)(iVar15 + 0x68) <= *(uint *)(iVar15 + 0x6c)) {
                do {
                  if (uVar21 == 3) {
                    ppuVar63 = ppuVar36 + 4;
                    ppuVar55 = ppuVar36 + 8;
                    ppuVar46 = ppuVar36 + 0xc;
                  }
                  else {
                    ppuVar63 = (undefined4 **)ppuVar36[uVar21];
                    ppuVar55 = ppuVar36 + uVar21 * 4 + 4;
                    if (uVar21 == 0) {
                      ppuVar46 = ppuVar36 + 0xc;
                    }
                    else {
                      ppuVar46 = ppuVar36 + (uVar21 - 1) * 4 + 4;
                    }
                  }
                  bVar27 = *(byte *)((int)ppuVar63 + 0xf);
                  if ((bVar27 & *(byte *)((int)ppuVar55 + 0xf) & *(byte *)((int)ppuVar46 + 0xf) &
                      0x1f) == 0) {
                    if (((bVar27 | *(byte *)((int)ppuVar55 + 0xf) | *(byte *)((int)ppuVar46 + 0xf))
                        & 0x20) == 0) {
                      piVar37 = *(int **)(iVar15 + 0x68);
                      gte_ldSXY0(ppuVar63 + 2);
                      gte_ldSXY1(ppuVar55 + 2);
                      gte_ldSXY2(ppuVar46 + 2);
                      gte_stSXY0();
                      gte_stSXY1();
                      gte_nclip_b();
                      iVar32 = *(int *)(iVar15 + 0xa0);
                      *piVar37 = (int)(piVar37 + -0x1e3ffff8);
                      uVar31 = *(ushort *)(iVar15 + 0x394);
                      uVar40 = iVar15 + 0xa5U & 3;
                      iVar20 = *(int *)((iVar15 + 0xa5U) - uVar40);
                      uVar52 = (uint)(short *)((int)ppuVar63 + 6U) & 3;
                      uVar47 = *(uint *)((int)(short *)((int)ppuVar63 + 6U) - uVar52);
                      uVar51 = gte_stMAC0();
                      uVar67 = *(uint *)(iVar15 + 0xa4);
                      gte_stSXY2();
                      if ((int)uVar51 < 0) {
                        uVar51 = -uVar51;
                      }
                      piVar37[1] = iVar32;
                      if (uVar51 <= uVar31) {
                        uVar51 = (uint)(short *)((int)ppuVar55 + 6U) & 3;
                        uVar19 = *(uint *)((int)(short *)((int)ppuVar55 + 6U) - uVar51);
                        piVar37[3] = (iVar20 << (3 - uVar40) * 8 |
                                     (uint)bVar27 & 0xffffffffU >> (uVar40 + 1) * 8) &
                                     -1 << (4 - uVar52) * 8 | uVar47 >> uVar52 * 8;
                        uVar40 = (uint)(short *)((int)ppuVar46 + 6U) & 3;
                        uVar52 = *(uint *)((int)(short *)((int)ppuVar46 + 6U) - uVar40);
                        piVar37[5] = uVar67 & -1 << (4 - uVar51) * 8 | uVar19 >> uVar51 * 8;
                        piVar37[7] = iVar15 + 0x328U & -1 << (4 - uVar40) * 8 | uVar52 >> uVar40 * 8
                        ;
                        *(int **)(iVar15 + 0x38c) = piVar37;
                        *(int **)(iVar15 + 0x68) = piVar37 + 8;
                        goto LAB_overlay0__80024bc0;
                      }
                    }
                    if (ppuVar36 != (undefined4 **)(iVar15 + 0x328)) goto LAB_overlay0__80024754;
                  }
LAB_overlay0__80024bc0:
                  while (uVar21 = uVar21 - 1, (int)uVar21 < 0) {
                    if (ppuVar36 == (undefined4 **)(iVar15 + 0xe8)) {
                      uVar21 = *(uint *)(iVar15 + 0x388);
                      if (*(uint *)(iVar15 + 0x6c) < *(uint *)(iVar15 + 0x68)) {
                        *(uint *)(iVar15 + 0x68) = uVar21;
                      }
                      else if (*(uint *)(iVar15 + 0x68) != uVar21) {
                        iVar32 = *(int *)(iVar15 + 0x38c);
                        uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                        uVar52 = uVar40 & 3;
                        iVar20 = *(int *)(uVar40 - uVar52);
                        uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                        uVar47 = uVar40 & 3;
                        puVar62 = (uint *)(uVar40 - uVar47);
                        *puVar62 = *puVar62 & -1 << (uVar47 + 1) * 8 |
                                   (uVar21 << 8) >> (3 - uVar47) * 8;
                        uVar21 = iVar32 + 2;
                        uVar40 = uVar21 & 3;
                        puVar62 = (uint *)(uVar21 - uVar40);
                        *puVar62 = *puVar62 & -1 << (uVar40 + 1) * 8 |
                                   (uint)(iVar20 << (3 - uVar52) * 8) >> (3 - uVar40) * 8;
                      }
                      goto LAB_overlay0__80024c1c;
                    }
                    ppuVar60 = ppuVar36 + -0x11;
                    ppuVar36 = ppuVar36 + -0x18;
                    uVar21 = (uint)*(byte *)ppuVar60;
                  }
                } while( true );
              }
              *(undefined4 *)(iVar15 + 0x68) = *(undefined4 *)(iVar15 + 0x388);
LAB_overlay0__80024c1c:
              puVar62 = *(uint **)(iVar70 + 0x68);
              pSVar56 = *(SVECTOR **)(iVar70 + 0x3a8);
              if (puVar62 < *(uint **)(iVar70 + 0x6c)) goto LAB_overlay0__80024c84;
              *(uint **)(iVar70 + 0x68) = puVar62;
              goto LAB_overlay0__80024c94;
            }
            uVar67 = *(uint *)(iVar70 + 0x398);
            uVar51 = -uVar21;
            if ((int)uVar21 < 0) {
              uVar51 = uVar21;
            }
            if ((int)(uVar67 + uVar51) < 0) goto LAB_overlay0__80024784;
            puVar17 = *(uint **)(iVar70 + 0x6c);
            uVar21 = iVar32 + 2U & 3;
            iVar15 = *(int *)((iVar32 + 2U) - uVar21);
            gte_stRGB2();
            puVar62[3] = uVar40;
            puVar62[5] = uVar52;
            puVar62[7] = uVar47;
            bVar14 = puVar17 < puVar62;
            gte_stSXY0();
            gte_stSXY1();
            gte_stSXY2();
            uVar40 = (int)puVar62 << 8;
            *puVar62 = (iVar15 << (3 - uVar21) * 8 | uVar67 & 0xffffffffU >> (uVar21 + 1) * 8) >> 8
                       | 0x7000000;
            puVar62 = puVar62 + 8;
            uVar21 = iVar32 + 2U & 3;
            puVar17 = (uint *)((iVar32 + 2U) - uVar21);
            *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
            if (bVar14) break;
          }
        }
LAB_overlay0__80024c84:
        pSVar56 = (SVECTOR *)&pSVar56[1].vz;
      } while (pSVar56 != (SVECTOR *)puVar72);
      *(uint **)(iVar70 + 0x68) = puVar62;
    }
LAB_overlay0__80024c94:
    pSVar56 = ppSVar75[6];
    iVar70 = 0x1f800000;
    if (*(ushort *)((int)ppSVar75 + 0x3a) != 0) {
      DAT_1f800394 = (undefined2)DAT_1f80039c;
      DAT_1f8003b0_b16->_0_2_ = pSVar56->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar56->vy;
      DAT_1f8003ac = (SVECTOR *)((int)pSVar56 + (uint)*(ushort *)((int)ppSVar75 + 0x3a) * 0xc);
      puVar62 = DAT_1f800068;
      do {
        iVar15 = *(int *)(iVar70 + 0x70);
        uVar58 = *(uint *)(iVar70 + 0x3b0);
        uVar16 = *(undefined4 *)&pSVar56[1].vz;
        puVar41 = (undefined4 *)((uVar58 & 0x1ff) * 0x10 + iVar15);
        *(undefined4 **)(iVar70 + 0xe8) = puVar41;
        {
          bitfield_16_t *uVar19_b16 = (bitfield_16_t *)&uVar19;
          uVar19_b16->_0_2_ = pSVar56->vz;
          uVar19_b16->_2_2_ = pSVar56->pad;
        }
        *(undefined4 *)(iVar70 + 0x3b0) = uVar16;
        puVar45 = (undefined4 *)(((int)uVar58 >> 5 & 0x1ff0U) + iVar15);
        *(undefined4 **)(iVar70 + 0xec) = puVar45;
        uVar52 = puVar41[1];
        puVar49 = (undefined4 *)(((int)uVar58 >> 0xe & 0x1ff0U) + iVar15);
        *(undefined4 **)(iVar70 + 0xf0) = puVar49;
        uVar40 = puVar45[1];
        uVar21 = iVar70 + 0xadU & 3;
        puVar17 = (uint *)((iVar70 + 0xadU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xb7) = (char)uVar52;
        puVar66 = (undefined4 *)((uVar19 & 0x1ff) * 0x10 + iVar15);
        *(undefined4 **)(iVar70 + 0xf4) = puVar66;
        uVar47 = puVar49[1];
        uVar21 = iVar70 + 0xbdU & 3;
        puVar17 = (uint *)((iVar70 + 0xbdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 199) = (char)uVar40;
        uVar51 = puVar66[1];
        uVar21 = iVar70 + 0xcdU & 3;
        puVar17 = (uint *)((iVar70 + 0xcdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar47 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xd7) = (char)uVar47;
        uVar21 = uVar52;
        if ((int)uVar52 < (int)uVar40) {
          uVar21 = uVar40;
        }
        iVar15 = *(int *)(iVar70 + 100);
        {
          bitfield_16_t *uVar28_b16 = (bitfield_16_t *)&uVar28;
          uVar28_b16->_0_2_ = pSVar56[1].vx;
          uVar28_b16->_2_2_ = pSVar56[1].vy;
        }
        uVar67 = iVar70 + 0xddU & 3;
        puVar17 = (uint *)((iVar70 + 0xddU) - uVar67);
        *puVar17 = *puVar17 & -1 << (uVar67 + 1) * 8 | uVar51 >> (3 - uVar67) * 8;
        *(char *)(iVar70 + 0xe7) = (char)uVar51;
        uVar16 = puVar41[2];
        gte_ldRGB(uVar28);
        if ((uVar52 & uVar40 & uVar47 & uVar51 & 0x1f) == 0) {
          gte_ldSXY2(uVar16);
          if ((int)uVar21 < (int)uVar47) {
            uVar21 = uVar47;
          }
          uVar73 = puVar49[2];
          gte_ldSXY0(puVar45[2]);
          *(undefined4 *)(iVar70 + 0xc0) = puVar45[2];
          if ((int)uVar21 < (int)uVar51) {
            uVar21 = uVar51;
          }
          iVar20 = ((int)uVar21 >> 0x13) >> (*(ushort *)(iVar70 + 0x9a) & 0x1f);
          uVar24 = puVar66[2];
          gte_ldSXY1(uVar73);
          iVar32 = iVar20 << 2;
          if (0xfff < iVar20) {
            iVar32 = 0x3ffc;
          }
          gte_nclip_b();
          uVar74 = *puVar41;
          iVar32 = iVar15 + (uVar58 >> 0x15 & 0xc0) + iVar32;
          iVar15 = gte_stMAC0();
          gte_ldSXYP(uVar24);
          uVar21 = -iVar15;
          gte_nclip_b();
          uVar69 = *puVar45;
          gte_ldIR0(0);
          *(undefined4 *)(iVar70 + 0xb0) = uVar16;
          *(undefined4 *)(iVar70 + 0xd0) = uVar73;
          *(undefined4 *)(iVar70 + 0xe0) = uVar24;
          uVar67 = gte_stMAC0();
          uVar73 = *puVar49;
          gte_dpcs_b();
          uVar40 = (uVar52 | uVar40 | uVar47 | uVar51) & 0x20;
          uVar16 = *puVar66;
          if ((uVar21 | uVar67 | uVar40) != 0) {
            gte_stRGB2();
            if (-1 < (int)(uVar21 - 1 & uVar67 - 1 & uVar58 & uVar40 - 0x20)) {
              puVar17 = (uint *)(((int)uVar19 >> 4 & 0x7ffe0U) + *(int *)(iVar70 + 0x3a0));
              uVar31 = *(ushort *)(puVar17 + 3);
              *(undefined4 *)(iVar70 + 0xa8) = uVar74;
              *(undefined4 *)(iVar70 + 0xb8) = uVar69;
              *(undefined4 *)(iVar70 + 200) = uVar73;
              uVar21 = uVar21 + uVar67;
              *(undefined4 *)(iVar70 + 0xd8) = uVar16;
              if ((int)uVar21 < 0) {
                uVar21 = -uVar21;
              }
              if (uVar21 <= uVar31) {
                puVar17 = puVar17 + 4;
              }
              uVar47 = *puVar17;
              uVar51 = puVar17[1];
              uVar52 = puVar17[2];
              if (uVar40 != 0) {
                if ((int)uVar58 < 0) {
                  gte_ldR11R12((int)*(short *)(iVar70 + 0xb8));
                  gte_ldR22R23((int)*(short *)(iVar70 + 0xba));
                  uVar40 = (uint)*(short *)(iVar70 + 0xd8);
                  gte_ldR33((int)*(short *)(iVar70 + 0xbc));
                  uVar58 = (uint)*(short *)(iVar70 + 0xda);
                  gte_ldIR1(uVar40);
                  uVar21 = (uint)*(short *)(iVar70 + 0xdc);
                  gte_ldIR2(uVar58);
                  gte_ldIR3(uVar21);
                  gte_ldVXY0(iVar70 + 0xa8);
                  gte_ldVZ0(iVar70 + 0xac);
                  gte_op0_b(0);
                  gte_ldVXY1(iVar70 + 200);
                  gte_ldVZ1(iVar70 + 0xcc);
                  read_mt(uVar21,uVar40,uVar58);
                  gte_ldR11R12((int)uVar21 >> 0x18 & 0xffffU | ((int)uVar40 >> 0x18) << 0x10);
                  gte_ldR13R21((int)uVar58 >> 0x18 & 0xffffU | ((int)uVar21 >> 0xc & 0xfffU) << 0x10
                              );
                  gte_ldR22R23((int)uVar40 >> 0xc & 0xfffU | ((int)uVar58 >> 0xc & 0xfffU) << 0x10);
                  gte_ldR31R32(uVar21 & 0xfff | (uVar40 & 0xfff) << 0x10);
                  gte_ldR33(uVar58 & 0xfff);
                  gte_mvmva_b(0,0,0,3,0);
                  iVar43 = gte_stMAC3();
                  iVar15 = gte_stMAC2();
                  iVar33 = gte_stMAC1();
                  gte_mvmva_b(0,0,1,3,0);
                  iVar48 = gte_stMAC3();
                  iVar20 = gte_stMAC2();
                  iVar38 = gte_stMAC1();
                  gte_ldR11R12(0x1000);
                  gte_ldR13R21(0);
                  gte_ldR22R23(0x1000);
                  gte_ldR31R32(0);
                  gte_ldR33(0x1000);
                  if (-1 < (iVar33 + (iVar15 + (iVar43 >> 0xc) >> 0xc) |
                           -(iVar38 + (iVar20 + (iVar48 >> 0xc) >> 0xc))))
                  goto LAB_overlay0__800256c8;
                }
                gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar70 + 0xe8) + 0xc) |
                                        *(ushort *)(*(int *)(iVar70 + 0xec) + 0xc) |
                                       *(ushort *)(*(int *)(iVar70 + 0xf0) + 0xc) |
                                       *(ushort *)(*(int *)(iVar70 + 0xf4) + 0xc)));
                iVar15 = gte_stLZCR();
                uVar21 = iVar15 - 0x11;
                if (0 < (int)uVar21) {
                  *(short *)(iVar70 + 0xa8) =
                       (short)((int)*(short *)(iVar70 + 0xa8) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xaa) =
                       (short)((int)*(short *)(iVar70 + 0xaa) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xac) =
                       (short)((int)*(short *)(iVar70 + 0xac) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xb8) =
                       (short)((int)*(short *)(iVar70 + 0xb8) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xba) =
                       (short)((int)*(short *)(iVar70 + 0xba) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xbc) =
                       (short)((int)*(short *)(iVar70 + 0xbc) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 200) =
                       (short)((int)*(short *)(iVar70 + 200) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xca) =
                       (short)((int)*(short *)(iVar70 + 0xca) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xcc) =
                       (short)((int)*(short *)(iVar70 + 0xcc) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xd8) =
                       (short)((int)*(short *)(iVar70 + 0xd8) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xda) =
                       (short)((int)*(short *)(iVar70 + 0xda) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xdc) =
                       (short)((int)*(short *)(iVar70 + 0xdc) << (uVar21 & 0x1f));
                }
LAB_overlay0__80025100:
                *(uint **)(iVar70 + 0x68) = puVar62;
                *(SVECTOR **)(iVar70 + 0x3a8) = pSVar56;
                *(int *)(iVar70 + 0x9c) = iVar32;
                gte_stRGB2();
                *(uint *)(iVar70 + 0xa4) = uVar51;
                uVar21 = iVar70 + 0xa5U & 3;
                puVar62 = (uint *)((iVar70 + 0xa5U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar47 >> (3 - uVar21) * 8;
                *(short *)(iVar70 + 0xae) = (short)uVar47;
                *(short *)(iVar70 + 0xbe) = (short)uVar51;
                *(short *)(iVar70 + 0xce) = (short)uVar52;
                *(short *)(iVar70 + 0xde) = (short)(uVar52 >> 0x10);
                DAT_1f800388 = DAT_1f800068;
                puVar41 = &DAT_1f8000a8;
                iVar15 = 0x1f800000;
                ppuVar60 = &DAT_1f8000e8;
                ppuVar36 = &DAT_1f8000e8;
                pbVar23 = (byte *)((int)&DAT_1f8000b4 + 3);
                do {
                  bVar27 = *pbVar23;
                  *ppuVar36 = puVar41;
                  ppuVar36 = ppuVar36 + 1;
                  if ((bVar27 & 0x20) != 0) {
                    gte_ldVXY0(puVar41);
                    gte_ldVZ0(pbVar23 + -0xb);
                    gte_rtps_b();
                    iVar20 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar20) {
                      *pbVar23 = bVar27 & 0x1f;
                    }
                  }
                  pbVar23 = pbVar23 + 0x10;
                  puVar41 = puVar41 + 4;
                } while (ppuVar36 != (undefined4 **)&DAT_1f8000f8);
                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390.bitfield._0_3_[0] = ((char *)&DAT_1f800388)[0];
                DAT_1f800390.bitfield._0_3_[1] = ((char *)&DAT_1f800388)[1];
                DAT_1f800390.bitfield._0_3_[2] = ((char *)&DAT_1f800388)[2];
                DAT_1f800390.value = CONCAT13(9,(char *)DAT_1f800390.bitfield._0_3_);
LAB_overlay0__800251b8:
                pSVar53 = (SVECTOR *)(ppuVar60 + 4);
                puVar41 = *ppuVar60;
                puVar45 = ppuVar60[1];
                puVar49 = ppuVar60[2];
                puVar66 = ppuVar60[3];
                sVar8 = *(short *)puVar41;
                sVar9 = *(short *)puVar45;
                sVar10 = *(short *)puVar49;
                iVar32 = (int)sVar8 + (int)sVar9;
                *(short *)(ppuVar60 + 8) = (short)(iVar32 >> 1);
                sVar11 = *(short *)puVar66;
                *(short *)(ppuVar60 + 0xc) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar20 = (int)sVar10 + (int)sVar11;
                *(short *)(ppuVar60 + 0x10) = (short)(iVar20 >> 1);
                *(short *)(ppuVar60 + 0x14) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)(ppuVar60 + 4) = (short)(iVar32 + iVar20 >> 2);
                sVar8 = *(short *)((int)puVar41 + 2);
                sVar9 = *(short *)((int)puVar45 + 2);
                sVar10 = *(short *)((int)puVar49 + 2);
                iVar32 = (int)sVar8 + (int)sVar9;
                *(short *)((int)ppuVar60 + 0x22) = (short)(iVar32 >> 1);
                sVar11 = *(short *)((int)puVar66 + 2);
                *(short *)((int)ppuVar60 + 0x32) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar20 = (int)sVar10 + (int)sVar11;
                *(short *)((int)ppuVar60 + 0x42) = (short)(iVar20 >> 1);
                *(short *)((int)ppuVar60 + 0x52) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)((int)ppuVar60 + 0x12) = (short)(iVar32 + iVar20 >> 2);
                sVar8 = *(short *)(puVar41 + 1);
                sVar9 = *(short *)(puVar45 + 1);
                sVar10 = *(short *)(puVar49 + 1);
                iVar32 = (int)sVar8 + (int)sVar9;
                *(short *)(ppuVar60 + 9) = (short)(iVar32 >> 1);
                sVar11 = *(short *)(puVar66 + 1);
                *(short *)(ppuVar60 + 0xd) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar20 = (int)sVar10 + (int)sVar11;
                *(short *)(ppuVar60 + 0x11) = (short)(iVar20 >> 1);
                *(short *)(ppuVar60 + 0x15) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)(ppuVar60 + 5) = (short)(iVar32 + iVar20 >> 2);
                gte_ldv0(pSVar53);
                gte_rtps_b();
                bVar27 = *(byte *)((int)puVar41 + 6);
                bVar1 = *(byte *)((int)puVar45 + 6);
                bVar2 = *(byte *)((int)puVar49 + 6);
                iVar32 = (uint)bVar27 + (uint)bVar1;
                *(char *)&pSVar53[2].pad = (char)(iVar32 >> 1);
                bVar3 = *(byte *)((int)puVar66 + 6);
                *(char *)&pSVar53[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)&pSVar53[6].pad = (char)(iVar20 >> 1);
                *(char *)&pSVar53[8].pad = (char)((int)((uint)bVar3 + (uint)bVar27) >> 1);
                *(char *)&pSVar53->pad = (char)(iVar32 + iVar20 >> 2);
                bVar27 = *(byte *)((int)puVar41 + 7);
                bVar1 = *(byte *)((int)puVar45 + 7);
                bVar2 = *(byte *)((int)puVar49 + 7);
                iVar32 = (uint)bVar27 + (uint)bVar1;
                *(char *)((int)&pSVar53[2].pad + 1) = (char)(iVar32 >> 1);
                bVar3 = *(byte *)((int)puVar66 + 7);
                *(char *)((int)&pSVar53[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)((int)&pSVar53[6].pad + 1) = (char)(iVar20 >> 1);
                *(char *)((int)&pSVar53[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar27) >> 1)
                ;
                *(char *)((int)&pSVar53->pad + 1) = (char)(iVar32 + iVar20 >> 2);
                uVar31 = *(ushort *)(iVar15 + 0x62);
                uVar12 = *(ushort *)(iVar15 + 0x5e);
                uVar13 = *(ushort *)(iVar15 + 0x60);
                pSVar56 = pSVar53;
                do {
                  iVar32 = gte_stFLAG();
                  gte_ldVXY0(pSVar56 + 2);
                  gte_ldVZ0(&pSVar56[2].vz);
                  gte_stSXY2();
                  iVar20 = gte_stIR3();
                  gte_rtps_b();
                  bVar27 = iVar20 < (int)(uint)uVar31;
                  if (pSVar56[1].vx < 0) {
                    bVar27 = bVar27 | 2;
                  }
                  bVar27 = bVar27 | ((int)(uVar12 - 1) < (int)pSVar56[1].vx) << 2;
                  if (pSVar56[1].vy < 0) {
                    bVar27 = bVar27 | 8;
                  }
                  bVar27 = bVar27 | ((int)(uVar13 - 1) < (int)pSVar56[1].vy) << 4;
                  if (iVar32 < 0) {
                    bVar27 = bVar27 | 0x20;
                  }
                  pSVar57 = pSVar56 + 2;
                  *(byte *)((int)&pSVar56[1].pad + 1) = bVar27;
                  pSVar56 = pSVar57;
                } while (pSVar57 != pSVar53 + 10);
                piVar37 = *(int **)(iVar15 + 0x68);
                iVar32 = *(int *)(iVar15 + 0xa0);
                uVar21 = iVar15 + 0xa5U & 3;
                uVar52 = *(int *)((iVar15 + 0xa5U) - uVar21) << (3 - uVar21) * 8 |
                         (uint)pSVar57 & 0xffffffffU >> (uVar21 + 1) * 8;
                uVar40 = *(uint *)(iVar15 + 0xa4);
                ppuVar36 = ppuVar60 + 3;
                uVar21 = 2;
                iVar20 = 3;
                do {
                  uVar21 = uVar21 & 3;
                  puVar41 = *ppuVar36;
                  puVar45 = ppuVar60[uVar21];
                  bVar27 = *(byte *)((int)puVar41 + 0xf) |
                           *(byte *)((int)ppuVar60 + uVar21 * 0x10 + 0x2f) |
                           *(byte *)((int)puVar45 + 0xf);
                  if ((bVar27 & 0x20) == 0) {
                    gte_ldSXY0(puVar41 + 2);
                    gte_ldSXY1(ppuVar60 + uVar21 * 4 + 10);
                    gte_ldSXY2(puVar45 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();
                    uVar47 = (uint)(short *)((int)puVar41 + 6U) & 3;
                    uVar52 = uVar52 & -1 << (4 - uVar47) * 8 |
                             *(uint *)((int)(short *)((int)puVar41 + 6U) - uVar47) >> uVar47 * 8;
                    uVar21 = (int)ppuVar60 + uVar21 * 0x10 + 0x26;
                    uVar47 = uVar21 & 3;
                    uVar40 = uVar40 & -1 << (4 - uVar47) * 8 |
                             *(uint *)(uVar21 - uVar47) >> uVar47 * 8;
                    piVar37[3] = uVar52;
                    uVar21 = (uint)(short *)((int)puVar45 + 6U) & 3;
                    uVar47 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar21);
                    piVar37[5] = uVar40;
                    piVar37[7] = bVar27 & 0x20 & -1 << (4 - uVar21) * 8 | uVar47 >> uVar21 * 8;
                    *piVar37 = (int)(piVar37 + -0x1e3ffff8);
                    iVar43 = gte_stMAC0();
                    gte_stSXY2();
                    piVar37[1] = iVar32 + -0x8000000;
                    if (iVar43 != 0) {
                      *(int **)(iVar15 + 0x38c) = piVar37;
                      piVar37 = piVar37 + 8;
                    }
                  }
                  ppuVar36 = ppuVar36 + -1;
                  iVar43 = iVar20 + -1;
                  *(int **)(iVar15 + 0x68) = piVar37;
                  uVar21 = iVar20 - 2;
                  iVar20 = iVar43;
                } while (-1 < iVar43);
                uVar21 = 3;
                if (*(uint *)(iVar15 + 0x68) <= *(uint *)(iVar15 + 0x6c)) {
                  uVar40 = 2;
                  ppuVar36 = ppuVar60;
                  do {
                    ppuVar63 = ppuVar36 + uVar21 * 4 + 8;
                    ppuVar55 = ppuVar36 + (uVar40 & 3) * 4 + 8;
                    puVar41 = ppuVar36[uVar21];
                    uVar40 = uVar21;
                    if ((*(byte *)((int)puVar41 + 0xf) & *(byte *)((int)ppuVar63 + 0xf) &
                         *(byte *)((int)ppuVar36 + 0x1f) & *(byte *)((int)ppuVar55 + 0xf) & 0x1f) ==
                        0) {
                      if (((*(byte *)((int)puVar41 + 0xf) | *(byte *)((int)ppuVar63 + 0xf) |
                            *(byte *)((int)ppuVar36 + 0x1f) | *(byte *)((int)ppuVar55 + 0xf)) & 0x20
                          ) == 0) {
                        puVar62 = *(uint **)(iVar15 + 0x68);
                        gte_ldSXY0(ppuVar63 + 2);
                        gte_ldSXY1(puVar41 + 2);
                        gte_ldSXY2(ppuVar36 + 6);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();
                        uVar52 = *(uint *)(iVar15 + 0xa0);
                        *puVar62 = (uint)(puVar62 + -0x1dbffff6);
                        puVar62[1] = uVar52;
                        uVar31 = *(ushort *)(iVar15 + 0x394);
                        iVar32 = gte_stMAC0();
                        gte_ldSXY0(ppuVar55 + 2);
                        uVar52 = iVar15 + 0xa5U & 3;
                        uVar19 = *(uint *)(iVar15 + 0xa4);
                        gte_nclip_b();
                        uVar47 = (uint)(short *)((int)puVar41 + 6U) & 3;
                        uVar67 = (*(int *)((iVar15 + 0xa5U) - uVar52) << (3 - uVar52) * 8 |
                                 (uint)(puVar62 + -0x1dbffff6) & 0xffffffffU >> (uVar52 + 1) * 8) &
                                 -1 << (4 - uVar47) * 8 |
                                 *(uint *)((int)(short *)((int)puVar41 + 6U) - uVar47) >> uVar47 * 8
                        ;
                        uVar52 = (uint)(short *)((int)ppuVar63 + 6U) & 3;
                        uVar51 = *(uint *)((int)(short *)((int)ppuVar63 + 6U) - uVar52);
                        puVar62[3] = uVar67;
                        uVar47 = (int)ppuVar36 + 0x16U & 3;
                        uVar58 = *(uint *)(((int)ppuVar36 + 0x16U) - uVar47);
                        puVar62[5] = uVar19 & -1 << (4 - uVar52) * 8 | uVar51 >> uVar52 * 8;
                        uVar52 = (uint)(short *)((int)ppuVar55 + 6U) & 3;
                        uVar51 = *(uint *)((int)(short *)((int)ppuVar55 + 6U) - uVar52);
                        puVar62[9] = -1 << (4 - uVar47) * 8 & 0x77000000U | uVar58 >> uVar47 * 8;
                        puVar62[7] = uVar67 & -1 << (4 - uVar52) * 8 | uVar51 >> uVar52 * 8;
                        iVar20 = gte_stMAC0();
                        gte_stSXY0();
                        uVar52 = iVar32 - iVar20;
                        gte_stSXY2();
                        if ((int)uVar52 < 0) {
                          uVar52 = -uVar52;
                        }
                        if (uVar52 <= uVar31) {
                          *(uint **)(iVar15 + 0x38c) = puVar62;
                          *(uint **)(iVar15 + 0x68) = puVar62 + 10;
                          goto LAB_overlay0__800255f8;
                        }
                      }
                      if (ppuVar36 != (undefined4 **)(iVar15 + 0x328)) goto code_r0x800255d4;
                    }
LAB_overlay0__800255f8:
                    while( true ) {
                      uVar21 = uVar40 - 1;
                      uVar40 = uVar40 - 2;
                      if (-1 < (int)uVar21) break;
                      if (ppuVar36 == (undefined4 **)(iVar15 + 0xe8)) {
                        uVar21 = *(uint *)(iVar15 + 0x388);
                        if (*(uint *)(iVar15 + 0x6c) < *(uint *)(iVar15 + 0x68)) {
                          *(uint *)(iVar15 + 0x68) = uVar21;
                        }
                        else if (*(uint *)(iVar15 + 0x68) != uVar21) {
                          iVar32 = *(int *)(iVar15 + 0x38c);
                          uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                          uVar52 = uVar40 & 3;
                          iVar20 = *(int *)(uVar40 - uVar52);
                          uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                          uVar47 = uVar40 & 3;
                          puVar62 = (uint *)(uVar40 - uVar47);
                          *puVar62 = *puVar62 & -1 << (uVar47 + 1) * 8 |
                                     (uVar21 << 8) >> (3 - uVar47) * 8;
                          uVar21 = iVar32 + 2;
                          uVar40 = uVar21 & 3;
                          puVar62 = (uint *)(uVar21 - uVar40);
                          *puVar62 = *puVar62 & -1 << (uVar40 + 1) * 8 |
                                     (uint)(iVar20 << (3 - uVar52) * 8) >> (3 - uVar40) * 8;
                        }
                        goto LAB_overlay0__80025654;
                      }
                      ppuVar60 = ppuVar36 + -0x11;
                      ppuVar36 = ppuVar36 + -0x18;
                      uVar40 = (uint)*(byte *)ppuVar60;
                    }
                  } while( true );
                }
                *(undefined4 *)(iVar15 + 0x68) = *(undefined4 *)(iVar15 + 0x388);
LAB_overlay0__80025654:
                puVar62 = *(uint **)(iVar70 + 0x68);
                pSVar56 = *(SVECTOR **)(iVar70 + 0x3a8);
                if (puVar62 < *(uint **)(iVar70 + 0x6c)) goto LAB_overlay0__800256c8;
                *(uint **)(iVar70 + 0x68) = puVar62;
                goto LAB_overlay0__800256dc;
              }
              if (*(int *)(iVar70 + 0x39c) < (int)uVar21) goto LAB_overlay0__80025100;
              uVar40 = iVar32 + 2U & 3;
              iVar15 = *(int *)((iVar32 + 2U) - uVar40);
              gte_stRGB2();
              bVar14 = *(uint **)(iVar70 + 0x6c) < puVar62;
              puVar62[3] = uVar47;
              puVar62[5] = uVar51;
              puVar62[9] = uVar52;
              uVar47 = (int)puVar62 + 0x1dU & 3;
              puVar17 = (uint *)(((int)puVar62 + 0x1dU) - uVar47);
              *puVar17 = *puVar17 & -1 << (uVar47 + 1) * 8 | uVar52 >> (3 - uVar47) * 8;
              gte_stSXY0();
              gte_stSXY1();
              puVar62[4] = *(uint *)(iVar70 + 0xc0);
              gte_stSXY2();
              uVar52 = (int)puVar62 << 8;
              *puVar62 = (iVar15 << (3 - uVar40) * 8 | uVar21 & 0xffffffffU >> (uVar40 + 1) * 8) >>
                         8 | 0x9000000;
              puVar62 = puVar62 + 10;
              uVar21 = iVar32 + 2U & 3;
              puVar17 = (uint *)((iVar32 + 2U) - uVar21);
              *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
              if (bVar14) break;
            }
          }
        }
LAB_overlay0__800256c8:
        pSVar56 = (SVECTOR *)&pSVar56[1].vz;
      } while (pSVar56 != (SVECTOR *)*(undefined **)(iVar70 + 0x3ac));
      *(uint **)(iVar70 + 0x68) = puVar62;
    }
LAB_overlay0__800256dc:
    pSVar56 = ppSVar75[7];
    iVar70 = 0x1f800000;
    if (*(ushort *)(ppSVar75 + 0xf) != 0) {
      DAT_1f800394 = _DAT_1f800398;
      puVar72 = (undefined *)((int)pSVar56 + (uint)*(ushort *)(ppSVar75 + 0xf) * 0x14);
      puVar62 = DAT_1f800068;
      do {
        iVar15 = *(int *)(iVar70 + 0x70);
        {
          bitfield_16_t *uVar59_b16 = (bitfield_16_t *)&uVar59;
          bitfield_16_t *iVar32_b16 = (bitfield_16_t *)&iVar32;
          uVar59_b16->_0_2_ = pSVar56->vx;
          uVar59_b16->_2_2_ = pSVar56->vy;
          iVar32_b16->_0_2_ = pSVar56->vz;
          iVar32_b16->_2_2_ = pSVar56->pad;
        }
        puVar49 = (undefined4 *)((uVar59 & 0x1ff) * 0x10 + iVar15);
        puVar45 = (undefined4 *)(((int)uVar59 >> 5 & 0x1ff0U) + iVar15);
        puVar41 = (undefined4 *)(((int)uVar59 >> 0xe & 0x1ff0U) + iVar15);
        uVar40 = puVar49[1];
        uVar52 = puVar45[1];
        uVar47 = puVar41[1];
        *(undefined4 **)(iVar70 + 0xe8) = puVar49;
        *(undefined4 **)(iVar70 + 0xec) = puVar45;
        *(undefined4 **)(iVar70 + 0xf0) = puVar41;
        uVar21 = iVar70 + 0xadU & 3;
        puVar17 = (uint *)((iVar70 + 0xadU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xb7) = (char)uVar40;
        uVar21 = iVar70 + 0xbdU & 3;
        puVar17 = (uint *)((iVar70 + 0xbdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 199) = (char)uVar52;
        uVar21 = iVar70 + 0xcdU & 3;
        puVar17 = (uint *)((iVar70 + 0xcdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar47 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xd7) = (char)uVar47;
        if ((uVar40 & uVar52 & uVar47 & 0x1f) == 0) {
          gte_ldSXY0(puVar49[2]);
          gte_ldSXY1(puVar41[2]);
          gte_ldSXY2(puVar45[2]);
          gte_nclip_b();
          uVar21 = gte_stMAC0();
          uVar51 = (uVar40 | uVar52 | uVar47) & 0x20;
          if (((uVar21 | uVar51) != 0) && (-1 < (int)(uVar21 & uVar59 & uVar51 - 0x20))) {
            if ((int)uVar40 < (int)uVar52) {
              uVar40 = uVar52;
            }
            if ((int)uVar40 < (int)uVar47) {
              uVar40 = uVar47;
            }
            iVar15 = ((int)uVar40 >> 0x13) >> (*(ushort *)(iVar70 + 0x9a) & 0x1f);
            iVar20 = iVar15 << 2;
            if (0xfff < iVar15) {
              iVar20 = 0x3ffc;
            }
            iVar20 = *(int *)(iVar70 + 100) + (uVar59 >> 0x15 & 0xc0) + iVar20;
            {
              bitfield_16_t *uVar54_b16 = (bitfield_16_t *)&uVar54;
              bitfield_16_t *uVar29_b16 = (bitfield_16_t *)&uVar29;
              bitfield_16_t *uVar25_b16 = (bitfield_16_t *)&uVar25;
              uVar54_b16->_0_2_ = pSVar56[1].vx;
              uVar54_b16->_2_2_ = pSVar56[1].vy;
              uVar29_b16->_0_2_ = pSVar56[1].vz;
              uVar29_b16->_2_2_ = pSVar56[1].pad;
              uVar25_b16->_0_2_ = pSVar56[2].vx;
              uVar25_b16->_2_2_ = pSVar56[2].vy;
            }
            gte_ldIR0(0);
            gte_ldRGB(uVar54);
            gte_ldRGB0(uVar54);
            gte_ldRGB1(uVar29);
            gte_ldRGB2(uVar25);
            gte_dpct();
            puVar17 = (uint *)((iVar32 >> 4 & 0x7ffe0U) + *(int *)(iVar70 + 0x3a0));
            if (uVar21 <= *(ushort *)(puVar17 + 3)) {
              puVar17 = puVar17 + 4;
            }
            iVar15 = gte_stRGB2();
            uVar40 = *puVar17;
            uVar52 = puVar17[1];
            uVar47 = puVar17[2];
            uVar16 = *puVar45;
            uVar73 = *puVar41;
            *(undefined4 *)(iVar70 + 0xa8) = *puVar49;
            *(undefined4 *)(iVar70 + 0xb8) = uVar16;
            *(undefined4 *)(iVar70 + 200) = uVar73;
            if (uVar51 != 0) {
              if ((int)uVar59 < 0) {
                gte_ldR11R12((int)*(short *)(iVar70 + 0xb8));
                gte_ldR22R23((int)*(short *)(iVar70 + 0xba));
                gte_ldR33((int)*(short *)(iVar70 + 0xbc));
                gte_ldIR1((int)*(short *)(iVar70 + 200));
                gte_ldIR2((int)*(short *)(iVar70 + 0xca));
                gte_ldIR3((int)*(short *)(iVar70 + 0xcc));
                gte_op0_b(0);
                iVar32 = gte_stMAC1();
                iVar43 = gte_stMAC2();
                iVar48 = gte_stMAC3();
                gte_ldR11R12(0x1000);
                gte_ldR22R23(0x1000);
                gte_ldR33(0x1000);
                if (-1 < (longlong)(int)*(short *)(iVar70 + 0xac) * (longlong)iVar48 +
                         (longlong)(int)*(short *)(iVar70 + 0xa8) * (longlong)iVar32 +
                         (longlong)(int)*(short *)(iVar70 + 0xaa) * (longlong)iVar43)
                goto LAB_overlay0__80026000;
              }
              gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar70 + 0xe8) + 0xc) |
                                      *(ushort *)(*(int *)(iVar70 + 0xec) + 0xc) |
                                     *(ushort *)(*(int *)(iVar70 + 0xf0) + 0xc)));
              iVar32 = gte_stLZCR();
              uVar21 = iVar32 - 0x11;
              if (0 < (int)uVar21) {
                *(short *)(iVar70 + 0xa8) =
                     (short)((int)*(short *)(iVar70 + 0xa8) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xaa) =
                     (short)((int)*(short *)(iVar70 + 0xaa) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xac) =
                     (short)((int)*(short *)(iVar70 + 0xac) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xb8) =
                     (short)((int)*(short *)(iVar70 + 0xb8) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xba) =
                     (short)((int)*(short *)(iVar70 + 0xba) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xbc) =
                     (short)((int)*(short *)(iVar70 + 0xbc) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 200) = (short)((int)*(short *)(iVar70 + 200) << (uVar21 & 0x1f))
                ;
                *(short *)(iVar70 + 0xca) =
                     (short)((int)*(short *)(iVar70 + 0xca) << (uVar21 & 0x1f));
                *(short *)(iVar70 + 0xcc) =
                     (short)((int)*(short *)(iVar70 + 0xcc) << (uVar21 & 0x1f));
              }
LAB_overlay0__80025a50:
              *(uint **)(iVar70 + 0x68) = puVar62;
              *(SVECTOR **)(iVar70 + 0x3a8) = pSVar56;
              *(int *)(iVar70 + 0x9c) = iVar20;
              *(int *)(iVar70 + 0xa0) = iVar15;
              *(uint *)(iVar70 + 0xa4) = uVar52;
              uVar21 = iVar70 + 0xa5U & 3;
              puVar62 = (uint *)((iVar70 + 0xa5U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
              iVar20 = gte_stRGB0();
              uVar21 = iVar70 + 0xb6U & 3;
              puVar62 = (uint *)((iVar70 + 0xb6U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | (uint)(iVar15 << 8) >> (3 - uVar21) * 8
              ;
              iVar15 = gte_stRGB1();
              uVar21 = iVar70 + 0xc6U & 3;
              puVar62 = (uint *)((iVar70 + 0xc6U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | (uint)(iVar20 << 8) >> (3 - uVar21) * 8
              ;
              uVar21 = iVar70 + 0xd6U & 3;
              puVar62 = (uint *)((iVar70 + 0xd6U) - uVar21);
              *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | (uint)(iVar15 << 8) >> (3 - uVar21) * 8
              ;
              *(short *)(iVar70 + 0xae) = (short)uVar40;
              *(short *)(iVar70 + 0xbe) = (short)uVar52;
              *(short *)(iVar70 + 0xce) = (short)uVar47;
              DAT_1f800388 = DAT_1f800068;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              puVar62 = &DAT_1f8000a8;
              iVar15 = 0x1f800000;
              ppuVar60 = &DAT_1f8000e8;
              ppuVar36 = &DAT_1f8000e8;
              pbVar23 = (byte *)((int)&DAT_1f8000b4 + 3);
              do {
                bVar27 = *pbVar23;
                *ppuVar36 = puVar62;
                ppuVar36 = ppuVar36 + 1;
                if ((bVar27 & 0x20) != 0) {
                  gte_ldVXY0(puVar62);
                  gte_ldVZ0(pbVar23 + -0xb);
                  gte_rtps_b();
                  iVar20 = gte_stFLAG();
                  gte_stSXY2();
                  if (-1 < iVar20) {
                    *pbVar23 = bVar27 & 0x1f;
                  }
                }
                pbVar23 = pbVar23 + 0x10;
                puVar62 = puVar62 + 4;
              } while (ppuVar36 != &DAT_1f8000f4);
              DAT_1f80038c = DAT_1f800388;
              DAT_1f800390.bitfield._0_3_[0] = ((char *)&DAT_1f800388)[0];
              DAT_1f800390.bitfield._0_3_[1] = ((char *)&DAT_1f800388)[1];
              DAT_1f800390.bitfield._0_3_[2] = ((char *)&DAT_1f800388)[2];
              DAT_1f800390.value = CONCAT13(9,(char *)DAT_1f800390.bitfield._0_3_);
LAB_overlay0__80025b2c:
              pSVar53 = (SVECTOR *)(ppuVar60 + 4);
              puVar41 = *ppuVar60;
              puVar45 = ppuVar60[1];
              puVar49 = ppuVar60[2];
              sVar8 = *(short *)puVar41;
              sVar9 = *(short *)puVar45;
              sVar10 = *(short *)puVar49;
              *(short *)(ppuVar60 + 4) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar60 + 8) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar60 + 0xc) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)((int)puVar41 + 2);
              sVar9 = *(short *)((int)puVar45 + 2);
              sVar10 = *(short *)((int)puVar49 + 2);
              *(short *)((int)ppuVar60 + 0x12) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)((int)ppuVar60 + 0x22) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)((int)ppuVar60 + 0x32) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)(puVar41 + 1);
              sVar9 = *(short *)(puVar45 + 1);
              sVar10 = *(short *)(puVar49 + 1);
              *(short *)(ppuVar60 + 5) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar60 + 9) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar60 + 0xd) = (short)((int)sVar10 + (int)sVar8 >> 1);
              uVar52 = puVar41[3];
              uVar21 = puVar45[3];
              uVar40 = puVar49[3];
              ppuVar60[7] = (undefined4 *)((int)((uVar52 & 0xfefefe) + (uVar21 & 0xfefefe)) >> 1);
              ppuVar60[0xb] = (undefined4 *)((int)((uVar21 & 0xfefefe) + (uVar40 & 0xfefefe)) >> 1);
              ppuVar60[0xf] = (undefined4 *)((int)((uVar40 & 0xfefefe) + (uVar52 & 0xfefefe)) >> 1);
              gte_ldv0(pSVar53);
              gte_rtps_b();
              bVar27 = *(byte *)((int)puVar41 + 6);
              bVar1 = *(byte *)((int)puVar45 + 6);
              bVar2 = *(byte *)((int)puVar49 + 6);
              *(char *)&pSVar53->pad = (char)((int)((uint)bVar27 + (uint)bVar1) >> 1);
              *(char *)&pSVar53[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)&pSVar53[4].pad = (char)((int)((uint)bVar2 + (uint)bVar27) >> 1);
              bVar27 = *(byte *)((int)puVar41 + 7);
              bVar1 = *(byte *)((int)puVar45 + 7);
              bVar2 = *(byte *)((int)puVar49 + 7);
              *(char *)((int)&pSVar53->pad + 1) = (char)((int)((uint)bVar27 + (uint)bVar1) >> 1);
              *(char *)((int)&pSVar53[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)((int)&pSVar53[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar27) >> 1);
              uVar31 = *(ushort *)(iVar15 + 0x62);
              uVar12 = *(ushort *)(iVar15 + 0x5e);
              uVar13 = *(ushort *)(iVar15 + 0x60);
              pSVar56 = pSVar53;
              do {
                iVar32 = gte_stFLAG();
                gte_ldVXY0(pSVar56 + 2);
                gte_ldVZ0(&pSVar56[2].vz);
                gte_stSXY2();
                iVar20 = gte_stIR3();
                gte_rtps_b();
                bVar27 = iVar20 < (int)(uint)uVar31;
                if (pSVar56[1].vx < 0) {
                  bVar27 = bVar27 | 2;
                }
                bVar27 = bVar27 | ((int)(uVar12 - 1) < (int)pSVar56[1].vx) << 2;
                if (pSVar56[1].vy < 0) {
                  bVar27 = bVar27 | 8;
                }
                bVar27 = bVar27 | ((int)(uVar13 - 1) < (int)pSVar56[1].vy) << 4;
                if (iVar32 < 0) {
                  bVar27 = bVar27 | 0x20;
                }
                pSVar57 = pSVar56 + 2;
                *(byte *)((int)&pSVar56[1].pad + 1) = bVar27;
                pSVar56 = pSVar57;
              } while (pSVar57 != pSVar53 + 6);
              piVar37 = *(int **)(iVar15 + 0x68);
              uVar4 = *(undefined *)(iVar15 + 0xa3);
              uVar21 = iVar15 + 0xa5U & 3;
              uVar51 = *(int *)((iVar15 + 0xa5U) - uVar21) << (3 - uVar21) * 8 |
                       uVar51 & 0xffffffffU >> (uVar21 + 1) * 8;
              uVar21 = *(uint *)(iVar15 + 0xa4);
              iVar20 = 2;
              ppuVar36 = ppuVar60 + 2;
              do {
                iVar32 = iVar20 + -1;
                if (iVar20 == 0) {
                  iVar32 = 2;
                }
                puVar41 = *ppuVar36;
                puVar45 = ppuVar60[iVar32];
                bVar27 = *(byte *)((int)puVar41 + 0xf) |
                         *(byte *)((int)ppuVar60 + iVar32 * 0x10 + 0x1f) |
                         *(byte *)((int)puVar45 + 0xf);
                if ((bVar27 & 0x20) == 0) {
                  gte_ldSXY0(puVar41 + 2);
                  gte_ldSXY1(ppuVar60 + iVar32 * 4 + 6);
                  gte_ldSXY2(puVar45 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar40 = (uint)(short *)((int)puVar41 + 6U) & 3;
                  uVar51 = uVar51 & -1 << (4 - uVar40) * 8 |
                           *(uint *)((int)(short *)((int)puVar41 + 6U) - uVar40) >> uVar40 * 8;
                  uVar40 = (int)ppuVar60 + iVar32 * 0x10 + 0x16;
                  uVar52 = uVar40 & 3;
                  uVar21 = uVar21 & -1 << (4 - uVar52) * 8 |
                           *(uint *)(uVar40 - uVar52) >> uVar52 * 8;
                  piVar37[3] = uVar51;
                  uVar40 = (uint)(short *)((int)puVar45 + 6U) & 3;
                  uVar52 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar40);
                  piVar37[6] = uVar21;
                  piVar37[9] = bVar27 & 0x20 & -1 << (4 - uVar40) * 8 | uVar52 >> uVar40 * 8;
                  *piVar37 = (int)(piVar37 + -0x1dbffff6);
                  iVar43 = gte_stMAC0();
                  gte_stSXY2();
                  if (iVar43 != 0) {
                    puVar49 = ppuVar60[iVar32 * 4 + 7];
                    piVar37[1] = puVar41[3];
                    iVar32 = puVar45[3];
                    piVar37[4] = (int)puVar49;
                    piVar37[7] = iVar32;
                    *(undefined *)((int)piVar37 + 7) = uVar4;
                    *(int **)(iVar15 + 0x38c) = piVar37;
                    piVar37 = piVar37 + 10;
                  }
                }
                ppuVar36 = ppuVar36 + -1;
                iVar20 = iVar20 + -1;
                *(int **)(iVar15 + 0x68) = piVar37;
              } while (-1 < iVar20);
              uVar21 = 3;
              ppuVar36 = ppuVar60;
              if (*(uint *)(iVar15 + 0x68) <= *(uint *)(iVar15 + 0x6c)) {
                do {
                  if (uVar21 == 3) {
                    ppuVar63 = ppuVar36 + 4;
                    ppuVar55 = ppuVar36 + 8;
                    ppuVar46 = ppuVar36 + 0xc;
                  }
                  else {
                    ppuVar63 = (undefined4 **)ppuVar36[uVar21];
                    ppuVar55 = ppuVar36 + uVar21 * 4 + 4;
                    if (uVar21 == 0) {
                      ppuVar46 = ppuVar36 + 0xc;
                    }
                    else {
                      ppuVar46 = ppuVar36 + (uVar21 - 1) * 4 + 4;
                    }
                  }
                  if ((*(byte *)((int)ppuVar63 + 0xf) & *(byte *)((int)ppuVar55 + 0xf) &
                       *(byte *)((int)ppuVar46 + 0xf) & 0x1f) == 0) {
                    if (((*(byte *)((int)ppuVar63 + 0xf) | *(byte *)((int)ppuVar55 + 0xf) |
                         *(byte *)((int)ppuVar46 + 0xf)) & 0x20) == 0) {
                      piVar37 = *(int **)(iVar15 + 0x68);
                      gte_ldSXY0(ppuVar63 + 2);
                      gte_ldSXY1(ppuVar55 + 2);
                      gte_ldSXY2(ppuVar46 + 2);
                      gte_stSXY0();
                      gte_stSXY1();
                      gte_nclip_b();
                      uVar31 = *(ushort *)(iVar15 + 0x394);
                      uVar40 = iVar15 + 0xa5U & 3;
                      uVar52 = (uint)(short *)((int)ppuVar63 + 6U) & 3;
                      uVar67 = *(uint *)(iVar15 + 0xa4);
                      uVar47 = (uint)(short *)((int)ppuVar55 + 6U) & 3;
                      uVar58 = *(uint *)((int)(short *)((int)ppuVar55 + 6U) - uVar47);
                      piVar37[3] = (*(int *)((iVar15 + 0xa5U) - uVar40) << (3 - uVar40) * 8 |
                                   iVar15 + 0x328U & 0xffffffffU >> (uVar40 + 1) * 8) &
                                   -1 << (4 - uVar52) * 8 |
                                   *(uint *)((int)(short *)((int)ppuVar63 + 6U) - uVar52) >>
                                   uVar52 * 8;
                      uVar40 = gte_stMAC0();
                      gte_stSXY2();
                      if ((int)uVar40 < 0) {
                        uVar40 = -uVar40;
                      }
                      *piVar37 = (int)(piVar37 + -0x1dbffff6);
                      if (uVar40 <= uVar31) {
                        uVar40 = (uint)(short *)((int)ppuVar46 + 6U) & 3;
                        uVar52 = *(uint *)((int)(short *)((int)ppuVar46 + 6U) - uVar40);
                        piVar37[6] = uVar67 & -1 << (4 - uVar47) * 8 | uVar58 >> uVar47 * 8;
                        puVar45 = ppuVar63[3];
                        piVar37[9] = iVar15 + 0x328U & -1 << (4 - uVar40) * 8 | uVar52 >> uVar40 * 8
                        ;
                        puVar41 = ppuVar55[3];
                        piVar37[1] = (int)puVar45;
                        puVar45 = ppuVar46[3];
                        piVar37[4] = (int)puVar41;
                        uVar4 = *(undefined *)(iVar15 + 0xa3);
                        piVar37[7] = (int)puVar45;
                        *(undefined *)((int)piVar37 + 7) = uVar4;
                        *(int **)(iVar15 + 0x38c) = piVar37;
                        *(int **)(iVar15 + 0x68) = piVar37 + 10;
                        goto LAB_overlay0__80025f30;
                      }
                    }
                    if (ppuVar36 != (undefined4 **)(iVar15 + 0x328)) goto LAB_overlay0__80025a10;
                  }
LAB_overlay0__80025f30:
                  while (uVar21 = uVar21 - 1, (int)uVar21 < 0) {
                    if (ppuVar36 == (undefined4 **)(iVar15 + 0xe8)) {
                      uVar21 = *(uint *)(iVar15 + 0x388);
                      if (*(uint *)(iVar15 + 0x6c) < *(uint *)(iVar15 + 0x68)) {
                        *(uint *)(iVar15 + 0x68) = uVar21;
                      }
                      else if (*(uint *)(iVar15 + 0x68) != uVar21) {
                        iVar32 = *(int *)(iVar15 + 0x38c);
                        uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                        uVar52 = uVar40 & 3;
                        iVar20 = *(int *)(uVar40 - uVar52);
                        uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                        uVar47 = uVar40 & 3;
                        puVar62 = (uint *)(uVar40 - uVar47);
                        *puVar62 = *puVar62 & -1 << (uVar47 + 1) * 8 |
                                   (uVar21 << 8) >> (3 - uVar47) * 8;
                        uVar21 = iVar32 + 2;
                        uVar40 = uVar21 & 3;
                        puVar62 = (uint *)(uVar21 - uVar40);
                        *puVar62 = *puVar62 & -1 << (uVar40 + 1) * 8 |
                                   (uint)(iVar20 << (3 - uVar52) * 8) >> (3 - uVar40) * 8;
                      }
                      goto LAB_overlay0__80025f90;
                    }
                    pbVar23 = (byte *)((int)ppuVar36 + -0x41);
                    ppuVar36 = ppuVar36 + -0x18;
                    uVar21 = (uint)(*pbVar23 >> 6);
                  }
                } while( true );
              }
              *(undefined4 *)(iVar15 + 0x68) = *(undefined4 *)(iVar15 + 0x388);
LAB_overlay0__80025f90:
              puVar62 = *(uint **)(iVar70 + 0x68);
              pSVar56 = *(SVECTOR **)(iVar70 + 0x3a8);
              if (puVar62 < *(uint **)(iVar70 + 0x6c)) goto LAB_overlay0__80026000;
              *(uint **)(iVar70 + 0x68) = puVar62;
              goto LAB_overlay0__80026010;
            }
            uVar58 = -uVar21;
            if ((int)uVar21 < 0) {
              uVar58 = uVar21;
            }
            uVar58 = *(int *)(iVar70 + 0x398) + uVar58;
            if ((int)uVar58 < 0) goto LAB_overlay0__80025a50;
            puVar17 = *(uint **)(iVar70 + 0x6c);
            uVar21 = iVar20 + 2U & 3;
            uVar21 = *(int *)((iVar20 + 2U) - uVar21) << (3 - uVar21) * 8 |
                     uVar58 & 0xffffffffU >> (uVar21 + 1) * 8;
            gte_strgb3_gt3(puVar62);
            puVar62[3] = uVar40;
            puVar62[6] = uVar52;
            puVar62[9] = uVar47;
            bVar14 = puVar17 < puVar62;
            gte_stSXY0();
            gte_stSXY1();
            gte_stSXY2();
            uVar40 = (int)puVar62 << 8;
            *puVar62 = uVar21 >> 8 | 0x9000000;
            puVar62 = puVar62 + 10;
            uVar21 = iVar20 + 2U & 3;
            puVar17 = (uint *)((iVar20 + 2U) - uVar21);
            *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
            if (bVar14) break;
          }
        }
LAB_overlay0__80026000:
        pSVar56 = (SVECTOR *)&pSVar56[2].vz;
      } while (pSVar56 != (SVECTOR *)puVar72);
      *(uint **)(iVar70 + 0x68) = puVar62;
    }
LAB_overlay0__80026010:
    pSVar56 = ppSVar75[8];
    iVar70 = 0x1f800000;
    if (*(ushort *)((int)ppSVar75 + 0x3e) != 0) {
      DAT_1f800394 = (undefined2)DAT_1f80039c;
      DAT_1f8003b0_b16->_0_2_ = pSVar56->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar56->vy;
      DAT_1f8003ac = pSVar56 + (uint)*(ushort *)((int)ppSVar75 + 0x3e) * 3;
      puVar62 = DAT_1f800068;
      do {
        iVar15 = *(int *)(iVar70 + 0x70);
        uVar58 = *(uint *)(iVar70 + 0x3b0);
        uVar21 = *(uint *)(pSVar56 + 3);
        puVar41 = (undefined4 *)((uVar58 & 0x1ff) * 0x10 + iVar15);
        *(undefined4 **)(iVar70 + 0xe8) = puVar41;
        {
          bitfield_16_t *uVar76_b16 = (bitfield_16_t *)&uVar76;
          uVar76_b16->_0_2_ = pSVar56->vz;
          uVar76_b16->_2_2_ = pSVar56->pad;
        }
        *(uint *)(iVar70 + 0x3b0) = uVar21;
        puVar45 = (undefined4 *)(((int)uVar58 >> 5 & 0x1ff0U) + iVar15);
        *(undefined4 **)(iVar70 + 0xec) = puVar45;
        uVar52 = puVar41[1];
        puVar49 = (undefined4 *)(((int)uVar58 >> 0xe & 0x1ff0U) + iVar15);
        *(undefined4 **)(iVar70 + 0xf0) = puVar49;
        uVar40 = puVar45[1];
        uVar21 = iVar70 + 0xadU & 3;
        puVar17 = (uint *)((iVar70 + 0xadU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar52 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xb7) = (char)uVar52;
        puVar66 = (undefined4 *)((uVar76 & 0x1ff) * 0x10 + iVar15);
        *(undefined4 **)(iVar70 + 0xf4) = puVar66;
        uVar47 = puVar49[1];
        uVar21 = iVar70 + 0xbdU & 3;
        puVar17 = (uint *)((iVar70 + 0xbdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 199) = (char)uVar40;
        uVar51 = puVar66[1];
        uVar21 = iVar70 + 0xcdU & 3;
        puVar17 = (uint *)((iVar70 + 0xcdU) - uVar21);
        *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar47 >> (3 - uVar21) * 8;
        *(char *)(iVar70 + 0xd7) = (char)uVar47;
        uVar21 = uVar52;
        if ((int)uVar52 < (int)uVar40) {
          uVar21 = uVar40;
        }
        iVar15 = *(int *)(iVar70 + 100);
        {
          bitfield_16_t *uVar71_b16 = (bitfield_16_t *)&uVar71;
          uVar71_b16->_0_2_ = pSVar56[1].vx;
          uVar71_b16->_2_2_ = pSVar56[1].vy;
        }
        uVar67 = iVar70 + 0xddU & 3;
        puVar17 = (uint *)((iVar70 + 0xddU) - uVar67);
        *puVar17 = *puVar17 & -1 << (uVar67 + 1) * 8 | uVar51 >> (3 - uVar67) * 8;
        *(char *)(iVar70 + 0xe7) = (char)uVar51;
        uVar16 = puVar41[2];
        gte_ldRGB(uVar71);
        if ((uVar52 & uVar40 & uVar47 & uVar51 & 0x1f) == 0) {
          gte_ldSXY2(uVar16);
          if ((int)uVar21 < (int)uVar47) {
            uVar21 = uVar47;
          }
          uVar73 = puVar49[2];
          gte_ldSXY0(puVar45[2]);
          *(undefined4 *)(iVar70 + 0xc0) = puVar45[2];
          if ((int)uVar21 < (int)uVar51) {
            uVar21 = uVar51;
          }
          iVar20 = ((int)uVar21 >> 0x13) >> (*(ushort *)(iVar70 + 0x9a) & 0x1f);
          uVar24 = puVar66[2];
          gte_ldSXY1(uVar73);
          iVar32 = iVar20 << 2;
          if (0xfff < iVar20) {
            iVar32 = 0x3ffc;
          }
          gte_nclip_b();
          uVar69 = *puVar41;
          iVar32 = iVar15 + (uVar58 >> 0x15 & 0xc0) + iVar32;
          iVar15 = gte_stMAC0();
          gte_ldSXYP(uVar24);
          uVar21 = -iVar15;
          gte_nclip_b();
          {
            bitfield_16_t *uVar39_b16 = (bitfield_16_t *)&uVar39;
            uVar39_b16->_0_2_ = pSVar56[1].vz;
            uVar39_b16->_2_2_ = pSVar56[1].pad;
          }
          gte_ldIR0(0);
          *(undefined4 *)(iVar70 + 0xb0) = uVar16;
          *(undefined4 *)(iVar70 + 0xd0) = uVar73;
          *(undefined4 *)(iVar70 + 0xe0) = uVar24;
          uVar67 = gte_stMAC0();
          {
            bitfield_16_t *uVar30_b16 = (bitfield_16_t *)&uVar30;
            bitfield_16_t *uVar26_b16 = (bitfield_16_t *)&uVar26;
            uVar30_b16->_0_2_ = pSVar56[2].vx;
            uVar30_b16->_2_2_ = pSVar56[2].vy;
          }
          gte_dpcs_b();
          uVar40 = (uVar52 | uVar40 | uVar47 | uVar51) & 0x20;
          {
            bitfield_16_t *uVar26_b16 = (bitfield_16_t *)&uVar26;
            uVar26_b16->_0_2_ = pSVar56[2].vz;
            uVar26_b16->_2_2_ = pSVar56[2].pad;
          }
          if ((uVar21 | uVar67 | uVar40) != 0) {
            uVar52 = gte_stRGB2();
            gte_ldRGB0(uVar39);
            gte_ldRGB1(uVar30);
            uVar73 = *puVar45;
            gte_ldRGB2(uVar26);
            gte_dpct_b();
            uVar16 = *puVar49;
            if (-1 < (int)(uVar21 - 1 & uVar67 - 1 & uVar58 & uVar40 - 0x20)) {
              puVar17 = (uint *)(((int)uVar76 >> 4 & 0x7ffe0U) + *(int *)(iVar70 + 0x3a0));
              uVar24 = *puVar66;
              uVar31 = *(ushort *)(puVar17 + 3);
              *(undefined4 *)(iVar70 + 0xa8) = uVar69;
              *(undefined4 *)(iVar70 + 0xb8) = uVar73;
              *(undefined4 *)(iVar70 + 200) = uVar16;
              uVar21 = uVar21 + uVar67;
              *(undefined4 *)(iVar70 + 0xd8) = uVar24;
              if ((int)uVar21 < 0) {
                uVar21 = -uVar21;
              }
              if (uVar21 <= uVar31) {
                puVar17 = puVar17 + 4;
              }
              uVar51 = *puVar17;
              uVar67 = puVar17[1];
              uVar47 = puVar17[2];
              if (uVar40 != 0) {
                if ((int)uVar58 < 0) {
                  gte_ldR11R12((int)*(short *)(iVar70 + 0xb8));
                  gte_ldR22R23((int)*(short *)(iVar70 + 0xba));
                  uVar40 = (uint)*(short *)(iVar70 + 0xd8);
                  gte_ldR33((int)*(short *)(iVar70 + 0xbc));
                  uVar58 = (uint)*(short *)(iVar70 + 0xda);
                  gte_ldIR1(uVar40);
                  uVar21 = (uint)*(short *)(iVar70 + 0xdc);
                  gte_ldIR2(uVar58);
                  gte_ldIR3(uVar21);
                  gte_ldVXY0(iVar70 + 0xa8);
                  gte_ldVZ0(iVar70 + 0xac);
                  gte_op0_b(0);
                  gte_ldVXY1(iVar70 + 200);
                  gte_ldVZ1(iVar70 + 0xcc);
                  read_mt(uVar21,uVar40,uVar58);
                  gte_ldR11R12((int)uVar21 >> 0x18 & 0xffffU | ((int)uVar40 >> 0x18) << 0x10);
                  gte_ldR13R21((int)uVar58 >> 0x18 & 0xffffU | ((int)uVar21 >> 0xc & 0xfffU) << 0x10
                              );
                  gte_ldR22R23((int)uVar40 >> 0xc & 0xfffU | ((int)uVar58 >> 0xc & 0xfffU) << 0x10);
                  gte_ldR31R32(uVar21 & 0xfff | (uVar40 & 0xfff) << 0x10);
                  gte_ldR33(uVar58 & 0xfff);
                  gte_mvmva_b(0,0,0,3,0);
                  iVar43 = gte_stMAC3();
                  iVar15 = gte_stMAC2();
                  iVar33 = gte_stMAC1();
                  gte_mvmva_b(0,0,1,3,0);
                  iVar48 = gte_stMAC3();
                  iVar20 = gte_stMAC2();
                  iVar38 = gte_stMAC1();
                  gte_ldR11R12(0x1000);
                  gte_ldR13R21(0);
                  gte_ldR22R23(0x1000);
                  gte_ldR31R32(0);
                  gte_ldR33(0x1000);
                  if (-1 < (iVar33 + (iVar15 + (iVar43 >> 0xc) >> 0xc) |
                           -(iVar38 + (iVar20 + (iVar48 >> 0xc) >> 0xc))))
                  goto LAB_overlay0__80026b74;
                }
                gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar70 + 0xe8) + 0xc) |
                                        *(ushort *)(*(int *)(iVar70 + 0xec) + 0xc) |
                                       *(ushort *)(*(int *)(iVar70 + 0xf0) + 0xc) |
                                       *(ushort *)(*(int *)(iVar70 + 0xf4) + 0xc)));
                iVar15 = gte_stLZCR();
                uVar21 = iVar15 - 0x11;
                if (0 < (int)uVar21) {
                  *(short *)(iVar70 + 0xa8) =
                       (short)((int)*(short *)(iVar70 + 0xa8) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xaa) =
                       (short)((int)*(short *)(iVar70 + 0xaa) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xac) =
                       (short)((int)*(short *)(iVar70 + 0xac) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xb8) =
                       (short)((int)*(short *)(iVar70 + 0xb8) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xba) =
                       (short)((int)*(short *)(iVar70 + 0xba) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xbc) =
                       (short)((int)*(short *)(iVar70 + 0xbc) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 200) =
                       (short)((int)*(short *)(iVar70 + 200) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xca) =
                       (short)((int)*(short *)(iVar70 + 0xca) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xcc) =
                       (short)((int)*(short *)(iVar70 + 0xcc) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xd8) =
                       (short)((int)*(short *)(iVar70 + 0xd8) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xda) =
                       (short)((int)*(short *)(iVar70 + 0xda) << (uVar21 & 0x1f));
                  *(short *)(iVar70 + 0xdc) =
                       (short)((int)*(short *)(iVar70 + 0xdc) << (uVar21 & 0x1f));
                }
LAB_overlay0__80026498:
                *(uint **)(iVar70 + 0x68) = puVar62;
                *(SVECTOR **)(iVar70 + 0x3a8) = pSVar56;
                *(int *)(iVar70 + 0x9c) = iVar32;
                *(uint *)(iVar70 + 0xa0) = uVar52;
                iVar15 = gte_stRGB0();
                uVar21 = iVar70 + 0xb6U & 3;
                puVar62 = (uint *)((iVar70 + 0xb6U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | (uVar52 << 8) >> (3 - uVar21) * 8;
                iVar20 = gte_stRGB1();
                uVar21 = iVar70 + 0xc6U & 3;
                puVar62 = (uint *)((iVar70 + 0xc6U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 |
                           (uint)(iVar15 << 8) >> (3 - uVar21) * 8;
                iVar15 = gte_stRGB2();
                uVar21 = iVar70 + 0xd6U & 3;
                puVar62 = (uint *)((iVar70 + 0xd6U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 |
                           (uint)(iVar20 << 8) >> (3 - uVar21) * 8;
                uVar21 = iVar70 + 0xe6U & 3;
                puVar62 = (uint *)((iVar70 + 0xe6U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 |
                           (uint)(iVar15 << 8) >> (3 - uVar21) * 8;
                *(uint *)(iVar70 + 0xa4) = uVar67;
                uVar21 = iVar70 + 0xa5U & 3;
                puVar62 = (uint *)((iVar70 + 0xa5U) - uVar21);
                *puVar62 = *puVar62 & -1 << (uVar21 + 1) * 8 | uVar51 >> (3 - uVar21) * 8;
                *(short *)(iVar70 + 0xae) = (short)uVar51;
                *(short *)(iVar70 + 0xbe) = (short)uVar67;
                *(short *)(iVar70 + 0xce) = (short)uVar47;
                *(short *)(iVar70 + 0xde) = (short)(uVar47 >> 0x10);
                DAT_1f800388 = DAT_1f800068;
                puVar41 = &DAT_1f8000a8;
                iVar15 = 0x1f800000;
                ppuVar60 = &DAT_1f8000e8;
                ppuVar36 = &DAT_1f8000e8;
                pbVar23 = (byte *)((int)&DAT_1f8000b4 + 3);
                do {
                  bVar27 = *pbVar23;
                  *ppuVar36 = puVar41;
                  ppuVar36 = ppuVar36 + 1;
                  if ((bVar27 & 0x20) != 0) {
                    gte_ldVXY0(puVar41);
                    gte_ldVZ0(pbVar23 + -0xb);
                    gte_rtps_b();
                    iVar20 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar20) {
                      *pbVar23 = bVar27 & 0x1f;
                    }
                  }
                  pbVar23 = pbVar23 + 0x10;
                  puVar41 = puVar41 + 4;
                } while (ppuVar36 != (undefined4 **)&DAT_1f8000f8);
                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390.bitfield._0_3_[0] = ((char *)&DAT_1f800388)[0];
                DAT_1f800390.bitfield._0_3_[1] = ((char *)&DAT_1f800388)[1];
                DAT_1f800390.bitfield._0_3_[2] = ((char *)&DAT_1f800388)[2];
                DAT_1f800390.value = CONCAT13(0xc,(char *)DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8002657c:
                pSVar53 = (SVECTOR *)(ppuVar60 + 4);
                puVar49 = *ppuVar60;
                puVar66 = ppuVar60[1];
                puVar61 = ppuVar60[2];
                puVar64 = ppuVar60[3];
                sVar8 = *(short *)puVar49;
                sVar9 = *(short *)puVar66;
                sVar10 = *(short *)puVar61;
                iVar32 = (int)sVar8 + (int)sVar9;
                *(short *)(ppuVar60 + 8) = (short)(iVar32 >> 1);
                sVar11 = *(short *)puVar64;
                *(short *)(ppuVar60 + 0xc) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar20 = (int)sVar10 + (int)sVar11;
                *(short *)(ppuVar60 + 0x10) = (short)(iVar20 >> 1);
                *(short *)(ppuVar60 + 0x14) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)(ppuVar60 + 4) = (short)(iVar32 + iVar20 >> 2);
                sVar8 = *(short *)((int)puVar49 + 2);
                sVar9 = *(short *)((int)puVar66 + 2);
                sVar10 = *(short *)((int)puVar61 + 2);
                iVar32 = (int)sVar8 + (int)sVar9;
                *(short *)((int)ppuVar60 + 0x22) = (short)(iVar32 >> 1);
                sVar11 = *(short *)((int)puVar64 + 2);
                *(short *)((int)ppuVar60 + 0x32) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar20 = (int)sVar10 + (int)sVar11;
                *(short *)((int)ppuVar60 + 0x42) = (short)(iVar20 >> 1);
                *(short *)((int)ppuVar60 + 0x52) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)((int)ppuVar60 + 0x12) = (short)(iVar32 + iVar20 >> 2);
                sVar8 = *(short *)(puVar49 + 1);
                sVar9 = *(short *)(puVar66 + 1);
                sVar10 = *(short *)(puVar61 + 1);
                iVar32 = (int)sVar8 + (int)sVar9;
                *(short *)(ppuVar60 + 9) = (short)(iVar32 >> 1);
                sVar11 = *(short *)(puVar64 + 1);
                *(short *)(ppuVar60 + 0xd) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar20 = (int)sVar10 + (int)sVar11;
                *(short *)(ppuVar60 + 0x11) = (short)(iVar20 >> 1);
                *(short *)(ppuVar60 + 0x15) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)(ppuVar60 + 5) = (short)(iVar32 + iVar20 >> 2);
                uVar47 = puVar49[3];
                uVar21 = puVar66[3];
                uVar40 = puVar61[3];
                puVar45 = (undefined4 *)((int)((uVar47 & 0xfefefe) + (uVar21 & 0xfefefe)) >> 1);
                ppuVar60[0xb] = puVar45;
                uVar52 = puVar64[3];
                ppuVar60[0xf] =
                     (undefined4 *)((int)((uVar21 & 0xfefefe) + (uVar40 & 0xfefefe)) >> 1);
                puVar41 = (undefined4 *)((int)((uVar40 & 0xfefefe) + (uVar52 & 0xfefefe)) >> 1);
                ppuVar60[0x13] = puVar41;
                ppuVar60[0x17] =
                     (undefined4 *)((int)((uVar52 & 0xfefefe) + (uVar47 & 0xfefefe)) >> 1);
                ppuVar60[7] = (undefined4 *)
                              ((int)(((uint)puVar45 & 0xfefefe) + ((uint)puVar41 & 0xfefefe)) >> 1);
                gte_ldv0(pSVar53);
                gte_rtps_b();
                bVar27 = *(byte *)((int)puVar49 + 6);
                bVar1 = *(byte *)((int)puVar66 + 6);
                bVar2 = *(byte *)((int)puVar61 + 6);
                iVar32 = (uint)bVar27 + (uint)bVar1;
                *(char *)&pSVar53[2].pad = (char)(iVar32 >> 1);
                bVar3 = *(byte *)((int)puVar64 + 6);
                *(char *)&pSVar53[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)&pSVar53[6].pad = (char)(iVar20 >> 1);
                *(char *)&pSVar53[8].pad = (char)((int)((uint)bVar3 + (uint)bVar27) >> 1);
                *(char *)&pSVar53->pad = (char)(iVar32 + iVar20 >> 2);
                bVar27 = *(byte *)((int)puVar49 + 7);
                bVar1 = *(byte *)((int)puVar66 + 7);
                bVar2 = *(byte *)((int)puVar61 + 7);
                iVar32 = (uint)bVar27 + (uint)bVar1;
                *(char *)((int)&pSVar53[2].pad + 1) = (char)(iVar32 >> 1);
                bVar3 = *(byte *)((int)puVar64 + 7);
                *(char *)((int)&pSVar53[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar20 = (uint)bVar2 + (uint)bVar3;
                *(char *)((int)&pSVar53[6].pad + 1) = (char)(iVar20 >> 1);
                *(char *)((int)&pSVar53[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar27) >> 1)
                ;
                *(char *)((int)&pSVar53->pad + 1) = (char)(iVar32 + iVar20 >> 2);
                uVar31 = *(ushort *)(iVar15 + 0x62);
                uVar12 = *(ushort *)(iVar15 + 0x5e);
                uVar13 = *(ushort *)(iVar15 + 0x60);
                pSVar56 = pSVar53;
                do {
                  iVar32 = gte_stFLAG();
                  gte_ldVXY0(pSVar56 + 2);
                  gte_ldVZ0(&pSVar56[2].vz);
                  gte_stSXY2();
                  iVar20 = gte_stIR3();
                  gte_rtps_b();
                  bVar27 = iVar20 < (int)(uint)uVar31;
                  if (pSVar56[1].vx < 0) {
                    bVar27 = bVar27 | 2;
                  }
                  bVar27 = bVar27 | ((int)(uVar12 - 1) < (int)pSVar56[1].vx) << 2;
                  if (pSVar56[1].vy < 0) {
                    bVar27 = bVar27 | 8;
                  }
                  bVar27 = bVar27 | ((int)(uVar13 - 1) < (int)pSVar56[1].vy) << 4;
                  if (iVar32 < 0) {
                    bVar27 = bVar27 | 0x20;
                  }
                  pSVar57 = pSVar56 + 2;
                  *(byte *)((int)&pSVar56[1].pad + 1) = bVar27;
                  pSVar56 = pSVar57;
                } while (pSVar57 != pSVar53 + 10);
                piVar37 = *(int **)(iVar15 + 0x68);
                cVar5 = *(char *)(iVar15 + 0xa3);
                uVar21 = iVar15 + 0xa5U & 3;
                uVar52 = *(int *)((iVar15 + 0xa5U) - uVar21) << (3 - uVar21) * 8 |
                         (uint)pSVar57 & 0xffffffffU >> (uVar21 + 1) * 8;
                uVar40 = *(uint *)(iVar15 + 0xa4);
                ppuVar36 = ppuVar60 + 3;
                uVar21 = 2;
                iVar20 = 3;
                do {
                  uVar21 = uVar21 & 3;
                  puVar41 = *ppuVar36;
                  puVar45 = ppuVar60[uVar21];
                  bVar27 = *(byte *)((int)puVar41 + 0xf) |
                           *(byte *)((int)ppuVar60 + uVar21 * 0x10 + 0x2f) |
                           *(byte *)((int)puVar45 + 0xf);
                  if ((bVar27 & 0x20) == 0) {
                    gte_ldSXY0(puVar41 + 2);
                    gte_ldSXY1(ppuVar60 + uVar21 * 4 + 10);
                    gte_ldSXY2(puVar45 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();
                    uVar47 = (uint)(short *)((int)puVar41 + 6U) & 3;
                    uVar52 = uVar52 & -1 << (4 - uVar47) * 8 |
                             *(uint *)((int)(short *)((int)puVar41 + 6U) - uVar47) >> uVar47 * 8;
                    uVar47 = (int)ppuVar60 + uVar21 * 0x10 + 0x26;
                    uVar51 = uVar47 & 3;
                    uVar40 = uVar40 & -1 << (4 - uVar51) * 8 |
                             *(uint *)(uVar47 - uVar51) >> uVar51 * 8;
                    piVar37[3] = uVar52;
                    uVar47 = (uint)(short *)((int)puVar45 + 6U) & 3;
                    uVar51 = *(uint *)((int)(short *)((int)puVar45 + 6U) - uVar47);
                    piVar37[6] = uVar40;
                    piVar37[9] = bVar27 & 0x20 & -1 << (4 - uVar47) * 8 | uVar51 >> uVar47 * 8;
                    *piVar37 = (int)(piVar37 + -0x1dbffff6);
                    iVar32 = gte_stMAC0();
                    gte_stSXY2();
                    if (iVar32 != 0) {
                      puVar49 = ppuVar60[uVar21 * 4 + 0xb];
                      piVar37[1] = puVar41[3];
                      iVar32 = puVar45[3];
                      piVar37[4] = (int)puVar49;
                      piVar37[7] = iVar32;
                      *(char *)((int)piVar37 + 7) = cVar5 + -8;
                      *(int **)(iVar15 + 0x38c) = piVar37;
                      piVar37 = piVar37 + 10;
                    }
                  }
                  ppuVar36 = ppuVar36 + -1;
                  iVar32 = iVar20 + -1;
                  *(int **)(iVar15 + 0x68) = piVar37;
                  uVar21 = iVar20 - 2;
                  iVar20 = iVar32;
                } while (-1 < iVar32);
                uVar21 = 3;
                if (*(uint *)(iVar15 + 0x68) <= *(uint *)(iVar15 + 0x6c)) {
                  uVar40 = 2;
                  ppuVar36 = ppuVar60;
                  do {
                    ppuVar63 = ppuVar36 + uVar21 * 4 + 8;
                    ppuVar55 = ppuVar36 + (uVar40 & 3) * 4 + 8;
                    puVar41 = ppuVar36[uVar21];
                    uVar40 = uVar21;
                    if ((*(byte *)((int)puVar41 + 0xf) & *(byte *)((int)ppuVar63 + 0xf) &
                         *(byte *)((int)ppuVar36 + 0x1f) & *(byte *)((int)ppuVar55 + 0xf) & 0x1f) ==
                        0) {
                      if (((*(byte *)((int)puVar41 + 0xf) | *(byte *)((int)ppuVar63 + 0xf) |
                            *(byte *)((int)ppuVar36 + 0x1f) | *(byte *)((int)ppuVar55 + 0xf)) & 0x20
                          ) == 0) {
                        piVar37 = *(int **)(iVar15 + 0x68);
                        gte_ldSXY0(ppuVar63 + 2);
                        gte_ldSXY1(puVar41 + 2);
                        gte_ldSXY2(ppuVar36 + 6);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();
                        puVar45 = ppuVar63[3];
                        piVar37[1] = puVar41[3];
                        puVar49 = ppuVar36[7];
                        piVar37[4] = (int)puVar45;
                        puVar45 = ppuVar55[3];
                        piVar37[10] = (int)puVar49;
                        piVar37[7] = (int)puVar45;
                        iVar32 = gte_stMAC0();
                        gte_ldSXY0(ppuVar55 + 2);
                        uVar52 = iVar15 + 0xa5U & 3;
                        uVar19 = *(uint *)(iVar15 + 0xa4);
                        gte_nclip_b();
                        uVar47 = (uint)(short *)((int)puVar41 + 6U) & 3;
                        uVar67 = (*(int *)((iVar15 + 0xa5U) - uVar52) << (3 - uVar52) * 8 |
                                 (uint)puVar45 & 0xffffffffU >> (uVar52 + 1) * 8) &
                                 -1 << (4 - uVar47) * 8 |
                                 *(uint *)((int)(short *)((int)puVar41 + 6U) - uVar47) >> uVar47 * 8
                        ;
                        uVar52 = (uint)(short *)((int)ppuVar63 + 6U) & 3;
                        uVar51 = *(uint *)((int)(short *)((int)ppuVar63 + 6U) - uVar52);
                        piVar37[3] = uVar67;
                        uVar47 = (int)ppuVar36 + 0x16U & 3;
                        uVar58 = *(uint *)(((int)ppuVar36 + 0x16U) - uVar47);
                        piVar37[6] = uVar19 & -1 << (4 - uVar52) * 8 | uVar51 >> uVar52 * 8;
                        uVar52 = (uint)(short *)((int)ppuVar55 + 6U) & 3;
                        uVar51 = *(uint *)((int)(short *)((int)ppuVar55 + 6U) - uVar52);
                        piVar37[0xc] = (uint)puVar49 & -1 << (4 - uVar47) * 8 | uVar58 >> uVar47 * 8
                        ;
                        piVar37[9] = uVar67 & -1 << (4 - uVar52) * 8 | uVar51 >> uVar52 * 8;
                        iVar20 = gte_stMAC0();
                        uVar52 = iVar32 - iVar20;
                        gte_stSXY0();
                        if ((int)uVar52 < 0) {
                          uVar52 = -uVar52;
                        }
                        gte_stSXY2();
                        if (uVar52 <= *(ushort *)(iVar15 + 0x394)) {
                          uVar4 = *(undefined *)(iVar15 + 0xa3);
                          *piVar37 = (int)(piVar37 + -0x1cfffff3);
                          *(undefined *)((int)piVar37 + 7) = uVar4;
                          *(int **)(iVar15 + 0x38c) = piVar37;
                          *(int **)(iVar15 + 0x68) = piVar37 + 0xd;
                          goto LAB_overlay0__80026a94;
                        }
                      }
                      if (ppuVar36 != (undefined4 **)(iVar15 + 0x328)) goto code_r0x80026a60;
                    }
LAB_overlay0__80026a94:
                    while( true ) {
                      uVar21 = uVar40 - 1;
                      uVar40 = uVar40 - 2;
                      if (-1 < (int)uVar21) break;
                      if (ppuVar36 == (undefined4 **)(iVar15 + 0xe8)) {
                        uVar21 = *(uint *)(iVar15 + 0x388);
                        if (*(uint *)(iVar15 + 0x6c) < *(uint *)(iVar15 + 0x68)) {
                          *(uint *)(iVar15 + 0x68) = uVar21;
                        }
                        else if (*(uint *)(iVar15 + 0x68) != uVar21) {
                          iVar32 = *(int *)(iVar15 + 0x38c);
                          uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                          uVar52 = uVar40 & 3;
                          iVar20 = *(int *)(uVar40 - uVar52);
                          uVar40 = *(int *)(iVar15 + 0x9c) + 2;
                          uVar47 = uVar40 & 3;
                          puVar62 = (uint *)(uVar40 - uVar47);
                          *puVar62 = *puVar62 & -1 << (uVar47 + 1) * 8 |
                                     (uVar21 << 8) >> (3 - uVar47) * 8;
                          uVar21 = iVar32 + 2;
                          uVar40 = uVar21 & 3;
                          puVar62 = (uint *)(uVar21 - uVar40);
                          *puVar62 = *puVar62 & -1 << (uVar40 + 1) * 8 |
                                     (uint)(iVar20 << (3 - uVar52) * 8) >> (3 - uVar40) * 8;
                        }
                        goto LAB_overlay0__80026af4;
                      }
                      pbVar23 = (byte *)((int)ppuVar36 + -0x41);
                      ppuVar36 = ppuVar36 + -0x18;
                      uVar40 = (uint)(*pbVar23 >> 6);
                    }
                  } while( true );
                }
                *(undefined4 *)(iVar15 + 0x68) = *(undefined4 *)(iVar15 + 0x388);
LAB_overlay0__80026af4:
                puVar62 = *(uint **)(iVar70 + 0x68);
                pSVar56 = *(SVECTOR **)(iVar70 + 0x3a8);
                if (*(uint **)(iVar70 + 0x6c) <= puVar62) {
                  *(uint **)(iVar70 + 0x68) = puVar62;
                  return;
                }
                goto LAB_overlay0__80026b74;
              }
              if (*(int *)(iVar70 + 0x39c) < (int)uVar21) goto LAB_overlay0__80026498;
              puVar18 = *(uint **)(iVar70 + 0x6c);
              uVar21 = iVar32 + 2U & 3;
              iVar15 = *(int *)((iVar32 + 2U) - uVar21);
              puVar62[1] = uVar52;
              bVar14 = puVar18 < puVar62;
              puVar62[3] = uVar51;
              puVar62[6] = uVar67;
              puVar62[0xc] = uVar47;
              uVar40 = (int)puVar62 + 0x25U & 3;
              puVar18 = (uint *)(((int)puVar62 + 0x25U) - uVar40);
              *puVar18 = *puVar18 & -1 << (uVar40 + 1) * 8 | uVar47 >> (3 - uVar40) * 8;
              gte_stRGB0();
              gte_stRGB1();
              gte_stRGB2();
              gte_stSXY0();
              gte_stSXY1();
              puVar62[5] = *(uint *)(iVar70 + 0xc0);
              gte_stSXY2();
              uVar40 = (int)puVar62 << 8;
              *puVar62 = (iVar15 << (3 - uVar21) * 8 |
                         (uint)puVar17 & 0xffffffffU >> (uVar21 + 1) * 8) >> 8 | 0xc000000;
              puVar62 = puVar62 + 0xd;
              uVar21 = iVar32 + 2U & 3;
              puVar17 = (uint *)((iVar32 + 2U) - uVar21);
              *puVar17 = *puVar17 & -1 << (uVar21 + 1) * 8 | uVar40 >> (3 - uVar21) * 8;
              if (bVar14) break;
            }
          }
        }
LAB_overlay0__80026b74:
        pSVar56 = pSVar56 + 3;
      } while (pSVar56 != *(SVECTOR **)(iVar70 + 0x3ac));
      *(uint **)(iVar70 + 0x68) = puVar62;
    }
  }
  return;
LAB_overlay0__80024754:
  *(char *)(ppuVar36 + 7) = (char)uVar21;
  ppuVar60 = ppuVar36 + 0x18;
  *ppuVar60 = ppuVar63;
  ppuVar36[0x19] = ppuVar55;
  ppuVar36[0x1a] = ppuVar46;
  goto LAB_overlay0__80024840;
code_r0x800255d4:
  *(char *)(ppuVar36 + 7) = (char)uVar21;
  ppuVar60 = ppuVar36 + 0x18;
  if ((uVar21 & 1) == 0) {
    *ppuVar60 = puVar41;
    ppuVar36[0x19] = ppuVar63;
    ppuVar36[0x1a] = ppuVar36 + 4;
    ppuVar36[0x1b] = ppuVar55;
  }
  else {
    *ppuVar60 = ppuVar55;
    ppuVar36[0x19] = puVar41;
    ppuVar36[0x1a] = ppuVar63;
    ppuVar36[0x1b] = ppuVar36 + 4;
  }
  goto LAB_overlay0__800251b8;
LAB_overlay0__80025a10:
  *(byte *)((int)ppuVar36 + 0x1f) = *(byte *)((int)ppuVar36 + 0x1f) & 0x3f | (byte)(uVar21 << 6);
  ppuVar60 = ppuVar36 + 0x18;
  *ppuVar60 = ppuVar63;
  ppuVar36[0x19] = ppuVar55;
  ppuVar36[0x1a] = ppuVar46;
  goto LAB_overlay0__80025b2c;
code_r0x80026a60:
  uVar21 = *(byte *)((int)ppuVar36 + 0x1f) & 0x3f | uVar21 << 6;
  *(char *)((int)ppuVar36 + 0x1f) = (char)uVar21;
  ppuVar60 = ppuVar36 + 0x18;
  if (uVar21 == 0) {
    *ppuVar60 = puVar41;
    ppuVar36[0x19] = ppuVar63;
    ppuVar36[0x1a] = ppuVar36 + 4;
    ppuVar36[0x1b] = ppuVar55;
  }
  else {
    *ppuVar60 = ppuVar55;
    ppuVar36[0x19] = puVar41;
    ppuVar36[0x1a] = ppuVar63;
    ppuVar36[0x1b] = ppuVar36 + 4;
  }

  goto LAB_overlay0__8002657c;
}
