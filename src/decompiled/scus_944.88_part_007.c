// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_006.h"
#include "scus_944.88_part_007.h"
#include <stdint.h>
#include <string.h>

// Suppress strncmp declaration from system header to use custom one
#define strncmp __strncmp_system
#include "scus_944.88_part_009.h"
#undef strncmp

// Forward declarations
int FUN_8008bcd8(int dmaChannel, func callback);
undefined4 *FUN_800834bc(void);

// Static inline wrapper functions for functions called without parameters
static inline int FUN_8007f7f4_no_params(void) {
  return FUN_8007f7f4((int)(uintptr_t)DAT_801c93ec, 0, 0);
}

static inline int FUN_8007e738_no_params(void) {
  return FUN_8007e738((int)(uintptr_t)DAT_801c93ec, 0, 0);
}

void FUN_8007e780(undefined4 renderContext,undefined4 renderFlags,short *rectangleData)

{
  short x;
  short y;
  short height;
  short *outputBuffer;
  int gpuCommand;
  short width;

  x = *rectangleData;
  y = rectangleData[1];
  width = rectangleData[2];
  height = rectangleData[3];
  if ((width != 0) && (height != 0)) {
    if (height == 1) {

      outputBuffer = (short *)FUN_8007f7f4_no_params();
      *outputBuffer = x;
      outputBuffer[1] = y;
      outputBuffer[2] = x + width;
      outputBuffer[3] = y;
    }
    else if (width == 1) {

      outputBuffer = (short *)FUN_8007f7f4_no_params();
      *outputBuffer = x;
      outputBuffer[1] = y;
      outputBuffer[2] = x;
      outputBuffer[3] = y + height;
    }
    else {

      gpuCommand = FUN_8007e738_no_params();
      width = x + width + -1;
      *(short *)(gpuCommand + 8) = width;
      *(short *)(gpuCommand + 0xc) = width;
      width = y + height + -1;
      *(short *)(gpuCommand + 0x14) = x;
      *(short *)(gpuCommand + 0x16) = y;
      *(short *)(gpuCommand + 4) = x;
      *(short *)(gpuCommand + 6) = y;
      *(short *)(gpuCommand + 10) = y;
      *(short *)(gpuCommand + 0xe) = width;
      *(short *)(gpuCommand + 0x10) = x;
      *(short *)(gpuCommand + 0x12) = width;
    }
  }
  return;
}

int FUN_8007e864(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 9;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x2c000000;
  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x28;
  return result;
}

void FUN_8007e8a0(void)

{
  func **callbackArray;
  ulong *destinationBuffer;
  ulong *sourceBuffer;
  long *systemData;
  ulong *currentDestination;
  func *callbackFunction;
  ulong value1;
  ulong value2;
  ulong value3;
  func **callbackArray2;
  ulong *currentSource;
  ulong localBuffer [2];
  func *localCallback;
  ulong localData [24];
  ulong stackValue;
  func **ppfVar10;
  func *local_80[4];
  long *plVar6;
  func **ppfVar1;
  func *callbackFunc;
  uint uVar7;
  uint *puVar11;
  long lVar4;
  ulong uStack_1c[12];

  systemData = (long *)&DAT_801f06e0;
  currentSource = &DAT_80090530;
  destinationBuffer = localBuffer;
  do {
    currentDestination = destinationBuffer;
    sourceBuffer = currentSource;
    value1 = sourceBuffer[1];
    value2 = sourceBuffer[2];
    value3 = sourceBuffer[3];
    *currentDestination = *sourceBuffer;
    currentDestination[1] = value1;
    currentDestination[2] = value2;
    currentDestination[3] = value3;
    currentSource = sourceBuffer + 4;
    destinationBuffer = currentDestination + 4;
  } while (sourceBuffer + 4 != (ulong *)0x80090590);
  value1 = sourceBuffer[5];
  value2 = sourceBuffer[6];
  currentDestination[4] = 0xf0000011;
  currentDestination[5] = value1;
  currentDestination[6] = value2;
  FUN_8008ce30(&DAT_801f06e0,0,0x58c);
  DAT_801f0710 = &LAB_8007eacc;
  DAT_801f0714 = 0xfffe0000;
  DAT_801f097f = 0;
  DAT_801f0981 = 1;
  DAT_801f0be3 = 0x10;
  DAT_801f0be5 = 1;
  FUN_8008c918();
  currentSource = localBuffer;
  ppfVar10 = (func **)local_80;
  plVar6 = systemData;
  puVar11 = (uint *)localBuffer;
  do {
    plVar6 = plVar6 + 1;
    ppfVar1 = ppfVar10 + -1;
    callbackFunc = *ppfVar10;
    ppfVar10 = ppfVar10 + 3;
    uVar7 = *puVar11;
    puVar11 = puVar11 + 3;
    lVar4 = OpenEvent(uVar7,(long)ppfVar1[-1],0x1000,callbackFunc);
    *plVar6 = lVar4;
    EnableEvent(lVar4);
  } while (puVar11 != (uint *)&uStack_1c[12]);
  FUN_8008c948();
  FUN_80083030(&DAT_801f0688,&DAT_801f0708);
  return;
}

undefined4 FUN_8007ea68(void)

{
  DAT_801f0718 = DAT_801f0718 | 1;
  return 0;
}

undefined4 FUN_8007ea70(void)

{
  DAT_801f0718 = DAT_801f0718 | 2;
  return 0;
}

int FUN_8007f01c(int textureData,int commandBuffer,uint commandType)

{
  undefined2 *texturePointer;
  short textureY;
  undefined2 textureX;
  uint alignment1;
  int alignedValue;
  uint alignment2;
  uint *alignedPointer;
  int gpuBuffer;
  uint textureFlags;
  ushort textureMode;

  gpuBuffer = DAT_801c93ec;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedValue = *(int *)((commandBuffer + 2U) - alignment1);
  *(undefined *)(DAT_801c93ec + 3) = 9;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (alignedValue << (3 - alignment1) * 8 | textureFlags & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;
  textureMode = 0x1700;
  if (*(char *)(textureData + 0xf) == '\0') {
    textureMode = 0xf00;
  }
  textureY = *(short *)(textureData + 0x14);
  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x2c000000;
  *(short *)(DAT_801c93ec + 0xc) = textureY;
  texturePointer = (undefined2 *)(DAT_801c93ec + 0xe);
  DAT_801c93ec = DAT_801c93ec + 0x28;
  *texturePointer = *(undefined2 *)(textureData + 0x10);
  textureX = *(undefined2 *)(textureData + 0x12);
  *(short *)(gpuBuffer + 0x14) = textureY + 0xf;
  *(ushort *)(gpuBuffer + 0x1c) = textureY + textureMode;
  *(ushort *)(gpuBuffer + 0x24) = textureY + (textureMode | 0xf);
  *(undefined2 *)(gpuBuffer + 0x16) = textureX;
  return gpuBuffer + 4;
}

void FUN_8007f0a4(undefined4 *dataStructure,undefined4 value1,undefined4 value2,undefined flag)

{
  *dataStructure = value1;
  dataStructure[4] = value2;
  *(undefined *)((int)dataStructure + 0x23) = flag;
  return;
}

void FUN_8007f0b4(int textureData,int x,int y,int size,undefined2 flags)

{
  *(short *)(textureData + 4) = (short)x;
  *(short *)(textureData + 6) = (short)y;
  *(short *)(textureData + 8) = (short)(size >> 2);
  *(short *)(textureData + 0x20) = (short)(size >> 4);
  *(ushort *)(textureData + 0xc) = (ushort)(x >> 6) | (ushort)((y >> 8) << 4);
  *(undefined2 *)(textureData + 10) = flags;
  return;
}

void FUN_8007f0ec(int textureData)

{
  undefined2 textureX;
  undefined2 textureY;
  undefined2 textureWidth;
  undefined2 textureHeight;

  textureX = (undefined2)((*(ushort *)(textureData + 0xe) & 0x3f) << 4);
  textureWidth = 0x10;
  textureHeight = 1;
  textureY = (undefined2)((*(ushort *)(textureData + 0xe) & 0x7fc0) >> 6);
  FUN_8007ba70(&textureX, &DAT_800a0a68, 0);
  return;
}

void FUN_8007f148(undefined4 *dataStructure)

{
  FUN_8007ba70(dataStructure + 1, *dataStructure, 0);
  return;
}

void FUN_8007f174(int renderStructure)

{
  *(undefined4 *)(renderStructure + 0x14) = 0;
  *(undefined2 *)(renderStructure + 0x1e) = 0;
  *(undefined2 *)(renderStructure + 0x1c) = 0;
  *(undefined4 *)(renderStructure + 0x18) = *(undefined4 *)(renderStructure + 0x10);
  return;
}

undefined4 * FUN_8007f18c(int renderData,uint renderFlags)

{
  undefined uVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int param_1;
  int param_2;
  
  param_1 = renderData;
  param_2 = renderFlags;
  int iVar15;

  uVar13 = 0;
  uVar10 = 1;
  puVar6 = *(undefined4 **)(param_1 + 0x14);
  puVar5 = (undefined4 *)0x0;
  while( true ) {
    puVar8 = puVar6;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_1 + 0x18);
      *(undefined4 **)(param_1 + 0x18) = puVar8 + 6;
      puVar6 = (undefined4 *)(param_1 + 0x14);
      if ((puVar5 != (undefined4 *)0x0) && (puVar6 = puVar5, uVar13 != 0)) {
        puVar6 = puVar5 + 1;
      }
      *puVar6 = puVar8;
      sVar9 = *(short *)(param_1 + 0x1e);
      iVar11 = (int)sVar9;
      sVar2 = *(short *)(param_1 + 0x20);
      sVar3 = *(short *)(param_1 + 0xc);
      uVar4 = *(undefined2 *)(param_1 + 0xe);
      iVar7 = *(short *)(param_1 + 0x1c) * 0x10;
      if (*(char *)(param_1 + 0x23) == '\0') {
        iVar11 = iVar11 << 4;
      }
      else if (iVar11 < 10) {
        iVar11 = iVar11 * 0x18;
      }
      else {
        iVar11 = (iVar11 + -10) * 0x18 + 0x100;
      }
      iVar14 = ((int)*(short *)(param_1 + 4) & 0x3fU) * 4 + iVar7;
      iVar15 = ((int)*(short *)(param_1 + 6) & 0xffU) + iVar11;
      iVar12 = *(short *)(param_1 + 0x1c) + 1;
      *(short *)((int)puVar8 + 10) = (short)iVar11;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(short *)(puVar8 + 3) = (short)param_2;
      *(short *)(puVar8 + 2) = (short)iVar7;
      *(undefined *)((int)puVar8 + 0xe) = 0;
      uVar1 = *(undefined *)(param_1 + 0x23);
      *(undefined2 *)(puVar8 + 4) = uVar4;
      *(ushort *)((int)puVar8 + 0x12) =
           sVar3 + (short)((uint)iVar14 >> 8) + ((ushort)(iVar15 >> 4) & 0x10);
      *(char *)(puVar8 + 5) = (char)iVar14;
      *(char *)((int)puVar8 + 0x15) = (char)iVar15;
      *(undefined *)((int)puVar8 + 0xf) = uVar1;
      if (sVar2 <= iVar12) {
        iVar12 = 0;
        sVar9 = sVar9 + 1;
      }
      *(short *)(param_1 + 0x1c) = (short)iVar12;
      *(short *)(param_1 + 0x1e) = sVar9;
      return puVar8;
    }
    uVar13 = param_2 & uVar10;
    puVar5 = puVar8;
    if (uVar13 != 0) {
      puVar5 = puVar8 + 1;
    }
    if (param_2 == *(ushort *)(puVar8 + 3)) break;
    uVar10 = uVar10 << 1;
    puVar6 = (undefined4 *)*puVar5;
    puVar5 = puVar8;
  }
  return puVar8;
}

int FUN_8007f2d4(int *textureData,int x,int y)

{
  return *textureData + y * *(short *)(textureData + 8) * 8 + (x >> 1);
}

undefined4 FUN_8007f5a8(int systemId)

{
  undefined4 interruptState;
  int *systemData;
  undefined4 status;

  interruptState = FUN_80081cf8(0);
  status = 5;
  systemData = (int *)(&DAT_801f0724 + systemId * 0x264);
  if ((((&DAT_801f0981)[systemId * 0x264] == '\0') || ((&DAT_801f0981)[systemId * 0x264] == '\x03'))
     && (status = 1, *systemData == 0)) {
    status = 0;
    DAT_801f06c8 = 0;
    DAT_801f06de = 5;
    DAT_801f06b0 = systemData;
    *systemData = (int)&LAB_8007f6e8;
  }
  FUN_80081cf8(interruptState);
  return status;
}

void FUN_8007f660(undefined2 *dataStructure)

{
  undefined checksum;

  FUN_8008ce30(dataStructure, 0, 0x80);
  *dataStructure = 0x434d;
  checksum = FUN_80082b78(dataStructure);
  *(undefined *)((int)dataStructure + 0x7f) = checksum;
  return;
}

void FUN_8007f6a0(undefined4 *dataStructure,undefined4 parameter)

{
  undefined checksum;

  FUN_8008ce30(dataStructure, 0, 0x80);
  *dataStructure = parameter;
  checksum = FUN_80082b78(dataStructure);
  *(undefined *)((int)dataStructure + 0x7f) = checksum;
  return;
}

int FUN_8007f7f4(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);
  *(undefined *)(DAT_801c93ec + 3) = 3;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
            (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8
  ;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;
  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x40000000;
  result = DAT_801c93ec + 8;
  DAT_801c93ec = DAT_801c93ec + 0x10;
  return result;
}

void FUN_8007f830(uint gpuConfig)

{
  GPU_REG1 = gpuConfig | 0x3000000;
  return;
}

void FUN_8007f848(void)

{
  dword *voicePointer;

  DMA_DPCR = DMA_DPCR | 0xb0000;
  DMACallback();
  voicePointer = &VOICE_00_LEFT_RIGHT;
  SPU_MAIN_VOL_L = 0;
  SPU_MAIN_VOL_R = 0;
  SOUND_RAM_DATA_TRANSTER_CTRL = 4;
  CD_VOL_L = 0;
  CD_VOL_R = 0;
  EXT_VOL_L = 0;
  EXT_VOL_R = 0;
  do {
    *(word *)voicePointer = 0;
    *(word *)((int)voicePointer + 2) = 0;
    voicePointer = voicePointer + 4;
  } while (voicePointer != (dword *)&SPU_MAIN_VOL_L);
  SPU_REVERB_OUT_L = 0;
  SPU_REVERB_OUT_R = 0;
  SPU_VOICE_CHN_FM_MODE._0_2_ = 0;
  SPU_VOICE_CHN_FM_MODE._2_2_ = 0;
  SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
  SPU_VOICE_CHN_NOISE_MODE._2_2_ = 0;
  SPU_VOICE_CHN_REVERB_MODE._0_2_ = 0;
  SPU_VOICE_CHN_REVERB_MODE._2_2_ = 0;
  SPU_CTRL_REG_CPUCNT = 0xc001;
  return;
}

void FUN_8007f924(void)

{
  DAT_801f0c78 = &LAB_8007f978;
  DAT_801f0c7c = 0x10000;
  DAT_801f0c80 = 0;
  DAT_801f0c84 = 0;
  FUN_80083030((int **)&DAT_801f0688, (int **)&DAT_801f0c78);
  PadStartCom();
  return;
}

void FUN_8007f9cc(int controlData,int controllerId)

{
  int controllerState;
  uint stateChange;
  uint newState;
  byte *controlBuffer;
  uint previousState;

  controlBuffer = (byte *)(controlData + controllerId * 8 + 0x18);
  previousState = (uint)controlBuffer[1];
  controllerState = PadGetState(controllerId << 4);
  if (controllerState == 2) {
    newState = 1;
  }
  else if (controllerState < 3) {
    stateChange = 0;
    if (controllerState < 0) goto LAB_8007fa60;
    previousState = 0xffffffff;
    newState = 0;
  }
  else {
    stateChange = 0;
    if (controllerState != 6) goto LAB_8007fa60;
    newState = PadInfoAct(controllerId << 4, -1, 0);
  }
  stateChange = previousState ^ newState;
  previousState = newState;
LAB_8007fa60:
  controlBuffer[1] = (byte)previousState;
  *controlBuffer = *controlBuffer | stateChange != 0;
  return;
}

undefined4 FUN_8007fa90(int controlData,uint parameterIndex,undefined4 newValue)

{
  undefined4 previousValue;
  undefined4 *parameterPointer;

  parameterPointer = (undefined4 *)(controlData + parameterIndex * 4 + 0x10);
  if (parameterIndex < 2) {
    previousValue = *parameterPointer;
    *parameterPointer = newValue;
    return previousValue;
  }
  return 0;
}

void FUN_8007fab8(undefined2 *controlStructure,undefined4 parameter1,undefined4 parameter2)

{
  undefined4 previousValue;

  FUN_80083868(controlStructure + 6);
  controlStructure[0x2d] = 0;
  controlStructure[0x2e] = 0;
  controlStructure[0x2f] = 0;
  controlStructure[0x30] = 0;
  *(undefined4 *)(controlStructure + 2) = parameter2;
  *controlStructure = (short)parameter1;
  *(undefined *)(controlStructure + 1) = 0;
  *(undefined *)((int)controlStructure + 3) = 1;
  previousValue = FUN_8007fa90(&DAT_801f0c70, parameter1, controlStructure);
  *(undefined4 *)(controlStructure + 4) = previousValue;
  return;
}

void FUN_8007fb38(short *controlStructure)

{
  undefined4 interruptState;
  int controlData;

  controlStructure[0x2d] = 0;
  controlStructure[0x2e] = 0;
  controlStructure[0x2f] = 0;
  controlStructure[0x30] = 0;
  interruptState = FUN_80081cf8(0);
  controlData = FUN_8007fbc4(controlStructure);
  if ((controlData != 0) && (*(code **)(controlData + 8) != (code *)0x0)) {
    (**(code **)(controlData + 8))();
  }
  FUN_8007fa90(&DAT_801f0c70, (int)*controlStructure, *(undefined4 *)(controlStructure + 4));
  FUN_80081cf8(interruptState);
  return;
}

int FUN_8007fbc4(short *controlIndex)

{
  int *currentPointer;
  int targetValue;
  int *dataPointer;

  dataPointer = *(int **)(controlIndex + 2);
  targetValue = (int)(uint)(byte)(&DAT_801f0c99)[*controlIndex * 0x22] >> 4;
  currentPointer = dataPointer;
  if ((&DAT_801f0c98)[*controlIndex * 0x22] != '\0') {
    targetValue = 0;
  }
  while( true ) {
    if (currentPointer == (int *)0x0) {
      return (int *)0x0;
    }
    currentPointer = (int *)*dataPointer;
    if ((int *)targetValue == currentPointer) break;
    dataPointer = dataPointer + 3;
  }
  return dataPointer;
}

void FUN_8007fc30(short *controlStructure)

{
  byte previousType;
  short timerValue;
  int controlIndex;
  code *inputCallback;
  uint controlType;
  code *outputCallback;
  ushort inputMask;
  uint inputData1;
  uint inputData2;
  undefined4 inputData3;
  undefined4 inputData4;

  if (controlStructure != (short *)0x0) {
    controlIndex = *controlStructure * 0x22;
    controlType = (int)(uint)(byte)(&DAT_801f0c99)[controlIndex] >> 4;
    if ((&DAT_801f0c98)[controlIndex] != '\0') {
      controlType = 0;
    }
    inputMask = 0;
    inputData1 = 0;
    inputData2 = 0;
    inputData3 = 0;
    inputData4 = 0;
    if ((&DAT_801f0c98)[controlIndex] == '\0') {
      inputMask = *(ushort *)(&DAT_801f0c9a + controlIndex) ^ 0xffff;
    }
    switch(controlType) {
    case 1:
      inputData1 = CONCAT22((short)(char)(&DAT_801f0c9d)[controlIndex],(short)(char)(&DAT_801f0c9c)[controlIndex]);
      break;
    case 2:
    case 5:
    case 7:
      inputData1 = (uint)CONCAT12((&DAT_801f0c9d)[controlIndex],(ushort)(byte)(&DAT_801f0c9c)[controlIndex]);
      inputData2 = (uint)CONCAT12((&DAT_801f0c9f)[controlIndex],(ushort)(byte)(&DAT_801f0c9e)[controlIndex]);
      break;
    case 3:
    case 4:
      break;
    case 6:
      inputData1 = *(uint *)(&DAT_801f0c9c + controlIndex);
      break;
    default:
      controlType = 0;
      inputMask = 0;
      break;
    case 0xe:
      inputData1 = (uint)*(undefined3 *)(&DAT_801f0c9c + controlIndex);
    }
    outputCallback = (code *)0x0;
    previousType = *(byte *)(controlStructure + 1);
    *(bool *)((int)controlStructure + 3) = controlType != 0;
    *(char *)(controlStructure + 1) = (char)controlType;
    controlIndex = FUN_8007fbc4(controlStructure);
    inputCallback = (code *)0x0;
    if (controlIndex != 0) {
      inputCallback = *(code **)(controlIndex + 4);
      outputCallback = *(code **)(controlIndex + 8);
    }
    if (inputCallback == (code *)0x0) {
      FUN_800838b4(controlStructure + 6, 0);
      controlStructure[0x24] = 0;
    }
    else {
      (*inputCallback)();
    }
    if (outputCallback != (code *)0x0) {
      (*outputCallback)();
    }
    timerValue = controlStructure[0x30];
    controlStructure[0x30] = timerValue + -1;
    if ((short)(timerValue + -1) == -1) {
      controlStructure[0x2d] = 0;
      controlStructure[0x2e] = 0;
      controlStructure[0x2f] = 0;
      controlStructure[0x30] = 0;
    }
  }
  return;
}

