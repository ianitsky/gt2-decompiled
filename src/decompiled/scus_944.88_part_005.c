// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_005.h"
#include "scus_944.88_part_004.h"
#include "scus_944.88_part_006.h"
#include "scus_944.88_part_009.h"
#include <stdint.h>

void FUN_8006daf8(short *param_1,undefined4 param_2,int param_3)

{

  byte alphaValue;
  short textX;
  short textY;
  short adjustedX;
  uint alphaMask;
  int alphaIndex;
  undefined textBuffer[64];

  if (-1 < param_1[0xe]) {

    FUN_8008cf34(textBuffer,&DAT_8008faac,(int)param_1[2]);

    FUN_8007da80((undefined4 *)param_3, (undefined4 *)((intptr_t)param_1 + 8));
    *(undefined4 *)((intptr_t)param_3 + 0x10) = param_2;
    *(undefined4 *)((intptr_t)param_3 + 0x14) = *(undefined4 *)((intptr_t)param_1 + 6);

    FUN_8006b0ec(param_3,textBuffer,(int)*param_1,
                 (int)param_1[1] + ((int)((uint)(ushort)param_1[10] << 0x10) >> 0x11),
                 (int)param_1[0xb],(int)param_1[0xc],0);

    alphaValue = *(byte *)((intptr_t)param_3 + 8);
    textX = *param_1;
    textY = param_1[1];
    alphaIndex = 0x28 - param_1[0xe];

    if (10 < alphaIndex) {
      alphaIndex = 10;
    }
    if (alphaIndex < 0) {
      alphaIndex = 0;
    }
    alphaMask = (alphaIndex * 0xff) / 10;

    if (param_1[2] != param_1[4]) {

      alphaIndex = FUN_8007e0e0((int)param_2, alphaMask | ((int)alphaMask >> 1) << 8 | 0x2000000, 0);
      adjustedX = textX + (ushort)alphaValue * 2;
      *(short *)((intptr_t)alphaIndex + 4) = adjustedX;
      *(short *)((intptr_t)alphaIndex + 0xc) = adjustedX;
      *(short *)((intptr_t)alphaIndex + 6) = textY + -10;
      *(short *)((intptr_t)alphaIndex + 8) = adjustedX + 6;
      *(short *)((intptr_t)alphaIndex + 10) = textY;
      *(short *)((intptr_t)alphaIndex + 0xe) = textY + 10;
    }

    if (param_1[2] != param_1[3]) {

      alphaIndex = FUN_8007e0e0((int)param_2, alphaMask | ((int)alphaMask >> 1) << 8 | 0x2000000, 0);
      textX = textX + (ushort)alphaValue * -2;
      *(short *)((intptr_t)alphaIndex + 4) = textX;
      *(short *)((intptr_t)alphaIndex + 0xc) = textX;
      *(short *)((intptr_t)alphaIndex + 6) = textY + -10;
      *(short *)((intptr_t)alphaIndex + 8) = textX + -6;
      *(short *)((intptr_t)alphaIndex + 10) = textY;
      *(short *)((intptr_t)alphaIndex + 0xe) = textY + 10;
    }
  }

  return;
}

void FUN_8006dcb8(undefined2 *param_1,undefined2 *param_2)

{

  undefined2 animationHeight;
  byte animationType;
  undefined2 animationWidth;
  undefined4 animationData;
  undefined4 uVar4;

  *param_1 = *param_2;
  param_1[1] = param_2[1];

  animationType = *(byte *)((intptr_t)param_2 + 10) & 6;

  if (animationType == 2) {

    animationWidth = 0x60;
  }
  else {
    if (2 < animationType) {
      if (animationType == 4) {

        animationWidth = 0x60;
        animationHeight = 0x18;
      }
      else {

        animationWidth = 0x50;
        if (animationType == 6) {
          animationWidth = 0x80;
          animationHeight = 0x18;
        }
        else {
          animationHeight = 0xc;
        }
      }
      goto LAB_8006dd48;
    }

    animationWidth = 0x50;
  }
  animationHeight = 0xc;

LAB_8006dd48:
  param_1[0x17] = animationWidth;
  param_1[0x18] = animationHeight;

  DAT_80091eb8 = *(undefined4 *)((intptr_t)param_2 + 0xc);
  DAT_80091eb3 = *(undefined *)((intptr_t)param_2 + 0xb);
  DAT_80091ebc = *(undefined4 *)((intptr_t)param_2 + 4);

  FUN_8006c460((undefined4 *)((intptr_t)param_1 + 2),&LAB_80091ea6_2,*(undefined4 *)((intptr_t)param_2 + 2));

  *(undefined *)((intptr_t)param_1 + 7) = *(undefined *)((intptr_t)param_2 + 0x15);
  param_1[0x16] = (ushort)*(byte *)((intptr_t)param_2 + 10);
  *(undefined4 *)((intptr_t)param_1 + 0x1a) = *(undefined4 *)((intptr_t)param_2 + 6);
  uVar4 = *(undefined4 *)((intptr_t)param_2 + 8);
  param_1[0x19] = 0xffff;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  return;
}

void FUN_8006ddd0(int param_1)

{

  FUN_8006c4b0((byte *)((intptr_t)param_1 + 4),0xffffffff);

  *(undefined2 *)((intptr_t)param_1 + 0x32) = 0;

  *(ushort *)((intptr_t)param_1 + 0x2c) = *(ushort *)((intptr_t)param_1 + 0x2c) | 0x80;

  return;
}

void FUN_8006de1c(int param_1)

{

  *(undefined2 *)((intptr_t)param_1 + 0x32) = 0xfff3;

  FUN_8006c548((intptr_t)param_1 + 4);

  return;
}

undefined4 FUN_8006de44(int param_1,int param_2)

{

  short animationCounter;
  undefined4 animationState;

  animationState = 0xfffffffe;

  if (*(short *)((intptr_t)param_1 + 0x32) < 0) {

    if (*(short *)((intptr_t)param_1 + 0x32) < -1) {
      *(short *)((intptr_t)param_1 + 0x32) = *(short *)((intptr_t)param_1 + 0x32) + 1;
    }
    animationState = 0xfffffffe;
  }
  else {

    animationCounter = *(short *)((intptr_t)param_1 + 0x32) + 1;
    *(short *)((intptr_t)param_1 + 0x32) = animationCounter;

    if (0x47 < animationCounter) {

      *(undefined2 *)((intptr_t)param_1 + 0x32) = 0xc;
      *(ushort *)((intptr_t)param_1 + 0x2c) = *(ushort *)((intptr_t)param_1 + 0x2c) & 0xff7f;
    }

    if (param_2 != 0) {
      if ((*(uint *)((intptr_t)param_2 + 4) & 0xa00) != 0) {
        animationState = 0;
      }
      if ((*(uint *)((intptr_t)param_2 + 4) & 0x500) != 0) {
        animationState = 0xffffffff;
      }
    }

    FUN_8006c580((intptr_t)param_1 + 4);
  }

  return animationState;
}

void FUN_8006deec(short *param_1,int param_2,undefined4 param_3)

{

  short animationY;
  ushort animationFlags;
  ushort animationHeight;
  short *vertexPointer;
  undefined4 renderFlags;
  int animationIndex;
  uint alphaValue;
  short animationX;
  int centerX;
  int offsetY;

  short vertexX1;
  short vertexY1;
  short vertexX2;
  short vertexY2;
  short vertexX3;
  short vertexY3;
  short vertexX4;
  short vertexY4;
  uint colorValue1;
  uint colorValue2;
  uint colorValue3;
  uint colorValue4;

  alphaValue = 0x7f;
  offsetY = -2;
  animationFlags = param_1[0x16];
  centerX = (int)*param_1 - (uint)((ushort)param_1[0x17] >> 1);

  if ((animationFlags & 4) != 0) {
    offsetY = -4;
  }

  animationIndex = (int)param_1[0x19];

  if (animationIndex < 0) {
    if (-2 < animationIndex) {
      return;
    }

    centerX = (uint)(ushort)param_1[0x17] - (int)((uint)(ushort)param_1[0x17] * (animationIndex + 0xd)) / 0xc;
    colorValue1 = FUN_8006b548(param_1 + 0x1a,&DAT_80091ec4,animationIndex + 0xd,0xc);
    vertexX4 = (short)centerX;
    vertexX3 = *param_1 - (short)(centerX >> 1);
    vertexY3 = param_1[1];
    vertexY4 = param_1[0x18];
    colorValue2 = colorValue1;
    colorValue4 = colorValue1;
    FUN_8006b6e4(param_2,&vertexX3);
    renderFlags = 0x20;
  }
  else {

    if (animationIndex < 0xc) {
      alphaValue = (animationIndex * 0x7f) / 0xc;
    }
    animationY = param_1[1];
    animationHeight = param_1[0x18];
    animationX = (short)centerX;
    vertexY1 = param_1[1];
    colorValue4 = alphaValue | alphaValue << 8 | alphaValue << 0x10;
    vertexX2 = param_1[0x17];
    vertexY2 = param_1[0x18];
    vertexX1 = animationX;
    vertexX3 = animationX;
    vertexY3 = vertexY1;
    vertexX4 = vertexX2;
    vertexY4 = vertexY2;
    FUN_8007e780(param_2,colorValue4,&vertexX1);
    colorValue1 = *(uint *)(param_1 + 0x1c);
    colorValue2 = 0;
    FUN_8006b6e4(param_2 + 8,&vertexX3);
    FUN_8007da44(param_2,0x200, 0);
    *(char *)(param_1 + 0x12) = (char)alphaValue;

    FUN_8006c5dc(param_1 + 2,param_2,centerX + (uint)((ushort)param_1[0x17] >> 1),
                 (int)animationY + (uint)animationHeight + offsetY,param_3);
    param_2 = param_2 + 4;

    if ((param_1[0x19] < 0xc) || (animationIndex = (param_1[0x19] + -0xc) * -4 + 0x3c, animationIndex < 0)) {
      animationIndex = 0;
    }
    alphaValue = 0x80;
    if ((animationFlags & 0x80) != 0) {
      alphaValue = 0xff;
    }
    colorValue3 = alphaValue | alphaValue << 8 | alphaValue << 0x10;
    colorValue4 = FUN_8006b548(param_1 + 0x1a,&colorValue3,animationIndex,0x3c);
    animationIndex = 0xc - param_1[0x19];
    if (animationIndex < 0) {
      animationIndex = 0;
    }
    colorValue4 = FUN_8006b548(&colorValue4,&DAT_80091ec4,animationIndex,0xc);

    vertexPointer = (short *)FUN_8007d024(param_2, 0, 0);
    *vertexPointer = animationX;
    vertexPointer[1] = param_1[1];
    vertexPointer[2] = param_1[0x17];
    renderFlags = 0x220;
    vertexPointer[3] = param_1[0x18];
  }

  FUN_8007da44(param_2,renderFlags, 0);

  return;
}

void FUN_8006e1cc(undefined2 *param_1,undefined2 *param_2,int param_3)

{

  undefined animationParameter;
  undefined2 animationData1;
  undefined2 animationHeight;
  ushort animationType;
  undefined2 animationWidth;
  undefined4 animationData2;

  animationData1 = param_2[0x12];
  DAT_80091ed8 = *(undefined4 *)(param_2 + 0x14);

  *param_1 = *param_2;
  param_1[1] = param_2[1];

  animationType = param_2[0x10] & 6;

  if (animationType == 2) {

    animationWidth = 0x60;
  }
  else {
    if (2 < animationType) {
      if (animationType == 4) {

        animationWidth = 0x60;
        animationHeight = 0x18;
      }
      else {

        animationWidth = 0x50;
        if (animationType == 6) {
          animationWidth = 0x80;
          animationHeight = 0x18;
        }
        else {
          animationHeight = 0xc;
        }
      }
      goto LAB_8006e274;
    }

    animationWidth = 0x50;
  }
  animationHeight = 0xc;

LAB_8006e274:
  param_1[0x40] = animationHeight;
  param_1[0x3f] = animationWidth;

  DAT_80091ed3 = (undefined)animationData1;
  DAT_80091edc = *(undefined4 *)(param_2 + 8);
  DAT_80091ed4 = 200;

  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    DAT_80091ed4 = 0xe9;
  }

  FUN_8006c460(param_1 + 2,&LAB_80091ec8,*(undefined4 *)(param_2 + 2));
  DAT_80091edc = *(undefined4 *)(param_2 + 10);
  DAT_80091ed4 = 0xc0;
  if ((*(uint *)(param_2 + 10) & 0x2000000) != 0) {
    DAT_80091ed4 = 0xe1;
  }
  FUN_8006c460(param_1 + 0x16,&LAB_80091ec8,*(undefined4 *)(param_2 + 4));
  *(undefined *)(param_1 + 0x1b) = *(undefined *)(param_2 + 0x11);
  FUN_8006c460(param_1 + 0x2a,&LAB_80091ec8,*(undefined4 *)(param_2 + 6));
  *(undefined *)(param_1 + 0x2f) = *(undefined *)(param_2 + 0x11);

  animationParameter = *(undefined *)(param_2 + 0x16);
  *(bool *)((int)param_1 + 0x7d) = param_3 != 0;
  *(undefined *)(param_1 + 0x3e) = animationParameter;
  param_1[0x43] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0xc);
  animationData2 = *(undefined4 *)(param_2 + 0xe);
  param_1[0x41] = 0xffff;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x48) = animationData2;

  return;
}

void FUN_8006e388(int param_1)

{

  FUN_8006c4b0(param_1 + 4,0x3c);
  FUN_8006c4b0(param_1 + 0x2c,0xffffffff);
  FUN_8006c4b0(param_1 + 0x54,0xffffffff);

  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;

  *(ushort *)(param_1 + 0x86) = *(ushort *)(param_1 + 0x86) | 0x80;

  return;
}

void FUN_8006e3fc(int param_1)

{

  *(undefined2 *)(param_1 + 0x82) = 0xffef;

  FUN_8006c548(param_1 + 4);
  FUN_8006c548(param_1 + 0x2c);
  FUN_8006c548(param_1 + 0x54);

  return;
}

int FUN_8006e43c(int param_1,int param_2)

{

  ushort animationFlags;
  short animationCounter;
  uint stateFlags;
  int currentState;
  int newState;
  int resultState;

  resultState = -2;

  if (*(short *)(param_1 + 0x82) < 0) {

    if (*(short *)(param_1 + 0x82) < -1) {
      *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x82) + 1;
    }
    FUN_8006c580(param_1 + 4);
    return -2;
  }

  animationCounter = *(short *)(param_1 + 0x82) + 1;
  *(short *)(param_1 + 0x82) = animationCounter;

  if (0x47 < animationCounter) {

    *(undefined2 *)(param_1 + 0x82) = 0xc;
    *(ushort *)(param_1 + 0x86) = *(ushort *)(param_1 + 0x86) & 0xff7f;
  }

  if (0 < *(short *)(param_1 + 0x84)) {
    *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) + -1;
  }

  if (param_2 != 0) {
    stateFlags = *(uint *)(param_2 + 4);
    currentState = (int)*(char *)(param_1 + 0x7d);

    if ((stateFlags & 0x500) == 0) {
      if ((stateFlags & 0xa00) == 0) {

        newState = currentState;
        if ((stateFlags & 4) != 0) {
          newState = 0;
        }
        if ((stateFlags & 8) != 0) {
          newState = 1;
        }

        if (newState != currentState) {
          resultState = -3;
          if (0xb < *(short *)(param_1 + 0x82)) {
            *(undefined2 *)(param_1 + 0x82) = 0xc;
          }
          *(undefined2 *)(param_1 + 0x84) = 6;
          *(ushort *)(param_1 + 0x86) = *(ushort *)(param_1 + 0x86) | 0x80;
          if (-1 < *(char *)(param_1 + 0x7c)) {
            FUN_80060840();
          }
        }
        *(bool *)(param_1 + 0x7d) = newState != 0;
        goto LAB_8006e584;
      }
      animationFlags = *(ushort *)(param_1 + 0x86);
      resultState = currentState;
    }
    else {
      animationFlags = *(ushort *)(param_1 + 0x86);
      resultState = -1;
    }

    if ((animationFlags & 8) != 0) {
      FUN_8006e3fc(param_1);
    }
  }

LAB_8006e584:
  FUN_8006c580(param_1 + 4);
  FUN_8006c580(param_1 + 0x2c);
  FUN_8006c580(param_1 + 0x54);

  return resultState;
}

void FUN_8006e5b8(short *param_1,int param_2,undefined4 param_3)

