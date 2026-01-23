// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_015.h"
#include <stdint.h>
#include <stddef.h>

// Forward declarations for GTE functions
void gte_ldv0(SVECTOR *vector);
void gte_rtps_b(void);
int gte_stIR1(void);
int gte_stIR2(void);
int gte_stIR3(void);
int gte_stFLAG(void);
undefined4 gte_stSXY2(void);
void gte_llir_b(void);
void gte_ldVXY1(uint value);
void gte_ldVZ1(uint value);
void gte_lcv1_b(void);
void gte_ldVXY0(uint value);
void gte_ldVZ0(uint value);
void gte_ldtr(int x, int y, int z);
void gte_ldR11R12(int value);
void gte_ldR13R21(int value);
void gte_ldR22R23(int value);
void gte_ldR31R32(int value);
void gte_ldR33(int value);
void gte_ldSXY0(undefined4 value);
void gte_ldSXY1(undefined4 value);
void gte_ldSXY2(undefined4 value);
void gte_nclip_b(void);
int gte_stMAC0(void);
void gte_ldIR0(int value);
void gte_ldRGB(bitfield_16_t value);
void gte_dpcs(void);
uint gte_stRGB2(void);
void gte_stSXY0(void);
void gte_stSXY1(void);
void gte_ldIR1(int value);
void gte_ldIR2(int value);
void gte_ldIR3(int value);
void gte_op0_b(int value);
int gte_stMAC1(void);
int gte_stMAC2(void);
int gte_stMAC3(void);
void gte_ldSXYP(undefined4 value);
void gte_dpcs_b(void);
void gte_ldRGB0(bitfield_16_t value);
void gte_ldRGB1(bitfield_16_t value);
void gte_ldRGB2(bitfield_16_t value);
void gte_dpct(void);
void gte_dpct_b(void);
void gte_strgb3_g3(uint *buffer);
void gte_strgb3_gt3(uint *buffer);
void gte_stRGB0(void);
void gte_stRGB1(void);
void gte_ldVXY0(uint address);
void gte_ldVZ0(uint address);
void gte_ldVXY1(uint address);
void gte_ldVZ1(uint address);
void gte_mvmva_b(int mx, int v, int cv, int lm, int sf);
int gte_stMAC3(void);
void read_mt(uint x, uint y, uint z);
void FUN_80081580(uint renderData, int renderFlags, ...);
void FUN_8007bcd0(uint audioData, int vertexCount, ...);

