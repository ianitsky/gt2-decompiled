// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_021.h"
#include <stdint.h>
#include <stddef.h>

// Forward declarations
void FUN_overlay0__80030308(int param_1, int param_2, int param_3);
void FUN_overlay0__80036980(int param_1, int param_2);
int FUN_overlay0__80035714(int param_1);
void FUN_overlay0__80032a1c(int param_1);
void FUN_overlay0__80032e6c(int param_1);
void FUN_overlay0__80036acc(int param_1);
int FUN_overlay0__800418e8(void);
void FUN_overlay0__80036160(int param_1, int param_2, int param_3, int *param_4, int *param_5);
void FUN_overlay0__80035d68(int param_1, int param_2, int param_3, int *param_4, int *param_5);
int FUN_overlay0__8003c360(int param_1, int param_2);
int FUN_overlay0__8003c398(int param_1, int param_2, int param_3);
int FUN_overlay0__8003643c(int param_1, int param_2, int *param_3);
int FUN_overlay0__80035874(int param_1, int param_2);
int FUN_overlay0__800450e0(int param_1, int param_2);
int FUN_overlay0__800368dc(int param_1);
void FUN_overlay0__800367ac(int param_1, int param_2);
int FUN_overlay0__80036890(int param_1);
int FUN_overlay0__80036844(int param_1);
void FUN_overlay0__8002f9cc(void);
int FUN_overlay0__800287dc(int *param_1, int param_2, int *param_3);
int FUN_overlay0__80028830(int *param_1, int *param_2);
int FUN_overlay0__80028900(int *param_1, int param_2, int param_3, int param_4, int *param_5);
int FUN_overlay0__800358e0(int param_1);
int FUN_overlay0__80028288(int param_1, int *param_2);
int FUN_overlay0__80028c6c(int *param_1, int param_2, int *param_3);
undefined4 FUN_overlay0__800389e0(int *param_1, undefined4 *param_2, undefined4 *param_3, uint *param_4, uint *param_5, uint *param_6, int param_7, int param_8, uint param_9, undefined4 param_10);

// External variables
extern undefined4 DAT_overlay0__80046f48;
extern undefined4 DAT_overlay0__80046f54;
extern undefined4 DAT_overlay0__80046f64;
extern undefined4 DAT_801c8568;
extern undefined4 DAT_801c8570;
extern undefined2 DAT_801c8690[];
extern undefined4 DAT_801c8698[];
extern undefined4 DAT_801c869a;
extern undefined4 DAT_801c869c;
extern undefined4 *DAT_800b4a44;
extern undefined4 DAT_800a9520;
extern undefined4 DAT_800a9500;
extern undefined4 DAT_800b4a8c;
extern short DAT_80093150[0x800];
extern undefined2 DAT_80093950[];
extern undefined4 DAT_1f800364;
extern undefined4 DAT_1f800365;
extern undefined4 DAT_1f800018;
extern undefined4 DAT_1f80001c;
extern undefined4 DAT_overlay0__80046df8;
extern undefined4 DAT_overlay0__80046e00;
extern undefined4 DAT_overlay0__80046ef0;
extern undefined4 DAT_overlay0__80046ef4;
extern undefined4 DAT_overlay0__80046ef8;
extern undefined4 DAT_overlay0__80046e2c;
extern undefined4 DAT_overlay0__80046e34;
extern undefined4 DAT_overlay0__80046e3c;
extern undefined4 DAT_overlay0__80046e44;
extern undefined4 DAT_overlay0__80046e4c;
extern undefined4 DAT_overlay0__80046e54;
extern undefined4 DAT_overlay0__80046e5f;
extern undefined4 DAT_overlay0__80046e63;
extern undefined4 DAT_overlay0__80046e64;
extern undefined4 DAT_overlay0__80046e62;
extern undefined4 DAT_overlay0__80046f4c;
extern undefined4 DAT_overlay0__80046f50;
extern undefined4 DAT_overlay0__80046f5c;
extern undefined4 DAT_overlay0__80046f58;
extern undefined4 DAT_overlay0__80046f60;
extern undefined4 DAT_overlay0__80046f38;
extern undefined4 DAT_overlay0__80046f18;
extern undefined4 DAT_overlay0__80046f88;
extern undefined4 DAT_overlay0__80046f98;
extern undefined4 DAT_overlay0__80046fa8;
extern undefined4 DAT_overlay0__80046fa9;
extern undefined4 DAT_overlay0__80046f3c;
extern undefined4 DAT_overlay0__80046f40;
extern undefined4 DAT_overlay0__80046f44;
extern undefined4 UNK_overlay0__80046e5c;
extern undefined4 UNK_overlay0__80046e5d;
extern undefined4 UNK_overlay0__80046e5e;
extern undefined4 UNK_overlay0__80046e60;
extern undefined4 UNK_overlay0__80046e61;
extern undefined4 UNK_overlay0__80046e6a;
extern undefined UNK_overlay0__80046e65[];
extern undefined4 DAT_800b4a5c;
extern undefined4 DAT_800b4a58;
extern undefined4 DAT_801c8730;
extern undefined4 DAT_801c8734;
extern undefined4 DAT_801c8738;
extern undefined4 DAT_801c98ac;
extern undefined4 DAT_801c98b0;
extern undefined4 DAT_overlay0__80046dc4;
extern undefined4 DAT_overlay0__80046dc0;
extern undefined4 DAT_overlay0__80046dbc;
extern undefined4 DAT_overlay0__80046db8;
extern undefined4 DAT_overlay0__80046db4;
extern undefined4 DAT_overlay0__80046db0;
extern undefined DAT_800af231;
extern undefined4 DAT_800a9688;
extern undefined4 DAT_801c85e0;
extern undefined4 DAT_801c8580;
extern undefined4 DAT_801c85e8;
extern undefined4 DAT_801c85ec;
extern undefined4 DAT_overlay0__80046f68;
extern undefined4 DAT_801d5860;
extern undefined4 DAT_801d585c;
extern undefined4 DAT_801c98bc;
extern bitfield_8_union_t DAT_801c98b8;
extern undefined4 DAT_801c98c0;
extern undefined4 DAT_801c98c1;
extern undefined4 DAT_801c98c2;
extern undefined4 DAT_801c98c3;
extern undefined4 DAT_801c98c4;
extern undefined4 DAT_801c98c5;
extern undefined4 DAT_801c98a0;
extern undefined4 DAT_801d5866;
extern undefined4 DAT_overlay0__80046f69;
extern undefined4 DAT_801c85f0;
extern undefined4 DAT_801c8578;
extern undefined4 DAT_800a9cbc;
extern void *FUN_80060e94(undefined4);
extern undefined4 DAT_800af230;

undefined4 FUN_overlay0__80036ba0(void)

{
  int game_mode_check;

  if ((DAT_overlay0__80046f48 == 0) && (game_mode_check = FUN_overlay0__800418e8(), game_mode_check != 2)) {
    return 0;
  }
  return 1;
}

undefined4 FUN_overlay0__80036bdc(int param_1,int param_2)

{
  undefined4 is_within_bounds;
  int *track_data_ptr;

  track_data_ptr = *(int **)((uintptr_t)DAT_801c8568 + 0x18);

  if ((track_data_ptr != (int *)0x0) && (5 < *track_data_ptr)) {

    if (param_1 < *(int *)&DAT_800b4a44 / 2) {
      param_1 = param_1 + *(int *)&DAT_800b4a44;
    }

    if ((param_1 <= track_data_ptr[param_2 * 10 + 0x10]) ||
       (is_within_bounds = 1, track_data_ptr[((*track_data_ptr + -2) - param_2) * 10 + 6] <= param_1)) {
      is_within_bounds = 0;
    }
    return is_within_bounds;
  }
  return 0;
}

void FUN_overlay0__80036ca4(int param_1,int param_2,int param_3)

{
  byte vehicle_state;
  int physics_check_result;
  int *track_data_ptr;
  int loop_counter;
  undefined4 action_type;
  uint vehicle_flags;
  int track_length;
  int track_segments;

  track_data_ptr = *(int **)((uintptr_t)DAT_801c8568 + 0x18);
  if (track_data_ptr == (int *)0x0) {
    return;
  }

  track_length = *(int *)&DAT_800b4a44;
  track_segments = *track_data_ptr;

  if (param_2 < track_length / 2) {
    param_2 = param_2 + track_length;
  }

  if (param_3 < track_length / 2) {
    param_3 = param_3 + track_length;
  }

  if (*(short *)(param_1 + 0x78e) != 0) {
    FUN_overlay0__80030308(param_1,0xb,0);
  }

  if ((*(byte *)(param_1 + 0x78d) & 1) != 0) {

    if (*(char *)(param_1 + 0x45d) == '\x02') {
      return;
    }

    if (*(char *)(param_1 + 0x786) != '\0') {
      return;
    }

    if ((*(byte *)(param_1 + 0x78d) & 0x10) == 0) {
      return;
    }

    if (param_2 <= track_data_ptr[0x24]) {
      return;
    }
    if (track_data_ptr[track_segments * 10 + -0xe] <= param_2) {
      return;
    }

    if ((track_data_ptr[track_segments * 10 + -0x18] < param_3) && (param_2 <= track_data_ptr[track_segments * 10 + -0x18])) {
      FUN_overlay0__80036980(param_1,4);
      action_type = 0xc;
      goto LAB_overlay0__80036f90;
    }

    if (((*(int *)(param_1 + 0x6a4) + 0x163aU < 0x2c75) && (*(int *)(param_1 + 0x6a8) < 0x163b)) &&
       (-0x163b < *(int *)(param_1 + 0x6a8))) {
      return;
    }

    if (*(char *)(param_1 + 0x63d) != '\0') {
      return;
    }

    action_type = 2;
    goto LAB_overlay0__800371fc;
  }

  vehicle_flags = 0;
  FUN_overlay0__80036ba0();

  loop_counter = 0;
  int iVar2 = param_1;
  do {

    if (*(int *)(iVar2 + 0x4c4) != DAT_overlay0__80046f54) {
      vehicle_flags = vehicle_flags | 1;
    }

    if (*(char *)(iVar2 + 0x482) != '\0') {
      vehicle_flags = vehicle_flags | 2;
    }

    loop_counter = loop_counter + 1;
    iVar2 = iVar2 + 0x68;
  } while (loop_counter < 4);

  physics_check_result = FUN_overlay0__80035714(param_1);

  vehicle_state = *(byte *)(param_1 + 0x786);

  if (vehicle_state == 3) {

    if (*(short *)(param_1 + 0x78e) != 0) {

      if (*(ushort *)(param_1 + 0x78e) != DAT_801c8570) {
        return;
      }
      FUN_overlay0__80032a1c(param_1);
      return;
    }

    track_length = track_data_ptr[*(char *)(param_1 + 0x6b2) * 10 + 6];

    if (((vehicle_flags != 0) && (param_3 < track_length)) && (track_length <= param_2)) {
      FUN_overlay0__80032e6c(param_1);
      *(short *)(param_1 + 0x78e) = (short)DAT_801c8570 * 5;
      FUN_overlay0__80030308(param_1,0xb,0);
      return;
    }

    if (param_2 < track_length + 0x8000) {
      return;
    }

    FUN_overlay0__80036980(param_1,4);
    *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) & 0xfb;
    return;
  }

  if (vehicle_state < 4) {

    if (vehicle_state == 2) {

      if (physics_check_result != 0) {
        FUN_overlay0__80036980(param_1,4);
        action_type = 8;
LAB_overlay0__80036f90:
        FUN_overlay0__80030308(param_1,action_type,DAT_801c8570 << 1);
        return;
      }

      if (vehicle_flags == 0) {
        FUN_overlay0__80036980(param_1,4);
        action_type = 9;
        goto LAB_overlay0__80036f90;
      }

      if ((track_data_ptr[*(char *)(param_1 + 0x6b2) * 10 + 6] + -0x190000 <= param_3) ||
         (param_2 < track_data_ptr[*(char *)(param_1 + 0x6b2) * 10 + 6] + -0x190000)) {
        FUN_overlay0__80030308(param_1,10,0);

        if (*(char *)(param_1 + 0x45d) != '\0') {
          return;
        }
        if ((*(byte *)(param_1 + 0x78d) & 0x10) != 0) {
          return;
        }

        FUN_overlay0__80036980(param_1,0);
        action_type = 0;
        goto LAB_overlay0__800371fc;
      }

      action_type = 3;

      if (0x1bc87 < *(int *)(param_1 + 0x6a4)) {
        FUN_overlay0__80036980(param_1,4);
        action_type = 7;
        goto LAB_overlay0__80036f90;
      }
      goto LAB_overlay0__800372b8;
    }
  }
  else if (vehicle_state == 4) {
    int iVar4;
    int iVar7;
    int iVar8;
    int *piVar3;
    uint uVar5;
    iVar4 = iVar8 << 2;
    if (*(char *)(param_1 + 0x45d) == '\0') {
      if (((*(byte *)(param_1 + 0x78d) & 0x10) == 0) && (param_2 < iVar7)) {
        FUN_overlay0__80036980(param_1,0);
        FUN_overlay0__80030308(param_1,0,0);
      }
      iVar4 = iVar8 << 2;
      if ((*(char *)(param_1 + 0x45d) != '\0') ||
         (iVar4 = iVar8 * 4, *(char *)(param_1 + 0x6fc) != '\0')) goto LAB_overlay0__80037118;
      iVar7 = piVar3[iVar8 * 10 + -0xe];
      iVar8 = piVar3[iVar8 * 10 + -0x18];
    }
    else {
LAB_overlay0__80037118:
      iVar7 = piVar3[(iVar4 + iVar8) * 2 + -4];
      iVar8 = piVar3[(iVar4 + iVar8) * 2 + -0xe];
    }
    if ((param_3 < iVar7) && (iVar7 <= param_2)) {
      if (*(char *)(param_1 + 0x6fc) == '\0') {
        FUN_overlay0__80036980(param_1,0);
        if (iVar2 == 0) {
          FUN_overlay0__80030308(param_1,6,DAT_801c8570 << 1);
        }
      }
      else {
        FUN_overlay0__80036acc(param_1);
      }
      *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) & 0xf7;
      return;
    }
    if (param_2 < iVar8) {
      if (*(char *)(param_1 + 0x6fc) != '\0') {
        return;
      }
      uVar5 = 10;
    }
    else {
      if (iVar2 != 0) {
        return;
      }
      if (*(char *)(param_1 + 0x6fd) == '\0') {
        uVar5 = 4;
      }
      else {
        uVar5 = 5;
      }
    }
LAB_overlay0__800371fc:
    FUN_overlay0__80030308(param_1,uVar5,0);

    return;
  }
  int iVar7;
  if (*(char *)(param_1 + 0x45d) == '\0') {
    if ((*(byte *)(param_1 + 0x78d) & 0x10) == 0) {
      return;
    }
    iVar7 = track_data_ptr[0x10];
  }
  else {
    if ((((*(byte *)(param_1 + 0x78d) & 0x10) != 0) && (*(char *)(param_1 + 0x785) != '\0')) &&
       (param_2 < iVar7)) {
      FUN_overlay0__80036980(param_1,2);
      *(undefined *)(param_1 + 0x788) = 4;
      return;
    }
    if ((*(byte *)(param_1 + 0x78d) & 8) == 0) {
      return;
    }
    if (iVar2 != 0) {
      return;
    }
    iVar7 = track_data_ptr[6];
  }
  if (iVar7 <= param_3) {
    return;
  }
  if (param_2 < iVar7) {
    return;
  }
  uint uVar5 = 2;
LAB_overlay0__800372b8:
  FUN_overlay0__80036980(param_1,uVar5);
  return;
}

void FUN_overlay0__800372ec(int param_1,undefined4 param_2,int param_3)

{
  int frame_rate_multiplier;
  uint loop_counter;

  frame_rate_multiplier = DAT_801c8570 << 1;

  *(undefined2 *)(param_1 + 0x60a) = 0;

  if (frame_rate_multiplier / 5 < param_3) {

    if (*(char *)(param_1 + 0x769) == '\0') {

      if ((int)*(short *)(param_1 + 0x6ac) <
          (int)((uint)*(ushort *)(param_1 + 0x396) * 2 - (uint)*(ushort *)(param_1 + 0x108))) {
        *(undefined *)(param_1 + 0x769) = 1;
      }
    }
    else if ((int)((uint)*(ushort *)(param_1 + 0x108) + (uint)*(ushort *)(param_1 + 0x396)) >> 1 <=
             (int)*(short *)(param_1 + 0x6ac)) {
      *(undefined *)(param_1 + 0x769) = 0;
    }

    if (*(char *)(param_1 + 0x769) == '\0') {
      *(undefined2 *)(param_1 + 0x610) = 0;
      goto LAB_overlay0__800373f4;
    }
  }
  else {

    frame_rate_multiplier = 0xa00 - (int)(((int)*(short *)(param_1 + 0x6ac) - (uint)*(ushort *)(param_1 + 0x396)) *
                         0x2000) / (int)(uint)*(ushort *)(param_1 + 0x108);
    *(short *)(param_1 + 0x610) = (short)frame_rate_multiplier;

    frame_rate_multiplier = frame_rate_multiplier * 0x10000 >> 0x10;
    if (frame_rate_multiplier < 0x1001) {
      if (frame_rate_multiplier < 0) {
        *(undefined2 *)(param_1 + 0x610) = 0;
      }
      goto LAB_overlay0__800373f4;
    }
  }

  *(undefined2 *)(param_1 + 0x610) = 0x1000;

LAB_overlay0__800373f4:

  loop_counter = 0;
  *(undefined2 *)(param_1 + 0x612) = 0;
  *(undefined2 *)(param_1 + 0x708) = *(undefined2 *)(param_1 + 0x610);

  int iVar1 = param_1;
  do {
    *(undefined2 *)(iVar1 + 0x4c0) = 0;
    loop_counter = loop_counter + 1;
    iVar1 = iVar1 + 0x68;
  } while (loop_counter < 4);

  *(undefined2 *)(param_1 + 0x60c) = 0;
  return;
}

int FUN_overlay0__80037420(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int lookup_result;

  param_1 = param_1 - param_2;

  if (param_1 < -0x2c74) {
    param_1 = -0x2c74;
  }
  else if (0x2c74 < param_1) {
    param_1 = 0x2c74;
  }

  lookup_result = FUN_8007596c(param_4,param_1);

  param_3 = param_3 + lookup_result;

  if (param_3 < 0x1001) {
    if (param_3 < 0) {
      param_3 = 0;
    }
  }
  else {
    param_3 = 0x1000;
  }
  return param_3;
}

void FUN_overlay0__80037494(int param_1,int param_2,undefined4 param_3)

{
  int control_value;
  int vehicle_ptr;
  uint loop_counter;

  control_value = FUN_overlay0__80037420(*(undefined4 *)(param_1 + 0x6a4),param_2 + -0x8e4,0xc00,param_3);

  *(short *)(param_1 + 0x708) = (short)control_value;

  if ((control_value == 0) && (param_2 < *(int *)(param_1 + 0x6a4))) {

    loop_counter = 0;
    vehicle_ptr = param_1;
    do {
      *(undefined2 *)(vehicle_ptr + 0x4c0) = 0x1000;
      loop_counter = loop_counter + 1;
      vehicle_ptr = vehicle_ptr + 0x68;
    } while (loop_counter < 4);
  }

  if ((control_value != 0x1000) && (control_value != 0)) {
    *(char *)(param_1 + 0x61c) = *(char *)(param_1 + 0x61c) + '\x01';
  }
  return;
}