{

  ushort animationFlags;
  ushort animationWidth;
  ushort animationHeight;
  short *vertexPointer;
  int animationIndex;
  int widthCalculation;
  uint alphaValue;
  short animationX1;
  short animationX2;
  short animationX3;

  short vertexX1;
  short vertexY1;
  short vertexX2;
  short vertexY2;
  short vertexX3;
  short vertexY3;
  short vertexX4;
  short vertexY4;
  uint colorValue1;
  uint colorValue2;
  uint colorValue3;
  uint colorValue4;
  int offsetY1;
  int offsetY2;
  int bufferOffset;

  alphaValue = 0x7f;
  widthCalculation = 0;
  offsetY1 = -2;
  offsetY2 = -2;
  animationFlags = param_1[0x43];
  bufferOffset = param_2 + 8;

  if ((animationFlags & 4) != 0) {
    offsetY1 = -4;
    offsetY2 = -4;
  }

  animationIndex = (int)param_1[0x41];

  if (animationIndex < 0) {
    if (animationIndex < -1) {

      animationX1 = *param_1 + ((ushort)param_1[0x3f] >> 1);
      if (*(char *)((int)param_1 + 0x7d) == '\0') {
        animationX1 = animationX1 - param_1[0x3f];
      }
      widthCalculation = (uint)(ushort)param_1[0x3f] * (animationIndex + 0x11);
      if (widthCalculation < 0) {
        widthCalculation = widthCalculation + 0xf;
      }
      widthCalculation = (uint)(ushort)param_1[0x3f] - (widthCalculation >> 4);
      colorValue1 = FUN_8006b548(param_1 + 0x46,&DAT_80091ee4,animationIndex + 0x11,0x10);
      vertexX3 = animationX1 - (short)(widthCalculation >> 1);
      vertexX4 = (short)widthCalculation;
      vertexY3 = param_1[1];
      vertexY4 = param_1[0x40];
      colorValue2 = colorValue1;
      colorValue4 = colorValue1;
      FUN_8006b6e4(param_2,&vertexX3);
      FUN_8007da44(param_2,0x20, 0);
      FUN_8006c5dc(param_1 + 2,param_2,(int)*param_1,param_1[1] + offsetY1,param_3);
    }
  }
  else {

    if (animationIndex < 0xc) {
      alphaValue = (animationIndex * 0x7f) / 0xc;
      widthCalculation = (int)((uint)(ushort)param_1[0x3f] * 2 * (0xc - animationIndex)) / 0xc;
    }
    if ((animationFlags & 1) != 0) {
      widthCalculation = -widthCalculation;
    }
    colorValue4 = alphaValue | alphaValue << 8 | alphaValue << 0x10;
    animationWidth = param_1[0x3f];
    animationX1 = param_1[1];
    animationHeight = param_1[0x40];
    widthCalculation = *param_1 + widthCalculation;
    vertexX2 = param_1[0x3f];
    vertexY2 = param_1[0x40];
    animationX2 = (short)(widthCalculation - (uint)animationWidth);
    vertexX1 = animationX2;
    vertexY1 = animationX1;
    vertexY3 = animationX1;
    vertexX4 = vertexX2;
    vertexY4 = vertexY2;
    FUN_8007e780(param_2,colorValue4,&vertexX1);
    animationX3 = (short)widthCalculation;
    vertexX1 = animationX3;
    FUN_8007e780(param_2,colorValue4,&vertexX1);
    colorValue1 = *(uint *)(param_1 + 0x48);
    colorValue2 = 0;
    vertexX3 = animationX2;
    FUN_8006b6e4(bufferOffset,&vertexX3);
    vertexX3 = animationX3;
    FUN_8006b6e4(bufferOffset,&vertexX3);
    FUN_8007da44(param_2,0x200, 0);
    FUN_8006c5dc(param_1 + 2,param_2,(int)*param_1,animationX1 + offsetY1,param_3);
    *(char *)(param_1 + 0x26) = (char)alphaValue;
    animationIndex = (int)animationX1 + (uint)animationHeight + offsetY2;
    FUN_8006c5dc(param_1 + 0x16,param_2,(widthCalculation - (uint)animationWidth) + (uint)((ushort)param_1[0x3f] >> 1),
                 animationIndex,param_3);
    *(char *)(param_1 + 0x3a) = (char)alphaValue;
    FUN_8006c5dc(param_1 + 0x2a,param_2,widthCalculation + (uint)((ushort)param_1[0x3f] >> 1),animationIndex,param_3);
    param_2 = param_2 + 4;

    if ((param_1[0x41] < 0xc) || (widthCalculation = (param_1[0x41] + -0xc) * -4 + 0x3c, widthCalculation < 0)) {
      widthCalculation = 0;
    }
    alphaValue = 0x80;
    if ((animationFlags & 0x80) != 0) {
      alphaValue = 0xff;
    }
    colorValue3 = alphaValue | alphaValue << 8 | alphaValue << 0x10;
    colorValue4 = FUN_8006b548(param_1 + 0x46,&colorValue3,widthCalculation,0x3c);
    widthCalculation = 0xc - param_1[0x41];
    if (widthCalculation < 0) {
      widthCalculation = 0;
    }
    colorValue4 = FUN_8006b548(&colorValue4,&DAT_80091ee4,widthCalculation,0xc);

    vertexPointer = (short *)FUN_8007d024(param_2, 0, 0);
    *vertexPointer = animationX2;
    if (*(char *)((int)param_1 + 0x7d) != '\0') {
      *vertexPointer = animationX3;
    }
    vertexPointer[1] = animationX1;
    vertexPointer[2] = param_1[0x3f];
    vertexPointer[3] = param_1[0x40];

    if (0 < param_1[0x42]) {
      vertexX4 = (short)((int)((uint)(ushort)param_1[0x3f] * (int)param_1[0x42]) / 6);
      vertexY4 = param_1[0x40];
      colorValue1 = colorValue4;
      colorValue2 = 0;
      vertexX3 = animationX3;
      if (*(char *)((int)param_1 + 0x7d) != '\0') {
        colorValue1 = 0;
        colorValue2 = colorValue4;
        vertexX3 = animationX3 - vertexX4;
      }
      vertexY3 = animationX1;
      FUN_8006b6e4(param_2,&vertexX3);
    }
    FUN_8007da44(param_2,0x220, 0);
  }

  return;
}

void FUN_8006eb54(undefined2 *param_1)

{

  *param_1 = 2;
  param_1[1] = 2;

  return;
}

void FUN_8006eb64(undefined2 *param_1)

{

  undefined2 mappedValue;
  int lookupIndex;
  int loopCounter;

  lookupIndex = 0x44;
  for (loopCounter = 0; loopCounter < 2; loopCounter = loopCounter + 1) {

    mappedValue = *param_1;

    switch((&UNK_801f093d)[lookupIndex]) {
    case 0:

      mappedValue = 0;
      break;
    case 2:

      mappedValue = 1;
      break;
    case 3:

      mappedValue = 3;
      break;
    case 4:

      mappedValue = 2;
      break;
    case 5:

      mappedValue = 4;
    }

    *param_1 = mappedValue;
    param_1 = param_1 + 1;
    lookupIndex = lookupIndex + 0x264;
  }

  return;
}

void FUN_8006ebf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,short param_7)

{

  FUN_8007f0a4(param_1,param_1 + 0x1824,param_1 + 0x24,0);

  FUN_8007f0b4(param_1,param_2,param_3,param_4,param_5);

  *(short *)(param_1 + 0xe) = (short)(param_6 >> 4) + param_7 * 0x40;

  FUN_8007f174(param_1);

  *(undefined **)(param_1 + 0x9824) = &LAB_8007f2fc;

  return;
}

void FUN_8006ecac(undefined4 param_1)

{

  FUN_8007f0ec();

  FUN_8007f148(param_1);

  return;
}

void FUN_8006ecd8(int param_1,char *param_2)

{

  char *nextCharPointer;
  char currentChar;
  undefined4 processedChar;

  currentChar = *param_2;

  while (currentChar != '\0') {

    currentChar = *param_2;
    nextCharPointer = param_2 + 1;
    param_2 = param_2 + 2;

    processedChar = FUN_8007f18c(param_1,CONCAT11(currentChar,*nextCharPointer));

    (*(code_varargs *)(*(code **)(param_1 + 0x9824)))((int)param_1,processedChar,0);

    currentChar = *param_2;
  }

  return;
}

void FUN_8006ed60(void)

{

  undefined4 systemTextPointer;

  systemTextPointer = *(undefined4 *)(DAT_801c94ac + 8);

  if (DAT_801c98e0 == '\0') {

    FUN_8007f174(systemTextPointer);

    FUN_8006ecd8(systemTextPointer,&DAT_801efb39);

    FUN_8006ecd8(systemTextPointer,&DAT_801efb4a);
  }

  return;
}

void FUN_8006edc8(undefined4 param_1)

{

  if (DAT_801c98e0 == '\0') {

    FUN_8006ecd8(*(undefined4 *)(DAT_801c94ac + 8),param_1);
  }

  return;
}

void FUN_8006ee08(undefined4 param_1,char *param_2,int param_3,short param_4,int param_5,
                 uint param_6)

{

  char currentChar;
  short positionX;
  char *textPointer;
  int characterData;
  undefined4 systemPointer;

  systemPointer = *(undefined4 *)(DAT_801c94ac + 8);
  characterData = 0;

  if (DAT_801c98e0 == '\0') {

    if (param_5 != 0) {
      currentChar = *param_2;
      textPointer = param_2;
      while (currentChar != '\0') {
        textPointer = textPointer + 2;
        characterData = characterData + 0xc;
        currentChar = *textPointer;
      }
      param_3 = param_3 - (characterData >> 1);
    }

    for (; *param_2 != '\0'; param_2 = param_2 + 2) {

      characterData = FUN_8007f18c(systemPointer,CONCAT11(*param_2,param_2[1]));
      if (characterData != 0) {

        characterData = FUN_8007f01c(characterData,param_1,param_6 | 0x2000000);
        positionX = (short)param_3;

        *(short *)(characterData + 4) = positionX;
        *(short *)(characterData + 6) = param_4;
        *(short *)(characterData + 0xc) = positionX + 0xf;
        *(short *)(characterData + 0xe) = param_4;
        *(short *)(characterData + 0x14) = positionX;
        *(short *)(characterData + 0x16) = param_4 + 0x1f;
        *(short *)(characterData + 0x1c) = positionX + 0xf;
        *(short *)(characterData + 0x1e) = param_4 + 0x1f;

        *(ushort *)(characterData + 0x12) = *(ushort *)(characterData + 0x12) & 0xff9f | 0x20;
      }
      param_3 = param_3 + 0xc;
    }

    FUN_8007da44(param_1,0x220, 0);
  }

  return;
}

void FUN_8006ef50(void)

{

  int systemDataPointer;

  systemDataPointer = DAT_801c94ac;

  if (DAT_801c98e0 == '\0') {

    FUN_8006ed60();

    FUN_8006edc8(*(undefined4 *)(systemDataPointer + 0x28));

    FUN_8006edc8(*(undefined4 *)(systemDataPointer + 0x2c));
  }

  return;
}

void FUN_8006efa0(void)

{

  int systemDataPointer;

  systemDataPointer = DAT_801c94ac;

  if (DAT_801c98e0 == '\0') {

    FUN_8006ed60();

    FUN_8006edc8(*(undefined4 *)(systemDataPointer + 0x24));
  }

  return;
}

void FUN_8006efe4(void)

{

  if (DAT_801c98e0 == '\0') {

    FUN_8006ed60();

    FUN_8006edc8(&DAT_801efaba);
    FUN_8006edc8(&DAT_801efad1);
    FUN_8006edc8(&DAT_801efaea);
    FUN_8006edc8(&DAT_801efb00);
    FUN_8006edc8(&DAT_801efb15);
    FUN_8006edc8(&DAT_801efd61);
    FUN_8006edc8(&DAT_801efd50);
    FUN_8006edc8(&DAT_801efdb7);
    FUN_8006edc8(&DAT_801efdc4);
  }

  return;
}

undefined4 FUN_8007248c(void)

{

  return 0xffffffff;
}

/* FUN_80072494: Sets module callback and invokes it.
   Fixed: use proper function pointer types instead of code* to avoid double-indirection. */
void FUN_80072494(int param_1)
{
  int systemDataPointer;
  void (*callbackFunction)(int, int, int);

  systemDataPointer = DAT_801c94ac;

  if (param_1 < 0) {
    callbackFunction = (void (*)(int, int, int))(void *)FUN_8007248c;
  }
  else {
    callbackFunction = (void (*)(int, int, int))(void *)(&PTR_LAB_800921d4)[param_1];
  }

  *(void (**)(int, int, int))(DAT_801c94ac + 4) = callbackFunction;
  *(short *)(systemDataPointer + 2) = (short)param_1;

  if (callbackFunction != NULL) {
    callbackFunction(0, 0, 0);
  }

  return;
}

void FUN_800724f8(void)

{

  int systemDataPointer;
  undefined globalData1;
  undefined4 globalData2;

  systemDataPointer = DAT_801c94ac;

  globalData2 = FUN_80069948(DAT_801c94ac + 0x26a4);
  *(undefined4 *)(systemDataPointer + 0xa6a4) = globalData2;

  FUN_80069028(systemDataPointer + 0x1ec4,"No Name");
  *(undefined *)(systemDataPointer + 0x1f04) = DAT_801d5865;
  globalData1 = DAT_801d5866;
  *(undefined *)(systemDataPointer + 0x1f06) = 0;
  *(undefined *)(systemDataPointer + 0x1f05) = globalData1;
  *(undefined4 *)(systemDataPointer + 0x1f08) = DAT_801d589c;
  *(undefined4 *)(systemDataPointer + 0x1f0c) = DAT_801d58b8;

  FUN_800690b8(systemDataPointer + 0x1ec4,&DAT_801d5948);

  return;
}

void FUN_80072598(void)

{

  int systemDataPointer;
  undefined globalData1;
  undefined4 globalData2;

  systemDataPointer = DAT_801c94ac;

  globalData2 = FUN_80069cc0(DAT_801c94ac + 0x26a4);
  *(undefined4 *)(systemDataPointer + 0xa6a4) = globalData2;

  FUN_80069028(systemDataPointer + 0x1ec4,"No Name");
  *(undefined *)(systemDataPointer + 0x1f04) = DAT_801d5865;
  globalData1 = DAT_801d5866;
  *(undefined *)(systemDataPointer + 0x1f06) = 1;
  *(undefined *)(systemDataPointer + 0x1f05) = globalData1;
  *(undefined4 *)(systemDataPointer + 0x1f08) = DAT_801d589c;
  *(undefined4 *)(systemDataPointer + 0x1f0c) = DAT_801d58b8;

  FUN_800690b8(systemDataPointer + 0x1ec4,&DAT_801d5948);

  return;
}

void FUN_8007263c(void)

{

  int systemDataPointer;
  undefined4 *sourcePointer;
  undefined4 *destPointer;
  undefined4 *currentSource;
  undefined4 *currentDest;
  int animationDataPointer;
  undefined4 dataValue1;
  undefined4 dataValue2;
  undefined4 dataValue3;

  systemDataPointer = DAT_801c94ac;
  animationDataPointer = DAT_801c94ac + 0x50;

  *(undefined4 *)(DAT_801c94ac + 0x34) = 0x10009c;
  *(undefined4 *)(systemDataPointer + 0x38) = 0xe;
  *(undefined4 *)(systemDataPointer + 0x3c) = 0x2783618;
  *(undefined4 *)(systemDataPointer + 0x40) = 0x2000000;
  *(undefined4 *)(systemDataPointer + 0x44) = 0x2dedede;
  *(undefined4 *)(systemDataPointer + 0x48) = 0x2000000;
  *(undefined4 *)(systemDataPointer + 0x4c) = 0;
  *(undefined2 *)(systemDataPointer + 0x4c) = 0xffff;

  FUN_8006e1cc(animationDataPointer,&LAB_80091f04,0);
  FUN_8006e1cc(systemDataPointer + 0xe8,&LAB_80091f34,0);
  FUN_8006e1cc(systemDataPointer + 0x180,&LAB_80091f64,0);
  FUN_8006e1cc(systemDataPointer + 0x218,&LAB_80091f94,0);
  FUN_8006d9c8(&LAB_80091fc4);
  FUN_8006cdcc(&DAT_80091fe4,&LAB_8006f060,0);
  FUN_8006e1cc(systemDataPointer + 0x2b0,&LAB_80092018,0);
  FUN_8006e1cc(systemDataPointer + 0x348,&LAB_80092048,0);
  FUN_8006e1cc(systemDataPointer + 0x3e0,&LAB_80092078,0);

  sourcePointer = &DAT_80092168;
  destPointer = (undefined4 *)(systemDataPointer + 0x858);
  do {
    currentDest = destPointer;
    currentSource = sourcePointer;
    dataValue1 = currentSource[1];
    dataValue2 = currentSource[2];
    dataValue3 = currentSource[3];
    *currentDest = *currentSource;
    currentDest[1] = dataValue1;
    currentDest[2] = dataValue2;
    currentDest[3] = dataValue3;
    sourcePointer = currentSource + 4;
    destPointer = currentDest + 4;
  } while (currentSource + 4 != (undefined4 *)0x80092198);

  dataValue1 = currentSource[5];
  currentDest[4] = 0;
  currentDest[5] = dataValue1;

  FUN_8006e1cc(systemDataPointer + 0x478,&LAB_800920a8,0);
  FUN_8006e1cc(systemDataPointer + 0x510,&LAB_800920d8,0);
  FUN_8006e1cc(systemDataPointer + 0x5a8,&LAB_80092108,0);
  FUN_8006e1cc(systemDataPointer + 0x640,&LAB_80092138,0);

  DAT_800921a8 = *(undefined2 *)(systemDataPointer + 0x30);
  FUN_80073548((undefined4 *)(systemDataPointer + 0x6d8), (undefined4 *)(systemDataPointer + 0x6d8));
  *(int *)(systemDataPointer + 0x6fc) = systemDataPointer + 0x752;
  *(undefined2 *)(systemDataPointer + 0x6f6) = 0x1f;
  *(undefined2 *)(systemDataPointer + 0x6f8) = 0x100;
  *(undefined *)(systemDataPointer + 0x752) = 0;
  *(undefined **)(systemDataPointer + 0x28) = &LAB_8008fac8;
  *(undefined **)(systemDataPointer + 0x2c) = &LAB_8008fac8;
  FUN_8006ef50();

  return;
}

int FUN_8007284c(int *param_1)

{

  int systemDataPointer;
  undefined4 *dataArrayPointer;

  DAT_801c94ac = *param_1;

  dataArrayPointer = (undefined4 *)param_1[3];
  DAT_801c94d4 = *dataArrayPointer;
  DAT_801c94d8 = dataArrayPointer[1];
  DAT_801c94dc = dataArrayPointer[2];

  dataArrayPointer = (undefined4 *)param_1[4];
  DAT_801c94b4 = *dataArrayPointer;
  DAT_801c94b8 = dataArrayPointer[1];
  DAT_801c94bc = dataArrayPointer[2];

  dataArrayPointer = (undefined4 *)param_1[5];
  DAT_801c94c4 = *dataArrayPointer;
  DAT_801c94c8 = dataArrayPointer[1];
  DAT_801c94cc = dataArrayPointer[2];

  *(int *)(DAT_801c94ac + 8) = param_1[1];
  *(int *)(DAT_801c94ac + 0xc) = param_1[2];
  systemDataPointer = DAT_801c94ac + 0xa6ac;
  *(undefined2 *)(DAT_801c94ac + 0x30) = *(undefined2 *)(param_1 + 6);

  return systemDataPointer;
}

undefined4 FUN_800728f0(uint *param_1)

{

  undefined2 *systemDataPointer;
  undefined2 animationResult;
  int callbackResult;
  uint parameterValue;

  systemDataPointer = DAT_801c94ac;

  *(undefined4 *)(DAT_801c94ac + 0xe) = 0;
  *(undefined4 *)(systemDataPointer + 10) = 0;
  *(undefined4 *)(systemDataPointer + 0xc) = 0;
  *(undefined *)(systemDataPointer + 0x10) = 0;

  if (param_1 != (uint *)0x0) {
    parameterValue = *param_1;
    *(uint *)(systemDataPointer + 0xc) = parameterValue;
    *(uint *)(systemDataPointer + 10) = param_1[1];
    *(uint *)(systemDataPointer + 0xe) = param_1[3];

    switch(*systemDataPointer) {
    case 0:
    case 2:
      *(bool *)(systemDataPointer + 0x10) = (parameterValue & 0x1010) == 0x1010;
    }
  }

  FUN_8006be64(systemDataPointer + 0x1a);

  animationResult = FUN_8006e43c(systemDataPointer + 0x28,param_1);
  systemDataPointer[0x72] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x74,param_1);
  systemDataPointer[0xbe] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0xc0,param_1);
  systemDataPointer[0x10a] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x10c,param_1);
  systemDataPointer[0x156] = animationResult;
  animationResult = FUN_8006d9dc(&LAB_80091fc4,param_1);
  systemDataPointer[0x429] = animationResult;
  animationResult = FUN_8006cfc4(&DAT_80091fe4,param_1);
  systemDataPointer[0x42a] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x158,param_1);
  systemDataPointer[0x1a2] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x1a4,param_1);
  systemDataPointer[0x1ee] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x1f0,param_1);
  systemDataPointer[0x23a] = animationResult;
  animationResult = FUN_80073720(systemDataPointer + 0x36c,param_1);
  systemDataPointer[0x3a8] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x23c,param_1);
  systemDataPointer[0x286] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x288,param_1);
  systemDataPointer[0x2d2] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 0x2d4,param_1);
  systemDataPointer[0x31e] = animationResult;
  animationResult = FUN_8006e43c(systemDataPointer + 800,param_1);
  systemDataPointer[0x36a] = animationResult;

  callbackResult = ((int (*)(int, int))(**(code **)(systemDataPointer + 2)))(1,0);

  do {
    if (callbackResult == 0x27) {

      if (-1 < (short)systemDataPointer[0x26]) {
        systemDataPointer[0x26] = ~systemDataPointer[0x1c];
      }
      *(undefined **)(systemDataPointer + 0x14) = &LAB_8008fac8;
      *(undefined **)(systemDataPointer + 0x16) = &LAB_8008fac8;
      FUN_8006ef50();
      FUN_80072494(0xffffffff);
      return 1;
    }
    if (callbackResult < 0x28) {
      if (callbackResult == -1) {
        return 0;
      }
    }
    else if (callbackResult == 0x28) {

      if (-1 < (short)systemDataPointer[0x26]) {
        systemDataPointer[0x26] = ~systemDataPointer[0x1c];
      }
      *(undefined **)(systemDataPointer + 0x14) = &LAB_8008fac8;
      *(undefined **)(systemDataPointer + 0x16) = &LAB_8008fac8;
      FUN_8006ef50();
      FUN_80072494(0xffffffff);
      return 2;
    }
    callbackResult = FUN_8007248c();
  } while( true );
}