void FUN_8007fe34(void)

{
  undefined4 interruptMask;

  GPU_cw();
  interruptMask = SetIntrMask(0);
  DMA_GPU_CHCR = 0x401;
  DMA_DPCR = DMA_DPCR | 0x800;
  GPU_REG1 = 0;
  SetIntrMask(interruptMask);
  return;
}

void FUN_8007fe8c(undefined4 *renderStructure)

{
  FUN_80080858(renderStructure);
  *renderStructure = &LAB_80090630;
  *(undefined *)((int)renderStructure + 0x1e) = 2;
  return;
}

void FUN_8007fec8(undefined4 *renderStructure)

{
  *renderStructure = &LAB_80090630;
  FUN_800808c4(renderStructure);
  return;
}

void FUN_8007fef0(int *renderStructure)

{
  (**(code **)(*renderStructure + 0x18))();
  (**(code **)(*renderStructure + 0x34))();
  (**(code **)(*renderStructure + 0x34))();
  FUN_80080298(renderStructure + 0xe);
  FUN_8007af30();
  FUN_80080c44(renderStructure);
  return;
}

void FUN_8007ff70(int renderData,uint renderFlags)

{
  *(undefined2 *)(renderData + 0x6c) = 0;
  if ((renderFlags & 4) == 0) {
    *(undefined2 *)(renderData + 0x6e) = 0xf0;
  }
  else {
    *(undefined2 *)(renderData + 0x6e) = 0;
  }
  FUN_800808ec(renderData, renderFlags);
  return;
}

void FUN_8007ffac(int renderData)

{
  DAT_801c93f8 = *(undefined2 *)(renderData + 0x26);
  DAT_801c93fc = *(undefined2 *)(renderData + 0x2a);
  DAT_801c93fe = *(undefined2 *)(renderData + 0x2c);
  DAT_801c93fa = *(short *)(renderData + 0x28) +
                 *(short *)(renderData + (uint)*(byte *)(renderData + 0x1d) * 2 + 0x6c);
  FUN_80080ca4(renderData);
  return;
}

void FUN_80080000(int renderData)

{
  FUN_80081f2c(0,(int)*(short *)(renderData + (uint)*(byte *)(renderData + 0x1d) * 2 + 0x6c));
  return;
}

undefined4 * FUN_80080038(void)

{
  if (DAT_801f0ce0 == 0) {
    FUN_80080e9c();
    FUN_80085b3c(&DAT_801f0ce0,"23psxViewLoopDoubleBuffer",&DAT_801f0cf0);
  }
  return &DAT_801f0ce0;
}

void FUN_80080088(int renderBuffer,undefined4 bufferData,uint bufferSize)

{
  *(undefined4 *)(renderBuffer + 4) = bufferData;
  *(short *)(renderBuffer + 0x14) = (short)(bufferSize >> 2);
  *(undefined4 *)(renderBuffer + 0x18) = 0;
  FUN_80080100(renderBuffer);
  return;
}

void FUN_800800b4(ushort **listHead,ushort *newElement)

{
  ushort currentValue;
  ushort *previousElement;
  ushort *currentElement;
  ushort *nextElement;

  nextElement = (ushort *)0x0;
  currentElement = *listHead;
  do {
    previousElement = nextElement;
    if (currentElement == (ushort *)0x0) break;
    currentValue = *currentElement;
    nextElement = currentElement;
    currentElement = *(ushort **)(currentElement + 2);
  } while (currentValue <= *newElement);
  *(undefined4 *)(newElement + 2) = 0;
  if (previousElement == (ushort *)0x0) {
    *listHead = newElement;
    return;
  }
  *(ushort **)(previousElement + 2) = newElement;
  return;
}

void FUN_80080100(undefined4 *renderBuffer)

{
  *renderBuffer = 0;
  renderBuffer[2] = 0;
  *(undefined2 *)((int)renderBuffer + 0x16) = 0;
  return;
}

void FUN_80080144(int *renderList,uint renderFlags)