int FUN_overlay0__80037538(int param_1,int param_2,int *param_3,int *param_4)

{
  char vehicle_type;
  undefined vehicle_subtype;
  int distance_squared;
  int loop_counter;
  int calculated_x;
  int calculated_y;
  int temp_x;
  int temp_y;

  calculated_y = 0;
  calculated_x = 0;

  vehicle_type = *(char *)(param_1 + 0x789);
  vehicle_subtype = *(undefined *)(param_1 + 0x78a);

  for (loop_counter = 0; loop_counter < 10; loop_counter = loop_counter + 1) {

    calculated_x = *(int *)(param_1 + 0x604) + param_2;

    if (vehicle_type == '\x04') {

      FUN_overlay0__80036160(4,vehicle_subtype,calculated_x,&temp_x,&temp_y);
    }
    else {

      FUN_overlay0__80035d68(vehicle_type,vehicle_subtype,calculated_x,&temp_x,&temp_y);
    }

    calculated_x = temp_x - *(int *)(param_1 + 0x65c);
    calculated_y = temp_y - *(int *)(param_1 + 0x660);

    distance_squared = FUN_overlay0__8003c360(calculated_x,calculated_y);

    if (0x4fff < distance_squared) break;

    if (loop_counter < 9) {
      param_2 = param_2 + 0x10000;
    }
  }

  *param_3 = calculated_x;
  *param_4 = calculated_y;
  return param_2;
}

void FUN_overlay0__80037664(int param_1,int param_2)

{
  bool needs_clamping;
  int rate_limit;

  rate_limit = *(short *)(param_1 + 0x62) * DAT_1f800000 >> 0x10;

  if (*(short *)(param_1 + 0x60c) < param_2) {

    rate_limit = (uint)*(ushort *)(param_1 + 0x60c) + rate_limit;
    *(short *)(param_1 + 0x60c) = (short)rate_limit;

    needs_clamping = param_2 < rate_limit * 0x10000 >> 0x10;
  }
  else {

    rate_limit = (uint)*(ushort *)(param_1 + 0x60c) - rate_limit;

    if (*(short *)(param_1 + 0x60c) <= param_2) {
      return;
    }

    *(short *)(param_1 + 0x60c) = (short)rate_limit;

    needs_clamping = rate_limit * 0x10000 >> 0x10 < param_2;
  }

  if (needs_clamping) {
    *(short *)(param_1 + 0x60c) = (short)param_2;
  }
  return;
}

void FUN_overlay0__800376d8(int param_1)

{
  int collision_check_1;
  int collision_check_2;
  uint collision_zone_index;
  int position_y;
  int position_x;

  FUN_overlay0__80037664(param_1, 0);

  collision_check_2 = *(int *)(param_1 + 0x64c);
  *(undefined2 *)(param_1 + 0x610) = 0;
  *(undefined2 *)(param_1 + 0x708) = 0;

  if (collision_check_2 < 0) {
    collision_check_2 = collision_check_2 + 0x7f;
  }

  position_y = (int)*(short *)(param_1 + 0x652);
  if (position_y < 0) {
    position_y = position_y + 0xf;
  }

  position_x = (int)*(short *)(param_1 + 0x650);
  if (position_x < 0) {
    position_x = position_x + 0xf;
  }

  collision_check_1 = FUN_overlay0__8003c398
                    (*(undefined4 *)(param_1 + 0x628),
                     *(undefined4 *)(param_1 + 0x62c),
                     *(undefined4 *)(param_1 + 0x630));

  collision_check_2 = FUN_overlay0__8003c398(collision_check_2 >> 7,
                                            position_y >> 4,
                                            position_x >> 4);

  if (collision_check_1 < 0x11c && collision_check_2 < 0x22) {

    *(undefined2 *)(param_1 + 0x612) = 0;
    collision_zone_index = 0;
    collision_check_2 = param_1;

    do {
      *(undefined2 *)(collision_check_2 + 0x4c0) = 0;
      collision_zone_index = collision_zone_index + 1;
      collision_check_2 = collision_check_2 + 0x68;
    } while (collision_zone_index < 4);

    FUN_overlay0__80036980(param_1,7);
  }
  else {

    *(undefined2 *)(param_1 + 0x612) = 0x1000;
    collision_zone_index = 0;

    do {
      *(undefined2 *)(param_1 + 0x4c0) = 0x1000;
      collision_zone_index = collision_zone_index + 1;
      param_1 = param_1 + 0x68;
    } while (collision_zone_index < 4);
  }
  return;
}

void FUN_overlay0__800377e8(int param_1)

{
  uint collision_zone_index;

  FUN_overlay0__80037664(param_1,0);
  collision_zone_index = 0;

  *(undefined2 *)(param_1 + 0x610) = 0;
  *(undefined2 *)(param_1 + 0x612) = 0;
  *(undefined2 *)(param_1 + 0x708) = 0;

  do {
    *(undefined2 *)(param_1 + 0x4c0) = 0;
    collision_zone_index = collision_zone_index + 1;
    param_1 = param_1 + 0x68;
  } while (collision_zone_index < 4);
  return;
}

void FUN_overlay0__80037834(int param_1,int param_2)

{
  undefined temp_value;
  longlong distance_squared_1;
  bool special_condition;
  longlong distance_squared_2;
  undefined2 temp_short;
  uint vehicle_id;
  int angle_calculation;
  uint angle_result;
  int *track_data_ptr;
  uint track_index;
  undefined4 steering_force;
  int position_check;
  int boundary_check;
  char vehicle_state;
  int steering_angle;
  int steering_direction;
  int position_direction;
  int collision_direction;
  int steering_multiplier;
  int track_position_x;
  int track_position_y;
  int track_position_z;
  int track_angle;
  int track_normal_x;
  int track_normal_y;
  longlong position_squared;

  if (*(char *)(param_1 + 0x786) == '\x06') {
    FUN_overlay0__800376d8(param_1);
    return;
  }

  position_direction = 0;
  steering_direction = 0;
  collision_direction = 0;
  vehicle_id = (uint)*(byte *)(param_1 + 0x1d);

  track_angle = FUN_overlay0__8003643c(param_1,param_2,&track_position_x);
  steering_multiplier = 0;

  if ((*(char *)(param_1 + 0x78b) == '\0') && (steering_angle = 0, DAT_overlay0__80046f64 < 9000)) {
    steering_direction = 1;
  }
  else {

    track_index = *(ushort *)(param_1 + 0x648) & 0xfff;
    track_normal_x = -(int)(short)DAT_80093150[track_index];
    track_normal_y = (int)(short)DAT_80093950[track_index];

    if (*(char *)(param_1 + 0x786) == '\x03') {
      steering_force = 0x50000;
    }
    else if ((*(char *)(param_1 + 0x786) != '\x04') ||
            (steering_force = 0x140000, *(char *)(param_1 + 0x784) == '\0')) {
      if (*(byte *)(param_1 + 0x788) < 3) {

        steering_force = FUN_overlay0__80035874
                           ((int *)&DAT_801c8690[vehicle_id * 5],
                            *(undefined4 *)(param_1 + 0x6a4));
      }
      else {
        steering_force = 0x280000;
        if (*(byte *)(param_1 + 0x788) == 3) {
          steering_force = 0xa0000;
        }
      }
    }

    FUN_overlay0__80037538(param_1,steering_force,&track_position_y,&track_position_z);
    steering_force = FUN_80081af0(-track_position_y,track_position_z);
    angle_calculation = FUN_overlay0__800450e0(steering_force,(int)*(short *)(param_1 + 0x648));
    steering_angle = angle_calculation;
    if (angle_calculation < 0) {
      steering_angle = -angle_calculation;
    }

    if (*(char *)(param_1 + 0x788) == '\x03') {
      if (steering_angle < 0x71) {
        if (0x855c < *(int *)(param_1 + 0x6a4)) goto LAB_overlay0__80037a50;
        *(undefined *)(param_1 + 0x788) = 4;
      }
      else if ((*(byte *)(param_1 + 0x785) & 0xc) != 0) {
        *(undefined *)(param_1 + 0x788) = 4;
      }
    }
    else if (*(char *)(param_1 + 0x788) == '\x04') {
      if ((steering_angle < 0x1c7) && (0x855c < *(int *)(param_1 + 0x6a4))) {
LAB_overlay0__80037a50:
        *(undefined *)(param_1 + 0x788) = 0;
      }
      else if (((*(byte *)(param_1 + 0x785) & 3) != 0) &&
              ((*(byte *)(param_1 + 0x785) == 3 || (0x2aa < steering_angle)))) {
        *(undefined *)(param_1 + 0x788) = 3;
      }
    }
    else if (steering_angle < 0x38f) {
      if (*(char *)(param_1 + 0x785) == '\x03') {
        *(undefined *)(param_1 + 0x788) = 3;
      }
    }
    else {
      *(undefined *)(param_1 + 0x788) = 4;
    }

    if (*(int *)(param_1 + 0x6a4) < 0x8e5) {
      if (*(int *)(param_1 + 0x6a4) < -0x8e4) {
        position_direction = -1;
      }
    }
    else {
      position_direction = 1;
    }

    int steering_threshold = 0x2aa;

    if (*(char *)(param_1 + 0x788) == '\x03') {
      int current_speed = *(int *)(param_1 + 0x6a4);
      if (current_speed < 0) {
        if (-0x855c < current_speed) {

          steering_threshold = 0x71 - (current_speed * 0x238) / 0x855c;
        }
      }
      else {
        steering_threshold = 0x71;
      }
    }

    if (steering_angle < steering_threshold) {
      if (*(int *)(param_1 + 0x6a4) < -0x8e3) {
LAB_overlay0__80037b7c:
        collision_direction = 1;
      }
      else {
        steering_direction = 1;
      }
    }
    else {
      if (0x8e4 < *(int *)(param_1 + 0x6a4)) goto LAB_overlay0__80037b7c;
      steering_direction = -1;
    }

    if (position_direction == 0) {
      steering_angle = 0;
    }
    else {

      if (steering_direction == 1) {

        position_squared = (longlong)*(int *)(param_1 + 0x62c) * (longlong)*(int *)(param_1 + 0x62c);
        distance_squared_2 = (longlong)*(int *)(param_1 + 0x628) * (longlong)*(int *)(param_1 + 0x628) + position_squared;
        distance_squared_1 = (longlong)track_position_y * (longlong)track_position_y + (longlong)track_position_z * (longlong)track_position_z;

        track_index = (uint)distance_squared_1 >> 0xc | (int)((ulonglong)distance_squared_1 >> 0x20) * 0x100000;
        steering_threshold = FUN_80081288((uint)distance_squared_2 >> 0xc | (int)((ulonglong)distance_squared_2 >> 0x20) * 0x100000,6);

        track_normal_y = track_normal_y;
        track_normal_x = track_normal_x;

        if (0x1639 < steering_threshold) {
          angle_result = FUN_80081af0(-*(int *)(param_1 + 0x628),*(undefined4 *)(param_1 + 0x62c));
          track_normal_y = (int)(short)DAT_80093950[angle_result & 0xfff];
          track_normal_x = -(int)(short)DAT_80093150[angle_result & 0xfff];
        }

        steering_angle = track_normal_y * track_position_y + -track_normal_x * track_position_z;
        if (steering_angle < 0) {
          steering_angle = steering_angle + 0xfff;
        }

        distance_squared_1 = (longlong)steering_threshold * (longlong)(steering_angle >> 0xc);
        steering_force = FUN_80086084((int)distance_squared_1,(int)((ulonglong)distance_squared_1 >> 0x20),track_index,(int)track_index >> 0x1f);
        steering_angle = FUN_80075a5c(steering_force,0x518);
        angle_calculation = -steering_angle;

        if (*(int *)(param_1 + 0x6a4) < 0) {
          angle_calculation = steering_angle;
        }

        int vehicle_z_position = *(int *)(param_1 + 0x64c);
        if (vehicle_z_position < 0) {
          vehicle_z_position = -(-vehicle_z_position >> 7);
        }
        else {
          vehicle_z_position = vehicle_z_position >> 7;
        }

        steering_angle = 0;
        if (angle_calculation < 1) {
          if ((angle_calculation < 0) && (angle_calculation < vehicle_z_position)) {

            angle_calculation = (vehicle_z_position - angle_calculation) * (int)(short)DAT_801c8698[vehicle_id * 0x14] >> 0xc;
            steering_angle = -angle_calculation;

            if (steering_angle < -(int)*(short *)(param_1 + 0x60)) {
              steering_multiplier = (angle_calculation << 0xc) / (int)*(short *)(param_1 + 0x60);
              void *game_state_ptr = FUN_80060e94(DAT_800af230);
              if ((*(ushort *)(game_state_ptr + 8) & 4) == 0) {
                steering_angle = -(int)*(short *)(param_1 + 0x60);
              }
            }
          }
        }
        else if (vehicle_z_position < angle_calculation) {

          steering_angle = FUN_8007596c(angle_calculation - vehicle_z_position,(int)(short)DAT_801c8698[vehicle_id * 0x14]);

          if (*(short *)(param_1 + 0x60) < steering_angle) {
            steering_multiplier = (steering_angle << 0xc) / (int)*(short *)(param_1 + 0x60);
              void *game_state_ptr = FUN_80060e94(DAT_800af230);
            if ((*(ushort *)(game_state_ptr + 8) & 4) == 0) {
              steering_angle = (int)*(short *)(param_1 + 0x60);
            }
          }
        }

        steering_angle = steering_angle + ((int)*(short *)(param_1 + 0x4b0) + (int)*(short *)(param_1 + 0x518)) / 2;
        if (steering_angle < 0x201) {
          if (steering_angle < -0x200) {
            steering_angle = -0x200;
          }
        }
        else {
          steering_angle = 0x200;
        }
      }
      else {

        steering_angle = -0x155;
        if ((-0xe4 < angle_calculation) && (steering_angle = 0x155, angle_calculation < 0xe4)) {
          steering_angle = FUN_8007596c(angle_calculation,0x1809);
        }
      }

      if (position_direction == -1) {
        steering_angle = -steering_angle;
      }
    }
  }

  if (*(char *)(param_1 + 0x786) == '\x05') {
    FUN_overlay0__800376d8(param_1);
    return;
  }

  if ((*(char *)(param_1 + 0x45d) == '\x02') || (*(char *)(param_1 + 0x786) != '\0')) {
    FUN_overlay0__80037664(param_1,steering_angle);
  }

  *(undefined2 *)(param_1 + 0x708) = 0;
  track_index = 0;
  int vehicle_ptr = param_1;

  do {
    *(undefined2 *)(vehicle_ptr + 0x4c0) = 0;
    track_index = track_index + 1;
    vehicle_ptr = vehicle_ptr + 0x68;
  } while (track_index < 4);

  *(undefined2 *)(param_1 + 0x610) = 0;
  *(undefined2 *)(param_1 + 0x612) = 0;

  if (steering_direction != 1) {
    if (steering_direction == -1) {

      (&DAT_1f800364)[param_2 * 4] = 1;
      *(undefined2 *)(param_1 + 0x708) = 0x1000;
    }
    else {

      (&DAT_1f800364)[param_2 * 4] = 0;
      *(undefined2 *)(param_1 + 0x708) = 0;
    }

    track_index = 0;
    vehicle_ptr = param_1;
    do {
      *(short *)(vehicle_ptr + 0x4c0) = (short)(collision_direction << 0xc);
      track_index = track_index + 1;
      vehicle_ptr = vehicle_ptr + 0x68;
    } while (track_index < 4);

    *(undefined2 *)(param_1 + 0x610) = *(undefined2 *)(param_1 + 0x708);
    *(undefined2 *)(param_1 + 0x612) = *(undefined2 *)(param_1 + 0x4c0);
    goto LAB_overlay0__8003845c;
  }

  special_condition = false;
  *(undefined *)(param_1 + 0x784) = 0;

  if (*(char *)(param_1 + 0x789) == '\x04') {

    vehicle_ptr = 0x58e8;
    steering_direction = 0x58e8;
    vehicle_state = '\x03';
    *(undefined *)(param_1 + 0x784) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x789) == '\x03') {

      int track_position = *(int *)(param_1 + 0x604);
      track_data_ptr = *(int **)((uintptr_t)DAT_801c8568 + 0x18);

      if (track_position < *(int *)&DAT_800b4a44 / 2) {
        track_position = track_position + *(int *)&DAT_800b4a44;
      }

      if (track_data_ptr[0x10] <= track_position) {
        vehicle_state = '\x03';

        if (track_position < track_data_ptr[0x1a]) {

          vehicle_ptr = 0x15f2e;
          steering_direction = 0x15f2e;
        }
        else {

          if (track_data_ptr[*track_data_ptr * 10 + -0x18] <= track_position) goto LAB_overlay0__80038038;
          vehicle_ptr = 0x15f2e;
          steering_direction = 0x15f2e;
          vehicle_state = '\x01';
          *(undefined *)(param_1 + 0x784) = 1;
        }
        goto LAB_overlay0__80038048;
      }

      vehicle_ptr = 0x1c56c;
      if (*(int *)(param_1 + 0x790) < 0x1c56c) {
        vehicle_ptr = *(int *)(param_1 + 0x790);
      }
      steering_direction = 0x1c56c;
      if (*(int *)(param_1 + 0x794) < 0x1c56c) {
        steering_direction = *(int *)(param_1 + 0x794);
      }
    }
    else {

      special_condition = true;
LAB_overlay0__80038038:
      vehicle_ptr = *(int *)(param_1 + 0x790);
      steering_direction = *(int *)(param_1 + 0x794);
    }
    vehicle_state = *(char *)(param_1 + 0x78b);
  }