void FUN_80072b78(undefined4 param_1)

{

  int systemDataPointer;
  uint renderingValue;
  undefined renderingBuffer[12];
  uint colorValue;
  undefined4 renderingParam1;
  undefined4 renderingParam2;
  undefined renderingFlag;
  undefined4 renderingParam3;
  undefined4 renderingParam4;

  systemDataPointer = DAT_801c94ac;

  renderingParam3 = 0x2000000;
  renderingParam4 = 0x242362a;
  FUN_8006ac68(renderingBuffer,(int)*(short *)(DAT_801c94ac + 0x30));
  FUN_8007da80(renderingBuffer,&DAT_801c94c4);
  renderingFlag = 1;
  renderingParam2 = 0x25c5248;
  colorValue = colorValue & 0xff9fffff | 0x200000;
  renderingParam1 = param_1;

  if (DAT_801c98e0 == '\0') {

    FUN_8006ee08(param_1,*(undefined4 *)(systemDataPointer + 0x28),0xb0,0xc6,1,0x808080);
    FUN_8006ee08(param_1,*(undefined4 *)(systemDataPointer + 0x2c),0xb0,0xea,1,0x808080);
  }
  else {

    FUN_8006adb4(renderingBuffer,*(undefined4 *)(systemDataPointer + 0x28),0xb0,0xd6,1);
    FUN_8006adb4(renderingBuffer,*(undefined4 *)(systemDataPointer + 0x2c),0xb0,0xfa,1);
  }

  renderingValue = FUN_8006beb4(systemDataPointer + 0x34);
  if (renderingValue != 0) {
    if (DAT_801c98e0 == '\0') {

      FUN_8006ee08(param_1,(&PTR_LAB_800921d4)[*(short *)(systemDataPointer + 0x10)],0x1c,0x66,0,
                   renderingValue | renderingValue << 8 | renderingValue << 0x10);
    }
    else {

      renderingParam2 = FUN_8006b548(&renderingParam3,&renderingParam4,renderingValue,0x80);
      FUN_8006ac90(renderingBuffer,(&PTR_LAB_800921d4)[*(short *)(systemDataPointer + 0x10)],0x1c,0x7e,1);
    }
    FUN_8006bef4(systemDataPointer + 0x34,param_1,0x18,0x6e);
    FUN_8007da44(param_1,0x220, 0);
  }

  FUN_8006e5b8(systemDataPointer + 0x50,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0xe8,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x180,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x218,param_1,renderingBuffer);
  FUN_8006daf8(&LAB_80091fc4,param_1,renderingBuffer);
  FUN_8007da44(param_1,0x20, 0);
  FUN_8006d50c(&DAT_80091fe4,param_1);
  FUN_8006e5b8(systemDataPointer + 0x2b0,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x348,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x3e0,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x478,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x510,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x5a8,param_1,renderingBuffer);
  FUN_8006e5b8(systemDataPointer + 0x640,param_1,renderingBuffer);

  FUN_80073afc(systemDataPointer + 0x6d8,param_1);
  ((void (*)(int, undefined4))(**(code **)(systemDataPointer + 4)))(2,param_1);

  return;
}

void FUN_80072e7c(void)

{

  *DAT_801c94ac = 0;

  FUN_800724f8();

  FUN_8007263c();

  FUN_80072494(0);

  return;
}

void FUN_80072eb4(void)

{

  *DAT_801c94ac = 0;

  FUN_80072598();

  FUN_8007263c();

  FUN_80072494(0);

  return;
}

void FUN_80072eec(void)

{

  *DAT_801c94ac = 1;

  FUN_8007263c();

  FUN_80072494(0);

  return;
}

void FUN_80072f20(void)

{

  *DAT_801c94ac = 2;

  FUN_8007263c();

  FUN_80072494(0);

  return;
}

void FUN_80072f54(void)

{

  *DAT_801c94ac = 3;

  FUN_8007263c();

  FUN_80072494(0);

  DAT_801c94e0 = 0;

  return;
}

bool FUN_80072f8c(void)

{

  return DAT_801c94e0 != '\0';
}

void FUN_80072f9c(int param_1)

{

  undefined2 *systemDataPointer;

  systemDataPointer = DAT_801c94ac;

  *(undefined2 **)(DAT_801c94ac + 0x5354) = DAT_801c94ac + 0x1352;

  if (param_1 != 0) {
    *(int *)(systemDataPointer + 0x5354) = param_1;
  }

  FUN_8006a038(*(undefined4 *)(systemDataPointer + 0x5354));
  FUN_8006a214(*(undefined4 *)(systemDataPointer + 0x5354),*(undefined4 *)(systemDataPointer + 0x5354),0x8000);

  *systemDataPointer = 4;

  FUN_8007263c();

  FUN_80072494(0);

  return;
}

void FUN_80073010(int param_1)

{

  undefined2 *systemDataPointer;

  systemDataPointer = DAT_801c94ac;

  *(undefined2 **)(DAT_801c94ac + 0x5354) = DAT_801c94ac + 0x1352;

  if (param_1 != 0) {
    *(int *)(systemDataPointer + 0x5354) = param_1;
  }

  FUN_8006a038(*(undefined4 *)(systemDataPointer + 0x5354));

  *systemDataPointer = 5;

  FUN_8007263c();

  FUN_80072494(0);

  return;
}

void FUN_80073524(int param_1,int param_2)

{

  char *currentCharPointer;
  char *targetCharPointer;

  targetCharPointer = (char *)(param_1 + param_2);

  do {
    currentCharPointer = targetCharPointer + 1;
    *targetCharPointer = *currentCharPointer;
    targetCharPointer = targetCharPointer + 1;
  } while (*currentCharPointer != '\0');

  return;
}

void FUN_80073548(undefined4 *param_1,undefined4 *param_2)

{

  undefined4 *sourceDataPointer;
  undefined4 *destDataPointer;
  undefined4 dataValue1;
  undefined4 dataValue2;
  undefined4 dataValue3;

  destDataPointer = param_1 + 0x11;
  sourceDataPointer = &DAT_80092354;

  dataValue1 = param_2[1];
  dataValue2 = param_2[2];
  dataValue3 = param_2[3];

  *param_1 = *param_2;
  param_1[1] = dataValue1;
  param_1[2] = dataValue2;
  param_1[3] = dataValue3;
  param_1[4] = param_2[4];

  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined *)((int)param_1 + 0x1b) = 0;
  *(undefined *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  param_1[10] = 0x60000;
  param_1[0xb] = 0xc;
  param_1[0xc] = 0x2000084;
  param_1[0xd] = 0x2000022;
  param_1[0xe] = 0xd4d4d4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;

  do {
    dataValue1 = sourceDataPointer[1];
    dataValue2 = sourceDataPointer[2];
    dataValue3 = sourceDataPointer[3];
    *destDataPointer = *sourceDataPointer;
    destDataPointer[1] = dataValue1;
    destDataPointer[2] = dataValue2;
    destDataPointer[3] = dataValue3;
    sourceDataPointer = sourceDataPointer + 4;
    destDataPointer = destDataPointer + 4;
  } while (sourceDataPointer != (undefined4 *)0x80092384);

  *destDataPointer = 0;

  FUN_8006cdcc(param_1 + 0x11,&LAB_8007306c, 0);

  return;
}

void FUN_8007364c(int param_1)

{

  *(undefined *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;

  *(short *)(param_1 + 0x4a) = (short)*(char *)(param_1 + 0x1a);
  *(short *)(param_1 + 0x4e) = (short)*(char *)(param_1 + 5);
  *(short *)(param_1 + 0x50) = (short)*(char *)(param_1 + 7);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_1 + 0xe);
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x10) + (short)*(char *)(param_1 + 5) + -8;

  FUN_8006ce70(param_1 + 0x44);

  return;
}

void FUN_800736e0(int param_1)

{

  *(ushort *)(param_1 + 0x40) = ~*(ushort *)(param_1 + 0x2c);

  FUN_8006ced8(param_1 + 0x44);

  *(undefined2 *)(param_1 + 0x14) = 0xffff;

  return;
}

undefined4 FUN_80073720(undefined4 *param_1,int param_2)

{

  byte byteValue;
  char charValue;
  short shortValue;
  int intValue;
  undefined *dataPointer;
  uint uintValue;
  undefined processingBuffer[32];

  FUN_8006cfc4(param_1 + 0x11, 0);
  FUN_8006be64(param_1 + 10);

  if (*(short *)(param_1 + 5) < 0) {
    if (*(short *)(param_1 + 5) < -1) {
      *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 1;
    }
  }
  else {

    FUN_8007da80(processingBuffer,*param_1);

    shortValue = *(short *)(param_1 + 5);
    *(short *)(param_1 + 5) = shortValue + 1;
    if (0xc < (short)(shortValue + 1)) {
      *(undefined2 *)(param_1 + 5) = 0xc;
    }

    shortValue = *(short *)((int)param_1 + 0x16) + 1;
    *(short *)((int)param_1 + 0x16) = shortValue;
    if (0x3c < shortValue) {
      *(undefined2 *)((int)param_1 + 0x16) = 0;
    }

    shortValue = *(short *)(param_1 + 6);
    *(short *)(param_1 + 6) = shortValue + 1;
    if (0x28 < (short)(shortValue + 1)) {
      *(undefined2 *)(param_1 + 6) = 0;
    }

    if (param_2 != 0) {
      uintValue = *(uint *)(param_2 + 4);
      if (((uintValue | *(uint *)(param_2 + 0xc)) & 0x500) == 0) {
        if ((uintValue & 0xa00) == 0) {
          if ((uintValue & 0x10000) == 0) {

            uintValue = uintValue | *(uint *)(param_2 + 0xc);

            if (((uintValue & 0x10) != 0) &&
               (shortValue = *(short *)(param_1 + 7), *(ushort *)(param_1 + 7) = shortValue - 1U,
               (int)((uint)(ushort)(shortValue - 1U) << 0x10) < 0)) {
              *(undefined2 *)(param_1 + 7) = 0;
            }

            if ((uintValue & 0x1000) != 0) {
              *(short *)(param_1 + 7) = *(short *)(param_1 + 7) + 1;
              intValue = FUN_8008cfc4(param_1[9]);
              if (intValue < *(short *)(param_1 + 7)) {
                *(short *)(param_1 + 7) = (short)intValue;
              }
            }

            *(char *)((int)param_1 + 0x1a) = (char)*(undefined2 *)((int)param_1 + 0x4a);

            if ((uintValue & 4) != 0) {
              byteValue = *(char *)((int)param_1 + 0x1b) - 1;
              *(byte *)((int)param_1 + 0x1b) = byteValue;
              if ((int)((uint)byteValue << 0x18) < 0) {
                *(undefined *)((int)param_1 + 0x1b) = 0xf;
              }
              if (*(char *)((int)param_1 + 0x1a) == '\f') {
                *(undefined *)((int)param_1 + 0x1b) = 7;
              }
            }

            if ((uintValue & 8) != 0) {
              charValue = *(char *)((int)param_1 + 0x1b) + '\x01';
              *(char *)((int)param_1 + 0x1b) = charValue;
              if ('\x0f' < charValue) {
                *(undefined *)((int)param_1 + 0x1b) = 0;
              }
              if (*(char *)((int)param_1 + 0x1a) == '\f') {
                *(undefined *)((int)param_1 + 0x1b) = 8;
              }
            }

            if ((uintValue & 0x101f) == 0) {
              return 0xfffffffe;
            }
          }
          else {

            *(undefined *)((int)param_1 + 0x1a) = 0xc;
            FUN_8006d400(param_1 + 0x11, 0);
            *(undefined *)((int)param_1 + 0x1b) = 8;
          }
          FUN_80060840(5);
          return 0xfffffffd;
        }

        if (*(char *)((int)param_1 + 0x1a) == '\f') {
          if (*(char *)((int)param_1 + 0x1b) < '\b') {
            return 0xffffffff;
          }
          return 0;
        }

        intValue = FUN_8008cfc4(param_1[9]);
        if (*(short *)((int)param_1 + 0x1e) <= intValue) {
          FUN_80060840(2);
          return 0xfffffffe;
        }

        dataPointer = (undefined *)(param_1[9] + intValue);
        if (*(short *)(param_1 + 7) <= intValue) {
          do {
            intValue = intValue + -1;
            dataPointer[1] = *dataPointer;
            dataPointer = dataPointer + -1;
          } while (*(short *)(param_1 + 7) <= intValue);
        }

        *(undefined *)(param_1[9] + (int)*(short *)(param_1 + 7)) =
             (&DAT_8009226c)
             [(int)*(char *)((int)param_1 + 0x1b) + *(char *)((int)param_1 + 0x1a) * 0x10];

        intValue = FUN_8006ad3c(processingBuffer,param_1[9],(int)*(short *)(param_1 + 3));
        if (intValue < *(short *)(param_1 + 8)) {
          FUN_80060840(1);
          *(short *)(param_1 + 7) = *(short *)(param_1 + 7) + 1;
          return 0xfffffffe;
        }
        FUN_80073524(param_1[9],(int)*(short *)(param_1 + 7));
      }
      else if (0 < *(short *)(param_1 + 7)) {

        FUN_80060840(2);
        shortValue = *(short *)(param_1 + 7);
        *(short *)(param_1 + 7) = shortValue + -1;
        FUN_80073524(param_1[9],(int)(short)(shortValue + -1));
        return 0xfffffffe;
      }
      FUN_80060840(0);
    }
  }

  return 0xfffffffe;
}

void FUN_80073afc(undefined4 *param_1,undefined4 param_2)

{

  undefined dataValue;
  int colorIntensity;
  uint colorValue;
  undefined *dataPointer;
  int positionY;
  undefined renderingBuffer[12];
  uint colorMask;
  undefined4 renderingParam;
  uint colorComponent;
  undefined crosshairBuffer[8];

  FUN_8006d50c(param_1 + 0x11, 0);

  colorValue = (uint)*(short *)(param_1 + 5);
  if (colorValue != 0xffffffff) {
    if ((int)colorValue < 0) {
      colorValue = ~colorValue;
    }

    positionY = (int)*(short *)((int)param_1 + 0xe) -
                ((int)((uint)*(ushort *)(param_1 + 8) << 0x10) >> 0x11);
    colorIntensity = (int)(colorValue * 0x50) / 0xc;

    FUN_8006ac68(renderingBuffer,(int)*(short *)(param_1 + 2));
    FUN_8007da80(renderingBuffer,*param_1);

    colorValue = colorIntensity >> 1 | colorIntensity * 0x100 | colorIntensity * 0x10000 | 0x2000000;
    colorMask = colorMask & 0xff9fffff | 0x200000;
    renderingParam = param_2;
    colorComponent = colorValue;

    FUN_8006ac90(renderingBuffer,param_1[9],positionY,(int)*(short *)(param_1 + 4),
                 (int)*(short *)(param_1 + 3));

    colorMask = colorMask & 0xff9fffff | 0x400000;
    colorComponent = colorValue;
    FUN_8006ac90(renderingBuffer,param_1[9],positionY,(int)*(short *)(param_1 + 4),
                 (int)*(short *)(param_1 + 3));

    FUN_8006bef4(param_1 + 10,param_2,positionY,*(short *)(param_1 + 4) + -6);
    FUN_8007da44(param_2,0x220, 0);

    dataPointer = (undefined *)(param_1[9] + (int)*(short *)(param_1 + 7));
    dataValue = *dataPointer;
    *dataPointer = 0;
    colorIntensity = FUN_8006ad3c(renderingBuffer,param_1[9],(int)*(short *)(param_1 + 3));
    *dataPointer = dataValue;

    FUN_8006b988(crosshairBuffer,param_2,positionY + colorIntensity,*(short *)(param_1 + 4) + 10,4,0xfffffff9,
                 (int)*(short *)(param_1 + 6));
    FUN_8007da44(param_2,0x20, 0);
  }

  return;
}

void FUN_80073ce4(short *param_1)

{

  param_1[0x13] = -1;
  param_1[0x1c] = *param_1 + 0x44;

  return;
}

void FUN_80073d30(int param_1)

{

  if (-1 < *(short *)(param_1 + 0x26)) {
    *(undefined2 *)(param_1 + 0x26) = 0xfff0;
  }

  return;
}

void FUN_80073d4c(short *param_1)

{

  short counterValue;

  if (param_1[0x13] < 0) {
    if (param_1[0x13] < -1) {
      param_1[0x13] = param_1[0x13] + 1;
      return;
    }
  }
  else {

    counterValue = param_1[0x13] + 1;
    param_1[0x13] = counterValue;
    if (param_1[0x1c] < counterValue) {
      param_1[0x13] = *param_1 + 8;
    }
  }

  return;
}

void FUN_80073da4(int param_1)

{

  short calculatedValue1;
  short calculatedValue2;
  int divisorValue;

  divisorValue = 0x14;
  if (300 < *(short *)(param_1 + 0x22)) {
    divisorValue = 0x32;
  }

  calculatedValue1 = (short)(((*(short *)(param_1 + 0x22) * 0xb) / 10) / divisorValue) + 1;
  *(short *)(param_1 + 0x2c) = (short)divisorValue;
  *(short *)(param_1 + 0x2a) = calculatedValue1;
  *(short *)(param_1 + 0x28) = calculatedValue1 * (short)divisorValue;

  divisorValue = 2;
  if (400 < *(short *)(param_1 + 0x24)) {
    divisorValue = 5;
  }

  calculatedValue2 = (short)(((((*(short *)(param_1 + 0x24) * 0xc) / 10) * 0xb) / 10) / (divisorValue * 10)) + 1;
  *(short *)(param_1 + 0x32) = (short)divisorValue;
  *(short *)(param_1 + 0x30) = calculatedValue2;

  calculatedValue1 = (short)((*(short *)(param_1 + 0x20) * 0xb) / 10000) + 1;
  *(short *)(param_1 + 0x34) = calculatedValue1;
  *(short *)(param_1 + 0x36) = calculatedValue1 * 4;
  *(short *)(param_1 + 0x2e) = calculatedValue2 * (short)divisorValue;

  return;
}

void FUN_80073edc(short *param_1,undefined4 param_2,int param_3)