{
  uint alignment1;
  uint alignment2;
  uint alignment3;
  uint *alignedPointer;
  int alignedValue;
  int gpuBuffer;
  int currentOffset;

  gpuBuffer = DAT_801c93ec;
  renderList[7] = DAT_801c93ec;
  *(undefined *)(gpuBuffer + 0x13) = 1;
  *(undefined4 *)(gpuBuffer + 0x14) = 0;
  alignment1 = renderList[1] + 2;
  alignment2 = alignment1 & 3;
  alignedValue = *(int *)(alignment1 - alignment2);
  alignment1 = renderList[1] + 2;
  alignment3 = alignment1 & 3;
  alignedPointer = (uint *)(alignment1 - alignment3);
  *alignedPointer = *alignedPointer & -1 << (alignment3 + 1) * 8 | (uint)((gpuBuffer + 0x10) * 0x100) >> (3 - alignment3) * 8;
  alignment1 = gpuBuffer + 0x12U & 3;
  alignedPointer = (uint *)((gpuBuffer + 0x12U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 |
                    (alignedValue << (3 - alignment2) * 8 | renderFlags & 0xffffffffU >> (alignment2 + 1) * 8) >> (3 - alignment1) * 8;
  gpuBuffer = gpuBuffer + 0x18;
  currentOffset = renderList[3];
  for (alignedValue = *renderList; alignedValue != 0; alignedValue = *(int *)(alignedValue + 4)) {
    *(int *)(alignedValue + 0xc) = gpuBuffer;
    gpuBuffer = gpuBuffer + 0x10;
    *(int *)(alignedValue + 8) = currentOffset;
    FUN_8008034c(alignedValue, renderFlags);
    currentOffset = currentOffset + (uint)*(ushort *)(alignedValue + 2) * 4;
  }
  DAT_801c93ec = gpuBuffer;
  return;
}

void FUN_800801fc(int *renderList)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int currentElement;
  int gpuBuffer;
  int *listPointer;
  uint renderFlags;
  int nextElement;

  listPointer = renderList;
  currentElement = *renderList;
  while (currentElement != 0) {
    nextElement = *(int *)(currentElement + 4);
    gpuBuffer = *(int *)(currentElement + 0xc);
    currentElement = *(int *)(currentElement + 8) + (uint)*(ushort *)(currentElement + 2) * 4;
    alignment1 = currentElement - 2;
    alignment2 = alignment1 & 3;
    listPointer = (int *)(*(int *)(alignment1 - alignment2) << (3 - alignment2) * 8 |
                    (uint)listPointer & 0xffffffffU >> (alignment2 + 1) * 8);
    *(undefined *)(gpuBuffer + 3) = 3;
    alignment1 = gpuBuffer + 2U & 3;
    alignedPointer = (uint *)((gpuBuffer + 2U) - alignment1);
    *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)listPointer >> (3 - alignment1) * 8;
    alignment1 = currentElement - 2;
    alignment2 = alignment1 & 3;
    alignedPointer = (uint *)(alignment1 - alignment2);
    *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 | (uint)(gpuBuffer << 8) >> (3 - alignment2) * 8;
    currentElement = nextElement;
  }
  nextElement = renderList[4];
  renderFlags = renderList[6];
  gpuBuffer = renderList[7];
  *(undefined4 *)(gpuBuffer + 4) = 0x1000000;
  alignment1 = nextElement + 2U & 3;
  currentElement = *(int *)((nextElement + 2U) - alignment1);
  *(undefined *)(gpuBuffer + 3) = 1;
  alignment2 = gpuBuffer + 2U & 3;
  alignedPointer = (uint *)((gpuBuffer + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
            (currentElement << (3 - alignment1) * 8 | 0xffffffffU >> (alignment1 + 1) * 8 & 0x1000000) >>
            (3 - alignment2) * 8;
  alignment1 = nextElement + 2U & 3;
  alignedPointer = (uint *)((nextElement + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)(gpuBuffer << 8) >> (3 - alignment1) * 8;
  *(uint *)(gpuBuffer + 0xc) = renderFlags ^ 0xe1000200;
  alignment1 = nextElement + 2U & 3;
  currentElement = *(int *)((nextElement + 2U) - alignment1);
  *(undefined *)(gpuBuffer + 0xb) = 1;
  alignment2 = gpuBuffer + 10U & 3;
  alignedPointer = (uint *)((gpuBuffer + 10U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
            (currentElement << (3 - alignment1) * 8 | 0xffffffffU >> (alignment1 + 1) * 8 & 0xe1000200) >>
            (3 - alignment2) * 8;
  alignment1 = nextElement + 2U & 3;
  alignedPointer = (uint *)((nextElement + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((gpuBuffer + 8) * 0x100) >> (3 - alignment1) * 8;
  return;
}

void FUN_80080298(int renderBuffer)

{
  if (*(int *)(renderBuffer + 8) != 0) {
    FUN_80082ba8(*(dword *)(renderBuffer + 8));
  }
  return;
}

void FUN_800802c8(int bufferData)

{
  uint halfValue;
  uint offset;

  halfValue = (uint)(*(ushort *)(bufferData + 0x14) >> 1);
  offset = 0;
  if (*(short *)(bufferData + 0x16) == 0) {
    offset = halfValue;
  }
  *(short *)(bufferData + 0x16) = (short)offset;
  *(uint *)(bufferData + 8) = *(int *)(bufferData + 4) + (offset + halfValue + -1) * 4;
  return;
}

void FUN_80080300(int bufferData)

{
  int bufferOffset;

  bufferOffset = *(int *)(bufferData + 4) + (uint)*(ushort *)(bufferData + 0x16) * 4;
  *(int *)(bufferData + 0xc) = bufferOffset;
  *(uint *)(bufferData + 0x10) = bufferOffset + (uint)(*(ushort *)(bufferData + 0x14) >> 1) * 4 + -4;
  FUN_80082bfc(bufferData, *(dword *)(bufferData + 0x14));
  return;
}

void FUN_8008034c(int renderElement,short *coordinates)

{
  int gpuBuffer;
  uint maxX;
  uint currentY;
  uint minY;
  uint currentX;
  uint minX;
  uint maxX2;
  uint maxY;
  uint baseX;
  uint baseY;

  baseX = (uint)DAT_801c93f8;
  baseY = (uint)DAT_801c93fa;
  gpuBuffer = *(int *)(renderElement + 0xc);
  currentX = baseX + (int)*coordinates;
  currentY = baseY + (int)coordinates[1];
  maxX = baseX + (int)DAT_801c93fc;
  maxY = baseY + (int)DAT_801c93fe;
  minX = currentX;
  if ((int)currentX < (int)baseX) {
    minX = baseX;
  }
  minY = currentY;
  if ((int)currentY < (int)baseY) {
    minY = baseY;
  }
  maxX2 = currentX + (int)coordinates[2];
  if ((int)(currentX + (int)coordinates[2]) < (int)baseX) {
    maxX2 = baseX;
  }
  maxY = currentY + (int)coordinates[3];
  if ((int)(currentY + (int)coordinates[3]) < (int)baseY) {
    maxY = baseY;
  }
  if ((int)maxX <= (int)minX) {
    minX = maxX;
  }
  if ((int)maxY <= (int)minY) {
    minY = maxY;
  }
  if ((int)maxX <= (int)maxX2) {
    maxX2 = maxX;
  }
  if ((int)maxY <= (int)maxY) {
    maxY = maxY;
  }
  *(uint *)(gpuBuffer + 4) = (minY & 0x3ff) << 10 | minX & 0x3ff | 0xe3000000;
  *(uint *)(gpuBuffer + 8) = (maxY - 1 & 0x3ff) << 10 | maxX2 - 1 & 0x3ff | 0xe4000000;
  *(uint *)(gpuBuffer + 0xc) = (currentY & 0x7ff) << 0xb | currentX & 0x7ff | 0xe5000000;
  return;
}

int FUN_80080450(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int alignedValue;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedValue = *(int *)((commandBuffer + 2U) - alignment1);
  *(undefined *)(DAT_801c93ec + 3) = 5;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (alignedValue << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(undefined4 *)(DAT_801c93ec + 4) = 0xe1000000;
  *(uint *)(DAT_801c93ec + 8) = commandType ^ 0x64000000;
  alignedValue = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x18;
  return alignedValue;
}

void FUN_80080494(undefined4 *commandBuffer,undefined4 bufferData,uint bufferSize)

{
  *commandBuffer = bufferData;
  commandBuffer[1] = bufferSize >> 2;
  commandBuffer[2] = 0;
  DAT_801c93ec = bufferData;
  return;
}

void FUN_800804b4(int *renderBuffer)

{
  uint bufferOffset;

  bufferOffset = 0;
  if (renderBuffer[2] == 0) {
    bufferOffset = (uint)renderBuffer[1] >> 1;
  }
  renderBuffer[2] = bufferOffset;
  DAT_801c93ec = *renderBuffer + bufferOffset * 4;
  DAT_801c93f0 = DAT_801c93ec + ((uint)renderBuffer[1] >> 1) * 4;
  return;
}

void FUN_800804f8(void)

{
  DAT_801c9518 = Krom2RawAdd(0xffff8140);
  return;
}

int FUN_8008051c(int characterCode)

{
  bool isValidCharacter;
  undefined *characterTable;
  int tableIndex;
  uint adjustedCode;
  uint lowByte;
  uint highByte;
  int fontData;
  int baseOffset;
  int iVar3;
  uint uVar6;
  uint uVar5;
  bool bVar1;
  uint uVar4;
  int iVar7;
  int iVar8;

  adjustedCode = characterCode - 0x2121;
  lowByte = adjustedCode & 0xff;
  baseOffset = -0x376;
  highByte = adjustedCode >> 8 & 0xff;
  if ((0x5d < lowByte) && (adjustedCode != 0xc5e)) {
    return DAT_801c9518;
  }
  adjustedCode = lowByte;
  fontData = DAT_801c9518;
  if (0xe < highByte) {
    tableIndex = highByte << 1;
    if (highByte < 0x2e) goto LAB_800807f4;
    if (highByte != 0x2e) {
      return DAT_801c9518;
    }
    if (0x32 < lowByte) {
      return DAT_801c9518;
    }
    goto switchD_800805a8_caseD_e;
  }
  baseOffset = (int)*(short *)(&LAB_80095970 + highByte * 2);
  if (7 < highByte) {
    fontData = DAT_801c9518 + -0x2000;
  }
  switch(highByte) {
  case 1:
    tableIndex = highByte * 2;
    if (0xd < lowByte) {
      adjustedCode = lowByte - 0xb;
      if (lowByte < 0x19) {
        return DAT_801c9518;
      }
      tableIndex = highByte * 3;
      if (lowByte < 0x21) goto LAB_800807f8;
      adjustedCode = lowByte - 0x13;
      if (lowByte < 0x29) {
        return DAT_801c9518;
      }
      if (0x2f < lowByte) {
        adjustedCode = lowByte - 0x1e;
        if (lowByte < 0x3b) {
          return DAT_801c9518;
        }
        if (0x49 < lowByte) {
          adjustedCode = lowByte - 0x25;
          if (lowByte < 0x51) {
            return DAT_801c9518;
          }
          if ((0x58 < lowByte) && (adjustedCode = lowByte - 0x29, lowByte < 0x5d)) {
            return DAT_801c9518;
          }
        }
      }
      goto switchD_800805a8_caseD_e;
    }
    goto LAB_800807f4;
  case 2:
    if (lowByte < 0xf) {
      return DAT_801c9518;
    }
    tableIndex = highByte * 2;
    if (lowByte < 0x19) goto LAB_800807f4;
    adjustedCode = lowByte - 7;
    if (lowByte < 0x20) {
      return DAT_801c9518;
    }
    tableIndex = highByte * 3;
    if (lowByte < 0x3a) goto LAB_800807f8;
    adjustedCode = lowByte - 0xd;
    if (lowByte < 0x40) {
      return DAT_801c9518;
    }
    isValidCharacter = lowByte < 0x5a;
    break;
  case 3:
    isValidCharacter = lowByte < 0x53;
    break;
  case 4:
    isValidCharacter = lowByte < 0x56;
    break;
  case 5:
    tableIndex = highByte << 1;
    if (lowByte < 0x18) goto LAB_800807f4;
    if (lowByte < 0x20) {
      return DAT_801c9518;
    }
    isValidCharacter = lowByte < 0x38;
    adjustedCode = lowByte - 8;
    break;
  case 6:
    tableIndex = highByte << 1;
    if (lowByte < 0x21) goto LAB_800807f4;
    if (lowByte < 0x30) {
      return DAT_801c9518;
    }
    isValidCharacter = lowByte < 0x51;
    adjustedCode = lowByte - 0xf;
    break;
  case 7:
    isValidCharacter = lowByte < 0x20;
    break;
  case 8:
    characterTable = &DAT_8009598c;
    if (lowByte < 0x10) {
LAB_800807b8:
      tableIndex = highByte << 1;
      adjustedCode = (int)(char)characterTable[lowByte];
      if ((int)(char)characterTable[lowByte] == 0xffffffff) {
switchD_800805a8_caseD_d:
        return DAT_801c9518;
      }
      goto LAB_800807f4;
    }
    isValidCharacter = lowByte < 0x1c;
    adjustedCode = lowByte - 7;
    break;
  case 9:
    if (lowByte == 0) {
      return DAT_801c9518;
    }
    tableIndex = highByte << 1;
    if (lowByte < 0xe) goto LAB_800807f4;
    if (lowByte < 0x11) {
      return DAT_801c9518;
    }
    isValidCharacter = lowByte < 0x1e;
    adjustedCode = lowByte - 3;
    break;
  case 10:
    characterTable = &DAT_8009599c;
    if (lowByte < 0xe) goto LAB_800807b8;
    adjustedCode = lowByte - 5;
    if (0xf < lowByte) {
      if (lowByte < 0x20) {
        return DAT_801c9518;
      }
      isValidCharacter = lowByte < 0x30;
      adjustedCode = lowByte - 0x15;
      break;
    }
  default:
switchD_800805a8_caseD_e:
    tableIndex = highByte << 1;
    goto LAB_800807f4;
  case 0xb:
    iVar3 = highByte << 1;
    if (lowByte < 0x18) goto LAB_800807f4;
    if (lowByte < 0x19) {
      return DAT_801c9518;
    }
    bVar1 = lowByte < 0x57;
    uVar4 = lowByte - 1;
    break;
  case 0xc:
    iVar3 = highByte * 2;
    if (lowByte < 0x1b) goto LAB_800807f4;
    uVar4 = lowByte - 1;
    if (lowByte < 0x1c) {
      return DAT_801c9518;
    }
    iVar3 = highByte * 3;
    if (lowByte < 0x23) goto LAB_800807f8;
    uVar4 = lowByte - 2;
    if (lowByte < 0x24) {
      return DAT_801c9518;
    }
    if ((0x3e < lowByte) && (uVar4 = lowByte - 1, 0x55 < lowByte)) {
      if (lowByte != 0x7f) {
        return DAT_801c9518;
      }
      return fontData + 0x19e6;
    }
    goto switchD_800805a8_caseD_e;
  case 0xd:
  case 0xe:
    goto switchD_800805a8_caseD_d;
  }
  iVar3 = highByte << 1;
  if (!bVar1) {
    return DAT_801c9518;
  }
LAB_800807f4:
  iVar3 = iVar3 + highByte;
LAB_800807f8:
  return fontData + ((iVar3 * 0x10 - highByte) * 2 + uVar4 + baseOffset) * 0x1e;
}

void FUN_80080858(undefined4 *renderStructure)

{
  FUN_800833a0(renderStructure);
  *renderStructure = &LAB_800906c8;
  renderStructure[4] = &LAB_80080820;
  renderStructure[5] = 0;
  renderStructure[6] = 1;
  *(undefined *)(renderStructure + 7) = 3;
  *(undefined *)((int)renderStructure + 0x1d) = 0;
  *(undefined *)((int)renderStructure + 0x1e) = 1;
  *(undefined *)((int)renderStructure + 0x21) = 0;
  *(undefined *)((int)renderStructure + 0x22) = 0;
  *(undefined *)(renderStructure + 9) = 0;
  return;
}

void FUN_800808c4(undefined4 *renderStructure)

{
  *renderStructure = &LAB_800906c8;
  FUN_800833b4(renderStructure, 0);
  return;
}

void FUN_800808ec(int renderData,uint renderFlags)

{
  undefined2 renderValue;
  uint parameterIndex;

  parameterIndex = 4;
  if ((renderFlags & 0x40) == 0) {
    parameterIndex = renderFlags & 3;
  }
  *(byte *)(renderData + 0x23) = (byte)renderFlags;
  *(undefined2 *)(renderData + 0x26) = 0;
  *(undefined2 *)(renderData + 0x28) = 0;
  *(undefined2 *)(renderData + 0x2a) = *(undefined2 *)(&DAT_800959b4 + parameterIndex * 2);
  renderValue = 0x1e0;
  if ((renderFlags & 4) == 0) {
    renderValue = 0xf0;
  }
  parameterIndex = (uint)DAT_800959ad;
  *(undefined2 *)(renderData + 0x2c) = renderValue;
  *(undefined4 *)(renderData + 0x2e) = *(undefined4 *)(renderData + 0x26);
  *(undefined4 *)(renderData + 0x32) = *(undefined4 *)(renderData + 0x2a);
  if (parameterIndex != renderFlags) {
    DAT_800959ad = (byte)renderFlags;
    *(byte *)(renderData + 0x22) = (byte)(renderFlags >> 2) & 1;
    FUN_8007d23c(0xffffffff);
    FUN_8007f830(1);
    FUN_8007d0f0(renderFlags);
  }
  return;
}

void FUN_800809b0(int renderStructure)

{
  bool isLessThan;
  byte currentValue;
  int structurePointer;
  byte parameterValue;

  currentValue = DAT_800959ac;
  isLessThan = DAT_800959ac < *(byte *)(renderStructure + 0x1e);
  structurePointer = renderStructure;
  *(int *)(renderStructure + 4) = DAT_800959b0;
  DAT_800959b0 = structurePointer;
  parameterValue = 0;
  if (isLessThan) {
    parameterValue = currentValue;
  }
  *(byte *)(renderStructure + 0x1d) = parameterValue;
  *(undefined *)(renderStructure + 0x1c) = 3;
  *(undefined *)(renderStructure + 0x1f) = 0;
  *(undefined *)(renderStructure + 0x20) = 0;
  FUN_80083030(&DAT_801f0688,renderStructure + 8);
  *(undefined4 *)(renderStructure + 0x40) = 0;
  return;
}

void FUN_80080c44(int renderStructure)

{
  FUN_800830cc(&DAT_801f0688,renderStructure + 8);
  FUN_8007af30();
  DAT_800959ac = *(undefined *)(renderStructure + 0x1d);
  DAT_800959b0 = *(undefined4 *)(renderStructure + 4);
  return;
}

void FUN_80080c94(void)

{
  return;
}

undefined4 FUN_80080c9c(void)

{
  return 1;
}

void FUN_80080ca4(int renderSystemData)

{
  int bufferData;

  bufferData = renderSystemData + 0x38;
  FUN_80080298(bufferData);
  FUN_800802c8(bufferData);
  FUN_80080300(bufferData);
  FUN_800804b4(renderSystemData + 0x58);
  FUN_80080144(bufferData,renderSystemData + 0x26);
  FUN_8007c328();
  return;
}

void FUN_80080d04(void)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_80080e9c();
  return;
}

undefined4 *FUN_80080e9c(void)

{
  if (DAT_801f0cf0 == 0) {
    FUN_800834bc();
    FUN_80085b3c(&DAT_801f0cf0,"11psxViewLoop",&DAT_801c9400);
  }
  return &DAT_801f0cf0;
}

void FUN_80080eec(undefined4 renderData1,undefined4 renderData2)

{
  DAT_80095abc = renderData1;
  DAT_80095ac0 = renderData2;
  return;
}

undefined4 FUN_80080f24(int dataIndex,int transferFlag)

{
  undefined4 result;
  int dataStructure;
  int dataOffset;
  uint calculatedValue;

  if (DAT_80095ac0 == 0) {
    result = 0;
  }
  else {
    dataStructure = DAT_80095abc + dataIndex * 0xc;
    dataOffset = *(int *)(dataStructure + 4) + DAT_80095ac0;
    dataStructure = *(int *)(dataStructure + 8) + DAT_80095ac0;
    FUN_80081c5c();
    calculatedValue = (((uint)DAT_801c9993 * 0x8000) / 0xff) * 0x8cc;
    DAT_801f0531 = 0x40;
    DAT_801f0532 = 1;
    DAT_801f0533 = (char)dataIndex + '\x01';
    DAT_801f0530 = transferFlag != 0;
    DAT_801f053c = 0;
    DAT_801f0528 = (undefined2)(calculatedValue >> 0xc);
    DAT_801f0534 = dataOffset;
    DAT_801f0538 = dataStructure;
    result = FUN_8007c4ec(5);
  }
  return result;
}

uint FUN_8008103c(int dataIndex)

{
  int dataStructure;

  dataStructure = DAT_80095abc + dataIndex * 0xc;
  return ((*(int *)(dataStructure + 8) - *(int *)(dataStructure + 4)) + 0x4aU) / 0x4b;
}

void FUN_80081084(int dataStructure)

{
  FUN_8008ce30(dataStructure,0,0x10);
  *(undefined **)(dataStructure + 8) = &LAB_8008107c;
  *(undefined4 *)(dataStructure + 0xc) = 0;
  FUN_80083030((int **)&DAT_801f0688, (int **)&DAT_801f0c78);
  return;
}

void FUN_800810d0(undefined4 controlData)

{
  FUN_800830cc(&DAT_801f0688,controlData);
  return;
}

void FUN_800810f8(undefined4 *commandBuffer)

{
  *commandBuffer = 0x80000000;
  FUN_80081110(commandBuffer,4);
  return;
}

void FUN_80081110(dword *commandBuffer,int commandCount)

{
  FUN_8007af30();
  GPU_REG1 = 0x4000000;
  do {
    GPU_REG0 = *commandBuffer;
    commandBuffer = commandBuffer + 1;
    commandCount = commandCount + -1;
  } while (commandCount != 0);
  return;
}

int FUN_80081164(undefined4 inputValue)

{
  uint shiftAmount;
  int baseValue;
  int result;
  undefined stackBuffer [8];
  uint inputVector[3];

  inputVector[0] = inputValue;
  inputVector[1] = 0;
  inputVector[2] = 0;
  shiftAmount = FUN_80082c58((undefined2 *)stackBuffer, inputVector);
  baseValue = FUN_80082ce0(inputValue, stackBuffer);
  result = baseValue << (shiftAmount & 0x1f);
  if ((int)shiftAmount < 0) {
    result = baseValue >> (-shiftAmount & 0x1f);
  }
  return result;
}

void FUN_800811b0(undefined2 *outputCoordinates,int inputData)

{
  undefined2 calculatedValue1;
  undefined2 calculatedValue2;
  short coordinateY;
  short coordinateX;
  int absoluteValue;

  calculatedValue1 = FUN_80082da8((int)*(short *)(inputData + 10));
  outputCoordinates[1] = calculatedValue1;
  absoluteValue = (int)*(short *)(inputData + 0xe);
  if (absoluteValue < 0) {
    absoluteValue = -absoluteValue;
  }
  if (absoluteValue < 0x1000) {
    coordinateX = *(short *)(&DAT_800a0a88 + absoluteValue * 2);
  }
  else {
    coordinateX = 0;
  }
  calculatedValue1 = 0;
  if (coordinateX == 0) {
    coordinateX = -*(short *)(inputData + 2);
    coordinateY = -*(short *)(inputData + 0xe);
  }
  else {
    calculatedValue1 = FUN_80082e14((int)*(short *)(inputData + 6),(int)*(short *)(inputData + 8));
    coordinateX = *(short *)(inputData + 4);
    coordinateY = *(short *)(inputData + 0x10);
  }
  calculatedValue2 = FUN_80082e14((int)coordinateX,(int)coordinateY);
  *outputCoordinates = calculatedValue2;
  outputCoordinates[2] = calculatedValue1;
  return;
}

int FUN_80081288(int inputValue,int precision)

{
  bool continueLoop;
  int result;
  int remainder;
  uint shiftedValue;
  int divisor;
  int bitCount;

  if (inputValue == 0) {
    result = 0;
  }
  else {
    bitCount = 0x10;
    if (-1 < inputValue) {
      gte_ldLZCS(inputValue);
      bitCount = gte_stLZCR();
      bitCount = (int)((0x1fU - bitCount & 0xfffffffe) + 2) >> 1;
    }
    result = 0;
    divisor = 0;
    remainder = 0;
    shiftedValue = inputValue << (bitCount * -2 + 0x20U & 0x1f);
    do {
      bitCount = bitCount + -1;
      result = result * 2;
      divisor = divisor * 2;
      remainder = (remainder << 2 | shiftedValue >> 0x1e) - (divisor + 1);
      shiftedValue = shiftedValue << 2;
      if (remainder < 0) {
        remainder = remainder + divisor + 1;
      }
      else {
        result = result + 1;
        divisor = divisor + 2;
      }
    } while (bitCount != 0);
    if (precision != 0) {
      precision = precision + -1;
      do {
        divisor = divisor * 2;
        remainder = remainder * 4 - (divisor + 1);
        result = result * 2;
        if (remainder < 0) {
          remainder = remainder + divisor + 1;
        }
        else {
          result = result + 1;
          divisor = divisor + 2;
        }
        continueLoop = precision != 0;
        precision = precision + -1;
      } while (continueLoop);
    }
  }
  return result;
}

void FUN_80081374(undefined2 *outputMatrix,uint angleX,uint angleY,uint angleZ)

{
  short sinZ;
  int negSinZ;
  undefined4 gteResult1;
  undefined4 gteResult2;
  undefined4 gteResult3;
  int sinX;
  int cosY;
  int cosX;

  sinZ = DAT_80093150[angleZ & 0xfff];
  sinX = (int)DAT_80093150[angleX & 0xfff];
  negSinZ = -(int)sinZ;
  cosX = (int)DAT_80093950[angleX & 0xfff];
  cosY = (int)DAT_80093950[angleY & 0xfff];
  gte_ldR11R12(cosX);
  gte_ldR13R21(sinX * negSinZ >> 0xc & 0xffff);
  gte_ldR22R23(cosY << 0x10);
  gte_ldR31R32(-sinX);
  gte_ldR33(cosX * negSinZ >> 0xc);
  gte_ldVXY0((uint)(ushort)DAT_80093950[angleZ & 0xfff]);
  gte_ldVZ0((int)DAT_80093150[angleZ & 0xfff]);
  gte_rtv0_b();
  gte_ldVXY1(-(int)DAT_80093150[angleZ & 0xfff] & 0xffff);
  gte_ldVZ1((int)DAT_80093950[angleZ & 0xfff]);
  outputMatrix[2] = (short)(sinX * cosY >> 0xc);
  gteResult1 = gte_stIR1();
  gteResult2 = gte_stIR2();
  gteResult3 = gte_stIR3();
  *outputMatrix = (short)gteResult1;
  outputMatrix[3] = (short)gteResult2;
  gte_rtv1_b();
  outputMatrix[6] = (short)gteResult3;
  outputMatrix[5] = sinZ;
  outputMatrix[8] = (short)(cosX * cosY >> 0xc);
  gteResult1 = gte_stIR1();
  gteResult2 = gte_stIR2();
  gteResult3 = gte_stIR3();
  outputMatrix[1] = (short)gteResult1;
  outputMatrix[4] = (short)gteResult2;
  outputMatrix[7] = (short)gteResult3;
  return;
}

int FUN_80081478(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int alignedValue;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedValue = *(int *)((commandBuffer + 2U) - alignment1);
  *(undefined *)(DAT_801c93ec + 3) = 4;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
            (alignedValue << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;
  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x64000000;
  alignedValue = DAT_801c93ec + 8;
  DAT_801c93ec = DAT_801c93ec + 0x14;
  return alignedValue;
}

void FUN_800814b4(long *outputVector,undefined4 *transformationMatrix,SVECTOR *inputVertex)

{
  gte_ldR11R12(*transformationMatrix);
  gte_ldR13R21(transformationMatrix[1]);
  gte_ldR22R23(transformationMatrix[2]);
  gte_ldR31R32(transformationMatrix[3]);
  gte_ldR33(transformationMatrix[4]);
  gte_ldv0(inputVertex);
  gte_mvmva_b(0,0,0,3,0);
  gte_stlvnl0(outputVector);
  gte_stMAC2();
  gte_stMAC3();
  return;
}

undefined8 FUN_80081500(undefined4 *transformationMatrix,undefined4 *inputVertex)

{
  undefined4 result;

  gte_ldR11R12(*transformationMatrix);
  gte_ldR13R21(transformationMatrix[1]);
  gte_ldVXY0(*inputVertex);
  gte_ldVZ0(inputVertex[1]);
  gte_rtv0_b();
  result = gte_stIR1();
  return CONCAT44(*inputVertex, result);
}

uint FUN_80081534(uint rgbColor)

{
  return (rgbColor & 0x1f) << 3 | (rgbColor & 0x1f) >> 2 |
         (((rgbColor & 0x3e0) >> 5) << 3 | (rgbColor & 0x3e0) >> 7) << 8 |
         (((rgbColor & 0x7c00) >> 10) << 3 | (rgbColor & 0x7c00) >> 0xc) << 0x10;
}

void FUN_80081580(uint renderData,int renderFlags)

{
  bool continueProcessing;
  ushort renderValue;
  uint *dataPointer;
  int dataIndex;
  uint dataValue1;
  uint dataValue2;
  uint dataValue3;
  undefined4 dataValue4;
  uint dataValue5;
  undefined2 dataValue6;
  short dataValue7;
  ushort dataValue8;
  int dataValue9;
  SVECTOR *vector1;
  uint dataValue10;
  short dataValue11;
  undefined4 *dataPointer1;
  uint dataValue12;
  undefined4 *dataPointer2;
  undefined2 dataValue13;
  int dataValue14;
  SVECTOR *vector2;
  uint dataValue15;
  undefined2 *dataPointer3;
  undefined2 *dataPointer4;
  SVECTOR *vector3;
  int dataValue16;
  int dataValue17;
  int dataValue18;
  int dataValue19;
  SVECTOR *vector4;
  short *dataPointer5;
  undefined2 *dataPointer6;
  SVECTOR *vector5;
  short *dataPointer7;
  uint dataValue20;
  SVECTOR *vector6;
  uint dataValue21;

  dataPointer7 = (short *)(renderData + 0xa8);
  dataPointer3 = (undefined2 *)(renderData + 0xe8);
  dataPointer6 = dataPointer3 + renderFlags * 0x12;
  dataValue21 = 0;
  dataValue20 = 0xffffffff;
  dataPointer5 = (short *)(renderData + 0xac);
  renderValue = *(ushort *)(renderData + 0x62);
  dataPointer1 = (undefined4 *)(renderData + 0xd8);
  *(undefined2 **)(renderData + 0x2e0) = dataPointer3;
  do {
    dataPointer4 = dataPointer3;
    dataPointer1[6] = *(undefined4 *)(dataPointer5 + 2);
    gte_ldLZCS((int)dataPointer5[1]);
    gte_ldVXY0(dataPointer7);
    gte_ldVZ0(dataPointer5);
    dataIndex = gte_stLZCR();
    gte_rtps_b();
    dataValue1 = 0x13 - dataIndex;
    dataValue2 = -dataValue1;
    if ((int)dataValue1 < 0) {
      dataValue6 = (undefined2)((int)*dataPointer7 << (dataValue2 & 0x1f));
      dataValue13 = (undefined2)((int)dataPointer5[-1] << (dataValue2 & 0x1f));
      dataIndex = (int)*dataPointer5 << (dataValue2 & 0x1f);
    }
    else {
      dataValue6 = (undefined2)((int)*dataPointer7 >> (dataValue1 & 0x1f));
      dataValue13 = (undefined2)((int)dataPointer5[-1] >> (dataValue1 & 0x1f));
      dataIndex = (int)*dataPointer5 >> (dataValue1 & 0x1f);
    }
    *dataPointer4 = dataValue6;
    *(undefined2 *)((int)dataPointer1 + 0x12) = dataValue13;
    *(short *)(dataPointer1 + 5) = (short)dataIndex;
    gte_ldVXY0(dataPointer4);
    gte_ldVZ0(dataPointer1 + 5);
    dataValue9 = gte_stFLAG();
    gte_rtps_b();
    if (dataValue9 < 0) {
      gte_stSXY2();
    }
    gte_llv0_b();
    dataValue9 = gte_stIR1();
    dataValue14 = gte_stIR2();
    gte_lcv0_b();
    dataValue17 = gte_stIR1();
    dataValue19 = gte_stIR2();
    dataValue2 = dataIndex - (uint)renderValue;
    dataValue1 = dataValue2 >> 0x1f;
    *(short *)((int)dataPointer1 + 0x2a) = (short)dataValue2;
    *(short *)(dataPointer1 + 0xb) = (short)dataValue9;
    if (dataValue9 < 0) {
      dataValue1 = dataValue1 | 2;
    }
    *(short *)((int)dataPointer1 + 0x2e) = (short)dataValue14;
    if (dataValue14 < 0) {
      dataValue1 = dataValue1 | 4;
    }
    *(short *)(dataPointer1 + 0xc) = (short)dataValue17;
    if (dataValue17 < 0) {
      dataValue1 = dataValue1 | 8;
    }
    *(short *)((int)dataPointer1 + 0x32) = (short)dataValue19;
    if (dataValue19 < 0) {
      dataValue1 = dataValue1 | 0x10;
    }
    *(short *)(dataPointer1 + 10) = (short)dataValue1;
    dataPointer1[0x11] = dataPointer4;
    dataPointer1 = dataPointer1 + 9;
    dataPointer3 = dataPointer4 + 0x12;
    dataValue21 = dataValue21 | dataValue1;
    dataValue20 = dataValue20 & dataValue1;
    dataPointer5 = dataPointer5 + 8;
    dataPointer7 = dataPointer7 + 8;
    *dataPointer1 = dataPointer3;
  } while (dataPointer3 != dataPointer6);
  *(undefined2 **)(renderData + 0x2e4) = dataPointer6;
  if (dataValue20 == 0) {
    dataIndex = *(int *)(renderData + 0x2e0);
    dataPointer1 = (undefined4 *)(dataPointer4 + 10);
    *(undefined2 **)(dataIndex + 0x10) = dataPointer6 + -0x12;
    *(int *)(dataPointer6 + -8) = dataIndex;
    do {
      dataPointer1[0x11] = dataPointer3;
      dataPointer1 = dataPointer1 + 9;
      dataPointer3 = dataPointer3 + 0x12;
      *dataPointer1 = dataPointer3;
    } while (dataPointer3 != (undefined2 *)(renderData + 700));
    dataIndex = *(int *)(renderData + 0x2e4);
    *(undefined2 **)(dataIndex + 0x10) = (undefined2 *)(renderData + 700);
    *(int *)(renderData + 0x2d0) = dataIndex;
    dataValue20 = 0;
    while (dataValue21 != 0) {
      dataValue1 = 1 << (dataValue20 & 0x1f);
      dataValue2 = dataValue21 & dataValue1;
      dataValue21 = dataValue21 - dataValue2;
      if (dataValue2 != 0) {
        vector1 = *(SVECTOR **)(renderData + 0x2e0);
        vector4 = (SVECTOR *)0x0;
        dataIndex = 0;
        dataValue9 = dataValue20 << 1;
        vector6 = vector1;
        do {
          vector5 = *(SVECTOR **)&vector1[2].vz;
          renderValue = vector5[3].vx;
          dataValue2 = (ushort)vector1[3].vx & dataValue1;
          if (dataValue2 == 0) {
            *(SVECTOR **)(vector1 + 2) = vector4;
            dataPointer5 = &vector4[2].vz;
            if (vector4 == (SVECTOR *)0x0) {
              dataPointer5 = (short *)(renderData + 0x2e0);
            }
            *(SVECTOR **)dataPointer5 = vector1;
            dataIndex = dataIndex + 1;
            vector4 = vector1;
          }
          if (dataValue2 != (renderValue & dataValue1)) {
            vector2 = vector1;
            vector3 = vector5;
            if (dataValue2 != 0) {
              vector2 = vector5;
              vector3 = vector1;
            }
            dataValue14 = (int)*(short *)((int)&vector2[3].vy + dataValue9);
            dataValue14 = (dataValue14 << 0xc) / (dataValue14 - *(short *)((int)&vector3[3].vy + dataValue9));
            vector1 = *(SVECTOR **)(renderData + 0x2e4);
            dataIndex = dataIndex + 1;
            dataPointer5 = &vector4[2].vz;
            *(undefined4 *)(renderData + 0x2e4) = *(undefined4 *)&vector1[2].vz;
            *(SVECTOR **)(vector1 + 2) = vector4;
            if (vector4 == (SVECTOR *)0x0) {
              dataPointer5 = (short *)(renderData + 0x2e0);
            }
            *(SVECTOR **)dataPointer5 = vector1;
            gte_ldIR0(0x1000 - dataValue14);
            gte_ldsv_((int)vector2->vx,(int)vector2->vy,(int)vector2->vz);
            gte_gpf0(0);
            dataValue10 = (uint)vector3->vx;
            dataValue12 = (uint)vector3->vy;
            dataValue15 = (uint)vector3->vz;
            gte_stFLAG();
            gte_ldIR0(dataValue14);
            gte_ldsv_(dataValue10,dataValue12,dataValue15);
            gte_gpl0();
            read_mt(dataValue10,dataValue12,dataValue15);
            dataValue2 = dataValue10;
            if ((int)dataValue10 < 0) {
              dataValue2 = -dataValue10;
            }
            dataValue5 = dataValue12;
            if ((int)dataValue12 < 0) {
              dataValue5 = -dataValue12;
            }
            dataValue3 = dataValue15;
            if ((int)dataValue15 < 0) {
              dataValue3 = -dataValue15;
            }
            gte_ldLZCS(dataValue2 | dataValue5 | dataValue3);
            dataValue14 = gte_stLZCR();
            dataValue5 = 0x13 - dataValue14;
            dataValue2 = -dataValue5;
            if ((int)dataValue5 < 0) {
              dataValue7 = (short)(dataValue10 << (dataValue2 & 0x1f));
              dataValue11 = (short)(dataValue12 << (dataValue2 & 0x1f));
              dataValue14 = dataValue15 << (dataValue2 & 0x1f);
            }
            else {
              dataValue7 = (short)((int)dataValue10 >> (dataValue5 & 0x1f));
              dataValue11 = (short)((int)dataValue12 >> (dataValue5 & 0x1f));
              dataValue14 = (int)dataValue15 >> (dataValue5 & 0x1f);
            }
            vector1->vx = dataValue7;
            vector1->vy = dataValue11;
            vector1->vz = (short)dataValue14;
            vector4 = vector1;
            gte_ldv0(vector1);
            gte_rtps_b();
            gte_stSXY2();
            gte_llv0_b();
            dataValue17 = gte_stIR1();
            dataValue19 = gte_stIR2();
            gte_lcv0_b();
            dataValue16 = gte_stIR1();
            dataValue18 = gte_stIR2();
            renderValue = *(ushort *)(renderData + 0x62);
            vector1[3].vz = (short)dataValue17;
            dataValue14 = dataValue14 - (uint)renderValue;
            renderValue = (ushort)((uint)dataValue14 >> 0x10);
            dataValue8 = renderValue >> 0xf;
            vector1[3].vy = (short)dataValue14;
            if (dataValue17 < 0) {
              dataValue8 = renderValue >> 0xf | 2;
            }
            vector1[3].pad = (short)dataValue19;
            if (dataValue19 < 0) {
              dataValue8 = dataValue8 | 4;
            }
            vector1[4].vx = (short)dataValue16;
            if (dataValue16 < 0) {
              dataValue8 = dataValue8 | 8;
            }
            vector1[4].vy = (short)dataValue18;
            if (dataValue18 < 0) {
              dataValue8 = dataValue8 | 0x10;
            }
            vector1[3].vx = dataValue8;
          }
          vector1 = vector5;
        } while (vector1 != vector6);
        dataValue9 = *(int *)(renderData + 0x2e0);
        vector4[2].vz = (short)dataValue9;
        vector4[2].pad = (short)((uint)dataValue9 >> 0x10);
        if (vector4 == (SVECTOR *)0x0) {
          return;
        }
        *(SVECTOR **)(dataValue9 + 0x10) = vector4;
        if (dataIndex < 3) {
          return;
        }
      }
      dataValue20 = dataValue20 + 1;
    }
    dataPointer2 = *(undefined4 **)(renderData + 0x68);
    dataValue17 = *(int *)(renderData + 0x2e0);
    dataValue20 = *(uint *)(renderData + 0xa0) & 0xf7ffffff;
    dataValue9 = *(int *)(dataValue17 + 0x10);
    dataValue14 = *(int *)(dataValue9 + 0x10);
    dataPointer1 = dataPointer2;
    dataIndex = *(int *)(dataValue17 + 0x14);
    if (*(int *)(dataValue17 + 0x14) != dataValue9) {
      do {
        dataPointer1 = dataPointer2;
        dataValue19 = dataIndex;
        if (dataValue19 == dataValue14) {
          *dataPointer1 = 0x4000000;
          dataPointer1[2] = *(undefined4 *)(dataValue17 + 8);
          dataPointer1[3] = *(undefined4 *)(dataValue9 + 8);
          dataValue4 = *(undefined4 *)(dataValue19 + 8);
          dataPointer1[1] = dataValue20;
          dataPointer1[4] = dataValue4;
          dataPointer2 = dataPointer1 + 5;
          break;
        }
        *dataPointer1 = dataPointer1 + -0x1ebffffa;
        dataPointer2 = dataPointer1 + 6;
        dataPointer1[2] = *(undefined4 *)(dataValue17 + 8);
        dataPointer1[3] = *(undefined4 *)(dataValue9 + 8);
        dataPointer1[4] = *(undefined4 *)(dataValue19 + 8);
        dataValue4 = *(undefined4 *)(dataValue14 + 8);
        dataPointer1[1] = dataValue20 | 0x8000000;
        dataPointer1[5] = dataValue4;
        continueProcessing = *(int *)(dataValue19 + 0x14) != dataValue14;
        dataIndex = *(int *)(dataValue19 + 0x14);
        dataValue9 = dataValue14;
        dataValue14 = *(int *)(dataValue14 + 0x10);
        dataValue17 = dataValue19;
      } while (continueProcessing);
    }
    dataValue9 = *(int *)(renderData + 0x68);
    *(undefined4 **)(renderData + 0x68) = dataPointer2;
    dataValue20 = *(int *)(renderData + 0x9c) + 2;
    dataValue21 = dataValue20 & 3;
    dataIndex = *(int *)(dataValue20 - dataValue21);
    dataValue20 = *(int *)(renderData + 0x9c) + 2;
    dataValue2 = dataValue20 & 3;
    dataPointer = (uint *)(dataValue20 - dataValue2);
    *dataPointer = *dataPointer & -1 << (dataValue2 + 1) * 8 | (uint)(dataValue9 << 8) >> (3 - dataValue2) * 8;
    dataValue20 = (int)dataPointer1 + 2U & 3;
    dataPointer = (uint *)(((int)dataPointer1 + 2U) - dataValue20);
    *dataPointer = *dataPointer & -1 << (dataValue20 + 1) * 8 |
              (dataIndex << (3 - dataValue21) * 8 | renderData & 0xffffffffU >> (dataValue21 + 1) * 8) >>
              (3 - dataValue20) * 8;
  }
  return;
}

undefined2 * FUN_80081a34(undefined2 *outputVector,short *inputVector,uint shiftAmount)

{
  short vectorY;
  short vectorZ;
  undefined2 *outputPointer;
  short *endPointer;

  endPointer = inputVector + 9;
  outputPointer = outputVector;
  do {
    vectorY = inputVector[1];
    vectorZ = inputVector[2];
    *outputPointer = (short)((int)*inputVector << (shiftAmount & 0x1f));
    outputPointer[1] = (short)((int)vectorY << (shiftAmount & 0x1f));
    outputPointer[2] = (short)((int)vectorZ << (shiftAmount & 0x1f));
    inputVector = inputVector + 3;
    outputPointer = outputPointer + 3;
  } while (inputVector != endPointer);
  return outputVector;
}

uint FUN_80081a78(int *vector1,short *vector2)

{
  longlong dotProduct;

  dotProduct = (longlong)(int)vector2[2] * (longlong)vector1[2] +
               (longlong)(int)*vector2 * (longlong)*vector1 +
               (longlong)(int)vector2[1] * (longlong)vector1[1];
  return (int)((ulonglong)dotProduct >> 0x20) * 0x100000 | (uint)dotProduct >> 0xc;
}

int FUN_80081af0(uint value1,uint value2)

{
  short result;
  int leadingZeros;
  uint shiftAmount;

  gte_ldLZCS(value2 ^ (int)value2 >> 0x1f | value1 ^ (int)value1 >> 0x1f);
  leadingZeros = gte_stLZCR();
  shiftAmount = 0x12 - leadingZeros;
  if (0 < (int)shiftAmount) {
    value2 = (int)value2 >> (shiftAmount & 0x1f);
    value1 = (int)value1 >> (shiftAmount & 0x1f);
  }
  result = FUN_80082e14((int)(short)value1, (int)(short)value2);
  return (int)result;
}

void FUN_80081c5c(void)

{
  FUN_8007c5f0((int)(uintptr_t)&DAT_801f0510);
  DAT_801f0564 = DAT_801f0544;
  return;
}

int FUN_80081c94(void)

{
  if (DAT_801f0676 == '\0') {
    return (uint)(DAT_801f0677 != '\0') << 1;
  }
  return 1;
}

int FUN_80081cc8(int commandBuffer,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int alignedValue;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedValue = *(int *)((commandBuffer + 2U) - alignment1);
  *(undefined *)(DAT_801c93ec + 3) = 0xc;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
            (alignedValue << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8
  ;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;
  alignedValue = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x34;
  return alignedValue;
}

undefined4 FUN_80081cf8(int interruptState)

{
  bool wasZero;
  int callbackResult;
  undefined4 result;
  code *callbackFunction;

  callbackResult = CheckCallback();
  result = 0;
  if (callbackResult == 0) {
    callbackFunction = FUN_8008c918;
    if (interruptState != 0) {
      callbackFunction = FUN_8008c948;
      DAT_80095ac4 = DAT_80095ac4 + -1;
    }
    callbackResult = DAT_80095ac4 + (uint)(interruptState == 0);
    wasZero = DAT_80095ac4 == 0;
    DAT_80095ac4 = callbackResult;
    if (wasZero) {
      (*callbackFunction)();
    }
    result = 0xffffffff;
  }
  return result;
}

uint FUN_80081d64(void)

{
  uint currentValue;
  uint calculatedValue;
  uint previousValue;
  uint sysclockValue;
  uint sysclockPrevious;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  currentValue = (uint)(ushort)TMR_HRETRACE_VAL;
  previousValue = (uint)DAT_801c951c;
  DAT_801c951c = (ushort)TMR_HRETRACE_VAL;
  sysclockValue = (uint)(ushort)TMR_SYSCLOCK_VAL;
  sysclockPrevious = (uint)DAT_801c951e;
  DAT_801c951e = (ushort)TMR_SYSCLOCK_VAL;
  uVar1 = currentValue;
  uVar3 = previousValue;
  if (uVar1 < uVar3) {
    uVar1 = uVar1 + 0xffff;
  }
  iVar4 = uVar1 - uVar3;
  DAT_801c9520 = (short)iVar4;
  uVar1 = (uint)(iVar4 * 0xa17b) >> 0x10;
  uVar3 = 0;
  if (0x868 < uVar1) {
    uVar3 = uVar1 - 0x868;
  }
  uVar2 = sysclockValue;
  if (uVar2 < sysclockPrevious) {
    uVar2 = uVar2 + 0xffff;
  }
  for (uVar2 = uVar2 - sysclockPrevious; uVar2 < uVar3; uVar2 = uVar2 + 0xffff) {
  }
  for (; (uVar1 + 0x868 < uVar2 && (0xfffe < uVar2)); uVar2 = uVar2 - 0xffff) {
  }
  DAT_801c9524 = DAT_801c9524 + uVar2;
  return DAT_801c9524;
}

void FUN_80081e74(void)

{
  DAT_801c9528 = FUN_80081d64();
  DAT_801c952c = (uint)DAT_801c9520;
  return;
}

int FUN_80081ea8(void)

{
  int currentTime;

  currentTime = FUN_80081d64();
  return currentTime - DAT_801c9528;
}

int FUN_80081ed0(void)

{
  uint currentTime;

  currentTime = (uint)DAT_801c9520;
  if ((int)currentTime < DAT_801c952c) {
    currentTime = currentTime + 0xffff;
  }
  return currentTime - DAT_801c952c;
}

void FUN_80081f2c(uint parameter1,int parameter2)

{
  GPU_REG1 = parameter2 << 10 | parameter1 | 0x5000000;
  return;
}

void FUN_80081f4c(void)

{
  int processingStatus;

  do {
    processingStatus = FUN_8007c4ec(7);
  } while (processingStatus == 0);
  return;
}

void FUN_80081f74(void)

{
  FUN_8007c5f0((int)(uintptr_t)&DAT_801f0510);
  DAT_801f056a = 0;
  DAT_801f056c = 0;
  DAT_801f056e = 0;
  return;
}

void FUN_80081fb0(int renderBuffer,short updateValue)

{
  undefined4 interruptState;

  interruptState = FUN_80081cf8(0);
  *(short *)(renderBuffer + 0x5a) = *(short *)(renderBuffer + 0x5a) + updateValue;
  FUN_80081cf8(interruptState);
  return;
}

int FUN_80082000(int bufferData)

{
  return *(int *)(bufferData + 0x50) + (uint)*(ushort *)(bufferData + 0x5c) * 0x800;
}

void FUN_80082014(void)

{
  uint currentFrame;

  currentFrame = (uint)DAT_801f056c;
  DAT_801f056c = (ushort)(currentFrame + 1);
  if (currentFrame + 1 == DAT_801f0564) {
    DAT_801f056c = 0;
  }
  FUN_80081fb0(&DAT_801f0510, 0xffffffff);
  return;
}

void FUN_80082054(void)

{
  undefined4 interruptState;
  uint bufferStatus;

  do {
    interruptState = FUN_80081cf8(0);
    bufferStatus = (uint)DAT_801f056a;
    if ((bufferStatus != DAT_801f0564) && (DAT_801f0676 == '\0')) {
      FUN_8007c4f8(&DAT_801f0510,8);
    }
    FUN_80081cf8(interruptState);
  } while (bufferStatus == 0);
  FUN_80082000(&DAT_801f0510);
  return;
}

undefined * FUN_800820e0(void)

{
  int heapTop;
  undefined *stackPointer;
  int heapEnd;
  undefined stackBuffer [16];

  heapTop = DAT_800a8d50;
  heapEnd = DAT_800a8d50 + DAT_800a8d54;
  stackPointer = stackBuffer + -heapEnd;
  if ((int)stackPointer < 0) {
    printf("Stack Overflow (%d bytes)\n",-(int)stackPointer);
    printf(" heap top = %08X\n",heapTop);
    printf(" heap end = %08X\n",heapEnd);
    printf(" stack    = %08X\n",stackBuffer);
  }
  return stackPointer;
}

void FUN_8008217c(undefined4 data1,undefined4 data2,undefined4 data3,undefined4 data4)

{
  DAT_801f0531 = 0x80;
  DAT_801f0534 = data3;
  DAT_801f0538 = data4;
  DAT_801f053c = &LAB_80082ee4;
  DAT_801f0540 = data1;
  DAT_801f0544 = data2;
  DAT_801f054a = 0;
  DAT_801f054c = 0;
  DAT_801f054e = 0;
  return;
}

void FUN_800821bc(void)

{
  int timeoutCounter;

  timeoutCounter = 0x2efb44;
  do {
    timeoutCounter = timeoutCounter + -1;
    if ((GPU_REG1 & 0x4000000) != 0) {
      return;
    }
  } while (timeoutCounter != 0);
  FUN_8007fe34();
  return;
}

void FUN_8008220c(int *outputVector,undefined4 *transformationMatrix,uint *inputVector,int *resultVector)

{
  int result1;
  int result2;
  int result3;
  int result4;
  int result5;
  int result6;
  uint vectorZ;
  int result7;
  uint vectorY;
  int result8;
  uint vectorX;
  uint uVar11;
  uint uVar9;
  uint uVar7;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int iVar10;

  gte_ldR11R12(*transformationMatrix);
  gte_ldR13R21(transformationMatrix[1]);
  gte_ldR22R23(transformationMatrix[2]);
  gte_ldR31R32(transformationMatrix[3]);
  gte_ldR33(transformationMatrix[4]);
  vectorX = *inputVector;
  vectorY = inputVector[1];
  vectorZ = inputVector[2];
  uVar11 = vectorX;
  uVar9 = vectorY;
  uVar7 = vectorZ;
  gte_ldVXY0(uVar11 & 0xfff | (uVar9 & 0xfff) << 0x10);
  gte_ldVZ0(uVar7 & 0xfff);
  gte_rtv0_b();
  gte_ldVXY2((int)uVar11 >> 0x18 & 0xffffU | ((int)uVar9 >> 0x18) << 0x10);
  gte_ldVZ2((int)uVar7 >> 0x18);
  iVar2 = gte_stIR1();
  iVar3 = gte_stIR2();
  iVar4 = gte_stIR3();
  gte_mvmva_b(0,0,2,3,0);
  gte_ldVXY1((int)uVar11 >> 0xc & 0xfffU | ((int)uVar9 >> 0xc & 0xfffU) << 0x10);
  gte_ldVZ1((int)uVar7 >> 0xc & 0xfff);
  iVar1 = gte_stIR1();
  iVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_mvmva_b(0,0,1,3,0);
  iVar10 = resultVector[1];
  read_mt(iVar6 * 0x1000,iVar5,iVar6);
  iVar8 = resultVector[2];
  *outputVector = iVar2 + iVar1 * 0x1000 + iVar6 * 0x1000 + *resultVector;
  outputVector[1] = iVar3 + iVar5 * 0x1001 + iVar10;
  outputVector[2] = iVar4 + iVar6 * 0x1001 + iVar8;
  return;
}

void FUN_80082324(undefined2 *outputMatrix,undefined2 *inputMatrix)

{
  undefined2 value1;
  undefined2 value2;

  if (inputMatrix != outputMatrix) {
    value1 = inputMatrix[3];
    value2 = inputMatrix[6];
    *outputMatrix = *inputMatrix;
    outputMatrix[1] = value1;
    outputMatrix[2] = value2;
    value1 = inputMatrix[4];
    value2 = inputMatrix[7];
    outputMatrix[3] = inputMatrix[1];
    outputMatrix[4] = value1;
    outputMatrix[5] = value2;
    value1 = inputMatrix[5];
    value2 = inputMatrix[8];
    outputMatrix[6] = inputMatrix[2];
    outputMatrix[7] = value1;
    outputMatrix[8] = value2;
    return;
  }
  outputMatrix[1] = outputMatrix[1];
  outputMatrix[3] = outputMatrix[3];
  outputMatrix[2] = outputMatrix[2];
  outputMatrix[6] = outputMatrix[6];
  outputMatrix[5] = outputMatrix[5];
  outputMatrix[7] = outputMatrix[7];
  return;
}

void FUN_800823ac(int *outputVector,undefined4 *transformationMatrix,uint *inputVector)

{
  uint vectorX;
  int result1;
  int result2;
  int result3;
  int result4;
  uint vectorY;
  int result5;
  uint vectorZ;
  int result6;

  gte_ldR11R12(*transformationMatrix);
  gte_ldR13R21(transformationMatrix[1]);
  gte_ldR22R23(transformationMatrix[2]);
  gte_ldR31R32(transformationMatrix[3]);
  gte_ldR33(transformationMatrix[4]);
  vectorX = *inputVector;
  vectorY = inputVector[1];
  vectorZ = inputVector[2];
  gte_ldVXY0(vectorX & 0xfff | (vectorY & 0xfff) << 0x10);
  gte_ldVZ0(vectorZ & 0xfff);
  gte_rtv0_b();
  gte_ldVXY2((int)vectorX >> 0x18 & 0xffffU | ((int)vectorY >> 0x18) << 0x10);
  gte_ldVZ2((int)vectorZ >> 0x18);
  result2 = gte_stIR1();
  result3 = gte_stIR2();
  result4 = gte_stIR3();
  gte_mvmva_b(0,0,2,3,0);
  gte_ldVXY1((int)vectorX >> 0xc & 0xfffU | ((int)vectorY >> 0xc & 0xfffU) << 0x10);
  gte_ldVZ1((int)vectorZ >> 0xc & 0xfff);
  result1 = gte_stIR1();
  result5 = gte_stIR2();
  result6 = gte_stIR3();
  gte_mvmva_b(0,0,1,3,0);
  read_mt(result6 * 0x1000,result5,result6);
  *outputVector = result2 + result1 * 0x1000 + result6 * 0x1000;
  outputVector[1] = result3 + result5 * 0x1001;
  outputVector[2] = result4 + result6 * 0x1001;
  return;
}

void FUN_800824ac(undefined4 textureData,short *textureParams)

{
  uint paramX;
  uint paramY;

  paramX = (uint)*textureParams;
  paramY = (uint)textureParams[1];
  FUN_80082f74(textureData,(paramY & 0x3ff) << 10 | paramX & 0x3ff | 0xe3000000,
               ((paramY + (int)textureParams[3]) - 1 & 0x3ff) << 10 | (paramX + (int)textureParams[2]) - 1 & 0x3ff
               | 0xe4000000,(paramY & 0x7ff) << 0xb | paramX & 0x7ff | 0xe5000000);
  return;
}

undefined2 * FUN_80082530(undefined2 *outputVector,short *inputVector,uint shiftAmount)

{
  short vectorY;
  short vectorZ;
  undefined2 *outputPointer;
  short *endPointer;

  endPointer = inputVector + 9;
  outputPointer = outputVector;
  do {
    vectorY = inputVector[1];
    vectorZ = inputVector[2];
    *outputPointer = (short)((int)*inputVector >> (shiftAmount & 0x1f));
    outputPointer[1] = (short)((int)vectorY >> (shiftAmount & 0x1f));
    outputPointer[2] = (short)((int)vectorZ >> (shiftAmount & 0x1f));
    inputVector = inputVector + 3;
    outputPointer = outputPointer + 3;
  } while (inputVector != endPointer);
  return outputVector;
}

int FUN_8008264c(int arrayData,int searchValue)

{
  int currentValue;
  int *arrayPointer;
  int currentIndex;

  arrayPointer = (int *)(arrayData + 0x1ec);
  currentIndex = 0x24;
  do {
    currentValue = *arrayPointer;
    arrayPointer = arrayPointer + 1;
    if (currentValue == searchValue) {
      return currentIndex;
    }
    currentIndex = currentIndex + 1;
  } while (arrayPointer != (int *)(arrayData + 0x23c));
  return searchValue;
}

int FUN_8008267c(int arrayData,int elementToRemove)

{
  int currentValue;
  int *arrayPointer;
  int *nextPointer;
  int foundIndex;
  int previousValue;
  int iVar4;
  int iVar5;

  foundIndex = 0;
  previousValue = -1;
  iVar4 = 0;
  arrayPointer = (int *)(arrayData + 0x1ec);
  do {
    currentValue = *arrayPointer;
    if (currentValue == elementToRemove) {
      *arrayPointer = 0;
    }
    nextPointer = arrayPointer + 1;
    if ((currentValue + 1U | previousValue + 1U) == 0) {
      arrayPointer[-1] = elementToRemove;
      iVar5 = iVar4;
      previousValue = iVar4;
    }
    iVar4 = iVar4 + 1;
    arrayPointer = nextPointer;
  } while (arrayPointer != (int *)(arrayData + 0x23c));
  return iVar5;
}

void FUN_800826c8(int renderData)

{
  char commandType;
  int commandIndex;
  int commandOffset;
  char *commandPointer;
  char *currentCommand;
  int nextCommand;
  char commandStatus;
  int commandData;
  int commandCount;
  char *pcVar4;
  char *pcVar5;
  int iVar8;
  int iVar9;
  char cVar1;
  char cVar7;

  FUN_8008ce30(renderData + 0x23c,0,0xf);
  commandData = renderData + 0xc;
  commandCount = 0;
  iVar9 = 0;
  iVar8 = renderData + 0xc;
  do {
    currentCommand = (char *)(commandData + 6);
    commandData = commandData + 0x20;
    if (*currentCommand == 'Q') {
      commandStatus = '\x01';
      nextCommand = commandCount;
      do {
        commandIndex = renderData + nextCommand * 0x20 + 0xc;
        commandOffset = nextCommand + 0x23c;
        nextCommand = (int)*(char *)(commandIndex + 7);
        if ((*(byte *)(commandIndex + 6) & 0xf0) != 0x50) {
          commandStatus = '\0';
          break;
        }
        *(undefined *)(renderData + commandOffset) = 2;
      } while (nextCommand != -1);
      currentCommand = (char *)(renderData + 0x23c);
      pcVar4 = (char *)(renderData + 0x24b);
      do {
        commandPointer = currentCommand + 1;
        if (*currentCommand == '\x02') {
          *currentCommand = commandStatus;
        }
        pcVar5 = pcVar4;
        currentCommand = commandPointer;
        pcVar4 = pcVar5;
      } while (pcVar4 != (char *)(renderData + 0x24b));
    }
    iVar9 = iVar9 + 1;
    if (iVar8 == renderData + 0x1ec) {
      pcVar5 = (char *)(renderData + 0x23c);
      pcVar4 = (char *)(renderData + 0x24b);
      do {
        cVar7 = *pcVar5;
        cVar1 = (char)pcVar5;
        pcVar5 = pcVar5 + 1;
        if (cVar7 == '\0') {
          *pcVar4 = cVar1 - (char)(char *)(renderData + 0x23c);
          pcVar4 = pcVar4 + 1;
        }
      } while (pcVar5 != (char *)(renderData + 0x24b));
      *(char *)(renderData + 0x25a) = ((char)pcVar4 + -0x4b) - (char)renderData;
      iVar8 = renderData + 0xc;
      pcVar5 = (char *)(renderData + 0x23c);
      do {
        if ((*pcVar5 == '\0') && (*(char *)(iVar8 + 6) != -0x60)) {
          *pcVar5 = -1;
          FUN_8008299c(iVar8);
        }
        iVar8 = iVar8 + 0x20;
        pcVar5 = pcVar5 + 1;
      } while (iVar8 != renderData + 0x1ec);
      return;
    }
  } while( true );
}

int FUN_80082814(int arrayData,undefined4 searchValue)

{
  int result;
  int currentSlot;

  currentSlot = arrayData + 0xc;
  while ((*(char *)(currentSlot + 6) != 'Q' || (result = FUN_8008cf00(searchValue, currentSlot + 8), result != 0))) {
    currentSlot = currentSlot + 0x20;
    if (currentSlot == arrayData + 0x1ec) {
      return 0;
    }
  }
  return currentSlot;
}

int FUN_8008287c(int arrayData,undefined4 searchValue,undefined *outputBuffer)

{
  char nextIndex;
  int foundSlot;
  int currentSlot;

  foundSlot = FUN_80082814(arrayData, searchValue);
  currentSlot = foundSlot;
  if (foundSlot != 0) {
    do {
      nextIndex = *(char *)(currentSlot + 7);
      *outputBuffer = *(undefined *)(currentSlot + 4);
      outputBuffer = outputBuffer + 1;
      currentSlot = arrayData + nextIndex * 0x20 + 0xc;
    } while (-1 < nextIndex);
  }
  return foundSlot;
}

void FUN_800828e0(int arrayData)

{
  int currentSlot;

  currentSlot = arrayData + 0xc;
  do {
    FUN_8008299c(currentSlot);
    currentSlot = currentSlot + 0x20;
  } while (currentSlot != arrayData + 0x1ec);
  FUN_8008ce30(arrayData + 0x1ec,0xffffffff,0x50);
  return;
}

int FUN_80082930(int arrayData,int slotCount)

{
  char slotIndex;
  byte slotStatus;
  int slotData;
  char *slotPointer;
  int previousSlot;
  int firstSlot;
  char *endPointer;

  firstSlot = 0;
  slotPointer = (char *)(arrayData + 0x24b);
  endPointer = slotPointer + slotCount;
  previousSlot = 0;
  do {
    slotIndex = *slotPointer;
    slotPointer = slotPointer + 1;
    *(undefined *)(arrayData + slotIndex + 0x23c) = 0;
    slotData = arrayData + slotIndex * 0x20 + 0xc;
    *(char *)(slotData + 4) = slotIndex + '\x01';
    if (previousSlot != 0) {
      *(char *)(previousSlot + 7) = slotIndex;
    }
    *(undefined *)(slotData + 7) = 0xff;
    slotStatus = slotPointer < endPointer ^ 0x53;
    if (firstSlot == 0) {
      slotStatus = 0x51;
      firstSlot = slotData;
    }
    *(byte *)(slotData + 6) = slotStatus;
    previousSlot = slotData;
  } while (slotPointer != endPointer);
  return firstSlot;
}

void FUN_8008299c(int slotData)

{
  FUN_8008ce30(slotData, 0, 0x20);
  *(undefined *)(slotData + 6) = 0xa0;
  *(undefined *)(slotData + 7) = 0xff;
  return;
}

void FUN_800829d8(undefined4 *outputData,undefined renderFlag,undefined *inputData)

{
  undefined dataValue1;
  undefined2 dataValue2;

  dataValue2 = *(undefined2 *)(inputData + 8);
  *outputData = *(undefined4 *)(inputData + 4);
  dataValue1 = *inputData;
  *(undefined *)(outputData + 1) = renderFlag;
  *(undefined *)((int)outputData + 6) = dataValue1;
  dataValue1 = inputData[0x7e];
  *(char *)((int)outputData + 7) = (char)dataValue2;
  *(undefined *)((int)outputData + 5) = dataValue1;
  FUN_8008cedc(outputData + 2,inputData + 10);
  return;
}

void FUN_80082a20(uint *sourceData,uint *destinationData)

{
  char dataIndex;
  undefined dataValue;
  undefined uVar2;
  char cVar1;

  FUN_8008ce30(destinationData,0,0x80);
  dataIndex = *(char *)((int)sourceData + 7);
  destinationData[1] = *sourceData;
  *destinationData = (uint)*(byte *)((int)sourceData + 6);
  cVar1 = dataIndex;
  uVar2 = *(undefined *)((int)sourceData + 5);
  *(short *)(destinationData + 2) = (short)cVar1;
  *(undefined *)((int)destinationData + 0x7e) = uVar2;
  FUN_8008cedc((int)destinationData + 10,sourceData + 2);
  uVar2 = FUN_80082b78(destinationData);
  *(undefined *)((int)destinationData + 0x7f) = uVar2;
  return;
}

void FUN_80082a94(undefined4 renderParameter)

{
  FUN_8007dc40(&DAT_801f0d00, renderParameter);
  return;
}

uint FUN_80082b78(uint *dataArray)

{
  uint currentValue;
  uint checksum;
  uint *endPointer;

  checksum = 0;
  endPointer = dataArray + 0x20;
  do {
    currentValue = *dataArray;
    dataArray = dataArray + 1;
    checksum = checksum ^ currentValue;
  } while (dataArray != endPointer);
  checksum = checksum ^ checksum >> 0x10;
  return (checksum ^ checksum >> 8) & 0xff;
}

void FUN_80082ba8(dword dmaAddress)

{
  FUN_8007af30();
  DMA_GPU_MADR = dmaAddress;
  DMA_GPU_BCR = 0;
  DMA_GPU_CHCR = 0x1000401;
  GPU_REG1 = 0x4000002;
  return;
}

void FUN_80082bfc(int baseAddress,dword elementCount)

{
  DMA_DPCR = DMA_DPCR | 0x8000000;
  DMA_OTC_MADR = baseAddress + (elementCount - 1) * 4;
  DMA_OTC_BCR = elementCount;
  DMA_OTC_CHCR = 0x11000002;
  return;
}

void FUN_80082c3c(void)

{
  GPU_REG1 = 0x1000000;
  return;
}

uint FUN_80082c58(undefined2 *outputVector,uint *inputVector)

{
  int leadingZeros;
  uint absX;
  uint absY;
  uint absZ;
  uint shiftAmount;
  int negativeShift;
  undefined2 normalizedZ;
  uint vectorZ;
  undefined2 normalizedX;
  uint vectorX;
  undefined2 normalizedY;
  uint vectorY;

  vectorX = *inputVector;
  vectorY = inputVector[1];
  absX = vectorX;
  if ((int)vectorX < 0) {
    absX = -vectorX;
  }
  vectorZ = inputVector[2];
  absY = vectorY;
  if ((int)vectorY < 0) {
    absY = -vectorY;
  }
  absZ = vectorZ;
  if ((int)vectorZ < 0) {
    absZ = -vectorZ;
  }
  gte_ldLZCS(absX | absY | absZ);
  leadingZeros = gte_stLZCR();
  shiftAmount = 0x13 - leadingZeros;
  negativeShift = -shiftAmount;
  if ((int)shiftAmount < 0) {
    normalizedX = (undefined2)(vectorX << (negativeShift & 0x1f));
    normalizedY = (undefined2)(vectorY << (negativeShift & 0x1f));
    normalizedZ = (undefined2)(vectorZ << (negativeShift & 0x1f));
  }
  else {
    normalizedX = (undefined2)((int)vectorX >> (shiftAmount & 0x1f));
    normalizedY = (undefined2)((int)vectorY >> (shiftAmount & 0x1f));
    normalizedZ = (undefined2)((int)vectorZ >> (shiftAmount & 0x1f));
  }
  *outputVector = normalizedX;
  outputVector[1] = normalizedY;
  outputVector[2] = normalizedZ;
  return shiftAmount;
}

int FUN_80082ce0(ushort *outputVector,ushort *inputVector)

{
  int vectorSum;
  ushort normalizedZ;
  int vectorZ;
  ushort normalizedY;
  int vectorY;
  ushort normalizedX;
  int vectorLength;
  undefined4 gteResult;

  normalizedX = *inputVector;
  normalizedY = inputVector[1];
  vectorY = (int)(short)normalizedY;
  normalizedZ = inputVector[2];
  vectorZ = (int)(short)normalizedZ;
  gte_ldsv_((int)(short)normalizedX,vectorY,vectorZ);
  gte_sqr0_b(0);
  vectorSum = (int)(short)(normalizedX | normalizedY | normalizedZ);
  vectorLength = 0;
  if (vectorSum != 0) {
    read_mt(vectorY,vectorSum,vectorZ);
    vectorLength = FUN_80081288(vectorY + vectorSum + vectorZ,0);
    gte_ldsv_((int)(short)*inputVector,(int)(short)inputVector[1],(int)(short)inputVector[2]);
    gte_ldIR0(0x1000000 / vectorLength);
    gte_gpf12();
    gteResult = gte_stIR1();
    normalizedX = (ushort)gteResult;
    gteResult = gte_stIR2();
    normalizedY = (ushort)gteResult;
    gteResult = gte_stIR3();
    normalizedZ = (ushort)gteResult;
  }
  *outputVector = normalizedX;
  outputVector[1] = normalizedY;
  outputVector[2] = normalizedZ;
  return vectorLength;
}

int FUN_80082da8(short inputValue)

{
  int result;
  int value;

  value = (int)inputValue;
  if (value < -0xfff) {
    return -0x400;
  }
  result = 0x400;
  if (value < 0x1000) {
    if (value < 0) {
      return (int)-*(short *)(&DAT_800a2ac4 + value * -2);
    }
    result = (int)*(short *)(&DAT_800a2ac4 + value * 2);
  }
  return result;
}

int FUN_80082e14(ushort value1,ushort value2)

{
  int absValue2;
  int absValue1;
  int value1Int;
  int value2Int;
  int absValue2Copy;
  int maxValue;
  uint quadrant;

  value2Int = (int)(short)value2;
  value1Int = (int)(short)value1;
  if ((value2 | value1) != 0) {
    absValue2Copy = value2Int;
    if (value2Int < 0) {
      absValue2Copy = -value2Int;
    }
    absValue1 = value1Int;
    if (value1Int < 0) {
      absValue1 = -value1Int;
    }
    maxValue = absValue1;
    absValue2 = absValue2Copy;
    if (absValue1 <= absValue2Copy) {
      maxValue = absValue2Copy;
      absValue2 = absValue1;
    }
    quadrant = value1Int >> 0x1f & 4;
    if (value2Int < 0) {
      quadrant = quadrant | 2;
    }
    if (absValue2Copy < absValue1) {
      quadrant = quadrant | 1;
    }
    return (((int)*(short *)(&DAT_800a4ac8 + ((absValue2 << 0xc) / maxValue) * 2) ^
            (int)(char)(&DAT_800a2a8c)[quadrant]) + (int)*(short *)(&DAT_800a2a94 + quadrant * 2)) *
           0x10000 >> 0x10;
  }
  return 0;
}

void FUN_80082f74(int commandBuffer,undefined4 commandData1,undefined4 commandData2,undefined4 commandData3)

{
  uint alignment1;
  int alignedValue;
  uint alignment2;
  uint *alignedPointer;
  uint in_t0;

  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedValue = *(int *)((commandBuffer + 2U) - alignment1);
  *(undefined *)(DAT_801c93ec + 3) = 3;
  alignment2 = ((uintptr_t)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);
  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
            (alignedValue << (3 - alignment1) * 8 | in_t0 & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;
  alignment1 = ((uintptr_t)commandBuffer + 2U) & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uintptr_t)DAT_801c93ec << 8) >> (3 - alignment1) * 8;
  *(undefined4 *)(DAT_801c93ec + 4) = commandData1;
  *(undefined4 *)(DAT_801c93ec + 8) = commandData2;
  *(undefined4 *)(DAT_801c93ec + 0xc) = commandData3;
  DAT_801c93ec = DAT_801c93ec + 0x10;
  return;
}

void FUN_80082fac(int renderData1,int renderData2)

{
  undefined stackBuffer [12288];
  undefined4 dataValue1;
  undefined4 dataValue2;
  int dataIndex1;
  int dataIndex2;
  int dataIndex3;
  undefined4 dataValue3;
  int dataIndex4;
  int dataIndex5;
  int dataIndex6;
  undefined *bufferPointer;
  undefined4 *dataPointer;

  dataIndex3 = renderData1 + -1;
  dataIndex6 = renderData2 + -1;
  bufferPointer = stackBuffer;
  dataPointer = &dataValue1;
  dataValue1 = 0;
  dataValue2 = 0;
  dataValue3 = 0;
  dataIndex1 = renderData1;
  dataIndex2 = renderData1;
  dataIndex4 = renderData2;
  dataIndex5 = renderData2;
  FUN_800847d0((code **)0x0);
  return;
}

void FUN_80083004(char *stringPointer)

{
  char currentChar;

  do {
    currentChar = *stringPointer;
    stringPointer = stringPointer + 1;
  } while (currentChar != '\0');
  return;
}

void FUN_80083030(int **listHead,int **newData)

{
  int *currentNode;
  undefined4 interruptState;
  int *nextNode;
  int *previousNode;

  interruptState = FUN_80081cf8(0);
  currentNode = *listHead;
  nextNode = (int *)0x0;
  do {
    previousNode = nextNode;
    nextNode = currentNode;
    if (nextNode == (int *)0x0) break;
    currentNode = (int *)nextNode[1];
  } while ((int *)nextNode[3] <= newData[3]);
  *newData = previousNode;
  newData[1] = nextNode;
  if (nextNode != (int *)0x0) {
    *nextNode = (int)newData;
  }
  if (previousNode == (int *)0x0) {
    *listHead = (int *)newData;
  }
  else {
    previousNode[1] = (int)newData;
  }
  FUN_80081cf8(interruptState);
  return;
}

void FUN_800830cc(int **listHead,int *dataToRemove)

{
  undefined4 interruptState;
  int *nextNode;
  int *previousNode;

  interruptState = FUN_80081cf8(0);
  previousNode = *dataToRemove;
  nextNode = (int *)dataToRemove[1];
  if (nextNode != (int *)0x0) {
    *nextNode = previousNode;
  }
  if (previousNode == 0) {
    *listHead = nextNode;
  }
  else {
    *(int **)(previousNode + 4) = nextNode;
  }
  FUN_80081cf8(interruptState);
  return;
}

void FUN_80083134(int *callbackList)

{
  code **callbackFunction;
  int currentNode;

  currentNode = *callbackList;
  while (currentNode != 0) {
    callbackFunction = (code **)(currentNode + 8);
    currentNode = *(int *)(currentNode + 4);
    (**callbackFunction)();
  }
  return;
}

uint FUN_80083178(byte *dataBuffer,int dataSize)

{
  byte currentByte;
  uint crcValue;
  byte *endPointer;

  crcValue = 0xffffffff;
  endPointer = dataBuffer + dataSize;
  if (dataSize != 0) {
    do {
      currentByte = *dataBuffer;
      dataBuffer = dataBuffer + 1;
      crcValue = *(uint *)(&DAT_800a6acc + ((crcValue ^ currentByte) & 0xff) * 4) ^ crcValue >> 8;
    } while (dataBuffer != endPointer);
  }
  return ~crcValue;
}

int FUN_800831bc(int tableIndex,undefined4 searchData,uint searchValue)

{
  uint tableValue1;
  int result;
  uint tableValue2;
  uint tableValue3;
  int foundIndex;
  uint tableValue4;
  int iVar2;
  uint uVar1;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  int iVar5;
  uint param_3;

  searchValue = searchValue & 0xff;
  tableValue1 = (uint)*(ushort *)(&DAT_800a6eec + tableIndex * 5);
  tableValue3 = (uint)*(ushort *)((int)&DAT_800a6eec + tableIndex * 0x14 + 2);
  tableValue2 = (uint)*(ushort *)(&DAT_800a6ef0 + tableIndex * 5);
  tableValue4 = (uint)*(ushort *)((int)&DAT_800a6ef0 + tableIndex * 0x14 + 2);
  uVar1 = tableValue1;
  uVar3 = tableValue2;
  uVar4 = tableValue3;
  uVar6 = tableValue4;
  param_3 = searchValue;
  if (searchValue < tableValue1) {
    return 0;
  }
  foundIndex = 0;
  if (searchValue < tableValue3) {
    iVar2 = uVar4 - uVar1;
    uVar3 = uVar1;
  }
  else {
    if (param_3 < uVar3) {
      return 0x80;
    }
    iVar5 = 0x80;
    if (uVar6 <= param_3) {
      return 0xff;
    }
    iVar2 = uVar6 - uVar3;
  }
  return (int)((param_3 - uVar3) * 0x80) / iVar2 + iVar5;
}

int FUN_80083250(int tableIndex,int dataIndex,uint inputValue)

{
  uint tableValue1;
  uint tableValue2;

  inputValue = inputValue & 0xff;
  tableValue2 = (uint)*(byte *)(&DAT_800a6eec + tableIndex * 5 + dataIndex + 1);
  tableValue1 = (uint)*(byte *)((int)&DAT_800a6eec + (dataIndex + -1) * 4 + tableIndex * 0x14 + 10);
  if (inputValue < tableValue2) {
    return 0;
  }
  if (tableValue1 <= inputValue) {
    return 0xff;
  }
  return (int)((inputValue - tableValue2) * 0x100) / (int)(tableValue1 - tableValue2);
}

void FUN_800833a0(undefined4 *callbackPointer)

{
  *callbackPointer = &LAB_800908ec;
  return;
}

void FUN_800833b4(undefined4 *callbackPointer,uint flag)

{
  *callbackPointer = &LAB_800908ec;
  if ((flag & 1) != 0) {
    FUN_80086060();
  }
  return;
}

undefined4 FUN_800833e8(int *renderStructure)

{
  (**(code **)(*renderStructure + 0xc))();
  return 0;
}

undefined4 * FUN_800834bc(void)

{
  if (DAT_801c9400 == 0) {
    FUN_80085b78(&DAT_801c9400,"14ScreenViewLoop");
  }
  return &DAT_801c9400;
}

void FUN_80083868(int polygonData)

{
  FUN_8008ce30(polygonData, 0, 0x3c);
  *(undefined *)(polygonData + 0x18) = 0x1e;

  *(undefined *)(polygonData + 0x19) = 0x25;
  *(undefined4 *)(polygonData + 4) = 0xffffffff;
  return;
}

void FUN_800838b4(uint *renderState,uint newFlags)

{
  byte maxValue;
  byte resetValue;
  uint currentValue;
  uint previousFlags;
  uint originalValue;
  byte *currentByte;
  byte *nextByte;
  uint bitMask;
  uint resultFlags;

  bitMask = 1;
  resultFlags = renderState[5];
  maxValue = *(byte *)(renderState + 6);
  resetValue = *(byte *)((int)renderState + 0x19);
  previousFlags = renderState[1];
  originalValue = *renderState;
  *renderState = 0xffffffff;
  renderState[1] = newFlags;
  currentValue = previousFlags ^ newFlags;
  renderState[2] = renderState[2] | newFlags;
  renderState[3] = renderState[3] | currentValue & newFlags;
  renderState[4] = (renderState[4] | currentValue & previousFlags) & originalValue;
  currentByte = (byte *)((int)renderState + 0x1a);
  do {
    currentValue = *currentByte + 1;
    if ((newFlags & bitMask) == 0) {
      currentValue = 0;
    }
    nextByte = currentByte + 1;
    if (currentValue == resetValue) {
      currentValue = (uint)maxValue;
    }
    *currentByte = (byte)currentValue;
    if (currentValue == maxValue) {
      resultFlags = resultFlags | bitMask;
    }
    bitMask = bitMask << 1;
    currentByte = nextByte;
  } while (nextByte != (byte *)((int)renderState + 0x3a));
  renderState[5] = resultFlags;
  return;
}

void FUN_80083958(int renderStructure)

{
  undefined4 interruptState;

  interruptState = FUN_80081cf8(0);
  *(undefined4 *)(renderStructure + 8) = 0;
  *(undefined4 *)(renderStructure + 0xc) = 0;
  *(undefined4 *)(renderStructure + 0x10) = 0;
  *(undefined4 *)(renderStructure + 0x14) = 0;
  FUN_80081cf8(interruptState);
  return;
}

undefined4 * FUN_80083998(int sourceStructure,undefined4 *destinationStructure)

{
  undefined4 interruptState;
  undefined4 field1;
  undefined4 field2;
  undefined4 field3;

  interruptState = FUN_80081cf8(0);
  field1 = *(undefined4 *)(sourceStructure + 0xc);
  field2 = *(undefined4 *)(sourceStructure + 0x10);
  field3 = *(undefined4 *)(sourceStructure + 0x14);
  *destinationStructure = *(undefined4 *)(sourceStructure + 8);
  destinationStructure[1] = field1;
  destinationStructure[2] = field2;
  destinationStructure[3] = field3;
  FUN_80083958(sourceStructure);
  FUN_80081cf8(interruptState);
  return destinationStructure;
}

void FUN_80083a04(int renderStructure)

{
  undefined4 interruptState;

  interruptState = FUN_80081cf8(0);
  *(undefined4 *)(renderStructure + 0xc) = 0;
  *(undefined4 *)(renderStructure + 0x10) = 0xffffffff;
  FUN_80083958(renderStructure + 0xc);
  FUN_80081cf8(interruptState);
  return;
}

uint FUN_80083a4c(uint bitMask,byte *dataBuffer,int bufferSize)

{
  uint result;

  result = 0;
  if (bufferSize != 0) {
    do {
      if ((bitMask & 1 << (*dataBuffer & 0x1f)) != 0) {
        result = result | 1 << (dataBuffer[1] & 0x1f);
      }
      bufferSize = bufferSize + -1;
      dataBuffer = dataBuffer + 2;
    } while (bufferSize != 0);
  }
  return result;
}

uint FUN_80083a88(int dataArray,ushort *valueBuffer,int bufferSize)

{
  byte *currentByte;
  uint result;

  result = 0;
  if (bufferSize != 0) {
    currentByte = (byte *)((int)valueBuffer + 3);
    do {
      if (*valueBuffer <= *(ushort *)((uint)currentByte[-1] * 2 + dataArray)) {
        result = result | 1 << (*currentByte & 0x1f);
      }
      currentByte = currentByte + 4;
      bufferSize = bufferSize + -1;
      valueBuffer = valueBuffer + 2;
    } while (bufferSize != 0);
  }
  return result;
}

uint FUN_80083ae0(uint *randomSeed)

{
  uint randomValue;

  randomValue = *randomSeed * 0x11 + 0x11;
  *randomSeed = randomValue;
  return randomValue ^ (randomValue * 0x10000 | randomValue >> 0x10);
}

undefined *
FUN_80083b0c(undefined4 unused1,undefined4 unused2,undefined4 dataSize,undefined4 bufferSize)

{
  int systemStatus;
  undefined *memoryBuffer;
  undefined4 callbackAddress;

  FUN_800847d0(DAT_801c9530);
  memoryBuffer = &DAT_801c9568;
  callbackAddress = 0x80083b3c;
  DAT_801c9530 = 0;
  FUN_8007ad90(&DAT_801c9568, 2);
  systemStatus = FUN_8007ad58(&DAT_801c9538);
  if (systemStatus == 0) {
    FUN_8007ad90(&DAT_801c9568, 1);
  }
  return memoryBuffer;
}

undefined4 FUN_80083bd4(int dataSize,int bufferSize,int systemConfig,undefined4 *systemData)

{
  int systemStatus;

  DAT_801c9530 = systemData;
  DAT_801c9534 = systemConfig;
  systemData[2] = dataSize;
  systemData[3] = dataSize;
  *systemData = 0x80083b3c;
  systemData[1] = 0;
  systemData[4] = dataSize + -1;
  if (systemConfig == 0) {
    systemConfig = -1;
  }
  systemData[7] = &LAB_80083b7c;
  systemData[10] = bufferSize + systemConfig;
  systemData[8] = bufferSize;
  systemData[9] = bufferSize;
  systemData[0xb] = systemData + 0x14;
  systemData[0xc] = systemData + 0xc14;
  systemStatus = FUN_8007ad58(&DAT_801c9568);
  if (systemStatus == 0) {
    FUN_80083b0c(0, 0, dataSize, bufferSize);
  }
  else if (systemStatus != 1) {
    return 1;
  }
  return 0;
}

undefined4 FUN_80083cac(void)

{
  int systemStatus;

  if (DAT_801c9530 != 0) {
    systemStatus = FUN_8007ad58(&DAT_801c9568);
    if (systemStatus != 0) {
      if (systemStatus == 1) {
        return 0;
      }
      return 1;
    }
    FUN_8007ad90(&DAT_801c9538, 1);
  }
  return 1;
}

uint * FUN_80083d0c(uint *outputBuffer,byte *compressedData,int dataSize)

{
  undefined currentByte;
  uint compressedValue;
  byte *currentPointer;
  uint alignment;
  int copyLength;
  uint *sourcePointer;
  uint *destinationPointer;
  uint controlBits;
  uint bitCounter;

  controlBits = 0;
  bitCounter = 0;
  destinationPointer = outputBuffer;
  if (0 < dataSize) {
    do {
      controlBits = (int)controlBits >> 1;
      currentPointer = compressedData;
      if (bitCounter == 0) {
        controlBits = (uint)*compressedData;
        currentPointer = compressedData + 1;
      }
      alignment = (uint)currentPointer & 3;
      compressedValue = compressedValue & -1 << (4 - alignment) * 8 | *(uint *)(currentPointer + -alignment) >> alignment * 8;
      compressedData = currentPointer + 1;
      if ((controlBits & 1) == 0) {
        *(char *)destinationPointer = (char)compressedValue;
        destinationPointer = (uint *)((int)destinationPointer + 1);
        dataSize = dataSize + -1;
      }
      else {
        alignment = (uint)(currentPointer + 3) & 3;
        compressedValue = *(int *)(currentPointer + 3 + -alignment) << (3 - alignment) * 8 |
                          compressedValue & 0xffffffffU >> (alignment + 1) * 8;
        compressedData = currentPointer + 2;
        alignment = compressedValue >> 8 & 0x7f;
        if ((compressedValue >> 8 & 0x80) != 0) {
          alignment = alignment << 8 | compressedValue >> 0x10 & 0xff;
          compressedData = currentPointer + 3;
        }
        copyLength = (compressedValue & 0xff) + 3;
        dataSize = dataSize - copyLength;
        if (dataSize < 0) {
          copyLength = copyLength + dataSize;
        }
        sourcePointer = (uint *)((int)destinationPointer - (alignment + 1));
        if (3 < alignment + 1) {
          for (; 3 < copyLength; copyLength = copyLength + -4) {
            compressedValue = *sourcePointer;
            *destinationPointer = compressedValue;
            sourcePointer = sourcePointer + 1;
            destinationPointer = destinationPointer + 1;
          }
        }
        for (; copyLength != 0; copyLength = copyLength + -1) {
          currentByte = *(undefined *)sourcePointer;
          sourcePointer = (uint *)((int)sourcePointer + 1);
          *(undefined *)destinationPointer = currentByte;
          destinationPointer = (uint *)((int)destinationPointer + 1);
        }
      }
      bitCounter = bitCounter + 1 & 7;
    } while (0 < dataSize);
  }
  return outputBuffer;
}

bool FUN_80083e00(int dataSize,int *dataBuffer,uint parameter1,uint parameter2,int parameter3,int parameter4,
                 undefined4 *outputBuffer,uint *resultBuffer,uint parameter5)

{
  bool result;
  undefined2 tempValue;
  int currentValue;
  int indexValue;
  undefined4 *outputPointer;
  uint minBits;
  uint maxBits;
  uint tempBits;
  undefined tempByte;
  int *dataPointer;
  uint *countPointer;
  uint tempCount;
  uint *tempPointer1;
  uint tempValue1;
  int tempIndex1;
  int tempIndex2;
  undefined4 *outputPointer2;
  uint *resultPointer;
  uint cumulativeCount;
  uint *countArray;
  uint tempValue2;
  int tempIndex3;
  uint adjustedBits;
  uint *countPointer2;
  uint stackValue;
  uint frequencyCount [20];
  uint tempArray [16];
  uint workingArray [288];
  int indexArray [16];
  undefined4 *localOutputBuffer;
  undefined4 tempOutput;
  int remainingCount;
  int tempCount2;
  uint bitMask;
  int tempIndex4;
  int *localDataBuffer;
  uint *localResultBuffer;
  uint local_598 [32];
  uint local_88 [16];
  uint uVar6;
  uint uVar7;
  uint *puVar20;
  uint *puVar24;
  uint *local_30;
  uint *local_2c;
  uint local_34;
  int iVar16;
  int iVar22;
  int iVar3;
  uint local_3c;
  uint uVar19;
  uint uVar23;
  int iVar4;
  uint local_38;
  uint *puVar13;
  int *piVar10;
  uint uVar12;
  undefined4 *puVar5;
  undefined4 *param_7;
  uint uVar21;
  uint uVar14;
  uint *puVar18;
  int iVar15;
  undefined4 *param_1;
  undefined4 *puVar17;
  uint uVar8;
  bitfield_32_t local_44;
  undefined4 local_48;
  uint *puVar11;
  uint local_508;
  uint uVar9;
  undefined2 uVar2;
  bool bVar1;
  int local_40;
  int param_3;
  int param_4;
  undefined4 *param_5;
  undefined4 *param_6;

  countPointer = &stackValue;
  *resultBuffer = parameter5;
  param_1 = outputBuffer;
  param_3 = parameter3;
  param_4 = parameter4;
  param_5 = (undefined4 *)parameter2;
  param_6 = (undefined4 *)parameter1;
  do {
    countPointer = countPointer + 1;
    *countPointer = 0;
  } while (countPointer != frequencyCount + 0x10);
  dataPointer = dataBuffer;
  do {
    currentValue = *dataPointer;
    dataPointer = dataPointer + 1;
    frequencyCount[currentValue] = frequencyCount[currentValue] + 1;
  } while (dataPointer != dataBuffer + parameter1);
  minBits = 1;
  if (frequencyCount[0] == parameter1) {
    result = false;
    *outputBuffer = 0;
    *resultBuffer = 0;
  }
  else {
    countPointer = frequencyCount;
    do {
      countPointer = countPointer + 1;
      if (*countPointer != 0) break;
      minBits = minBits + 1;
    } while ((int)minBits < 0x11);
    maxBits = 0x10;
    adjustedBits = *resultBuffer;
    if ((int)*resultBuffer < (int)minBits) {
      adjustedBits = minBits;
    }
    countPointer = frequencyCount + 0x10;
    do {
      if (*countPointer != 0) break;
      maxBits = maxBits - 1;
      countPointer = countPointer + -1;
    } while (maxBits != 0);
    if ((int)maxBits < (int)adjustedBits) {
      adjustedBits = maxBits;
    }
    currentValue = 1 << (minBits & 0x1f);
    *resultBuffer = adjustedBits;
    for (countPointer = frequencyCount + minBits; countPointer != frequencyCount + maxBits; countPointer = countPointer + 1) {
      currentValue = (currentValue - *countPointer) * 2;
    }
    countArray = frequencyCount + 0x14;
    countPointer2 = frequencyCount;
    cumulativeCount = 0;
    currentValue = currentValue - *countPointer;
    *countPointer = *countPointer + currentValue;
    remainingCount = currentValue;
    frequencyCount[18] = 0;
    frequencyCount[19] = 0;
    while (countPointer2 = countPointer2 + 1, countPointer2 != frequencyCount + maxBits) {
      cumulativeCount = cumulativeCount + *countPointer2;
      *countArray = cumulativeCount;
      countArray = countArray + 1;
    }
    dataPointer = dataBuffer + parameter1;
    cumulativeCount = 0;
    if (dataBuffer != dataPointer) {
      do {
        currentValue = *dataBuffer;
        dataBuffer = dataBuffer + 1;
        if (currentValue != 0) {
          tempBits = frequencyCount[currentValue + 0x12];
          workingArray[tempBits] = cumulativeCount;
          frequencyCount[currentValue + 0x12] = tempBits + 1;
        }
        cumulativeCount = cumulativeCount + 1;
      } while (dataBuffer != dataPointer);
    }
    currentValue = -1;
    tempBits = 0;
    countPointer = workingArray;
    outputPointer2 = (undefined4 *)0x0;
    cumulativeCount = -adjustedBits;
    tempValue2 = 0;
    local_598[18] = 0;
    local_88[0] = 0;
    if (uVar6 <= uVar7) {
      puVar20 = local_598 + 0x12;
      puVar24 = local_598 + uVar6;
      local_30 = local_88;
      local_2c = puVar20;
      local_34 = uVar6 * 4;
      do {
        iVar16 = *puVar24 - 1;
        if (iVar16 != -1) {
          iVar22 = iVar3 << 2;
          local_3c = local_34;
          do {
            if (uVar19 + uVar23 < uVar6) {
              iVar4 = iVar3 * 4;
              local_38 = iVar16 + 1U;
              puVar13 = puVar20 + iVar3;
              piVar10 = local_88 + iVar3;
              uVar12 = uVar19 + uVar23;
              puVar5 = param_7;
              do {
                uVar19 = uVar12;
                puVar13 = puVar13 + 1;
                piVar10 = piVar10 + 1;
                iVar22 = iVar22 + 4;
                iVar3 = iVar3 + 1;
                uVar21 = uVar7 - uVar19;
                if (uVar23 < uVar7 - uVar19) {
                  uVar21 = uVar23;
                }
                uVar12 = uVar6 - uVar19;
                uVar14 = 1 << (uVar12 & 0x1f);
                if (iVar16 + 1U < uVar14) {
                  puVar18 = (uint *)((int)local_598 + local_34);
                  iVar15 = (uVar14 - 1) - iVar16;
                  while( true ) {
                    uVar12 = uVar12 + 1;
                    puVar18 = puVar18 + 1;
                    if (uVar21 <= uVar12) break;
                    if ((uint)(iVar15 * 2) <= *puVar18) break;
                    iVar15 = iVar15 * 2 - *puVar18;
                  }
                }
                uVar21 = 1 << (uVar12 & 0x1f);
                param_7 = *(undefined4 **)(param_1 + 0x34);
                *(undefined4 **)(param_1 + 0x34) = param_7 + uVar21 * 2 + 2;
                puVar17 = param_7 + 2;
                *puVar5 = puVar17;
                *param_7 = 0;
                *piVar10 = (int)puVar17;
                if (iVar3 != 0) {
                  *puVar13 = uVar8;
                  local_44.value = (uVar23 & 0xff) << 0x10;
                  {
                    undefined3 temp_bytes;
                    temp_bytes[0] = (local_44.value >> 16) & 0xff;
                    temp_bytes[1] = (local_44.value >> 8) & 0xff;
                    temp_bytes[2] = local_44.value & 0xff;
                    local_44.value = CONCAT13((char)uVar12 + '\x10', temp_bytes);
                  }
                  local_48 = puVar17;
                  puVar5 = (undefined4 *)
                           ((uVar8 >> (uVar19 - uVar23 & 0x1f)) * 8 +
                           *(int *)((int)local_88 + iVar4));
                  *puVar5 = puVar17;
                  puVar5[1] = local_44.value;
                }
                iVar4 = iVar4 + 4;
                uVar12 = uVar19 + uVar23;
                puVar5 = param_7;
              } while (uVar19 + uVar23 < uVar6);
            }
            local_44.value = CONCAT12((char)uVar6 - (char)uVar19,(undefined2)local_44.value);
            if (puVar11 < local_508 + param_3) {
              uVar12 = *puVar11;
              if (uVar12 < param_4) {
                uVar9 = 0xf;
                if (uVar12 < 0x100) {
                  uVar9 = 0x10;
                }
                uVar2 = *(undefined2 *)puVar11;
              }
              else {
                uVar9 = *(undefined *)((uVar12 - param_4) * 2 + param_6);
                uVar2 = *(undefined2 *)((*puVar11 - param_4) * 2 + param_5);
              }
              {
                undefined3 temp_bytes;
                temp_bytes[0] = (local_44.value >> 16) & 0xff;
                temp_bytes[1] = (local_44.value >> 8) & 0xff;
                temp_bytes[2] = local_44.value & 0xff;
                local_44.value = CONCAT13(uVar9, temp_bytes);
              }
              puVar11 = puVar11 + 1;
              local_44.value = CONCAT22((local_44.value >> 16) & 0xffff,uVar2);
            }
            else {
              {
                undefined3 temp_bytes;
                temp_bytes[0] = (local_44.value >> 16) & 0xff;
                temp_bytes[1] = (local_44.value >> 8) & 0xff;
                temp_bytes[2] = local_44.value & 0xff;
                local_44.value = CONCAT13(99, temp_bytes);
              }
            }
            iVar4 = 1 << (uVar6 - uVar19 & 0x1f);
            uVar12 = uVar8 >> (uVar19 & 0x1f);
            if (uVar12 < uVar21) {
              puVar5 = puVar17 + uVar12 * 2;
              do {
                *puVar5 = local_48;
                puVar5[1] = local_44.value;
                puVar5 = puVar5 + iVar4 * 2;
                uVar12 = uVar12 + iVar4;
              } while (uVar12 < uVar21);
            }
            uVar12 = 1 << (uVar6 - 1 & 0x1f);
            uVar14 = uVar8 & uVar12;
            while (uVar14 != 0) {
              uVar8 = uVar8 ^ uVar12;
              uVar12 = uVar12 >> 1;
              uVar14 = uVar8 & uVar12;
            }
            uVar8 = uVar8 ^ uVar12;
            if ((uVar8 & (1 << (uVar19 & 0x1f)) - 1U) != *(uint *)((int)puVar20 + iVar22)) {
              puVar13 = puVar20 + iVar3;
              do {
                puVar13 = puVar13 + -1;
                iVar22 = iVar22 + -4;
                uVar19 = uVar19 - uVar23;
                iVar3 = iVar3 + -1;
              } while ((uVar8 & (1 << (uVar19 & 0x1f)) - 1U) != *puVar13);
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != -1);
        }
        puVar24 = puVar24 + 1;
        uVar6 = uVar6 + 1;
        local_34 = local_34 + 4;
      } while (uVar6 <= uVar7);
    }
    bVar1 = false;
    if (local_40 != 0) {
      bVar1 = uVar7 != 1;
    }
  }
  return bVar1;
}

void FUN_80084364(int decompressionContext)

{
  undefined currentByte;
  ushort inputValue1;
  ushort inputValue2;
  ushort inputValue3;
  uint bitMask1;
  uint bitMask2;
  uint bitMask3;
  uint bitCount;
  uint bitBuffer;
  ushort *inputPointer1;
  undefined *outputPointer1;
  ushort *inputPointer2;
  undefined *outputPointer2;
  uint offsetValue;
  uint bitMask4;
  int tableOffset1;
  int tableOffset2;
  int *tableEntry;
  int currentOffset;
  undefined *copySource;
  undefined *copyEnd;
  uint uVar5;
  uint uVar7;
  uint uVar9;
  int iVar18;
  int iVar16;
  int *piVar17;
  uint uVar8;
  ushort *puVar10;
  ushort *puVar12;
  undefined *puVar11;
  undefined *puVar13;
  uint in_t4;
  int iVar15;
  uint uVar14;
  undefined2 uVar2;
  int *param_1;
  uint uVar6;
  uint uVar3;
  uint uVar4;
  undefined *puVar19;
  undefined *puVar20;
  uint uVar1;
  char *pcVar8;
  undefined *puVar14;
  char *pcVar11;
  char *pcVar16;
  undefined4 unaff_s6;
  code **pcVar17;

  outputPointer1 = *(undefined **)(decompressionContext + 0x24);
  outputPointer2 = *(undefined **)(decompressionContext + 0x28);
  inputPointer1 = *(ushort **)(decompressionContext + 0xc);
  inputPointer2 = *(ushort **)(decompressionContext + 0x10);
  bitBuffer = *(uint *)(decompressionContext + 0x14);
  bitCount = *(uint *)(decompressionContext + 0x18);
  tableOffset2 = *(int *)(decompressionContext + 0x38);
  tableOffset1 = *(int *)(decompressionContext + 0x3c);
  bitMask3 = (1 << (*(uint *)(decompressionContext + 0x40) & 0x1f)) - 1;
  bitMask4 = (1 << (*(uint *)(decompressionContext + 0x44) & 0x1f)) - 1;
  *(uint *)(decompressionContext + 0x40) = bitMask3;
  *(uint *)(decompressionContext + 0x44) = bitMask4;
  param_1 = &decompressionContext;
  puVar10 = *(ushort **)(decompressionContext + 0xc);
  puVar12 = *(ushort **)(decompressionContext + 0x10);
  uVar9 = *(uint *)(decompressionContext + 0x14);
  uVar8 = *(uint *)(decompressionContext + 0x18);
  puVar11 = *(undefined **)(decompressionContext + 0x24);
  puVar13 = *(undefined **)(decompressionContext + 0x28);
  in_t4 = 0;
  iVar16 = *(int *)(decompressionContext + 0x38);
  iVar15 = *(int *)(decompressionContext + 0x3c);
  uVar7 = *(uint *)(decompressionContext + 0x40);
  uVar14 = *(uint *)(decompressionContext + 0x44);
  do {
    uVar5 = uVar7 & uVar9;
    iVar18 = iVar16;
    while( true ) {
      while( true ) {
        piVar17 = (int *)(iVar18 + uVar5 * 8);
        uVar5 = (uint)*(byte *)((int)piVar17 + 7);
        uVar8 = uVar8 - *(byte *)((int)piVar17 + 6);
        uVar9 = uVar9 >> (*(byte *)((int)piVar17 + 6) & 0x1f);
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x10;
          if (puVar10 == puVar12) {
            *(ushort **)(param_1 + 0xc) = puVar12;
            *(ushort **)(param_1 + 0x10) = puVar12;
            *(uint *)(param_1 + 0x14) = uVar9;
            *(uint *)(param_1 + 0x18) = uVar8;
            *(undefined **)(param_1 + 0x24) = puVar11;
            *(undefined **)(param_1 + 0x28) = puVar13;
            *(uint *)(param_1 + 0x48) = in_t4;
            (**(code **)(param_1 + 4))();
            puVar10 = *(ushort **)(param_1 + 0xc);
            puVar12 = *(ushort **)(param_1 + 0x10);
            uVar9 = *(uint *)(param_1 + 0x14);
            uVar8 = *(uint *)(param_1 + 0x18);
            puVar11 = *(undefined **)(param_1 + 0x24);
            puVar13 = *(undefined **)(param_1 + 0x28);
            in_t4 = *(uint *)(param_1 + 0x48);
            iVar16 = *(int *)(param_1 + 0x38);
            iVar15 = *(int *)(param_1 + 0x3c);
            uVar7 = *(uint *)(param_1 + 0x40);
            uVar14 = *(uint *)(param_1 + 0x44);
          }
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 | (uint)uVar2 << (uVar8 & 0x1f);
        }
        if (uVar5 < 0x11) break;
        uVar5 = (1 << (uVar5 - 0x10 & 0x1f)) - 1U & uVar9;
        iVar18 = *piVar17;
      }
      uVar2 = *(ushort *)(piVar17 + 1);
      if (uVar5 == 0x10) break;
      if (uVar5 == 0xf) {
        *(undefined **)(param_1 + 0x24) = puVar11;
        *(undefined **)(param_1 + 0x28) = puVar13;
        *(ushort **)(param_1 + 0xc) = puVar10;
        *(ushort **)(param_1 + 0x10) = puVar12;
        *(uint *)(param_1 + 0x14) = uVar9;
        *(uint *)(param_1 + 0x18) = uVar8;
        return;
      }
      uVar6 = (1 << (uVar5 & 0x1f)) - 1U & uVar9;
      uVar8 = uVar8 - uVar5;
      uVar9 = uVar9 >> (uVar5 & 0x1f);
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 0x10;
        if (puVar10 == puVar12) {
          *(ushort **)(param_1 + 0xc) = puVar12;
          *(ushort **)(param_1 + 0x10) = puVar12;
          *(uint *)(param_1 + 0x14) = uVar9;
          *(uint *)(param_1 + 0x18) = uVar8;
          *(undefined **)(param_1 + 0x24) = puVar11;
          *(undefined **)(param_1 + 0x28) = puVar13;
          *(uint *)(param_1 + 0x48) = in_t4;
          (**(code **)(param_1 + 4))();
          puVar10 = *(ushort **)(param_1 + 0xc);
          puVar12 = *(ushort **)(param_1 + 0x10);
          uVar9 = *(uint *)(param_1 + 0x14);
          uVar8 = *(uint *)(param_1 + 0x18);
          puVar11 = *(undefined **)(param_1 + 0x24);
          puVar13 = *(undefined **)(param_1 + 0x28);
          in_t4 = *(uint *)(param_1 + 0x48);
          iVar16 = *(int *)(param_1 + 0x38);
          iVar15 = *(int *)(param_1 + 0x3c);
          uVar7 = *(uint *)(param_1 + 0x40);
          uVar14 = *(uint *)(param_1 + 0x44);
        }
        uVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar9 = uVar9 | (uint)uVar3 << (uVar8 & 0x1f);
      }
      uVar5 = uVar14 & uVar9;
      iVar18 = iVar15;
      while( true ) {
        piVar17 = (int *)(iVar18 + uVar5 * 8);
        uVar5 = (uint)*(byte *)((int)piVar17 + 7);
        uVar8 = uVar8 - *(byte *)((int)piVar17 + 6);
        uVar9 = uVar9 >> (*(byte *)((int)piVar17 + 6) & 0x1f);
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x10;
          if (puVar10 == puVar12) {
            *(ushort **)(param_1 + 0xc) = puVar12;
            *(ushort **)(param_1 + 0x10) = puVar12;
            *(uint *)(param_1 + 0x14) = uVar9;
            *(uint *)(param_1 + 0x18) = uVar8;
            *(undefined **)(param_1 + 0x24) = puVar11;
            *(undefined **)(param_1 + 0x28) = puVar13;
            *(uint *)(param_1 + 0x48) = in_t4;
            (**(code **)(param_1 + 4))();
            puVar10 = *(ushort **)(param_1 + 0xc);
            puVar12 = *(ushort **)(param_1 + 0x10);
            uVar9 = *(uint *)(param_1 + 0x14);
            uVar8 = *(uint *)(param_1 + 0x18);
            puVar11 = *(undefined **)(param_1 + 0x24);
            puVar13 = *(undefined **)(param_1 + 0x28);
            in_t4 = *(uint *)(param_1 + 0x48);
            iVar16 = *(int *)(param_1 + 0x38);
            iVar15 = *(int *)(param_1 + 0x3c);
            uVar7 = *(uint *)(param_1 + 0x40);
            uVar14 = *(uint *)(param_1 + 0x44);
          }
          uVar3 = *puVar10;
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 | (uint)uVar3 << (uVar8 & 0x1f);
        }
        if (uVar5 < 0x11) break;
        iVar18 = *piVar17;
        uVar5 = (1 << (uVar5 - 0x10 & 0x1f)) - 1U & uVar9;
      }
      uVar3 = *(ushort *)(piVar17 + 1);
      in_t4 = uVar9 & (1 << (uVar5 & 0x1f)) - 1U;
      uVar8 = uVar8 - uVar5;
      uVar9 = uVar9 >> (uVar5 & 0x1f);
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 0x10;
        if (puVar10 == puVar12) {
          *(ushort **)(param_1 + 0xc) = puVar12;
          *(ushort **)(param_1 + 0x10) = puVar12;
          *(uint *)(param_1 + 0x14) = uVar9;
          *(uint *)(param_1 + 0x18) = uVar8;
          *(undefined **)(param_1 + 0x24) = puVar11;
          *(undefined **)(param_1 + 0x28) = puVar13;
          *(uint *)(param_1 + 0x48) = in_t4;
          (**(code **)(param_1 + 4))();
          puVar10 = *(ushort **)(param_1 + 0xc);
          puVar12 = *(ushort **)(param_1 + 0x10);
          uVar9 = *(uint *)(param_1 + 0x14);
          uVar8 = *(uint *)(param_1 + 0x18);
          puVar11 = *(undefined **)(param_1 + 0x24);
          puVar13 = *(undefined **)(param_1 + 0x28);
          in_t4 = *(uint *)(param_1 + 0x48);
          iVar16 = *(int *)(param_1 + 0x38);
          iVar15 = *(int *)(param_1 + 0x3c);
          uVar7 = *(uint *)(param_1 + 0x40);
          uVar14 = *(uint *)(param_1 + 0x44);
        }
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar9 = uVar9 | (uint)uVar4 << (uVar8 & 0x1f);
      }
      puVar19 = puVar11 + -(uVar3 + in_t4);
      puVar20 = puVar19 + uVar2 + uVar6;
      do {
        uVar1 = *puVar19;
        puVar19 = puVar19 + 1;
        if (puVar11 == puVar13) {
          *(ushort **)(param_1 + 0xc) = puVar10;
          *(ushort **)(param_1 + 0x10) = puVar12;
          *(uint *)(param_1 + 0x14) = uVar9;
          *(uint *)(param_1 + 0x18) = uVar8;
          *(undefined **)(param_1 + 0x24) = puVar13;
          *(undefined **)(param_1 + 0x28) = puVar13;
          *(uint *)(param_1 + 0x48) = in_t4;
          (**(code **)(param_1 + 0x1c))();
          puVar10 = *(ushort **)(param_1 + 0xc);
          puVar12 = *(ushort **)(param_1 + 0x10);
          uVar9 = *(uint *)(param_1 + 0x14);
          uVar8 = *(uint *)(param_1 + 0x18);
          puVar11 = *(undefined **)(param_1 + 0x24);
          puVar13 = *(undefined **)(param_1 + 0x28);
          in_t4 = *(uint *)(param_1 + 0x48);
          iVar16 = *(int *)(param_1 + 0x38);
          iVar15 = *(int *)(param_1 + 0x3c);
          uVar7 = *(uint *)(param_1 + 0x40);
          uVar14 = *(uint *)(param_1 + 0x44);
        }
        *puVar11 = uVar1;
        puVar11 = puVar11 + 1;
      } while (puVar19 != puVar20);
      uVar5 = uVar7 & uVar9;
      iVar18 = iVar16;
    }
    if (puVar11 == puVar13) {
      *(ushort **)(param_1 + 0xc) = puVar10;
      *(ushort **)(param_1 + 0x10) = puVar12;
      *(uint *)(param_1 + 0x14) = uVar9;
      *(uint *)(param_1 + 0x18) = uVar8;
      *(undefined **)(param_1 + 0x24) = puVar13;
      *(undefined **)(param_1 + 0x28) = puVar13;
      *(uint *)(param_1 + 0x48) = in_t4;
      (**(code **)(param_1 + 0x1c))();
      puVar10 = *(ushort **)(param_1 + 0xc);
      puVar12 = *(ushort **)(param_1 + 0x10);
      uVar9 = *(uint *)(param_1 + 0x14);
      uVar8 = *(uint *)(param_1 + 0x18);
      puVar11 = *(undefined **)(param_1 + 0x24);
      puVar13 = *(undefined **)(param_1 + 0x28);
      in_t4 = *(uint *)(param_1 + 0x48);
      iVar16 = *(int *)(param_1 + 0x38);
      iVar15 = *(int *)(param_1 + 0x3c);
      uVar7 = *(uint *)(param_1 + 0x40);
      uVar14 = *(uint *)(param_1 + 0x44);
    }
    *puVar11 = (char)uVar2;
    puVar11 = puVar11 + 1;
  } while( true );
}

void FUN_800847d0(code **renderData)

{
  ushort inputValue;
  uint *tablePointer1;
  code **callbackPointer;
  undefined4 *tablePointer2;
  uint *tablePointer3;
  uint tableValue1;
  uint tableValue2;
  code *bitBuffer1;
  code *bitBuffer2;
  int tableIndex;
  code *bitBuffer3;
  code *bitBuffer4;
  ushort *inputPointer1;
  ushort *inputPointer2;
  code *callbackFunction;
  code *bitBuffer5;
  code *bitBuffer6;
  code *bitBuffer7;
  undefined4 callbackData;
  uint huffmanTable [316];
  undefined4 lengthTable [143];
  undefined4 codeTable [145];
  uint distanceTable [29];
  code *bitBuffers [4];
  uint tableValue3;
  code *bitBuffer8;
  code *bitBuffer9;
  code *bitBuffer10;
  uint *tablePointer4;
  code **callbackPointer2;
  uint *tablePointer5;
  code *bitBuffer11;
  uint tableValue4;
  char pcVar8;
  ushort *puVar13;
  ushort *puVar14;
  char *pcVar11;
  char *pcVar16;
  undefined4 unaff_s6;
  code **param_1;
  code **pcVar17;
  uint uVar1;
  char pcVar9;
  code *pcVar12;
  code *local_5c[4];
  int iVar10;
  code *pcVar15;
  code **local_3c;
  code **local_a40;
  code *local_a40_array[19];
  int local_40;
  int local_44;
  uint *puVar5;
  code **ppcVar3;
  code **local_38;
  uint *local_34;
  uint uVar6;
  code *local_48;
  uint local_4c;
  code **local_30;
  code **local_2c;
  uint *puVar2;
  uint uVar18;
  uint *puVar4;
  code **local_314;
  code **auStack_550[280];
  code **auStack_d0[30];
  code **uVar7;

  bitBuffer3 = (code *)0x0;
  bitBuffer6 = renderData[9];
  bitBuffer7 = renderData[10];
  inputPointer1 = (ushort *)renderData[3];
  inputPointer2 = (ushort *)renderData[4];
  bitBuffer1 = (code *)0xfffffff0;
  param_1 = renderData;
  pcVar8 = 0;
  puVar13 = (ushort *)renderData[3];
  puVar14 = (ushort *)renderData[4];
  pcVar11 = (char *)renderData[5];
  pcVar16 = (char *)renderData[9];
  pcVar17 = (code **)renderData[10];
  unaff_s6 = 0;
  local_a40 = local_a40_array;
  if (((uint)inputPointer1 & 1) != 0) {
    bitBuffer3 = (code *)(uint)*(byte *)inputPointer1;
    bitBuffer1 = (code *)0xfffffff8;
    inputPointer1 = (ushort *)((int)inputPointer1 + 1);
  }
  if ((int)pcVar8 < 0) {
    pcVar8 = pcVar8 + 0x10;
    if (puVar13 == puVar14) {
      param_1[3] = (code *)puVar14;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar11;
      param_1[6] = pcVar8;
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[0x12] = unaff_s6;
      (*param_1[1])();
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar11 = param_1[5];
      pcVar8 = param_1[6];
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
    }
    uVar1 = *puVar13;
    puVar13 = puVar13 + 1;
    pcVar11 = (code *)((uint)pcVar11 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
  }
  pcVar9 = pcVar8 + -8;
  pcVar12 = (code *)((uint)pcVar11 >> 8);
  if ((int)pcVar9 < 0) {
    pcVar9 = pcVar8 + 8;
    if (puVar13 == puVar14) {
      param_1[3] = (code *)puVar14;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar12;
      param_1[6] = pcVar9;
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[0x12] = (code *)((uint)pcVar11 & 0xff);
      (*param_1[1])();
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar12 = param_1[5];
      pcVar9 = param_1[6];
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
    }
    uVar1 = *puVar13;
    puVar13 = puVar13 + 1;
    pcVar12 = (code *)((uint)pcVar12 | (uint)uVar1 << ((uint)pcVar9 & 0x1f));
  }
  pcVar8 = pcVar9 + -8;
  pcVar11 = (code *)((uint)pcVar12 >> 8);
  if ((int)pcVar8 < 0) {
    pcVar8 = pcVar9 + 8;
    if (puVar13 == puVar14) {
      param_1[3] = (code *)puVar14;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar11;
      param_1[6] = pcVar8;
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[0x12] = (code *)((uint)pcVar12 & 0xff);
      (*param_1[1])();
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar11 = param_1[5];
      pcVar8 = param_1[6];
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
    }
    uVar1 = *puVar13;
    puVar13 = puVar13 + 1;
    pcVar11 = (code *)((uint)pcVar11 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
  }
  pcVar12 = pcVar8 + -8;
  pcVar9 = (code *)((uint)pcVar11 >> 8);
  if ((int)pcVar12 < 0) {
    pcVar12 = pcVar8 + 8;
    if (puVar13 == puVar14) {
      param_1[3] = (code *)puVar14;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar9;
      param_1[6] = pcVar12;
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[0x12] = (code *)((uint)pcVar11 & 0xff);
      (*param_1[1])();
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar9 = param_1[5];
      pcVar12 = param_1[6];
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
    }
    uVar1 = *puVar13;
    puVar13 = puVar13 + 1;
    pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
  }
  local_5c[1] = (code *)((uint)pcVar9 & 0xff);
  pcVar8 = pcVar12 + -8;
  pcVar9 = (code *)((uint)pcVar9 >> 8);
  if ((int)pcVar8 < 0) {
    pcVar8 = pcVar12 + 8;
    if (puVar13 == puVar14) {
      param_1[3] = (code *)puVar14;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar9;
      param_1[6] = pcVar8;
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[0x12] = local_5c[1];
      (*param_1[1])();
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar9 = param_1[5];
      pcVar8 = param_1[6];
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
      local_5c[1] = param_1[0x12];
    }
    uVar1 = *puVar13;
    puVar13 = puVar13 + 1;
    pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
  }
  iVar10 = 5;
  pcVar11 = (code *)((uint)pcVar9 & 0xff);
  do {
    pcVar12 = pcVar8 + -8;
    pcVar9 = (code *)((uint)pcVar9 >> 8);
    if ((int)pcVar12 < 0) {
      pcVar12 = pcVar8 + 8;
      if (puVar13 == puVar14) {
        param_1[3] = (code *)puVar14;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar12;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar11;
        (*param_1[1])();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar12 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
      }
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
    }
    iVar10 = iVar10 + -1;
    pcVar11 = (code *)((uint)pcVar9 & 0xff);
    pcVar8 = pcVar12;
  } while (iVar10 != -1);
  pcVar8 = (code *)((uint)local_5c[1] & 8);
  while (pcVar15 = pcVar11, pcVar8 != (code *)0x0) {
    pcVar8 = pcVar12 + -8;
    pcVar9 = (code *)((uint)pcVar9 >> 8);
    if ((int)pcVar8 < 0) {
      pcVar8 = pcVar12 + 8;
      if (puVar13 == puVar14) {
        param_1[3] = (code *)puVar14;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar8;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar15;
        (*param_1[1])();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar8 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
        pcVar15 = param_1[0x12];
      }
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
    }
    pcVar11 = (code *)((uint)pcVar9 & 0xff);
    pcVar12 = pcVar8;
    pcVar8 = pcVar15;
  }
  local_3c = local_a40;
  do {
    pcVar11 = (code *)((uint)pcVar9 & 1);
    pcVar8 = pcVar12 + -1;
    pcVar9 = (code *)((uint)pcVar9 >> 1);
    if ((int)pcVar8 < 0) {
      pcVar8 = pcVar12 + 0xf;
      if (puVar13 == puVar14) {
        param_1[3] = (code *)puVar14;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar8;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar11;
        (*param_1[1])();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar8 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
        pcVar11 = param_1[0x12];
      }
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
    }
    pcVar15 = (code *)((uint)pcVar9 & 3);
    pcVar12 = pcVar8 + -2;
    pcVar9 = (code *)((uint)pcVar9 >> 2);
    local_5c[3] = pcVar11;
    if ((int)pcVar12 < 0) {
      pcVar12 = pcVar8 + 0xe;
      if (puVar13 == puVar14) {
        param_1[3] = (code *)puVar14;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar12;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar15;
        (*param_1[1])();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar12 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
        pcVar15 = param_1[0x12];
      }
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
    }
    pcVar8 = pcVar15;
    if (*param_1 != (code *)0x0) {
      param_1[3] = (code *)puVar13;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar9;
      param_1[6] = pcVar12;
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[0x12] = pcVar15;
      (**param_1)();
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar9 = param_1[5];
      pcVar12 = param_1[6];
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
      pcVar8 = param_1[0x12];
    }
    if (pcVar15 == (code *)0x2) {
      pcVar11 = (code *)((uint)pcVar9 & 0x1f);
      pcVar8 = pcVar12 + -5;
      pcVar9 = (code *)((uint)pcVar9 >> 5);
      if ((int)pcVar8 < 0) {
        pcVar8 = pcVar12 + 0xb;
        if (puVar13 == puVar14) {
          param_1[3] = (code *)puVar14;
          param_1[4] = (code *)puVar14;
          param_1[5] = pcVar9;
          param_1[6] = pcVar8;
          param_1[9] = pcVar16;
          param_1[10] = pcVar17;
          param_1[0x12] = pcVar11;
          (*param_1[1])();
          puVar13 = (ushort *)param_1[3];
          puVar14 = (ushort *)param_1[4];
          pcVar9 = param_1[5];
          pcVar8 = param_1[6];
          pcVar16 = param_1[9];
          pcVar17 = param_1[10];
          pcVar11 = param_1[0x12];
        }
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
      }
      local_40 = pcVar11 + 0x101;
      pcVar12 = (code *)((uint)pcVar9 & 0x1f);
      pcVar11 = pcVar8 + -5;
      pcVar9 = (code *)((uint)pcVar9 >> 5);
      if ((int)pcVar11 < 0) {
        pcVar11 = pcVar8 + 0xb;
        if (puVar13 == puVar14) {
          param_1[3] = (code *)puVar14;
          param_1[4] = (code *)puVar14;
          param_1[5] = pcVar9;
          param_1[6] = pcVar11;
          param_1[9] = pcVar16;
          param_1[10] = pcVar17;
          param_1[0x12] = pcVar12;
          (*param_1[1])();
          puVar13 = (ushort *)param_1[3];
          puVar14 = (ushort *)param_1[4];
          pcVar9 = param_1[5];
          pcVar11 = param_1[6];
          pcVar16 = param_1[9];
          pcVar17 = param_1[10];
          pcVar12 = param_1[0x12];
        }
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar11 & 0x1f));
      }
      local_44 = pcVar12 + 1;
      pcVar8 = (code *)((uint)pcVar9 & 0xf);
      pcVar12 = pcVar11 + -4;
      pcVar9 = (code *)((uint)pcVar9 >> 4);
      if ((int)pcVar12 < 0) {
        pcVar12 = pcVar11 + 0xc;
        if (puVar13 == puVar14) {
          param_1[3] = (code *)puVar14;
          param_1[4] = (code *)puVar14;
          param_1[5] = pcVar9;
          param_1[6] = pcVar12;
          param_1[9] = pcVar16;
          param_1[10] = pcVar17;
          param_1[0x12] = pcVar8;
          (*param_1[1])();
          puVar13 = (ushort *)param_1[3];
          puVar14 = (ushort *)param_1[4];
          pcVar9 = param_1[5];
          pcVar12 = param_1[6];
          pcVar16 = param_1[9];
          pcVar17 = param_1[10];
          pcVar8 = param_1[0x12];
        }
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
      }
      iVar10 = 0;
      puVar5 = (uint *)(pcVar8 + 4);
      param_1[0xd] = param_1[0xb];
      pcVar11 = pcVar12;
      if (0 < (int)puVar5) {
        do {
          pcVar8 = (code *)((uint)pcVar9 & 7);
          pcVar12 = pcVar11 + -3;
          pcVar9 = (code *)((uint)pcVar9 >> 3);
          ppcVar3 = (code **)(local_3c + (byte)(&DAT_800a70b8)[iVar10]);
          if ((int)pcVar12 < 0) {
            pcVar12 = pcVar11 + 0xd;
            if (puVar13 == puVar14) {
              param_1[3] = (code *)puVar14;
              param_1[4] = (code *)puVar14;
              param_1[5] = pcVar9;
              param_1[6] = pcVar12;
              param_1[9] = pcVar16;
              param_1[10] = pcVar17;
              param_1[0x12] = pcVar8;
              local_38 = ppcVar3;
              local_34 = puVar5;
              (*param_1[1])();
              puVar13 = (ushort *)param_1[3];
              puVar14 = (ushort *)param_1[4];
              pcVar9 = param_1[5];
              pcVar12 = param_1[6];
              pcVar16 = param_1[9];
              pcVar17 = param_1[10];
              pcVar8 = param_1[0x12];
              ppcVar3 = local_38;
              puVar5 = local_34;
            }
            uVar1 = *puVar13;
            puVar13 = puVar13 + 1;
            pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
          }
          iVar10 = iVar10 + 1;
          *ppcVar3 = pcVar8;
          pcVar11 = pcVar12;
        } while (iVar10 < (int)puVar5);
      }
      for (; iVar10 < 0x13; iVar10 = iVar10 + 1) {
        local_3c[(byte)(&DAT_800a70b8)[iVar10]] = 0;
      }
      FUN_80083e00(param_1,local_a40,0x13,0x13,0,0,param_1 + 0xe,param_1 + 0x10,7);
      if (*param_1 != (code *)0x0) {
        param_1[3] = (code *)puVar13;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar12;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar8;
        (**param_1)();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar12 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
        pcVar8 = param_1[0x12];
      }
      uVar6 = 0;
      local_48 = local_40 + (int)local_44;
      local_4c = (1 << ((uint)param_1[0x10] & 0x1f)) - 1;
      local_5c[2] = param_1[0xe];
      iVar10 = 0;
      puVar5 = local_3c;
      if (0 < (int)local_48) {
        do {
          pcVar11 = local_5c[2] + ((uint)pcVar9 & local_4c) * 8;
          pcVar15 = pcVar12 + -(uint)(byte)pcVar11[6];
          pcVar9 = (code *)((uint)pcVar9 >> ((byte)pcVar11[6] & 0x1f));
          uVar6 = uVar6;
          if ((int)pcVar15 < 0) {
            pcVar15 = pcVar15 + 0x10;
            if (puVar13 == puVar14) {
              param_1[3] = (code *)puVar14;
              param_1[4] = (code *)puVar14;
              param_1[5] = pcVar9;
              param_1[6] = pcVar15;
              param_1[9] = pcVar16;
              param_1[10] = pcVar17;
              param_1[0x12] = pcVar8;
              local_34 = puVar5;
              local_30 = pcVar11;
              local_2c = uVar6;
              (*param_1[1])();
              puVar13 = (ushort *)param_1[3];
              puVar14 = (ushort *)param_1[4];
              pcVar9 = param_1[5];
              pcVar15 = param_1[6];
              pcVar16 = param_1[9];
              pcVar17 = param_1[10];
              pcVar8 = param_1[0x12];
              puVar5 = local_34;
              pcVar11 = local_30;
              uVar7 = local_2c;
            }
            uVar1 = *puVar13;
            puVar13 = puVar13 + 1;
            pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar15 & 0x1f));
          }
          uVar6 = (uint)*(ushort *)(pcVar11 + 4);
          if (uVar6 < 0x10) {
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
            iVar10 = iVar10 + 1;
            pcVar12 = pcVar15;
          }
          else {
            pcVar8 = (code *)((uint)pcVar9 & 3);
            if (uVar6 == 0x10) {
              pcVar12 = pcVar15 + -2;
              pcVar9 = (code *)((uint)pcVar9 >> 2);
              uVar6 = uVar7;
              if ((int)pcVar12 < 0) {
                pcVar12 = pcVar15 + 0xe;
                if (puVar13 == puVar14) {
                  param_1[3] = (code *)puVar14;
                  param_1[4] = (code *)puVar14;
                  param_1[5] = pcVar9;
                  param_1[6] = pcVar12;
                  param_1[9] = pcVar16;
                  param_1[10] = pcVar17;
                  param_1[0x12] = pcVar8;
                  local_34 = puVar5;
                  local_2c = uVar7;
                  (*param_1[1])();
                  puVar13 = (ushort *)param_1[3];
                  puVar14 = (ushort *)param_1[4];
                  pcVar9 = param_1[5];
                  pcVar12 = param_1[6];
                  pcVar16 = param_1[9];
                  pcVar17 = param_1[10];
                  pcVar8 = param_1[0x12];
                  puVar5 = local_34;
                  uVar6 = local_2c;
                }
                uVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
              }
              pcVar11 = pcVar8 + 2;
              if (pcVar11 != (code *)0xffffffff) {
                puVar2 = local_3c + iVar10;
                do {
                  *puVar2 = uVar6;
                  puVar2 = puVar2 + 1;
                  puVar5 = puVar5 + 1;
                  pcVar11 = pcVar11 + -1;
                  iVar10 = iVar10 + 1;
                } while (pcVar11 != (code *)0xffffffff);
              }
            }
            else {
              pcVar8 = (code *)((uint)pcVar9 & 0x7f);
              if (uVar6 == 0x11) {
                pcVar8 = (code *)((uint)pcVar9 & 7);
                pcVar12 = pcVar15 + -3;
                pcVar9 = (code *)((uint)pcVar9 >> 3);
                if ((int)pcVar12 < 0) {
                  pcVar12 = pcVar15 + 0xd;
                  if (puVar13 == puVar14) {
                    param_1[3] = (code *)puVar14;
                    param_1[4] = (code *)puVar14;
                    param_1[5] = pcVar9;
                    param_1[6] = pcVar12;
                    param_1[9] = pcVar16;
                    param_1[10] = pcVar17;
                    param_1[0x12] = pcVar8;
                    local_34 = puVar5;
                    (*param_1[1])();
                    puVar13 = (ushort *)param_1[3];
                    puVar14 = (ushort *)param_1[4];
                    pcVar9 = param_1[5];
                    pcVar12 = param_1[6];
                    pcVar16 = param_1[9];
                    pcVar17 = param_1[10];
                    pcVar8 = param_1[0x12];
                    puVar5 = local_34;
                  }
                  uVar1 = *puVar13;
                  puVar13 = puVar13 + 1;
                  pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
                }
                pcVar11 = pcVar8 + 2;
                if (pcVar11 != (code *)0xffffffff) {
                  puVar2 = local_3c + iVar10;
                  do {
                    *puVar2 = 0;
                    puVar2 = puVar2 + 1;
                    puVar5 = puVar5 + 1;
                    pcVar11 = pcVar11 + -1;
                    iVar10 = iVar10 + 1;
                  } while (pcVar11 != (code *)0xffffffff);
                  uVar6 = 0;
                  goto LAB_800852b4;
                }
              }
              else {
                pcVar12 = pcVar15 + -7;
                pcVar9 = (code *)((uint)pcVar9 >> 7);
                if ((int)pcVar12 < 0) {
                  pcVar12 = pcVar15 + 9;
                  if (puVar13 == puVar14) {
                    param_1[3] = (code *)puVar14;
                    param_1[4] = (code *)puVar14;
                    param_1[5] = pcVar9;
                    param_1[6] = pcVar12;
                    param_1[9] = pcVar16;
                    param_1[10] = pcVar17;
                    param_1[0x12] = pcVar8;
                    local_34 = puVar5;
                    (*param_1[1])();
                    puVar13 = (ushort *)param_1[3];
                    puVar14 = (ushort *)param_1[4];
                    pcVar9 = param_1[5];
                    pcVar12 = param_1[6];
                    pcVar16 = param_1[9];
                    pcVar17 = param_1[10];
                    pcVar8 = param_1[0x12];
                    puVar5 = local_34;
                  }
                  uVar1 = *puVar13;
                  puVar13 = puVar13 + 1;
                  pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
                }
                pcVar11 = pcVar8 + 10;
                if (pcVar11 != (code *)0xffffffff) {
                  puVar2 = local_3c + iVar10;
                  do {
                    *puVar2 = 0;
                    puVar2 = puVar2 + 1;
                    puVar5 = puVar5 + 1;
                    pcVar11 = pcVar11 + -1;
                    iVar10 = iVar10 + 1;
                  } while (pcVar11 != (code *)0xffffffff);
                }
              }
              uVar6 = 0;
            }
          }
LAB_800852b4:
        } while (iVar10 < (int)local_48);
      }
      if (*param_1 != (code *)0x0) {
        param_1[3] = (code *)puVar13;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar12;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar8;
        (**param_1)();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar12 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
        pcVar8 = param_1[0x12];
      }
      param_1[0xd] = param_1[0xb];
      FUN_80083e00(param_1,local_a40,local_40,0x101,&DAT_800a6fc0,&LAB_800a6ffe_2,param_1 + 0xe,
                   param_1 + 0x10,9);
      if (*param_1 != (code *)0x0) {
        param_1[3] = (code *)puVar13;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar12;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar8;
        (**param_1)();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar12 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
        pcVar8 = param_1[0x12];
      }
      uVar18 = 6;
      puVar5 = local_3c + (int)local_40;
      pcVar11 = local_44;
LAB_8008578c:
      FUN_80083e00(param_1,puVar5,pcVar11,0,&DAT_800a7040,&DAT_800a707c,param_1 + 0xf,param_1 + 0x11
                   ,uVar18);
      if (*param_1 != (code *)0x0) {
        param_1[3] = (code *)puVar13;
        param_1[4] = (code *)puVar14;
        param_1[5] = pcVar9;
        param_1[6] = pcVar12;
        param_1[9] = pcVar16;
        param_1[10] = pcVar17;
        param_1[0x12] = pcVar8;
        (**param_1)();
        puVar13 = (ushort *)param_1[3];
        puVar14 = (ushort *)param_1[4];
        pcVar9 = param_1[5];
        pcVar12 = param_1[6];
        pcVar16 = param_1[9];
        pcVar17 = param_1[10];
      }
      param_1[9] = pcVar16;
      param_1[10] = pcVar17;
      param_1[3] = (code *)puVar13;
      param_1[4] = (code *)puVar14;
      param_1[5] = pcVar9;
      param_1[6] = pcVar12;
      FUN_80084364(param_1);
      pcVar16 = param_1[9];
      pcVar17 = param_1[10];
      puVar13 = (ushort *)param_1[3];
      puVar14 = (ushort *)param_1[4];
      pcVar9 = param_1[5];
      pcVar12 = param_1[6];
    }
    else if (pcVar15 == (code *)0x0) {
      pcVar11 = pcVar12 + -((uint)pcVar12 & 7);
      pcVar9 = (code *)((uint)pcVar9 >> ((uint)pcVar12 & 7));
      if ((int)pcVar11 < 0) {
        pcVar11 = pcVar11 + 0x10;
        if (puVar13 == puVar14) {
          param_1[3] = (code *)puVar14;
          param_1[4] = (code *)puVar14;
          param_1[5] = pcVar9;
          param_1[6] = pcVar11;
          param_1[9] = pcVar16;
          param_1[10] = pcVar17;
          param_1[0x12] = pcVar8;
          (*param_1[1])();
          puVar13 = (ushort *)param_1[3];
          puVar14 = (ushort *)param_1[4];
          pcVar9 = param_1[5];
          pcVar11 = param_1[6];
          pcVar16 = param_1[9];
          pcVar17 = param_1[10];
        }
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar11 & 0x1f));
      }
      pcVar15 = (code *)((uint)pcVar9 & 0xffff);
      pcVar9 = (code *)((uint)pcVar9 >> 0x10);
      pcVar8 = pcVar11 + -0x10;
      if ((int)(pcVar11 + -0x10) < 0) {
        if (puVar13 == puVar14) {
          param_1[3] = (code *)puVar14;
          param_1[4] = (code *)puVar14;
          param_1[5] = pcVar9;
          param_1[6] = pcVar11;
          param_1[9] = pcVar16;
          param_1[10] = pcVar17;
          param_1[0x12] = pcVar15;
          (*param_1[1])();
          puVar13 = (ushort *)param_1[3];
          puVar14 = (ushort *)param_1[4];
          pcVar9 = param_1[5];
          pcVar11 = param_1[6];
          pcVar16 = param_1[9];
          pcVar17 = param_1[10];
          pcVar15 = param_1[0x12];
        }
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar11 & 0x1f));
        pcVar8 = pcVar11;
      }
      pcVar11 = (code *)((uint)pcVar9 & 0xffff);
      pcVar9 = (code *)((uint)pcVar9 >> 0x10);
      pcVar12 = pcVar8 + -0x10;
      local_48 = pcVar15;
      if ((int)(pcVar8 + -0x10) < 0) {
        if (puVar13 == puVar14) {
          param_1[3] = (code *)puVar14;
          param_1[4] = (code *)puVar14;
          param_1[5] = pcVar9;
          param_1[6] = pcVar8;
          param_1[9] = pcVar16;
          param_1[10] = pcVar17;
          param_1[0x12] = pcVar11;
          (*param_1[1])();
          puVar13 = (ushort *)param_1[3];
          puVar14 = (ushort *)param_1[4];
          pcVar9 = param_1[5];
          pcVar8 = param_1[6];
          pcVar16 = param_1[9];
          pcVar17 = param_1[10];
          pcVar11 = param_1[0x12];
        }
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar8 & 0x1f));
        pcVar12 = pcVar8;
      }
      local_48 = local_48 + -1;
      if (local_48 != (code *)0xffffffff) {
        do {
          pcVar8 = pcVar12;
          if (pcVar16 == pcVar17) {
            param_1[3] = (code *)puVar13;
            param_1[4] = (code *)puVar14;
            param_1[5] = pcVar9;
            param_1[6] = pcVar12;
            param_1[9] = pcVar17;
            param_1[10] = pcVar17;
            param_1[0x12] = pcVar11;
            (*param_1[7])();
            puVar13 = (ushort *)param_1[3];
            puVar14 = (ushort *)param_1[4];
            pcVar9 = param_1[5];
            pcVar8 = param_1[6];
            pcVar16 = param_1[9];
            pcVar17 = param_1[10];
          }
          pcVar11 = (code *)((uint)pcVar9 & 0xff);
          pcVar12 = pcVar8 + -8;
          pcVar9 = (code *)((uint)pcVar9 >> 8);
          if ((int)pcVar12 < 0) {
            pcVar12 = pcVar8 + 8;
            if (puVar13 == puVar14) {
              param_1[3] = (code *)puVar14;
              param_1[4] = (code *)puVar14;
              param_1[5] = pcVar9;
              param_1[6] = pcVar12;
              param_1[9] = pcVar16;
              param_1[10] = pcVar17;
              param_1[0x12] = pcVar11;
              (*param_1[1])();
              puVar13 = (ushort *)param_1[3];
              puVar14 = (ushort *)param_1[4];
              pcVar9 = param_1[5];
              pcVar12 = param_1[6];
              pcVar16 = param_1[9];
              pcVar17 = param_1[10];
              pcVar11 = param_1[0x12];
            }
            uVar1 = *puVar13;
            puVar13 = puVar13 + 1;
            pcVar9 = (code *)((uint)pcVar9 | (uint)uVar1 << ((uint)pcVar12 & 0x1f));
          }
          *pcVar16 = SUB41(pcVar11,0);
          pcVar16 = pcVar16 + 1;
          local_48 = local_48 + -1;
        } while (local_48 != (code *)0xffffffff);
        local_48 = (code *)0xffffffff;
      }
    }
    else if (pcVar15 == (code *)0x1) {
      iVar10 = 0x8f;
      puVar4 = local_314;
      param_1[0xd] = param_1[0xb];
      do {
        *puVar4 = 8;
        iVar10 = iVar10 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar10);
      iVar10 = 0x90;
      puVar4 = local_314;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 9;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x100);
      if (iVar10 < 0x118) {
        puVar4 = auStack_550 + iVar10;
        do {
          *puVar4 = 7;
          iVar10 = iVar10 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar10 < 0x118);
      }
      if (iVar10 < 0x120) {
        puVar4 = auStack_550 + iVar10;
        do {
          *puVar4 = 8;
          iVar10 = iVar10 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar10 < 0x120);
      }
      iVar10 = 0x1d;
      ppcVar3 = local_5c;
      do {
        *ppcVar3 = (code *)0x5;
        iVar10 = iVar10 + -1;
        ppcVar3 = ppcVar3 + -1;
      } while (-1 < iVar10);
      FUN_80083e00(param_1,auStack_550,0x120,0x101,&DAT_800a6fc0,&LAB_800a6ffe_2,param_1 + 0xe,
                   param_1 + 0x10,7);
      puVar5 = auStack_d0;
      pcVar11 = (code *)0x1e;
      uVar18 = 5;
      goto LAB_8008578c;
    }
    if (local_5c[3] != (code *)0x0) {
      return;
    }
  } while( true );
}