LAB_overlay0__80038048:

  switch(vehicle_state) {
  case '\0':
    *(undefined2 *)(param_1 + 0x708) = 0x1000;
    break;

  case '\x01':
  case '\x02':

    FUN_overlay0__80037494(param_1,vehicle_ptr,0xfffff800);

    if (track_position_x == 0) {
      if (*(short *)(param_1 + 0x708) == 0x1000) {
        if (vehicle_state == '\x01') {
          track_position_x = 4;
        }
        else {
          track_position_x = 3;
        }
      }
      else {
        track_position_x = 5;
      }
    }
    break;

  case '\x03':

    FUN_overlay0__80037494(param_1,steering_direction,0xffffe000);
    break;

  case '\x04':

    FUN_overlay0__80037494(param_1,steering_direction,0xfffff000);
  }

  *(short *)(param_1 + 0x708) = (short)(track_angle * *(short *)(param_1 + 0x708) >> 0xc);

  if (*(char *)(param_1 + 0x789) == '\x03') {

    if (((*(char *)(param_1 + 0x76f) != '\0') && (*(char *)(param_1 + 0x76d) != '\0')) ||
       ((*(char *)(param_1 + 0x770) != '\0' && (*(char *)(param_1 + 0x76e) != '\0')))) {

      steering_direction = (uint)*(ushort *)(param_1 + 0x708) << 0x10;
      *(short *)(param_1 + 0x708) = (short)((steering_direction >> 0x10) - (steering_direction >> 0x1f) >> 1);
    }
  }
  else {

    if ((0 < track_position_x) && ((track_position_x < 3 || (track_position_x == 5)))) {
      special_condition = false;
    }

    if (special_condition) {
      steering_direction = -1;

      if (*(short *)(param_1 + 0x76a) == 0) {
LAB_overlay0__80038228:

        *(short *)(param_1 + 0x708) = (short)((0x1000 - *(short *)(param_1 + 0x76a)) * (int)*(short *)(param_1 + 0x708) >> 0xc);

        collision_direction = (int)*(char *)(param_1 + 0x76f);
        vehicle_ptr = (int)*(char *)(param_1 + 0x770);

        if ((int)*(char *)(param_1 + 0x76c) + (int)*(char *)(param_1 + 0x76d) +
            (int)*(char *)(param_1 + 0x76e) + collision_direction + vehicle_ptr == 0) {

          collision_direction = FUN_overlay0__800368dc(*(undefined *)(param_1 + 0x789));
LAB_overlay0__80038324:
          if (collision_direction != -1) {
LAB_overlay0__80038330:
            FUN_overlay0__800367ac(param_1, 0);
          }
        }
        else {

          special_condition = false;
          if ((collision_direction != 0) || (vehicle_ptr != 0)) {
            special_condition = true;
          }

          if ((special_condition) && (collision_direction == 0 || vehicle_ptr == 0)) {
            undefined behavior_state = *(undefined *)(param_1 + 0x789);

            if ((collision_direction != 0) &&
               ((track_position_x != 4 &&
                (collision_direction = FUN_overlay0__80036890(behavior_state), collision_direction != -1)))) {
              goto LAB_overlay0__80038330;
            }

            if ((vehicle_ptr != 0) && (track_position_x != 3)) {
              collision_direction = FUN_overlay0__80036844(behavior_state);
              goto LAB_overlay0__80038324;
            }
          }
        }
      }
      else {

        undefined behavior_state = *(undefined *)(param_1 + 0x789);
        vehicle_ptr = -1;

        if (*(char *)(param_1 + 0x76d) == '\0') {
          vehicle_ptr = FUN_overlay0__80036844(behavior_state);
        }

        if (*(char *)(param_1 + 0x76e) == '\0') {
          collision_direction = FUN_overlay0__80036890(behavior_state);
        }

        if (*(char *)(param_1 + 0x78c) == '\x01') {
          if (vehicle_ptr < 0) {
LAB_overlay0__80038200:
            if ((collision_direction < 0) || (track_position_x == 4)) goto LAB_overlay0__80038228;
LAB_overlay0__80038218:
            FUN_overlay0__800367ac(param_1,collision_direction);
            goto LAB_overlay0__800383a0;
          }
        }
        else {
          if ((*(char *)(param_1 + 0x78c) == '\x02') && (-1 < collision_direction)) goto LAB_overlay0__80038218;
          if ((vehicle_ptr < 0) || (track_position_x == 3)) goto LAB_overlay0__80038200;
        }
        FUN_overlay0__800367ac(param_1,vehicle_ptr);
      }
    }
  }
LAB_overlay0__800383a0:

  *(undefined2 *)(param_1 + 0x612) = *(undefined2 *)(param_1 + 0x4c0);
  *(undefined2 *)(param_1 + 0x610) = *(undefined2 *)(param_1 + 0x708);

  if ((*(char *)(param_1 + 0x45d) == '\x02') || (*(char *)(param_1 + 0x786) != '\0')) {
    (&DAT_1f800364)[param_2 * 4] = 0;
  }
LAB_overlay0__8003845c:

  if ((steering_multiplier != 0) && (1 < *(byte *)(param_1 + 0x618))) {

    steering_direction = 0x1000 - ((int)(short)(&DAT_801c869a)[vehicle_id * 0x14] * (steering_multiplier + -0x1000) >> 0xc);
    if (steering_direction < 0) {
      steering_direction = 0;
    }

    temp_short = (undefined2)(steering_direction * *(short *)(param_1 + 0x708) >> 0xc);
    *(undefined2 *)(param_1 + 0x708) = temp_short;
    *(undefined2 *)(param_1 + 0x610) = temp_short;

    vehicle_ptr = (uint)*(ushort *)(param_1 + 0x4c0) +
             ((int)(short)(&DAT_801c869c)[vehicle_id * 0x14] * (steering_multiplier + -0x1000) >> 0xc);
    temp_short = (undefined2)vehicle_ptr;

    track_index = 0;
    vehicle_ptr = param_1;
    if (0x1000 < vehicle_ptr * 0x10000 >> 0x10) {
      temp_short = 0x1000;
    }
    do {
      *(undefined2 *)(vehicle_ptr + 0x4c0) = temp_short;
      track_index = track_index + 1;
      vehicle_ptr = vehicle_ptr + 0x68;
    } while (track_index < 4);

    *(undefined2 *)(param_1 + 0x612) = temp_short;
  }

  return;
}

void FUN_overlay0__80038540(int param_1,undefined4 param_2,int param_3)

{

  *(undefined2 *)(param_1 + 0x614) = 0;
  (&DAT_1f800364)[param_3 * 4] = 0;
  (&DAT_1f800365)[param_3 * 4] = 0;

  if (*(char *)(param_1 + 0x372) == '\x01') {
    FUN_overlay0__8002f9cc();
    if (*(short *)(param_1 + 0x60a) != 0) {
LAB_overlay0__80038698:

      FUN_overlay0__80037834(param_1,param_3);
      return;
    }
    if (*(char *)(param_1 + 0x786) != '\a') {
      return;
    }
  }
  else {

    if (*(char *)(param_1 + 0x718) != '\0') {
      FUN_overlay0__800372ec(param_1,param_3,(uint)DAT_800a9520 - DAT_801c8570);
      return;
    }

    if (*(short *)(param_1 + 0x78e) != 0) {
      FUN_overlay0__800372ec(param_1,param_3,*(undefined2 *)(param_1 + 0x78e));
      return;
    }

    if (*(char *)(param_1 + 0x786) != '\a') {
      if (*(char *)(param_1 + 0x619) == '\0') {
        *(undefined2 *)(param_1 + 0x60a) = 0;

        if ((int)((uint)*(ushort *)(param_1 + 0x396) * 3) >> 2 < (int)*(short *)(param_1 + 0x6ac)) {
          *(undefined2 *)(param_1 + 0x60a) = 0x1000;
        }
      }
      else {

        *(undefined2 *)(param_1 + 0x60a) = 0x1000;

        if ((int)*(short *)(param_1 + 0x6ac) < (int)(uint)*(ushort *)(param_1 + 0x10a)) {
          *(undefined2 *)(param_1 + 0x60a) = 0;
        }
      }
      goto LAB_overlay0__80038698;
    }
    *(undefined2 *)(param_1 + 0x60a) = 0;
  }

  FUN_overlay0__800377e8(param_1);
  return;
}

undefined4 FUN_overlay0__800386b4(int param_1,int param_2,undefined4 param_3)

{
  int scaled_x;
  undefined4 physics_param;
  int scaled_y;

  scaled_x = param_1 << 4;
  scaled_y = param_2 << 4;
  physics_param = 0;

  return FUN_overlay0__800287dc(&DAT_800a9500,param_3,&scaled_x);
}

undefined4 FUN_overlay0__800386f4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short track_normal_x;
  int current_x;
  int interpolated_x;
  int final_x;
  int *prev_segment;
  int current_y;
  uint track_index;
  int track_distance;
  undefined4 *segment_data;
  int prev_x;
  int prev_y;
  int segment_count;
  int interpolation_step;

  segment_count = param_2 + -1;
  prev_segment = (int *)(segment_count * 0x28 + param_1);
  current_x = param_2 * 0x28 + param_1;
  prev_x = prev_segment[1];
  prev_y = prev_segment[2];
  current_y = *(int *)(current_x + 4);
  current_x = *(int *)(current_x + 8);

  if (*prev_segment == 0) {

    segment_count = FUN_overlay0__8003c360(prev_x - current_y,prev_y - current_x);
    segment_count = segment_count / 0x14000;
    track_distance = 1;
    if (segment_count == 0) {
      segment_count = 1;
    }

    for (; track_distance <= segment_count; track_distance = track_distance + 1) {
      interpolation_step = (track_distance << 0xc) / segment_count;
      interpolated_x = FUN_80075a5c(interpolation_step,current_y - prev_x);
      interpolation_step = FUN_80075a5c(interpolation_step,current_x - prev_y);
      param_3 = FUN_overlay0__800386b4(interpolated_x + prev_x,interpolation_step + prev_y,param_3);
    }
  }
  else {

    segment_data = (undefined4 *)(segment_count * 0x28 + param_1);
    track_distance = segment_data[6];
    track_normal_x = DAT_80093150[segment_data[9] & 0xfff];
    interpolated_x = FUN_80075a5c((int)(short)DAT_80093950[segment_data[9] & 0xfff],track_distance);
    interpolated_x = prev_x - interpolated_x;
    interpolation_step = FUN_80075a5c(-(int)track_normal_x,track_distance);
    interpolation_step = prev_y + interpolation_step;

    prev_x = FUN_80081af0(interpolated_x - prev_x,prev_y - interpolation_step);
    current_x = FUN_80081af0(interpolated_x - current_y,current_x - interpolation_step);

    if (track_distance < 1) {
      *segment_data = 2;
      track_distance = -track_distance;
      if (prev_x < current_x) {
        prev_x = prev_x + 0x1000;
      }
      current_y = prev_x - current_x;
    }
    else {
      *segment_data = 1;
      if (current_x < prev_x) {
        current_x = current_x + 0x1000;
      }
      current_y = current_x - prev_x;
    }

    current_y = current_y / 0xaa;
    if (current_y == 0) {
      current_y = 1;
    }
    prev_y = 1;
    if (param_4 == 5) {
      *(undefined4 *)(segment_count * 0x28 + param_1) = 1;
    }

    for (; prev_y <= current_y; prev_y = prev_y + 1) {
      segment_count = FUN_80075a5c((prev_y << 0xc) / current_y,current_x - prev_x);
      track_index = prev_x + segment_count & 0xfff;
      segment_count = FUN_80075a5c((int)(short)DAT_80093150[track_index],track_distance);
      final_x = FUN_80075a5c((int)(short)DAT_80093950[track_index],track_distance);
      param_3 = FUN_overlay0__800386b4(interpolated_x - segment_count,interpolation_step + final_x,param_3);
    }
  }
  return param_3;
}

undefined4
FUN_overlay0__800389e0
          (int *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,uint *param_5,
          uint *param_6,int param_7,int param_8,uint param_9,undefined4 param_10)

{
  int track_normal_x;
  int track_normal_y;
  int height_1;
  int height_2;
  int height_3;
  undefined4 angle_result;
  int center_height;
  byte surface_data_1;
  byte surface_data_2;
  byte surface_flags;
  undefined2 temp_short;
  int scaled_x;
  undefined4 analysis_param;
  int scaled_y;
  int track_height;
  undefined4 analysis_data [2];

  track_normal_x = FUN_80075a5c((int)(short)DAT_80093150[param_9 & 0xfff],0x800);
  track_normal_y = FUN_80075a5c((int)(short)DAT_80093950[param_9 & 0xfff],0x800);

  scaled_x = param_7 << 4;
  analysis_param = 0x640000;
  scaled_y = param_8 << 4;
  analysis_data[0] = param_10;

  angle_result = analysis_data[0];
  *(undefined2 *)&analysis_data[0] = (undefined2)param_10;
  temp_short = (undefined2)analysis_data[0];
  analysis_data[0] = angle_result;

  FUN_overlay0__80028830(&DAT_800a9500,&surface_data_1);
  center_height = track_height >> 4;

  if (track_height == 0x7fffffff) {
    *param_6 = 0;
    center_height = 0x7fffffff;
    *param_4 = 0;
    *param_5 = 0;
  }
  else {

    *param_6 = surface_flags & 2;
    *param_4 = (uint)surface_data_1;
    *param_5 = (uint)surface_data_2;
  }

  height_1 = FUN_overlay0__80028900(&DAT_800a9500,param_7 - track_normal_x,param_8 + track_normal_y,0x64000,analysis_data);
  height_2 = FUN_overlay0__80028900(&DAT_800a9500,param_7 + track_normal_x,param_8 - track_normal_y,0x64000,analysis_data);
  height_3 = FUN_overlay0__80028900(&DAT_800a9500,param_7 - track_normal_y,param_8 - track_normal_x,0x64000,analysis_data);
  track_normal_x = FUN_overlay0__80028900(&DAT_800a9500,param_7 + track_normal_y,param_8 + track_normal_x,0x64000,analysis_data);

  if (center_height != 0x7fffffff) {

    if ((height_1 == 0x7fffffff) && (height_2 == 0x7fffffff)) {
      return 0;
    }

    if ((height_3 != 0x7fffffff) || (track_normal_x != 0x7fffffff)) {
      *param_1 = center_height;

      if (height_1 == 0x7fffffff) {
        track_normal_y = center_height - height_2;
        angle_result = 0x800;
      }
      else {
        track_normal_y = height_1 - height_2;
        if (height_2 == 0x7fffffff) {
          track_normal_y = height_1 - center_height;
          angle_result = 0x800;
        }
        else {
          angle_result = 0x1000;
        }
      }
      angle_result = FUN_80081af0(track_normal_y,angle_result);
      *param_2 = angle_result;

      track_normal_y = center_height - track_normal_x;
      if (height_3 == 0x7fffffff) {
        angle_result = 0x800;
      }
      else {
        track_normal_y = height_3 - track_normal_x;
        if (track_normal_x == 0x7fffffff) {
          track_normal_y = height_3 - center_height;
          angle_result = 0x800;
        }
        else {
          angle_result = 0x1000;
        }
      }
      angle_result = FUN_80081af0(track_normal_y,angle_result);
      *param_3 = angle_result;
      return 1;
    }
  }
  return 0;
}

undefined4 FUN_overlay0__80038c88(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int track_system_id;
  int *track_data_ptr;
  int height_result;
  int segment_count;
  int track_data [2];

  track_system_id = FUN_overlay0__800358e0(6);
  if (track_system_id != -1) {

    track_data_ptr = *(int **)((uintptr_t)DAT_801c8568 + track_system_id * 4 + 8);
    track_system_id = 0;
    segment_count = *track_data_ptr;
    track_data_ptr = track_data_ptr + 1;

    if (0 < segment_count) {
      do {
        track_data[0] = (int)*(short *)(track_data_ptr + 4);

        height_result = FUN_overlay0__80028900(&DAT_800a9500,param_2,param_3,0x64000,track_data);
        track_system_id = track_system_id + 1;

        if (height_result != 0x7fffffff) {
          *param_4 = height_result;
          *param_1 = track_data[0];
          return 1;
        }
        track_data_ptr = track_data_ptr + 10;
      } while (track_system_id < segment_count);
    }
  }
  return 0;
}

undefined4 FUN_overlay0__80038da0(int *param_1)

{
  int track_height;
  int *segment_ptr;
  int segment_index;
  uint system_type;
  int system_index;
  int *segment_data;
  int segment_count;
  int track_length;
  int scaled_x;
  undefined4 physics_param;
  int scaled_y;
  undefined4 track_param;
  undefined height_data [4];
  int center_height;
  int angle_1;
  int angle_2;
  undefined surface_data_1 [4];
  undefined surface_data_2 [4];
  undefined surface_flags [4];

  track_length = *(int *)&DAT_800b4a44;
  DAT_801c8568 = (undefined4)(uintptr_t)param_1;

  for (system_index = 0; system_index < 7; system_index = system_index + 1) {
    system_type = (uint)(byte)(&DAT_overlay0__80046df8)[system_index];
    if (((int *)&DAT_801c8568)[system_type + 2] != 0) {

      if (0 < *(int *)&DAT_801c8568) {
        ((int *)&DAT_801c8568)[system_type + 2] = (int)(uintptr_t)&DAT_801c8568 + ((int *)&DAT_801c8568)[system_type + 2];
      }
      segment_count = *(int *)((int *)&DAT_801c8568)[system_type + 2];
      segment_data = (int *)((int *)&DAT_801c8568)[system_type + 2] + 1;
      track_param = FUN_overlay0__80028288((int)&DAT_800b4a44,&DAT_800b4a8c);
      segment_ptr = segment_data;

      for (segment_index = 0; segment_index < segment_count; segment_index = segment_index + 1) {
        physics_param = 0;
        scaled_x = segment_ptr[1] << 4;
        scaled_y = segment_ptr[2] << 4;

        if (system_type == 4) {
          FUN_overlay0__80038c88(&track_param,segment_ptr[1],segment_ptr[2],height_data);
        }
        else if (segment_index == 0) {
          track_param = FUN_overlay0__800287dc(&DAT_800a9500,track_param,&scaled_x);
        }
        else {
          track_param = FUN_overlay0__800386f4(segment_data,segment_index,track_param,system_type);
        }

        *(undefined2 *)(segment_ptr + 4) = (undefined2)track_param;
        track_height = FUN_overlay0__80028c6c(&DAT_800a9500,track_param,&scaled_x);
        segment_ptr[5] = track_height;

        segment_ptr[3] = 0;
        segment_ptr[7] = 0;
        segment_ptr[8] = 0;
        *(undefined *)((int)segment_ptr + 0x12) = 0;
        *(undefined *)((int)segment_ptr + 0x13) = 0;

        if ((system_type != 5) &&
           (track_height = FUN_overlay0__800389e0
                              (&center_height,&angle_1,&angle_2,surface_data_1,surface_data_2,surface_flags,segment_ptr[1],
                               segment_ptr[2],segment_ptr[9],track_param), track_height != 0)) {
          *(undefined *)((int)segment_ptr + 0x12) = surface_data_1[0];
          segment_ptr[3] = center_height;
          segment_ptr[7] = angle_1;
          segment_ptr[8] = angle_2;
          *(undefined *)((int)segment_ptr + 0x13) = surface_data_2[0];
        }

        if ((system_type == 4) && (segment_ptr[5] < track_length / 2)) {
          segment_ptr[5] = segment_ptr[5] + track_length;
        }
        segment_ptr = segment_ptr + 10;
      }
    }
  }

  if (0 < *(int *)&DAT_801c8568) {
    *(int *)&DAT_801c8568 = -*(int *)&DAT_801c8568;
  }
  return 1;
}