{

  short value1;
  short *pointerVar;
  int calculationValue;
  short value4;
  int positionValue;
  short value6;
  int calculationValue2;
  int baseValue;
  int loopCounter;
  int accumulatorValue;
  int loopLimit;
  undefined renderingBuffer[256];
  undefined textBuffer[12];
  uint colorMask;
  undefined4 renderingParam;
  undefined4 colorParam;
  undefined4 dataParam;
  int value4c;
  int value48;
  int value44;
  undefined4 colorValue1;
  undefined4 colorValue2;
  int heightValue;
  int positionY;
  undefined4 *dataPointer1;
  undefined4 *dataPointer2;

  value44 = (int)param_1[4];
  if (param_3 == 0) {

    value4 = param_1[0x16];
    value6 = param_1[0x15];
    value1 = param_1[0x14];
    baseValue = (int)param_1[1];
    dataParam = *(undefined4 *)(param_1 + 10);
    dataPointer1 = (undefined4 *)0x801ef6b6;
  }
  else {

    dataPointer1 = &DAT_801ef6b0;
    value4 = param_1[0x19];
    value6 = param_1[0x18];
    value1 = param_1[0x17];
    dataParam = *(undefined4 *)(param_1 + 0xc);
    baseValue = (int)param_1[1] + (int)param_1[3] + -2;
  }

  value48 = (int)value1;
  value4c = (int)value4;
  loopLimit = (int)value6;
  positionY = (int)param_1[2] + ((int)((uint)*(byte *)((int)param_1 + 0xd) << 0x18) >> 0x19);

  FUN_8006ac68(textBuffer,(int)*(char *)(param_1 + 5));
  renderingParam = param_2;
  FUN_8007da80(textBuffer,*(undefined4 *)(param_1 + 8));
  colorMask = colorMask & 0xff9fffff | 0x200000;

  heightValue = value44 / loopLimit + -2;
  if (heightValue < 1) {
    heightValue = 1;
  }

  dataPointer2 = &dataParam;
  positionValue = param_1[2] + value44;
  accumulatorValue = value4c;

  for (loopCounter = 1;
      (loopCounter <= loopLimit && (calculationValue = (int)param_1[0x13] - (*param_1 * loopCounter) / loopLimit, -1 < calculationValue));
      loopCounter = loopCounter + 1) {

    calculationValue = 8 - calculationValue;
    if (calculationValue < 0) {
      calculationValue = 0;
    }
    colorValue1 = FUN_8006b548(dataPointer2,&DAT_80092388,calculationValue,8);
    colorValue2 = FUN_8006b548(dataPointer2,&DAT_80092388,calculationValue,0x10);

    calculationValue2 = (param_1[2] + value44) - (value44 * accumulatorValue) / value48;
    pointerVar = (short *)FUN_8007d024(param_2,colorValue1, 0);
    value4 = (short)baseValue;
    *pointerVar = value4;
    value6 = (short)calculationValue2;
    pointerVar[1] = value6;
    pointerVar[2] = 2;
    pointerVar[3] = (short)heightValue;

    calculationValue = (uint)*(byte *)((int)param_1 + 0xd) << 0x18;
    calculationValue2 = calculationValue2 + (calculationValue >> 0x19);
    if (calculationValue2 < positionValue && positionY + (calculationValue >> 0x18) + (calculationValue >> 0x1a) < calculationValue2) {

      FUN_8008cf34(renderingBuffer,&DAT_8008faac,(int)param_1[2]);
      positionValue = baseValue + 4;
      if (param_3 == 0) {

        positionValue = FUN_8006b044(textBuffer,renderingBuffer,1,0);
        positionValue = baseValue - (positionValue + 4);
        value4 = value4 + -2;
      }
      else {

        value4 = value4 + 2;
      }
      colorParam = colorValue2;
      FUN_8006af40(textBuffer,renderingBuffer,positionValue,calculationValue2,0,(int)*(char *)(param_1 + 6),0);
      pointerVar = (short *)FUN_8007d024(param_2,colorValue1, 0);
      *pointerVar = value4;
      pointerVar[1] = value6;
      pointerVar[2] = 2;
      pointerVar[3] = 1;
      positionValue = (calculationValue2 - (calculationValue >> 0x18)) - (int)*(char *)((int)param_1 + 0xb);
    }

    if (loopCounter == loopLimit) {
      calculationValue = baseValue + 3;
      if (param_3 == 0) {
        calculationValue = FUN_8006ad3c(textBuffer,dataPointer1,1);
        calculationValue = baseValue - (calculationValue + 2);
      }
      colorParam = colorValue2;
      FUN_8006ac90(textBuffer,dataPointer1,calculationValue,positionY,1);
    }
    accumulatorValue = accumulatorValue + value4c;
  }

  return;
}

void FUN_8007421c(undefined *param_1,undefined4 param_2,int param_3)

{

  short *pointerVar;
  int calculationValue;
  int calculationValue2;
  short value4;
  int unaffValue2;
  short value5;
  int calculationValue3;
  int unaffValue4;
  short *unaffPointer5;
  int unaffValue6;
  int unaffValue7;
  int unaffValue8;
  undefined4 param5;
  undefined4 param11;
  int param12;
  int param13;
  int param14;
  undefined4 param15;
  undefined4 param16;
  short param17;
  int param18;
  undefined4 param19;
  undefined4 param20;
  undefined4 param31;
  int param32;
  undefined stackBuffer1[0x20];
  undefined stackBuffer2[0x120];
  undefined stack0x00000120[0x120];

  do {

    param11 = param16;
    param5 = 1;
    FUN_8006ac90(param_1,param_2,param_3,param18, 0);

    do {

      unaffValue6 = unaffValue6 + 1;
      unaffValue7 = unaffValue7 + param12;

      if ((unaffValue8 < unaffValue6) ||
         (calculationValue = (int)unaffPointer5[0x13] - (*unaffPointer5 * unaffValue6) / unaffValue8, calculationValue < 0)) {
        return;
      }

      calculationValue = 8 - calculationValue;
      if (calculationValue < 0) {
        calculationValue = 0;
      }
      param15 = FUN_8006b548(param20,&DAT_80092388,calculationValue,8);
      param16 = FUN_8006b548(param20,&DAT_80092388,calculationValue,0x10);

      calculationValue3 = (unaffPointer5[2] + param14) - (param14 * unaffValue7) / param13;
      pointerVar = (short *)FUN_8007d024(param31,param15, 0);
      value4 = (short)unaffValue4;
      *pointerVar = value4;
      value5 = (short)calculationValue3;
      pointerVar[1] = value5;
      pointerVar[2] = 2;
      pointerVar[3] = param17;

      calculationValue = (uint)*(byte *)((int)unaffPointer5 + 0xd) << 0x18;
      calculationValue3 = calculationValue3 + (calculationValue >> 0x19);
      if (calculationValue3 < unaffValue2 && param18 + (calculationValue >> 0x18) + (calculationValue >> 0x1a) < calculationValue3) {

        FUN_8008cf34(stackBuffer1,&DAT_8008faac,(int)param_1[2]);
        calculationValue2 = unaffValue4 + 4;
        if (param32 == 0) {

          calculationValue2 = FUN_8006b044(stackBuffer2,stackBuffer1,1,0);
          calculationValue2 = unaffValue4 - (calculationValue2 + 4);
          value4 = value4 + -2;
        }
        else {

          value4 = value4 + 2;
        }
        param11 = param16;
        param5 = 0;
        FUN_8006af40(&stackBuffer2[0x100],&stackBuffer1[0],calculationValue2,calculationValue3, 0, 0, 0);
        pointerVar = (short *)FUN_8007d024(param31,param15, 0);
        *pointerVar = value4;
        pointerVar[1] = value5;
        pointerVar[2] = 2;
        pointerVar[3] = 1;
        unaffValue2 = (calculationValue3 - (calculationValue >> 0x18)) - (int)*(char *)((int)unaffPointer5 + 0xb);
      }
    } while (unaffValue6 != unaffValue8);

    param_3 = unaffValue4 + 3;
    if (param32 == 0) {
      calculationValue = FUN_8006ad3c(&stackBuffer2[0x100],param19,1);
      param_3 = unaffValue4 - (calculationValue + 2);
    }
    param_1 = &stack0x00000120;
    param_2 = param19;
  } while( true );
}

void FUN_80074274(short *param_1,undefined4 param_2)

{

  short value1;
  short value2;
  undefined4 colorValue;
  undefined2 *pointerVar;
  int calculationValue;
  int calculationValue2;
  undefined2 positionValue;
  int positionX;
  int loopCounter;
  int loopLimit;
  undefined renderingBuffer[256];
  undefined textBuffer[12];
  uint colorMask;
  undefined4 renderingParam;
  undefined4 colorParam;
  undefined4 colorValue1;
  undefined4 colorValue2;
  int heightValue;
  int positionY;
  int baseX;
  short *colorPointer;

  loopLimit = (int)param_1[0x1a];
  FUN_8006ac68(textBuffer,(int)*(char *)(param_1 + 5));
  renderingParam = param_2;
  FUN_8007da80(textBuffer,*(undefined4 *)(param_1 + 8));
  colorMask = colorMask & 0xff9fffff | 0x200000;
  loopCounter = 0;
  colorPointer = param_1 + 0xe;
  baseX = (int)param_1[1];
  positionY = (int)param_1[2] + (int)param_1[4] + *(char *)((int)param_1 + 0xd) + 3;
  heightValue = (int)param_1[3] / loopLimit + -1;

  while( true ) {

    if (loopLimit <= loopCounter) {
      return;
    }

    calculationValue2 = (int)param_1[0x13] - (*param_1 * loopCounter) / loopLimit;
    if (calculationValue2 < 0) break;
    if (8 < calculationValue2) {
      calculationValue2 = 8;
    }

    colorValue = FUN_8006b548(&DAT_8009238c,colorPointer,calculationValue2,8);
    colorValue1 = FUN_8006b548(&DAT_8009238c,colorPointer,calculationValue2,0x10);
    colorValue2 = FUN_8006b548(&DAT_8009238c,colorPointer,calculationValue2,0x20);

    positionX = (int)param_1[1] + (param_1[3] * loopCounter) / loopLimit;
    pointerVar = (undefined2 *)FUN_8007d024(param_2,colorValue, 0);
    positionValue = (undefined2)positionX;
    *pointerVar = positionValue;
    value1 = param_1[2];
    value2 = param_1[4];
    pointerVar[3] = 2;
    pointerVar[2] = (undefined2)heightValue;
    pointerVar[1] = value1 + value2;

    FUN_8008cf34(renderingBuffer,&DAT_8008faac,(int)param_1[2]);
    calculationValue = FUN_8006ad3c(textBuffer,renderingBuffer,(int)*(char *)(param_1 + 6));
    positionX = (positionX - (calculationValue >> 1)) + -1;

    if (baseX < positionX) {
      colorParam = colorValue1;
      FUN_8006ac90(textBuffer,renderingBuffer,positionX,positionY,(int)*(char *)(param_1 + 6));
      calculationValue2 = (8 - calculationValue2) * (8 - calculationValue2);
      baseX = positionX + calculationValue + 1;
      if (calculationValue2 < 0) {
        calculationValue2 = calculationValue2 + 7;
      }

      pointerVar = (undefined2 *)FUN_8007f7f4(param_2,colorValue2);
      pointerVar[2] = positionValue;
      *pointerVar = positionValue;
      calculationValue2 = (int)param_1[4] * (calculationValue2 >> 3);
      if (calculationValue2 < 0) {
        calculationValue2 = calculationValue2 + 7;
      }
      pointerVar[1] = param_1[2] + (short)(calculationValue2 >> 3);
      pointerVar[3] = param_1[2] + param_1[4];
    }

    if (loopCounter == loopLimit + -1) {
      colorParam = colorValue1;
      calculationValue2 = FUN_8006ad3c(textBuffer,0x801ef6b9,1);
      FUN_8006ac90(textBuffer,0x801ef6b9,(((int)param_1[1] + (int)param_1[3]) - calculationValue2) + -5,
                   (int)param_1[2] + (int)param_1[4] + -2,1);
    }
    loopCounter = loopCounter + 1;
  }

  return;
}

void FUN_800745b0(short *param_1,undefined4 param_2,short *param_3,int param_4,undefined4 param_5)

{

  short loopLimit;
  undefined2 *pointerVar;
  int calculationValue;
  int loopCounter;
  int accumulatorValue;
  uint flagValue1;
  uint flagValue2;
  int positionX;
  int positionY;
  int positionX2;
  undefined4 dataParam;
  undefined4 colorValue;
  int divisorValue;
  int value2c;

  value2c = (int)param_1[4];
  if (-1 < param_1[0x13]) {

    if (param_4 == 0) {

      divisorValue = (int)param_1[0x14];
      dataParam = *(undefined4 *)(param_1 + 10);
    }
    else {

      dataParam = *(undefined4 *)(param_1 + 0xc);
      divisorValue = param_1[0x17] * 10;
    }

    loopLimit = param_1[0x1b];
    loopCounter = 0;
    if (0 < param_1[0x1b]) {
      accumulatorValue = 0;
      flagValue1 = 0;
      positionX = 0;
      positionY = 0;

      do {

        calculationValue = (int)param_1[0x13] - (*param_1 * loopCounter) / (int)loopLimit;
        if (calculationValue < 0) break;
        calculationValue = 8 - calculationValue;
        if (calculationValue < 0) {
          calculationValue = 0;
        }

        colorValue = FUN_8006b548(&dataParam,&DAT_80092388,calculationValue,8);
        colorValue = FUN_8006b548(&DAT_8009238c,&colorValue,param_5,0x80);

        flagValue2 = flagValue1;
        positionX2 = positionX;
        positionX2 = positionY;

        if (accumulatorValue <= param_1[0x10]) {
          flagValue2 = (uint)~(int)*param_3 >> 0x1f;
          positionX2 = (int)param_1[1] + (param_1[3] * loopCounter) / (int)param_1[0x1b];
          positionX2 = (param_1[2] + value2c) - (value2c * *param_3) / divisorValue;

          if ((0 < loopCounter) && ((flagValue2 & flagValue1) != 0)) {
            pointerVar = (undefined2 *)FUN_8007f7f4(param_2,colorValue);
            *pointerVar = (short)positionY;
            pointerVar[2] = (short)positionX2;
            pointerVar[1] = (short)positionX;
            pointerVar[3] = (short)positionX2;
          }
        }

        param_3 = param_3 + 1;
        loopCounter = loopCounter + 1;
        loopLimit = param_1[0x1b];
        accumulatorValue = accumulatorValue + 0xfa;
        flagValue1 = flagValue2;
        positionX = positionX2;
        positionY = positionX2;
      } while (loopCounter < param_1[0x1b]);
    }

    FUN_8007da44(param_2,0x20, 0);
  }

  return;
}

void FUN_800747d0(int param_1,undefined4 param_2)

{

  if ((*(short *)(param_1 + 0x26) != -1) && (-2 < *(short *)(param_1 + 0x26))) {

    FUN_80073edc(param_1,param_2,0);

    FUN_80073edc(param_1,param_2,1);

    FUN_80074274(param_1,param_2);

    FUN_8007da44(param_2,0x20, 0);
  }

  return;
}

int FUN_80074844(int param_1,int param_2,int param_3,int param_4,int param_5)

{

  if (param_2 < 0) {
    return -1;
  }

  if (param_1 <= param_2) {
    return param_4;
  }

  if (param_1 < param_3) {
    return param_4 + ((param_5 - param_4) * (param_1 - param_2)) / (param_3 - param_2);
  }
  return param_5;
}

void FUN_8007489c(int param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
                 undefined2 *param_6)

{

  undefined2 interpolatedValue;
  int outputCounter;
  undefined4 *dataPointer;
  int arrayIndex;
  int offsetValue;
  int interpolationValue;
  int *arrayPointer;
  int arrayCounter;
  undefined2 *outputPointer1;
  undefined2 *outputPointer2;
  int dataArray1[64];
  int dataArray2[64];
  int dataArray3[64];
  int *arrayPointer2;
  int *arrayPointer3;
  int *arrayPointer1;

  arrayIndex = 0;
  dataArray3[0] = -1;
  dataArray2[0] = -1;
  dataArray1[0] = -1;

  if (0 < param_1) {
    arrayCounter = 1;
    offsetValue = arrayIndex;
    do {
      arrayIndex = arrayCounter;
      offsetValue = offsetValue * 2;
      dataArray1[arrayIndex] = (int)*(short *)(offsetValue + param_2);
      dataArray2[arrayIndex] = (int)*(short *)(offsetValue + param_3);
      dataArray3[arrayIndex] = (int)*(short *)(offsetValue + param_4);
      arrayCounter = arrayIndex + 1;
      offsetValue = arrayIndex;
    } while (arrayIndex < param_1);
  }

  arrayCounter = 1;
  arrayIndex = arrayIndex + 1;
  outputCounter = 0;
  arrayPointer1 = dataArray1;
  arrayPointer2 = dataArray2;
  interpolationValue = 0;
  arrayPointer3 = dataArray3;
  dataArray1[arrayIndex] = -1;
  offsetValue = 0;
  dataArray2[arrayIndex] = -1;
  arrayPointer = dataArray1 + 1;
  dataArray3[arrayIndex] = -1;
  outputPointer1 = param_5;
  outputPointer2 = param_6;

  do {

    if (*arrayPointer < interpolationValue) {

      offsetValue = offsetValue + 4;
      arrayCounter = arrayCounter + 1;
      arrayPointer = arrayPointer + 1;
      if (param_1 + 1 <= arrayCounter) break;
    }
    else {

      dataPointer = (undefined4 *)((int)arrayPointer1 + offsetValue);
      outputCounter = outputCounter + 1;

      interpolatedValue = FUN_80074844(interpolationValue,*dataPointer,*arrayPointer,*(undefined4 *)((int)arrayPointer2 + offsetValue),
                           arrayPointer2[arrayCounter]);
      *outputPointer1 = interpolatedValue;
      outputPointer1 = outputPointer1 + 1;

      interpolatedValue = FUN_80074844(interpolationValue,*dataPointer,*arrayPointer,*(undefined4 *)((int)arrayPointer3 + offsetValue),
                           arrayPointer3[arrayCounter]);
      *outputPointer2 = interpolatedValue;
      outputPointer2 = outputPointer2 + 1;
      interpolationValue = interpolationValue + 0xfa;
    }
  } while (outputCounter < 0x4f);

  if (outputCounter < 0x50) {
    param_6 = param_6 + outputCounter;
    param_5 = param_5 + outputCounter;
    do {
      *param_5 = 0xffff;
      *param_6 = 0xffff;
      param_6 = param_6 + 1;
      outputCounter = outputCounter + 1;
      param_5 = param_5 + 1;
    } while (outputCounter < 0x50);
  }

  return;
}

undefined * FUN_80074ae4(short *param_1,int param_2)

{

  int searchCounter;
  short *structurePointer;
  int offsetValue;

  searchCounter = 0;
  if (0 < *param_1) {
    offsetValue = 4;
    structurePointer = param_1;

    do {
      searchCounter = searchCounter + 1;

      if (*(int *)(structurePointer + 2) == param_2) {
        return (undefined *)((int)param_1 + offsetValue + 4);
      }

      offsetValue = offsetValue + 0x48;
      structurePointer = structurePointer + 0x24;
    } while (searchCounter < *param_1);
  }

  return &LAB_8008fb3a_2;
}

void FUN_80074b38(int param_1,int param_2,undefined2 *param_3)

