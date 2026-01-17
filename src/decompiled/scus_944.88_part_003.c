// Include common types
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include <stdint.h>

// Forward declarations for GTE (Geometry Transformation Engine) functions
void gte_ldVXY0(undefined4 value);
void gte_ldVZ0(undefined4 value);
void gte_rtps_b(void);
uint gte_stFLAG(void);
void gte_stSXY0(void);
void gte_stSXY2(void);
undefined4 gte_stSXY1(void);
void gte_nclip_b(void);
uint gte_stMAC0(void);

// Forward declaration for read_sz_fifo4
void read_sz_fifo4(uint param_1, uint param_2, uint param_3, uint param_4);

void FUN_80066ef8(int param_1,int *param_2,undefined4 param_3,uint param_4)
{

  char cVar1;
  ushort uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;

  iVar12 = *param_2;
  param_2 = param_2 + 1;
  iVar18 = *(int *)((intptr_t)param_1 + 0x68);
  uVar2 = *(ushort *)((intptr_t)param_1 + 0x98);
  iVar5 = *(int *)((intptr_t)param_1 + 100);
  cVar1 = *(char *)((intptr_t)param_1 + 0x398);

  do {

    gte_ldVXY0(*param_2);
    gte_ldVZ0(param_2[1]);
    gte_rtps_b();
    uVar8 = (uint)param_2[1] >> 0x10;
    uVar11 = param_2[3];
    uVar19 = param_2[4];
    uVar10 = gte_stFLAG();

    gte_ldVXY0(param_2[2]);
    gte_ldVZ0(uVar8);
    uVar16 = 0;
    gte_rtps_b();
    uVar22 = *(uint *)((intptr_t)param_1 + 0x3b0);

    gte_ldVXY0(uVar11);
    gte_ldVZ0(uVar19);
    uVar6 = gte_stFLAG();
    uVar20 = 0xffffffff;
    piVar4 = param_2 + 3;
    uVar6 = uVar10 | uVar6;
    uVar24 = 0;

    do {

      piVar17 = piVar4;
      gte_stSXY0();
      gte_stSXY2();
      uVar7 = gte_stSXY1();
      read_sz_fifo4(uVar8,uVar10,uVar11,param_4);
      gte_rtps_b();
      iVar14 = piVar17[2];
      *(undefined4 *)((intptr_t)iVar18 + 8) = uVar24;
      *(undefined4 *)((intptr_t)iVar18 + 0x10) = uVar7;

      uVar13 = uVar16 >> 0x1f;
      if ((int)uVar8 < (int)uVar10 == uVar13) {
        uVar8 = uVar10;
      }
      if ((int)uVar8 < (int)uVar11 == uVar13) {
        uVar8 = uVar11;
      }
      uVar21 = gte_stFLAG();
      gte_nclip_b();

      iVar23 = piVar17[3];
      gte_ldVXY0(iVar14);
      gte_ldVZ0(uVar19 >> 0x10);
      uVar15 = gte_stMAC0();
      gte_rtps_b();
      uVar19 = piVar17[4];

      if ((int)uVar8 < (int)param_4 == uVar13) {
        uVar8 = param_4;
      }
      iVar14 = (int)(uVar8 << (uVar2 & 0x1f)) >> 0xd;
      iVar9 = iVar14 << 2;
      if (0xfff < iVar14) {
        iVar9 = 0x3ffc;
      }
      uVar8 = iVar9 + iVar5 + 4;

      uVar11 = uVar8 + 2 & 3;
      uVar10 = *(int *)((intptr_t)((uVar8 + 2) - uVar11)) << (3 - uVar11) * 8 |
               uVar10 & 0xffffffffU >> (uVar11 + 1) * 8;
      *(uint *)((intptr_t)iVar18 + 4) = (uint)((int)uVar16 >> 0x1f) >> 8 & uVar22 | 0x28000000;
      *(undefined *)((intptr_t)iVar18 + 3) = 5;
      uVar11 = gte_stFLAG();
      gte_nclip_b();

      if (-1 < (int)uVar20) {
        uVar16 = (iVar18 + 2U) & 3;
        puVar3 = (uint *)((intptr_t)((iVar18 + 2U) - uVar16));
        *puVar3 = *puVar3 & -1 << (uVar16 + 1) * 8 | uVar10 >> (3 - uVar16) * 8;
        uVar16 = (uVar8 + 2) & 3;
        puVar3 = (uint *)((intptr_t)((uVar8 + 2) - uVar16));
        *puVar3 = *puVar3 & -1 << (uVar16 + 1) * 8 | (uint)(iVar18 << 8) >> (3 - uVar16) * 8;
        iVar18 = iVar18 + 0x18;
      }

      uVar20 = uVar6 | uVar21 | uVar11;
      gte_ldVXY0(iVar23);
      gte_ldVZ0(uVar19);
      uVar6 = gte_stMAC0();
      uVar16 = ~uVar15 & uVar6;
      if (cVar1 < 0) {
        uVar16 = ~uVar15 | uVar6;
      }
      uVar16 = uVar16 ^ (int)cVar1;
      piVar4 = piVar17 + 3;
      uVar6 = uVar21 | uVar11;
      uVar24 = uVar7;
    } while (piVar17 + 3 != param_2 + 3 + iVar12 * 3);

    iVar12 = *piVar17;
    param_2 = piVar17 + 1;
    *(int *)((intptr_t)param_1 + 0x68) = iVar18;
  } while (iVar12 != 0);

  return;
}