int FUN_overlay0__80039040
              (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  bool position_valid;
  int track_system_id;
  int *segment_ptr;
  int normalized_position;
  int position_limit;
  int scaled_position;
  int track_length;
  int segment_count;
  int x_coord_1;
  int y_coord_1;
  int x_coord_2;
  int y_coord_2;

  track_length = *(int *)&DAT_800b4a44;
  track_system_id = FUN_overlay0__800358e0(6);
  scaled_position = param_6 << 0x10;

  if (track_system_id == -1) {
    return 0;
  }

  segment_ptr = *(int **)((uintptr_t)DAT_801c8568 + track_system_id * 4 + 8);
  segment_count = *segment_ptr;
  segment_ptr = segment_ptr + 1;

              void *game_state_ptr = FUN_80060e94(DAT_800af230);
  if ((*(ushort *)(game_state_ptr + 8) & 0x20) == 0) {
    position_limit = track_length + -0x140000;
    normalized_position = -position_limit;
    position_valid = position_limit < scaled_position;
    if (scaled_position < normalized_position) goto LAB_overlay0__80039178;
  }
  else {
    if (scaled_position < segment_ptr[segment_count * 10 + -5] - track_length) {
      scaled_position = segment_ptr[segment_count * 10 + -5] - track_length;
    }
    position_limit = (&DAT_800b4a5c)[DAT_800b4a58 + -1] + -0x140000;
    position_valid = position_limit < scaled_position;
  }

  normalized_position = scaled_position;
  if (position_valid) {
    normalized_position = position_limit;
  }
LAB_overlay0__80039178:

  position_valid = normalized_position < track_length;
  if (normalized_position < 0) {
    normalized_position = normalized_position + track_length;
    do {
      position_valid = normalized_position < 0;
      normalized_position = normalized_position + track_length;
    } while (position_valid);
    normalized_position = normalized_position - track_length;
    position_valid = normalized_position < track_length;
  }
  while (normalized_position = normalized_position - track_length, !position_valid) {
    position_valid = normalized_position < track_length;
  }
  normalized_position = normalized_position + track_length;

  int segment_data = (int)*(short *)(segment_ptr + segment_count * 10 + -6);
  int segment_index = 0;
  int segment_end = segment_count + -1;

  if (0 < segment_count) {
    do {
      if (normalized_position <= segment_ptr[5]) {
        segment_data = (int)*(short *)(segment_ptr + 4);
        segment_end = segment_index;
        break;
      }
      segment_index = segment_index + 1;
      segment_ptr = segment_ptr + 10;
    } while (segment_index < segment_count);
  }

  FUN_overlay0__80035d68(track_system_id,segment_end,normalized_position,&x_coord_1,&y_coord_1);
  FUN_overlay0__80035d68(track_system_id,segment_end,normalized_position + 0xa0000,&x_coord_2,&y_coord_2);

  *param_1 = segment_data;
  *param_2 = x_coord_1;
  *param_3 = y_coord_1;
  *param_4 = x_coord_2 - x_coord_1;
  *param_5 = y_coord_2 - y_coord_1;

  return param_6;
}

int FUN_overlay0__800392ac(int param_1)

{
  if (*(int *)((uintptr_t)DAT_801c8568 + 0x18) != 0) {
    return 8 - param_1;
  }
  return 0;
}

int FUN_overlay0__800392d8(int param_1)

{
  int scaling_factor;

  if (param_1 < 0) {
    param_1 = -param_1;
  }

  param_1 = param_1 + -0x8555;
  if (param_1 < 0) {
    param_1 = 0;
  }

  scaling_factor = FUN_80075bf4(param_1,0x1e);
  scaling_factor = scaling_factor + 0x1000;

  if (0x11ff < scaling_factor) {
    scaling_factor = 0x1200;
  }
  return scaling_factor;
}

undefined4 FUN_overlay0__8003932c(int param_1)

{
  undefined4 height_result;
  int calculated_height;

  calculated_height = 0;
  switch(*(undefined *)(param_1 + 0x370)) {
  case 0:
  case 4:
  case 5:
    calculated_height = *(int *)(param_1 + 0x638);
    break;

  case 1:
  case 2:
    calculated_height = *(int *)(param_1 + 0x634);
    break;

  case 3:
    calculated_height = (*(int *)(param_1 + 0x634) + *(int *)(param_1 + 0x638)) / 2;
    break;

  case 6:
    calculated_height = FUN_80075a5c((int)*(short *)(param_1 + 0x374),
                         *(int *)(param_1 + 0x634) - *(int *)(param_1 + 0x638));
    calculated_height = *(int *)(param_1 + 0x638) + calculated_height;
  }

  if (*(char *)(param_1 + 0x618) == '\0') {
    calculated_height = -calculated_height;
  }

  height_result = 0;
  if (0 < calculated_height) {

    height_result = FUN_80075bf4(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x618) * 4 + 0x3a4));
    height_result = FUN_80075bf4(0x28c,height_result);
  }
  return height_result;
}

void FUN_overlay0__8003941c(int param_1)

{
  int speed_limit;
  int base_speed;

  base_speed = *(ushort *)(param_1 + 0x10a) - 1;
  speed_limit = FUN_80075bf4(*(undefined4 *)(param_1 + 0x624),0x3c);

  if (speed_limit < base_speed) {
    speed_limit = base_speed;
  }
  *(short *)(param_1 + 0x6ac) = (short)speed_limit;
  return;
}

void FUN_overlay0__80039470(int param_1, int param_2)

{
  if (*(short *)(param_1 + 0x60a) == 0) {
    *(undefined *)(param_1 + 0x619) = 0;
    return;
  }
  *(undefined *)(param_1 + 0x619) = 1;
  return;
}

/*
 * CalculateWheelSlipRatio (Original: FUN_overlay0__80039490)
 *
 * Purpose:
 *   Computes wheel slip ratio/correction for each of 4 wheels. Compares expected
 *   speed (from scratchpad-scaled longitudinal/lateral velocities) with actual
 *   wheel speed (0x18) to determine slip direction and magnitude. Output written
 *   to wheel +0x44. Called from FUN_overlay0__80039778 per vehicle (drive mode 1).
 *
 * Parameters:
 *   param_1: Base pointer to wheel/axle data (vehicle + 0x2c)
 *   param_2: Vehicle index (for scratchpad: DAT_1f800004 + param_2 * 0x24)
 *
 * Per wheel (4 total, stride 0x68):
 *   Input:  +0x2c = longitudinal velocity, +0x30 = lateral velocity
 *           +0x18 = wheel speed, +0x2a = scaling factor
 *   Output: +0x44 = slip ratio/correction (-0x1000..0x1000)
 *
 * Logic: Compares (long*scale - lat*scale) with wheel speed; branches on
 *   stationary (0x18 + 0x46 < 0x8d), reversing (0x18 < 1), or forward.
 *   Uses FUN_80086084 for division, FUN_8007596c for final scaling when fast.
 */
void FUN_overlay0__80039490(int param_1,int param_2)

{

  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;

  uVar10 = 0;
  puVar6 = &DAT_1f800004 + param_2 * 0x24;
  iVar9 = 0x460;

  do {

    if (3 < uVar10) {
      return;
    }

    iVar8 = param_1 + iVar9;

    iVar3 = FUN_80075a5c((int)*(short *)((int)puVar6 + 0x1a),*(undefined4 *)(iVar8 + 0x2c));
    iVar4 = FUN_80075a5c((int)*(short *)(puVar6 + 6),*(undefined4 *)(iVar8 + 0x30));

    iVar7 = *(int *)(iVar8 + 0x18);

    iVar3 = iVar3 - iVar4;

    *(undefined *)(puVar6 + 4) = 0;

    if (iVar7 + 0x46U < 0x8d) {

      if (iVar7 < iVar3) {

        *(undefined2 *)(puVar6 + 5) = 0x1000;
        *(undefined *)((int)puVar6 + 0x12) = 0xff;
      }
      else if (iVar3 < iVar7) {

        *(undefined2 *)(puVar6 + 5) = 0x1000;
LAB_overlay0__800396a0:
        *(undefined *)((int)puVar6 + 0x12) = 1;
      }
      else {

        *(undefined2 *)(puVar6 + 5) = 0;
        *(undefined *)((int)puVar6 + 0x12) = 0;
      }
LAB_overlay0__800396a4:
      *(undefined *)(puVar6 + 4) = 0xff;
    }
    else if (iVar7 < 1) {

      if (iVar3 < iVar7) {

        if (iVar3 + 0x46U < 0x8d) {
          *(undefined2 *)(puVar6 + 5) = 0;
        }
        else {

          uVar5 = FUN_80075a5c((int)*(short *)(iVar8 + 0x2a),iVar3 - iVar7);
          uVar2 = FUN_80086084(uVar5 << 0xc,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar3,
                               iVar3 >> 0x1f);
          *(undefined2 *)(puVar6 + 5) = uVar2;
        }
        goto LAB_overlay0__800396a0;
      }

      uVar5 = FUN_80075a5c((int)*(short *)(iVar8 + 0x2a),iVar3 - iVar7);
      uVar2 = FUN_80086084(uVar5 << 0xc,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar7,
                           iVar7 >> 0x1f);
      *(undefined2 *)(puVar6 + 5) = uVar2;
      *(undefined *)((int)puVar6 + 0x12) = 0xff;
      *(undefined *)(puVar6 + 4) = 1;
    }
    else {

      if (iVar7 < iVar3) {

        if (iVar3 + 0x46U < 0x8d) {
          *(undefined2 *)(puVar6 + 5) = 0;
        }
        else {

          uVar5 = FUN_80075a5c((int)*(short *)(iVar8 + 0x2a),iVar3 - iVar7);
          uVar2 = FUN_80086084(uVar5 << 0xc,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar3,
                               iVar3 >> 0x1f);
          *(undefined2 *)(puVar6 + 5) = uVar2;
        }
        *(undefined *)((int)puVar6 + 0x12) = 0xff;
        goto LAB_overlay0__800396a4;
      }

      uVar5 = FUN_80075a5c((int)*(short *)(iVar8 + 0x2a),iVar3 - iVar7);
      uVar2 = FUN_80086084(uVar5 << 0xc,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar7,
                           iVar7 >> 0x1f);
      *(undefined2 *)(puVar6 + 5) = uVar2;
      *(undefined *)((int)puVar6 + 0x12) = 1;
      *(undefined *)(puVar6 + 4) = 1;
    }

    if (*(short *)(puVar6 + 5) < 0x1001) {
      if (*(short *)(puVar6 + 5) < -0x1000) {
        *(undefined2 *)(puVar6 + 5) = 0xf000;
      }
    }
    else {
      *(undefined2 *)(puVar6 + 5) = 0x1000;
    }

    if (*(char *)(puVar6 + 4) == '\0') {

      *(undefined2 *)(puVar6 + 5) = 0;
    }
    else {

      if ('\0' < *(char *)(puVar6 + 4)) {
        iVar3 = iVar7;
      }
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }

      if (iVar3 < 0x58e8) {
        uVar2 = FUN_8007596c(iVar3 * 0x2e1 >> 0xc,(int)*(short *)(puVar6 + 5));
        *(undefined2 *)(puVar6 + 5) = uVar2;
      }
    }

    puVar1 = puVar6 + 5;
    puVar6 = puVar6 + 7;
    iVar9 = iVar9 + 0x68;
    uVar10 = uVar10 + 1;

    *(undefined2 *)(iVar8 + 0x44) = *(undefined2 *)puVar1;
  } while( true );
}

void FUN_overlay0__80039778(int param_1,int param_2)

{
  int iVar1;

  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {

    FUN_overlay0__80039490(param_1 + 0x2c,iVar1);
    param_1 = param_1 + 0xb40;
  }
  return;
}

void FUN_overlay0__800397d0(int param_1,int param_2)

{

  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;

  iVar2 = 4;
  iVar11 = 0;

  for (iVar4 = 0; iVar10 = param_1 + 0x2c, iVar4 < param_2; iVar4 = iVar4 + 1) {

    iVar8 = 0x460;
    iVar7 = iVar2 + 0x1f800000;
    iVar6 = iVar11;
    iVar9 = iVar10;

    for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {

      iVar3 = iVar10 + (uVar5 >> 1) * 0xd8 + 0x194;

      FUN_overlay0__8003d940
                (iVar3 + 0x2c,iVar3 + 0x6c,(int)*(short *)((int)&DAT_1f800018 + iVar6),iVar7 + 0x16,
                 iVar10 + iVar8 + 0x46);

      sVar1 = *(short *)((int)&DAT_1f800018 + iVar6);
      if (sVar1 < 0) {
        sVar1 = -sVar1;
      }

      *(short *)(iVar9 + 0x49a) = sVar1;

      iVar9 = iVar9 + 0x68;
      iVar8 = iVar8 + 0x68;
      iVar7 = iVar7 + 0x1c;
      iVar6 = iVar6 + 0x1c;
    }

    iVar2 = iVar2 + 0x90;
    iVar11 = iVar11 + 0x90;
    param_1 = param_1 + 0xb40;
  }
  return;
}

void FUN_overlay0__8003991c(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;

  iVar2 = FUN_overlay0__800449c8(param_1,&DAT_1f800364 + param_2 * 4);

  if (iVar2 != -1) {

    if (*(char *)(param_1 + 0x619) != '\0') {
      uVar1 = 2;
      if ((iVar2 != 0) && (uVar1 = 3, *(char *)(param_1 + 0x618) == '\0')) {
        uVar1 = 2;
      }
      *(undefined *)(param_1 + 0x619) = uVar1;
    }

    *(char *)(param_1 + 0x618) = (char)iVar2;
  }
  return;
}

void FUN_overlay0__80039994(int param_1, int param_2)

{
  undefined2 uVar1;

  uVar1 = FUN_80075bf4(*(undefined4 *)(param_1 + 0x624),0x3c);

  *(undefined2 *)(param_1 + 0x6ac) = uVar1;
  return;
}

void FUN_overlay0__800399c4(int param_1,int param_2)

{
  int iVar1;

  iVar1 = -1;

  if ((&DAT_1f800364)[param_2 * 4] == '\0') {

    if ((0x472 < *(int *)(param_1 + 0x6a4)) || (*(short *)(param_1 + 0x708) != 0)) {
      if (*(char *)(param_1 + 0x618) == '\0') {
        iVar1 = 1;
      }
      goto LAB_overlay0__80039a28;
    }

    if (-0x473 < *(int *)(param_1 + 0x6a4)) goto LAB_overlay0__80039a28;
  }

  if (*(char *)(param_1 + 0x618) != '\0') {
    iVar1 = 0;
  }

LAB_overlay0__80039a28:

  if (iVar1 != -1) {
    *(char *)(param_1 + 0x618) = (char)iVar1;

    if (*(char *)(param_1 + 0x372) == '\x02') {
      *(undefined *)(param_1 + 0x619) = 2;
    }
  }
  return;
}

/*
 * LimitTractionBasedOnWheelSlip (Original: FUN_overlay0__80039a4c)
 *
 * Purpose:
 *   Limits traction based on wheel slip/accumulation. When DAT_overlay0__80046f48
 *   is set and vehicle flag (0x7b9 & 0x10) is clear, computes a traction multiplier
 *   (+0x38) from accumulated wheel value (+100) using thresholds. Then computes
 *   lateral force (+0x34) per wheel, applying the multiplier when active. Called
 *   from CoordinateVehiclePhysicsStep before FUN_overlay0__80039de8 (slip angle).
 *
 * Parameters:
 *   param_1: Base pointer to vehicle data array (each vehicle = 0xb40 bytes)
 *   param_2: Number of vehicles to process
 *
 * Per wheel (4 per vehicle, stride 0x68):
 *   Input:  +8 = base torque, +100 = accumulated slip/value
 *   Output: +0x34 = lateral force
 *           +0x38 = traction multiplier (0..0x1000) when DAT_overlay0__80046f48 active
 *           +0x3f = slip indicator when active
 *
 * Thresholds (DAT_overlay0__80046f*): 80046f48=limit, 80046f5c, 80046f54, 80046f58,
 *   80046f60, 80046f4c control the multiplier curve.
 */
void FUN_overlay0__80039a4c(int param_1,int param_2)

{

  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_48 [4];
  int local_38;
  uint local_34;
  int local_30;

  local_38 = 0;
  local_30 = param_1;

  do {
    iVar9 = local_30;
    if (param_2 <= local_38) {
      return;
    }

    local_34 = 0;
    iVar10 = local_30 + 0x2c;

    if (DAT_overlay0__80046f48 != 0) {
      local_34 = (uint)((*(byte *)(local_30 + 0x7b9) & 0x10) == 0);
    }

    iVar8 = 0;
    if (local_34 != 0) {
      iVar7 = 0x460;

      for (; iVar6 = iVar10 + iVar7, iVar8 < 4; iVar8 = iVar8 + 1) {
        uVar5 = *(uint *)(iVar6 + 100);

        if ((int)uVar5 < DAT_overlay0__80046f48) {
          uVar3 = uVar5 - DAT_overlay0__80046f5c;

          if ((int)uVar5 < DAT_overlay0__80046f5c) {
            if ((int)uVar5 < 0) {
              cVar1 = -0x80;

              if ((int)uVar5 < DAT_overlay0__80046f54) {
                *(undefined2 *)(iVar6 + 0x38) = 0x1000;
              }
              else {

                iVar4 = FUN_80086084(uVar5 * -0x1000,((int)-uVar5 >> 0x1f) << 0xc | -uVar5 >> 0x14,
                                     -DAT_overlay0__80046f54,-DAT_overlay0__80046f54 >> 0x1f);
                sVar2 = FUN_80075bf4(DAT_overlay0__80046f58,iVar4);
                *(short *)(iVar6 + 0x38) = 0x1000 - sVar2;

                if (iVar4 < 0x1000) {
                  cVar1 = -(char)(iVar4 >> 6);
                }
                else {
                  cVar1 = -0x3f;
                }
              }
            }
            else {

              iVar4 = FUN_80086084(uVar5 << 0xc,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,
                                   DAT_overlay0__80046f5c,DAT_overlay0__80046f5c >> 0x1f);
              sVar2 = FUN_80075bf4(DAT_overlay0__80046f60,iVar4);
              *(short *)(iVar6 + 0x38) = 0x1000 - sVar2;
              cVar1 = (char)(iVar4 >> 6);

              if (0xfff < iVar4) {
                cVar1 = '?';
              }
            }
          }
          else {

            iVar4 = FUN_80086084(uVar3 * 0x1000,((int)uVar3 >> 0x1f) << 0xc | uVar3 >> 0x14,
                                 DAT_overlay0__80046f48 - DAT_overlay0__80046f5c,
                                 DAT_overlay0__80046f48 - DAT_overlay0__80046f5c >> 0x1f);
            sVar2 = FUN_80075bf4(iVar4,DAT_overlay0__80046f4c - DAT_overlay0__80046f60);
            *(short *)(iVar6 + 0x38) = (0x1000 - sVar2) - (short)DAT_overlay0__80046f60;

            if (0xfff < iVar4) {

              *(undefined *)(iVar6 + 0x3f) = 0x7f;
              goto LAB_overlay0__80039c94;
            }
            cVar1 = (char)(iVar4 >> 6) + '@';
          }
          *(char *)(iVar6 + 0x3f) = cVar1;
        }
        else {

          sVar2 = (short)DAT_overlay0__80046f4c;
          *(int *)(iVar6 + 100) = DAT_overlay0__80046f48;

          *(undefined *)(iVar6 + 0x3f) = 0x7f;
          *(short *)(iVar6 + 0x38) = 0x1000 - sVar2;
        }
LAB_overlay0__80039c94:
        iVar7 = iVar7 + 0x68;
      }
    }

    iVar8 = 0x460;
    local_48[1] = (int)*(short *)(iVar9 + 0x672) - (int)*(short *)(iVar9 + 0x722);
    local_48[0] = -local_48[1];
    local_48[2] = local_48[0];
    local_48[3] = local_48[1];

    for (uVar5 = 0; iVar9 = iVar10 + iVar8, uVar5 < 4; uVar5 = uVar5 + 1) {
      iVar7 = *(int *)(iVar9 + 8);

      if (local_34 != 0) {
        iVar7 = *(short *)(iVar9 + 0x38) * iVar7 >> 0xc;
      }

      iVar4 = iVar10 + (uVar5 >> 1) * 0xd8 + 0x194;
      iVar6 = FUN_80075d2c(iVar4 + 0x90,iVar7);

      iVar7 = local_48[uVar5] + (int)*(short *)(iVar10 + (uVar5 & 0xfffffffe) + 0x368);
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }

      sVar2 = FUN_overlay0__8003d848(iVar4 + 0xbc,(int)(short)iVar7);
      iVar8 = iVar8 + 0x68;

      *(int *)(iVar9 + 0x34) =
           (int)*(short *)(iVar10 + (uint)*(byte *)(iVar9 + 0x14) * 2 + 0x348) *
           (sVar2 * iVar6 >> 0xc) >> 8;
    }

    local_30 = local_30 + 0xb40;
    local_38 = local_38 + 1;
  } while( true );
}