{

  byte byteValue;
  short shortValue;
  undefined2 resultValue;
  int calculationValue1;
  undefined4 calculationValue2;
  int calculationValue3;
  int calculationValue4;
  undefined2 *outputPointer;
  int multiplierValue;
  uint counterValue;
  uint calculationValue5;
  undefined stackValue1;
  undefined localValue;
  undefined stackArray1[2];
  undefined stackArray2[2];
  short localShort;
  undefined stackArray3[2];
  undefined stackArray4[2];
  uint localCounter;

  FUN_80076070(param_1,&stackValue1,&localValue,stackArray1,stackArray2);
  FUN_80075fac(param_1,localValue,&localShort,stackArray3,stackArray4);
  localCounter = (uint)*(byte *)(param_1 + 0x2a);
  counterValue = localCounter;
  if (localCounter < 5) {
    counterValue = 5;
  }

  shortValue = *(short *)(param_1 + 0x28);
  multiplierValue = counterValue * 6;
  calculationValue4 = ((param_2 + -0x96) * 0x1000) / 0xfa;
  calculationValue1 = FUN_80075e90((uint)*(byte *)(param_1 + 0x32) * (localShort * 0x6488 >> 0xc) * 100,
                       param_2 * 0x472,0);
  calculationValue2 = FUN_80075e90(calculationValue1 / 0x3c,((int)shortValue << 0xc) / 1000,0);

  counterValue = 0xc8000 / *(byte *)(multiplierValue + -0x7ff6dc1d);
  calculationValue3 = FUN_80075a5c(calculationValue4,0xc8000 / *(byte *)(multiplierValue + -0x7ff6dc1e) - counterValue);
  calculationValue5 = 0xc8000 / *(byte *)(multiplierValue + -0x7ff6dc1b);
  calculationValue3 = counterValue + calculationValue3;
  calculationValue1 = FUN_80075a5c(calculationValue4,0xc8000 / *(byte *)(multiplierValue + -0x7ff6dc1c) - calculationValue5);
  counterValue = localCounter;
  byteValue = (&UNK_800923e7)[multiplierValue];
  calculationValue4 = FUN_80075a5c(calculationValue4,0xc8000 / (byte)(&UNK_800923e6)[multiplierValue] - 0xc8000 / byteValue);

  if (0 < (int)counterValue) {
    outputPointer = param_3 + counterValue;
    do {

      if (counterValue == 1) {
        calculationValue2 = FUN_80075a5c(calculationValue2,0xc8000 / byteValue + calculationValue4);
      }

      resultValue = FUN_80075a5c(calculationValue2,1000);
      *outputPointer = resultValue;
      calculationValue2 = FUN_80075a5c(calculationValue2,calculationValue3);
      calculationValue3 = FUN_80075a5c(calculationValue3,calculationValue5 + calculationValue1);

      counterValue = counterValue - 1;
      outputPointer = outputPointer + -1;
    } while (0 < (int)counterValue);
  }

  calculationValue4 = (short)param_3[1] * 3 + (int)(short)param_3[2];
  if (calculationValue4 < 0) {
    calculationValue4 = calculationValue4 + 3;
  }
  *param_3 = (short)(calculationValue4 >> 2);

  return;
}

void FUN_80074e04(int param_1,short *param_2,undefined2 *param_3,undefined2 *param_4)

{

  int calculationValue1;
  int calculationValue2;
  short *inputPointer;
  short *outputPointer1;
  undefined2 *outputPointer2;

  calculationValue1 = param_2[1] * 9;
  if (calculationValue1 < 0) {
    calculationValue1 = calculationValue1 + 7;
  }
  param_4[1] = (short)(calculationValue1 >> 3);

  calculationValue1 = 1;
  if (1 < param_1) {
    inputPointer = param_2 + 1;
    outputPointer2 = param_4 + 1;
    outputPointer1 = param_3 + 1;

    do {

      calculationValue2 = *inputPointer * 2 + (int)inputPointer[1];
      *outputPointer1 = (short)((ulonglong)((longlong)calculationValue2 * 0x55555556) >> 0x20) - (short)(calculationValue2 >> 0x1f);

      calculationValue2 = (int)*inputPointer + inputPointer[1] * 2;
      calculationValue1 = calculationValue1 + 1;
      inputPointer = inputPointer + 1;
      outputPointer1 = outputPointer1 + 1;
      outputPointer2[1] = (short)((ulonglong)((longlong)calculationValue2 * 0x55555556) >> 0x20) -
                  (short)(calculationValue2 >> 0x1f);
      outputPointer2 = outputPointer2 + 1;
    } while (calculationValue1 < param_1);
  }

  calculationValue1 = param_2[param_1] * 7;
  if (calculationValue1 < 0) {
    calculationValue1 = calculationValue1 + 7;
  }
  param_3[param_1] = (short)(calculationValue1 >> 3);

  calculationValue1 = *param_2 * 7;
  if (calculationValue1 < 0) {
    calculationValue1 = calculationValue1 + 7;
  }
  *param_3 = (short)(calculationValue1 >> 3);

  calculationValue1 = *param_2 * 9;
  if (calculationValue1 < 0) {
    calculationValue1 = calculationValue1 + 7;
  }
  *param_4 = (short)(calculationValue1 >> 3);

  return;
}

int FUN_80074f24(int param_1,short param_2,undefined2 param_3)

{

  byte byteValue;
  int calculationValue1;
  int calculationValue2;
  int calculationValue3;
  int calculationValue4;
  int dataPointer1;
  int dataPointer2;
  int loopCounter;
  short *localArrayPointer;
  int accumulatorValue;
  short localArray[4];

  localArrayPointer = localArray;
  accumulatorValue = 0;
  loopCounter = 0;
  localArray[0] = param_2;
  localArray[1] = param_3;
  dataPointer1 = param_1;
  dataPointer2 = param_1;

  do {

    if (1 < loopCounter) {
      return accumulatorValue + 0x1000;
    }

    calculationValue4 = (int)*(short *)(dataPointer2 + 0x98);
    if (calculationValue4 != 0) {
      calculationValue3 = (int)*localArrayPointer;
      calculationValue2 = (int)*(short *)(dataPointer2 + 0x94);
      calculationValue1 = 0;

      if (calculationValue3 < calculationValue2) {
        byteValue = *(byte *)(param_1 + loopCounter + 0xae);
        if (byteValue != 1) {
          if (byteValue < 2) {
            if (byteValue == 0) {

              calculationValue2 = (calculationValue3 - calculationValue2) * (calculationValue3 - calculationValue2);
              calculationValue1 = *(int *)(dataPointer1 + 0xa4);
              goto LAB_80075044;
            }
          }
          else if (byteValue == 2) {

            accumulatorValue = accumulatorValue + (calculationValue4 * calculationValue3) / calculationValue2;
          }
          goto LAB_80075058;
        }

        calculationValue1 = *(int *)(dataPointer1 + 0xa4) * (calculationValue3 * calculationValue3 >> 0xc) >> 0xc;
      }
      else if (calculationValue3 < calculationValue2 * 3) {

        calculationValue1 = *(int *)(dataPointer1 + 0xa4);
        if (calculationValue1 < 0) {
          calculationValue1 = calculationValue1 + 3;
        }
        calculationValue2 = (calculationValue3 - calculationValue2) * (calculationValue3 - calculationValue2);
        calculationValue1 = calculationValue1 >> 2;
LAB_80075044:
        calculationValue1 = calculationValue4 - (calculationValue1 * (calculationValue2 >> 0xc) >> 0xc);
      }
      accumulatorValue = accumulatorValue + calculationValue1;
    }

LAB_80075058:
    dataPointer1 = dataPointer1 + 4;
    localArrayPointer = localArrayPointer + 1;
    dataPointer2 = dataPointer2 + 2;
    loopCounter = loopCounter + 1;
  } while( true );
}

int FUN_80075074(int param_1,short param_2,short param_3)

{

  int calculatedValue;
  int limitValue;

  calculatedValue = FUN_80074f24(param_1,(int)param_2,(int)param_3);

  limitValue = *(short *)(param_1 + 0xac) + 0x1000;

  if (limitValue < calculatedValue) {
    calculatedValue = limitValue;
  }

  return calculatedValue;
}

void FUN_800750c8(int param_1,int param_2)

{

  byte byteValue;
  int calculationValue;
  undefined4 resultValue;

  if (*(char *)(param_1 + 0x2d) != '\0') {

    *(short *)(param_2 + 0xac) = (short)(((uint)*(byte *)(param_1 + 0x2d) << 0xc) / 10);
    if (((*(char *)(param_1 + 0x178) != '\0') && (*(char *)(param_1 + 0x179) != '\0')) &&
       (*(char *)(param_1 + 0x17a) != '\0')) goto LAB_80075144;
  }
  *(undefined2 *)(param_2 + 0xac) = 0;

LAB_80075144:
  if (*(short *)(param_2 + 0xac) == 0) {

    *(undefined *)(param_2 + 0xae) = 0;
    *(undefined2 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined4 *)(param_2 + 0xa4) = 0;
    *(undefined2 *)(param_2 + 0x94) = 0;
    *(undefined *)(param_2 + 0xaf) = 0;
    *(undefined2 *)(param_2 + 0x9a) = 0;
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined2 *)(param_2 + 0x96) = 0;
  }
  else {

    byteValue = *(byte *)(param_1 + 0x19c);
    *(byte *)(param_2 + 0xae) = byteValue;
    if (2 < byteValue) {
      *(undefined *)(param_2 + 0xae) = 0;
    }
    *(short *)(param_2 + 0x98) = (short)(((uint)*(byte *)(param_1 + 0x179) << 0xc) / 10);
    *(uint *)(param_2 + 0x9c) = ((uint)*(byte *)(param_1 + 0x17a) << 0xc) / 10;
    calculationValue = (int)((uint)*(byte *)(param_1 + 0x178) * 0x640000) >> 0x10;
    *(ushort *)(param_2 + 0x94) = (ushort)*(byte *)(param_1 + 0x178) * 100;
    resultValue = FUN_80075e90((int)*(short *)(param_2 + 0x98),calculationValue * calculationValue >> 0xc,0);
    *(undefined4 *)(param_2 + 0xa4) = resultValue;

    *(undefined *)(param_2 + 0xaf) = 0;
    *(undefined2 *)(param_2 + 0x9a) = 0;
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined2 *)(param_2 + 0x96) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 0;

    if ((((uint)*(byte *)(param_1 + 0x17c) + (uint)*(byte *)(param_1 + 0x17d) +
          (uint)*(byte *)(param_1 + 0x17b) != 0) && (*(byte *)(param_1 + 0x17c) != 0)) &&
       ((*(byte *)(param_1 + 0x17b) != 0 && (*(byte *)(param_1 + 0x17d) != 0)))) {

      byteValue = *(byte *)(param_1 + 0x19d);
      *(byte *)(param_2 + 0xaf) = byteValue;
      if (2 < byteValue) {
        *(undefined *)(param_2 + 0xaf) = 0;
      }
      *(short *)(param_2 + 0x9a) = (short)(((uint)*(byte *)(param_1 + 0x17c) << 0xc) / 10);
      *(uint *)(param_2 + 0xa0) = ((uint)*(byte *)(param_1 + 0x17d) << 0xc) / 10;
      calculationValue = (int)((uint)*(byte *)(param_1 + 0x17b) * 0x640000) >> 0x10;
      *(ushort *)(param_2 + 0x96) = (ushort)*(byte *)(param_1 + 0x17b) * 100;
      resultValue = FUN_80075e90((int)*(short *)(param_2 + 0x9a),calculationValue * calculationValue >> 0xc,0);
      *(undefined4 *)(param_2 + 0xa8) = resultValue;
    }
  }

  return;
}

void FUN_80075328(int param_1,ushort *param_2,undefined4 param_3)

{

  bool boolValue1;
  byte byteValue1;
  byte byteValue2;
  byte byteValue3;
  bool boolValue2;
  longlong longValue;
  int calculationValue1;
  undefined4 resultValue1;
  undefined4 resultValue2;
  ushort ushortValue;
  uint uintValue1;
  uint uintValue2;
  int dataPointer;
  uint uintValue3;
  ushort *outputPointer;
  uint uintValue4;
  int loopCounter;
  uint uVar12;

  param_2[0x47] = (ushort)*(byte *)(param_1 + 0x13) * 10;
  byteValue1 = *(byte *)(param_1 + 0x32);
  if (byteValue1 == 0) {
    byteValue1 = *(byte *)((uint)*(byte *)(param_1 + 0x56) + param_1 + 0x33);
  }
  param_2[0x46] = (ushort)byteValue1 * 100;
  ushortValue = (ushort)*(byte *)(param_1 + 0x31) * 100 + 500;
  if (param_2[0x46] < ushortValue) {
    param_2[0x46] = ushortValue;
  }

  dataPointer = param_1 + (*(byte *)(param_1 + 0x56) - 1) * 2;
  if (*(short *)(dataPointer + 0x13e) == 0) {
    *(undefined2 *)(dataPointer + 0x13e) =
         *(undefined2 *)(param_1 + (*(byte *)(param_1 + 0x56) - 2) * 2 + 0x13e);
  }

  uintValue4 = (uint)*(byte *)(param_1 + 0x1ac);
  if (uintValue4 == 0) {
    uintValue4 = 100;
  }
  uintValue1 = (uint)*(ushort *)(param_1 + 0x1b0);
  if (uintValue1 == 0) {
    uintValue1 = 1000;
  }

  byteValue1 = *(byte *)(param_1 + 0x56);
  byteValue2 = *(byte *)(param_1 + 0x34);
  byteValue3 = *(byte *)((uint)byteValue1 + param_1 + 0x33);
  outputPointer = param_2;
  dataPointer = param_1;

  for (loopCounter = 0; loopCounter < (int)(uint)byteValue1; loopCounter = loopCounter + 1) {

    uintValue3 = (uint)*(ushort *)(param_1 + 0x1ae);
    boolValue1 = uintValue3 == 0;
    boolValue2 = uintValue3 < 0x100;
    if (boolValue1) {
      uintValue3 = 1000;
    }
    if (!boolValue1 && boolValue2) {
      uintValue3 = uintValue3 * 10;
    }
    uVar12 = (uint)*(byte *)(param_1 + loopCounter + 0x34);
    *(uint *)(outputPointer + 6) = (uintValue2 * 0x64000) / 0x3c;

    calculationValue1 = (uint)*(ushort *)(dataPointer + 0x13e) * 0x27334;
    if (calculationValue1 < 0) {
      calculationValue1 = calculationValue1 + 0xfff;
    }
    longValue = (longlong)(calculationValue1 >> 0xc) *
            (longlong)
            (int)(uintValue3 * (uintValue4 * 10 +
                           (int)((uintValue1 + uintValue4 * -10) * (uintValue2 - byteValue2)) /
                           (int)((uint)byteValue3 - (uint)byteValue2)));

    dataPointer = dataPointer + 2;
    resultValue1 = FUN_80086084((int)longValue,(int)((ulonglong)longValue >> 0x20),100000000,0);
    *(undefined4 *)(outputPointer + 0x26) = resultValue1;
    outputPointer = outputPointer + 2;
  }

  byteValue1 = *(byte *)(param_1 + 0x56);
  *(ushort **)(param_2 + 2) = param_2 + 6;
  *(ushort **)(param_2 + 4) = param_2 + 0x26;
  *param_2 = (ushort)byteValue1;
  resultValue1 = FUN_80075e90((int)((uint)*(byte *)(param_1 + 0x2c) * 0x27334) >> 0xc,
                       *(undefined4 *)(param_2 + (*(byte *)(param_1 + 0x56) - 1) * 2 + 6),0);
  *(undefined4 *)(param_2 + 0x48) = resultValue1;

  FUN_800750c8(param_1,param_2);
  outputPointer = param_2;

  for (dataPointer = 0; dataPointer < (short)*param_2; dataPointer = dataPointer + 1) {
    loopCounter = (int)((uint)*(byte *)(param_1 + loopCounter + 0x34) * 0x640000) >> 0x10;
    resultValue1 = FUN_80075074(param_2,loopCounter,loopCounter);
    resultValue2 = FUN_80074f24(param_2,loopCounter,loopCounter);
    resultValue1 = FUN_80075e90(resultValue1,resultValue2,0);
    resultValue1 = FUN_80075a5c(resultValue1,*(undefined4 *)(outputPointer + 0x26));
    *(undefined4 *)(outputPointer + 0x26) = resultValue1;
    outputPointer = outputPointer + 2;
  }

  return;
}

void FUN_800756bc(short *param_1,undefined2 *param_2)

{

  ushort ushortValue;
  int calculationValue1;
  undefined4 resultValue;
  int counterValue1;
  int offsetValue;
  undefined2 *outputPointer;
  short *inputPointer;
  int loopCounter1;
  uint uintValue;
  int maxValue1;
  int maxValue2;
  int maxValue2Index;
  int maxValue1Index;

  maxValue1 = 0;
  maxValue2 = 0;
  counterValue1 = 0;
  loopCounter1 = 0;
  maxValue1Index = 0;
  maxValue2Index = 0;

  if (0 < *param_1) {
    offsetValue = -2;
    outputPointer = param_2;
    inputPointer = param_1;

    do {

      calculationValue1 = *(int *)(inputPointer + 6) * 0x3c;
      if (calculationValue1 < 0) {
        calculationValue1 = calculationValue1 + 0xfff;
      }
      calculationValue1 = (((calculationValue1 >> 0xc) + 0x32) / 100) * 100;

      if ((counterValue1 < 1) || (*(short *)((int)param_2 + offsetValue + 0xc) < calculationValue1)) {
        outputPointer[6] = (short)calculationValue1;
        outputPointer = outputPointer + 1;
        offsetValue = offsetValue + 2;
        counterValue1 = counterValue1 + 1;
      }

      loopCounter1 = loopCounter1 + 1;
      inputPointer = inputPointer + 2;
    } while (loopCounter1 < *param_1);
  }

  param_2[5] = (short)counterValue1;
  ushortValue = param_1[0x46];
  param_2[4] = ushortValue;
  uintValue = (uint)ushortValue;
  if ((int)(uint)ushortValue < (int)(short)param_2[counterValue1 + 5]) {
    uintValue = (int)(short)param_2[counterValue1 + 5];
  }

  outputPointer = param_2;
  for (counterValue1 = (int)(short)param_2[6]; counterValue1 <= (int)uintValue; counterValue1 = counterValue1 + 100) {

    calculationValue1 = FUN_80075d2c(param_1,(counterValue1 * 0x1000) / 0x3c);
    loopCounter1 = (calculationValue1 * 10) / 0x27;
    resultValue = FUN_80075e90(calculationValue1,0x9ccd,0);
    resultValue = FUN_80075a5c(resultValue,counterValue1);
    calculationValue1 = FUN_80075e90(resultValue,0xb30,0);

    if ((short)outputPointer[6] == counterValue1) {
      outputPointer[0x16] = (short)calculationValue1;
      outputPointer[0x26] = (short)loopCounter1;
      outputPointer = outputPointer + 1;
    }

    if (counterValue1 <= (int)(uint)(ushort)param_2[4]) {
      if (maxValue2 < loopCounter1) {
        maxValue2 = loopCounter1;
        maxValue2Index = counterValue1;
      }
      if (maxValue1 < calculationValue1) {
        maxValue1 = calculationValue1;
        maxValue1Index = counterValue1;
      }
    }
  }

  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (short)maxValue1;
    param_2[2] = (short)maxValue2;
    param_2[3] = (short)maxValue2Index;
    param_2[1] = (undefined2)maxValue1Index;
  }

  return;
}