void FUN_overlay0__8001c17c(SVECTOR **param_1,uint param_2,uint param_3)

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
  undefined4 uVar15;
  uint *puVar16;
  int in_v1;
  union { bitfield_16_t b16; uint value; } uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  union { bitfield_16_t b16; uint value; } uVar21;
  byte *pbVar22;
  undefined4 uVar23;
  union { bitfield_16_t b16; uint value; } uVar24;
  union { bitfield_16_t b16; uint value; } uVar25;
  byte bVar26;
  union { bitfield_16_t b16; uint value; } uVar27;
  union { bitfield_16_t b16; uint value; } uVar28;
  union { bitfield_16_t b16; uint value; } uVar29;
  ushort uVar30;
  int iVar31;
  int iVar32;
  union { bitfield_16_t b16; uint value; } uVar33;
  union { bitfield_16_t b16; uint value; } uVar34;
  undefined4 **ppuVar35;
  int *piVar36;
  int iVar37;
  union { bitfield_16_t b16; uint value; } uVar38;
  union { bitfield_16_t b16; uint value; } uVar39;
  undefined4 *puVar40;
  uint *puVar41;
  undefined2 *puVar42;
  int iVar43;
  undefined4 *puVar44;
  undefined4 **ppuVar45;
  union { bitfield_16_t b16; uint value; } uVar46;
  union { bitfield_16_t b16; uint value; } uVar47;
  union { bitfield_16_t b16; uint value; } uVar48;
  uint in_t0;
  uint uVar49;
  int iVar50;
  union { bitfield_16_t b16; uint value; } uVar51;
  undefined4 *puVar52;
  union { bitfield_16_t b16; uint value; } uVar53;
  union { bitfield_16_t b16; uint value; } uVar54;
  union { bitfield_16_t b16; uint value; } uVar55;
  uint in_t1;
  union { bitfield_16_t b16; uint value; } uVar56;
  uint uVar57;
  uint uVar58;
  SVECTOR *pSVar59;
  SVECTOR *pSVar60;
  union { bitfield_16_t b16; uint value; } uVar61;
  union { bitfield_16_t b16; uint value; } uVar62;
  SVECTOR *pSVar63;
  undefined4 **ppuVar64;
  SVECTOR *pSVar65;
  union { bitfield_16_t b16; uint value; } uVar66;
  union { bitfield_16_t b16; uint value; } uVar67;
  undefined4 **ppuVar68;
  union { bitfield_16_t b16; uint value; } uVar69;
  undefined4 *puVar70;
  int in_t3;
  uint *puVar71;
  undefined4 **ppuVar72;
  undefined4 *puVar73;
  int in_t4;
  union { bitfield_16_t b16; uint value; } uVar74;
  union { bitfield_16_t b16; uint value; } uVar75;
  SVECTOR *pSVar76;
  undefined4 in_t6;
  union { bitfield_16_t b16; uint value; } uVar77;
  int in_t7;
  union { bitfield_16_t b16; uint value; } uVar78;
  undefined4 *puVar79;
  union { bitfield_16_t b16; uint value; } uVar80;
  int iVar81;
  union { bitfield_16_t b16; uint value; } uVar82;
  union { bitfield_16_t b16; uint value; } uVar83;
  undefined *puVar84;
  undefined4 uVar85;
  union { bitfield_16_t b16; uint value; } uVar86;
  union { bitfield_16_t b16; uint value; } uVar87;
  union { bitfield_16_t b16; uint value; } uVar88;
  SVECTOR **ppSVar89;
  union { bitfield_16_t b16; uint value; } uVar90;
  undefined2 local_4030 [8];
  undefined auStack_4020 [16384];

  // Additional variable declarations
  undefined2 *outputBuffer;
  undefined2 *localBuffer;
  SVECTOR **vectorArray;
  undefined *stackBuffer;
  int loopCounter;
  SVECTOR *endVector;
  SVECTOR **vectorArrayPtr;
  SVECTOR *vectorIterator;
  bitfield_16_t tempVectorData;
  ushort screenFlags;
  uint transformFlags;
  int gteResult1;
  int gteResult2;
  int gteResult3;
  int gteResult4;
  int gteResult5;
  int gteResult6;
  int gteResult7;
  uint renderParams;
  bitfield_16_t tempData11;
  SVECTOR *currentVector;
  undefined *tempUndefinedPtr1;
  uint tempUInt15;
  uint tempUInt10;
  uint tempUInt14;
  uint tempUInt18;
  uint tempUInt2;
  uint tempUInt6;
  uint tempUInt16;
  uint tempUInt22;
  uint tempUInt21;
  uint tempUInt1;
  uint tempUInt4;
  int tempInt1;
  int tempInt2;
  int tempInt3;
  int tempInt6;
  int tempInt7;
  bitfield_16_t tempData2;
  bool tempBool1;
  uint *tempUIntPtr3;
  bitfield_16_t *DAT_1f8000a8_b16;
  bitfield_16_t *DAT_1f8000ac_b16;
  bitfield_16_t *DAT_1f8000bc_b16;
  bitfield_16_t *DAT_1f8000b8_b16;
  bitfield_16_t *DAT_1f8000c8_b16;
  bitfield_16_t *DAT_1f8000cc_b16;
  bitfield_16_t *DAT_1f8000dc_b16;
  bitfield_16_t DAT_1f8000da;
  SVECTOR *_DAT_1f8003ac;
  bitfield_16_t *DAT_1f8003b0_b16;
  uint *DAT_1f8000f4_ptr;
  uint *DAT_1f8000e0_ptr;

  // Cast globals to bitfield_16_t pointers for structure access
  DAT_1f8000a8_b16 = (bitfield_16_t *)&DAT_1f8000a8;
  DAT_1f8000ac_b16 = (bitfield_16_t *)&DAT_1f8000ac;
  DAT_1f8000bc_b16 = (bitfield_16_t *)&DAT_1f8000bc;
  DAT_1f8000b8_b16 = (bitfield_16_t *)&DAT_1f8000b8;
  DAT_1f8000c8_b16 = (bitfield_16_t *)&DAT_1f8000c8;
  DAT_1f8000cc_b16 = (bitfield_16_t *)&DAT_1f8000cc;
  DAT_1f8000dc_b16 = (bitfield_16_t *)&DAT_1f8000dc;
  DAT_1f8003b0_b16 = (bitfield_16_t *)&DAT_1f8003b0;
  _DAT_1f8003ac = (SVECTOR *)&DAT_1f8003ac;

  outputBuffer = local_4030;
  localBuffer = local_4030;
  vectorArray = param_1;
  stackBuffer = auStack_4020;

  if (*(short *)(vectorArray + 0xb) != 0) {

    vectorIterator = *vectorArray;

    DAT_1f800070 = (undefined4)(uintptr_t)stackBuffer;

    loopCounter = 1;

    endVector = vectorIterator + *(ushort *)(vectorArray + 0xb) + 1;

    vectorArrayPtr = vectorArray;

    gte_ldv0(vectorIterator);

    tempVectorData._0_2_ = vectorIterator[1].vz;
    tempVectorData._2_2_ = vectorIterator[1].pad;

    gte_rtps_b();

    do {

      screenFlags = (ushort)transformFlags;

      *outputBuffer = (short)gteResult2;

      if ((int)gteResult2 < 0) {
        gteResult2 = -gteResult2;
      }

      if (gteResult1 < 0) {
        screenFlags = screenFlags | 2;
      }

      outputBuffer[1] = (short)gteResult3;

      if ((int)gteResult3 < 0) {
        gteResult3 = -gteResult3;
      }

      if (gteResult5 < 0) {
        screenFlags = screenFlags | 4;
      }

      outputBuffer[3] = (short)renderParams;

      if ((int)renderParams < 0) {
        renderParams = -renderParams;
      }

      if ((int)vectorArray < 0) {
        screenFlags = screenFlags | 8;
      }

      *(uint *)(outputBuffer + 6) = gteResult2 | gteResult3 | renderParams;

      if (gteResult4 < 0) {
        screenFlags = screenFlags | 0x10;
      }

      *(undefined4 *)(outputBuffer + 4) = gteResult6;

      if (gteResult7 < 0) {
        screenFlags = screenFlags | 0x20;
      }

      gteResult2 = gte_stIR1();
      gteResult3 = gte_stIR2();
      renderParams = gte_stIR3();
      gteResult7 = gte_stFLAG();
      gteResult6 = (int)gte_stSXY2();

      gte_llir_b();

      tempData11._0_2_ = vectorIterator[1].vx;
      tempData11._2_2_ = vectorIterator[1].vy;

      gte_ldVXY1(gteResult2 & 0xffff | gteResult3 << 0x10);

      gte_ldVZ1(renderParams);

      gteResult1 = gte_stIR1();
      gteResult5 = gte_stIR2();

      gte_lcv1_b();

      outputBuffer[2] = screenFlags;

      gte_ldVXY0((uint)(tempData11._0_2_ | (tempData11._2_2_ << 16)));
      gte_ldVZ0((uint)(tempVectorData._0_2_ | (tempVectorData._2_2_ << 16)));

      currentVector = vectorIterator + 1;

      outputBuffer = outputBuffer + 8;

      tempVectorData._0_2_ = vectorIterator[2].vz;
      tempVectorData._2_2_ = vectorIterator[2].pad;

      vectorArray = (SVECTOR **)gte_stIR1();
      gteResult4 = gte_stIR2();

      gte_rtps_b();

      transformFlags = (uint)((int)renderParams < loopCounter);

      vectorIterator = currentVector;
    } while (currentVector != endVector);

    gte_ldtr(0,0,0);
    gte_ldR11R12(0x1000);
    gte_ldR13R21(0);
    gte_ldR22R23(0x1000);
    gte_ldR31R32(0);
    gte_ldR33(0x1000);

    vectorIterator = vectorArrayPtr[1];

    if (*(ushort *)(vectorArrayPtr + 0xc) != 0) {

      tempUndefinedPtr1 = (undefined *)((int)vectorIterator + (uint)*(ushort *)(vectorArrayPtr + 0xc) * 0xc);

      do {

        tempUInt15 = (uint)((ushort)vectorIterator->vx | ((ushort)vectorIterator->vy << 16));

        DAT_1f8000e8 = (undefined4 *)((uintptr_t)DAT_1f800070 + (tempUInt15 & 0x3ff) * 0x10);
        DAT_1f8000ec = (uint *)((uintptr_t)DAT_1f800070 + ((int)tempUInt15 >> 6 & 0x3ff0));
        DAT_1f8000f0 = (uint *)((uintptr_t)DAT_1f800070 + ((int)tempUInt15 >> 0x10 & 0x3ff0));

        tempUInt10 = DAT_1f8000e8[1];
        tempUInt14 = DAT_1f8000ec[1];
        tempUInt18 = DAT_1f8000f0[1];

        tempUInt2 = DAT_1f8000ac & 0xffff0000 | tempUInt10 >> 0x10;
        DAT_1f8000b4.value = CONCAT13((char)tempUInt10,(undefined3 *)&DAT_1f8000b4.bytes._1_1_);
        tempUInt6 = DAT_1f8000bc & 0xffff0000 | tempUInt14 >> 0x10;
        DAT_1f8000c4.bytes._3_1_ = (undefined)tempUInt14;
        tempUInt16 = DAT_1f8000cc & 0xffff0000 | tempUInt18 >> 0x10;
        DAT_1f8000d4.bytes._3_1_ = (undefined)tempUInt18;

        if ((tempUInt10 & tempUInt14 & tempUInt18 & 0x1f) == 0) {

          gte_ldSXY0(DAT_1f8000e8[2]);
          gte_ldSXY1(DAT_1f8000f0[2]);
          gte_ldSXY2(DAT_1f8000ec[2]);

          tempUInt22 = tempUInt10 | tempUInt14 | tempUInt18;

          gte_nclip_b();

          tempUInt1 = gte_stMAC0();

          tempUInt21 = tempUInt22 & 0x20;

          if (((tempUInt1 | tempUInt21) != 0) && (-1 < (int)(tempUInt1 & tempUInt15 & tempUInt21 - 0x20))) {

            tempUInt4 = tempUInt15 >> 0x1e & 1;

            tempUInt1 = tempUInt10;
            if ((int)tempUInt10 < (int)tempUInt14 == tempUInt4) {
              tempUInt1 = tempUInt14;
            }
            if ((int)tempUInt1 < (int)tempUInt18 == tempUInt4) {
              tempUInt1 = tempUInt18;
            }

            loopCounter = (((int)tempUInt1 >> 0x10) << (DAT_1f800098 & 0x1f)) >> 0xd;
            if (loopCounter < 0) {
              loopCounter = 0;
            }
            loopCounter = loopCounter + (-tempUInt4 & 0x60);

            tempInt1 = loopCounter * 4;
            if (0xfff < loopCounter) {
              tempInt1 = 0x3ffc;
            }
            tempInt1 = DAT_1f800064 + tempInt1;

            tempData2._0_2_ = vectorIterator[1].vx;
            tempData2._2_2_ = vectorIterator[1].vy;

            gte_ldIR0(0);
            gte_ldRGB(tempData2);
            gte_dpcs();

            tempVectorData = *(bitfield_16_t *)DAT_1f8000e8;

            tempUInt1 = *DAT_1f8000ec;
            tempUInt4 = *DAT_1f8000f0;

            DAT_1f8000bc_b16->_0_2_ = (short)(tempUInt14 >> 0x10);
            DAT_1f8000cc_b16->_0_2_ = (short)(tempUInt18 >> 0x10);
            DAT_1f8000ac_b16->_0_2_ = (short)(tempUInt10 >> 0x10);
            DAT_1f8000a8 = *(undefined4 *)&tempVectorData;
            DAT_1f8000b8 = tempUInt1;
            DAT_1f8000c8 = (uint *)(uintptr_t)tempUInt4;

            if ((tempUInt21 != 0) && ((int)tempUInt15 < 0)) {

              DAT_1f8000b8_b16->_0_2_ = (short)tempUInt1;
              DAT_1f8000b8_b16->_2_2_ = (short)(tempUInt1 >> 0x10);

              gte_ldR11R12((int)(short)DAT_1f8000b8);
              gte_ldR22R23((int)DAT_1f8000b8_b16->_2_2_);

              DAT_1f8000c8_b16->_0_2_ = (short)tempUInt4;
              gte_ldR33((int)(short)DAT_1f8000bc);
              DAT_1f8000c8_b16->_2_2_ = (short)(tempUInt4 >> 0x10);

              gte_ldIR1((int)(short)DAT_1f8000c8);
              gte_ldIR2((int)DAT_1f8000c8_b16->_2_2_);
              gte_ldIR3((int)(short)DAT_1f8000cc);

              DAT_1f8000a8_b16->_0_2_ = (short)*(undefined4 *)&tempVectorData;
              loopCounter = (int)(short)DAT_1f8000a8;
              DAT_1f8000a8_b16->_2_2_ = (short)((uint)*(undefined4 *)&tempVectorData >> 0x10);
              tempInt3 = (int)DAT_1f8000a8_b16->_2_2_;

              gte_op0_b(0);

              tempInt2 = gte_stMAC1();
              tempInt6 = gte_stMAC2();
              tempInt7 = gte_stMAC3();

              gte_ldR11R12(0x1000);
              gte_ldR22R23(0x1000);
              gte_ldR33(0x1000);

              if (-1 < (longlong)(int)(short)DAT_1f8000ac * (longlong)tempInt7 +
                       (longlong)loopCounter * (longlong)tempInt2 + (longlong)tempInt3 * (longlong)tempInt6)
              goto LAB_overlay0__8001c5bc;
            }

            if ((tempUInt22 & 0x3f) == 0) {

              tempUInt10 = tempInt1 + 2U & 3;

              gte_stRGB2();

              tempBool1 = DAT_1f80006c < DAT_1f800068;

              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();

              tempUInt14 = (int)DAT_1f800068 << 8;
              DAT_1f8000ac = tempUInt2;
              DAT_1f8000bc = tempUInt6;
              DAT_1f8000cc = tempUInt16;

              *DAT_1f800068 =
                   (uint)(*(int *)((tempInt1 + 2U) - tempUInt10) << (3 - tempUInt10) * 8) >> 8 | 0x4000000;

              DAT_1f800068 = DAT_1f800068 + 5;

              tempUInt2 = tempInt1 + 2U & 3;
              tempUIntPtr3 = (uint *)((tempInt1 + 2U) - tempUInt2);

              *tempUIntPtr3 = *tempUIntPtr3 & -1 << (tempUInt2 + 1) * 8 | tempUInt14 >> (3 - tempUInt2) * 8;

              tempUInt2 = DAT_1f8000ac;
              tempUInt6 = DAT_1f8000bc;
              tempUInt16 = DAT_1f8000cc;

              if (tempBool1) break;
            }
            else {

              gte_stRGB2();

              DAT_1f8000ac = CONCAT22(*(undefined2 *)(DAT_1f8000e8 + 3),(short)DAT_1f8000ac);
              DAT_1f8000bc = CONCAT22(*(undefined2 *)(DAT_1f8000ec + 3),(short)DAT_1f8000bc);
              DAT_1f8000cc = CONCAT22(*(undefined2 *)(DAT_1f8000f0 + 3),(short)DAT_1f8000cc);

              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();

              DAT_1f80009c = tempInt1;

              FUN_80081580(0x1f800000,3);

              tempUInt2 = DAT_1f8000ac;
              tempUInt6 = DAT_1f8000bc;
              tempUInt16 = DAT_1f8000cc;

              if (DAT_1f80006c <= DAT_1f800068) break;
            }
          }
        }

LAB_overlay0__8001c5bc:

        DAT_1f8000cc = tempUInt16;
        DAT_1f8000bc = tempUInt6;
        DAT_1f8000ac = tempUInt2;

        vectorIterator = (SVECTOR *)&vectorIterator[1].vz;
      } while (vectorIterator != (SVECTOR *)tempUndefinedPtr1);
    }

    vectorIterator = vectorArrayPtr[2];

    if (*(ushort *)((int)vectorArrayPtr + 0x32) != 0) {

      DAT_1f8003b0_b16->_0_2_ = vectorIterator->vx;
      DAT_1f8003b0_b16->_2_2_ = vectorIterator->vy;

      _DAT_1f8003ac = (SVECTOR *)((int)vectorIterator + (uint)*(ushort *)((int)vectorArrayPtr + 0x32) * 0xc);
      DAT_1f8003ac = (undefined4)(uintptr_t)_DAT_1f8003ac;

      do {

        tempUInt16 = (uint)((ushort)vectorIterator[1].vz | ((ushort)vectorIterator[1].pad << 16));

        DAT_1f8000e8 = (undefined4 *)((uintptr_t)DAT_1f800070 + (DAT_1f8003b0 & 0x3ff) * 0x10);

        tempUInt2 = (uint)((ushort)vectorIterator->vz | ((ushort)vectorIterator->pad << 16));

        DAT_1f8000ec = (uint *)((uintptr_t)DAT_1f800070 + ((int)DAT_1f8003b0 >> 6 & 0x3ff0));
        tempUInt14 = DAT_1f8000e8[1];
        DAT_1f8000f0 = (uint *)((uintptr_t)DAT_1f800070 + ((int)DAT_1f8003b0 >> 0x10 & 0x3ff0));
        tempUInt10 = DAT_1f8000ec[1];

        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | tempUInt14 >> 0x10;
        DAT_1f8000b4.value = CONCAT13((char)tempUInt14,(undefined3 *)&DAT_1f8000b4.bytes._1_1_);
        DAT_1f8000f4_ptr = (uint *)((uintptr_t)DAT_1f800070 + (tempUInt2 & 0x3ff) * 0x10);
        DAT_1f8000f4 = (undefined4)(uintptr_t)DAT_1f8000f4_ptr;
        tempUInt15 = DAT_1f8000f0[1];
        tempUInt2 = DAT_1f8000bc & 0xffff0000 | tempUInt10 >> 0x10;
        DAT_1f8000c4.bytes._3_1_ = (undefined)tempUInt10;
        tempUInt18 = DAT_1f8003b0 >> 0x1e & 1;
        tempUInt1 = DAT_1f8000f4_ptr[1];
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | tempUInt15 >> 0x10;
        DAT_1f8000d4.bytes._3_1_ = (undefined)tempUInt15;
        tempUInt6 = tempUInt14;

        if ((int)tempUInt14 < (int)tempUInt10 == tempUInt18) {
          tempUInt6 = tempUInt10;
        }
        uVar77.b16._0_2_ = pSVar65[1].vx;
        uVar77.b16._2_2_ = pSVar65[1].vy;
        uVar74.value = DAT_1f8000dc & 0xffff0000 | uVar17.value >> 0x10;
        DAT_1f8000e4.bytes._3_1_ = (undefined)uVar17.value;
        uVar15 = DAT_1f8000e8[2];
        gte_ldRGB(uVar77.b16);
        uVar77.value = uVar56.value | uVar49 | uVar57 | uVar17.value;
        if ((uVar56.value & uVar49 & uVar57 & uVar17.value & 0x1f) == 0) {
          DAT_1f8000c0 = (uint *)(uintptr_t)DAT_1f8000ec[2];
          gte_ldSXY2(uVar15);
          if ((int)uVar39.value < (int)uVar57 == uVar66.value) {
            uVar39.value = uVar57;
          }
          DAT_1f8000d0 = DAT_1f8000f0[2];
          gte_ldSXY0((undefined4)(uintptr_t)DAT_1f8000c0);
          if ((int)uVar39.value < (int)uVar17.value == uVar66.value) {
            uVar39.value = uVar17.value;
          }
          iVar81 = (((int)uVar39.value >> 0x10) << (DAT_1f800098 & 0x1f)) >> 0xd;
          if (iVar81 < 0) {
            iVar81 = 0;
          }
          iVar81 = iVar81 + (-uVar66.value & 0x60);
          DAT_1f8000e0_ptr = &DAT_1f8000f4_ptr[2];
          DAT_1f8000e0 = (undefined4)(uintptr_t)DAT_1f8000e0_ptr;
          gte_ldSXY1(DAT_1f8000d0);
          iVar18 = iVar81 * 4;
          if (0xfff < iVar81) {
            iVar18 = 0x3ffc;
          }
          gte_nclip_b();
          uVar85 = *DAT_1f8000e8;
          iVar18 = DAT_1f800064 + iVar18;
          iVar81 = gte_stMAC0();
          gte_ldSXYP(DAT_1f8000e0);
          gte_nclip_b();
          uVar67.value = *DAT_1f8000ec;
          gte_ldIR0(0);
          uVar66.value = gte_stMAC0();
          uVar51.value = *DAT_1f8000f0;
          gte_dpcs_b();
          uVar27.value = uVar77.value & 0x20;
          uVar39.value = *DAT_1f8000f4_ptr;
          DAT_1f8000b0 = uVar15;
          if (((-iVar81 | uVar66.value | uVar27.value) != 0) &&
             (uVar15 = gte_stRGB2(),
             -1 < (int)(-iVar81 - 1U & uVar66.value - 1 & DAT_1f8003b0 & uVar27.value - 0x20))) {
            DAT_1f8000bc_b16->_0_2_ = (short)(uVar49 >> 0x10);
            DAT_1f8000dc_b16->_0_2_ = (short)(uVar17.value >> 0x10);
            DAT_1f8000a8 = uVar85;
            DAT_1f8000b8 = uVar67.value;
            DAT_1f8000c8 = (uint *)(uintptr_t)uVar51.value;
            DAT_1f8000d8 = uVar39.value;
            if ((uVar27.value != 0) && ((int)DAT_1f8003b0 < 0)) {
              DAT_1f8000b8_b16->_0_2_ = (short)uVar67.value;
              DAT_1f8000b8_b16->_2_2_ = (short)(uVar67.value >> 0x10);
              gte_ldR11R12((int)(short)DAT_1f8000b8);
              gte_ldR22R23((int)DAT_1f8000b8_b16->_2_2_);
              DAT_1f8000d8 = (short)uVar39.value;
              uVar66.value = (uint)DAT_1f8000d8;
              gte_ldR33((int)(short)DAT_1f8000bc);
              DAT_1f8000da._0_2_ = (short)(uVar39.value >> 0x10);
              uVar39.value = (uint)DAT_1f8000da._0_2_;
              gte_ldIR1((int)uVar66.value);
              uVar49 = (uint)(short)DAT_1f8000dc;
              gte_ldIR2((int)uVar39.value);
              gte_ldIR3((int)uVar49);
              gte_ldVXY0(0x1f8000a8);
              gte_ldVZ0(0x1f8000ac);
              gte_op0_b(0);
              gte_ldVXY1(0x1f8000c8);
              gte_ldVZ1(0x1f8000cc);
              read_mt((uint)uVar49,(uint)uVar66.value,(uint)uVar39.value);
              gte_ldR11R12((int)uVar49 >> 0x18 & 0xffffU | ((int)uVar66.value >> 0x18) << 0x10);
              gte_ldR13R21((int)uVar39.value >> 0x18 & 0xffffU | ((int)uVar49 >> 0xc & 0xfffU) << 0x10);
              gte_ldR22R23((int)uVar66.value >> 0xc & 0xfffU | ((int)uVar39.value >> 0xc & 0xfffU) << 0x10);
              gte_ldR31R32(uVar49 & 0xfff | (uVar66.value & 0xfff) << 0x10);
              uVar39.value = uVar39.value & 0xfff;
              gte_ldR33((int)uVar39.value);
              gte_mvmva_b(0,0,0,3,0);
              iVar31 = gte_stMAC3();
              iVar81 = gte_stMAC2();
              iVar50 = gte_stMAC1();
              gte_mvmva_b(0,0,1,3,0);
              iVar43 = gte_stMAC3();
              iVar19 = gte_stMAC2();
              iVar32 = gte_stMAC1();
              gte_ldR11R12(0x1000);
              gte_ldR13R21(0);
              gte_ldR22R23(0x1000);
              gte_ldR31R32(0);
              gte_ldR33(0x1000);
              if (-1 < (iVar50 + (iVar81 + (iVar31 >> 0xc) >> 0xc) |
                       -(iVar32 + (iVar19 + (iVar43 >> 0xc) >> 0xc)))) goto LAB_overlay0__8001c9a8;
            }
            DAT_1f8003b0 = uVar58;
            if ((uVar77.value & 0x3f) == 0) {
              uVar39.value = iVar18 + 2U & 3;
              iVar81 = *(int *)((iVar18 + 2U) - (int)uVar39.value);
              gte_stRGB2();
              bVar14 = DAT_1f80006c < DAT_1f800068;
              gte_stSXY0();
              gte_stSXY1();
              DAT_1f8000bc = uVar20;
              DAT_1f8000dc = uVar74.value;
              DAT_1f800068[3] = (undefined4)(uintptr_t)DAT_1f8000c0;
              gte_stSXY2();
              uVar58 = (int)DAT_1f800068 << 8;
              *DAT_1f800068 = (uint)(iVar81 << (3 - (int)uVar39.value) * 8) >> 8 | 0x5000000;
              DAT_1f800068 = DAT_1f800068 + 6;
              uVar20 = iVar18 + 2U & 3;
              puVar71 = (uint *)((iVar18 + 2U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
              uVar20 = DAT_1f8000bc;
              uVar74.value = DAT_1f8000dc;
              uVar58 = DAT_1f8003b0;
              if (bVar14) break;
            }
            else {
              gte_stRGB2();
              DAT_1f8000ac_b16->_0_2_ = (short)(uVar56.value >> 0x10);
              DAT_1f8000ac = CONCAT22(*(undefined2 *)(DAT_1f8000e8 + 3),(short)DAT_1f8000ac);
              DAT_1f8000bc = CONCAT22(*(undefined2 *)(DAT_1f8000ec + 3),(short)DAT_1f8000bc);
              DAT_1f8000cc_b16->_0_2_ = (short)(uVar57 >> 0x10);
              DAT_1f8000cc = CONCAT22(*(undefined2 *)(DAT_1f8000f0 + 3),(short)DAT_1f8000cc);
              DAT_1f8000dc = CONCAT22(*(undefined2 *)(DAT_1f8000f4 + 3),(short)DAT_1f8000dc);
              DAT_1f80009c = iVar18;
              FUN_80081580(0x1f800000,4,(uint)uVar39.value,uVar15);
              uVar20 = DAT_1f8000bc;
              uVar74.value = DAT_1f8000dc;
              uVar58 = DAT_1f8003b0;
              if (DAT_1f80006c <= DAT_1f800068) break;
            }
          }
        }
LAB_overlay0__8001c9a8:
        DAT_1f8003b0 = uVar58;
        DAT_1f8000dc = uVar74.value;
        DAT_1f8000bc = uVar20;
        pSVar65 = (SVECTOR *)&pSVar65[1].vz;
      } while (pSVar65 != _DAT_1f8003ac);
    }
    pSVar65 = ppSVar89[3];
    iVar81 = 0x1f800000;
    if (*(ushort *)(ppSVar89 + 0xd) != 0) {
      puVar84 = (undefined *)((int)pSVar65 + (uint)*(ushort *)(ppSVar89 + 0xd) * 0x14);
      puVar71 = DAT_1f800068;
      do {
        iVar18 = *(int *)(iVar81 + 0x70);
        uVar56.b16._0_2_ = pSVar65->vx;
        uVar56.b16._2_2_ = pSVar65->vy;
        puVar52 = (undefined4 *)((uVar56.value & 0x3ff) * 0x10 + iVar18);
        puVar44 = (undefined4 *)(((int)uVar56.value >> 6 & 0x3ff0U) + iVar18);
        puVar40 = (undefined4 *)(((int)uVar56.value >> 0x10 & 0x3ff0U) + iVar18);
        uVar39.value = puVar52[1];
        uVar58 = puVar44[1];
        uVar49 = puVar40[1];
        *(undefined4 **)(iVar81 + 0xe8) = puVar52;
        *(undefined4 **)(iVar81 + 0xec) = puVar44;
        *(undefined4 **)(iVar81 + 0xf0) = puVar40;
        uVar20 = iVar81 + 0xadU & 3;
        puVar16 = (uint *)((iVar81 + 0xadU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xb7) = (char)uVar39.value;
        uVar20 = iVar81 + 0xbdU & 3;
        puVar16 = (uint *)((iVar81 + 0xbdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 199) = (char)uVar58;
        uVar20 = iVar81 + 0xcdU & 3;
        puVar16 = (uint *)((iVar81 + 0xcdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar49 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xd7) = (char)uVar49;
        if ((uVar39.value & uVar58 & uVar49 & 0x1f) == 0) {
          gte_ldSXY0(puVar52[2]);
          gte_ldSXY1(puVar40[2]);
          gte_ldSXY2(puVar44[2]);
          uVar57 = uVar39.value | uVar58 | uVar49;
          gte_nclip_b();
          uVar20 = gte_stMAC0();
          uVar66.value = uVar57 & 0x20;
          if (((uVar20 | uVar66.value) != 0) && (-1 < (int)(uVar20 & uVar56.value & uVar66.value - 0x20))) {
            uVar20 = uVar56.value >> 0x1e & 1;
            if ((int)uVar39.value < (int)uVar58 == uVar20) {
              uVar39.value = uVar58;
            }
            if ((int)uVar39.value < (int)uVar49 == uVar20) {
              uVar39.value = uVar49;
            }
            iVar18 = (((int)uVar39.value >> 0x10) << (*(uint *)(iVar81 + 0x98) & 0x1f)) >> 0xd;
            if (iVar18 < 0) {
              iVar18 = 0;
            }
            iVar18 = iVar18 + (-uVar20 & 0x60);
            iVar19 = iVar18 * 4;
            if (0xfff < iVar18) {
              iVar19 = 0x3ffc;
            }
            iVar19 = *(int *)(iVar81 + 100) + iVar19;
            uVar33.b16._0_2_ = pSVar65[1].vx;
            uVar33.b16._2_2_ = pSVar65[1].vy;
            uVar75.b16._0_2_ = pSVar65[1].vz;
            uVar75.b16._2_2_ = pSVar65[1].pad;
            uVar86.b16._0_2_ = pSVar65[2].vx;
            uVar86.b16._2_2_ = pSVar65[2].vy;
            gte_ldIR0(0);
            gte_ldRGB(uVar33.b16);
            gte_ldRGB0(uVar33.b16);
            gte_ldRGB1(uVar75.b16);
            gte_ldRGB2(uVar86.b16);
            gte_dpct();
            gte_stRGB2();
            uVar15 = *puVar44;
            uVar85 = *puVar40;
            *(undefined4 *)(iVar81 + 0xa8) = *puVar52;
            *(undefined4 *)(iVar81 + 0xb8) = uVar15;
            *(undefined4 *)(iVar81 + 200) = uVar85;
            if ((uVar66.value != 0) && ((int)uVar56.value < 0)) {
              gte_ldR11R12((int)*(short *)(iVar81 + 0xb8));
              gte_ldR22R23((int)*(short *)(iVar81 + 0xba));
              gte_ldR33((int)*(short *)(iVar81 + 0xbc));
              gte_ldIR1((int)*(short *)(iVar81 + 200));
              gte_ldIR2((int)*(short *)(iVar81 + 0xca));
              gte_ldIR3((int)*(short *)(iVar81 + 0xcc));
              gte_op0_b(0);
              iVar18 = gte_stMAC1();
              iVar31 = gte_stMAC2();
              iVar43 = gte_stMAC3();
              gte_ldR11R12(0x1000);
              gte_ldR22R23(0x1000);
              gte_ldR33(0x1000);
              if (-1 < (longlong)(int)*(short *)(iVar81 + 0xac) * (longlong)iVar43 +
                       (longlong)(int)*(short *)(iVar81 + 0xa8) * (longlong)iVar18 +
                       (longlong)(int)*(short *)(iVar81 + 0xaa) * (longlong)iVar31)
              goto LAB_overlay0__8001ccd0;
            }
            if ((uVar57 & 0x3f) == 0) {
              puVar16 = *(uint **)(iVar81 + 0x6c);
              uVar20 = iVar19 + 2U & 3;
              uVar20 = *(int *)((iVar19 + 2U) - uVar20) << (3 - uVar20) * 8;
              gte_strgb3_g3(puVar71);
              bVar14 = puVar16 < puVar71;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              uVar39.value = (int)puVar71 << 8;
              *puVar71 = uVar20 >> 8 | 0x6000000;
              puVar71 = puVar71 + 7;
              uVar20 = iVar19 + 2U & 3;
              puVar16 = (uint *)((iVar19 + 2U) - uVar20);
              *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
              if (bVar14) break;
            }
            else {
              *(uint **)(iVar81 + 0x68) = puVar71;
              *(int *)(iVar81 + 0x9c) = iVar19;
              gte_stRGB0();
              gte_stRGB0();
              gte_stRGB1();
              gte_stRGB2();
              uVar6 = *(undefined2 *)(*(int *)(iVar81 + 0xec) + 0xc);
              *(undefined2 *)(iVar81 + 0xae) = *(undefined2 *)(*(int *)(iVar81 + 0xe8) + 0xc);
              uVar7 = *(undefined2 *)(*(int *)(iVar81 + 0xf0) + 0xc);
              *(undefined2 *)(iVar81 + 0xbe) = uVar6;
              *(undefined2 *)(iVar81 + 0xce) = uVar7;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              FUN_8007bcd0(iVar81,3);
              puVar71 = *(uint **)(iVar81 + 0x68);
              if (*(uint **)(iVar81 + 0x6c) <= puVar71) {
                *(uint **)(iVar81 + 0x68) = puVar71;
                goto LAB_overlay0__8001cce0;
              }
            }
          }
        }
LAB_overlay0__8001ccd0:
        pSVar65 = (SVECTOR *)&pSVar65[2].vz;
      } while (pSVar65 != (SVECTOR *)puVar84);
      *(uint **)(iVar81 + 0x68) = puVar71;
    }
LAB_overlay0__8001cce0:
    pSVar65 = ppSVar89[4];
    if (*(ushort *)((int)ppSVar89 + 0x36) != 0) {
      DAT_1f8003b0_b16->_0_2_ = pSVar65->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar65->vy;
      _DAT_1f8003ac = pSVar65 + (uint)*(ushort *)((int)ppSVar89 + 0x36) * 3;
      do {
        puVar71 = DAT_1f80006c;
        uVar49 = (uint)((ushort)pSVar65[3].vx | ((ushort)pSVar65[3].vy << 16));
        DAT_1f8000e8 = (undefined4 *)((uintptr_t)DAT_1f800070 + (DAT_1f8003b0 & 0x3ff) * 0x10);
        uVar39.b16._0_2_ = pSVar65->vz;
        uVar39.b16._2_2_ = pSVar65->pad;
        DAT_1f8000ec = (uint *)((uintptr_t)DAT_1f800070 + ((int)DAT_1f8003b0 >> 6 & 0x3ff0));
        uVar56.value = DAT_1f8000e8[1];
        DAT_1f8000f0 = (uint *)(DAT_1f800070 + ((int)DAT_1f8003b0 >> 0x10 & 0x3ff0));
        uVar58 = DAT_1f8000ec[1];
        DAT_1f8000ac = DAT_1f8000ac & 0xffff0000 | uVar56.value >> 0x10;
        DAT_1f8000b4.value = CONCAT13((char)uVar56.value,(undefined3 *)&DAT_1f8000b4.bytes._1_1_);
        DAT_1f8000f4_ptr = (uint *)((uintptr_t)DAT_1f800070 + (uVar39.value & 0x3ff) * 0x10);
        DAT_1f8000f4 = (undefined4)(uintptr_t)DAT_1f8000f4_ptr;
        uVar57 = DAT_1f8000f0[1];
        uVar20 = DAT_1f8000bc & 0xffff0000 | uVar58 >> 0x10;
        DAT_1f8000c4.bytes._3_1_ = (undefined)uVar58;
        uVar66.value = DAT_1f8003b0 >> 0x1e & 1;
        uVar17.value = DAT_1f8000f4_ptr[1];
        DAT_1f8000cc = DAT_1f8000cc & 0xffff0000 | uVar57 >> 0x10;
        DAT_1f8000d4.bytes._3_1_ = (undefined)uVar57;
        uVar39.value = uVar56.value;
        if ((int)uVar56.value < (int)uVar58 == uVar66.value) {
          uVar39.value = uVar58;
        }
        uVar27.b16._0_2_ = pSVar65[1].vx;
        uVar27.b16._2_2_ = pSVar65[1].vy;
        uVar74.value = DAT_1f8000dc & 0xffff0000 | uVar17.value >> 0x10;
        DAT_1f8000e4.bytes._3_1_ = (undefined)uVar17.value;
        uVar15 = DAT_1f8000e8[2];
        gte_ldRGB(uVar27.b16);
        uVar77.value = uVar56.value | uVar58 | uVar57 | uVar17.value;
        if ((uVar56.value & uVar58 & uVar57 & uVar17.value & 0x1f) == 0) {
          uVar27.value = DAT_1f8000ec[2];
          gte_ldSXY2(uVar15);
          if ((int)uVar39.value < (int)uVar57 == uVar66.value) {
            uVar39.value = uVar57;
          }
          DAT_1f8000d0 = DAT_1f8000f0[2];
          gte_ldSXY0((undefined4)uVar27.value);
          if ((int)uVar39.value < (int)uVar17.value == uVar66.value) {
            uVar39.value = uVar17.value;
          }
          iVar81 = (((int)uVar39.value >> 0x10) << (DAT_1f800098 & 0x1f)) >> 0xd;
          if (iVar81 < 0) {
            iVar81 = 0;
          }
          iVar81 = iVar81 + (-uVar66.value & 0x60);
          DAT_1f8000e0_ptr = &DAT_1f8000f4_ptr[2];
          DAT_1f8000e0 = (undefined4)(uintptr_t)DAT_1f8000e0_ptr;
          gte_ldSXY1(DAT_1f8000d0);
          iVar18 = iVar81 * 4;
          if (0xfff < iVar81) {
            iVar18 = 0x3ffc;
          }
          gte_nclip_b();
          uVar85 = *DAT_1f8000e8;
          iVar18 = DAT_1f800064 + iVar18;
          iVar81 = gte_stMAC0();
          gte_ldSXYP(DAT_1f8000e0);
          gte_nclip_b();
          uVar53.b16._0_2_ = pSVar65[1].vz;
          uVar53.b16._2_2_ = pSVar65[1].pad;
          gte_ldIR0(0);
          uVar39.value = gte_stMAC0();
          uVar51.b16._0_2_ = pSVar65[2].vx;
          uVar51.b16._2_2_ = pSVar65[2].vy;
          gte_dpcs_b();
          uVar66.value = uVar77.value & 0x20;
          uVar34.b16._0_2_ = pSVar65[2].vz;
          uVar34.b16._2_2_ = pSVar65[2].pad;
          DAT_1f8000b0 = uVar15;
          DAT_1f8000c0 = (uint *)(uintptr_t)uVar27.value;
          if ((-iVar81 | uVar39.value | uVar66.value) != 0) {
            uVar78.value = gte_stRGB2();
            gte_ldRGB0(uVar53.b16);
            gte_ldRGB1(uVar51.b16);
            uVar67.value = *DAT_1f8000ec;
            gte_ldRGB2(uVar34.b16);
            gte_dpct_b();
            uVar51.value = *DAT_1f8000f0;
            if (-1 < (int)(-iVar81 - 1U & uVar39.value - 1 & DAT_1f8003b0 & uVar66.value - 0x20)) {
              _DAT_1f8000d8 = *DAT_1f8000f4_ptr;
              DAT_1f8000bc_b16->_0_2_ = (short)(uVar58 >> 0x10);
              DAT_1f8000dc_b16->_0_2_ = (short)(uVar17.value >> 0x10);
              DAT_1f8000a8 = uVar85;
                DAT_1f8000b8 = uVar67.value;
              DAT_1f8000c8 = (uint *)(uintptr_t)uVar51.value;
              if ((uVar66.value != 0) && ((int)DAT_1f8003b0 < 0)) {
                DAT_1f8000b8_b16->_0_2_ = (short)uVar67.value;
                DAT_1f8000b8_b16->_2_2_ = (short)(uVar67.value >> 0x10);
                gte_ldR11R12((int)(short)DAT_1f8000b8);
                gte_ldR22R23((int)DAT_1f8000b8_b16->_2_2_);
                uVar58 = (uint)DAT_1f8000d8;
                gte_ldR33((int)(short)DAT_1f8000bc);
                DAT_1f8000da._0_2_ = (short)(_DAT_1f8000d8 >> 0x10);
                uVar67.value = (uint)DAT_1f8000da._0_2_;
                gte_ldIR1((int)uVar58);
                uVar39.value = (uint)(short)DAT_1f8000dc;
                gte_ldIR2((int)uVar67.value);
                gte_ldIR3((int)uVar39.value);
                gte_ldVXY0(0x1f8000a8);
                gte_ldVZ0(0x1f8000ac);
                gte_op0_b(0);
                gte_ldVXY1(0x1f8000c8);
                gte_ldVZ1(0x1f8000cc);
                read_mt((uint)uVar39.value,(uint)uVar58,(uint)uVar67.value);
                gte_ldR11R12((int)uVar39.value >> 0x18 & 0xffffU | ((int)uVar58 >> 0x18) << 0x10);
                gte_ldR13R21((int)uVar67.value >> 0x18 & 0xffffU | ((int)uVar39.value >> 0xc & 0xfffU) << 0x10);
                gte_ldR22R23((int)uVar58 >> 0xc & 0xfffU | ((int)uVar67.value >> 0xc & 0xfffU) << 0x10);
                gte_ldR31R32(uVar39.value & 0xfff | (uVar58 & 0xfff) << 0x10);
                uVar67.value = uVar67.value & 0xfff;
                gte_ldR33((int)uVar67.value);
                gte_mvmva_b(0,0,0,3,0);
                iVar31 = gte_stMAC3();
                iVar81 = gte_stMAC2();
                iVar50 = gte_stMAC1();
                gte_mvmva_b(0,0,1,3,0);
                iVar43 = gte_stMAC3();
                iVar19 = gte_stMAC2();
                iVar32 = gte_stMAC1();
                gte_ldR11R12(0x1000);
                gte_ldR13R21(0);
                gte_ldR22R23(0x1000);
                gte_ldR31R32(0);
                gte_ldR33(0x1000);
                uVar51.value = iVar50 + (iVar81 + (iVar31 >> 0xc) >> 0xc) |
                         -(iVar32 + (iVar19 + (iVar43 >> 0xc) >> 0xc));
                if (-1 < (int)uVar51.value) goto LAB_overlay0__8001d0f4;
              }
              DAT_1f8003b0 = (undefined4)uVar49;
              if ((uVar77.value & 0x3f) == 0) {
                uVar39.value = iVar18 + 2U & 3;
                iVar81 = *(int *)((iVar18 + 2U) - (int)uVar39.value);
                DAT_1f8000bc = uVar20;
                DAT_1f8000dc = uVar74.value;
                DAT_1f800068[1] = uVar78.value;
                bVar14 = puVar71 < DAT_1f800068;
                gte_stRGB0();
                gte_stRGB1();
                gte_stRGB2();
                gte_stSXY0();
                gte_stSXY1();
                DAT_1f800068[4] = (undefined4)(uintptr_t)uVar27.value;
                gte_stSXY2();
                uVar58 = (int)DAT_1f800068 << 8;
                *DAT_1f800068 =
                     (iVar81 << (3 - (int)uVar39.value) * 8 | uVar51.value & 0xffffffffU >> ((int)uVar39.value + 1) * 8) >> 8 |
                     0x8000000;
                DAT_1f800068 = DAT_1f800068 + 9;
                uVar20 = iVar18 + 2U & 3;
                puVar71 = (uint *)((iVar18 + 2U) - uVar20);
                *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
                uVar20 = DAT_1f8000bc;
                uVar74.value = DAT_1f8000dc;
                uVar49 = DAT_1f8003b0;
                if (bVar14) break;
              }
              else {
                gte_stRGB0();
                gte_stRGB1();
                gte_stRGB2();
                DAT_1f8000ac_b16->_0_2_ = (short)(uVar56.value >> 0x10);
                DAT_1f8000ac = CONCAT22(*(undefined2 *)(DAT_1f8000e8 + 3),(short)DAT_1f8000ac);
                DAT_1f8000bc = CONCAT22(*(undefined2 *)(DAT_1f8000ec + 3),(short)DAT_1f8000bc);
                DAT_1f8000cc_b16->_0_2_ = (short)(uVar57 >> 0x10);
                DAT_1f8000cc = CONCAT22(*(undefined2 *)(DAT_1f8000f0 + 3),(short)DAT_1f8000cc);
                DAT_1f8000dc = CONCAT22(*(undefined2 *)(DAT_1f8000f4_ptr + 3),(short)DAT_1f8000dc);
                DAT_1f80009c = iVar18;
                DAT_1f8000a0 = uVar78.value;
                DAT_1f8000b4.value = uVar78.value;
                FUN_8007bcd0(0x1f800000,4,(uint)uVar67.value);
                uVar20 = DAT_1f8000bc;
                uVar74.value = DAT_1f8000dc;
                uVar49 = DAT_1f8003b0;
                if (DAT_1f80006c <= DAT_1f800068) break;
              }
            }
          }
        }
LAB_overlay0__8001d0f4:
        DAT_1f8003b0 = uVar49;
        DAT_1f8000dc = uVar74.value;
        DAT_1f8000bc = uVar20;
        pSVar65 = pSVar65 + 3;
      } while (pSVar65 != _DAT_1f8003ac);
    }
    pSVar65 = ppSVar89[5];
    iVar81 = 0x1f800000;
    if (*(ushort *)(ppSVar89 + 0xe) != 0) {
      DAT_1f800394 = 0x480;
      pSVar76 = pSVar65 + (uint)*(ushort *)(ppSVar89 + 0xe) * 3;
      puVar71 = DAT_1f800068;
      do {
        iVar18 = *(int *)(iVar81 + 0x70);
        uVar66.b16._0_2_ = pSVar65->vx;
        uVar66.b16._2_2_ = pSVar65->vy;
        puVar52 = (undefined4 *)((uVar66.value & 0x3ff) * 0x10 + iVar18);
        puVar44 = (undefined4 *)(((int)uVar66.value >> 6 & 0x3ff0U) + iVar18);
        puVar40 = (undefined4 *)(((int)uVar66.value >> 0x10 & 0x3ff0U) + iVar18);
        uVar39.value = puVar52[1];
        uVar58 = puVar44[1];
        uVar49 = puVar40[1];
        *(undefined4 **)(iVar81 + 0xe8) = puVar52;
        *(undefined4 **)(iVar81 + 0xec) = puVar44;
        *(undefined4 **)(iVar81 + 0xf0) = puVar40;
        uVar20 = iVar81 + 0xadU & 3;
        puVar16 = (uint *)((iVar81 + 0xadU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xb7) = (char)uVar39.value;
        uVar20 = iVar81 + 0xbdU & 3;
        puVar16 = (uint *)((iVar81 + 0xbdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 199) = (char)uVar58;
        uVar20 = iVar81 + 0xcdU & 3;
        puVar16 = (uint *)((iVar81 + 0xcdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar49 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xd7) = (char)uVar49;
        if ((uVar39.value & uVar58 & uVar49 & 0x1f) == 0) {
          gte_ldSXY0(puVar52[2]);
          gte_ldSXY1(puVar40[2]);
          gte_ldSXY2(puVar44[2]);
          gte_nclip_b();
          uVar20 = gte_stMAC0();
          uVar56.value = (uVar39.value | uVar58 | uVar49) & 0x20;
          if (((uVar20 | uVar56.value) != 0) && (-1 < (int)(uVar20 & uVar66.value & uVar56.value - 0x20))) {
            uVar57 = uVar66.value >> 0x1e & 1;
            if ((int)uVar39.value < (int)uVar58 == uVar57) {
              uVar39.value = uVar58;
            }
            if ((int)uVar39.value < (int)uVar49 == uVar57) {
              uVar39.value = uVar49;
            }
            iVar18 = (((int)uVar39.value >> 0x10) << (*(uint *)(iVar81 + 0x98) & 0x1f)) >> 0xd;
            if (iVar18 < 0) {
              iVar18 = 0;
            }
            iVar18 = iVar18 + (-uVar57 & 0x60);
            iVar19 = iVar18 * 4;
            if (0xfff < iVar18) {
              iVar19 = 0x3ffc;
            }
            iVar19 = *(int *)(iVar81 + 100) + iVar19;
            uVar21.b16._0_2_ = pSVar65[1].vx;
            uVar21.b16._2_2_ = pSVar65[1].vy;
            gte_ldIR0(0);
            gte_ldRGB(uVar21.b16);
            gte_dpcs();
            uVar17.b16._0_2_ = pSVar65[1].vz;
            uVar17.b16._2_2_ = pSVar65[1].pad;
            uVar74.b16._0_2_ = pSVar65[2].vx;
            uVar74.b16._2_2_ = pSVar65[2].vy;
            uVar67.b16._0_2_ = pSVar65[2].vz;
            uVar67.b16._2_2_ = pSVar65[2].pad;
            uVar15 = *puVar44;
            uVar85 = *puVar40;
            *(undefined4 *)(iVar81 + 0xa8) = *puVar52;
            *(undefined4 *)(iVar81 + 0xb8) = uVar15;
            *(undefined4 *)(iVar81 + 200) = uVar85;
            if (uVar56.value != 0) {
              if ((int)uVar66.value < 0) {
                gte_ldR11R12((int)*(short *)(iVar81 + 0xb8));
                gte_ldR22R23((int)*(short *)(iVar81 + 0xba));
                gte_ldR33((int)*(short *)(iVar81 + 0xbc));
                gte_ldIR1((int)*(short *)(iVar81 + 200));
                gte_ldIR2((int)*(short *)(iVar81 + 0xca));
                gte_ldIR3((int)*(short *)(iVar81 + 0xcc));
                gte_op0_b(0);
                iVar18 = gte_stMAC1();
                iVar31 = gte_stMAC2();
                iVar43 = gte_stMAC3();
                gte_ldR11R12(0x1000);
                gte_ldR22R23(0x1000);
                gte_ldR33(0x1000);
                if (-1 < (longlong)(int)*(short *)(iVar81 + 0xac) * (longlong)iVar43 +
                         (longlong)(int)*(short *)(iVar81 + 0xa8) * (longlong)iVar18 +
                         (longlong)(int)*(short *)(iVar81 + 0xaa) * (longlong)iVar31)
                goto LAB_overlay0__8001d934;
              }
              gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar81 + 0xe8) + 0xc) |
                                      *(ushort *)(*(int *)(iVar81 + 0xec) + 0xc) |
                                     *(ushort *)(*(int *)(iVar81 + 0xf0) + 0xc)));
              iVar18 = gte_stLZCR();
              uVar20 = iVar18 - 0x11;
              if (0 < (int)uVar20) {
                *(short *)(iVar81 + 0xa8) =
                     (short)((int)*(short *)(iVar81 + 0xa8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xaa) =
                     (short)((int)*(short *)(iVar81 + 0xaa) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xac) =
                     (short)((int)*(short *)(iVar81 + 0xac) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xb8) =
                     (short)((int)*(short *)(iVar81 + 0xb8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xba) =
                     (short)((int)*(short *)(iVar81 + 0xba) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xbc) =
                     (short)((int)*(short *)(iVar81 + 0xbc) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 200) = (short)((int)*(short *)(iVar81 + 200) << (uVar20 & 0x1f))
                ;
                *(short *)(iVar81 + 0xca) =
                     (short)((int)*(short *)(iVar81 + 0xca) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xcc) =
                     (short)((int)*(short *)(iVar81 + 0xcc) << (uVar20 & 0x1f));
              }
LAB_overlay0__8001d434:
              *(uint **)(iVar81 + 0x68) = puVar71;
              *(SVECTOR **)(iVar81 + 0x3a8) = pSVar65;
              *(int *)(iVar81 + 0x9c) = iVar19;
              gte_stRGB2();
              *(uint *)(iVar81 + 0xa4) = uVar74.value;
              uVar20 = iVar81 + 0xa5U & 3;
              puVar71 = (uint *)((iVar81 + 0xa5U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | uVar17.value >> (3 - uVar20) * 8;
              *(short *)(iVar81 + 0xae) = (short)uVar17.value;
              *(short *)(iVar81 + 0xbe) = (short)uVar74.value;
              *(short *)(iVar81 + 0xce) = (short)uVar67.value;
              DAT_1f800388 = DAT_1f800068;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              puVar71 = &DAT_1f8000a8;
              iVar18 = 0x1f800000;
              ppuVar68 = &DAT_1f8000e8;
              ppuVar35 = &DAT_1f8000e8;
              pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
              do {
                bVar26 = *pbVar22;
                *ppuVar35 = puVar71;
                ppuVar35 = ppuVar35 + 1;
                if ((bVar26 & 0x20) != 0) {
                  gte_ldVXY0(puVar71);
                  gte_ldVZ0(pbVar22 + -0xb);
                  gte_rtps_b();
                  iVar19 = gte_stFLAG();
                  gte_stSXY2();
                  if (-1 < iVar19) {
                    *pbVar22 = bVar26 & 0x1f;
                  }
                }
                pbVar22 = pbVar22 + 0x10;
                puVar71 = puVar71 + 4;
              } while (ppuVar35 != &DAT_1f8000f4);
              DAT_1f80038c = DAT_1f800388;
              DAT_1f800390.bitfield._0_3_[0] = ((char *)SUB43(DAT_1f800388,0))[0];
              DAT_1f800390.bitfield._0_3_[1] = ((char *)SUB43(DAT_1f800388,0))[1];
              DAT_1f800390.bitfield._0_3_[2] = ((char *)SUB43(DAT_1f800388,0))[2];
              DAT_1f800390.value = CONCAT13(7,DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001d4f0:
              pSVar59 = (SVECTOR *)(ppuVar68 + 4);
              puVar40 = *ppuVar68;
              puVar44 = ppuVar68[1];
              puVar52 = ppuVar68[2];
              sVar8 = *(short *)puVar40;
              sVar9 = *(short *)puVar44;
              sVar10 = *(short *)puVar52;
              *(short *)(ppuVar68 + 4) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar68 + 8) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar68 + 0xc) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)((int)puVar40 + 2);
              sVar9 = *(short *)((int)puVar44 + 2);
              sVar10 = *(short *)((int)puVar52 + 2);
              *(short *)((int)ppuVar68 + 0x12) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)((int)ppuVar68 + 0x22) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)((int)ppuVar68 + 0x32) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)(puVar40 + 1);
              sVar9 = *(short *)(puVar44 + 1);
              sVar10 = *(short *)(puVar52 + 1);
              *(short *)(ppuVar68 + 5) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar68 + 9) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar68 + 0xd) = (short)((int)sVar10 + (int)sVar8 >> 1);
              gte_ldv0(pSVar59);
              gte_rtps_b();
              bVar26 = *(byte *)((int)puVar40 + 6);
              bVar1 = *(byte *)((int)puVar44 + 6);
              bVar2 = *(byte *)((int)puVar52 + 6);
              *(char *)&pSVar59->pad = (char)((int)((uint)bVar26 + (uint)bVar1) >> 1);
              *(char *)&pSVar59[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)&pSVar59[4].pad = (char)((int)((uint)bVar2 + (uint)bVar26) >> 1);
              bVar26 = *(byte *)((int)puVar40 + 7);
              bVar1 = *(byte *)((int)puVar44 + 7);
              bVar2 = *(byte *)((int)puVar52 + 7);
              *(char *)((int)&pSVar59->pad + 1) = (char)((int)((uint)bVar26 + (uint)bVar1) >> 1);
              *(char *)((int)&pSVar59[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)((int)&pSVar59[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar26) >> 1);
              uVar30 = *(ushort *)(iVar18 + 0x62);
              uVar12 = *(ushort *)(iVar18 + 0x5e);
              uVar13 = *(ushort *)(iVar18 + 0x60);
              pSVar63 = pSVar59;
              do {
                iVar31 = gte_stFLAG();
                gte_ldVXY0(pSVar63 + 2);
                gte_ldVZ0(&pSVar63[2].vz);
                gte_stSXY2();
                iVar19 = gte_stIR3();
                gte_rtps_b();
                bVar26 = iVar19 < (int)(uint)uVar30;
                if (pSVar63[1].vx < 0) {
                  bVar26 = bVar26 | 2;
                }
                bVar26 = bVar26 | ((int)(uVar12 - 1) < (int)pSVar63[1].vx) << 2;
                if (pSVar63[1].vy < 0) {
                  bVar26 = bVar26 | 8;
                }
                bVar26 = bVar26 | ((int)(uVar13 - 1) < (int)pSVar63[1].vy) << 4;
                if (iVar31 < 0) {
                  bVar26 = bVar26 | 0x20;
                }
                pSVar60 = pSVar63 + 2;
                *(byte *)((int)&pSVar63[1].pad + 1) = bVar26;
                pSVar63 = pSVar60;
              } while (pSVar60 != pSVar59 + 6);
              piVar36 = *(int **)(iVar18 + 0x68);
              iVar31 = *(int *)(iVar18 + 0xa0);
              uVar20 = iVar18 + 0xa5U & 3;
              pSVar65 = (SVECTOR *)
                        (*(int *)((iVar18 + 0xa5U) - uVar20) << (3 - uVar20) * 8 |
                        (uint)pSVar65 & 0xffffffffU >> (uVar20 + 1) * 8);
              uVar20 = *(uint *)(iVar18 + 0xa4);
              iVar19 = 2;
              ppuVar35 = ppuVar68 + 2;
              do {
                iVar43 = iVar19 + -1;
                if (iVar19 == 0) {
                  iVar43 = 2;
                }
                puVar40 = *ppuVar35;
                puVar44 = ppuVar68[iVar43];
                bVar26 = *(byte *)((int)puVar40 + 0xf) |
                         *(byte *)((int)ppuVar68 + iVar43 * 0x10 + 0x1f) |
                         *(byte *)((int)puVar44 + 0xf);
                if ((bVar26 & 0x20) == 0) {
                  gte_ldSXY0(puVar40 + 2);
                  gte_ldSXY1(ppuVar68 + iVar43 * 4 + 6);
                  gte_ldSXY2(puVar44 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar39.value = (uint)(short *)((int)puVar40 + 6U) & 3;
                  pSVar65 = (SVECTOR *)
                            ((uint)pSVar65 & -1 << (4 - uVar39.value) * 8 |
                            *(uint *)((int)(short *)((int)puVar40 + 6U) - uVar39.value) >> uVar39.value * 8);
                  uVar39.value = (int)ppuVar68 + iVar43 * 0x10 + 0x16;
                  uVar58 = uVar39.value & 3;
                  uVar20 = uVar20 & -1 << (4 - uVar58) * 8 |
                           *(uint *)(uVar39.value - uVar58) >> uVar58 * 8;
                  piVar36[3] = (int)pSVar65;
                  uVar39.value = (uint)(short *)((int)puVar44 + 6U) & 3;
                  uVar58 = *(uint *)((int)(short *)((int)puVar44 + 6U) - uVar39.value);
                  piVar36[5] = uVar20;
                  piVar36[7] = bVar26 & 0x20 & -1 << (4 - uVar39.value) * 8 | uVar58 >> uVar39.value * 8;
                  *piVar36 = (int)(piVar36 + -0x1e3ffff8);
                  iVar43 = gte_stMAC0();
                  gte_stSXY2();
                  piVar36[1] = iVar31;
                  if (iVar43 != 0) {
                    *(int **)(iVar18 + 0x38c) = piVar36;
                    piVar36 = piVar36 + 8;
                  }
                }
                ppuVar35 = ppuVar35 + -1;
                iVar19 = iVar19 + -1;
                *(int **)(iVar18 + 0x68) = piVar36;
              } while (-1 < iVar19);
              uVar20 = 3;
              ppuVar35 = ppuVar68;
              if (*(uint *)(iVar18 + 0x68) <= *(uint *)(iVar18 + 0x6c)) {
                do {
                  if (uVar20 == 3) {
                    ppuVar72 = ppuVar35 + 4;
                    ppuVar64 = ppuVar35 + 8;
                    ppuVar45 = ppuVar35 + 0xc;
                  }
                  else {
                    ppuVar72 = (undefined4 **)ppuVar35[uVar20];
                    ppuVar64 = ppuVar35 + uVar20 * 4 + 4;
                    if (uVar20 == 0) {
                      ppuVar45 = ppuVar35 + 0xc;
                    }
                    else {
                      ppuVar45 = ppuVar35 + (uVar20 - 1) * 4 + 4;
                    }
                  }
                  bVar26 = *(byte *)((int)ppuVar72 + 0xf);
                  if ((bVar26 & *(byte *)((int)ppuVar64 + 0xf) & *(byte *)((int)ppuVar45 + 0xf) &
                      0x1f) == 0) {
                    if (((bVar26 | *(byte *)((int)ppuVar64 + 0xf) | *(byte *)((int)ppuVar45 + 0xf))
                        & 0x20) == 0) {
                      piVar36 = *(int **)(iVar18 + 0x68);
                      gte_ldSXY0(ppuVar72 + 2);
                      gte_ldSXY1(ppuVar64 + 2);
                      gte_ldSXY2(ppuVar45 + 2);
                      gte_stSXY0();
                      gte_stSXY1();
                      gte_nclip_b();
                      iVar31 = *(int *)(iVar18 + 0xa0);
                      *piVar36 = (int)(piVar36 + -0x1e3ffff8);
                      uVar30 = *(ushort *)(iVar18 + 0x394);
                      uVar39.value = iVar18 + 0xa5U & 3;
                      iVar19 = *(int *)((iVar18 + 0xa5U) - uVar39.value);
                      uVar58 = (uint)(short *)((int)ppuVar72 + 6U) & 3;
                      uVar49 = *(uint *)((int)(short *)((int)ppuVar72 + 6U) - uVar58);
                      uVar56.value = gte_stMAC0();
                      uVar66.value = *(uint *)(iVar18 + 0xa4);
                      gte_stSXY2();
                      if ((int)uVar56.value < 0) {
                        uVar56.value = -uVar56.value;
                      }
                      piVar36[1] = iVar31;
                      if (uVar56.value <= uVar30) {
                        uVar56.value = (uint)(short *)((int)ppuVar64 + 6U) & 3;
                        uVar57 = *(uint *)((int)(short *)((int)ppuVar64 + 6U) - uVar56.value);
                        piVar36[3] = (iVar19 << (3 - uVar39.value) * 8 |
                                     (uint)bVar26 & 0xffffffffU >> (uVar39.value + 1) * 8) &
                                     -1 << (4 - uVar58) * 8 | uVar49 >> uVar58 * 8;
                        uVar39.value = (uint)(short *)((int)ppuVar45 + 6U) & 3;
                        uVar58 = *(uint *)((int)(short *)((int)ppuVar45 + 6U) - uVar39.value);
                        piVar36[5] = uVar66.value & -1 << (4 - uVar56.value) * 8 | uVar57 >> uVar56.value * 8;
                        piVar36[7] = iVar18 + 0x328U & -1 << (4 - uVar39.value) * 8 | uVar58 >> uVar39.value * 8
                        ;
                        *(int **)(iVar18 + 0x38c) = piVar36;
                        *(int **)(iVar18 + 0x68) = piVar36 + 8;
                        goto LAB_overlay0__8001d870;
                      }
                    }
                    if (ppuVar35 != (undefined4 **)(iVar18 + 0x328)) goto LAB_overlay0__8001d404;
                  }
LAB_overlay0__8001d870:
                  while (uVar20 = uVar20 - 1, (int)uVar20 < 0) {
                    if (ppuVar35 == (undefined4 **)(iVar18 + 0xe8)) {
                      uVar20 = *(uint *)(iVar18 + 0x388);
                      if (*(uint *)(iVar18 + 0x6c) < *(uint *)(iVar18 + 0x68)) {
                        *(uint *)(iVar18 + 0x68) = uVar20;
                      }
                      else if (*(uint *)(iVar18 + 0x68) != uVar20) {
                        iVar31 = *(int *)(iVar18 + 0x38c);
                        uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                        uVar58 = uVar39.value & 3;
                        iVar19 = *(int *)(uVar39.value - uVar58);
                        uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                        uVar49 = uVar39.value & 3;
                        puVar71 = (uint *)(uVar39.value - uVar49);
                        *puVar71 = *puVar71 & -1 << (uVar49 + 1) * 8 |
                                   (uVar20 << 8) >> (3 - uVar49) * 8;
                        uVar20 = iVar31 + 2;
                        uVar39.value = uVar20 & 3;
                        puVar71 = (uint *)(uVar20 - uVar39.value);
                        *puVar71 = *puVar71 & -1 << (uVar39.value + 1) * 8 |
                                   (uint)(iVar19 << (3 - uVar58) * 8) >> (3 - uVar39.value) * 8;
                      }
                      goto LAB_overlay0__8001d8cc;
                    }
                    ppuVar68 = ppuVar35 + -0x11;
                    ppuVar35 = ppuVar35 + -0x18;
                    uVar20 = (uint)*(byte *)ppuVar68;
                  }
                } while( true );
              }
              *(undefined4 *)(iVar18 + 0x68) = *(undefined4 *)(iVar18 + 0x388);
LAB_overlay0__8001d8cc:
              puVar71 = *(uint **)(iVar81 + 0x68);
              pSVar65 = *(SVECTOR **)(iVar81 + 0x3a8);
              if (puVar71 < *(uint **)(iVar81 + 0x6c)) goto LAB_overlay0__8001d934;
              *(uint **)(iVar81 + 0x68) = puVar71;
              goto LAB_overlay0__8001d944;
            }
            if ((int)uVar20 < 0) {
              uVar20 = -uVar20;
            }
            if (0x480 < (int)uVar20) goto LAB_overlay0__8001d434;
            puVar16 = *(uint **)(iVar81 + 0x6c);
            uVar20 = iVar19 + 2U & 3;
            iVar18 = *(int *)((iVar19 + 2U) - uVar20);
            gte_stRGB2();
            puVar71[3] = uVar17.value;
            puVar71[5] = uVar74.value;
            puVar71[7] = uVar67.value;
            bVar14 = puVar16 < puVar71;
            gte_stSXY0();
            gte_stSXY1();
            gte_stSXY2();
            uVar39.value = (int)puVar71 << 8;
            *puVar71 = (uint)(iVar18 << (3 - uVar20) * 8) >> 8 | 0x7000000;
            puVar71 = puVar71 + 8;
            uVar20 = iVar19 + 2U & 3;
            puVar16 = (uint *)((iVar19 + 2U) - uVar20);
            *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
            if (bVar14) break;
          }
        }
LAB_overlay0__8001d934:
        pSVar65 = pSVar65 + 3;
      } while (pSVar65 != pSVar76);
      *(uint **)(iVar81 + 0x68) = puVar71;
    }
LAB_overlay0__8001d944:
    pSVar65 = ppSVar89[6];
    iVar81 = 0x1f800000;
    if (*(ushort *)((int)ppSVar89 + 0x3a) != 0) {
      DAT_1f800394 = 0x800;
      DAT_1f8003b0_b16->_0_2_ = pSVar65->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar65->vy;
      _DAT_1f8003ac = pSVar65 + (uint)*(ushort *)((int)ppSVar89 + 0x3a) * 3;
      puVar71 = DAT_1f800068;
      do {
        iVar18 = *(int *)(iVar81 + 0x70);
        uVar57 = *(uint *)(iVar81 + 0x3b0);
        uVar20 = *(uint *)(pSVar65 + 3);
        puVar40 = (undefined4 *)((uVar57 & 0x3ff) * 0x10 + iVar18);
        *(undefined4 **)(iVar81 + 0xe8) = puVar40;
        uVar78.b16._0_2_ = pSVar65->vz;
        uVar78.b16._2_2_ = pSVar65->pad;
        *(uint *)(iVar81 + 0x3b0) = uVar20;
        puVar44 = (undefined4 *)(((int)uVar57 >> 6 & 0x3ff0U) + iVar18);
        *(undefined4 **)(iVar81 + 0xec) = puVar44;
        uVar58 = puVar40[1];
        puVar52 = (undefined4 *)(((int)uVar57 >> 0x10 & 0x3ff0U) + iVar18);
        *(undefined4 **)(iVar81 + 0xf0) = puVar52;
        uVar39.value = puVar44[1];
        uVar20 = iVar81 + 0xadU & 3;
        puVar16 = (uint *)((iVar81 + 0xadU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xb7) = (char)uVar58;
        puVar79 = (undefined4 *)((uVar78.value & 0x3ff) * 0x10 + iVar18);
        *(undefined4 **)(iVar81 + 0xf4) = puVar79;
        uVar56.value = puVar52[1];
        uVar20 = iVar81 + 0xbdU & 3;
        puVar16 = (uint *)((iVar81 + 0xbdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 199) = (char)uVar39.value;
        uVar49 = uVar57 >> 0x1e & 1;
        uVar66.value = puVar79[1];
        uVar20 = iVar81 + 0xcdU & 3;
        puVar16 = (uint *)((iVar81 + 0xcdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar56.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xd7) = (char)uVar56.value;
        uVar20 = uVar58;
        if ((int)uVar58 < (int)uVar39.value == uVar49) {
          uVar20 = uVar39.value;
        }
        uVar46.b16._0_2_ = pSVar65[1].vx;
        uVar46.b16._2_2_ = pSVar65[1].vy;
        uVar17.value = iVar81 + 0xddU & 3;
        puVar16 = (uint *)((iVar81 + 0xddU) - (int)uVar17.value);
        *puVar16 = *puVar16 & -1 << ((int)uVar17.value + 1) * 8 | uVar66.value >> (3 - (int)uVar17.value) * 8;
        *(char *)(iVar81 + 0xe7) = (char)uVar66.value;
        uVar15 = puVar40[2];
        gte_ldRGB(uVar46.b16);
        if ((uVar58 & uVar39.value & uVar56.value & uVar66.value & 0x1f) == 0) {
          gte_ldSXY2(uVar15);
          if ((int)uVar20 < (int)uVar56.value == uVar49) {
            uVar20 = uVar56.value;
          }
          uVar85 = puVar52[2];
          gte_ldSXY0(puVar44[2]);
          *(undefined4 *)(iVar81 + 0xc0) = puVar44[2];
          if ((int)uVar20 < (int)uVar66.value == uVar49) {
            uVar20 = uVar66.value;
          }
          iVar18 = (((int)uVar20 >> 0x10) << (*(uint *)(iVar81 + 0x98) & 0x1f)) >> 0xd;
          if (iVar18 < 0) {
            iVar18 = 0;
          }
          iVar18 = iVar18 + (-uVar49 & 0x60);
          uVar23 = puVar79[2];
          gte_ldSXY1(uVar85);
          iVar19 = iVar18 * 4;
          if (0xfff < iVar18) {
            iVar19 = 0x3ffc;
          }
          gte_nclip_b();
          uVar86.value = *puVar40;
          iVar19 = *(int *)(iVar81 + 100) + iVar19;
          iVar18 = gte_stMAC0();
          gte_ldSXYP(uVar23);
          uVar20 = -iVar18;
          gte_nclip_b();
          uVar75.value = *puVar44;
          gte_ldIR0(0);
          *(undefined4 *)(iVar81 + 0xb0) = uVar15;
          *(undefined4 *)(iVar81 + 0xd0) = uVar85;
          *(undefined4 *)(iVar81 + 0xe0) = uVar23;
          uVar49 = gte_stMAC0();
          uVar85 = *puVar52;
          gte_dpcs_b();
          uVar39.value = (uVar58 | uVar39.value | uVar56.value | uVar66.value) & 0x20;
          uVar15 = *puVar79;
          if (((uVar20 | uVar49 | uVar39.value) != 0) &&
             (gte_stRGB2(), -1 < (int)(uVar20 - 1 & uVar49 - 1 & uVar57 & uVar39.value - 0x20))) {
            *(undefined4 *)(iVar81 + 0xa8) = uVar86.value;
            *(undefined4 *)(iVar81 + 0xb8) = uVar75.value;
            *(undefined4 *)(iVar81 + 200) = uVar85;
            iVar18 = uVar20 + uVar49;
            *(undefined4 *)(iVar81 + 0xd8) = uVar15;
            if (iVar18 < 0) {
              iVar18 = -iVar18;
            }
            uVar54.b16._0_2_ = pSVar65[1].vz;
            uVar54.b16._2_2_ = pSVar65[1].pad;
            uVar61.b16._0_2_ = pSVar65[2].vx;
            uVar61.b16._2_2_ = pSVar65[2].vy;
            uVar47.b16._0_2_ = pSVar65[2].vz;
            uVar47.b16._2_2_ = pSVar65[2].pad;
            if (uVar39.value != 0) {
              if ((int)uVar57 < 0) {
                gte_ldR11R12((int)*(short *)(iVar81 + 0xb8));
                gte_ldR22R23((int)*(short *)(iVar81 + 0xba));
                uVar39.value = (uint)*(short *)(iVar81 + 0xd8);
                gte_ldR33((int)*(short *)(iVar81 + 0xbc));
                uVar58 = (uint)*(short *)(iVar81 + 0xda);
                gte_ldIR1((int)uVar39.value);
                uVar20 = (uint)*(short *)(iVar81 + 0xdc);
                gte_ldIR2((int)uVar58);
                gte_ldIR3((int)uVar20);
                gte_ldVXY0(iVar81 + 0xa8);
                gte_ldVZ0(iVar81 + 0xac);
                gte_op0_b(0);
                gte_ldVXY1(iVar81 + 200);
                gte_ldVZ1(iVar81 + 0xcc);
                read_mt((uint)uVar20,(uint)uVar39.value,(uint)uVar58);
                gte_ldR11R12((int)uVar20 >> 0x18 & 0xffffU | ((int)uVar39.value >> 0x18) << 0x10);
                gte_ldR13R21((int)uVar58 >> 0x18 & 0xffffU | ((int)uVar20 >> 0xc & 0xfffU) << 0x10);
                gte_ldR22R23((int)uVar39.value >> 0xc & 0xfffU | ((int)uVar58 >> 0xc & 0xfffU) << 0x10);
                gte_ldR31R32(uVar20 & 0xfff | (uVar39.value & 0xfff) << 0x10);
                gte_ldR33((int)(uVar58 & 0xfff));
                gte_mvmva_b(0,0,0,3,0);
                iVar43 = gte_stMAC3();
                iVar18 = gte_stMAC2();
                iVar32 = gte_stMAC1();
                gte_mvmva_b(0,0,1,3,0);
                iVar50 = gte_stMAC3();
                iVar31 = gte_stMAC2();
                iVar37 = gte_stMAC1();
                gte_ldR11R12(0x1000);
                gte_ldR13R21(0);
                gte_ldR22R23(0x1000);
                gte_ldR31R32(0);
                gte_ldR33(0x1000);
                if (-1 < (iVar32 + (iVar18 + (iVar43 >> 0xc) >> 0xc) |
                         -(iVar37 + (iVar31 + (iVar50 >> 0xc) >> 0xc))))
                goto LAB_overlay0__8001e358;
              }
              gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar81 + 0xe8) + 0xc) |
                                      *(ushort *)(*(int *)(iVar81 + 0xec) + 0xc) |
                                     *(ushort *)(*(int *)(iVar81 + 0xf0) + 0xc) |
                                     *(ushort *)(*(int *)(iVar81 + 0xf4) + 0xc)));
              iVar18 = gte_stLZCR();
              uVar20 = iVar18 - 0x11;
              if (0 < (int)uVar20) {
                *(short *)(iVar81 + 0xa8) =
                     (short)((int)*(short *)(iVar81 + 0xa8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xaa) =
                     (short)((int)*(short *)(iVar81 + 0xaa) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xac) =
                     (short)((int)*(short *)(iVar81 + 0xac) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xb8) =
                     (short)((int)*(short *)(iVar81 + 0xb8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xba) =
                     (short)((int)*(short *)(iVar81 + 0xba) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xbc) =
                     (short)((int)*(short *)(iVar81 + 0xbc) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 200) = (short)((int)*(short *)(iVar81 + 200) << (uVar20 & 0x1f))
                ;
                *(short *)(iVar81 + 0xca) =
                     (short)((int)*(short *)(iVar81 + 0xca) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xcc) =
                     (short)((int)*(short *)(iVar81 + 0xcc) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xd8) =
                     (short)((int)*(short *)(iVar81 + 0xd8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xda) =
                     (short)((int)*(short *)(iVar81 + 0xda) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xdc) =
                     (short)((int)*(short *)(iVar81 + 0xdc) << (uVar20 & 0x1f));
              }
LAB_overlay0__8001dd8c:
              *(uint **)(iVar81 + 0x68) = puVar71;
              *(SVECTOR **)(iVar81 + 0x3a8) = pSVar65;
              *(int *)(iVar81 + 0x9c) = iVar19;
              gte_stRGB2();
              *(uint *)(iVar81 + 0xa4) = uVar61.value;
              uVar20 = iVar81 + 0xa5U & 3;
              puVar71 = (uint *)((iVar81 + 0xa5U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | uVar54.value >> (3 - uVar20) * 8;
              *(short *)(iVar81 + 0xae) = (short)uVar54.value;
              *(short *)(iVar81 + 0xbe) = (short)uVar61.value;
              *(short *)(iVar81 + 0xce) = (short)uVar47.value;
              *(short *)(iVar81 + 0xde) = (short)(uVar47.value >> 0x10);
              DAT_1f800388 = DAT_1f800068;
              puVar40 = &DAT_1f8000a8;
              iVar18 = 0x1f800000;
              ppuVar68 = &DAT_1f8000e8;
              ppuVar35 = &DAT_1f8000e8;
              pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
              do {
                bVar26 = *pbVar22;
                *ppuVar35 = puVar40;
                ppuVar35 = ppuVar35 + 1;
                if ((bVar26 & 0x20) != 0) {
                  gte_ldVXY0(puVar40);
                  gte_ldVZ0(pbVar22 + -0xb);
                  gte_rtps_b();
                  iVar19 = gte_stFLAG();
                  gte_stSXY2();
                  if (-1 < iVar19) {
                    *pbVar22 = bVar26 & 0x1f;
                  }
                }
                pbVar22 = pbVar22 + 0x10;
                puVar40 = puVar40 + 4;
              } while (ppuVar35 != (undefined4 **)&DAT_1f8000f8);
              DAT_1f80038c = DAT_1f800388;
              DAT_1f800390.bitfield._0_3_[0] = ((char *)SUB43(DAT_1f800388,0))[0];
              DAT_1f800390.bitfield._0_3_[1] = ((char *)SUB43(DAT_1f800388,0))[1];
              DAT_1f800390.bitfield._0_3_[2] = ((char *)SUB43(DAT_1f800388,0))[2];
              DAT_1f800390.value = CONCAT13(9,DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001de44:
              pSVar76 = (SVECTOR *)(ppuVar68 + 4);
              puVar40 = *ppuVar68;
              puVar44 = ppuVar68[1];
              puVar52 = ppuVar68[2];
              puVar79 = ppuVar68[3];
              sVar8 = *(short *)puVar40;
              sVar9 = *(short *)puVar44;
              sVar10 = *(short *)puVar52;
              iVar31 = (int)sVar8 + (int)sVar9;
              *(short *)(ppuVar68 + 8) = (short)(iVar31 >> 1);
              sVar11 = *(short *)puVar79;
              *(short *)(ppuVar68 + 0xc) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar19 = (int)sVar10 + (int)sVar11;
              *(short *)(ppuVar68 + 0x10) = (short)(iVar19 >> 1);
              *(short *)(ppuVar68 + 0x14) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)(ppuVar68 + 4) = (short)(iVar31 + iVar19 >> 2);
              sVar8 = *(short *)((int)puVar40 + 2);
              sVar9 = *(short *)((int)puVar44 + 2);
              sVar10 = *(short *)((int)puVar52 + 2);
              iVar31 = (int)sVar8 + (int)sVar9;
              *(short *)((int)ppuVar68 + 0x22) = (short)(iVar31 >> 1);
              sVar11 = *(short *)((int)puVar79 + 2);
              *(short *)((int)ppuVar68 + 0x32) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar19 = (int)sVar10 + (int)sVar11;
              *(short *)((int)ppuVar68 + 0x42) = (short)(iVar19 >> 1);
              *(short *)((int)ppuVar68 + 0x52) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)((int)ppuVar68 + 0x12) = (short)(iVar31 + iVar19 >> 2);
              sVar8 = *(short *)(puVar40 + 1);
              sVar9 = *(short *)(puVar44 + 1);
              sVar10 = *(short *)(puVar52 + 1);
              iVar31 = (int)sVar8 + (int)sVar9;
              *(short *)(ppuVar68 + 9) = (short)(iVar31 >> 1);
              sVar11 = *(short *)(puVar79 + 1);
              *(short *)(ppuVar68 + 0xd) = (short)((int)sVar9 + (int)sVar10 >> 1);
              iVar19 = (int)sVar10 + (int)sVar11;
              *(short *)(ppuVar68 + 0x11) = (short)(iVar19 >> 1);
              *(short *)(ppuVar68 + 0x15) = (short)((int)sVar11 + (int)sVar8 >> 1);
              *(short *)(ppuVar68 + 5) = (short)(iVar31 + iVar19 >> 2);
              gte_ldv0(pSVar76);
              gte_rtps_b();
              bVar26 = *(byte *)((int)puVar40 + 6);
              bVar1 = *(byte *)((int)puVar44 + 6);
              bVar2 = *(byte *)((int)puVar52 + 6);
              iVar31 = (uint)bVar26 + (uint)bVar1;
              *(char *)&pSVar76[2].pad = (char)(iVar31 >> 1);
              bVar3 = *(byte *)((int)puVar79 + 6);
              *(char *)&pSVar76[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              iVar19 = (uint)bVar2 + (uint)bVar3;
              *(char *)&pSVar76[6].pad = (char)(iVar19 >> 1);
              *(char *)&pSVar76[8].pad = (char)((int)((uint)bVar3 + (uint)bVar26) >> 1);
              *(char *)&pSVar76->pad = (char)(iVar31 + iVar19 >> 2);
              bVar26 = *(byte *)((int)puVar40 + 7);
              bVar1 = *(byte *)((int)puVar44 + 7);
              bVar2 = *(byte *)((int)puVar52 + 7);
              iVar31 = (uint)bVar26 + (uint)bVar1;
              *(char *)((int)&pSVar76[2].pad + 1) = (char)(iVar31 >> 1);
              bVar3 = *(byte *)((int)puVar79 + 7);
              *(char *)((int)&pSVar76[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              iVar19 = (uint)bVar2 + (uint)bVar3;
              *(char *)((int)&pSVar76[6].pad + 1) = (char)(iVar19 >> 1);
              *(char *)((int)&pSVar76[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar26) >> 1);
              *(char *)((int)&pSVar76->pad + 1) = (char)(iVar31 + iVar19 >> 2);
              uVar30 = *(ushort *)(iVar18 + 0x62);
              uVar12 = *(ushort *)(iVar18 + 0x5e);
              uVar13 = *(ushort *)(iVar18 + 0x60);
              pSVar65 = pSVar76;
              do {
                iVar31 = gte_stFLAG();
                gte_ldVXY0(pSVar65 + 2);
                gte_ldVZ0(&pSVar65[2].vz);
                gte_stSXY2();
                iVar19 = gte_stIR3();
                gte_rtps_b();
                bVar26 = iVar19 < (int)(uint)uVar30;
                if (pSVar65[1].vx < 0) {
                  bVar26 = bVar26 | 2;
                }
                bVar26 = bVar26 | ((int)(uVar12 - 1) < (int)pSVar65[1].vx) << 2;
                if (pSVar65[1].vy < 0) {
                  bVar26 = bVar26 | 8;
                }
                bVar26 = bVar26 | ((int)(uVar13 - 1) < (int)pSVar65[1].vy) << 4;
                if (iVar31 < 0) {
                  bVar26 = bVar26 | 0x20;
                }
                pSVar63 = pSVar65 + 2;
                *(byte *)((int)&pSVar65[1].pad + 1) = bVar26;
                pSVar65 = pSVar63;
              } while (pSVar63 != pSVar76 + 10);
              piVar36 = *(int **)(iVar18 + 0x68);
              iVar31 = *(int *)(iVar18 + 0xa0);
              uVar20 = iVar18 + 0xa5U & 3;
              uVar58 = *(int *)((iVar18 + 0xa5U) - uVar20) << (3 - uVar20) * 8 |
                       (uint)pSVar63 & 0xffffffffU >> (uVar20 + 1) * 8;
              uVar39.value = *(uint *)(iVar18 + 0xa4);
              ppuVar35 = ppuVar68 + 3;
              uVar20 = 2;
              iVar19 = 3;
              do {
                uVar20 = uVar20 & 3;
                puVar40 = *ppuVar35;
                puVar44 = ppuVar68[uVar20];
                bVar26 = *(byte *)((int)puVar40 + 0xf) |
                         *(byte *)((int)ppuVar68 + uVar20 * 0x10 + 0x2f) |
                         *(byte *)((int)puVar44 + 0xf);
                if ((bVar26 & 0x20) == 0) {
                  gte_ldSXY0(puVar40 + 2);
                  gte_ldSXY1(ppuVar68 + uVar20 * 4 + 10);
                  gte_ldSXY2(puVar44 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar49 = (uint)(short *)((int)puVar40 + 6U) & 3;
                  uVar58 = uVar58 & -1 << (4 - uVar49) * 8 |
                           *(uint *)((int)(short *)((int)puVar40 + 6U) - uVar49) >> uVar49 * 8;
                  uVar20 = (int)ppuVar68 + uVar20 * 0x10 + 0x26;
                  uVar49 = uVar20 & 3;
                  uVar39.value = uVar39.value & -1 << (4 - uVar49) * 8 |
                           *(uint *)(uVar20 - uVar49) >> uVar49 * 8;
                  piVar36[3] = uVar58;
                  uVar20 = (uint)(short *)((int)puVar44 + 6U) & 3;
                  uVar49 = *(uint *)((int)(short *)((int)puVar44 + 6U) - uVar20);
                  piVar36[5] = uVar39.value;
                  piVar36[7] = bVar26 & 0x20 & -1 << (4 - uVar20) * 8 | uVar49 >> uVar20 * 8;
                  *piVar36 = (int)(piVar36 + -0x1e3ffff8);
                  iVar43 = gte_stMAC0();
                  gte_stSXY2();
                  piVar36[1] = iVar31 + -0x8000000;
                  if (iVar43 != 0) {
                    *(int **)(iVar18 + 0x38c) = piVar36;
                    piVar36 = piVar36 + 8;
                  }
                }
                ppuVar35 = ppuVar35 + -1;
                iVar43 = iVar19 + -1;
                *(int **)(iVar18 + 0x68) = piVar36;
                uVar20 = iVar19 - 2;
                iVar19 = iVar43;
              } while (-1 < iVar43);
              uVar20 = 3;
              if (*(uint *)(iVar18 + 0x68) <= *(uint *)(iVar18 + 0x6c)) {
                uVar39.value = 2;
                ppuVar35 = ppuVar68;
                do {
                  ppuVar72 = ppuVar35 + uVar20 * 4 + 8;
                  ppuVar64 = ppuVar35 + (uVar39.value & 3) * 4 + 8;
                  puVar40 = ppuVar35[uVar20];
                  uVar39.value = uVar20;
                  if ((*(byte *)((int)puVar40 + 0xf) & *(byte *)((int)ppuVar72 + 0xf) &
                       *(byte *)((int)ppuVar35 + 0x1f) & *(byte *)((int)ppuVar64 + 0xf) & 0x1f) == 0
                     ) {
                    if (((*(byte *)((int)puVar40 + 0xf) | *(byte *)((int)ppuVar72 + 0xf) |
                          *(byte *)((int)ppuVar35 + 0x1f) | *(byte *)((int)ppuVar64 + 0xf)) & 0x20)
                        == 0) {
                      puVar71 = *(uint **)(iVar18 + 0x68);
                      gte_ldSXY0(ppuVar72 + 2);
                      gte_ldSXY1(puVar40 + 2);
                      gte_ldSXY2(ppuVar35 + 6);
                      gte_stSXY0();
                      gte_stSXY1();
                      gte_nclip_b();
                      uVar58 = *(uint *)(iVar18 + 0xa0);
                      *puVar71 = (uint)(puVar71 + -0x1dbffff6);
                      puVar71[1] = uVar58;
                      uVar30 = *(ushort *)(iVar18 + 0x394);
                      iVar31 = gte_stMAC0();
                      gte_ldSXY0(ppuVar64 + 2);
                      uVar58 = iVar18 + 0xa5U & 3;
                      uVar17.value = *(uint *)(iVar18 + 0xa4);
                      gte_nclip_b();
                      uVar49 = (uint)(short *)((int)puVar40 + 6U) & 3;
                      uVar57 = (*(int *)((iVar18 + 0xa5U) - uVar58) << (3 - uVar58) * 8 |
                               (uint)(puVar71 + -0x1dbffff6) & 0xffffffffU >> (uVar58 + 1) * 8) &
                               -1 << (4 - uVar49) * 8 |
                               *(uint *)((int)(short *)((int)puVar40 + 6U) - uVar49) >> uVar49 * 8;
                      uVar58 = (uint)(short *)((int)ppuVar72 + 6U) & 3;
                      uVar56.value = *(uint *)((int)(short *)((int)ppuVar72 + 6U) - uVar58);
                      puVar71[3] = uVar57;
                      uVar49 = (int)ppuVar35 + 0x16U & 3;
                      uVar66.value = *(uint *)(((int)ppuVar35 + 0x16U) - uVar49);
                      puVar71[5] = uVar17.value & -1 << (4 - uVar58) * 8 | uVar56.value >> uVar58 * 8;
                      uVar58 = (uint)(short *)((int)ppuVar64 + 6U) & 3;
                      uVar56.value = *(uint *)((int)(short *)((int)ppuVar64 + 6U) - uVar58);
                      puVar71[9] = -1 << (4 - uVar49) * 8 & 0x77000000U | uVar66.value >> uVar49 * 8;
                      puVar71[7] = uVar57 & -1 << (4 - uVar58) * 8 | uVar56.value >> uVar58 * 8;
                      iVar19 = gte_stMAC0();
                      gte_stSXY0();
                      uVar58 = iVar31 - iVar19;
                      gte_stSXY2();
                      if ((int)uVar58 < 0) {
                        uVar58 = -uVar58;
                      }
                      if (uVar58 <= uVar30) {
                        *(uint **)(iVar18 + 0x38c) = puVar71;
                        *(uint **)(iVar18 + 0x68) = puVar71 + 10;
                        goto LAB_overlay0__8001e284;
                      }
                    }
                    if (ppuVar35 != (undefined4 **)(iVar18 + 0x328)) goto code_r0x8001e260;
                  }
LAB_overlay0__8001e284:
                  while( true ) {
                    uVar20 = uVar39.value - 1;
                    uVar39.value = uVar39.value - 2;
                    if (-1 < (int)uVar20) break;
                    if (ppuVar35 == (undefined4 **)(iVar18 + 0xe8)) {
                      uVar20 = *(uint *)(iVar18 + 0x388);
                      if (*(uint *)(iVar18 + 0x6c) < *(uint *)(iVar18 + 0x68)) {
                        *(uint *)(iVar18 + 0x68) = uVar20;
                      }
                      else if (*(uint *)(iVar18 + 0x68) != uVar20) {
                        iVar31 = *(int *)(iVar18 + 0x38c);
                        uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                        uVar58 = uVar39.value & 3;
                        iVar19 = *(int *)(uVar39.value - uVar58);
                        uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                        uVar49 = uVar39.value & 3;
                        puVar71 = (uint *)(uVar39.value - uVar49);
                        *puVar71 = *puVar71 & -1 << (uVar49 + 1) * 8 |
                                   (uVar20 << 8) >> (3 - uVar49) * 8;
                        uVar20 = iVar31 + 2;
                        uVar39.value = uVar20 & 3;
                        puVar71 = (uint *)(uVar20 - uVar39.value);
                        *puVar71 = *puVar71 & -1 << (uVar39.value + 1) * 8 |
                                   (uint)(iVar19 << (3 - uVar58) * 8) >> (3 - uVar39.value) * 8;
                      }
                      goto LAB_overlay0__8001e2e0;
                    }
                    ppuVar68 = ppuVar35 + -0x11;
                    ppuVar35 = ppuVar35 + -0x18;
                    uVar39.value = (uint)*(byte *)ppuVar68;
                  }
                } while( true );
              }
              *(undefined4 *)(iVar18 + 0x68) = *(undefined4 *)(iVar18 + 0x388);
LAB_overlay0__8001e2e0:
              puVar71 = *(uint **)(iVar81 + 0x68);
              pSVar65 = *(SVECTOR **)(iVar81 + 0x3a8);
              if (puVar71 < *(uint **)(iVar81 + 0x6c)) goto LAB_overlay0__8001e358;
              *(uint **)(iVar81 + 0x68) = puVar71;
              goto LAB_overlay0__8001e36c;
            }
            if (0x800 < iVar18) goto LAB_overlay0__8001dd8c;
            uVar20 = iVar19 + 2U & 3;
            iVar18 = *(int *)((iVar19 + 2U) - uVar20);
            gte_stRGB2();
            bVar14 = *(uint **)(iVar81 + 0x6c) < puVar71;
            puVar71[3] = uVar54.value;
            puVar71[5] = uVar61.value;
            puVar71[9] = uVar47.value;
            uVar39.value = (int)puVar71 + 0x1dU & 3;
            puVar16 = (uint *)(((int)puVar71 + 0x1dU) - uVar39.value);
            *puVar16 = *puVar16 & -1 << (uVar39.value + 1) * 8 | uVar47.value >> (3 - uVar39.value) * 8;
            gte_stSXY0();
            gte_stSXY1();
            puVar71[4] = *(uint *)(iVar81 + 0xc0);
            gte_stSXY2();
            uVar39.value = (int)puVar71 << 8;
            *puVar71 = (iVar18 << (3 - uVar20) * 8 | uVar49 - 1 & 0xffffffffU >> (uVar20 + 1) * 8)
                       >> 8 | 0x9000000;
            puVar71 = puVar71 + 10;
            uVar20 = iVar19 + 2U & 3;
            puVar16 = (uint *)((iVar19 + 2U) - uVar20);
            *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
            if (bVar14) break;
          }
        }
LAB_overlay0__8001e358:
        pSVar65 = pSVar65 + 3;
      } while (pSVar65 != *(SVECTOR **)(iVar81 + 0x3ac));
      *(uint **)(iVar81 + 0x68) = puVar71;
    }
LAB_overlay0__8001e36c:
    pSVar65 = ppSVar89[7];
    iVar81 = 0x1f800000;
    if (*(ushort *)(ppSVar89 + 0xf) != 0) {
      DAT_1f800394 = 0x480;
      pSVar76 = pSVar65 + (uint)*(ushort *)(ppSVar89 + 0xf) * 4;
      puVar71 = DAT_1f800068;
      do {
        iVar18 = *(int *)(iVar81 + 0x70);
        uVar80.b16._0_2_ = pSVar65->vx;
        uVar80.b16._2_2_ = pSVar65->vy;
        puVar44 = (undefined4 *)((uVar80.value & 0x3ff) * 0x10 + iVar18);
        puVar41 = (uint *)(((int)uVar80.value >> 6 & 0x3ff0U) + iVar18);
        puVar40 = (undefined4 *)(((int)uVar80.value >> 0x10 & 0x3ff0U) + iVar18);
        uVar39.value = puVar44[1];
        uVar58 = puVar41[1];
        uVar49 = puVar40[1];
        *(undefined4 **)(iVar81 + 0xe8) = puVar44;
        *(uint **)(iVar81 + 0xec) = puVar41;
        *(undefined4 **)(iVar81 + 0xf0) = puVar40;
        uVar20 = iVar81 + 0xadU & 3;
        puVar16 = (uint *)((iVar81 + 0xadU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xb7) = (char)uVar39.value;
        uVar20 = iVar81 + 0xbdU & 3;
        puVar16 = (uint *)((iVar81 + 0xbdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 199) = (char)uVar58;
        uVar20 = iVar81 + 0xcdU & 3;
        puVar16 = (uint *)((iVar81 + 0xcdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar49 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xd7) = (char)uVar49;
        if ((uVar39.value & uVar58 & uVar49 & 0x1f) == 0) {
          gte_ldSXY0(puVar44[2]);
          gte_ldSXY1(puVar40[2]);
          gte_ldSXY2(puVar41[2]);
          gte_nclip_b();
          uVar20 = gte_stMAC0();
          uVar56.value = (uVar39.value | uVar58 | uVar49) & 0x20;
          if (((uVar20 | uVar56.value) != 0) && (-1 < (int)(uVar20 & uVar80.value & uVar56.value - 0x20))) {
            uVar66.value = uVar80.value >> 0x1e & 1;
            if ((int)uVar39.value < (int)uVar58 == uVar66.value) {
              uVar39.value = uVar58;
            }
            if ((int)uVar39.value < (int)uVar49 == uVar66.value) {
              uVar39.value = uVar49;
            }
            iVar18 = (((int)uVar39.value >> 0x10) << (*(uint *)(iVar81 + 0x98) & 0x1f)) >> 0xd;
            if (iVar18 < 0) {
              iVar18 = 0;
            }
            iVar18 = iVar18 + (-uVar66.value & 0x60);
            iVar19 = iVar18 * 4;
            if (0xfff < iVar18) {
              iVar19 = 0x3ffc;
            }
            iVar19 = *(int *)(iVar81 + 100) + iVar19;
            uVar62.b16._0_2_ = pSVar65[1].vx;
            uVar62.b16._2_2_ = pSVar65[1].vy;
            uVar28.b16._0_2_ = pSVar65[3].vx;
            uVar28.b16._2_2_ = pSVar65[3].vy;
            uVar24.b16._0_2_ = pSVar65[3].vz;
            uVar24.b16._2_2_ = pSVar65[3].pad;
            gte_ldIR0(0);
            gte_ldRGB(uVar62.b16);
            gte_ldRGB0(uVar62.b16);
            gte_ldRGB1(uVar28.b16);
            gte_ldRGB2(uVar24.b16);
            gte_dpct();
            iVar18 = gte_stRGB2();
            uVar82.b16._0_2_ = pSVar65[1].vz;
            uVar82.b16._2_2_ = pSVar65[1].pad;
            uVar87.b16._0_2_ = pSVar65[2].vx;
            uVar87.b16._2_2_ = pSVar65[2].vy;
            uVar88.b16._0_2_ = pSVar65[2].vz;
            uVar88.b16._2_2_ = pSVar65[2].pad;
            uVar39.value = *puVar41;
            uVar15 = *puVar40;
            *(undefined4 *)(iVar81 + 0xa8) = *puVar44;
            *(uint *)(iVar81 + 0xb8) = uVar39.value;
            *(undefined4 *)(iVar81 + 200) = uVar15;
            if (uVar56.value != 0) {
              if ((int)uVar80.value < 0) {
                gte_ldR11R12((int)*(short *)(iVar81 + 0xb8));
                gte_ldR22R23((int)*(short *)(iVar81 + 0xba));
                gte_ldR33((int)*(short *)(iVar81 + 0xbc));
                gte_ldIR1((int)*(short *)(iVar81 + 200));
                gte_ldIR2((int)*(short *)(iVar81 + 0xca));
                gte_ldIR3((int)*(short *)(iVar81 + 0xcc));
                gte_op0_b(0);
                iVar31 = gte_stMAC1();
                iVar43 = gte_stMAC2();
                iVar50 = gte_stMAC3();
                gte_ldR11R12(0x1000);
                gte_ldR22R23(0x1000);
                gte_ldR33(0x1000);
                if (-1 < (longlong)(int)*(short *)(iVar81 + 0xac) * (longlong)iVar50 +
                         (longlong)(int)*(short *)(iVar81 + 0xa8) * (longlong)iVar31 +
                         (longlong)(int)*(short *)(iVar81 + 0xaa) * (longlong)iVar43)
                goto LAB_overlay0__8001ec68;
              }
              gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar81 + 0xe8) + 0xc) |
                                      *(ushort *)(*(int *)(iVar81 + 0xec) + 0xc) |
                                     *(ushort *)(*(int *)(iVar81 + 0xf0) + 0xc)));
              iVar31 = gte_stLZCR();
              uVar20 = iVar31 - 0x11;
              if (0 < (int)uVar20) {
                *(short *)(iVar81 + 0xa8) =
                     (short)((int)*(short *)(iVar81 + 0xa8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xaa) =
                     (short)((int)*(short *)(iVar81 + 0xaa) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xac) =
                     (short)((int)*(short *)(iVar81 + 0xac) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xb8) =
                     (short)((int)*(short *)(iVar81 + 0xb8) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xba) =
                     (short)((int)*(short *)(iVar81 + 0xba) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xbc) =
                     (short)((int)*(short *)(iVar81 + 0xbc) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 200) = (short)((int)*(short *)(iVar81 + 200) << (uVar20 & 0x1f))
                ;
                *(short *)(iVar81 + 0xca) =
                     (short)((int)*(short *)(iVar81 + 0xca) << (uVar20 & 0x1f));
                *(short *)(iVar81 + 0xcc) =
                     (short)((int)*(short *)(iVar81 + 0xcc) << (uVar20 & 0x1f));
              }
LAB_overlay0__8001e6b8:
              *(uint **)(iVar81 + 0x68) = puVar71;
              *(SVECTOR **)(iVar81 + 0x3a8) = pSVar65;
              *(int *)(iVar81 + 0x9c) = iVar19;
              *(int *)(iVar81 + 0xa0) = iVar18;
              *(uint *)(iVar81 + 0xa4) = uVar87.value;
              uVar20 = iVar81 + 0xa5U & 3;
              puVar71 = (uint *)((iVar81 + 0xa5U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | uVar82.value >> (3 - uVar20) * 8;
              gte_stRGB0();
              uVar20 = iVar81 + 0xb6U & 3;
              puVar71 = (uint *)((iVar81 + 0xb6U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | (uint)(iVar18 << 8) >> (3 - uVar20) * 8
              ;
              gte_stRGB1();
              uVar20 = iVar81 + 0xc6U & 3;
              puVar71 = (uint *)((iVar81 + 0xc6U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | (uint)(iVar19 << 8) >> (3 - uVar20) * 8
              ;
              uVar20 = iVar81 + 0xd6U & 3;
              puVar71 = (uint *)((iVar81 + 0xd6U) - uVar20);
              *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | (uint)(iVar18 << 8) >> (3 - uVar20) * 8
              ;
              *(short *)(iVar81 + 0xae) = (short)uVar82.value;
              *(short *)(iVar81 + 0xbe) = (short)uVar87.value;
              *(short *)(iVar81 + 0xce) = (short)uVar88.value;
              DAT_1f800388 = DAT_1f800068;
              gte_stSXY0();
              gte_stSXY1();
              gte_stSXY2();
              puVar71 = &DAT_1f8000a8;
              iVar18 = 0x1f800000;
              ppuVar68 = &DAT_1f8000e8;
              ppuVar35 = &DAT_1f8000e8;
              pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
              do {
                bVar26 = *pbVar22;
                *ppuVar35 = puVar71;
                ppuVar35 = ppuVar35 + 1;
                if ((bVar26 & 0x20) != 0) {
                  gte_ldVXY0(puVar71);
                  gte_ldVZ0(pbVar22 + -0xb);
                  gte_rtps_b();
                  iVar19 = gte_stFLAG();
                  gte_stSXY2();
                  if (-1 < iVar19) {
                    *pbVar22 = bVar26 & 0x1f;
                  }
                }
                pbVar22 = pbVar22 + 0x10;
                puVar71 = puVar71 + 4;
              } while (ppuVar35 != &DAT_1f8000f4);
              DAT_1f80038c = DAT_1f800388;
              DAT_1f800390.bitfield._0_3_[0] = ((char *)SUB43(DAT_1f800388,0))[0];
              DAT_1f800390.bitfield._0_3_[1] = ((char *)SUB43(DAT_1f800388,0))[1];
              DAT_1f800390.bitfield._0_3_[2] = ((char *)SUB43(DAT_1f800388,0))[2];
              DAT_1f800390.value = CONCAT13(9,DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001e794:
              pSVar63 = (SVECTOR *)(ppuVar68 + 4);
              puVar40 = *ppuVar68;
              puVar44 = ppuVar68[1];
              puVar52 = ppuVar68[2];
              sVar8 = *(short *)puVar40;
              sVar9 = *(short *)puVar44;
              sVar10 = *(short *)puVar52;
              *(short *)(ppuVar68 + 4) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar68 + 8) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar68 + 0xc) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)((int)puVar40 + 2);
              sVar9 = *(short *)((int)puVar44 + 2);
              sVar10 = *(short *)((int)puVar52 + 2);
              *(short *)((int)ppuVar68 + 0x12) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)((int)ppuVar68 + 0x22) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)((int)ppuVar68 + 0x32) = (short)((int)sVar10 + (int)sVar8 >> 1);
              sVar8 = *(short *)(puVar40 + 1);
              sVar9 = *(short *)(puVar44 + 1);
              sVar10 = *(short *)(puVar52 + 1);
              *(short *)(ppuVar68 + 5) = (short)((int)sVar8 + (int)sVar9 >> 1);
              *(short *)(ppuVar68 + 9) = (short)((int)sVar9 + (int)sVar10 >> 1);
              *(short *)(ppuVar68 + 0xd) = (short)((int)sVar10 + (int)sVar8 >> 1);
              uVar58 = puVar40[3];
              uVar20 = puVar44[3];
              uVar39.value = puVar52[3];
              ppuVar68[7] = (undefined4 *)((int)((uVar58 & 0xfefefe) + (uVar20 & 0xfefefe)) >> 1);
              ppuVar68[0xb] = (undefined4 *)((int)((uVar20 & 0xfefefe) + (uVar39.value & 0xfefefe)) >> 1);
              ppuVar68[0xf] = (undefined4 *)((int)((uVar39.value & 0xfefefe) + (uVar58 & 0xfefefe)) >> 1);
              gte_ldv0(pSVar63);
              gte_rtps_b();
              bVar26 = *(byte *)((int)puVar40 + 6);
              bVar1 = *(byte *)((int)puVar44 + 6);
              bVar2 = *(byte *)((int)puVar52 + 6);
              *(char *)&pSVar63->pad = (char)((int)((uint)bVar26 + (uint)bVar1) >> 1);
              *(char *)&pSVar63[2].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)&pSVar63[4].pad = (char)((int)((uint)bVar2 + (uint)bVar26) >> 1);
              bVar26 = *(byte *)((int)puVar40 + 7);
              bVar1 = *(byte *)((int)puVar44 + 7);
              bVar2 = *(byte *)((int)puVar52 + 7);
              *(char *)((int)&pSVar63->pad + 1) = (char)((int)((uint)bVar26 + (uint)bVar1) >> 1);
              *(char *)((int)&pSVar63[2].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
              *(char *)((int)&pSVar63[4].pad + 1) = (char)((int)((uint)bVar2 + (uint)bVar26) >> 1);
              uVar30 = *(ushort *)(iVar18 + 0x62);
              uVar12 = *(ushort *)(iVar18 + 0x5e);
              uVar13 = *(ushort *)(iVar18 + 0x60);
              pSVar65 = pSVar63;
              do {
                iVar31 = gte_stFLAG();
                gte_ldVXY0(pSVar65 + 2);
                gte_ldVZ0(&pSVar65[2].vz);
                gte_stSXY2();
                iVar19 = gte_stIR3();
                gte_rtps_b();
                bVar26 = iVar19 < (int)(uint)uVar30;
                if (pSVar65[1].vx < 0) {
                  bVar26 = bVar26 | 2;
                }
                bVar26 = bVar26 | ((int)(uVar12 - 1) < (int)pSVar65[1].vx) << 2;
                if (pSVar65[1].vy < 0) {
                  bVar26 = bVar26 | 8;
                }
                bVar26 = bVar26 | ((int)(uVar13 - 1) < (int)pSVar65[1].vy) << 4;
                if (iVar31 < 0) {
                  bVar26 = bVar26 | 0x20;
                }
                pSVar59 = pSVar65 + 2;
                *(byte *)((int)&pSVar65[1].pad + 1) = bVar26;
                pSVar65 = pSVar59;
              } while (pSVar59 != pSVar63 + 6);
              piVar36 = *(int **)(iVar18 + 0x68);
              uVar4 = *(undefined *)(iVar18 + 0xa3);
              uVar20 = iVar18 + 0xa5U & 3;
              uVar80.value = *(int *)((iVar18 + 0xa5U) - uVar20) << (3 - uVar20) * 8 |
                       uVar80.value & 0xffffffffU >> (uVar20 + 1) * 8;
              uVar20 = *(uint *)(iVar18 + 0xa4);
              iVar19 = 2;
              ppuVar35 = ppuVar68 + 2;
              do {
                iVar31 = iVar19 + -1;
                if (iVar19 == 0) {
                  iVar31 = 2;
                }
                puVar40 = *ppuVar35;
                puVar44 = ppuVar68[iVar31];
                bVar26 = *(byte *)((int)puVar40 + 0xf) |
                         *(byte *)((int)ppuVar68 + iVar31 * 0x10 + 0x1f) |
                         *(byte *)((int)puVar44 + 0xf);
                if ((bVar26 & 0x20) == 0) {
                  gte_ldSXY0(puVar40 + 2);
                  gte_ldSXY1(ppuVar68 + iVar31 * 4 + 6);
                  gte_ldSXY2(puVar44 + 2);
                  gte_stSXY0();
                  gte_stSXY1();
                  gte_nclip_b();
                  uVar39.value = (uint)(short *)((int)puVar40 + 6U) & 3;
                  uVar80.value = uVar80.value & -1 << (4 - uVar39.value) * 8 |
                           *(uint *)((int)(short *)((int)puVar40 + 6U) - uVar39.value) >> uVar39.value * 8;
                  uVar39.value = (int)ppuVar68 + iVar31 * 0x10 + 0x16;
                  uVar58 = uVar39.value & 3;
                  uVar20 = uVar20 & -1 << (4 - uVar58) * 8 |
                           *(uint *)(uVar39.value - uVar58) >> uVar58 * 8;
                  piVar36[3] = uVar80.value;
                  uVar39.value = (uint)(short *)((int)puVar44 + 6U) & 3;
                  uVar58 = *(uint *)((int)(short *)((int)puVar44 + 6U) - uVar39.value);
                  piVar36[6] = uVar20;
                  piVar36[9] = bVar26 & 0x20 & -1 << (4 - uVar39.value) * 8 | uVar58 >> uVar39.value * 8;
                  *piVar36 = (int)(piVar36 + -0x1dbffff6);
                  iVar43 = gte_stMAC0();
                  gte_stSXY2();
                  if (iVar43 != 0) {
                    puVar52 = ppuVar68[iVar31 * 4 + 7];
                    piVar36[1] = puVar40[3];
                    iVar31 = puVar44[3];
                    piVar36[4] = (int)puVar52;
                    piVar36[7] = iVar31;
                    *(undefined *)((int)piVar36 + 7) = uVar4;
                    *(int **)(iVar18 + 0x38c) = piVar36;
                    piVar36 = piVar36 + 10;
                  }
                }
                ppuVar35 = ppuVar35 + -1;
                iVar19 = iVar19 + -1;
                *(int **)(iVar18 + 0x68) = piVar36;
              } while (-1 < iVar19);
              uVar20 = 3;
              ppuVar35 = ppuVar68;
              if (*(uint *)(iVar18 + 0x68) <= *(uint *)(iVar18 + 0x6c)) {
                do {
                  if (uVar20 == 3) {
                    ppuVar72 = ppuVar35 + 4;
                    ppuVar64 = ppuVar35 + 8;
                    ppuVar45 = ppuVar35 + 0xc;
                  }
                  else {
                    ppuVar72 = (undefined4 **)ppuVar35[uVar20];
                    ppuVar64 = ppuVar35 + uVar20 * 4 + 4;
                    if (uVar20 == 0) {
                      ppuVar45 = ppuVar35 + 0xc;
                    }
                    else {
                      ppuVar45 = ppuVar35 + (uVar20 - 1) * 4 + 4;
                    }
                  }
                  if ((*(byte *)((int)ppuVar72 + 0xf) & *(byte *)((int)ppuVar64 + 0xf) &
                       *(byte *)((int)ppuVar45 + 0xf) & 0x1f) == 0) {
                    if (((*(byte *)((int)ppuVar72 + 0xf) | *(byte *)((int)ppuVar64 + 0xf) |
                         *(byte *)((int)ppuVar45 + 0xf)) & 0x20) == 0) {
                      piVar36 = *(int **)(iVar18 + 0x68);
                      gte_ldSXY0(ppuVar72 + 2);
                      gte_ldSXY1(ppuVar64 + 2);
                      gte_ldSXY2(ppuVar45 + 2);
                      gte_stSXY0();
                      gte_stSXY1();
                      gte_nclip_b();
                      uVar30 = *(ushort *)(iVar18 + 0x394);
                      uVar39.value = iVar18 + 0xa5U & 3;
                      uVar58 = (uint)(short *)((int)ppuVar72 + 6U) & 3;
                      uVar66.value = *(uint *)(iVar18 + 0xa4);
                      uVar49 = (uint)(short *)((int)ppuVar64 + 6U) & 3;
                      uVar56.value = *(uint *)((int)(short *)((int)ppuVar64 + 6U) - uVar49);
                      piVar36[3] = (*(int *)((iVar18 + 0xa5U) - uVar39.value) << (3 - uVar39.value) * 8 |
                                   iVar18 + 0x328U & 0xffffffffU >> (uVar39.value + 1) * 8) &
                                   -1 << (4 - uVar58) * 8 |
                                   *(uint *)((int)(short *)((int)ppuVar72 + 6U) - uVar58) >>
                                   uVar58 * 8;
                      uVar39.value = gte_stMAC0();
                      gte_stSXY2();
                      if ((int)uVar39.value < 0) {
                        uVar39.value = -uVar39.value;
                      }
                      *piVar36 = (int)(piVar36 + -0x1dbffff6);
                      if (uVar39.value <= uVar30) {
                        uVar39.value = (uint)(short *)((int)ppuVar45 + 6U) & 3;
                        uVar58 = *(uint *)((int)(short *)((int)ppuVar45 + 6U) - uVar39.value);
                        piVar36[6] = uVar66.value & -1 << (4 - uVar49) * 8 | uVar56.value >> uVar49 * 8;
                        puVar44 = ppuVar72[3];
                        piVar36[9] = iVar18 + 0x328U & -1 << (4 - uVar39.value) * 8 | uVar58 >> uVar39.value * 8
                        ;
                        puVar40 = ppuVar64[3];
                        piVar36[1] = (int)puVar44;
                        puVar44 = ppuVar45[3];
                        piVar36[4] = (int)puVar40;
                        uVar4 = *(undefined *)(iVar18 + 0xa3);
                        piVar36[7] = (int)puVar44;
                        *(undefined *)((int)piVar36 + 7) = uVar4;
                        *(int **)(iVar18 + 0x38c) = piVar36;
                        *(int **)(iVar18 + 0x68) = piVar36 + 10;
                        goto LAB_overlay0__8001eb98;
                      }
                    }
                    if (ppuVar35 != (undefined4 **)(iVar18 + 0x328)) goto LAB_overlay0__8001e678;
                  }
LAB_overlay0__8001eb98:
                  while (uVar20 = uVar20 - 1, (int)uVar20 < 0) {
                    if (ppuVar35 == (undefined4 **)(iVar18 + 0xe8)) {
                      uVar20 = *(uint *)(iVar18 + 0x388);
                      if (*(uint *)(iVar18 + 0x6c) < *(uint *)(iVar18 + 0x68)) {
                        *(uint *)(iVar18 + 0x68) = uVar20;
                      }
                      else if (*(uint *)(iVar18 + 0x68) != uVar20) {
                        iVar31 = *(int *)(iVar18 + 0x38c);
                        uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                        uVar58 = uVar39.value & 3;
                        iVar19 = *(int *)(uVar39.value - uVar58);
                        uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                        uVar49 = uVar39.value & 3;
                        puVar71 = (uint *)(uVar39.value - uVar49);
                        *puVar71 = *puVar71 & -1 << (uVar49 + 1) * 8 |
                                   (uVar20 << 8) >> (3 - uVar49) * 8;
                        uVar20 = iVar31 + 2;
                        uVar39.value = uVar20 & 3;
                        puVar71 = (uint *)(uVar20 - uVar39.value);
                        *puVar71 = *puVar71 & -1 << (uVar39.value + 1) * 8 |
                                   (uint)(iVar19 << (3 - uVar58) * 8) >> (3 - uVar39.value) * 8;
                      }
                      goto LAB_overlay0__8001ebf8;
                    }
                    pbVar22 = (byte *)((int)ppuVar35 + -0x41);
                    ppuVar35 = ppuVar35 + -0x18;
                    uVar20 = (uint)(*pbVar22 >> 6);
                  }
                } while( true );
              }
              *(undefined4 *)(iVar18 + 0x68) = *(undefined4 *)(iVar18 + 0x388);
LAB_overlay0__8001ebf8:
              puVar71 = *(uint **)(iVar81 + 0x68);
              pSVar65 = *(SVECTOR **)(iVar81 + 0x3a8);
              if (puVar71 < *(uint **)(iVar81 + 0x6c)) goto LAB_overlay0__8001ec68;
              *(uint **)(iVar81 + 0x68) = puVar71;
              goto LAB_overlay0__8001ec78;
            }
            if ((int)uVar20 < 0) {
              uVar20 = -uVar20;
            }
            if (0x480 < (int)uVar20) goto LAB_overlay0__8001e6b8;
            puVar16 = *(uint **)(iVar81 + 0x6c);
            uVar20 = iVar19 + 2U & 3;
            uVar20 = *(int *)((iVar19 + 2U) - uVar20) << (3 - uVar20) * 8 |
                     uVar39.value & 0xffffffffU >> (uVar20 + 1) * 8;
            gte_strgb3_gt3(puVar71);
            puVar71[3] = uVar82.value;
            puVar71[6] = uVar87.value;
            puVar71[9] = uVar88.value;
            bVar14 = puVar16 < puVar71;
            gte_stSXY0();
            gte_stSXY1();
            gte_stSXY2();
            uVar39.value = (int)puVar71 << 8;
            *puVar71 = uVar20 >> 8 | 0x9000000;
            puVar71 = puVar71 + 10;
            uVar20 = iVar19 + 2U & 3;
            puVar16 = (uint *)((iVar19 + 2U) - uVar20);
            *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
            if (bVar14) break;
          }
        }
LAB_overlay0__8001ec68:
        pSVar65 = pSVar65 + 4;
      } while (pSVar65 != pSVar76);
      *(uint **)(iVar81 + 0x68) = puVar71;
    }
LAB_overlay0__8001ec78:
    pSVar65 = ppSVar89[8];
    iVar81 = 0x1f800000;
    if (*(ushort *)((int)ppSVar89 + 0x3e) != 0) {
      DAT_1f800394 = 0x800;
      DAT_1f8003b0_b16->_0_2_ = pSVar65->vx;
      DAT_1f8003b0_b16->_2_2_ = pSVar65->vy;
      _DAT_1f8003ac = (SVECTOR *)((int)pSVar65 + (uint)*(ushort *)((int)ppSVar89 + 0x3e) * 0x24);
      puVar71 = DAT_1f800068;
      do {
        iVar18 = *(int *)(iVar81 + 0x70);
        uVar57 = *(uint *)(iVar81 + 0x3b0);
        uVar15 = *(undefined4 *)&pSVar65[4].vz;
        puVar40 = (undefined4 *)((uVar57 & 0x3ff) * 0x10 + iVar18);
        *(undefined4 **)(iVar81 + 0xe8) = puVar40;
        uVar83.b16._0_2_ = pSVar65->vz;
        uVar83.b16._2_2_ = pSVar65->pad;
        *(undefined4 *)(iVar81 + 0x3b0) = uVar15;
        puVar52 = (undefined4 *)(((int)uVar57 >> 6 & 0x3ff0U) + iVar18);
        *(undefined4 **)(iVar81 + 0xec) = puVar52;
        uVar58 = puVar40[1];
        puVar79 = (undefined4 *)(((int)uVar57 >> 0x10 & 0x3ff0U) + iVar18);
        *(undefined4 **)(iVar81 + 0xf0) = puVar79;
        uVar39.value = puVar52[1];
        uVar20 = iVar81 + 0xadU & 3;
        puVar16 = (uint *)((iVar81 + 0xadU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xb7) = (char)uVar58;
        puVar44 = (undefined4 *)((uVar83.value & 0x3ff) * 0x10 + iVar18);
        *(undefined4 **)(iVar81 + 0xf4) = puVar44;
        uVar56.value = puVar79[1];
        uVar20 = iVar81 + 0xbdU & 3;
        puVar16 = (uint *)((iVar81 + 0xbdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar39.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 199) = (char)uVar39.value;
        uVar49 = uVar57 >> 0x1e & 1;
        uVar66.value = puVar44[1];
        uVar20 = iVar81 + 0xcdU & 3;
        puVar16 = (uint *)((iVar81 + 0xcdU) - uVar20);
        *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar56.value >> (3 - uVar20) * 8;
        *(char *)(iVar81 + 0xd7) = (char)uVar56.value;
        uVar20 = uVar58;
        if ((int)uVar58 < (int)uVar39.value == uVar49) {
          uVar20 = uVar39.value;
        }
        uVar90.b16._0_2_ = pSVar65[1].vx;
        uVar90.b16._2_2_ = pSVar65[1].vy;
        uVar17.value = iVar81 + 0xddU & 3;
        puVar16 = (uint *)((iVar81 + 0xddU) - uVar17.value);
        *puVar16 = *puVar16 & -1 << (uVar17.value + 1) * 8 | uVar66.value >> (3 - uVar17.value) * 8;
        *(char *)(iVar81 + 0xe7) = (char)uVar66.value;
        uVar15 = puVar40[2];
        gte_ldRGB(uVar90.b16);
        if ((uVar58 & uVar39.value & uVar56.value & uVar66.value & 0x1f) == 0) {
          gte_ldSXY2(uVar15);
          if ((int)uVar20 < (int)uVar56.value == uVar49) {
            uVar20 = uVar56.value;
          }
          uVar85 = puVar79[2];
          gte_ldSXY0(puVar52[2]);
          *(undefined4 *)(iVar81 + 0xc0) = puVar52[2];
          if ((int)uVar20 < (int)uVar66.value == uVar49) {
            uVar20 = uVar66.value;
          }
          iVar18 = (((int)uVar20 >> 0x10) << (*(uint *)(iVar81 + 0x98) & 0x1f)) >> 0xd;
          if (iVar18 < 0) {
            iVar18 = 0;
          }
          iVar18 = iVar18 + (-uVar49 & 0x60);
          uVar23 = puVar44[2];
          gte_ldSXY1(uVar85);
          iVar19 = iVar18 * 4;
          if (0xfff < iVar18) {
            iVar19 = 0x3ffc;
          }
          gte_nclip_b();
          uVar75.value = *puVar40;
          iVar19 = *(int *)(iVar81 + 100) + iVar19;
          iVar18 = gte_stMAC0();
          gte_ldSXYP(uVar23);
          uVar20 = -iVar18;
          gte_nclip_b();
          uVar38.b16._0_2_ = pSVar65[3].vx;
          uVar38.b16._2_2_ = pSVar65[3].vy;
          gte_ldIR0(0);
          *(undefined4 *)(iVar81 + 0xb0) = uVar15;
          *(undefined4 *)(iVar81 + 0xd0) = uVar85;
          *(undefined4 *)(iVar81 + 0xe0) = uVar23;
          uVar49 = gte_stMAC0();
          uVar29.b16._0_2_ = pSVar65[3].vz;
          uVar29.b16._2_2_ = pSVar65[3].pad;
          gte_dpcs_b();
          uVar39.value = (uVar58 | uVar39.value | uVar56.value | uVar66.value) & 0x20;
          uVar25.b16._0_2_ = pSVar65[4].vx;
          uVar25.b16._2_2_ = pSVar65[4].vy;
          if ((uVar20 | uVar49 | uVar39.value) != 0) {
            uVar58 = gte_stRGB2();
            gte_ldRGB0(uVar38.b16);
            gte_ldRGB1(uVar29.b16);
            uVar85 = *puVar52;
            gte_ldRGB2(uVar25.b16);
            gte_dpct_b();
            uVar15 = *puVar79;
            if (-1 < (int)(uVar20 - 1 & uVar49 - 1 & uVar57 & uVar39.value - 0x20)) {
              uVar23 = *puVar44;
              *(undefined4 *)(iVar81 + 0xa8) = uVar75.value;
              *(undefined4 *)(iVar81 + 0xb8) = uVar85;
              *(undefined4 *)(iVar81 + 200) = uVar15;
              uVar20 = uVar20 + uVar49;
              *(undefined4 *)(iVar81 + 0xd8) = uVar23;
              if ((int)uVar20 < 0) {
                uVar20 = -uVar20;
              }
              uVar55.b16._0_2_ = pSVar65[1].vz;
              uVar55.b16._2_2_ = pSVar65[1].pad;
              uVar69.b16._0_2_ = pSVar65[2].vx;
              uVar69.b16._2_2_ = pSVar65[2].vy;
              uVar48.b16._0_2_ = pSVar65[2].vz;
              uVar48.b16._2_2_ = pSVar65[2].pad;
              if (uVar39.value != 0) {
                if ((int)uVar57 < 0) {
                  gte_ldR11R12((int)*(short *)(iVar81 + 0xb8));
                  gte_ldR22R23((int)*(short *)(iVar81 + 0xba));
                  uVar39.value = (uint)*(short *)(iVar81 + 0xd8);
                  gte_ldR33((int)*(short *)(iVar81 + 0xbc));
                  uVar49 = (uint)*(short *)(iVar81 + 0xda);
                  gte_ldIR1((int)uVar39.value);
                  uVar20 = (uint)*(short *)(iVar81 + 0xdc);
                  gte_ldIR2(uVar49);
                  gte_ldIR3(uVar20);
                  gte_ldVXY0(iVar81 + 0xa8);
                  gte_ldVZ0(iVar81 + 0xac);
                  gte_op0_b(0);
                  gte_ldVXY1(iVar81 + 200);
                  gte_ldVZ1(iVar81 + 0xcc);
                  read_mt(uVar20,uVar39.value,uVar49);
                  gte_ldR11R12((int)uVar20 >> 0x18 & 0xffffU | ((int)uVar39.value >> 0x18) << 0x10);
                  gte_ldR13R21((int)uVar49 >> 0x18 & 0xffffU | ((int)uVar20 >> 0xc & 0xfffU) << 0x10
                              );
                  gte_ldR22R23((int)uVar39.value >> 0xc & 0xfffU | ((int)uVar49 >> 0xc & 0xfffU) << 0x10);
                  gte_ldR31R32(uVar20 & 0xfff | (uVar39.value & 0xfff) << 0x10);
                  gte_ldR33(uVar49 & 0xfff);
                  gte_mvmva_b(0,0,0,3,0);
                  iVar43 = gte_stMAC3();
                  iVar18 = gte_stMAC2();
                  iVar32 = gte_stMAC1();
                  gte_mvmva_b(0,0,1,3,0);
                  iVar50 = gte_stMAC3();
                  iVar31 = gte_stMAC2();
                  iVar37 = gte_stMAC1();
                  gte_ldR11R12(0x1000);
                  gte_ldR13R21(0);
                  gte_ldR22R23(0x1000);
                  gte_ldR31R32(0);
                  gte_ldR33(0x1000);
                  if (-1 < (iVar32 + (iVar18 + (iVar43 >> 0xc) >> 0xc) |
                           -(iVar37 + (iVar31 + (iVar50 >> 0xc) >> 0xc))))
                  goto LAB_overlay0__8001f7bc;
                }
                gte_ldLZCS((int)(short)(*(ushort *)(*(int *)(iVar81 + 0xe8) + 0xc) |
                                        *(ushort *)(*(int *)(iVar81 + 0xec) + 0xc) |
                                       *(ushort *)(*(int *)(iVar81 + 0xf0) + 0xc) |
                                       *(ushort *)(*(int *)(iVar81 + 0xf4) + 0xc)));
                iVar18 = gte_stLZCR();
                uVar20 = iVar18 - 0x11;
                if (0 < (int)uVar20) {
                  *(short *)(iVar81 + 0xa8) =
                       (short)((int)*(short *)(iVar81 + 0xa8) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xaa) =
                       (short)((int)*(short *)(iVar81 + 0xaa) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xac) =
                       (short)((int)*(short *)(iVar81 + 0xac) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xb8) =
                       (short)((int)*(short *)(iVar81 + 0xb8) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xba) =
                       (short)((int)*(short *)(iVar81 + 0xba) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xbc) =
                       (short)((int)*(short *)(iVar81 + 0xbc) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 200) =
                       (short)((int)*(short *)(iVar81 + 200) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xca) =
                       (short)((int)*(short *)(iVar81 + 0xca) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xcc) =
                       (short)((int)*(short *)(iVar81 + 0xcc) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xd8) =
                       (short)((int)*(short *)(iVar81 + 0xd8) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xda) =
                       (short)((int)*(short *)(iVar81 + 0xda) << (uVar20 & 0x1f));
                  *(short *)(iVar81 + 0xdc) =
                       (short)((int)*(short *)(iVar81 + 0xdc) << (uVar20 & 0x1f));
                }
LAB_overlay0__8001f0dc:
                *(uint **)(iVar81 + 0x68) = puVar71;
                *(SVECTOR **)(iVar81 + 0x3a8) = pSVar65;
                *(int *)(iVar81 + 0x9c) = iVar19;
                *(uint *)(iVar81 + 0xa0) = uVar58;
                gte_stRGB0();
                uVar20 = iVar81 + 0xb6U & 3;
                puVar71 = (uint *)((iVar81 + 0xb6U) - uVar20);
                *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | (uVar58 << 8) >> (3 - uVar20) * 8;
                gte_stRGB1();
                uVar20 = iVar81 + 0xc6U & 3;
                puVar71 = (uint *)((iVar81 + 0xc6U) - uVar20);
                *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 |
                           (uint)(iVar18 << 8) >> (3 - uVar20) * 8;
                iVar18 = gte_stRGB2();
                uVar20 = iVar81 + 0xd6U & 3;
                puVar71 = (uint *)((iVar81 + 0xd6U) - uVar20);
                *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 |
                           (uint)(iVar19 << 8) >> (3 - uVar20) * 8;
                uVar20 = iVar81 + 0xe6U & 3;
                puVar71 = (uint *)((iVar81 + 0xe6U) - uVar20);
                *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 |
                           (uint)(iVar18 << 8) >> (3 - uVar20) * 8;
                *(uint *)(iVar81 + 0xa4) = uVar69.value;
                uVar20 = iVar81 + 0xa5U & 3;
                puVar71 = (uint *)((iVar81 + 0xa5U) - uVar20);
                *puVar71 = *puVar71 & -1 << (uVar20 + 1) * 8 | uVar55.value >> (3 - uVar20) * 8;
                *(short *)(iVar81 + 0xae) = (short)uVar55.value;
                *(short *)(iVar81 + 0xbe) = (short)uVar69.value;
                *(short *)(iVar81 + 0xce) = (short)uVar48.value;
                *(short *)(iVar81 + 0xde) = (short)(uVar48.value >> 0x10);
                DAT_1f800388 = DAT_1f800068;
                puVar40 = &DAT_1f8000a8;
                iVar18 = 0x1f800000;
                ppuVar68 = &DAT_1f8000e8;
                ppuVar35 = &DAT_1f8000e8;
                pbVar22 = (byte *)((int)&DAT_1f8000b4 + 3);
                do {
                  bVar26 = *pbVar22;
                  *ppuVar35 = puVar40;
                  ppuVar35 = ppuVar35 + 1;
                  if ((bVar26 & 0x20) != 0) {
                    gte_ldVXY0(puVar40);
                    gte_ldVZ0(pbVar22 + -0xb);
                    gte_rtps_b();
                    iVar19 = gte_stFLAG();
                    gte_stSXY2();
                    if (-1 < iVar19) {
                      *pbVar22 = bVar26 & 0x1f;
                    }
                  }
                  pbVar22 = pbVar22 + 0x10;
                  puVar40 = puVar40 + 4;
                } while (ppuVar35 != (undefined4 **)&DAT_1f8000f8);
                DAT_1f80038c = DAT_1f800388;
                DAT_1f800390.bitfield._0_3_[0] = ((char *)SUB43(DAT_1f800388,0))[0];
                DAT_1f800390.bitfield._0_3_[1] = ((char *)SUB43(DAT_1f800388,0))[1];
                DAT_1f800390.bitfield._0_3_[2] = ((char *)SUB43(DAT_1f800388,0))[2];
                DAT_1f800390.value = CONCAT13(0xc,DAT_1f800390.bitfield._0_3_);
LAB_overlay0__8001f1c0:
                pSVar76 = (SVECTOR *)(ppuVar68 + 4);
                puVar52 = *ppuVar68;
                puVar79 = ppuVar68[1];
                puVar70 = ppuVar68[2];
                puVar73 = ppuVar68[3];
                sVar8 = *(short *)puVar52;
                sVar9 = *(short *)puVar79;
                sVar10 = *(short *)puVar70;
                iVar31 = (int)sVar8 + (int)sVar9;
                *(short *)(ppuVar68 + 8) = (short)(iVar31 >> 1);
                sVar11 = *(short *)puVar73;
                *(short *)(ppuVar68 + 0xc) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar19 = (int)sVar10 + (int)sVar11;
                *(short *)(ppuVar68 + 0x10) = (short)(iVar19 >> 1);
                *(short *)(ppuVar68 + 0x14) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)(ppuVar68 + 4) = (short)(iVar31 + iVar19 >> 2);
                sVar8 = *(short *)((int)puVar52 + 2);
                sVar9 = *(short *)((int)puVar79 + 2);
                sVar10 = *(short *)((int)puVar70 + 2);
                iVar31 = (int)sVar8 + (int)sVar9;
                *(short *)((int)ppuVar68 + 0x22) = (short)(iVar31 >> 1);
                sVar11 = *(short *)((int)puVar73 + 2);
                *(short *)((int)ppuVar68 + 0x32) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar19 = (int)sVar10 + (int)sVar11;
                *(short *)((int)ppuVar68 + 0x42) = (short)(iVar19 >> 1);
                *(short *)((int)ppuVar68 + 0x52) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)((int)ppuVar68 + 0x12) = (short)(iVar31 + iVar19 >> 2);
                sVar8 = *(short *)(puVar52 + 1);
                sVar9 = *(short *)(puVar79 + 1);
                sVar10 = *(short *)(puVar70 + 1);
                iVar31 = (int)sVar8 + (int)sVar9;
                *(short *)(ppuVar68 + 9) = (short)(iVar31 >> 1);
                sVar11 = *(short *)(puVar73 + 1);
                *(short *)(ppuVar68 + 0xd) = (short)((int)sVar9 + (int)sVar10 >> 1);
                iVar19 = (int)sVar10 + (int)sVar11;
                *(short *)(ppuVar68 + 0x11) = (short)(iVar19 >> 1);
                *(short *)(ppuVar68 + 0x15) = (short)((int)sVar11 + (int)sVar8 >> 1);
                *(short *)(ppuVar68 + 5) = (short)(iVar31 + iVar19 >> 2);
                uVar49 = puVar52[3];
                uVar20 = puVar79[3];
                uVar39.value = puVar70[3];
                puVar44 = (undefined4 *)((int)((uVar49 & 0xfefefe) + (uVar20 & 0xfefefe)) >> 1);
                ppuVar68[0xb] = puVar44;
                uVar58 = puVar73[3];
                ppuVar68[0xf] =
                     (undefined4 *)((int)((uVar20 & 0xfefefe) + (uVar39.value & 0xfefefe)) >> 1);
                puVar40 = (undefined4 *)((int)((uVar39.value & 0xfefefe) + (uVar58 & 0xfefefe)) >> 1);
                ppuVar68[0x13] = puVar40;
                ppuVar68[0x17] =
                     (undefined4 *)((int)((uVar58 & 0xfefefe) + (uVar49 & 0xfefefe)) >> 1);
                ppuVar68[7] = (undefined4 *)
                              ((int)(((uint)puVar44 & 0xfefefe) + ((uint)puVar40 & 0xfefefe)) >> 1);
                gte_ldv0(pSVar76);
                gte_rtps_b();
                bVar26 = *(byte *)((int)puVar52 + 6);
                bVar1 = *(byte *)((int)puVar79 + 6);
                bVar2 = *(byte *)((int)puVar70 + 6);
                iVar31 = (uint)bVar26 + (uint)bVar1;
                *(char *)&pSVar76[2].pad = (char)(iVar31 >> 1);
                bVar3 = *(byte *)((int)puVar73 + 6);
                *(char *)&pSVar76[4].pad = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar19 = (uint)bVar2 + (uint)bVar3;
                *(char *)&pSVar76[6].pad = (char)(iVar19 >> 1);
                *(char *)&pSVar76[8].pad = (char)((int)((uint)bVar3 + (uint)bVar26) >> 1);
                *(char *)&pSVar76->pad = (char)(iVar31 + iVar19 >> 2);
                bVar26 = *(byte *)((int)puVar52 + 7);
                bVar1 = *(byte *)((int)puVar79 + 7);
                bVar2 = *(byte *)((int)puVar70 + 7);
                iVar31 = (uint)bVar26 + (uint)bVar1;
                *(char *)((int)&pSVar76[2].pad + 1) = (char)(iVar31 >> 1);
                bVar3 = *(byte *)((int)puVar73 + 7);
                *(char *)((int)&pSVar76[4].pad + 1) = (char)((int)((uint)bVar1 + (uint)bVar2) >> 1);
                iVar19 = (uint)bVar2 + (uint)bVar3;
                *(char *)((int)&pSVar76[6].pad + 1) = (char)(iVar19 >> 1);
                *(char *)((int)&pSVar76[8].pad + 1) = (char)((int)((uint)bVar3 + (uint)bVar26) >> 1)
                ;
                *(char *)((int)&pSVar76->pad + 1) = (char)(iVar31 + iVar19 >> 2);
                uVar30 = *(ushort *)(iVar18 + 0x62);
                uVar12 = *(ushort *)(iVar18 + 0x5e);
                uVar13 = *(ushort *)(iVar18 + 0x60);
                pSVar65 = pSVar76;
                do {
                  iVar31 = gte_stFLAG();
                  gte_ldVXY0(pSVar65 + 2);
                  gte_ldVZ0(&pSVar65[2].vz);
                  gte_stSXY2();
                  iVar19 = gte_stIR3();
                  gte_rtps_b();
                  bVar26 = iVar19 < (int)(uint)uVar30;
                  if (pSVar65[1].vx < 0) {
                    bVar26 = bVar26 | 2;
                  }
                  bVar26 = bVar26 | ((int)(uVar12 - 1) < (int)pSVar65[1].vx) << 2;
                  if (pSVar65[1].vy < 0) {
                    bVar26 = bVar26 | 8;
                  }
                  bVar26 = bVar26 | ((int)(uVar13 - 1) < (int)pSVar65[1].vy) << 4;
                  if (iVar31 < 0) {
                    bVar26 = bVar26 | 0x20;
                  }
                  pSVar63 = pSVar65 + 2;
                  *(byte *)((int)&pSVar65[1].pad + 1) = bVar26;
                  pSVar65 = pSVar63;
                } while (pSVar63 != pSVar76 + 10);
                piVar36 = *(int **)(iVar18 + 0x68);
                cVar5 = *(char *)(iVar18 + 0xa3);
                uVar20 = iVar18 + 0xa5U & 3;
                uVar58 = *(int *)((iVar18 + 0xa5U) - uVar20) << (3 - uVar20) * 8 |
                         (uint)pSVar63 & 0xffffffffU >> (uVar20 + 1) * 8;
                uVar39.value = *(uint *)(iVar18 + 0xa4);
                ppuVar35 = ppuVar68 + 3;
                uVar20 = 2;
                iVar19 = 3;
                do {
                  uVar20 = uVar20 & 3;
                  puVar40 = *ppuVar35;
                  puVar44 = ppuVar68[uVar20];
                  bVar26 = *(byte *)((int)puVar40 + 0xf) |
                           *(byte *)((int)ppuVar68 + uVar20 * 0x10 + 0x2f) |
                           *(byte *)((int)puVar44 + 0xf);
                  if ((bVar26 & 0x20) == 0) {
                    gte_ldSXY0(puVar40 + 2);
                    gte_ldSXY1(ppuVar68 + uVar20 * 4 + 10);
                    gte_ldSXY2(puVar44 + 2);
                    gte_stSXY0();
                    gte_stSXY1();
                    gte_nclip_b();
                    uVar49 = (uint)(short *)((int)puVar40 + 6U) & 3;
                    uVar58 = uVar58 & -1 << (4 - uVar49) * 8 |
                             *(uint *)((int)(short *)((int)puVar40 + 6U) - uVar49) >> uVar49 * 8;
                    uVar49 = (int)ppuVar68 + uVar20 * 0x10 + 0x26;
                    uVar56.value = uVar49 & 3;
                    uVar39.value = uVar39.value & -1 << (4 - uVar56.value) * 8 |
                             *(uint *)(uVar49 - uVar56.value) >> uVar56.value * 8;
                    piVar36[3] = uVar58;
                    uVar49 = (uint)(short *)((int)puVar44 + 6U) & 3;
                    uVar56.value = *(uint *)((int)(short *)((int)puVar44 + 6U) - uVar49);
                    piVar36[6] = uVar39.value;
                    piVar36[9] = bVar26 & 0x20 & -1 << (4 - uVar49) * 8 | uVar56.value >> uVar49 * 8;
                    *piVar36 = (int)(piVar36 + -0x1dbffff6);
                    iVar31 = gte_stMAC0();
                    gte_stSXY2();
                    if (iVar31 != 0) {
                      puVar52 = ppuVar68[uVar20 * 4 + 0xb];
                      piVar36[1] = puVar40[3];
                      iVar31 = puVar44[3];
                      piVar36[4] = (int)puVar52;
                      piVar36[7] = iVar31;
                      *(char *)((int)piVar36 + 7) = cVar5 + -8;
                      *(int **)(iVar18 + 0x38c) = piVar36;
                      piVar36 = piVar36 + 10;
                    }
                  }
                  ppuVar35 = ppuVar35 + -1;
                  iVar31 = iVar19 + -1;
                  *(int **)(iVar18 + 0x68) = piVar36;
                  uVar20 = iVar19 - 2;
                  iVar19 = iVar31;
                } while (-1 < iVar31);
                uVar20 = 3;
                if (*(uint *)(iVar18 + 0x68) <= *(uint *)(iVar18 + 0x6c)) {
                  uVar39.value = 2;
                  ppuVar35 = ppuVar68;
                  do {
                    ppuVar72 = ppuVar35 + uVar20 * 4 + 8;
                    ppuVar64 = ppuVar35 + (uVar39.value & 3) * 4 + 8;
                    puVar40 = ppuVar35[uVar20];
                    uVar39.value = uVar20;
                    if ((*(byte *)((int)puVar40 + 0xf) & *(byte *)((int)ppuVar72 + 0xf) &
                         *(byte *)((int)ppuVar35 + 0x1f) & *(byte *)((int)ppuVar64 + 0xf) & 0x1f) ==
                        0) {
                      if (((*(byte *)((int)puVar40 + 0xf) | *(byte *)((int)ppuVar72 + 0xf) |
                            *(byte *)((int)ppuVar35 + 0x1f) | *(byte *)((int)ppuVar64 + 0xf)) & 0x20
                          ) == 0) {
                        piVar36 = *(int **)(iVar18 + 0x68);
                        gte_ldSXY0(ppuVar72 + 2);
                        gte_ldSXY1(puVar40 + 2);
                        gte_ldSXY2(ppuVar35 + 6);
                        gte_stSXY0();
                        gte_stSXY1();
                        gte_nclip_b();
                        puVar44 = ppuVar72[3];
                        piVar36[1] = puVar40[3];
                        puVar52 = ppuVar35[7];
                        piVar36[4] = (int)puVar44;
                        puVar44 = ppuVar64[3];
                        piVar36[10] = (int)puVar52;
                        piVar36[7] = (int)puVar44;
                        iVar31 = gte_stMAC0();
                        gte_ldSXY0(ppuVar64 + 2);
                        uVar58 = iVar18 + 0xa5U & 3;
                        uVar17.value = *(uint *)(iVar18 + 0xa4);
                        gte_nclip_b();
                        uVar49 = (uint)(short *)((int)puVar40 + 6U) & 3;
                        uVar57 = (*(int *)((iVar18 + 0xa5U) - uVar58) << (3 - uVar58) * 8 |
                                 (uint)puVar44 & 0xffffffffU >> (uVar58 + 1) * 8) &
                                 -1 << (4 - uVar49) * 8 |
                                 *(uint *)((int)(short *)((int)puVar40 + 6U) - uVar49) >> uVar49 * 8
                        ;
                        uVar58 = (uint)(short *)((int)ppuVar72 + 6U) & 3;
                        uVar56.value = *(uint *)((int)(short *)((int)ppuVar72 + 6U) - uVar58);
                        piVar36[3] = uVar57;
                        uVar49 = (int)ppuVar35 + 0x16U & 3;
                        uVar66.value = *(uint *)(((int)ppuVar35 + 0x16U) - uVar49);
                        piVar36[6] = uVar17.value & -1 << (4 - uVar58) * 8 | uVar56.value >> uVar58 * 8;
                        uVar58 = (uint)(short *)((int)ppuVar64 + 6U) & 3;
                        uVar56.value = *(uint *)((int)(short *)((int)ppuVar64 + 6U) - uVar58);
                        piVar36[0xc] = (uint)puVar52 & -1 << (4 - uVar49) * 8 | uVar66.value >> uVar49 * 8
                        ;
                        piVar36[9] = uVar57 & -1 << (4 - uVar58) * 8 | uVar56.value >> uVar58 * 8;
                        iVar19 = gte_stMAC0();
                        uVar58 = iVar31 - iVar19;
                        gte_stSXY0();
                        if ((int)uVar58 < 0) {
                          uVar58 = -uVar58;
                        }
                        gte_stSXY2();
                        if (uVar58 <= *(ushort *)(iVar18 + 0x394)) {
                          uVar4 = *(undefined *)(iVar18 + 0xa3);
                          *piVar36 = (int)(piVar36 + -0x1cfffff3);
                          *(undefined *)((int)piVar36 + 7) = uVar4;
                          *(int **)(iVar18 + 0x38c) = piVar36;
                          *(int **)(iVar18 + 0x68) = piVar36 + 0xd;
                          goto LAB_overlay0__8001f6d8;
                        }
                      }
                      if (ppuVar35 != (undefined4 **)(iVar18 + 0x328)) goto code_r0x8001f6a4;
                    }
LAB_overlay0__8001f6d8:
                    while( true ) {
                      uVar20 = uVar39.value - 1;
                      uVar39.value = uVar39.value - 2;
                      if (-1 < (int)uVar20) break;
                      if (ppuVar35 == (undefined4 **)(iVar18 + 0xe8)) {
                        uVar20 = *(uint *)(iVar18 + 0x388);
                        if (*(uint *)(iVar18 + 0x6c) < *(uint *)(iVar18 + 0x68)) {
                          *(uint *)(iVar18 + 0x68) = uVar20;
                        }
                        else if (*(uint *)(iVar18 + 0x68) != uVar20) {
                          iVar31 = *(int *)(iVar18 + 0x38c);
                          uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                          uVar58 = uVar39.value & 3;
                          iVar19 = *(int *)(uVar39.value - uVar58);
                          uVar39.value = *(int *)(iVar18 + 0x9c) + 2;
                          uVar49 = uVar39.value & 3;
                          puVar71 = (uint *)(uVar39.value - uVar49);
                          *puVar71 = *puVar71 & -1 << (uVar49 + 1) * 8 |
                                     (uVar20 << 8) >> (3 - uVar49) * 8;
                          uVar20 = iVar31 + 2;
                          uVar39.value = uVar20 & 3;
                          puVar71 = (uint *)(uVar20 - uVar39.value);
                          *puVar71 = *puVar71 & -1 << (uVar39.value + 1) * 8 |
                                     (uint)(iVar19 << (3 - uVar58) * 8) >> (3 - uVar39.value) * 8;
                        }
                        goto LAB_overlay0__8001f738;
                      }
                      pbVar22 = (byte *)((int)ppuVar35 + -0x41);
                      ppuVar35 = ppuVar35 + -0x18;
                      uVar39.value = (uint)(*pbVar22 >> 6);
                    }
                  } while( true );
                }
                *(undefined4 *)(iVar18 + 0x68) = *(undefined4 *)(iVar18 + 0x388);
LAB_overlay0__8001f738:
                puVar71 = *(uint **)(iVar81 + 0x68);
                pSVar65 = *(SVECTOR **)(iVar81 + 0x3a8);
                if (*(uint **)(iVar81 + 0x6c) <= puVar71) {
                  *(uint **)(iVar81 + 0x68) = puVar71;
                  return;
                }
                goto LAB_overlay0__8001f7bc;
              }
              if (0x800 < (int)uVar20) goto LAB_overlay0__8001f0dc;
              puVar16 = *(uint **)(iVar81 + 0x6c);
              uVar39.value = iVar19 + 2U & 3;
              iVar18 = *(int *)((iVar19 + 2U) - uVar39.value);
              puVar71[1] = uVar58;
              bVar14 = puVar16 < puVar71;
              puVar71[3] = uVar55.value;
              puVar71[6] = uVar69.value;
              puVar71[0xc] = uVar48.value;
              uVar58 = (int)puVar71 + 0x25U & 3;
              puVar16 = (uint *)(((int)puVar71 + 0x25U) - uVar58);
              *puVar16 = *puVar16 & -1 << (uVar58 + 1) * 8 | uVar48.value >> (3 - uVar58) * 8;
              gte_stRGB0();
              gte_stRGB1();
              gte_stRGB2();
              gte_stSXY0();
              gte_stSXY1();
              puVar71[5] = *(uint *)(iVar81 + 0xc0);
              gte_stSXY2();
              uVar58 = (int)puVar71 << 8;
              *puVar71 = (iVar18 << (3 - uVar39.value) * 8 | uVar20 & 0xffffffffU >> (uVar39.value + 1) * 8) >>
                         8 | 0xc000000;
              puVar71 = puVar71 + 0xd;
              uVar20 = iVar19 + 2U & 3;
              puVar16 = (uint *)((iVar19 + 2U) - uVar20);
              *puVar16 = *puVar16 & -1 << (uVar20 + 1) * 8 | uVar58 >> (3 - uVar20) * 8;
              if (bVar14) break;
            }
          }
        }
LAB_overlay0__8001f7bc:
        pSVar65 = (SVECTOR *)&pSVar65[4].vz;
      } while (pSVar65 != (SVECTOR *)*(undefined **)(iVar81 + 0x3ac));
      *(uint **)(iVar81 + 0x68) = puVar71;
    }
  }
  return;
LAB_overlay0__8001d404:
  *(char *)(ppuVar35 + 7) = (char)uVar20;
  ppuVar68 = ppuVar35 + 0x18;
  *ppuVar68 = ppuVar72;
  ppuVar35[0x19] = ppuVar64;
  ppuVar35[0x1a] = ppuVar45;
  goto LAB_overlay0__8001d4f0;
code_r0x8001e260:
  *(char *)(ppuVar35 + 7) = (char)uVar20;
  ppuVar68 = ppuVar35 + 0x18;
  if ((uVar20 & 1) == 0) {
    *ppuVar68 = puVar40;
    ppuVar35[0x19] = ppuVar72;
    ppuVar35[0x1a] = ppuVar35 + 4;
    ppuVar35[0x1b] = ppuVar64;
  }
  else {
    *ppuVar68 = ppuVar64;
    ppuVar35[0x19] = puVar40;
    ppuVar35[0x1a] = ppuVar72;
    ppuVar35[0x1b] = ppuVar35 + 4;
  }
  goto LAB_overlay0__8001de44;
LAB_overlay0__8001e678:
  *(byte *)((int)ppuVar35 + 0x1f) = *(byte *)((int)ppuVar35 + 0x1f) & 0x3f | (byte)(uVar20 << 6);
  ppuVar68 = ppuVar35 + 0x18;
  *ppuVar68 = ppuVar72;
  ppuVar35[0x19] = ppuVar64;
  ppuVar35[0x1a] = ppuVar45;
  goto LAB_overlay0__8001e794;
code_r0x8001f6a4:
  uVar20 = *(byte *)((int)ppuVar35 + 0x1f) & 0x3f | uVar20 << 6;
  *(char *)((int)ppuVar35 + 0x1f) = (char)uVar20;
  ppuVar68 = ppuVar35 + 0x18;
  if (uVar20 == 0) {
    *ppuVar68 = puVar40;
    ppuVar35[0x19] = ppuVar72;
    ppuVar35[0x1a] = ppuVar35 + 4;
    ppuVar35[0x1b] = ppuVar64;
  }
  else {
    *ppuVar68 = ppuVar64;
    ppuVar35[0x19] = puVar40;
    ppuVar35[0x1a] = ppuVar72;
    ppuVar35[0x1b] = ppuVar35 + 4;
  }

  goto LAB_overlay0__8001f1c0;
}