/*
 * CalculateWheelSlipAngleAndGrip (Original: FUN_overlay0__80039de8)
 *
 * Purpose:
 *   Calculates slip angle and grip coefficient for each wheel based on
 *   longitudinal (0x2c) and lateral (0x30) velocity components. Called from
 *   CoordinateVehiclePhysicsStep after FUN_overlay0__80039a4c (traction limit).
 *
 * Parameters:
 *   param_1: Base pointer to vehicle data array (each vehicle = 0xb40 bytes)
 *   param_2: Number of vehicles to process
 *
 * Per wheel (4 per vehicle, offset +0x68 each):
 *   Input:  +0x2c = longitudinal velocity, +0x30 = lateral velocity
 *   Output: +0x50 = slip angle (atan2(-lateral, longitudinal))
 *           +0x52 = grip coefficient (0..0x1000)
 *
 * Grip logic:
 *   - 0x1000 when speed magnitude > 0x2c73 or edge cases
 *   - 0 when magnitude <= 0x472 (very low speed)
 *   - Ramp (magnitude - 0x472) * 0x666 >> 12 when 0x472 < magnitude <= 0x2c73
 *
 * Uses FUN_80081288 (sqrt) and FUN_80081af0 (atan2).
 */
void FUN_overlay0__80039de8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  iVar9 = 0;

  do {
    if (param_2 <= iVar9) {
      return;
    }

    iVar7 = 0x460;

    for (uVar8 = 0; iVar6 = param_1 + 0x2c + iVar7, uVar8 < 4; uVar8 = uVar8 + 1) {
      iVar5 = *(int *)(iVar6 + 0x2c);
      iVar4 = *(int *)(iVar6 + 0x30);

      if ((iVar5 + 0x2c74U < 0x58e9) && (iVar4 < 0x2c75)) {
        iVar2 = 0x1000;

        if (-0x2c75 < iVar4) {

          iVar3 = FUN_80081288((iVar4 * iVar4 >> 0xc) + (iVar5 * iVar5 >> 0xc),6);

          if (0x2c73 < iVar3) {
            goto LAB_overlay0__80039eb0;
          }

          iVar2 = 0;
          if (0x472 < iVar3) {
            iVar2 = (iVar3 + -0x472) * 0x666 >> 0xc;
          }
        }
      }
      else {
LAB_overlay0__80039eb0:
        iVar2 = 0x1000;
      }

      *(short *)(iVar6 + 0x52) = (short)iVar2;

      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_80081af0(-iVar4,iVar5);
      }

      *(undefined2 *)(iVar6 + 0x50) = uVar1;
      iVar7 = iVar7 + 0x68;
    }

    param_1 = param_1 + 0xb40;
    iVar9 = iVar9 + 1;
  } while( true );
}

int FUN_overlay0__80039f4c(undefined4 param_1,int param_2)

{
  short sVar1;
  short sVar2;

  if (param_2 < -0x400) {
    sVar1 = (short)param_2 + 0x800;
    sVar2 = -1;
  }
  else if (param_2 < 0) {
    sVar1 = -(short)param_2;
    sVar2 = -1;
  }
  else {

    if (0x3ff < param_2) {
      param_2 = 0x800 - param_2;
    }
    sVar1 = (short)param_2;
    sVar2 = 1;
  }

  sVar1 = FUN_overlay0__8003d848(param_1,(int)sVar1);

  return (int)sVar2 * (int)sVar1;
}

/*
 * IntegrateVehiclePhysicsForces (Original: FUN_overlay0__80039fc8)
 *
 * Purpose:
 *   Integrates wheel forces into vehicle motion. Takes accumulated wheel torques,
 *   lateral forces and slip angles, computes longitudinal/yaw acceleration, and
 *   updates vehicle speed (0x6d0), yaw rate (0x678) and drive speed (0x650).
 *   Called from CoordinateVehiclePhysicsStep (FUN_overlay0__8003e0c4) as final
 *   integration phase, before FUN_overlay0__80030330.
 *
 * Parameters:
 *   param_1: Base pointer to vehicle data array (each vehicle = 0xb40 bytes)
 *   param_2: Number of vehicles to process
 *
 * Processing phases (in order):
 *   1. State flags: 0x645 (drive state 0/1/2/3), 0x650 -> scratchpad 0x7c/0x80
 *   2. Wheel torque sum: 0x468 * lookup -> scratchpad 0x88
 *   3. FUN_overlay0__800397d0; per-wheel 0x58, 0x5c (lateral forces)
 *   4. Per-wheel slip/lateral: 0x54, 0x3c via FUN_overlay0__800450e0, 80039f4c
 *   5. Integrate: 0x760, 0x750 -> 0x6d0 (vehicle speed)
 *   6. FUN_overlay0__80046b58: wheel/suspension physics (part_023)
 *   7. Drive speed: 0x650 via FUN_overlay0__800353dc, 8003932c
 *   8. Yaw: 0x678, steering 0x676, 0x754
 *   9. Final: tire smoke, airborne reset, FUN_overlay0__80041ab8
 *
 * Vehicle state: 0x39e (drive mode 1/2), 0x645 (0=normal, 1/2/3=special)
 * Uses scratchpad 0x1f800000 (stride 0x90 per vehicle).
 */