undefined2 FUN_80075930(undefined4 param_1,undefined2 *param_2)

{

  undefined stackBuffer[176];

  FUN_80075328(param_1,stackBuffer,0);

  FUN_800756bc(stackBuffer,param_2);

  return *param_2;
}

int FUN_8007596c(uint param_1,uint param_2)

{

  return (int)(param_1 * param_2 + ((int)(param_1 ^ param_2) >> 0x1f & 0xfffU)) >> 0xc;
}

int FUN_8007598c(uint param_1,uint param_2)

{

  return (int)(param_1 * param_2 + ((int)(param_1 ^ param_2) >> 0x1f & 0xffffU)) >> 0x10;
}

int FUN_800759cc(uint param_1,uint param_2,int param_3)

{

  return (int)(param_1 * param_2 +
              ((int)(param_1 ^ param_2) >> 0x1f & (1 << (param_3 + 0xcU & 0x1f)) - 1U)) >>
         (param_3 + 0xcU & 0x1f);
}

int FUN_80075a5c(uint param_1,uint param_2)

{

  uint lowResult;

  lowResult = (uint)((longlong)(int)param_1 * (longlong)(int)param_2);

  return (lowResult >> 0xc |
         (int)((ulonglong)((longlong)(int)param_1 * (longlong)(int)param_2) >> 0x20) << 0x14) +
         ((int)((lowResult & 0xfff) + ((int)(param_1 ^ param_2) >> 0x1f & 0xfffU)) >> 0xc);
}

int FUN_80075a94(uint param_1,uint param_2)

{

  uint lowResult;

  lowResult = (uint)((longlong)(int)param_1 * (longlong)(int)param_2);

  return (lowResult >> 0x10 |
         (int)((ulonglong)((longlong)(int)param_1 * (longlong)(int)param_2) >> 0x20) << 0x10) +
         ((int)((lowResult & 0xffff) + ((int)(param_1 ^ param_2) >> 0x1f & 0xffffU)) >> 0x10);
}

int FUN_80075b04(uint param_1,uint param_2,int param_3)

{

  uint lowResult;
  uint shiftValue;
  uint maskValue;

  lowResult = (uint)((longlong)(int)param_1 * (longlong)(int)param_2);

  shiftValue = param_3 + 0xc;
  maskValue = (1 << (shiftValue & 0x1f)) - 1;

  return (lowResult >> (shiftValue & 0x1f) |
         (int)((ulonglong)((longlong)(int)param_1 * (longlong)(int)param_2) >> 0x20) <<
         (0x20 - shiftValue & 0x1f)) +
         ((lowResult & maskValue) + ((int)(param_1 ^ param_2) >> 0x1f & maskValue) >> (shiftValue & 0x1f));
}

int FUN_80075b54(uint param_1,uint param_2,int param_3)

{

  uint lowResult;
  uint shiftValue;
  uint maskValue;

  lowResult = (uint)((longlong)(int)param_1 * (longlong)(int)param_2);

  shiftValue = param_3 + 0x10;
  maskValue = (1 << (shiftValue & 0x1f)) - 1;

  return (lowResult >> (shiftValue & 0x1f) |
         (int)((ulonglong)((longlong)(int)param_1 * (longlong)(int)param_2) >> 0x20) <<
         (0x20 - shiftValue & 0x1f)) +
         ((lowResult & maskValue) + ((int)(param_1 ^ param_2) >> 0x1f & maskValue) >> (shiftValue & 0x1f));
}

longlong FUN_80075bf4(int param_1,int param_2)

{

  return (longlong)param_1 * (longlong)param_2 >> 0xc;
}

longlong FUN_80075c14(int param_1,int param_2)

{

  return (longlong)param_1 * (longlong)param_2 >> 0x10;
}

undefined8 FUN_80075c54(int param_1,int param_2,int param_3)

{

  uint lowResult;
  uint shiftValue;
  int highResult;

  highResult = (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20);

  shiftValue = param_3 + 0xc;

  if ((int)(shiftValue * 0x4000000) < 0) {

    lowResult = highResult >> (shiftValue & 0x1f);
    highResult = highResult >> 0x1f;
  }
  else {

    lowResult = (uint)((longlong)param_1 * (longlong)param_2) >> (shiftValue & 0x1f);
    if (shiftValue * 0x4000000 != 0) {
      lowResult = lowResult | highResult << (-shiftValue & 0x1f);
    }
    highResult = highResult >> (shiftValue & 0x1f);
  }

  return CONCAT44(highResult,lowResult);
}

int FUN_80075d2c(ushort *param_1,int param_2)

{

  longlong interpolationValue;
  int resultValue;
  int *arrayPointer;
  uint lowIndex;
  uint highIndex;
  int *xArrayPointer;
  uint arraySize;
  uint currentIndex;
  int *yArrayPointer;
  int previousValue;

  xArrayPointer = *(int **)(param_1 + 2);
  yArrayPointer = *(int **)(param_1 + 4);
  arraySize = *param_1 - 1;
  currentIndex = arraySize & 0xffff;

  if (*xArrayPointer < param_2) {
    lowIndex = 0;
    if (param_2 < xArrayPointer[currentIndex]) {
      highIndex = arraySize;

      if (3 < currentIndex) {
        do {
          currentIndex = (int)((highIndex & 0xffff) + lowIndex) >> 1;
          arraySize = currentIndex;
          if ((xArrayPointer[currentIndex] <= param_2) && (lowIndex = currentIndex, arraySize = highIndex, param_2 == xArrayPointer[currentIndex])) {
            goto LAB_80075d7c;
          }
          highIndex = arraySize;
        } while (3 < (int)((arraySize & 0xffff) - lowIndex));
      }

      currentIndex = lowIndex;
      if (lowIndex < (arraySize & 0xffff)) {
        do {
          arrayPointer = xArrayPointer + lowIndex;
          lowIndex = currentIndex & 0xffff;
          if (param_2 < *arrayPointer) goto LAB_80075e38;
          currentIndex = currentIndex + 1;
          lowIndex = currentIndex & 0xffff;
        } while (lowIndex < (arraySize & 0xffff));
        lowIndex = currentIndex & 0xffff;
      }

LAB_80075e38:
      previousValue = (yArrayPointer + lowIndex)[-1];
      resultValue = (xArrayPointer + lowIndex)[-1];
      interpolationValue = (longlong)(yArrayPointer[lowIndex] - previousValue) * (longlong)(param_2 - resultValue);
      resultValue = xArrayPointer[lowIndex] - resultValue;
      resultValue = FUN_80086084((int)interpolationValue,(int)((ulonglong)interpolationValue >> 0x20),resultValue,resultValue >> 0x1f);
      resultValue = resultValue + previousValue;
    }
    else {

LAB_80075d7c:
      resultValue = yArrayPointer[currentIndex];
    }
  }
  else {

    resultValue = *yArrayPointer;
  }

  return resultValue;
}

undefined4 FUN_80075e90(uint param_1,int param_2,int param_3)

{

  int lowResult;
  uint highResult;
  uint shiftValue;

  shiftValue = param_3 + 0xc;

  if ((int)(shiftValue * 0x4000000) < 0) {

    highResult = param_1 << (shiftValue & 0x1f);
    lowResult = 0;
  }
  else {

    highResult = ((int)param_1 >> 0x1f) << (shiftValue & 0x1f);
    if (shiftValue * 0x4000000 != 0) {
      highResult = highResult | param_1 >> (-shiftValue & 0x1f);
    }
    lowResult = param_1 << (shiftValue & 0x1f);
  }

  return FUN_80086084(lowResult,highResult,param_2,param_2 >> 0x1f);
}

undefined8 FUN_80075ef8(int param_1,int param_2,int param_3,int param_4,int param_5)

{

  longlong multiplicationResult;
  uint shiftValue;
  uint lowResult;
  int highResult;

  multiplicationResult = (longlong)param_1 * (longlong)param_2 + (longlong)param_3 * (longlong)param_4;

  if (multiplicationResult < 0) {
    multiplicationResult = multiplicationResult + ((1 << (param_5 + 0xcU & 0x1f)) + -1);
  }

  highResult = (int)((ulonglong)multiplicationResult >> 0x20);
  shiftValue = param_5 + 0xc;

  if ((int)(shiftValue * 0x4000000) < 0) {

    lowResult = highResult >> (shiftValue & 0x1f);
    highResult = highResult >> 0x1f;
  }
  else {

    lowResult = (uint)multiplicationResult >> (shiftValue & 0x1f);
    if (shiftValue * 0x4000000 != 0) {
      lowResult = lowResult | highResult << (-shiftValue & 0x1f);
    }
    highResult = highResult >> (shiftValue & 0x1f);
  }

  return CONCAT44(highResult,lowResult);
}

int FUN_80075fac(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4,undefined2 *param_5
                )

{

  byte byteValue1;
  byte byteValue2;
  byte byteValue3;
  uint calculationValue;
  int resultValue;

  if (param_2 == 0) {

    byteValue1 = *(byte *)(param_1 + 0x68);
    byteValue2 = *(byte *)(param_1 + 0x6a);
    byteValue3 = *(byte *)(param_1 + 0x66);
  }
  else {

    byteValue1 = *(byte *)(param_1 + 0x69);
    byteValue2 = *(byte *)(param_1 + 0x6b);
    byteValue3 = *(byte *)(param_1 + 0x67);
  }

  calculationValue = ((uint)byteValue1 * 0xa000 + 0x5000) / 1000;
  *param_4 = (short)calculationValue;

  resultValue = (int)(((int)(calculationValue * 0x10000) >> 0x10) * (uint)byteValue2) / 0x14;
  *param_5 = (short)resultValue;

  resultValue = resultValue + ((uint)byteValue3 * 0xfe000) / 20000;
  *param_3 = (short)resultValue;

  return resultValue * 0x10000 >> 0x10;
}

uint FUN_80076070(int param_1,byte *param_2,undefined *param_3,undefined2 *param_4,
                 undefined2 *param_5)

{

  bool conditionFlag;
  int systemPointer;
  uint stateValue;

  *param_4 = 0;
  *param_5 = 0;

  switch(*(undefined *)(param_1 + 0x8a)) {
  case 0:
  case 3:
  case 4:

    *param_2 = 0;
    *param_3 = 1;
    break;
  case 1:

    *param_2 = 1;
    *param_3 = 0;
    break;
  case 2:

    stateValue = (uint)*(byte *)(param_1 + 0x51);
    *param_4 = (short)(((uint)*(byte *)(param_1 + 0x119) << 0xc) / 100);
    *param_3 = 1;

    systemPointer = FUN_80060e94(DAT_800af230);
    if ((*(ushort *)(systemPointer + 8) & 4) == 0) {

LAB_80076178:
      conditionFlag = stateValue < 5;
    }
    else {

      if (stateValue == 2) {

LAB_80076174:
        stateValue = 4;
        goto LAB_80076178;
      }
      if ((stateValue < 3) || (conditionFlag = stateValue == 3, stateValue = 4, conditionFlag)) {

        *param_4 = 0x800;
        goto LAB_80076174;
      }
      conditionFlag = true;
    }

    if (conditionFlag) {

      stateValue = (*(code_uint *)(&PTR_LAB_8008fb58)[stateValue])();
      return stateValue;
    }
  }

  return (uint)*param_2;
}

void FUN_80076240(undefined4 param_1,undefined4 param_2,int param_3)

{

  undefined *dataPointer;

  switch(param_1) {
  case 1:

    dataPointer = &LAB_800928ca_2;
    break;
  default:

    goto switchD_8007626c_caseD_2;
  case 5:

    dataPointer = &LAB_800928d6_2;
    break;
  case 0xc:

    dataPointer = &LAB_800928e2_2;
    break;
  case 0xd:

    dataPointer = &LAB_80092888;
    break;
  case 0x11:

    dataPointer = &DAT_800928a0;
    break;
  case 0x12:

    dataPointer = &DAT_80092900;
    *(undefined *)(param_3 + 0x5e) = 0x80;
    *(undefined *)(param_3 + 0x5f) = 0x80;
    break;
  case 0x15:

    dataPointer = &DAT_8009294c;
    break;
  case 0x1b:

    dataPointer = &LAB_80092890;
    break;
  case 0x1c:

    dataPointer = &LAB_80092898;
  }

  FUN_80077634(dataPointer,param_2,param_3);

switchD_8007626c_caseD_2:
  return;
}

void FUN_80076300(undefined4 param_1,undefined4 param_2,int param_3)

{

  undefined *dataPointer;

  switch(param_1) {
  case 1:

    dataPointer = &LAB_800929aa_2;
    break;
  default:

    goto switchD_8007632c_caseD_2;
  case 5:

    dataPointer = &LAB_800929b6_2;
    break;
  case 0xc:

    dataPointer = &LAB_800929c2_2;
    break;
  case 0xd:

    dataPointer = &LAB_80092968;
    break;
  case 0x11:

    dataPointer = &DAT_80092980;
    break;
  case 0x12:

    dataPointer = &DAT_800929e0;
    *(undefined *)(param_3 + 0x9e) = 0x80;
    *(undefined *)(param_3 + 0x9f) = 0x80;
    break;
  case 0x15:

    dataPointer = &DAT_80092a2c;
    break;
  case 0x1b:

    dataPointer = &LAB_80092970;
    break;
  case 0x1c:

    dataPointer = &LAB_80092978;
  }

  FUN_80077634(dataPointer,param_2,param_3);

switchD_8007632c_caseD_2:
  return;
}

void FUN_800763c0(undefined4 param_1,undefined4 param_2)

{

  FUN_80077634(&DAT_80092a48,param_2,param_1);

  return;
}

void FUN_800763e8(int param_1,int param_2)

{

  short *fieldPointer1;
  short *fieldPointer2;
  short fieldOffset;
  undefined4 processedValue;
  int intermediateValue;
  short *dataPointer;

  FUN_80076a54(param_1);
  FUN_80077634(&DAT_80092a48,param_2,param_1);
  dataPointer = &DAT_80092b1c;

  do {

    fieldPointer1 = dataPointer + 2;
    fieldPointer2 = dataPointer + 1;
    fieldOffset = *dataPointer;
    dataPointer = dataPointer + 3;

    processedValue = FUN_80076f2c((int)*fieldPointer1,*(undefined2 *)(param_2 + *fieldPointer2));
    *(undefined4 *)(param_1 + fieldOffset) = processedValue;
  } while (*dataPointer != -1);

  intermediateValue = FUN_80076f2c(0x16,*(undefined2 *)(param_2 + 0x16));
  processedValue = FUN_80076f2c(0x18,*(undefined2 *)(intermediateValue + 10));
  *(undefined4 *)(param_1 + 0x28) = processedValue;
  processedValue = FUN_80076f2c(0x19,*(undefined2 *)(intermediateValue + 0xc));
  *(undefined4 *)(param_1 + 0x2c) = processedValue;
  processedValue = FUN_80076f2c(0x1a,*(undefined2 *)(intermediateValue + 0xe));
  *(undefined4 *)(param_1 + 0x30) = processedValue;

  intermediateValue = FUN_80076f2c(0x17,*(undefined2 *)(param_2 + 0x18));
  processedValue = FUN_80076f2c(0x18,*(undefined2 *)(intermediateValue + 6));
  *(undefined4 *)(param_1 + 0x34) = processedValue;
  processedValue = FUN_80076f2c(0x19,*(undefined2 *)(intermediateValue + 8));
  *(undefined4 *)(param_1 + 0x38) = processedValue;

  return;
}

int FUN_80076500(undefined4 param_1,undefined param_2,undefined4 *param_3)

{

  int searchResult;
  int dataPointer;

  searchResult = FUN_80076748(5,param_2,0xe,param_1);

  if (param_3 != (undefined4 *)0x0) {
    if (searchResult == -1) {

      *param_3 = 0;
    }
    else {

      dataPointer = FUN_80076f2c(5,searchResult);
      *param_3 = *(undefined4 *)(dataPointer + 4);
    }
  }

  return searchResult;
}

int FUN_80076570(int param_1,undefined4 param_2,undefined4 *param_3)

{

  int searchResult;
  undefined4 fallbackValue;
  int dataPointer;
  uint typeIndex;
  undefined4 searchType;
  undefined4 dataType;

  dataType = 0xffffffff;
  searchType = 0xffffffff;
  typeIndex = 1;

  switch(param_1) {
  case 0:

    dataType = 0x1b;
    break;
  case 1:

    dataType = 0;
    break;
  case 2:

    dataType = 1;
    break;
  case 3:
  case 4:
  case 5:

    dataType = 0xf;
    typeIndex = param_1 - 2;
    break;
  case 6:

    dataType = 10;
    break;
  case 7:
  case 8:

    dataType = 9;
    typeIndex = param_1 - 6;
    break;
  case 9:

    dataType = 8;
    break;
  case 10:
  case 0xb:
  case 0xc:

    dataType = 0xe;
    typeIndex = param_1 - 9;
    break;
  case 0xd:
  case 0xe:
  case 0xf:

    dataType = 0x11;
    typeIndex = param_1 - 0xc;
    break;
  case 0x10:
  case 0x11:

    dataType = 0x13;
    typeIndex = param_1 - 0xf;
    break;
  case 0x12:
  case 0x13:
  case 0x14:

    dataType = 4;
    typeIndex = param_1 - 0x11;
    searchType = 0xb;
    goto switchD_800765c4_caseD_32;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:

    dataType = 0x15;
    typeIndex = param_1 - 0x14;
    break;
  case 0x1a:
  case 0x1b:
  case 0x1c:

    dataType = 0x14;
    typeIndex = param_1 - 0x19;
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:

    dataType = 0xb;
    typeIndex = param_1 - 0x1c;
    break;
  case 0x20:

    dataType = 7;
    break;
  case 0x21:

    dataType = 0x10;
    break;
  case 0x22:

    dataType = 5;
    typeIndex = 1;
    searchType = 0xe;
    goto switchD_800765c4_caseD_32;
  case 0x23:
  case 0x24:
  case 0x25:

    dataType = 0x12;
    typeIndex = param_1 - 0x22;
    break;
  case 0x26:

    dataType = 0x1c;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:

    dataType = 0x16;
    typeIndex = param_1 - 0x26;
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:

    dataType = 0xc;
    typeIndex = param_1 - 0x2d;
    break;
  default:

    goto switchD_800765c4_caseD_32;
  }
  searchType = 8;

switchD_800765c4_caseD_32:
  searchResult = FUN_80076748(dataType,typeIndex & 0xff,searchType,param_2);

  if (searchResult == -1) {

    fallbackValue = FUN_80060924("00000");
    searchResult = FUN_80076748(dataType,typeIndex & 0xff,searchType,fallbackValue);
  }

  if (param_3 != (undefined4 *)0x0) {
    if (searchResult == -1) {

      *param_3 = 0;
    }
    else {

      dataPointer = FUN_80076f2c(dataType,searchResult);
      *param_3 = *(undefined4 *)(dataPointer + 4);
    }
  }

  return searchResult;
}