void FUN_overlay0__80039fc8(int param_1,int param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  bool bVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  short local_60 [4];
  short local_58 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  iVar19 = 0;
  iVar18 = 0x1f800000;
  iVar21 = param_1;

  for (iVar20 = 0; iVar16 = iVar21 + 0x2c, iVar20 < param_2; iVar20 = iVar20 + 1) {

    DAT_1f800000 = (int)*(short *)(iVar21 + 0x72a);
    *(undefined4 *)(iVar18 + 0x80) = 0;
    *(undefined4 *)(iVar18 + 0x7c) = 0;

    if (*(char *)(iVar21 + 0x39e) == '\x01') {

      FUN_overlay0__80039470(iVar16,iVar20);
    }
    else {

      if (*(char *)(iVar21 + 0x645) == '\0') {
        if (*(short *)(iVar21 + 0x636) != 0) {

          if (((*(int *)(iVar21 + 0x6d0) < 0x2c75) || (*(char *)(iVar21 + 0x644) == '\0')) &&
             ((-0x2c75 < *(int *)(iVar21 + 0x6d0) || (*(char *)(iVar21 + 0x644) != '\0')))) {

            if ((int)(uint)*(ushort *)(iVar21 + 0x3c0) < (int)*(short *)(iVar21 + 0x6d8)) {

              *(undefined *)(iVar21 + 0x645) = 2;
            }
            else {

              *(undefined2 *)(iVar21 + 0x636) = 0;
            }
          }
          else if (0x400 < *(short *)(iVar21 + 0x734)) {

            *(undefined *)(iVar21 + 0x645) = 3;
          }
        }
      }
      else if (*(char *)(iVar21 + 0x645) == '\x01') {
        if (*(short *)(iVar21 + 0x636) == 0) {

          *(undefined *)(iVar21 + 0x645) = 0;
        }
        else if (*(char *)(iVar21 + 0x39e) == '\x02') {

          uVar8 = FUN_overlay0__8003932c(iVar16);
          *(undefined4 *)(iVar18 + 0x80) = uVar8;
        }
      }

      if (*(byte *)(iVar21 + 0x645) - 2 < 2) {

        *(undefined4 *)(iVar18 + 0x7c) = *(undefined4 *)(iVar21 + 0x650);
        iVar15 = FUN_overlay0__8003932c(iVar16);
        *(int *)(iVar18 + 0x80) = iVar15;

        if (*(char *)(iVar21 + 0x645) == '\x03') {
          if (iVar15 < *(int *)(iVar18 + 0x7c)) {

            *(undefined2 *)(iVar21 + 0x734) = 0;
          }
          else {

            *(undefined2 *)(iVar21 + 0x734) = 0x1000;
          }
        }
      }
    }

    iVar15 = iVar19;
    iVar14 = iVar16;

    for (uVar12 = 0; uVar12 < 4; uVar12 = uVar12 + 1) {
      psVar1 = (short *)(iVar14 + 0x4c0);
      iVar14 = iVar14 + 0x68;

      *(int *)((int)&DAT_1f800004 + iVar15) =
           (int)*psVar1 * *(int *)(iVar16 + (uVar12 >> 1) * 4 + 0x414) >> 0xc;
      iVar15 = iVar15 + 0x1c;
    }

    sVar6 = *(short *)(iVar21 + 0x640);
    iVar14 = *(int *)(iVar21 + 0x448);
    iVar15 = iVar19 + 0x38;

    for (uVar12 = 2; uVar12 < 4; uVar12 = uVar12 + 1) {

      *(int *)((int)&DAT_1f800004 + iVar15) =
           *(int *)((int)&DAT_1f800004 + iVar15) + (sVar6 * iVar14 * 0x10 >> 0x10);
      iVar15 = iVar15 + 0x1c;
    }

    iVar14 = 0x460;
    iVar15 = iVar19;

    for (uVar12 = 0; uVar12 < 4; uVar12 = uVar12 + 1) {

      bVar5 = (*(int *)((int)&DAT_1f800004 + iVar15) != 0) << 1;

      if (*(int *)(iVar16 + iVar14 + 8) == 0) {
        bVar5 = bVar5 | 1;
      }

      *(byte *)(iVar16 + iVar14 + 99) = bVar5;
      iVar15 = iVar15 + 0x1c;
      iVar14 = iVar14 + 0x68;
    }

    iVar19 = iVar19 + 0x90;
    iVar18 = iVar18 + 0x90;
    iVar21 = iVar21 + 0xb40;
  }

  iVar18 = 0x1f800000;
  iVar21 = param_1;

  for (iVar19 = 0; iVar20 = 0, iVar19 < param_2; iVar19 = iVar19 + 1) {
    iVar15 = 0;
    iVar16 = iVar21 + 0x2c;

    *(undefined4 *)(iVar21 + 0x758) = 0;
    *(undefined4 *)(iVar21 + 0x760) = 0;
    *(undefined4 *)(iVar21 + 0x75c) = 0;
    *(undefined4 *)(iVar21 + 0x750) = 0;

    do {
      puVar2 = (undefined4 *)(iVar16 + 0x468);
      pbVar3 = (byte *)(iVar16 + 0x474);
      iVar16 = iVar16 + 0x68;
      iVar15 = iVar15 + 1;

      iVar14 = FUN_80075bf4(*puVar2,(&DAT_overlay0__80046e00)[*pbVar3]);
      iVar20 = iVar20 + iVar14;
    } while (iVar15 < 4);

    iVar16 = *(int *)(iVar21 + 0x6d0);

    if (iVar16 < 1) {
      if (iVar16 < 0) {

        uVar8 = FUN_80075d2c(&DAT_801c8730,-iVar16);
        uVar8 = FUN_80075bf4(uVar8,iVar20);
        *(undefined4 *)(iVar18 + 0x88) = uVar8;
      }
      else {

        *(undefined4 *)(iVar18 + 0x88) = 0;
      }
    }
    else {

      uVar8 = FUN_80075d2c(&DAT_801c8730);
      iVar20 = FUN_80075bf4(uVar8,iVar20);
      *(int *)(iVar18 + 0x88) = -iVar20;
    }

    iVar18 = iVar18 + 0x90;
    iVar21 = iVar21 + 0xb40;
  }

  iVar18 = 4;
  FUN_overlay0__800397d0(param_1,param_2);
  iVar21 = param_1;

  for (local_50 = 0; uVar12 = 0, local_50 < param_2; local_50 = local_50 + 1) {
    iVar16 = 0x460;
    iVar20 = iVar18 + 0x1f800000;
    iVar19 = iVar21 + 0x2c;

    for (; uVar12 < 4; uVar12 = uVar12 + 1) {
      iVar14 = iVar21 + 0x2c + iVar16;

      iVar15 = FUN_80075bf4((int)*(short *)(iVar20 + 0x16),*(undefined4 *)(iVar19 + 0x494));

      if (*(char *)(iVar20 + 0x12) < '\0') {
        iVar15 = -iVar15;
      }

      uVar8 = FUN_80075a5c((int)*(short *)(iVar14 + 0x2a),iVar15);

      if (*(char *)(iVar20 + 0x10) < '\0') {
        iVar13 = 0;
        uVar11 = 0;
        uVar10 = uVar8;
      }
      else {
        uVar10 = 0;
        uVar11 = uVar8;
        iVar13 = iVar15;
        iVar15 = 0;
      }

      iVar19 = iVar19 + 0x68;
      iVar16 = iVar16 + 0x68;

      *(undefined4 *)(iVar20 + 4) = uVar11;
      *(undefined4 *)(iVar20 + 8) = uVar10;
      iVar20 = iVar20 + 0x1c;

      *(int *)(iVar14 + 0x58) = iVar13;
      *(int *)(iVar14 + 0x5c) = iVar15;
    }

    iVar18 = iVar18 + 0x90;
    iVar21 = iVar21 + 0xb40;
  }

  iVar21 = param_1;

  for (local_4c = 0; iVar18 = iVar21 + 0x2c, local_4c < param_2; local_4c = local_4c + 1) {
    iVar20 = 0x460;
    iVar19 = iVar18;

    for (uVar12 = 0; iVar16 = iVar18 + iVar20, uVar12 < 4; uVar12 = uVar12 + 1) {

      if (*(short *)(iVar16 + 0x52) == 0) {

        *(undefined4 *)(iVar16 + 0x54) = 0;
        *(undefined2 *)(iVar16 + 0x3c) = 0;
      }
      else if (*(int *)(iVar16 + 0x18) < 1) {

        uVar8 = FUN_overlay0__800450e0
                          (*(short *)(iVar16 + 0xc) + 0x800,(int)*(short *)(iVar16 + 0x50));
        uVar8 = FUN_overlay0__80039f4c(iVar18 + (uVar12 >> 1) * 0xd8 + 0x194,uVar8);
        iVar14 = FUN_80075a5c((int)*(short *)(iVar16 + 0x52),uVar8);

        iVar15 = (int)*(short *)(iVar16 + 0x46);
        if ((iVar15 < iVar14) || (iVar15 = -iVar15, iVar14 < iVar15)) {
          iVar14 = iVar15;
        }

        sVar6 = (short)iVar14;
        if (iVar14 < 0) {
          sVar6 = -sVar6;
        }
        *(short *)(iVar16 + 0x3c) = sVar6;

        iVar15 = FUN_8007596c(*(undefined4 *)(iVar16 + 0x34));
        *(int *)(iVar16 + 0x54) = -iVar15;
      }
      else {

        uVar8 = FUN_overlay0__800450e0((int)*(short *)(iVar16 + 0xc),(int)*(short *)(iVar16 + 0x50));
        uVar8 = FUN_overlay0__80039f4c(iVar18 + (uVar12 >> 1) * 0xd8 + 0x194,uVar8);
        iVar14 = FUN_80075a5c((int)*(short *)(iVar16 + 0x52),uVar8);

        iVar15 = (int)*(short *)(iVar16 + 0x46);
        if ((iVar15 < iVar14) || (iVar15 = -iVar15, iVar14 < iVar15)) {
          iVar14 = iVar15;
        }

        sVar6 = (short)iVar14;
        if (iVar14 < 0) {
          sVar6 = -sVar6;
        }
        *(short *)(iVar16 + 0x3c) = sVar6;

        uVar8 = FUN_8007596c(*(undefined4 *)(iVar16 + 0x34));
        *(undefined4 *)(iVar16 + 0x54) = uVar8;
      }

      iVar15 = *(int *)(iVar16 + 0x18);
      iVar14 = *(int *)(iVar21 + 0x6d0) - iVar15;

      if (((iVar15 + 0x1639U < 0x2c73) && (-0x472 < iVar14)) && (iVar14 < 0x472)) {

        iVar14 = FUN_80075a5c((int)(short)DAT_80093950[*(ushort *)(iVar16 + 0xc) & 0xfff],
                              *(undefined4 *)(iVar16 + 0x30));
        iVar13 = FUN_80075a5c((int)(short)DAT_80093150[*(ushort *)(iVar16 + 0xc) & 0xfff],
                              *(undefined4 *)(iVar19 + 0x48c));
        iVar14 = iVar14 + iVar13;

        if (iVar14 < 1) {
          sVar6 = 0;
          if (iVar14 < 0) {
            if (-0x8e4 < iVar14) goto LAB_overlay0__8003a680;
            uVar8 = 0xffffe000;
            goto LAB_overlay0__8003a68c;
          }
        }
        else {

          if (iVar14 < 0x8e4) {
LAB_overlay0__8003a680:
            uVar8 = FUN_8007596c(0x3996);
          }
          else {
            uVar8 = 0x2000;
          }
LAB_overlay0__8003a68c:

          if (iVar15 < 0) {
            iVar15 = -iVar15;
          }

          sVar6 = FUN_8007596c((0x163a - iVar15) * 0xb84 >> 0xc,uVar8);
        }

        *(int *)(iVar16 + 0x54) = *(int *)(iVar16 + 0x54) + (int)sVar6;
      }

      iVar19 = iVar19 + 0x68;
      iVar20 = iVar20 + 0x68;
    }

    iVar21 = iVar21 + 0xb40;
  }

  iVar21 = 0x1f800000;
  iVar18 = 0;
  local_30 = param_1;

  for (local_48 = 0; iVar19 = local_30, iVar20 = 0, local_48 < param_2; local_48 = local_48 + 1) {
    iVar14 = local_30 + 0x2c;
    DAT_1f800000 = (int)*(short *)(local_30 + 0x72a);
    iVar16 = iVar18;
    iVar15 = iVar14;

    for (uVar12 = 0; uVar12 < 4; uVar12 = uVar12 + 1) {
      puVar2 = (undefined4 *)(iVar15 + 0x4b8);
      iVar15 = iVar15 + 0x68;
      iVar13 = FUN_8007596c((int)*(short *)((int)&DAT_1f80001c + iVar16 + 2),*puVar2);
      iVar20 = iVar20 + iVar13;
      iVar16 = iVar16 + 0x1c;
    }

    sVar6 = 0;
    iVar20 = *(int *)(iVar19 + 0x760) + iVar20;
    *(int *)(iVar19 + 0x760) = iVar20;
    iVar16 = 0x460;
    *(int *)(iVar19 + 0x760) = iVar20 + *(int *)(iVar21 + 0x88);

    for (uVar12 = 0; uVar12 < 4; uVar12 = uVar12 + 1) {
      if ((*(byte *)(iVar14 + iVar16 + 99) & 0xd) == 0) {
        sVar6 = sVar6 + *(short *)(iVar14 + (uVar12 & 0xfffffffe) + 0x410);
      }
      iVar16 = iVar16 + 0x68;
    }

    if (sVar6 == 0) {
      *(int *)(iVar21 + 0x84) = (int)*(short *)(iVar19 + 0x56);
    }
    else {
      *(int *)(iVar21 + 0x84) = 0x1000000 / ((int)sVar6 + (int)*(short *)(iVar19 + 0x54));
    }

    iVar20 = FUN_80075a5c(*(int *)(iVar19 + 0x760) + *(int *)(iVar19 + 0x758) +
                          (int)*(short *)(iVar19 + 0x746),*(undefined4 *)(iVar21 + 0x84));
    iVar20 = *(int *)(iVar19 + 0x750) + iVar20;
    *(int *)(iVar19 + 0x750) = iVar20;
    iVar20 = FUN_80075a94(iVar20,DAT_1f800000);
    iVar20 = *(int *)(iVar19 + 0x6d0) + iVar20;
    *(int *)(iVar19 + 0x6d0) = iVar20;

    if (iVar20 != 0) {
      iVar16 = 0;
      iVar20 = iVar18;

      for (uVar12 = 0; uVar12 < 4; uVar12 = uVar12 + 1) {
        puVar2 = (undefined4 *)(iVar14 + 0x4bc);
        iVar14 = iVar14 + 0x68;
        iVar15 = FUN_8007596c((int)*(short *)((int)&DAT_1f80001c + iVar20 + 2),*puVar2);
        iVar13 = FUN_8007596c((int)*(short *)((int)&DAT_1f80001c + iVar20),
                              *(undefined4 *)(iVar19 + 0x4e0));
        iVar16 = (iVar16 + iVar15) - iVar13;
        iVar20 = iVar20 + 0x1c;
      }

      iVar20 = FUN_8007596c(*(undefined4 *)(iVar21 + 0x84),iVar16);
      iVar15 = FUN_80075a94(iVar20,DAT_1f800000);
      uVar12 = *(uint *)(iVar19 + 0x6d0);
      uVar17 = uVar12 + iVar15;

      if ((int)(uVar12 ^ uVar17) < 0) {
        iVar20 = FUN_80075a5c((int)*(short *)(iVar19 + 0x72a),-uVar12);
        uVar17 = 0;
        iVar20 = *(int *)(iVar19 + 0x750) + iVar20;
      }
      else {
        iVar20 = *(int *)(iVar19 + 0x750) + iVar20;
        *(int *)(iVar19 + 0x760) = *(int *)(iVar19 + 0x760) + iVar16;
      }

      *(int *)(iVar19 + 0x750) = iVar20;
      *(uint *)(iVar19 + 0x6d0) = uVar17;
    }

    iVar21 = iVar21 + 0x90;
    iVar18 = iVar18 + 0x90;
    local_30 = local_30 + 0xb40;
  }

  FUN_overlay0__80046b58(param_1,param_2);
  iVar18 = 0x1f800000;
  iVar21 = param_1;

  for (iVar19 = 0; iVar20 = iVar21 + 0x2c, iVar19 < param_2; iVar19 = iVar19 + 1) {
    DAT_1f800000 = (int)*(short *)(iVar21 + 0x72a);

    if (*(char *)(iVar21 + 0x39e) == '\x01') {

      FUN_overlay0__80039994(iVar20,iVar19);
LAB_overlay0__8003ac14:

      FUN_overlay0__800399c4(iVar20,iVar19);
    }
    else {

      if (*(char *)(iVar21 + 0x39e) == '\x02') {

        if (*(char *)(iVar21 + 0x645) == '\0') {

          uVar12 = ((uint)*(ushort *)(iVar21 + 0x136) * 0x1000) / 0x3c;
          uVar8 = FUN_overlay0__800353dc(iVar20,(int)*(short *)(iVar21 + 0x734));
          uVar8 = FUN_80075a5c(uVar8,*(undefined4 *)(iVar21 + 0x438));
          iVar16 = FUN_80075a94(uVar8,DAT_1f800000);
          iVar16 = *(int *)(iVar21 + 0x650) + iVar16;
          *(int *)(iVar21 + 0x650) = iVar16;

          if (iVar16 < (int)uVar12) {
            *(uint *)(iVar21 + 0x650) = uVar12;
          }
        }
        else {

          iVar16 = FUN_overlay0__8003932c(iVar20);

          if (*(char *)((uintptr_t)iVar21 + 0x645) == '\x01') {
            if (*(char *)((uintptr_t)iVar21 + 0x39e) == '\x02') {
              *(int *)((uintptr_t)iVar21 + 0x650) = *(int *)((uintptr_t)iVar18 + 0x8c) * iVar16 >> 0xc;
            }
            else {
              *(int *)((uintptr_t)iVar21 + 0x650) = iVar16;
            }
          }

          else if ((byte)(*(char *)((uintptr_t)iVar21 + 0x645) - 2U) < 2) {

            bVar4 = false;
            if (((*(int *)((uintptr_t)iVar18 + 0x7c) <= *(int *)((uintptr_t)iVar18 + 0x80)) &&
                (iVar16 <= *(int *)((uintptr_t)iVar21 + 0x650))) ||
               ((*(int *)((uintptr_t)iVar18 + 0x80) <= *(int *)((uintptr_t)iVar18 + 0x7c)) &&
                (*(int *)((uintptr_t)iVar21 + 0x650) <= iVar16))) {
              bVar4 = true;
            }

            if (bVar4) {
              *(undefined *)(iVar21 + 0x645) = 1;
              iVar15 = DAT_801c8570;
              *(int *)(iVar21 + 0x650) = iVar16;
              *(char *)(iVar21 + 0x648) = (char)(iVar15 / 5);
            }

            if ((*(char *)((uintptr_t)iVar21 + 0x645) == '\x03') &&
               (*(int *)((uintptr_t)iVar18 + 0x80) <=
                (int)(((uint)*(ushort *)((uintptr_t)iVar21 + 0x136) * 0x1000) / 0x3c))) {
              *(undefined *)((uintptr_t)iVar21 + 0x645) = 0;
            }

            if (((*(char *)((uintptr_t)iVar21 + 0x645) == '\x02') && (*(short *)((uintptr_t)iVar21 + 0x63e) == 0x1000)) &&
               (*(int *)((uintptr_t)iVar21 + 0x650) <
                (int)(((*(ushort *)((uintptr_t)iVar21 + 0x136) + 500) * 0x1000) / 0x3c))) {
              *(undefined *)((uintptr_t)iVar21 + 0x645) = 0;
            }
          }

          if (*(int *)((uintptr_t)iVar21 + 0x650) < 0) {
            *(undefined4 *)(iVar21 + 0x650) = 0;
          }
          else {
            uVar12 = ((*(ushort *)(iVar21 + 0x134) + 10) * 0x1000) / 0x3c;
            if ((int)uVar12 <= *(int *)(iVar21 + 0x650)) {
              *(uint *)(iVar21 + 0x650) = uVar12;
            }
          }
        }

        FUN_overlay0__8003941c(iVar20);
        goto LAB_overlay0__8003ac14;
      }

      if (*(char *)(iVar21 + 0x645) == '\0') {

        uVar12 = ((uint)*(ushort *)(iVar21 + 0x136) * 0x1000) / 0x3c;
        uVar8 = FUN_overlay0__800353dc(iVar20,(int)*(short *)(iVar21 + 0x734));
        uVar8 = FUN_80075a5c(uVar8,*(undefined4 *)(iVar21 + 0x438));
        iVar16 = FUN_80075a94(uVar8,DAT_1f800000);
        iVar16 = *(int *)(iVar21 + 0x650) + iVar16;
        *(int *)(iVar21 + 0x650) = iVar16;

        if (iVar16 < (int)uVar12) {
          *(uint *)(iVar21 + 0x650) = uVar12;
        }
      }
      else {

        iVar16 = FUN_overlay0__8003932c(iVar20);

        if (*(char *)((uintptr_t)iVar21 + 0x645) == '\x01') {
          if (*(char *)((uintptr_t)iVar21 + 0x39e) == '\x02') {
            *(int *)((uintptr_t)iVar21 + 0x650) = *(int *)((uintptr_t)iVar18 + 0x8c) * iVar16 >> 0xc;
          }
          else {
            *(int *)((uintptr_t)iVar21 + 0x650) = iVar16;
          }
        }

        else if ((byte)(*(char *)((uintptr_t)iVar21 + 0x645) - 2U) < 2) {

          bVar4 = false;
          if (((*(int *)((uintptr_t)iVar18 + 0x7c) <= *(int *)((uintptr_t)iVar18 + 0x80)) &&
              (iVar16 <= *(int *)((uintptr_t)iVar21 + 0x650))) ||
             ((*(int *)((uintptr_t)iVar18 + 0x80) <= *(int *)((uintptr_t)iVar18 + 0x7c)) &&
              (*(int *)((uintptr_t)iVar21 + 0x650) <= iVar16))) {
            bVar4 = true;
          }

          if (bVar4) {
            *(undefined *)((uintptr_t)iVar21 + 0x645) = 1;
            iVar15 = DAT_801c8570;
            *(int *)((uintptr_t)iVar21 + 0x650) = iVar16;
            *(char *)((uintptr_t)iVar21 + 0x648) = (char)(iVar15 / 5);
          }

          if ((*(char *)((uintptr_t)iVar21 + 0x645) == '\x03') &&
             (*(int *)((uintptr_t)iVar18 + 0x80) <= (int)(((uint)*(ushort *)((uintptr_t)iVar21 + 0x136) * 0x1000) / 0x3c))) {
            *(undefined *)((uintptr_t)iVar21 + 0x645) = 0;
          }

          if (((*(char *)((uintptr_t)iVar21 + 0x645) == '\x02') && (*(short *)((uintptr_t)iVar21 + 0x63e) == 0x1000)) &&
             (*(int *)((uintptr_t)iVar21 + 0x650) <
              (int)(((*(ushort *)((uintptr_t)iVar21 + 0x136) + 500) * 0x1000) / 0x3c))) {
            *(undefined *)((uintptr_t)iVar21 + 0x645) = 0;
          }
        }

        if (*(int *)((uintptr_t)iVar21 + 0x650) < 0) {
          *(undefined4 *)(iVar21 + 0x650) = 0;
        }
        else {

          uVar12 = ((*(ushort *)(iVar21 + 0x134) + 10) * 0x1000) / 0x3c;
          if ((int)uVar12 <= *(int *)(iVar21 + 0x650)) {
            *(uint *)(iVar21 + 0x650) = uVar12;
          }
        }
      }

      FUN_overlay0__8003941c(iVar20);
      FUN_overlay0__8003991c(iVar20,iVar19);
    }

    iVar18 = iVar18 + 0x90;
    iVar21 = iVar21 + 0xb40;
  }

  local_38 = 4;
  local_34 = param_1;

  for (local_44 = 0; iVar21 = local_34, iVar19 = 0, iVar18 = param_1, local_44 < param_2;
      local_44 = local_44 + 1) {
    iVar18 = local_34 + 0x2c;
    DAT_1f800000 = (int)*(short *)(local_34 + 0x72a);
    local_40 = iVar18;

    if (*(char *)(local_34 + 0x6dd) == '\0') {

      local_60[0] = -*(short *)(local_34 + 0x44);
      local_58[0] = *(short *)(local_34 + 0x38);
      local_60[1] = *(undefined2 *)(local_34 + 0x44);
      iVar16 = 0;
      local_58[1] = *(undefined2 *)(local_34 + 0x38);
      local_3c = 0;
      local_60[2] = -*(short *)(local_34 + 0x46);
      local_58[2] = -*(short *)(local_34 + 0x3a);
      local_60[3] = *(undefined2 *)(local_34 + 0x46);
      iVar20 = 0x460;
      iVar19 = local_38 + 0x1f800000;
      local_58[3] = -*(short *)(local_34 + 0x3a);

      for (uVar12 = 0; iVar15 = iVar18 + iVar20, uVar12 < 4; uVar12 = uVar12 + 1) {
        iVar20 = iVar20 + 0x68;
        uVar8 = *(undefined4 *)(iVar15 + 0x54);
        iVar13 = *(int *)(iVar15 + 0x58) + *(int *)(iVar15 + 0x5c);

        iVar15 = FUN_80075a5c((int)*(short *)(iVar19 + 0x1a),uVar8);
        iVar14 = FUN_80075a5c((int)*(short *)(iVar19 + 0x18),iVar13);
        local_3c = local_3c + (-iVar14 - iVar15);

        iVar13 = FUN_80075a5c((int)*(short *)(iVar19 + 0x1a),iVar13);
        psVar1 = (short *)(iVar19 + 0x18);
        iVar19 = iVar19 + 0x1c;
        iVar9 = FUN_80075a5c((int)*psVar1,uVar8);
        iVar13 = FUN_80075a5c((int)local_60[uVar12],iVar13 - iVar9);
        iVar15 = FUN_80075a5c((int)local_58[uVar12],-iVar14 - iVar15);
        iVar16 = iVar16 + (iVar13 - iVar15);
      }

      uVar8 = FUN_80075a5c(*(undefined4 *)(local_40 + 0x68),iVar16);
      iVar18 = FUN_80075a94(DAT_1f800000,uVar8);

      uVar8 = 0x80000;
      iVar18 = *(int *)(iVar21 + 0x678) + iVar18;
      *(int *)(iVar21 + 0x678) = iVar18;

      if ((0x80000 < iVar18) || (uVar8 = 0xfff80000, iVar18 < -0x80000)) {
        *(undefined4 *)(iVar21 + 0x678) = uVar8;
      }

      uVar8 = FUN_80075a5c(local_3c - *(int *)(iVar21 + 0x75c),(int)*(short *)(local_40 + 0x2a));
      *(undefined4 *)(iVar21 + 0x754) = uVar8;
      uVar7 = FUN_80075a5c(uVar8,(int)*(short *)(local_40 + 0x34));
      *(undefined2 *)(iVar21 + 0x676) = uVar7;
    }
    else {

      *(undefined4 *)(local_34 + 0x754) = 0;
      *(undefined2 *)(local_34 + 0x676) = 0;
    }

    local_38 = local_38 + 0x90;
    local_34 = local_34 + 0xb40;
  }

  do {
    iVar21 = iVar18 + 0x2c;

    if (param_2 <= iVar19) {
      iVar18 = 0;
      iVar21 = param_1;

      if (DAT_overlay0__80046f48 != 0) {

        for (; iVar19 = iVar21 + 0x2c, iVar18 < param_2; iVar18 = iVar18 + 1) {

          if ((*(byte *)(iVar21 + 0x7b9) & 0x10) == 0) {
            DAT_1f800000 = (int)*(short *)(iVar21 + 0x72a);
            iVar16 = 0x460;

            for (iVar20 = 0; iVar15 = iVar19 + iVar16, iVar20 < 4; iVar20 = iVar20 + 1) {
              *(undefined *)(iVar15 + 0x3e) = 0;

              if (*(char *)(iVar15 + 0x14) == '\0') {

                if (*(int *)(iVar15 + 8) != 0) {
                  iVar14 = iVar19 + (iVar20 >> 1) * 2;

                  iVar14 = ((((int)*(short *)(iVar15 + 0x3a) * (int)*(short *)(iVar14 + 0x44c) >>
                             0xc) + ((int)*(short *)(iVar15 + 0x3c) *
                                     (int)*(short *)(iVar14 + 0x448) >> 0xc)) *
                            ((*(int *)(iVar15 + 8) + *(int *)(iVar19 + (iVar20 >> 1) * 4 + 0x434)) /
                            3) >> 0xc) * DAT_1f800000 >> 0x10;

                  *(int *)(iVar15 + 100) = *(int *)(iVar15 + 100) + iVar14;

                  if (0xff < iVar14) {
                    iVar14 = 0xff;
                  }
                  *(char *)(iVar15 + 0x3e) = (char)iVar14;
                }
              }
              iVar16 = iVar16 + 0x68;
            }
          }
          iVar21 = iVar21 + 0xb40;
        }
      }

      iVar21 = FUN_overlay0__80041ab8();
      iVar18 = 0;

      if (iVar21 != 0) {

        for (; iVar21 = param_1 + 0x2c, iVar18 < param_2; iVar18 = iVar18 + 1) {
          bVar4 = false;

          if ((*(uint *)(param_1 + 0x7b8) & 0xc00) == 0) {
            iVar19 = 0;

            if (DAT_overlay0__80046f48 != 0) {
              iVar20 = 0x460;

              for (; iVar19 < 4; iVar19 = iVar19 + 1) {
                if ((-1 < *(int *)(iVar21 + iVar20 + 100)) &&
                   (*(short *)(iVar21 + iVar20 + 0x38) < DAT_overlay0__80046f50)) {
                  bVar4 = true;
                  break;
                }
                iVar20 = iVar20 + 0x68;
              }
            }

            if ((!bVar4) && (iVar19 = FUN_overlay0__800419e8(iVar21), iVar19 == 2)) {
              iVar19 = 0x460;

              for (iVar20 = 0; iVar16 = iVar21 + iVar19, iVar20 < 4; iVar20 = iVar20 + 1) {
                iVar19 = iVar19 + 0x68;
                if (*(char *)(iVar16 + 0x22) != '\0') {
                  bVar4 = true;
                  break;
                }
              }
            }

            if (bVar4) {
              bVar5 = *(byte *)(param_1 + 0x7b9);
              *(byte *)(param_1 + 0x7b9) = bVar5 | 4;

              if (*(char *)(param_1 + 0x489) != '\0') {
                *(byte *)(param_1 + 0x7b9) = bVar5 | 0xc;
              }
            }
          }
          param_1 = param_1 + 0xb40;
        }
      }
      return;
    }

    DAT_1f800000 = (int)*(short *)(iVar18 + 0x72a);

    if (*(char *)(iVar18 + 0x744) == '\0') {
      sVar6 = *(short *)(iVar18 + 0x7ba);
      if (sVar6 != 0) goto LAB_overlay0__8003b124;
      if (*(char *)(iVar18 + 0x7b2) == '\a') goto LAB_overlay0__8003b120;

      if (*(char *)(iVar18 + 0x6dd) == '\0') {
        iVar20 = 0;

        if (((((*(int *)(iVar18 + 0x6d0) + 0x471U < 0x8e3) && (*(short *)(iVar18 + 0x4de) == 0)) &&
             (*(short *)(iVar18 + 0x546) == 0)) &&
            ((*(short *)(iVar18 + 0x5ae) == 0 && (*(short *)(iVar18 + 0x616) == 0)))) &&
           ((((*(byte *)(iVar18 + 0x4ef) & 2) != 0 ||
             (((*(byte *)(iVar18 + 0x557) & 2) != 0 || ((*(byte *)(iVar18 + 0x5bf) & 2) != 0)))) ||
            ((*(byte *)(iVar18 + 0x627) & 2) != 0)))) {

          *(undefined4 *)(iVar18 + 0x678) = 0;
          *(undefined4 *)(iVar18 + 0x654) = 0;
          *(undefined4 *)(iVar18 + 0x658) = 0;
          *(undefined4 *)(iVar18 + 0x760) = 0;
          *(undefined4 *)(iVar18 + 0x750) = 0;
          *(undefined4 *)(iVar18 + 0x754) = 0;
          *(undefined2 *)(iVar18 + 0x676) = 0;
          *(undefined4 *)(iVar18 + 0x6d0) = 0;
          *(undefined4 *)(iVar18 + 0x6d4) = 0;
        }
        else {

          uVar8 = FUN_80075a94(*(undefined4 *)(iVar18 + 0x750),DAT_1f800000);
          uVar10 = FUN_80075a94(*(undefined4 *)(iVar18 + 0x754),DAT_1f800000);
          iVar16 = iVar21;
          iVar15 = iVar21;

          do {
            iVar20 = iVar20 + 1;
            iVar14 = FUN_8007596c(uVar8,(int)*(short *)(iVar16 + 0x668));
            psVar1 = (short *)(iVar16 + 0x670);
            iVar16 = iVar16 + 2;
            iVar13 = FUN_8007596c(uVar10,(int)*psVar1);
            *(int *)(iVar15 + 0x628) = *(int *)(iVar15 + 0x628) + iVar14 + iVar13;
            iVar15 = iVar15 + 4;
          } while (iVar20 < 2);
        }
      }

      if ((*(int *)(iVar18 + 0x7a4) != 0) || (*(int *)(iVar18 + 0x7a8) != 0)) {

        for (iVar20 = 0; iVar20 < 2; iVar20 = iVar20 + 1) {
          uVar8 = FUN_80075a5c(*(undefined4 *)(iVar21 + 0x778),(int)*(short *)(iVar18 + 0x56));
          iVar16 = FUN_80075a94(uVar8,DAT_1f800000);
          *(int *)(iVar21 + 0x628) = *(int *)(iVar21 + 0x628) + iVar16;
          iVar21 = iVar21 + 4;
        }
      }
    }
    else {

LAB_overlay0__8003b120:
      sVar6 = *(short *)(iVar18 + 0x7ba);
LAB_overlay0__8003b124:

      *(undefined4 *)(iVar18 + 0x760) = 0;
      *(undefined4 *)(iVar18 + 0x678) = 0;
      *(undefined4 *)(iVar18 + 0x654) = 0;
      *(undefined4 *)(iVar18 + 0x658) = 0;

      if (sVar6 == 0) {
        *(undefined2 *)(iVar18 + 0x67c) = 0;
        *(undefined2 *)(iVar18 + 0x67e) = 0;
        *(undefined4 *)(iVar18 + 0x65c) = 0;
      }
    }

    iVar19 = iVar19 + 1;
    iVar18 = iVar18 + 0xb40;
  } while( true );
}

int FUN_overlay0__8003b598(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar5 = 0;
  iVar6 = 0x5a;

  for (iVar4 = -0x2d; iVar4 < 0x2e; iVar4 = iVar4 + 1) {

    uVar1 = (iVar4 * 0x1000) / 0x168;

    uVar2 = FUN_overlay0__80039f4c(param_1 + 0x194,uVar1);

    iVar3 = FUN_80075a5c((int)(short)DAT_80093950[uVar1 & 0xfff],uVar2);

    if (iVar5 < iVar3) {
      iVar5 = iVar3;
      iVar6 = iVar4;
    }
  }

  return (iVar6 * 0x1000) / 0x168;
}

void FUN_overlay0__8003b598_part2(int param_1)
{
  if (param_1 == 1) {
    DAT_801c98c0 = 2;
    DAT_801c98c2 = 0x10;
    *(byte *)((char *)&DAT_801c98bc + 1) = 0x14;
  }
  else {
    if (param_1 != 2) {
      DAT_801c98c0 = 0;
      DAT_801c98c2 = 0;
      *(byte *)((char *)&DAT_801c98bc + 1) = 0;
      DAT_801c98c1 = 0;
      *(byte *)((char *)&DAT_801c98bc + 3) = 100;
      DAT_801c98c3 = 0;
      *(byte *)((char *)&DAT_801c98bc + 2) = 0;
      return;
    }

    DAT_801c98c0 = 1;
    DAT_801c98c2 = 8;
    *(byte *)((char *)&DAT_801c98bc + 1) = 10;
  }

  DAT_801c98c1 = 10;
  *(byte *)((char *)&DAT_801c98bc + 3) = 0xd;
  DAT_801c98c3 = 0xf;
  *(byte *)((char *)&DAT_801c98bc + 2) = 0x19;
  return;
}

uint FUN_overlay0__8003b598_part3(int param_1)
{
  uint uVar1 = 0;

  if (param_1 == 1) {
    uVar1 = 1;
    *(byte *)((char *)&DAT_801c98b8 + 2) = 0xf;
    *(byte *)((char *)&DAT_801c98b8 + 3) = 0x14;
    *(byte *)((char *)&DAT_801c98bc + 0) = 100;
  }
  else if (param_1 == 2) {
    uVar1 = 1;
    *(byte *)((char *)&DAT_801c98b8 + 2) = 0x14;
    *(byte *)((char *)&DAT_801c98b8 + 3) = 10;
    *(byte *)((char *)&DAT_801c98bc + 0) = 0x14;
  }
  else {
    *(byte *)((char *)&DAT_801c98b8 + 2) = 0;
    *(byte *)((char *)&DAT_801c98b8 + 3) = 0;
    *(byte *)((char *)&DAT_801c98bc + 0) = 0;
  }
  return uVar1;
}

void FUN_overlay0__8003b7b8(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;

  DAT_overlay0__80046ef0 = 0xccc;
  DAT_overlay0__80046ef4 = 0x400;
  iVar4 = 0;
  DAT_overlay0__80046f38 = 8;
  puVar7 = &DAT_overlay0__80046f18;
  piVar6 = &DAT_overlay0__80046ef8;

  do {
    *piVar6 = (uint)(byte)(&DAT_overlay0__80046e2c)[iVar4] * 0x8e4;
    pbVar1 = &DAT_overlay0__80046e34 + iVar4;
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    *puVar7 = ((uint)*pbVar1 << 0xc) / 1000;
    puVar7 = puVar7 + 1;
  } while (iVar4 < 8);

  iVar4 = 0;
  puVar2 = &DAT_overlay0__80046f88;
  do {
    pbVar1 = &DAT_overlay0__80046e3c + iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = (short)(((uint)*pbVar1 << 0xc) / 1000);
    puVar2 = puVar2 + 1;
  } while (iVar4 < 8);

  iVar4 = 0;
  puVar7 = &DAT_overlay0__80046e00;
  do {
    pbVar1 = &DAT_overlay0__80046e44 + iVar4;
    iVar4 = iVar4 + 1;
    *puVar7 = ((uint)*pbVar1 << 0xc) / 10;
    puVar7 = puVar7 + 1;
  } while (iVar4 < 8);

  iVar4 = 0;
  puVar2 = &DAT_overlay0__80046f98;
  do {
    pbVar1 = &DAT_overlay0__80046e4c + iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = (short)(((uint)*pbVar1 << 8) / 10);
    puVar2 = puVar2 + 1;
  } while (iVar4 < 8);

  puVar3 = &DAT_overlay0__80046fa8;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    *puVar3 = (&DAT_overlay0__80046e54)[iVar4];
    puVar3 = &DAT_overlay0__80046fa9 + iVar4;
    iVar4 = iVar5;
  } while (iVar5 < 8);

  DAT_801c8734 = &DAT_overlay0__80046ef8;
  DAT_801c8738 = &DAT_overlay0__80046f18;
  DAT_overlay0__80046f3c = 0x64000;
  DAT_801c8730 = (undefined2)DAT_overlay0__80046f38;
  DAT_overlay0__80046f44 = 0x32000;
  DAT_overlay0__80046f40 = 0x5000;
  return;
}

void FUN_overlay0__8003ba64(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;

  FUN_overlay0__8003b7b8();
  puVar12 = DAT_801c8690;

  for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
    iVar2 = FUN_80060e94(DAT_800af230);
    iVar11 = iVar13 << 4;

    if ((*(ushort *)(iVar2 + 8) & 4) != 0) {
      iVar11 = 0x40;
    }

    puVar12[4] = (short)(((uint)(byte)(&DAT_overlay0__80046e5f)[iVar11] << 0xc) / 100);
    *(uint *)(puVar12 + 8) = (uint)(byte)(&DAT_overlay0__80046e63)[iVar11] << 0x10;
    *(uint *)(puVar12 + 10) = (uint)(byte)(&DAT_overlay0__80046e64)[iVar11] << 0x10;
    uVar1 = FUN_80075e90(0x1000,(uint)(byte)(&DAT_overlay0__80046e62)[iVar11] * 0x8e4,0);
    puVar12[7] = uVar1;
    *puVar12 = (short)(0x64000 / (byte)(&UNK_overlay0__80046e5c)[iVar11]);
    puVar12[1] = (short)(((uint)(byte)(&UNK_overlay0__80046e5d)[iVar11] << 0xc) / 100);
    *(uint *)(puVar12 + 2) = ((byte)(&UNK_overlay0__80046e5e)[iVar11] - 100) * 0x472;
    puVar12[5] = (short)(((uint)(byte)(&UNK_overlay0__80046e60)[iVar11] << 0xc) / 100);
    puVar12[6] = (short)(((uint)(byte)(&UNK_overlay0__80046e61)[iVar11] << 0xc) / 100);
    puVar12[0x12] = (short)(((uint)(byte)(&UNK_overlay0__80046e6a)[iVar11] << 0xc) / 100);
    puVar12[0xc] = (short)(((uint)(byte)UNK_overlay0__80046e65[iVar11] << 0xc) / 100);
    puVar12[0xd] = (short)(((uint)*(byte *)(iVar11 + -0x7ffb919a) << 0xc) / 100);
    puVar12[0xe] = (short)(((uint)*(byte *)(iVar11 + -0x7ffb9199) << 0xc) / 10);
    puVar12[0xf] = (short)(((uint)*(byte *)(iVar11 + -0x7ffb9198) << 0xc) / 100);
    *(uint *)(puVar12 + 0x10) = ((uint)*(byte *)(iVar11 + -0x7ffb9197) << 0xc) / 10;
    puVar12 = puVar12 + 0x14;
  }

  psVar5 = (short *)DAT_801c8690;

  for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
    uVar3 = (uint)*(byte *)((int)&DAT_801c98ac + iVar13);
    uVar4 = uVar3;

    if (uVar3 == 0) {
      uVar4 = 100;
    }

    uVar4 = uVar4 << 0xc;
    if (100 < uVar3) {
      uVar4 = 0x64000;
    }
    psVar5[0x13] = (short)(uVar4 / 100);

    uVar3 = (uint)*(byte *)((int)&DAT_801c98b0 + iVar13);
    uVar4 = uVar3;

    if (uVar3 == 0) {
      uVar4 = 100;
    }

    if (100 < uVar3) {
      uVar4 = 100;
    }

    *psVar5 = (short)((*psVar5 * 100) / (int)uVar4);
    psVar5 = psVar5 + 0x14;
  }

  DAT_overlay0__80046f48 = 0;
  DAT_overlay0__80046f4c = 0;
  DAT_overlay0__80046f50 = 0;
  DAT_overlay0__80046f54 = 0;
  DAT_overlay0__80046f58 = 0;
  DAT_overlay0__80046f5c = 0;
  DAT_overlay0__80046f60 = 0;

  if ((((*(byte *)((char *)&DAT_801c98bc + 1) != 0) &&
       (iVar13 = FUN_80060e94(DAT_800af230), (*(ushort *)(iVar13 + 8) & 4) == 0)) &&
      (DAT_801c98c2 < *(byte *)((char *)&DAT_801c98bc + 1))) &&
     ((DAT_801c98c3 < *(byte *)((char *)&DAT_801c98bc + 2) && (*(byte *)((char *)&DAT_801c98bc + 3) < *(byte *)((char *)&DAT_801c98bc + 2))))) {

    DAT_overlay0__80046f48 = (uint)*(byte *)((char *)&DAT_801c98bc + 1) * 10000;
    DAT_overlay0__80046f54 = (uint)DAT_801c98c0 * -10000;
    DAT_overlay0__80046f5c = (uint)DAT_801c98c2 * 10000;
    DAT_overlay0__80046f4c = ((uint)*(byte *)((char *)&DAT_801c98bc + 2) << 0xc) / 100;
    DAT_overlay0__80046f50 = (int)((100 - (uint)*(byte *)((char *)&DAT_801c98bc + 3)) * 0x1000) / 100;
    DAT_overlay0__80046f58 = ((uint)DAT_801c98c1 << 0xc) / 100;
    DAT_overlay0__80046f60 = ((uint)DAT_801c98c3 << 0xc) / 100;
  }

  iVar13 = DAT_801c8570;
  psVar10 = &DAT_overlay0__80046dc4;
  psVar9 = &DAT_overlay0__80046dc0;
  psVar8 = &DAT_overlay0__80046dbc;
  psVar7 = &DAT_overlay0__80046db8;
  psVar6 = &DAT_overlay0__80046db4;
  psVar5 = &DAT_overlay0__80046db0;

  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {

    *psVar5 = (short)(0x64000 / (iVar13 * 10));
    *psVar6 = (short)(0x64000 / (iVar13 * 10));
    *psVar7 = (short)(0x64000 / (iVar13 * 10));
    *psVar8 = (short)(0x64000 / (iVar13 * 10));
    *psVar9 = (short)(0x64000 / iVar13);
    *psVar10 = (short)(0x64000 / iVar13);

    if (0x1000 < *psVar5) {
      *psVar5 = 0x1000;
    }
    if (0x1000 < *psVar6) {
      *psVar6 = 0x1000;
    }
    if (0x1000 < *psVar7) {
      *psVar7 = 0x1000;
    }
    if (0x1000 < *psVar8) {
      *psVar8 = 0x1000;
    }
    if (0x1000 < *psVar9) {
      *psVar9 = 0x1000;
    }
    if (0x1000 < *psVar10) {
      *psVar10 = 0x1000;
    }

    psVar10 = psVar10 + 1;
    psVar9 = psVar9 + 1;
    psVar8 = psVar8 + 1;
    psVar7 = psVar7 + 1;
    psVar6 = psVar6 + 1;
    psVar5 = psVar5 + 1;
  }
  return;
}

void FUN_overlay0__8003c12c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  uVar2 = 0;
  uVar3 = 0;

  switch(DAT_801d5866) {
  case 0:
    uVar2 = FUN_overlay0__8003b73c((int)*(byte *)((char *)&DAT_801d5860 + 3));
    uVar3 = (uint)*(byte *)((char *)&DAT_801d585c + 3);
    break;
  case 2:
  case 4:
  case 0xc:
    uVar2 = 1;
  case 1:
    uVar3 = 0xffffffff;
  }

  FUN_overlay0__80041e4c(uVar2);

  if (-1 < (int)uVar3) {
    FUN_overlay0__8003b69c(uVar3);
  }

  FUN_overlay0__8003ba64();

  FUN_overlay0__8003c3f4();

  iVar1 = FUN_overlay0__80012378();
  if (iVar1 != 0) {
    FUN_overlay0__80012410();
  }
  return;
}

void FUN_overlay0__8003c200(void)

{
  undefined uVar1;

  uVar1 = DAT_800af231;
  FUN_overlay0__8003fe8c();
  FUN_overlay0__80042680(&DAT_800a9688,uVar1);
  FUN_overlay0__80042568(&DAT_800a9688,uVar1);
  return;
}

void FUN_overlay0__8003c250(undefined4 param_1,int param_2)

{
  short sVar1;
  char *pcVar2;
  int iVar3;

  FUN_8008ce30(param_1,0,0xc);
  sVar1 = *(short *)(param_2 + 0x18);

  if (sVar1 == 2) {
    FUN_overlay0__80013ef0(param_2,param_1);
  }
  else if (sVar1 < 3) {
    if (sVar1 == 1) {
      pcVar2 = (char *)FUN_overlay0__80012360();

      if ((pcVar2[1] == '\x01') ||
         ((*pcVar2 != '\x03' && (iVar3 = FUN_overlay0__8001252c(param_1), iVar3 == 0)))) {
        *(short *)(pcVar2 + 2) = *(short *)(pcVar2 + 2) + 1;
        FUN_overlay0__80014074(param_2,param_1);
      }
      else {
        FUN_8008ce30(param_1,0,0xc);
      }
    }
  }
  else if (sVar1 == 3) {
    FUN_overlay0__80014030(param_2,param_1);
  }
  return;
}

int FUN_overlay0__8003c360(int param_1,int param_2)

{
  int iVar1;

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }

  iVar1 = param_2;
  if (param_1 < param_2) {
    int iVar1 = param_1;
  }

  return (param_1 + param_2) - (iVar1 >> 1);
}

int FUN_overlay0__8003c398(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_3 < 0) {
    param_3 = -param_3;
  }

  iVar1 = param_1;
  if (param_1 < param_2) {
    iVar1 = param_2;
    param_2 = param_1;
  }

  iVar2 = iVar1;
  if (iVar1 < param_3) {
    iVar2 = param_3;
    param_3 = iVar1;
  }

  return iVar2 + (param_2 + param_3 >> 2);
}

void FUN_overlay0__8003c3f4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;

  iVar5 = 0;
  DAT_overlay0__80046f64 = 0;
  puVar7 = &DAT_801c85e0;
  iVar6 = 0;

  do {
    iVar4 = 0;
    iVar2 = iVar6;

    do {
      *(undefined4 *)((int)&DAT_801c8580 + iVar2) = 359999999;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < 6);

    *puVar7 = 0xffff;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + 0x18;
    puVar1 = &DAT_801c85e8 + iVar5;
    puVar3 = &DAT_801c85ec + iVar5;
    iVar5 = iVar5 + 1;
    *puVar1 = 0;
    *puVar3 = 0;
  } while (iVar5 < 4);

  DAT_overlay0__80046f68 = 0;
  iVar5 = FUN_overlay0__80012378();
  if (iVar5 != 0) {
    DAT_overlay0__80046f68 = 1;
  }

  if (DAT_801d5866 != 4) {
    if (DAT_801d5866 < 5) {
      if (DAT_801d5866 != 2) {
        DAT_overlay0__80046f69 = 0;
        return;
      }
    }
    else if (DAT_801d5866 != 0xc) {
      DAT_overlay0__80046f69 = 0;
      return;
    }
  }
  DAT_overlay0__80046f69 = DAT_801d586b == 'c';
  return;
}

void FUN_overlay0__8003c520
               (undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = (int)(short)(&DAT_801c85e0)[param_3];

  if (iVar3 < param_2) {
    (&DAT_801c85e0)[param_3] = (short)param_2;
    (&DAT_801c85e8)[param_3] = 1;
    (&DAT_801c85ec)[param_3] = 0;
    (&DAT_801c8580)[param_3 * 6] = param_4;
    (&DAT_801c85f0)[param_3 * 6] = (char)param_6;
  }
  else if (param_2 == iVar3) {
    iVar3 = (int)(char)(&DAT_801c85ec)[param_3];
    iVar2 = (int)(char)(&DAT_801c85e8)[param_3];

    if ((char)(&DAT_801c85e8)[param_3] != iVar3) {

      do {
        iVar1 = iVar2;
        if (iVar1 <= iVar3) break;
        iVar2 = iVar1 + -1;
      } while (param_4 < (uint)(&DAT_801c8580)[param_3 * 6 + iVar1 + -1]);

      iVar2 = (int)(char)(&DAT_801c85e8)[param_3];
      while (iVar3 = iVar1, iVar1 < iVar2) {
        (&DAT_801c8580)[param_3 * 6 + iVar2] = (&DAT_801c8580)[param_3 * 6 + iVar2 + -1];
        iVar2 = iVar2 + -1;
      }
    }

    (&DAT_801c8580)[param_3 * 6 + iVar3] = param_4;
    (&DAT_801c85f0)[iVar3 + param_3 * 6] = (char)param_6;
    (&DAT_801c85e8)[param_3] = (&DAT_801c85e8)[param_3] + '\x01';
  }
  else {

    FUN_overlay0__800156b0(param_6,iVar3 - param_2);
  }
  return;
}