int FUN_80076748(undefined4 param_1,char param_2,int param_3,int param_4)

{

  undefined4 dataPointer;
  int searchIndex;
  int *structurePointer;

  dataPointer = DAT_8009286c;
  searchIndex = FUN_80076818(param_1,param_4);

  if (searchIndex != -1) {
    while( true ) {

      structurePointer = (int *)FUN_80077d5c(dataPointer,param_1,searchIndex);

      if (*structurePointer != param_4) break;

      if ((*(char *)((int)structurePointer + param_3) == param_2) && (*(char *)(structurePointer + 1) != '\0')) {
        return searchIndex;
      }

      searchIndex = searchIndex + 1;
    }
  }

  return -1;
}

int FUN_80076818(undefined4 param_1,int param_2)

{

  undefined4 dataPointer;
  int currentIndex;
  int resultIndex;
  int *structurePointer;

  dataPointer = DAT_8009286c;
  currentIndex = FUN_80077e80(DAT_8009286c,param_1,param_2);
  resultIndex = -1;

  if (currentIndex != -1) {
    do {

      resultIndex = currentIndex;

      if (resultIndex < 1) {
        return resultIndex;
      }

      structurePointer = (int *)FUN_80077d5c(dataPointer,param_1,resultIndex + -1);
      currentIndex = resultIndex + -1;
    } while (param_2 == *structurePointer);
  }

  return resultIndex;
}

void FUN_800768c0(uint param_1)

{

  undefined4 parameter1;
  undefined4 parameter2;

  if (DAT_80092878 == 2) {

    parameter2 = 1;
    parameter1 = DAT_80092870;
  }
  else {

    if (DAT_80092878 < 3) {
      if (DAT_80092878 != 1) {

        parameter2 = 0x1f;
        parameter1 = 0;
        goto LAB_8007693c;
      }
    }
    else {

      parameter1 = 0;
      if (DAT_80092878 != 3) {

        parameter2 = 0x1f;
        goto LAB_8007693c;
      }
    }

    parameter2 = 0x1f;
    parameter1 = DAT_80092874;
  }

LAB_8007693c:
  FUN_80077d5c(parameter1,parameter2,(param_1 & 0x3ffffff) - 1);

  return;
}

bool FUN_80076954(undefined4 param_1,undefined4 param_2)

{

  bool validationResult;
  int operationResult;
  int dataPointer;

  dataPointer = 0;
  if (DAT_80092878 == 2) {

    dataPointer = DAT_8009286c + 0xf8;
  }
  else {

    if (DAT_80092878 < 3) {
      if (DAT_80092878 != 1) goto LAB_800769d8;
    }
    else if (DAT_80092878 != 3) goto LAB_800769d8;
    dataPointer = DAT_80092874 + 0x108;
  }

LAB_800769d8:
  operationResult = FUN_80077f54(dataPointer,param_1);
  validationResult = operationResult != 0;

  if (!validationResult) {

    operationResult = FUN_80077f38(dataPointer,0);
  }

  FUN_80077ff8();

  return validationResult;
}

void FUN_80076a20(int param_1)

{

  FUN_8008ce30(param_1,0,0x84);

  *(undefined *)(param_1 + 0x79) = 0xff;

  return;
}

void FUN_80076a54(int param_1)

{

  FUN_8008ce30(param_1,0,0xc4);

  *(undefined *)(param_1 + 0xb9) = 0xff;

  return;
}

int FUN_80076ae8(int param_1,undefined4 *param_2)

{

  undefined4 currentParameter;
  int processingResult;
  int nextIndex;
  int totalResult;
  uint loopCount;

  processingResult = 0;
  loopCount = (uint)(*(ushort *)(param_1 + 6) >> 1);
  totalResult = 0;

  if (loopCount != 0) {
    do {

      currentParameter = *param_2;
      param_2 = param_2 + 1;
      nextIndex = processingResult + 1;

      processingResult = FUN_80076b74(param_1,processingResult,currentParameter);
      totalResult = totalResult + processingResult;
      processingResult = nextIndex;
    } while (nextIndex < (int)loopCount);
  }

  return totalResult + loopCount * 8;
}

int FUN_80076b74(int param_1,int param_2,uint param_3)

{

  ushort structureSize;
  int fieldPointer;
  int additionalValue;
  int *pointerField;
  int calculatedOffset;
  uint originalValue;

  fieldPointer = param_2 * 8 + param_1;
  originalValue = *(uint *)(fieldPointer + 0xc);
  structureSize = *(ushort *)(param_1 + 6);

  *(short *)(fieldPointer + 0xc) = (short)param_3;
  calculatedOffset = (param_2 + (uint)(structureSize >> 1)) * 8;
  *(int *)(fieldPointer + 8) = *(int *)(fieldPointer + 8) + param_1;
  *(short *)(fieldPointer + 0xe) = (short)(originalValue / param_3);

  pointerField = (int *)(param_1 + calculatedOffset + 8);
  fieldPointer = *pointerField;
  additionalValue = 0;

  if (fieldPointer != 0) {

    *pointerField = fieldPointer + param_1;
    additionalValue = *(int *)(calculatedOffset + param_1 + 0xc);
  }

  return originalValue + additionalValue;
}

char * FUN_80076be4(int param_1,int param_2)

{

  int loopCounter;
  char *stringPointer;

  stringPointer = (char *)(param_1 + 2);
  loopCounter = 0;

  if (0 < param_2) {
    do {

      loopCounter = loopCounter + 1;

      stringPointer = stringPointer + *stringPointer + 2;
    } while (loopCounter < param_2);
  }

  return stringPointer + 1;
}

short * FUN_80076c40(int param_1,int param_2)

{

  int loopCounter;
  short *shortPointer;

  shortPointer = (short *)(param_1 + 10);
  loopCounter = 0;

  if (0 < param_2) {
    do {

      loopCounter = loopCounter + 1;

      shortPointer = shortPointer + *shortPointer + 2;
    } while (loopCounter < param_2);
  }

  return shortPointer + 1;
}

int FUN_80076c74(ushort *param_1,undefined4 param_2)

{

  ushort structureCount;
  int validationResult;
  int searchIndex;
  ushort *currentPointer;

  currentPointer = param_1 + 1;
  structureCount = *param_1;
  searchIndex = 0;

  if (structureCount != 0) {
    do {

      validationResult = FUN_8008cf00(param_2,(byte *)((int)currentPointer + 1));
      if (validationResult == 0) {
        return searchIndex;
      }

      searchIndex = searchIndex + 1;

      currentPointer = (ushort *)((int)currentPointer + *(byte *)currentPointer + 2);
    } while (searchIndex < (int)(uint)structureCount);
  }

  return -1;
}

void FUN_80076cf8(int param_1)

{

  DAT_80092884 = (uint)DAT_801c98e0;

  FUN_8005d8d4(L"_YgfijhIHKLJNHKQOSHKVT[HK^\\bHKec"[DAT_80092884 * 5 + 1],param_1);

  DAT_80092870 = param_1;

  FUN_80076ae8(param_1,&DAT_80092490);

  DAT_801c94e4 = (uint)*(ushort *)(param_1 + 4);

  return;
}

void FUN_80076d74(int param_1)

{

  DAT_80092878 = 2;

  DAT_80092884 = (uint)DAT_801c98e0;

  FUN_8005d8d4(*(undefined2 *)(&DAT_800925a4 + DAT_80092884 * 10),param_1);

  DAT_8009286c = param_1;
  DAT_8009287c = param_1;

  FUN_80076ae8(param_1,&LAB_80092412_2);

  DAT_801c94e4 = (uint)*(ushort *)(param_1 + 4);

  return;
}

undefined4 FUN_80076e04(undefined4 param_1)

{

  DAT_80092878 = 1;

  DAT_80092884 = (uint)DAT_801c98e0;

  FUN_8005d8d4(*(undefined2 *)(&DAT_800925a6 + DAT_80092884 * 10),param_1);

  DAT_80092874 = param_1;
  DAT_8009287c = param_1;

  FUN_80076ae8(param_1,&LAB_8009249c);

  return param_1;
}

undefined4 FUN_80076e88(undefined4 param_1)

{

  DAT_80092878 = 3;

  DAT_80092884 = (uint)DAT_801c98e0;

  FUN_8005d8d4(*(undefined2 *)(&DAT_800925a8 + DAT_80092884 * 10),param_1);

  DAT_80092874 = param_1;
  DAT_8009287c = param_1;

  FUN_80076ae8(param_1,&LAB_80092522_2);

  return param_1;
}

int FUN_80076f2c(undefined4 param_1,undefined4 param_2)

{

  return FUN_80077d5c(DAT_8009287c,param_1,param_2);
}

void FUN_80076f5c(undefined4 param_1,int param_2)

{

  FUN_80076a20(param_2);

  FUN_80076fc0(param_1,param_2);

  FUN_80077634(&DAT_80092c24,param_1,param_2);

  *(byte *)(param_2 + 0x7a) = *(byte *)(param_2 + 0x7a) | 1;

  return;
}

void FUN_80076fc0(int param_1,uint *param_2)

{

  undefined4 processingResult;
  uint *dataPointer;

  FUN_80076a20(param_2);

  if (DAT_80092878 == 2) {

    *(byte *)((int)param_2 + 0x7a) = *(byte *)((int)param_2 + 0x7a) | 0x40;
    *(undefined *)((int)param_2 + 0x79) = *(undefined *)(param_1 + 0x3a);
  }

  FUN_80077634(&LAB_80092bb2_2,param_1,param_2);

  processingResult = FUN_80076f2c(0x11,*(undefined2 *)(param_2 + 4));
  FUN_80077634(&DAT_800928a0,processingResult,param_2);

  processingResult = FUN_80076f2c(5,*(undefined2 *)(param_2 + 7));
  FUN_80077634(&LAB_800928d6_2,processingResult,param_2);

  processingResult = FUN_80076f2c(0xc,*(undefined2 *)(param_2 + 10));
  FUN_80077634(&LAB_800928e2_2,processingResult,param_2);

  processingResult = FUN_80076f2c(0x12,*(undefined2 *)((int)param_2 + 0x12));
  FUN_80077634(&DAT_80092900,processingResult,param_2);

  *(undefined *)((int)param_2 + 0x5e) = 0x80;
  *(undefined *)((int)param_2 + 0x5f) = 0x80;

  processingResult = FUN_80076f2c(1,*(undefined2 *)((int)param_2 + 6));
  FUN_80077634(&LAB_800928ca_2,processingResult,param_2);

  processingResult = FUN_80076f2c(0x15,*(undefined2 *)(param_2 + 5));
  FUN_80077634(&DAT_8009294c,processingResult,param_2);

  processingResult = FUN_80076f2c(0xd,*(undefined2 *)((int)param_2 + 0xe));
  FUN_80077634(&LAB_80092888,processingResult,param_2);

  processingResult = FUN_80076f2c(0x1b,*(undefined2 *)(param_2 + 0xd));
  FUN_80077634(&LAB_80092890,processingResult,param_2);

  processingResult = FUN_80076f2c(0x1c,*(undefined2 *)((int)param_2 + 0x36));
  FUN_80077634(&LAB_80092898,processingResult,param_2);

  dataPointer = (uint *)FUN_80076f2c(0x1d,*(undefined2 *)(param_2 + 0xe));
  *param_2 = *dataPointer | (*(byte *)((int)dataPointer + 7) & 0x1f) << 8;

  return;
}

void FUN_80077188(int param_1,int param_2)

{

  *(undefined2 *)(param_1 + 0x76) = *(undefined2 *)(param_2 + 0xb6);
  *(undefined *)(param_1 + 0x78) = *(undefined *)(param_2 + 0xb8);
  *(undefined *)(param_1 + 0x7a) = *(undefined *)(param_2 + 0xba);

  return;
}

void FUN_800771ac(int param_1,undefined4 param_2)

{

  undefined stackBuffer[182];
  undefined2 resultField1;
  undefined resultField2;
  undefined resultField3;

  FUN_800763e8(stackBuffer,param_1);

  FUN_80077214(stackBuffer,param_2);

  *(undefined2 *)(param_1 + 0x76) = resultField1;
  *(undefined *)(param_1 + 0x78) = resultField2;
  *(undefined *)(param_1 + 0x7a) = resultField3;

  return;
}

/*
 * ApplyCarStatsToDisplayBuffer (suggested name)
 *
 * Purpose: Builds car display data from car stats. Clears output buffer, then
 * applies data mappings and subsystem data (engine, tires, brakes, transmission,
 * suspension, weight, wing, turbo) to produce a display-ready buffer. Uses
 * table DAT_80092ca4/ca6 for variant handling; when entry is terminal, performs
 * full processing and returns.
 *
 * Parameters:
 *   param_1 - car data structure (from FUN_800763e8 or similar)
 *   param_2 - output buffer (0x1c0 bytes, cleared on entry)
 *
 * Return: 1 on success
 */
undefined4 FUN_80077214(int param_1,int param_2)

{

  undefined *dataPointer;
  undefined4 processingResult;
  int fieldValue;
  uint switchValue;
  ushort *dataPointer2;
  undefined2 *switchPointer;
  int multiplierValue;
  uint uVar4;
  int iVar3;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;

  switchPointer = &DAT_80092ca4;
  multiplierValue = 1000;
  FUN_8008ce30(param_2,0,0x1c0);
  dataPointer2 = &DAT_80092ca6;

  do {
    if (*(int *)(dataPointer2 + 1) == 0) {

      *(char *)(param_2 + 0x57) = (char)(((uint)*(byte *)(param_2 + 0x57) * (uint)*(ushort *)(*(int *)(param_1 + 0x3c) + 8)) / 1000);
      *(short *)(param_2 + 0x5a) = (short)((int)((int)*(short *)(param_2 + 0x5a) * (uint)*(byte *)(*(int *)(param_1 + 0x40) + 0xc)) / 100);

      FUN_80077634(&DAT_80092d6c,*(undefined4 *)(param_1 + 0x28),param_2);
      FUN_80077634(&DAT_80092d8c,*(undefined4 *)(param_1 + 0x2c),param_2);
      FUN_80077634(&DAT_80092820,*(undefined4 *)(param_1 + 0x30),param_2);
      FUN_80077634(&DAT_80092d7c,*(undefined4 *)(param_1 + 0x34),param_2);
      FUN_80077634(&DAT_80092dbc,*(undefined4 *)(param_1 + 0x38),param_2);

      FUN_80077af4(param_1,param_2);
      FUN_80077ac4(param_1,param_2);
      FUN_80077aac(param_1,param_2);
      FUN_80077a6c(param_1,param_2);
      FUN_800779fc(param_1,param_2);
      FUN_80077c9c();
      FUN_80077d2c(param_1,param_2);
      FUN_80077ce8(param_1,param_2);
      FUN_80077ca4(param_1,param_2);

      if ((*(byte *)(param_1 + 0xba) & 1) != 0) {
        *(undefined2 *)(param_2 + 0x1ae) = *(undefined2 *)(param_1 + 0x7a);
      }

      *(undefined2 *)(param_1 + 0xb6) = *(undefined2 *)(*(int *)(param_1 + 0x14) + 10);
      *(undefined *)(param_1 + 0xb8) = *(undefined *)(*(int *)(param_1 + 0x68) + 8);

      if (*(char *)(*(int *)(param_1 + 0x58) + 9) != '\0') {
        *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 2;
        *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x04';
      }

      *(short *)(param_2 + 0x1b0) = (short)multiplierValue;
      *(short *)(param_2 + 0x1ae) = *(short *)(param_2 + 0x1ae) * 10;

      if ((*(byte *)(param_1 + 0xba) & 0x80) != 0) {
        *(undefined *)(param_2 + 0x1aa) = 0;
      }

      *(undefined *)(param_2 + 0x134) = 0x94;
      *(undefined *)(param_2 + 0x13d) = 0x94;
      *(undefined *)(param_2 + 0x133) = 0xa6;
      *(undefined *)(param_2 + 0x13c) = 0xa6;

      *(undefined *)(param_2 + 0x71) = 0x28;
      *(undefined *)(param_2 + 0x7d) = 0x28;
      *(undefined *)(param_2 + 0x74) = 0x46;
      *(undefined *)(param_2 + 0x78) = 0x46;
      *(undefined *)(param_2 + 0x80) = 0x46;
      *(undefined *)(param_2 + 0x84) = 0x46;
      *(undefined *)(param_2 + 0x72) = 0x1e;
      *(undefined *)(param_2 + 0x76) = 0x1e;
      *(undefined *)(param_2 + 0x7e) = 0x1e;
      *(undefined *)(param_2 + 0x82) = 0x1e;

      *(undefined *)(param_2 + 0x44) = 6;
      *(undefined *)(param_2 + 0xb0) = 6;
      *(undefined *)(param_2 + 0xc3) = 6;
      *(undefined *)(param_2 + 0xd6) = 6;
      *(undefined *)(param_2 + 0xe9) = 6;

      *(undefined *)(param_2 + 0x12d) = 0;
      *(undefined *)(param_2 + 0x12e) = 0x82;
      *(undefined *)(param_2 + 0x12f) = 0xa4;
      *(undefined *)(param_2 + 0x130) = 0xff;
      *(undefined *)(param_2 + 0x131) = 200;
      *(undefined *)(param_2 + 0x132) = 0xac;
      *(undefined *)(param_2 + 0x136) = 0;
      *(undefined *)(param_2 + 0x137) = 0x82;
      *(undefined *)(param_2 + 0x138) = 0xa4;
      *(undefined *)(param_2 + 0x139) = 0xff;
      *(undefined *)(param_2 + 0x13a) = 200;
      *(undefined *)(param_2 + 0x13b) = 0xac;

      *(undefined *)(param_2 + 0x8e) = 8;
      *(undefined *)(param_2 + 0x9f) = 8;
      *(undefined *)(param_2 + 0x11a) = 4;
      *(undefined *)(param_2 + 0x123) = 4;
      *(undefined *)(param_2 + 300) = 4;
      *(undefined *)(param_2 + 0x135) = 4;
      *(undefined *)(param_2 + 0x118) = 9;

      return 1;
    }

    fieldValue = *(int *)(param_1 + (uint)*dataPointer2);
    FUN_80077634(*(int *)(dataPointer2 + 1),fieldValue,param_2);
    switchValue = 0;

    switch(*switchPointer) {
    case 7:
    case 9:
    case 10:
    case 0x13:
    case 0x14:
      uVar4 = (uint)*(byte *)(iVar3 + 9);
      break;
    case 0xb:
      FUN_80077634(&LAB_80092dea_2,*(undefined4 *)(param_1 + 0x54),param_2);
    case 8:
      uVar4 = (uint)*(byte *)(iVar3 + 0xb);
      break;
    case 0xc:
      uVar4 = (uint)*(byte *)(iVar3 + 0x12);
      break;
    case 0xe:
      puVar1 = &LAB_80092df2_2;
      uVar2 = *(undefined4 *)(param_1 + 0x5c);
      goto LAB_800772e8;
    case 0x10:
      uVar2 = *(undefined4 *)(param_1 + 100);
      puVar1 = &LAB_80092dfa_2;
LAB_800772e8:
      FUN_80077634(puVar1,uVar2,param_2);
    }
    iVar3 = uVar4 + 100;
    if (uVar4 == 0xff) {
      iVar3 = 0x207;
    }
    puVar5 = puVar5 + 4;
    puVar6 = puVar6 + 4;
    iVar7 = (iVar7 * iVar3) / 100;
  } while( true );
}

/*
 * ProcessDataMappingList (suggested name)
 *
 * Purpose: Executes a list of data transfer descriptors that map/transform data
 * from source (param_2) to destination (param_3). Each descriptor encodes
 * offsets, block size, and operation. List terminates with 0.
 *
 * Descriptor format (uint):
 *   bits 0-9:   dest offset
 *   bits 10-19: source offset
 *   bits 20-23: block format (0=1x1, 1=2x1, 2=4x1, 3=1x4, 4=1x6, 5=1x8, 6=1x16,
 *               7=2x8, 8=2x16)
 *   bits 24-31: mode (0=scale/100, 1=scale/1000, 2=add array, 3=add single, 4=raw copy)
 *
 * Parameters:
 *   param_1 - descriptor array (0-terminated)
 *   param_2 - source base address
 *   param_3 - destination base address
 */
void FUN_80077634(uint *param_1,int param_2,int param_3)

{

  uint structureValue;
  undefined4 processingResult;
  uchar *dataPointer1;
  uchar *dataPointer2;
  int counter1;
  int counter2;

  counter2 = 0;
  structureValue = *param_1;
  counter1 = 0;

  do {

    if (structureValue == 0) {
      return;
    }

    structureValue = *param_1;

    dataPointer2 = (uchar *)(param_2 + (structureValue >> 10 & 0x3ff));
    dataPointer1 = (uchar *)(param_3 + (structureValue & 0x3ff));

    switch(structureValue >> 0x14 & 0xf) {
    case 0:

      counter2 = 1;
      counter1 = 1;
      break;
    case 1:

      counter2 = 2;
      counter1 = 1;
      break;
    case 2:

      counter2 = 4;
      counter1 = 1;
      break;
    case 3:

      counter2 = 1;
      counter1 = 4;
      break;
    case 4:

      counter2 = 1;
      counter1 = 6;
      break;
    case 5:

      counter2 = 1;
      counter1 = 8;
      break;
    case 6:

      counter2 = 1;
      goto LAB_8007772c;
    case 7:

      counter2 = 2;
      counter1 = 8;
      break;
    case 8:

      counter2 = 2;
LAB_8007772c:
      counter1 = 0x10;
    }

    switch(structureValue >> 0x18) {
    case 0:

      processingResult = 100;
      goto LAB_80077784;
    case 1:

      processingResult = 1000;
LAB_80077784:
      FUN_800778e4(processingResult,counter2,counter1,dataPointer2,dataPointer1);
      break;
    case 2:

      FUN_80077880(counter2,counter1,dataPointer2,dataPointer1);
      break;
    case 3:

      FUN_80077800(counter2,dataPointer2,dataPointer1);
      break;
    case 4:

      bcopy(dataPointer2,dataPointer1,counter2 * counter1);
    }

    param_1 = param_1 + 1;
    structureValue = *param_1;
  } while( true );
}

void FUN_80077800(int param_1,int *param_2,int *param_3)

{

  if (param_1 == 2) {

    *(short *)param_3 = *(short *)param_3 + *(short *)param_2;
    return;
  }

  if (param_1 < 3) {
    if (param_1 != 1) {
      return;
    }

    *(char *)param_3 = *(char *)param_3 + *(char *)param_2;
    return;
  }

  if (param_1 != 4) {
    return;
  }

  *param_3 = *param_3 + *param_2;

  return;
}

void FUN_80077880(int param_1,int param_2,undefined4 param_3,int param_4)

{

  if (param_2 != 0) {
    do {

      FUN_80077800(param_1,param_3,param_4);

      param_2 = param_2 + -1;
      param_4 = param_4 + param_1;
    } while (param_2 != 0);
  }

  return;
}

void FUN_800778e4(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{

  if (param_3 != 0) {
    do {

      if (param_2 == 2) {

        *(ushort *)param_5 = (ushort)((int)((uint)*(ushort *)param_5 * (uint)*(ushort *)param_4) / param_1);
      }
      else if (param_2 < 3) {
        if (param_2 == 1) {

          *(char *)param_5 = (char)(((int)*(char *)param_5 * (int)*(char *)param_4) / param_1);
        }
      }
      else if (param_2 == 4) {

        *param_5 = (*param_5 * *param_4) / param_1;
      }

      param_4 = (int *)((int)param_4 + param_2);
      param_3 = param_3 + -1;
      param_5 = (int *)((int)param_5 + param_2);
    } while (param_3 != 0);
  }

  return;
}

int FUN_800779c4(int param_1,int param_2,int param_3,int param_4)

{

  if (1 < param_3) {

    return param_1 + ((param_2 - param_1) * (param_4 + -1)) / (param_3 + -1);
  }

  return param_1;
}

void FUN_800779fc(int param_1,int param_2)

{

  undefined interpolatedValue1;
  undefined interpolatedValue2;
  int dataPointer;

  dataPointer = *(int *)(param_1 + 8);
  interpolatedValue2 = *(undefined *)(param_1 + 0x91);

  interpolatedValue1 = FUN_800779c4(*(undefined *)(dataPointer + 10),*(undefined *)(dataPointer + 0xb),*(undefined *)(dataPointer + 9),*(undefined *)(param_1 + 0x90));
  *(undefined *)(param_2 + 0x2e) = interpolatedValue1;

  interpolatedValue2 = FUN_800779c4(*(undefined *)(dataPointer + 0xe),*(undefined *)(dataPointer + 0xf),*(undefined *)(dataPointer + 0xd),interpolatedValue2);
  *(undefined *)(param_2 + 0x2f) = interpolatedValue2;

  return;
}

void FUN_80077a6c(int param_1,int param_2)

{

  undefined2 *sourcePointer;
  int targetPointer;
  int sourceIndex;
  int loopCounter;

  loopCounter = 0;
  targetPointer = param_2;
  sourceIndex = param_1;

  do {

    sourcePointer = (undefined2 *)(sourceIndex + 0x7c);
    sourceIndex = sourceIndex + 2;
    loopCounter = loopCounter + 1;

    *(undefined2 *)(targetPointer + 0x18) = *sourcePointer;
    targetPointer = targetPointer + 2;
  } while (loopCounter < 8);

  *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(param_1 + 0x8c);
  *(undefined *)(param_2 + 0x1ab) = *(undefined *)(param_1 + 0x8e);

  return;
}

void FUN_80077aac(int param_1,int param_2)

{

  *(undefined *)(param_2 + 0x88) = *(undefined *)(param_1 + 0x92);
  *(undefined *)(param_2 + 0x89) = *(undefined *)(param_1 + 0x93);

  return;
}

void FUN_80077ac4(undefined4 param_1,undefined4 param_2)

{

  FUN_80077634(&DAT_80092e08,param_1,param_2);

  return;
}

void FUN_80077af4(int param_1,int param_2)

{

  undefined interpolatedValue1;
  undefined interpolatedValue2;
  undefined interpolatedValue3;
  undefined interpolatedValue4;
  undefined interpolatedValue5;
  undefined interpolatedValue6;
  undefined interpolatedValue7;
  undefined interpolatedValue8;
  undefined interpolatedValue9;
  int dataPointer;

  FUN_80077634(&DAT_80092e24,param_1,param_2);

  dataPointer = *(int *)(param_1 + 0x20);
  interpolatedValue9 = *(undefined *)(param_1 + 0xaa);
  interpolatedValue7 = *(undefined *)(param_1 + 0xa5);
  interpolatedValue8 = *(undefined *)(param_1 + 0xa6);
  interpolatedValue1 = *(undefined *)(param_1 + 0xa7);
  interpolatedValue2 = *(undefined *)(param_1 + 0xa8);
  interpolatedValue3 = *(undefined *)(param_1 + 0xa9);
  interpolatedValue4 = *(undefined *)(dataPointer + 0x27);
  interpolatedValue5 = *(undefined *)(param_1 + 0xab);

  interpolatedValue6 = FUN_800779c4(*(undefined *)(dataPointer + 0x28),*(undefined *)(dataPointer + 0x29),interpolatedValue4,*(undefined *)(param_1 + 0xa4));
  *(undefined *)(param_2 + 0x73) = interpolatedValue6;

  interpolatedValue7 = FUN_800779c4(*(undefined *)(dataPointer + 0x2b),*(undefined *)(dataPointer + 0x2c),interpolatedValue4,interpolatedValue7);
  *(undefined *)(param_2 + 0x75) = interpolatedValue7;

  interpolatedValue7 = *(undefined *)(dataPointer + 0x2e);
  interpolatedValue8 = FUN_800779c4(*(undefined *)(dataPointer + 0x2f),*(undefined *)(dataPointer + 0x30),interpolatedValue7,interpolatedValue8);
  *(undefined *)(param_2 + 0x77) = interpolatedValue8;

  interpolatedValue7 = FUN_800779c4(*(undefined *)(dataPointer + 0x32),*(undefined *)(dataPointer + 0x33),interpolatedValue7,interpolatedValue1);
  *(undefined *)(param_2 + 0x79) = interpolatedValue7;

  interpolatedValue7 = *(undefined *)(dataPointer + 0x35);
  interpolatedValue8 = FUN_800779c4(*(undefined *)(dataPointer + 0x36),*(undefined *)(dataPointer + 0x37),interpolatedValue7,interpolatedValue2);
  *(undefined *)(param_2 + 0x7f) = interpolatedValue8;

  interpolatedValue7 = FUN_800779c4(*(undefined *)(dataPointer + 0x39),*(undefined *)(dataPointer + 0x3a),interpolatedValue7,interpolatedValue3);
  *(undefined *)(param_2 + 0x81) = interpolatedValue7;

  interpolatedValue7 = *(undefined *)(dataPointer + 0x3c);
  interpolatedValue9 = FUN_800779c4(*(undefined *)(dataPointer + 0x3d),*(undefined *)(dataPointer + 0x3e),interpolatedValue7,interpolatedValue9);
  *(undefined *)(param_2 + 0x83) = interpolatedValue9;

  interpolatedValue9 = FUN_800779c4(*(undefined *)(dataPointer + 0x40),*(undefined *)(dataPointer + 0x41),interpolatedValue7,interpolatedValue5);
  *(undefined *)(param_2 + 0x85) = interpolatedValue9;

  interpolatedValue9 = FUN_800779c4(*(undefined *)(dataPointer + 0x44),*(undefined *)(dataPointer + 0x45),*(undefined *)(dataPointer + 0x43),*(undefined *)(param_1 + 0xac));
  *(undefined *)(param_2 + 0x6f) = interpolatedValue9;

  interpolatedValue9 = FUN_800779c4(*(undefined *)(dataPointer + 0x48),*(undefined *)(dataPointer + 0x49),*(undefined *)(dataPointer + 0x47),*(undefined *)(param_1 + 0xad));
  *(undefined *)(param_2 + 0x7b) = interpolatedValue9;

  return;
}

void FUN_80077c9c(void)

{

  return;
}

void FUN_80077ca4(int param_1,int param_2)

{

  undefined interpolatedValue;
  int dataPointer;

  dataPointer = *(int *)(param_1 + 0x70);

  interpolatedValue = FUN_800779c4(*(undefined *)(dataPointer + 0xc),*(undefined *)(dataPointer + 0xd),*(undefined *)(dataPointer + 9),*(undefined *)(param_1 + 0xb4));

  *(undefined *)(param_2 + 0x1a6) = interpolatedValue;

  return;
}

void FUN_80077ce8(int param_1,int param_2)

{

  undefined interpolatedValue;
  int dataPointer;

  dataPointer = *(int *)(param_1 + 0x74);

  interpolatedValue = FUN_800779c4(*(undefined *)(dataPointer + 0xd),*(undefined *)(dataPointer + 0xe),*(undefined *)(dataPointer + 10),*(undefined *)(param_1 + 0xb5));

  *(undefined *)(param_2 + 0x1a2) = interpolatedValue;

  return;
}

void FUN_80077d2c(undefined4 param_1,undefined4 param_2)

{

  FUN_80077634(&LAB_80092e4e_2,param_1,param_2);

  return;
}

int FUN_80077d5c(int param_1,int param_2,undefined4 param_3)

{

  return FUN_80077f38(param_1 + param_2 * 8 + 8,param_3);
}

uint FUN_80077e80(int param_1,int param_2,uint param_3)

{

  int searchIndex;
  uint *dataPointer;
  uint middleIndex;
  uint upperBound;
  uint newUpperBound;
  uint lowerBound;

  lowerBound = 0xffffffff;
  upperBound = (uint)*(ushort *)(param_1 + param_2 * 8 + 0xe);
  searchIndex = upperBound - 1;

  do {

    middleIndex = searchIndex >> 1;

    dataPointer = (uint *)FUN_80077d5c(param_1,param_2,middleIndex);

    if (*dataPointer == param_3) {
      return middleIndex;
    }

    newUpperBound = middleIndex;
    if (*dataPointer < param_3) {
      newUpperBound = upperBound;
      lowerBound = middleIndex;
    }

    searchIndex = lowerBound + newUpperBound;
    upperBound = newUpperBound;
  } while (lowerBound + 1 != newUpperBound);

  return 0xffffffff;
}

int FUN_80077f38(int *param_1,int param_2)

{

  return *param_1 + (uint)*(ushort *)(param_1 + 1) * param_2;
}

uint * FUN_80077f54(int param_1,uint param_2)

{

  int searchIndex;
  uint *dataPointer;
  uint middleIndex;
  uint upperBound;
  uint newUpperBound;
  uint lowerBound;

  lowerBound = 0xffffffff;
  searchIndex = *(ushort *)(param_1 + 6) - 1;
  upperBound = (uint)*(ushort *)(param_1 + 6);

  do {

    middleIndex = searchIndex >> 1;

    dataPointer = (uint *)FUN_80077f38(param_1,middleIndex);

    if (*dataPointer == param_2) {
      return dataPointer;
    }

    newUpperBound = middleIndex;
    if (*dataPointer < param_2) {
      newUpperBound = upperBound;
      lowerBound = middleIndex;
    }

    searchIndex = lowerBound + newUpperBound;
    upperBound = newUpperBound;
  } while (lowerBound + 1 != newUpperBound);

  return (uint *)0x0;
}

void FUN_80077ff8(void)

{

  FUN_80076fc0(0,NULL);

  return;
}

int FUN_80078038(int *param_1,int param_2)

{

  return *param_1 + (uint)*(ushort *)(param_1 + 1) * param_2;
}

uint FUN_80078054(int param_1,uint param_2)

{

  uint upperBound;
  uint *dataPointer;
  uint middleIndex;
  uint currentUpperBound;
  uint lowerBound;

  upperBound = (uint)*(ushort *)(param_1 + 6);
  lowerBound = 0;

  while( true ) {

    currentUpperBound = upperBound;
    middleIndex = (int)(lowerBound + currentUpperBound) >> 1;

    dataPointer = (uint *)FUN_80078038(param_1,middleIndex);

    if (param_2 == *dataPointer) {
      return middleIndex;
    }

    if (lowerBound == currentUpperBound) break;

    upperBound = middleIndex;
    if (*dataPointer < param_2) {
      upperBound = currentUpperBound;
      lowerBound = middleIndex;
    }
  }

  return 0xffffffff;
}

undefined4 FUN_800780f8(undefined4 param_1)

{

  int searchResult;
  undefined4 accessResult;

  searchResult = FUN_80078054(0,0);

  if (searchResult < 0) {

    accessResult = 0;
  }
  else {

    accessResult = FUN_80078038((int *)param_1,searchResult);
  }

  return accessResult;
}

int FUN_80078138(int param_1)

{

  int currentValue;
  int elementCount;
  int *arrayPointer;

  elementCount = 0;
  arrayPointer = (int *)(param_1 + 4);

  while ((elementCount < 0x10 && (currentValue = *arrayPointer, arrayPointer = arrayPointer + 1, currentValue != 0))) {
    elementCount = elementCount + 1;
  }

  return elementCount;
}

void FUN_8007816c(int param_1)

{

  undefined4 stringPointer;

  if (DAT_80092878 == 2) {

    stringPointer = *(undefined4 *)(DAT_80092870 + (uint)(*(ushort *)(DAT_80092870 + 6) >> 1) * 8 + 8);
  }
  else {

    stringPointer = *(undefined4 *)((uint)(*(ushort *)(param_1 + 6) >> 1) * 8 + param_1 + 0xf8);
  }

  FUN_80076be4((int)stringPointer,0);

  return;
}

uint FUN_800781e0(int param_1)

{

  uint upperBound;
  uint searchValue;
  uint middleIndex;
  ushort *dataPointer;
  undefined4 stringPointer;
  uint currentUpperBound;
  uint lowerBound;

  if (DAT_80092878 == 2) {

    stringPointer = *(undefined4 *)(DAT_80092870 + (uint)(*(ushort *)(DAT_80092870 + 6) >> 1) * 8 + 8);
  }
  else {

    stringPointer = *(undefined4 *)((uint)(*(ushort *)(param_1 + 6) >> 1) * 8 + param_1 + 0xf8);
  }

  searchValue = FUN_80076c74(stringPointer,0);
  middleIndex = 0xffffffff;

  if (-1 < (int)searchValue) {

    param_1 = param_1 + 0xf8;
    if (DAT_80092878 == 2) {
      param_1 = DAT_80092870 + 8;
    }

    upperBound = (uint)*(ushort *)(param_1 + 6);
    lowerBound = 0;

    while( true ) {

      currentUpperBound = upperBound;
      middleIndex = (int)(lowerBound + currentUpperBound) >> 1;

      dataPointer = (ushort *)FUN_80078038(param_1,middleIndex);

      if (searchValue == *dataPointer) break;

      if (lowerBound == currentUpperBound) {
        return 0xffffffff;
      }

      upperBound = middleIndex;
      if ((int)(uint)*dataPointer < (int)searchValue) {
        upperBound = currentUpperBound;
        lowerBound = middleIndex;
      }
    }
  }

  return middleIndex;
}

undefined4 FUN_8007830c(int param_1)

{

  int searchResult;
  undefined4 accessResult;

  searchResult = FUN_800781e0(param_1);

  if (searchResult < 0) {

    accessResult = 0;
  }
  else {

    param_1 = param_1 + 0xf8;
    if (DAT_80092878 == 2) {
      param_1 = DAT_80092870 + 8;
    }

    accessResult = FUN_80078038((int *)param_1,searchResult);
  }

  return accessResult;
}

void FUN_80078370(void)

{

  bool voiceActive;
  dword *voicePointer;
  int voiceIndex;
  int iterationCount;

  iterationCount = 0;

  if (DAT_80092e88 != 0) {
    do {

      voiceActive = false;

      if (0x675bff < iterationCount) {
        return;
      }

      voiceIndex = 0;
      voicePointer = &VOICE_00_LEFT_RIGHT;
      do {

        if (*(short *)(voicePointer + 3) != 0) {
          voiceActive = true;
        }

        voiceIndex = voiceIndex + 1;
        voicePointer = voicePointer + 4;
      } while (voiceIndex < 0x18);

      iterationCount = iterationCount + 1;
    } while (voiceActive);
  }

  return;
}

void FUN_800783dc(void)

{

  if (DAT_80092e88 != 0) {

    FUN_80078408();
  }

  return;
}