undefined4 FUN_overlay0__8003c70c(int param_1,int param_2,undefined4 param_3)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_30;

  local_30 = 0;
  iVar8 = *(int *)(param_1 + 0x604);
  iVar6 = *(int *)&DAT_800b4a44;

  if (iVar8 < param_2) {
    if (iVar8 + iVar6 / 2 < param_2) {
      if ((*(byte *)(param_1 + 0x78d) & 2) == 0) {
        if ((*(short *)(param_1 + 0x608) == 0) && (DAT_overlay0__80046f68 == '\0')) {
          *(short *)(param_1 + 0x608) = *(short *)(param_1 + 0x608) + 1;
        }
        else {

          iVar6 = iVar6 - param_2;

          if (DAT_801d5864 == '\x01') {
            iVar3 = iVar6 * 0x32;
          }
          else {
            iVar3 = iVar6 * 100;
          }
          iVar3 = iVar3 / (iVar6 + iVar8);
          uVar1 = *(undefined *)(param_1 + 0x6b0);
          *(undefined *)(param_1 + 0x6b0) = 0;

          if (*(char *)(param_1 + 0x6fc) == '\0') {
            uVar7 = DAT_overlay0__80046f64 + iVar3;
            uVar9 = uVar7 / 3;
            iVar4 = FUN_overlay0__80012378();

            if ((iVar4 == 0) || (*(char *)(param_1 + 0x45e) != '\x02')) {
              iVar4 = uVar9 - *(int *)(param_1 + 0x780);
            }
            else {
              iVar4 = FUN_overlay0__800122c4();
              iVar4 = (uVar7 + *(int *)(iVar4 + 0xc0)) / 3 - *(int *)(param_1 + 0x780);
            }

            iVar5 = 100;
            if (DAT_801d5864 == '\x01') {
              iVar5 = 0x32;
            }
            iVar5 = iVar5 - iVar3;
            iVar3 = (int)*(short *)(param_1 + 0x608);
            *(short *)(param_1 + 0x608) = *(short *)(param_1 + 0x608) + 1;
            iVar6 = (iVar6 * 0x1000) / (iVar6 + iVar8);

            if (iVar3 == 0) {
              iVar8 = FUN_overlay0__80012378();
              if (iVar8 != 0) {
                FUN_overlay0__8001286c(param_1,0x405f7dfd,iVar6,iVar5,0,1);
              }
            }
            else {

              FUN_overlay0__8003c520(param_1,iVar3 + -1,uVar1,uVar9,iVar4,param_3);

              if (DAT_801d5866 == '\x03') {
                FUN_overlay0__8003d3c0
                          (param_1,param_3,iVar3,uVar9);
              }
              else {
                FUN_overlay0__8001555c
                          (param_3,iVar3,uVar9,iVar4,*(undefined2 *)(param_1 + 0x6f8),
                           *(undefined *)(param_1 + 0x6fa));
                iVar8 = FUN_overlay0__80012378();
                if (iVar8 != 0) {
                  FUN_overlay0__8001286c
                            (param_1,uVar7,iVar6,iVar5,*(undefined *)(param_1 + 0x6fa),1);
                }

                if (DAT_801d5866 != '\t') {
                  *(undefined *)(param_1 + 0x6fa) = 0;
                  *(undefined *)(param_1 + 0x6fb) = 0;
                  *(undefined2 *)(param_1 + 0x6f8) = *(undefined2 *)(param_1 + 0x6ae);
                }
              }
            }

            if (DAT_801d5866 != '\x03') {
              *(uint *)(param_1 + 0x780) = uVar9;
            }
          }
        }
      }
      else {
        *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) & 0xfd;
      }
    }
    else {
      local_30 = 1;
    }
  }
  else if (param_2 + iVar6 / 2 < iVar8) {
    local_30 = 1;
    *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) | 2;
  }
  else {
    if (*(char *)(param_1 + 0x6fc) == '\0') {
      iVar6 = 0;
      if (DAT_801d5866 == '\a') {
        iVar6 = 0x1900000;
      }
      else if (DAT_801d5866 == '\b') {
        iVar6 = 0x3e80000;
      }
      if ((((iVar6 != 0) && ((*(byte *)(param_1 + 0x78d) & 2) == 0)) && (param_2 < iVar6)) &&
         (iVar6 <= iVar8)) {
        if (DAT_801d5864 == '\x01') {
          iVar6 = (iVar6 - param_2) * 0x32;
        }
        else {
          iVar6 = (iVar6 - param_2) * 100;
        }
        uVar7 = (uint)(DAT_overlay0__80046f64 + iVar6 / (iVar8 - param_2)) / 3;
        FUN_overlay0__8001555c
                  (param_3,1,uVar7,uVar7 - *(int *)(param_1 + 0x780),
                   *(undefined2 *)(param_1 + 0x6f8),*(undefined *)(param_1 + 0x6fa));
      }
    }
    iVar6 = (&DAT_800b4a5c)[*(byte *)(param_1 + 0x6b0)];
    if ((((*(byte *)(param_1 + 0x78d) & 2) == 0) && (*(short *)(param_1 + 0x608) != 0)) &&
       ((param_2 < iVar6 && (iVar6 <= iVar8)))) {
      if (*(char *)(param_1 + 0x6fc) == '\0') {
        if (DAT_801d5864 == '\x01') {
          iVar6 = (iVar6 - param_2) * 0x32;
        }
        else {
          iVar6 = (iVar6 - param_2) * 100;
        }
        uVar9 = DAT_overlay0__80046f64 + iVar6 / (iVar8 - param_2);
        uVar7 = uVar9 / 3;
        iVar6 = FUN_overlay0__80012378();
        if ((iVar6 == 0) || (*(char *)(param_1 + 0x45e) != '\x02')) {
          iVar6 = uVar7 - *(int *)(param_1 + 0x780);
        }
        else {
          iVar6 = FUN_overlay0__800122c4();
          iVar6 = (uVar9 + *(int *)(iVar6 + 0xc0)) / 3 - *(int *)(param_1 + 0x780);
        }
        FUN_overlay0__8003c520
                  (param_1,*(short *)(param_1 + 0x608) + -1,*(undefined *)(param_1 + 0x6b0),uVar7,
                   iVar6,param_3);
        if (DAT_801d5866 == '\x03') {
          FUN_overlay0__8003d314
                    (param_1,param_3,(int)*(short *)(param_1 + 0x608),
                     *(undefined *)(param_1 + 0x6b0),iVar6);
        }
        else {
          bVar2 = false;
          iVar8 = FUN_80060e94(DAT_800af230);
          if ((*(ushort *)(iVar8 + 8) & 0x20) != 0) {
            bVar2 = (uint)*(byte *)(param_1 + 0x6b0) == DAT_800b4a58 - 1U;
          }
          if (bVar2) {
            FUN_overlay0__8001555c
                      (param_3,1,uVar7,iVar6,*(undefined2 *)(param_1 + 0x6f8),
                       *(undefined *)(param_1 + 0x6fa));
            *(undefined2 *)(param_1 + 0x608) = 2;
            FUN_overlay0__80036acc(param_1);
            iVar6 = FUN_overlay0__80012378();
            if (iVar6 != 0) {
              FUN_overlay0__8001286c(param_1,uVar9,0,0,*(undefined *)(param_1 + 0x6fa),0);
            }
            *(uint *)(param_1 + 0x780) = uVar7;
          }
          else {
            FUN_overlay0__80015510
                      (param_3,*(undefined *)(param_1 + 0x6b0),iVar6,*(undefined *)(param_1 + 0x6fa)
                      );
          }
        }
      }
      *(char *)(param_1 + 0x6b0) = *(char *)(param_1 + 0x6b0) + '\x01';
    }
  }
  iVar6 = FUN_overlay0__80012378();
  if (iVar6 != 0 && DAT_800a951c == '\0') {
    FUN_overlay0__8003fb70(param_1);
  }
  return local_30;
}

void FUN_overlay0__8003ce3c(int param_1,undefined4 param_2)

{
  undefined4 action_type;
  int speed_squared_x;
  int speed_squared_y;
  undefined4 old_position;
  int transformed_x;
  int transformed_z;
  int transformed_y;

  old_position = *(undefined4 *)(param_1 + 0x604);

  transformed_x = *(int *)(param_1 + 0x65c) << 4;
  transformed_z = *(int *)(param_1 + 0x664) << 4;
  transformed_y = *(int *)(param_1 + 0x660) << 4;

  action_type = FUN_overlay0__80028c6c(&DAT_800a9500,*(undefined4 *)(param_1 + 0x600),&transformed_x);
  *(undefined4 *)(param_1 + 0x604) = action_type;

  if (DAT_800a9520 != 0) {
    return;
  }

  speed_squared_x = FUN_overlay0__8003c70c(param_1,old_position,param_2);

  if (speed_squared_x == 1) {

    *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) | 1;

    speed_squared_x = FUN_80075bf4(*(undefined4 *)(param_1 + 0x6a4),*(undefined4 *)(param_1 + 0x6a4));
    speed_squared_y = FUN_80075bf4(*(undefined4 *)(param_1 + 0x6a8),*(undefined4 *)(param_1 + 0x6a8));

    if (speed_squared_x + speed_squared_y < 0x1ee1) {
      if (0xb1c < speed_squared_x + speed_squared_y) goto LAB_overlay0__8003cf6c;
      action_type = 0;
    }
    else if (((*(char *)(param_1 + 0x63d) != '\0') || (*(char *)(param_1 + 0x45d) == '\x02')) ||
            (action_type = 1, *(char *)(param_1 + 0x786) != '\0')) goto LAB_overlay0__8003cf6c;
  }
  else {
    action_type = 0;

    *(byte *)(param_1 + 0x78d) = *(byte *)(param_1 + 0x78d) & 0xfe;
  }

  FUN_overlay0__80030308(param_1,action_type,0);

LAB_overlay0__8003cf6c:

  FUN_overlay0__80036ca4(param_1,*(undefined4 *)(param_1 + 0x604),old_position);
  return;
}

void FUN_overlay0__8003cf94(int param_1,int param_2)

{
  bool continue_loop;
  char *vehicle_index_ptr;
  int current_index;
  int *vehicle_data_ptr;
  int data_offset;
  int loop_counter;
  int outer_loop_counter;
  char *target_index_ptr;
  int data_index;

  loop_counter = 0;
  continue_loop = 0 < param_2;

  while (vehicle_index_ptr = &DAT_801c8578 + loop_counter, continue_loop) {
    loop_counter = loop_counter + 1;

    FUN_overlay0__8003ce3c(param_1 + *vehicle_index_ptr * 0xb40 + 0x2c, 0);

    continue_loop = loop_counter < param_2;
  }

  target_index_ptr = &DAT_801c85ec;
  vehicle_index_ptr = &DAT_801c85e8;
  vehicle_data_ptr = &DAT_801c8580;

  loop_counter = 0;
  data_index = 0;

  for (outer_loop_counter = 0; outer_loop_counter < DAT_800b4a58 + 1; outer_loop_counter = outer_loop_counter + 1) {
    current_index = (int)*target_index_ptr;

    if (current_index != *vehicle_index_ptr) {
      data_offset = current_index * 4 + loop_counter;

      for (; current_index < *vehicle_index_ptr; current_index = current_index + 1) {
        if (current_index != 0) {

          FUN_overlay0__800155c4
                    ((int)(char)(&DAT_801c85f0)[current_index + data_index],
                     *(int *)((int)&DAT_801c8580 + data_offset) - *vehicle_data_ptr);
        }
        data_offset = data_offset + 4;
      }
      *target_index_ptr = *vehicle_index_ptr;
    }

    target_index_ptr = target_index_ptr + 1;
    vehicle_index_ptr = vehicle_index_ptr + 1;
    vehicle_data_ptr = vehicle_data_ptr + 6;
    loop_counter = loop_counter + 0x18;
    data_index = data_index + 6;
  }
  return;
}

bool FUN_overlay0__8003d138(void)

{

  return DAT_overlay0__80046f69 != '\0' && 21600000 < DAT_overlay0__80046f64;
}

void FUN_overlay0__8003d168(void)

{

  if ((DAT_800a9520 == 0) && (DAT_801d5866 != '\x06' || DAT_800a9cbc != 0)) {

    if (DAT_801d5864 == '\x01') {
      DAT_overlay0__80046f64 = DAT_overlay0__80046f64 + 0x32;
    }
    else {
      DAT_overlay0__80046f64 = DAT_overlay0__80046f64 + 100;
    }
  }
  return;
}

int FUN_overlay0__8003d1e4(int param_1)

{
  int iVar1;

  iVar1 = (int)*(short *)(param_1 + 0x608);

  if ((iVar1 < 1) || ((DAT_801d5866 == '\x03' && (*(byte *)((char *)&DAT_801c98a0 + 2) == '\x05')))) {
    iVar1 = 1;
  }
  return iVar1;
}

void FUN_overlay0__8003d22c(int param_1)

{
  *(undefined *)(param_1 + 0x751) = 0;
  *(undefined *)(param_1 + 0x756) = 0;
  *(undefined4 *)(param_1 + 0x75c) = 359999999;
  return;
}

void FUN_overlay0__8003d244(int param_1)

{
  *(undefined *)(param_1 + 0x751) = 2;

  FUN_overlay0__80036980(param_1,6);

  *(undefined *)(param_1 + 0x6fc) = 1;

  FUN_overlay0__800156ec
            (*(undefined *)(param_1 + 0x45c),*(byte *)((char *)&DAT_801c98a0 + 2),*(undefined *)(param_1 + 0x756),
             *(undefined4 *)(param_1 + 0x75c),*(undefined2 *)(param_1 + 0x6f8));
  return;
}

void FUN_overlay0__8003d2a0(int param_1)

{
  *(undefined *)(param_1 + 0x751) = 1;

  FUN_overlay0__80036980(param_1,5);

  *(undefined *)(param_1 + 0x6fc) = 1;

  FUN_overlay0__800156ec
            (*(undefined *)(param_1 + 0x45c),*(byte *)((char *)&DAT_801c98a0 + 2),*(undefined *)(param_1 + 0x756),
             *(undefined4 *)(param_1 + 0x75c),*(undefined2 *)(param_1 + 0x6f8));
  return;
}

void FUN_overlay0__8003d314
               (int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{

  if ((*(byte *)((char *)&DAT_801c98a0 + 2) == '\x03') && (param_4 == DAT_800b4a58 + -1)) {
    *(undefined *)(param_1 + 0x756) = 1;
    *(undefined4 *)(param_1 + 0x75c) = param_5;
    FUN_overlay0__8003d2a0(param_1);
  }
  else {

    FUN_overlay0__80015510
              (param_2,(param_3 + -1) * (DAT_800b4a58 + 1) + param_4,param_5,
               *(undefined *)(param_1 + 0x6fa));
  }
  return;
}

void FUN_overlay0__8003d3c0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{

  if ((*(byte *)((char *)&DAT_801c98a0 + 2) == '\x05') && (*(byte *)((char *)&DAT_801c98a0 + 1) == param_3)) {
    *(undefined *)(param_1 + 0x756) = 1;
    *(undefined4 *)(param_1 + 0x75c) = param_4;
    FUN_overlay0__8003d2a0(param_1);
  }
  else {
    FUN_overlay0__80015510
              (param_2,param_3 * (DAT_800b4a58 + 1) + -1,param_4,*(undefined *)(param_1 + 0x6fa));
  }
  return;
}

int FUN_overlay0__8003d458(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;

  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    if (1 < *(byte *)(param_1 + 0x474)) {
      iVar2 = iVar2 + 1;
    }
    param_1 = param_1 + 0x68;
  }
  return iVar2;
}

void FUN_overlay0__8003d498(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;

  iVar7 = 0x7fffffff;
  iVar5 = *(int *)&DAT_800b4a44;
  iVar6 = -0x7fffffff;

  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = iVar5 + 7;
  }

  iVar3 = param_1;

  for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {

    local_38 = (*(int *)(param_1 + 0x65c) + (int)*(short *)(iVar3 + 0x484)) * 0x10;
    local_34 = (*(int *)(param_1 + 0x664) + (int)*(short *)(iVar3 + 0x488)) * 0x10;
    local_30 = (*(int *)(param_1 + 0x660) + (int)*(short *)(iVar3 + 0x486)) * 0x10;

    iVar1 = FUN_overlay0__80028c6c(&DAT_800a9500,*(undefined4 *)(param_1 + 0x600),&local_38);

    if ((iVar2 >> 3) * 7 < iVar1) {
      iVar1 = iVar1 - iVar5;
    }

    if (iVar1 < iVar7) {
      iVar7 = iVar1;
    }

    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }

    iVar3 = iVar3 + 0x68;
  }

  *param_2 = iVar7;
  *param_3 = iVar6;
  return;
}

void FUN_overlay0__8003d5f8(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int local_14;

  if (*(char *)(param_1 + 0x751) == '\x02') {
    return;
  }
  if (*(char *)(param_1 + 0x751) == '\x01') {
    return;
  }

  uVar1 = 4;

  if (((*(byte *)(param_1 + 0x6fa) & 2) == 0) && (uVar1 = 5, (*(byte *)(param_1 + 0x6fa) & 1) == 0)) {
    if (*(byte *)((char *)&DAT_801c98a0 + 2) != '\x02') {
      return;
    }

    FUN_overlay0__8003d498(param_1,&local_18,&local_14);
    uVar1 = 3;

    if (local_14 <= (int)(((uint)DAT_801c98c4 * 10 + (uint)DAT_801c98c5) * 0x10000)) {
      if (local_18 < (int)((uint)DAT_801c98c4 * 0xa0000)) {
        return;
      }

      iVar2 = FUN_overlay0__8003c398
                        (*(undefined4 *)(param_1 + 0x628),*(undefined4 *)(param_1 + 0x62c),
                         *(undefined4 *)(param_1 + 0x630));

      if (0x471 < iVar2) {
        return;
      }

      iVar3 = FUN_overlay0__8003d458(param_1);
      uVar1 = 4;

      if (iVar3 == 0) {

        if (DAT_801d5864 == '\x01') {
          iVar2 = iVar2 * 0x32;
        }
        else {
          iVar2 = iVar2 * 100;
        }

        uVar4 = DAT_overlay0__80046f64 + iVar2 / 0x472;
        *(undefined *)(param_1 + 0x756) = 1;
        *(uint *)(param_1 + 0x75c) = uVar4 / 3 - *(int *)(param_1 + 0x780);
        FUN_overlay0__8003d2a0(param_1);
        return;
      }
    }
  }

  *(undefined *)(param_1 + 0x756) = uVar1;
  FUN_overlay0__8003d244(param_1);

  return;
}
