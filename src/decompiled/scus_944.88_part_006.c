// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_004.h"
#include "scus_944.88_part_006.h"
#include "cd_reader.h"
#include <string.h>  /* memcpy */
/* usleep() declaration — cannot include <unistd.h> because psyz redefines
   read/write/lseek which conflict with the POSIX prototypes. */
extern int usleep(unsigned int usec);

void FUN_80078408(void)
{
  undefined4 previousAudioState;
  undefined4 *audioChannelPtr;
  undefined *audioBufferPtr;
  int channelIndex;

  previousAudioState = DAT_80092e88;

  channelIndex = 0;
  audioBufferPtr = &DAT_801efe68;
  audioChannelPtr = &DAT_801efe7c;

  DAT_80092e88 = 0;

  do {

    *((char *)audioChannelPtr - 0xf) = 2;

    audioChannelPtr[-3] = 0;

    *((char *)audioChannelPtr - 0xd) = 1;

    *((char *)audioChannelPtr - 0xe) = 0;

    *((char *)audioChannelPtr - 4) = 0;

    *audioBufferPtr = 0;

    if ((undefined *)*audioChannelPtr != (undefined *)0x0) {

      *(undefined *)*audioChannelPtr = 0xff;

      *audioChannelPtr = 0;
    }

    channelIndex = channelIndex + 1;
    audioChannelPtr = audioChannelPtr + 10;
    audioBufferPtr = audioBufferPtr + 0x28;

  } while (channelIndex < 0x18);

  FUN_8007916c();

  DAT_80092e88 = previousAudioState;

  return;
}

void FUN_800784a0(undefined2 *soundData,undefined4 audioBuffer,int volume,int channelId)

{
  int calculatedVolume;
  undefined audioParams[4];
  undefined2 frequency;
  undefined2 soundId;
  undefined4 soundDataPtr;
  undefined2 soundType;
  undefined channelOverride;
  undefined soundFlags;

  if (volume != 0) {

    calculatedVolume = ((int)((uint)DAT_801c9994 * volume) / 0xff) * (int)(short)soundData[1] >> 0xe;

    if (0x3fff < calculatedVolume) {
      calculatedVolume = 0x3fff;
    }

    FUN_8007a170(audioParams, calculatedVolume, audioBuffer);

    frequency = FUN_8007a52c((uint)*(byte *)(soundData + 6) << 8, soundData[2]);

    soundType = soundData[3];
    soundDataPtr = *(undefined4 *)(soundData + 8);
    soundId = *soundData;

    if (channelId < 0) {
      channelOverride = *(undefined *)(soundData + 4);
    }
    else {
      channelOverride = (undefined)channelId;
    }

    soundFlags = *(undefined *)(soundData + 5);

    FUN_8007a59c(0, audioParams);
  }
  return;
}

void FUN_80078598(undefined4 *audioChannel,undefined4 soundData)

{
  *audioChannel = soundData;
  *(undefined *)(audioChannel + 1) = 0xff;
  return;
}

void FUN_800785a8(int *audioChannel,int leftVolume,int rightVolume,uint channelId,int playbackSpeed)

{
  uint calculatedLeftVolume;
  uint calculatedRightVolume;
  undefined2 leftVolumeParam;
  undefined2 rightVolumeParam;
  undefined2 frequency;
  undefined2 local_1c;
  undefined2 soundId;
  undefined4 soundDataPtr;
  undefined2 soundType;
  undefined channelOverride;
  undefined soundFlags;

  calculatedLeftVolume = (int)((uint)DAT_801c9994 * leftVolume) / 0xff;
  calculatedRightVolume = (int)((uint)DAT_801c9994 * rightVolume) / 0xff;

  if ((calculatedLeftVolume | calculatedRightVolume) == 0) {
    FUN_80078760(audioChannel);
  }
  else {

    if (0x3fff < (int)calculatedLeftVolume) {
      calculatedLeftVolume = 0x3fff;
    }
    leftVolumeParam = (undefined2)calculatedLeftVolume;

    if (0x3fff < (int)calculatedRightVolume) {
      calculatedRightVolume = 0x3fff;
    }
    rightVolumeParam = (undefined2)calculatedRightVolume;

    frequency = FUN_8007a52c((uint)*(byte *)(*audioChannel + 0xc) << 8, *(undefined2 *)(*audioChannel + 4));
    frequency = (int)((frequency & 0xffff) * playbackSpeed) >> 0xc;

    if (*(char *)(audioChannel + 1) < '\0') {

      local_1c = (undefined2)frequency;
      soundType = *(undefined2 *)(*audioChannel + 6);
      soundDataPtr = *(undefined4 *)(*audioChannel + 0x10);
      soundId = *(undefined2 *)*audioChannel;

      if ((int)channelId < 0) {
        channelOverride = *(undefined *)(*audioChannel + 8);
      }
      else {
        channelOverride = (undefined)channelId;
      }

      soundFlags = *(undefined *)(*audioChannel + 10);

      FUN_8007a59c(audioChannel + 1, &leftVolumeParam);
    }
    else {

      if (-1 < (int)channelId) {
        FUN_8007a614(audioChannel + 1, channelId & 0xff);
      }
      FUN_8007a668(audioChannel + 1, frequency & 0xffff);
      FUN_8007a6c8(audioChannel + 1, &leftVolumeParam);
    }
  }
  return;
}

void FUN_80078760(int audioChannel)

{
  FUN_8007a728(audioChannel + 4);
  FUN_8007a778(audioChannel + 4);
  return;
}

void FUN_80078790(undefined4 *audioBuffer,undefined4 soundData,undefined4 bufferSize)

{
  undefined4 currentTime;

  currentTime = DAT_80092e74;
  *audioBuffer = soundData;
  audioBuffer[1] = bufferSize;
  audioBuffer[2] = currentTime;
  return;
}

void FUN_800787a8(int audioBuffer)

{
  FUN_80078950(*(undefined4 *)(audioBuffer + 8));
  return;
}

int FUN_800787cc(int *audioBuffer,undefined4 soundData,undefined4 bufferSize,int loadMethod)

{
  undefined4 (*loadFunction)(int, undefined4, undefined4, undefined);

  if (loadMethod == 0) {

    loadFunction = FUN_80068310;
  }
  else {

    loadFunction = FUN_8006830c;
  }

  (*loadFunction)(soundData, *audioBuffer, audioBuffer[2], bufferSize);

  int dataSize = *(int *)(*audioBuffer + 0x10);
  int alignedSize = (dataSize + 0x1f) & 0xfffffff0;

  DAT_80092e74 = DAT_80092e74 + alignedSize;

  return alignedSize;
}

void FUN_80078840(undefined4 audioBuffer,undefined4 soundData,undefined4 bufferSize,undefined4 loadMethod)

{
  int previousBufferSize;
  int previousMemoryPtr;
  int loadedSize;

  previousMemoryPtr = DAT_80092e7c;
  previousBufferSize = DAT_80092e78;

  FUN_80078790(audioBuffer, DAT_80092e78, DAT_80092e7c);

  loadedSize = FUN_800787cc(audioBuffer, soundData, bufferSize, loadMethod);

  DAT_80092e7c = previousMemoryPtr - loadedSize;
  DAT_80092e78 = previousBufferSize + loadedSize;
  return;
}

int FUN_800788e4(int *audioChannelArray,int channelIndex)

{
  return *(int *)(*audioChannelArray + 0x1c) + channelIndex * 0x14;
}

void FUN_80078900(u_long channelId,undefined4 soundId,u_long audioBuffer,undefined4 volume,undefined4 channelOverride)

{
  undefined4 channelOffset;

  channelOffset = FUN_800788e4((int *)&DAT_801efe60, (int)channelId);
  FUN_800784a0((undefined2 *)&soundId, channelOffset, (int)volume, (int)channelOverride);
  return;
}

undefined4 FUN_80078950(undefined4 newTimestamp)

{
  undefined4 previousTimestamp;

  previousTimestamp = DAT_80092e74;
  DAT_80092e74 = newTimestamp;
  return previousTimestamp;
}

void FUN_80078960(undefined4 memoryPtr,undefined4 memorySize)

{
  DAT_80092e78 = memoryPtr;
  DAT_80092e7c = memorySize;
  return;
}

int * FUN_80078974(int *soundFile,int newBaseAddress)

{
  int originalBaseAddress;
  int *pointerArray;
  uint index;
  int offset;

  index = 0;

  if (*soundFile != 0x54534e49) {
    return (int *)0x0;
  }

  originalBaseAddress = soundFile[1];
  soundFile[1] = (int)soundFile;

  soundFile[7] = (int)soundFile + (soundFile[7] - originalBaseAddress);
  soundFile[5] = (int)soundFile + (soundFile[5] - originalBaseAddress);
  soundFile[9] = (int)soundFile + (soundFile[9] - originalBaseAddress);

  if (soundFile[8] != 0) {
    do {
      pointerArray = (int *)(index * 4 + soundFile[9]);
      *pointerArray = (int)soundFile + (*pointerArray - originalBaseAddress);
      index = index + 1;
    } while (index < (uint)soundFile[8]);
  }

  index = 0;
  if (newBaseAddress != 0) {
    originalBaseAddress = soundFile[3];
    soundFile[3] = newBaseAddress;

    if (soundFile[6] != 0) {
      offset = 0;
      do {
        index = index + 1;

        *(short *)(offset + soundFile[7]) =
             *(short *)(offset + soundFile[7]) + (short)((uint)(newBaseAddress - originalBaseAddress) >> 3);
        offset = offset + 0x14;
      } while (index < (uint)soundFile[6]);
    }
  }
  return soundFile;
}

void FUN_80078a54(int *audioChannelArray,int channelIndex,int volumeMultiplier,int enableLimiting)

{
  short *channelData;
  uint calculatedVolume;
  uint limitedVolume;

  channelData = (short *)(*audioChannelArray + *(char *)((int)audioChannelArray + channelIndex * 0xc + 0x11) * 0x10);

  calculatedVolume = ((uint)(*(int *)(channelData + 4) * volumeMultiplier) / (uint)(int)*channelData) *
                     (int)*(short *)((int)audioChannelArray + 10) >> 0xc;

  if (calculatedVolume == 0) {
    calculatedVolume = 1;
  }

  if (enableLimiting != 0) {
    limitedVolume = (uint)*(ushort *)(audioChannelArray + channelIndex * 3 + 6) << 1;
    if ((limitedVolume < calculatedVolume) ||
       (limitedVolume = (uint)(*(ushort *)(audioChannelArray + channelIndex * 3 + 6) >> 1), calculatedVolume < limitedVolume)) {
      calculatedVolume = limitedVolume;
    }
  }

  *(short *)(audioChannelArray + channelIndex * 3 + 6) = (short)calculatedVolume;
  return;
}

void FUN_80078b00(int *audioChannelArray,int channelIndex,int timePosition,int enableLimiting)

{
  int envelopeData;
  uint rightVolume;
  undefined2 leftVolume;
  uint envelopeValue;
  uint leftChannelVolume;
  int channelDataPtr;
  uint rightChannelVolume;

  envelopeValue = 0x4000;

  envelopeData = (int)*(char *)((int)audioChannelArray + (channelIndex + 1U & 1) * 0xc + 0x11);
  channelDataPtr = *audioChannelArray + *(char *)((int)audioChannelArray + channelIndex * 0xc + 0x11) * 0x10;

  if (-1 < envelopeData) {
    envelopeData = *audioChannelArray + envelopeData * 0x10;

    if (timePosition < *(short *)(channelDataPtr + 2)) {
      envelopeData = (int)*(short *)(envelopeData + 4);
      timePosition = timePosition - envelopeData;
      envelopeData = *(short *)(channelDataPtr + 2) - envelopeData;
    }

    else {
      if (timePosition <= *(short *)(channelDataPtr + 4)) goto LAB_80078ba8;

      envelopeData = (int)*(short *)(envelopeData + 2);
      timePosition = envelopeData - timePosition;
      envelopeData = envelopeData - *(short *)(channelDataPtr + 4);
    }

    envelopeValue = (timePosition * 0x4000) / envelopeData;
  }

LAB_80078ba8:

  envelopeValue = (uint)((*(short *)((int)&DAT_80093150 + (envelopeValue >> 3 & 0x1ffe)) * 0x3fff >> 0xc) *
                         (int)*(short *)(channelDataPtr + 6)) >> 0xe;

  leftChannelVolume = (int)*(short *)(audioChannelArray + 3) * envelopeValue >> 0xe;
  rightChannelVolume = (int)*(short *)((int)audioChannelArray + 0xe) * envelopeValue >> 0xe;

  leftVolume = (undefined2)leftChannelVolume;
  rightVolume = rightChannelVolume;

  if (enableLimiting != 0) {
    envelopeData = (int)*(short *)((int)audioChannelArray + channelIndex * 0xc + 0x16);
    leftChannelVolume = (int)*(short *)(audioChannelArray + channelIndex * 3 + 5) + 0x1000;
    rightVolume = (int)*(short *)(audioChannelArray + channelIndex * 3 + 5) - 0x1000;

    if (((int)leftChannelVolume <= (int)leftChannelVolume) && (leftChannelVolume = leftChannelVolume, (int)leftChannelVolume < (int)rightVolume)) {
      leftChannelVolume = rightVolume;
    }
    leftVolume = (undefined2)leftChannelVolume;

    rightVolume = envelopeData + 0x1000;
    if (((int)rightChannelVolume <= (int)rightVolume) && (rightVolume = envelopeData - 0x1000, (int)rightVolume <= (int)rightChannelVolume))
    goto LAB_80078c70;
  }

  leftVolume = (undefined2)leftChannelVolume;
  rightChannelVolume = rightVolume;

LAB_80078c70:

  *(undefined2 *)(audioChannelArray + channelIndex * 3 + 5) = leftVolume;
  *(short *)((int)audioChannelArray + channelIndex * 0xc + 0x16) = (short)rightChannelVolume;
  return;
}

void FUN_80078c88(int *soundSequence)

{
  undefined tempChannel;
  int currentNote;
  int channelIndex;
  int *channelData;
  char channelId;
  int noteIndex;
  uint timePosition;
  int channelOffset;
  int soundDataPtr;
  undefined2 frequency;
  undefined2 volume;
  undefined4 soundFlags;
  undefined2 channelFlags;
  undefined soundType;
  undefined channelState;

  timePosition = (uint)*(ushort *)(soundSequence + 2);
  channelIndex = 0;
  if (timePosition < 200) {
    timePosition = 200;
  }

  noteIndex = 0;
  channelOffset = *soundSequence;
  if (*(byte *)(soundSequence + 1) != 0) {
    do {
      currentNote = channelOffset;
      channelId = (char)noteIndex;

      if (((int)*(short *)(currentNote + 2) <= (int)timePosition) &&
          ((int)timePosition <= (int)*(short *)(currentNote + 4))) {

        *(char *)((int)soundSequence + 0x11) = channelId;
        *(undefined *)((int)soundSequence + 0x1d) = 0xff;
        break;
      }

      if (((channelIndex != 0) && ((int)*(short *)(channelIndex + 4) < (int)timePosition)) &&
         ((int)timePosition < (int)*(short *)(currentNote + 2))) {

        *(char *)((int)soundSequence + 0x11) = channelId + -1;
        *(char *)((int)soundSequence + 0x1d) = channelId;
        break;
      }

      noteIndex = noteIndex + 1;
      channelOffset = currentNote + 0x10;
      channelIndex = currentNote;
    } while (noteIndex < (int)(uint)*(byte *)(soundSequence + 1));
  }

  if ((*(char *)((int)soundSequence + 0x11) == *(char *)((int)soundSequence + 0x1e)) ||
     (*(char *)((int)soundSequence + 0x1d) == *(char *)((int)soundSequence + 0x12))) {
    tempChannel = *(undefined *)((int)soundSequence + 0x1d);
    *(char *)((int)soundSequence + 0x1d) = *(char *)((int)soundSequence + 0x11);
    *(undefined *)((int)soundSequence + 0x11) = tempChannel;
  }

  channelIndex = 0;
  channelOffset = 0x10;
  channelData = soundSequence;
  do {

    if (*(char *)((int)channelData + 0x11) == *(char *)((int)channelData + 0x12)) {

      if (*(char *)(channelData + 4) < '\0') goto LAB_80078e38;
      if (-1 < *(char *)((int)channelData + 0x11)) {

        FUN_80078a54(soundSequence, channelIndex, timePosition, 1);
        FUN_80078b00(soundSequence, channelIndex, timePosition, 1);
        channelOffset = (int)soundSequence + channelOffset;
        FUN_8007a668(channelOffset, *(undefined2 *)(channelData + 6));
        FUN_8007a6c8(channelOffset, channelOffset + 4);
      }
    }
    else {

      if (-1 < *(char *)(channelData + 4)) {
        FUN_8007a728((int)soundSequence + channelOffset);
        FUN_8007a778((int)soundSequence + channelOffset);
      }

LAB_80078e38:
      if (-1 < *(char *)((int)channelData + 0x11)) {

        FUN_80078a54(soundSequence, channelIndex, timePosition, 0);
        FUN_80078b00(soundSequence, channelIndex, timePosition, 0);

        soundDataPtr = channelData[5];
        *(short *)((int)channelData + 0x1a) =
             (short)(*(uint *)(*(char *)((int)channelData + 0x11) * 0x10 + *soundSequence + 0xc) >> 3);

        frequency = *(undefined2 *)(channelData + 6);
        volume = *(undefined2 *)((int)channelData + 0x1a);
        soundFlags = 0x3000f;
        soundType = *(undefined *)((int)soundSequence + 5);
        channelFlags = 0;
        channelState = 1;

        FUN_8007a59c((int)soundSequence + channelOffset, &soundDataPtr);
      }

      *(undefined *)((int)channelData + 0x12) = *(undefined *)((int)channelData + 0x11);
    }

    channelOffset = channelOffset + 0xc;
    channelIndex = channelIndex + 1;
    channelData = channelData + 3;
    if (1 < channelIndex) {
      return;
    }
  } while( true );
}

void FUN_80078f10(undefined4 *soundSequence,int sequenceData,int sequenceIndex,undefined soundType)

{
  undefined4 soundDataPtr;
  int channelIndex;

  channelIndex = 0;

  sequenceData = sequenceData + sequenceIndex * 8;

  *(undefined *)((int)soundSequence + 5) = soundType;

  *(undefined *)(soundSequence + 1) = *(undefined *)(sequenceData + 0x18);
  soundDataPtr = *(undefined4 *)(sequenceData + 0x1c);

  *(undefined2 *)((int)soundSequence + 10) = 0x1000;
  *(undefined2 *)(soundSequence + 3) = 0x3fff;
  *(undefined2 *)((int)soundSequence + 0xe) = 0x3fff;
  *(undefined2 *)((int)soundSequence + 6) = 0x4000;

  *soundSequence = soundDataPtr;

  do {
    *(undefined *)(soundSequence + 4) = 0xff;
    *(undefined *)((int)soundSequence + 0x11) = 0xff;
    *(undefined *)((int)soundSequence + 0x12) = 0xff;
    channelIndex = channelIndex + 1;
    soundSequence = soundSequence + 3;
  } while (channelIndex < 2);

  return;
}

void FUN_80078f74(int soundSequence)

{
  int channelData;
  int channelOffset;
  int channelIndex;

  channelIndex = 0;
  channelOffset = 0x10;
  channelData = soundSequence;

  do {

    if (-1 < *(char *)(channelData + 0x10)) {

      FUN_8007a728(soundSequence + channelOffset);
      FUN_8007a778(soundSequence + channelOffset);
    }

    channelOffset = channelOffset + 0xc;
    channelIndex = channelIndex + 1;
    channelData = channelData + 0xc;
  } while (channelIndex < 2);

  return;
}

void FUN_80078ff8(int soundSequence,undefined newSoundType)

{
  int channelData;
  int channelOffset;
  int channelIndex;

  channelIndex = 0;
  channelOffset = 0x10;

  *(undefined *)(soundSequence + 5) = newSoundType;

  channelData = soundSequence;

  do {

    if (-1 < *(char *)(channelData + 0x10)) {

      FUN_8007a614(soundSequence + channelOffset, newSoundType);
    }

    channelOffset = channelOffset + 0xc;
    channelIndex = channelIndex + 1;
    channelData = channelData + 0xc;
  } while (channelIndex < 2);

  return;
}

int * FUN_80079078(int *sequenceFile,int newBaseAddress)

{
  int originalBaseAddress;
  int *sequenceData;
  int *channelData;
  uint sequenceIndex;
  int channelIndex;

  channelIndex = 0;

  if (*sequenceFile != 0x4e474e45) {
    return (int *)0x0;
  }

  originalBaseAddress = sequenceFile[1];
  sequenceFile[1] = (int)sequenceFile;
  sequenceFile[5] = (int)sequenceFile + (sequenceFile[5] - originalBaseAddress);

  channelData = sequenceFile;
  do {
    if (channelData[7] != 0) {
      channelData[7] = (int)sequenceFile + (channelData[7] - originalBaseAddress);
    }
    channelIndex = channelIndex + 1;
    channelData = channelData + 2;
  } while (channelIndex < 2);

  channelIndex = 0;
  if (newBaseAddress != 0) {
    originalBaseAddress = sequenceFile[3];
    sequenceFile[3] = newBaseAddress;

    channelData = sequenceFile;
    do {
      sequenceIndex = 0;
      if (channelData[6] != 0) {
        sequenceData = (int *)(channelData[7] + 0xc);
        do {
          sequenceIndex = sequenceIndex + 1;

          *sequenceData = *sequenceData + (newBaseAddress - originalBaseAddress);
          sequenceData = sequenceData + 4;
        } while (sequenceIndex < (uint)channelData[6]);
      }
      channelIndex = channelIndex + 1;
      channelData = channelData + 2;
    } while (channelIndex < 2);
  }
  return sequenceFile;
}

void FUN_80079140(void)

{
  if (DAT_80092e88 != 0) {
    FUN_8007916c();
  }
  return;
}

void FUN_8007916c(void)

{

  byte channelFlags;
  ushort voiceData;
  word voiceParam1;
  word voiceParam2;
  uint *channelData;
  uint *nextChannelData;
  uint channelMask;
  word *voiceRegister;
  char *channelState;
  word *voiceStartAddr;
  undefined1 *channelUpdateFlag;
  int channelIndex;
  uint channelsToStop;
  dword *voiceLeftRight;
  uint channelsToUpdate;
  uint channelsToStart;

  channelsToUpdate = 0;
  channelsToStop = 0;
  channelsToStart = 0;

  channelState = &DAT_801efe68;
  channelMask = 1;
  channelIndex = 0;
  voiceLeftRight = &VOICE_00_LEFT_RIGHT;

  DAT_80092e80 = DAT_80092e80 + 1;

  channelData = (uint *)&DAT_801efe60;

  do {
    nextChannelData = channelData + 10;

    if (*(char *)(channelData + 3) != '\x02') {

      if (((*(char *)((int)channelData + 9) != '\0') && (*(char *)((int)channelData + 0xe) == '\0')) &&
         ((*(short *)(voiceLeftRight + 3) == 0 || (channelData[9] < *nextChannelData)))) {

        *(undefined *)((int)channelData + 9) = 0;
        *(undefined *)((int)channelData + 0xf) = 1;

        if (*channelState == '\x01') {
          if ((undefined *)channelData[7] != (undefined *)0x0) {
            *(undefined *)channelData[7] = 0xff;
          }
          channelData[7] = 0;
          *channelState = '\0';
        }
      }

      if (*(char *)((int)channelData + 0xf) != '\0') {
        if (*(char *)((int)channelData + 10) != '\0') {
          channelsToStop = channelsToStop | channelMask;
          *(undefined *)((int)channelData + 10) = 0;
        }
        *(undefined *)((int)channelData + 0xf) = 0;
      }

      if (*(char *)((int)channelData + 0xd) != '\0') {
        channelsToUpdate = channelsToUpdate | channelMask;
      }

      if (*(char *)((int)channelData + 0xe) != '\0') {
        if (*(char *)((int)channelData + 10) != '\0') {
          channelsToStop = channelsToStop | channelMask;
        }
        channelsToStart = channelsToStart | channelMask;
        *(undefined *)((int)channelData + 10) = 1;
        *(undefined *)((int)channelData + 9) = 1;
        *(undefined *)((int)channelData + 0xe) = 0;
      }
    }

    if ((*(char *)((int)channelData + 9) != '\0') && (channelData[8] = channelData[8] + 1, channelData[9] != 0)) {
      *nextChannelData = *nextChannelData + (uint)*(ushort *)(voiceLeftRight + 1);
    }

    voiceLeftRight = voiceLeftRight + 4;
    channelIndex = channelIndex + 1;
    channelState = channelState + 0x28;
    channelMask = channelMask << 1;
    channelData = nextChannelData;
  } while (channelIndex < 0x18);

  if (channelsToStop != 0) {
    SPU_VOICE_KEY_OFF._2_2_ = (undefined2)(channelsToStop >> 0x10);
    SPU_VOICE_KEY_OFF._0_2_ = (undefined2)channelsToStop;
    DAT_80092e84 = DAT_80092e84 & ~channelsToStop;
  }

  voiceLeftRight = &VOICE_00_LEFT_RIGHT;
  if (channelsToUpdate != 0) {
    voiceRegister = &DAT_801efe76;
    voiceStartAddr = &VOICE_00_ADPCM_START_ADDR;

    do {
      if ((channelsToUpdate & 1) != 0) {
        channelFlags = *(byte *)((int)voiceRegister + -9);
        *(undefined *)((int)voiceRegister + -9) = 0;

        if ((channelFlags & 1) != 0) {
          voiceStartAddr[-1] = voiceRegister[-1];
        }

        if ((channelFlags & 2) != 0) {
          voiceData = voiceRegister[-2];
          *(word *)voiceLeftRight = voiceRegister[-3] & 0x7fff;
          voiceStartAddr[-2] = voiceData & 0x7fff;
        }

        if ((channelFlags & 4) != 0) {
          voiceParam1 = voiceRegister[2];
          voiceParam2 = *voiceRegister;
          voiceStartAddr[1] = voiceRegister[1];
          voiceStartAddr[2] = voiceParam1;
          *voiceStartAddr = voiceParam2;
        }
      }

      voiceStartAddr = voiceStartAddr + 8;
      voiceLeftRight = voiceLeftRight + 4;
      channelsToUpdate = channelsToUpdate >> 1;
      voiceRegister = voiceRegister + 0x14;
    } while (channelsToUpdate != 0);
  }

  if (channelsToStart != 0) {
    SPU_VOICE_KEY_ON._0_2_ = (undefined2)channelsToStart;
    SPU_VOICE_KEY_ON._2_2_ = (undefined2)(channelsToStart >> 0x10);
    DAT_80092e84 = DAT_80092e84 | channelsToStart;
  }

  channelMask = 0;
  if (DAT_801efe62 != '\0') {
    channelUpdateFlag = &DAT_801efe68;
    channelMask = 1;
    channelIndex = 0x17;

    do {
      if (channelUpdateFlag[0x24] != '\0') {
        channelMask = channelMask | channelMask;
      }
      channelIndex = channelIndex + -1;
      channelUpdateFlag = channelUpdateFlag + 0x28;
      channelMask = channelMask << 1;
    } while (-1 < channelIndex);

    SPU_VOICE_CHN_REVERB_MODE._0_2_ = (undefined2)channelMask;
    SPU_VOICE_CHN_REVERB_MODE._2_2_ = (undefined2)(channelMask >> 0x10);
    DAT_801efe62 = '\0';
  }
  return;
}

void FUN_80079460(int soundSequence,int soundData,int timePosition,int volumeMultiplier,int soundType)

{
  byte noteIndex;
  byte noteCount;
  byte noteFlags;
  short frequencyOffset;
  byte *noteData;
  int noteTime;
  undefined2 *noteParameters;
  int timerIndex;
  uint timerSlot;
  int frequencyParam;
  int *timerData;
  int volumeParam;
  int panParam;
  int noteIndex2;
  byte *sequenceData;
  undefined reserved;
  undefined volumeOutput[4];
  undefined2 leftVolume;
  undefined2 rightVolume;
  undefined4 frequency;
  undefined2 soundFlags;
  undefined channelFlags;
  undefined soundType2;
  int sequenceBase;
  int calculatedVolume;

  sequenceBase = *(int *)(soundSequence + 0x18);

  sequenceData = *(byte **)((uint)*(byte *)(soundData + 0x11) * 4 + *(int *)(sequenceBase + 0x24));
  noteIndex = *(byte *)(soundData + 0x10);
  noteCount = sequenceData[1];

  calculatedVolume = (int)(((int)((uint)*(ushort *)(soundData + 10) * (int)*(short *)(sequenceData + 2)) >> 0xe) *
                          (uint)*(ushort *)(&DAT_800900b8 + volumeMultiplier * 2)) >> 0xe;

  noteIndex2 = 0;
  noteData = sequenceData;

  if (*sequenceData != 0) {
    do {

      noteParameters = (undefined2 *)(*(int *)(sequenceBase + 0x1c) + (uint)noteData[4] * 0x14);

      if (((int)(uint)*(byte *)(noteParameters + 6) <= timePosition) &&
         (timePosition <= (int)(uint)*(byte *)((int)noteParameters + 0xd))) {

        timerSlot = (uint)DAT_801f0238;
        timerIndex = 0;
        timerData = &DAT_801f0248 + timerSlot * 7;

        do {
          timerSlot = timerSlot + 1;
          timerData = timerData + 7;
          if (timerSlot == 0x19) {
            timerSlot = 0;
            timerData = &DAT_801f0248;
          }
          timerIndex = timerIndex + 1;

          if (*(char *)((int)timerData + 0x1b) < '\0') {
            frequencyParam = timePosition * 0x100;
            frequencyOffset = *(short *)(soundData + 0xc);
            frequencyParam = (int)frequencyOffset;
            DAT_801f0238 = (byte)timerSlot;

            panParam = (uint)noteIndex + (uint)noteCount + (uint)*(byte *)((int)noteParameters + 9) + -0x80;
            volumeParam = calculatedVolume * (short)noteParameters[1] >> 0xe;

            if (panParam < 0) {
              panParam = 0;
            }
            else if (0x7f < panParam) {
              panParam = 0x7f;
            }

            *timerData = soundSequence;
            timerData[1] = soundData;
            timerData[2] = (int)sequenceData;
            timerData[3] = (int)noteParameters;
            noteTime = *(int *)(soundSequence + 0x14);
            *(short *)((int)timerData + 0x16) = frequencyOffset;
            *(char *)(timerData + 6) = (char)timePosition;
            reserved = (undefined)volumeMultiplier;
            *(undefined *)((int)timerData + 0x19) = reserved;
            timerData[4] = soundType + noteTime;
            *(undefined2 *)(timerData + 5) = *(undefined2 *)(soundData + 10);
            *(undefined *)((int)timerData + 0x1a) = *(undefined *)(soundData + 0x10);

            frequency = *(undefined4 *)(noteParameters + 8);
            rightVolume = *noteParameters;
            channelFlags = *(undefined *)(noteParameters + 4);
            soundFlags = noteParameters[3];
            soundType2 = *(undefined *)(noteParameters + 5);

            if (frequencyParam != 0) {
              if (frequencyParam < 1) {
                noteFlags = *(byte *)(noteParameters + 7);
              }
              else {
                noteFlags = *(byte *)((int)noteParameters + 0xf);
              }
              frequencyParam = frequencyParam + ((int)(frequencyParam * (uint)noteFlags) >> 5);
            }

            leftVolume = FUN_8007a52c(frequencyParam, noteParameters[2]);
            FUN_8007a170(volumeOutput, volumeParam * volumeParam >> 0xe, panParam);
            FUN_8007a59c((int)timerData + 0x1b, volumeOutput);
            break;
          }
        } while (timerIndex < 0x19);
      }

      noteIndex2 = noteIndex2 + 1;
      noteData = sequenceData + noteIndex2;
    } while (noteIndex2 < (int)(uint)*sequenceData);
  }
  return;
}

void FUN_80079744(int soundSequence)

{
  char commandParam;
  byte commandByte;
  byte commandData;
  ushort commandValue;
  int timeRemaining;
  uint commandMask;
  uint commandType;
  byte *commandPtr;
  byte *nextCommandPtr;
  int *timerData;
  byte **channelArray;
  int channelIndex;

  channelIndex = 0;
  channelArray = (byte **)(soundSequence + 0x28);
  timerData = (int *)(soundSequence + 0x2c);

  do {
    commandPtr = *channelArray;
    if (commandPtr != (byte *)0x0) {

      timeRemaining = *timerData - *(int *)(soundSequence + 0x14);
      *timerData = timeRemaining;

      while (timeRemaining < 1) {
        commandByte = *commandPtr;
        commandType = (uint)commandByte;
        nextCommandPtr = commandPtr + 1;

        if ((commandByte & 0x80) == 0) {
          if ((commandByte & 0x40) == 0) {
            if ((commandByte & 0x20) == 0) {
              switch(commandType) {
              case 0:
                commandPtr = (byte *)0x0;
                goto LAB_800799f8;
              case 1:
                commandParam = *(char *)((int)timerData + 0xe);
                commandData = *nextCommandPtr;
                nextCommandPtr = commandPtr + 2;
                *(byte *)((int)channelArray + commandParam + 0x25) = commandData;
                channelArray[commandParam + 6] = nextCommandPtr;
                *(char *)((int)timerData + 0xe) = commandParam + '\x01';
                break;
              case 2:
                commandParam = *(char *)((int)timerData + 0xe);
                *(char *)((int)channelArray + commandParam + 0x24) = commandParam + -1;
                nextCommandPtr = channelArray[commandParam + 5];
                *(char *)((int)timerData + 0xe) = commandParam + '\x01';
                break;
              case 3:
                commandData = *nextCommandPtr;
                nextCommandPtr = commandPtr + 2;
                *(byte *)((int)timerData + 0xd) = commandData;
                break;
              case 4:
                commandValue = *(ushort *)(&DAT_800900b8 + (uint)*nextCommandPtr * 2);
                *(ushort *)(timerData + 1) = commandValue;
                nextCommandPtr = commandPtr + 2;
                *(short *)((int)timerData + 6) =
                     (short)((int)((uint)*(ushort *)(soundSequence + 6) * (uint)commandValue) >> 0xe);
                break;
              case 5:
                commandData = *nextCommandPtr;
                nextCommandPtr = commandPtr + 2;
                *(byte *)(timerData + 3) = commandData;
                break;
              case 6:
                commandData = *nextCommandPtr;
                nextCommandPtr = commandPtr + 4;
                *(uint *)(soundSequence + 8) =
                     (uint)commandData << 0x10 | (uint)commandPtr[2] << 8 | (uint)commandPtr[3];
                break;
              }
            }
            else {
              commandParam = *(char *)((int)timerData + 0xe);
              *(byte *)((int)channelArray + commandParam + 0x25) = (commandByte & 0x1f) + 1;
              channelArray[commandParam + 6] = nextCommandPtr;
              *(char *)((int)timerData + 0xe) = commandParam + '\x01';
            }
          }
          else {
            commandData = *nextCommandPtr;
            nextCommandPtr = commandPtr + 2;
            *(ushort *)(timerData + 2) = ((ushort)commandData | (ushort)((commandType & 0x3f) << 8)) + 0xe000;
          }
        }
        else {
          commandData = *nextCommandPtr;
          commandMask = (uint)commandPtr[2];
          nextCommandPtr = commandPtr + 3;
          if ((commandPtr[2] & 0x80) != 0) {
            commandMask = commandMask & 0x7f;
            do {
              commandByte = *nextCommandPtr;
              nextCommandPtr = nextCommandPtr + 1;
              commandMask = commandMask * 0x80 + (commandByte & 0x7f);
            } while ((commandByte & 0x80) != 0);
          }

          FUN_80079460(soundSequence, channelArray, commandType & 0x7f, commandData,
                       commandMask + *(int *)(soundSequence + 0x14) + *timerData);
        }

        commandType = (uint)*nextCommandPtr;
        commandPtr = nextCommandPtr + 1;
        if ((*nextCommandPtr & 0x80) != 0) {
          commandType = commandType & 0x7f;
          do {
            commandData = *commandPtr;
            commandPtr = commandPtr + 1;
            commandType = commandType * 0x80 + (commandData & 0x7f);
          } while ((commandData & 0x80) != 0);
        }
        timeRemaining = *timerData + commandType;
        *timerData = timeRemaining;
      }
LAB_800799f8:
      *channelArray = commandPtr;
    }

    channelIndex = channelIndex + 1;
    timerData = timerData + 10;
    channelArray = channelArray + 10;
    if (0xf < channelIndex) {
      return;
    }
  } while( true );
}

void FUN_80079a38(void)

{

  short timerValue;
  int currentTime;
  int *timerArray;

  if ((DAT_80092e88 != 0) && (DAT_80092e8c != 0)) {

    timerArray = DAT_801f0230;

    if (DAT_801f0230 != (int *)0x0) {
      do {

        timerArray[5] = 0;

        if (0 < timerArray[3]) {
          do {

            currentTime = timerArray[3];
            timerArray[5] = timerArray[5] + 1;
            timerArray[3] = currentTime - timerArray[2];
          } while (0 < currentTime - timerArray[2]);
        }

        timerArray[3] = timerArray[3] + timerArray[4];

        FUN_80079744(timerArray);

        if (*(short *)(timerArray + 7) != 0) {

          timerValue = FUN_8007a868(timerArray + 7);
          *(short *)(timerArray + 1) = *(short *)(timerArray + 1) + timerValue;

          FUN_8007a44c(timerArray);
        }

        timerArray = (int *)*timerArray;
      } while (timerArray != (int *)0x0);
    }

    if (DAT_801f023c != 0) {

      timerValue = FUN_8007a868(&DAT_801f023c);
      DAT_801f0236 = DAT_801f0236 + timerValue;

      for (timerArray = DAT_801f0230; timerArray != (int *)0x0; timerArray = (int *)*timerArray) {
        FUN_8007a44c(timerArray);
      }
    }

    FUN_80079b64();
  }
  return;
}

void FUN_80079b64(void)

{

  byte timerFlags;
  undefined2 frequencyValue;
  int timerValue;
  int frequencyParam;
  char *timerStatus;
  undefined1 *channelId;
  int *timerData;
  int timerIndex;
  undefined volumeOutput[8];

  timerIndex = 0;
  timerData = &DAT_801f0248;
  timerStatus = &DAT_801f0262;
  channelId = &DAT_801f0263;

  do {

    if (-1 < timerStatus[1]) {
      if (*timerData == 0) {
        FUN_8007a728(channelId);
        FUN_8007a778(channelId);
      }
      else {

        if ((0 < *(int *)(timerStatus + -10)) &&
           (timerValue = *(int *)(timerStatus + -10) - *(int *)(*timerData + 0x14),
           *(int *)(timerStatus + -10) = timerValue, timerValue < 1)) {
          FUN_8007a728(channelId);
        }

        if (*(short *)(*(int *)(timerStatus + -0x16) + 0xc) != *(short *)(timerStatus + -4)) {
          frequencyParam = *(int *)(timerStatus + -0xe);
          if (*(short *)(*(int *)(timerStatus + -0x16) + 0xc) < 1) {
            timerFlags = *(byte *)(frequencyParam + 0xe);
          }
          else {
            timerFlags = *(byte *)(frequencyParam + 0xf);
          }
          frequencyValue = FUN_8007a52c((uint)(byte)timerStatus[-2] * 0x100 +
                                        ((int)((uint)timerFlags * (int)*(short *)(*(int *)(timerStatus + -0x16) + 0xc))
                                        >> 5), *(undefined2 *)(frequencyParam + 4));
          FUN_8007a668(channelId, frequencyValue);
          *(undefined2 *)(timerStatus + -4) = *(undefined2 *)(*(int *)(timerStatus + -0x16) + 0xc);
        }

        timerValue = *(int *)(timerStatus + -0x16);
        if ((*(short *)(timerValue + 10) != *(short *)(timerStatus + -6)) ||
           (*(char *)(timerValue + 0x10) != *timerStatus)) {
          frequencyParam = (uint)*(byte *)(*(int *)(timerStatus + -0xe) + 9) + (uint)*(byte *)(timerValue + 0x10) +
                          (uint)*(byte *)(*(int *)(timerStatus + -0x12) + 1) + -0x80;
          timerValue = ((int)(((int)((uint)*(ushort *)(timerValue + 10) *
                                   (int)*(short *)(*(int *)(timerStatus + -0x12) + 2)) >> 0xe) *
                            (uint)*(ushort *)(&DAT_800900b8 + (uint)(byte)timerStatus[-1] * 2)) >> 0xe) *
                      (int)*(short *)(*(int *)(timerStatus + -0xe) + 2) >> 0xe;

          if (frequencyParam < 0) {
            frequencyParam = 0;
          }
          else if (0x7f < frequencyParam) {
            frequencyParam = 0x7f;
          }

          FUN_8007a170(volumeOutput, timerValue * timerValue >> 0xe, frequencyParam);
          FUN_8007a6c8(channelId, volumeOutput);
          *(undefined2 *)(timerStatus + -6) = *(undefined2 *)(*(int *)(timerStatus + -0x16) + 10);
          *timerStatus = *(char *)(*(int *)(timerStatus + -0x16) + 0x10);
        }
      }
    }

    timerIndex = timerIndex + 1;
    timerStatus = timerStatus + 0x1c;
    timerData = timerData + 7;
    channelId = channelId + 1;
  } while (timerIndex < 0x19);
  return;
}

void FUN_80079dbc(void)

{

  if (DAT_80092e88 == 0) {

    SPU_MAIN_VOL_L = 0x3fff;
    SPU_MAIN_VOL_R = 0x3fff;

    FUN_8008ce30(&DAT_801efe60, 0, 0x3c8);

    DAT_801efe60 = 0x17;
    FUN_80079e2c(0x3c);

    DAT_80092e88 = 1;
  }
  return;
}

void FUN_80079e2c(int sampleRate)

{
  DAT_801efe64 = (short)sampleRate;
  DAT_801efe66 = (short)((sampleRate * 0x100) / 0x3c);
  return;
}

void FUN_80079e64(void)

{

  int timerIndex;
  undefined4 *timerArray;

  if (DAT_80092e8c == 0) {

    FUN_8008ce30(&DAT_801f0230, 0, 0x2d4);

    timerArray = &DAT_801f0248;
    timerIndex = 0x18;

    DAT_801f0230 = 0;
    DAT_801f0236 = 0x3fff;
    DAT_801f0238 = 0;

    do {

      *(undefined *)((int)timerArray + 0x1b) = 0xff;
      timerIndex = timerIndex + -1;
      timerArray = timerArray + 7;
    } while (-1 < timerIndex);

    FUN_80079eec(0x3c);

    DAT_80092e8c = 1;
  }
  return;
}

void FUN_80079eec(undefined2 baseFrequency)

{
  DAT_801f0234 = baseFrequency;
  return;
}

int FUN_80079ef8(uint effectType,int effectParameter,int effectValue)

{

  short calculatedValue;
  undefined4 spuRegister1;
  int effectIndex;
  undefined4 spuRegister2;
  uint normalizedValue;
  undefined4 spuRegister3;
  undefined4 spuRegister4;
  int *parameterPointer;
  undefined2 *spuRegister5;
  undefined4 *spuRegister6;
  undefined4 *spuRegister7;
  undefined2 *spuRegister8;
  int localParameter1;
  int localParameter2[2];

  localParameter2[0] = effectValue;
  parameterPointer = &localParameter1;
  effectType = effectType & 0xff;
  localParameter1 = effectParameter;

  if (effectType - 7 < 2) {

    parameterPointer = localParameter2;
    effectIndex = effectType * 0x40;

    normalizedValue = (uint)(effectParameter * 0x2000) / 0x7f;
    calculatedValue = (short)((int)normalizedValue >> 1);

    *(short *)(&LAB_80092eb8_2 + effectIndex) = calculatedValue - *(short *)(&LAB_80092ea4_2 + effectIndex);
    *(short *)(&LAB_80092eb8 + effectIndex) = (short)normalizedValue - *(short *)(&LAB_80092ea4 + effectIndex);
    *(short *)(&LAB_80092ebc + effectIndex) = *(short *)(&LAB_80092ebc_2 + effectIndex) + calculatedValue;
    *(short *)(&LAB_80092ec4 + effectIndex) = *(short *)(&LAB_80092ec4_2 + effectIndex) + calculatedValue;
    *(short *)(&LAB_80092ed8 + effectIndex) = *(short *)(&LAB_80092edc + effectIndex) + calculatedValue;
    *(short *)(&LAB_80092ed8_2 + effectIndex) = *(short *)(&LAB_80092edc_2 + effectIndex) + calculatedValue;
  }

  if (effectType == 7) {
    DAT_80093072 = (undefined2)((*parameterPointer * 0x8100) / 0x7f);
  }

  spuRegister7 = (undefined4 *)(&LAB_80092ea4 + effectType * 0x40);
  spuRegister8 = (undefined2 *)&DAT_1f801dc0;
  effectIndex = 3;
  spuRegister5 = (undefined2 *)&DAT_1f801dce;

  SPU_REVERB_OUT_L = 0;
  SPU_REVERB_OUT_R = 0;
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xff7f;
  SOUND_RAM_REVERB_WORK_ADDR = *(word *)(&LAB_80092e90 + effectType * 2);
  spuRegister6 = (undefined4 *)(&LAB_80092eb0 + effectType * 0x40);

  do {
    spuRegister2 = spuRegister6[-2];
    spuRegister3 = spuRegister6[-1];
    spuRegister4 = *spuRegister6;
    spuRegister6 = spuRegister6 + 4;
    spuRegister1 = *spuRegister7;
    spuRegister7 = spuRegister7 + 4;
    effectIndex = effectIndex + -1;

    *spuRegister8 = (short)spuRegister1;
    spuRegister5[-5] = (short)spuRegister2;
    spuRegister5[-3] = (short)spuRegister3;
    spuRegister5[-1] = (short)spuRegister4;

    spuRegister5[-6] = (short)((uint)spuRegister1 >> 0x10);
    spuRegister5[-4] = (short)((uint)spuRegister2 >> 0x10);
    spuRegister5[-2] = (short)((uint)spuRegister3 >> 0x10);
    *spuRegister5 = (short)((uint)spuRegister4 >> 0x10);

    spuRegister5 = spuRegister5 + 8;
    spuRegister8 = spuRegister8 + 8;
  } while (effectIndex != -1);

  DAT_801efe61 = 1;
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;

  return (0x10000 - (uint)*(ushort *)(&LAB_80092e90 + effectType * 2)) * 8;
}

void FUN_8007a0e0(uint enableCPU)

{

  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xff7f | (ushort)((enableCPU & 1) << 7);
  return;
}

void FUN_8007a104(word leftReverb,word rightReverb)

{
  SPU_REVERB_OUT_L = leftReverb;
  SPU_REVERB_OUT_R = rightReverb;
  return;
}

void FUN_8007a118(char *channelId,undefined newParameter)

{
  undefined previousState;
  int channelIndex;
  int channelOffset;

  channelIndex = (int)*channelId;
  if (-1 < channelIndex) {
    channelOffset = channelIndex * 0x28;

    previousState = DAT_801efe6c[channelOffset];
    DAT_801efe6c[channelOffset] = 1;

    if ((char *)(&DAT_801efe7c)[channelIndex * 10] == channelId) {
      DAT_801efe8c[channelOffset] = newParameter;
      DAT_801efe62 = 1;
    }

    DAT_801efe6c[channelOffset] = previousState;
    return;
  }
  return;
}

void FUN_8007a170(undefined2 *volumeOutput,int baseVolume,int panPosition)

{
  ushort rightPanValue;

  rightPanValue = *(ushort *)(&LAB_800901b6_2 + panPosition * 2);

  *volumeOutput = (short)((int)(baseVolume * (uint)*(ushort *)(&LAB_800901b6_2 + (0x7f - panPosition) * 2)) >> 0xe);

  volumeOutput[1] = (short)((int)(baseVolume * (uint)rightPanValue) >> 0xe);
  return;
}

int * FUN_8007a1c4(int *soundFile)

{
  int originalBase;
  int *currentPointer;
  int offsetIndex;
  int pointerIndex;
  uint relocationCount;
  int blockIndex;
  int *blockPointer;

  relocationCount = 0;

  if (*soundFile != 0x47514553) {
    return (int *)0x0;
  }

  originalBase = soundFile[1];
  soundFile[1] = (int)soundFile;

  if (soundFile[2] != 0) {
    blockIndex = 0;
    blockPointer = soundFile;

    do {
      pointerIndex = 0;
      currentPointer = blockPointer;
      offsetIndex = blockIndex;

      do {
        if (*(int *)((int)soundFile + offsetIndex + 0x14) != 0) {
          currentPointer[5] = (int)soundFile + (currentPointer[5] - originalBase);
        }
        currentPointer = currentPointer + 1;
        pointerIndex = pointerIndex + 1;
        offsetIndex = offsetIndex + 4;
      } while (pointerIndex < 0x10);

      blockPointer = blockPointer + 0x12;
      relocationCount = relocationCount + 1;
      blockIndex = blockIndex + 0x48;
    } while (relocationCount < (uint)soundFile[2]);
  }
  return soundFile;
}

void FUN_8007a260(undefined2 newFrequency)

{

  int *currentTimer;

  currentTimer = DAT_801f0230;
  DAT_801f0236 = newFrequency;

  if (DAT_801f0230 != (int *)0x0) {
    do {

      FUN_8007a44c(currentTimer);

      currentTimer = (int *)*currentTimer;
    } while (currentTimer != (int *)0x0);
  }
  return;
}

void FUN_8007a2a8(undefined4 *timerToRemove)

{
  undefined4 *currentTimer;
  undefined4 *previousTimer;
  undefined4 *nextTimer;

  currentTimer = DAT_801f0230;
  nextTimer = (undefined4 *)0x0;

  if (DAT_801f0230 != (undefined4 *)0x0) {
    do {
      previousTimer = currentTimer;
      if (previousTimer == timerToRemove) {

        if (nextTimer != (undefined4 *)0x0) {
          *nextTimer = *previousTimer;
          return;
        }
        DAT_801f0230 = (undefined4 *)*previousTimer;
        return;
      }
      currentTimer = (undefined4 *)*previousTimer;
      nextTimer = previousTimer;
    } while ((undefined4 *)*previousTimer != (undefined4 *)0x0);
  }
  return;
}

void FUN_8007a300(undefined4 *timerData,ushort *timerParams,undefined4 timerType)

{
  byte commandByte;
  ushort timerValue;
  undefined2 timerIncrement;
  byte *commandPtr;
  uint timerMaxValue;
  byte **channelArray;
  int channelOffset;
  int channelIndex;

  FUN_8007a2a8((undefined4 *)0x0);
  *timerData = 0;
  *(ushort *)(timerData + 1) = *timerParams;
  timerMaxValue = (uint)DAT_801f0236;
  timerValue = *timerParams;
  timerData[6] = timerType;
  *(short *)((int)timerData + 6) = (short)((int)(timerMaxValue * timerValue) >> 0xe);
  timerMaxValue = (uint)DAT_801f0234;
  channelIndex = 0;
  timerData[4] = 480000000 / timerMaxValue;
  timerData[3] = 480000000 / timerMaxValue;
  channelOffset = 0x28;
  timerData[2] = *(undefined4 *)(timerParams + 2);

  do {
    commandPtr = *(byte **)(timerParams + 4);
    channelArray = (byte **)((int)timerData + channelOffset);
    *channelArray = commandPtr;
    commandByte = *commandPtr;
    channelArray[1] = (byte *)(uint)commandByte;
    *channelArray = commandPtr + 1;

    if ((commandByte & 0x80) != 0) {
      channelArray[1] = (byte *)((uint)channelArray[1] & 0x7f);
      do {
        commandByte = **channelArray;
        *channelArray = *channelArray + 1;
        channelArray[1] = (byte *)((int)channelArray[1] * 0x80 + (commandByte & 0x7f));
      } while ((commandByte & 0x80) != 0);
    }

    timerParams = timerParams + 2;
    *(undefined2 *)(channelArray + 2) = 0x4000;
    timerIncrement = *(undefined2 *)((int)timerData + 6);
    channelIndex = channelIndex + 1;
    *(undefined2 *)(channelArray + 3) = 0;
    *(undefined *)(channelArray + 4) = 0;
    *(undefined *)((int)channelArray + 0x11) = 0;
    *(undefined *)((int)channelArray + 0x12) = 0xff;
    *(undefined2 *)((int)channelArray + 10) = timerIncrement;
    channelOffset = channelOffset + 0x28;
  } while (channelIndex < 0x10);
  return;
}

void FUN_8007a434(undefined4 *newTimer)

{
  *newTimer = DAT_801f0230;
  DAT_801f0230 = newTimer;
  return;
}

void FUN_8007a44c(int timerData)

{
  int timerValue;
  undefined2 *channelData;
  int channelIndex;

  int maxTimerValue = DAT_801f0236;
  int timerMultiplier = *(ushort *)(timerData + 4);

  timerValue = (int)((uint)maxTimerValue * (uint)timerMultiplier) >> 0xe;

  *(short *)(timerData + 6) = (short)timerValue;

  channelIndex = 0;
  channelData = (undefined2 *)(timerData + 0x32);

  do {

    int previousChannelValue = (ushort)channelData[-1];

    int channelValue = (timerValue * previousChannelValue) >> 0xe;

    *channelData = (short)channelValue;
    channelIndex = channelIndex + 1;
    channelData = channelData + 0x14;

  } while (channelIndex < 0x10);

  return;
}

void FUN_8007a4a4(undefined4 audioTimer)

{
  FUN_8007a2a8((undefined4 *)0x0);
  FUN_8007a44c(audioTimer);
  FUN_8007a434(audioTimer);
  return;
}

void FUN_8007a4d8(int timerToRemove)

{
  int *timerArray;
  int timerIndex;

  FUN_8007a2a8((undefined4 *)0x0);

  timerIndex = 0;
  timerArray = &DAT_801f0248;

  do {
    if (*timerArray == timerToRemove) {
      *timerArray = 0;
    }
    timerIndex = timerIndex + 1;
    timerArray = timerArray + 7;
  } while (timerIndex < 0x19);

  return;
}

uint FUN_8007a52c(int frequencyParam1,int frequencyParam2)

{
  uint frequencyDifference;
  uint frequencyMultiplier;

  frequencyDifference = frequencyParam1 - frequencyParam2;
  frequencyMultiplier = 0xfffffffe;

  if ((int)frequencyDifference < 0) {
    do {
      frequencyDifference = frequencyDifference + 0xc00;
      frequencyMultiplier = frequencyMultiplier - 1;
    } while ((int)frequencyDifference < 0);
  }
  else {
    while (0xbff < (int)frequencyDifference) {
      frequencyMultiplier = frequencyMultiplier + 1;
      frequencyDifference = frequencyDifference - 0xc00;
    }
  }

  if ((int)frequencyMultiplier < 1) {

    return (int)(uint)*(ushort *)(&LAB_8008fdb8 + (frequencyDifference >> 3) * 2) >> (-frequencyMultiplier & 0x1f) & 0xffff;
  }

  return (uint)*(ushort *)(&LAB_8008fdb8 + (frequencyDifference >> 3) * 2) << (frequencyMultiplier & 0x1f) & 0xffff;
}

void FUN_8007a59c(undefined *audioChannel,int soundData)

{
  int availableChannel;

  availableChannel = FUN_8007a938(*(undefined *)(soundData + 0xe));

  if (audioChannel != (undefined *)0x0) {
    *audioChannel = (char)availableChannel;
  }

  if (-1 < availableChannel) {
    DAT_801efe68[availableChannel * 0x28] = 1;
    DAT_801efe7c[availableChannel * 10] = audioChannel;
    FUN_8007aa94(availableChannel, soundData);
  }
  return;
}

void FUN_8007a614(char *channelId,undefined newSoundType)

{
  undefined previousState;
  int channelIndex;
  int channelOffset;

  channelIndex = (int)*channelId;
  if (-1 < channelIndex) {
    channelOffset = channelIndex * 0x28;

    previousState = DAT_801efe6c[channelOffset];
    DAT_801efe6c[channelOffset] = 1;

    if ((char *)(&DAT_801efe7c)[channelIndex * 10] == channelId) {
      DAT_801efe6b[channelOffset] = newSoundType;
    }

    DAT_801efe6c[channelOffset] = previousState;
    return;
  }
  return;
}

void FUN_8007a668(char *channelId,undefined2 newFrequency)

{
  undefined previousState;
  byte channelFlags;
  int channelIndex;
  int channelOffset;

  channelIndex = (int)*channelId;
  if (-1 < channelIndex) {
    channelOffset = channelIndex * 0x28;

    previousState = DAT_801efe6c[channelOffset];
    DAT_801efe6c[channelOffset] = 1;

    if ((char *)(&DAT_801efe7c)[channelIndex * 10] == channelId) {
      DAT_801efe6c[channelOffset] = 2;
      channelFlags = DAT_801efe6d[channelOffset];
      DAT_801efe74[channelIndex * 0x14] = newFrequency;
      DAT_801efe6d[channelOffset] = channelFlags | 1;
    }

    DAT_801efe6c[channelOffset] = previousState;
    return;
  }
  return;
}

void FUN_8007a6c8(char *channelId,undefined4 *newVolume)

{
  undefined previousState;
  byte channelFlags;
  int channelIndex;
  int channelOffset;
  undefined4 volumeValue;

  channelIndex = (int)*channelId;
  if (-1 < channelIndex) {
    channelOffset = channelIndex * 0x28;

    previousState = DAT_801efe6c[channelOffset];
    DAT_801efe6c[channelOffset] = 1;
    volumeValue = *newVolume;

    if ((char *)(&DAT_801efe7c)[channelIndex * 10] == channelId) {
      DAT_801efe6c[channelOffset] = 2;
      channelFlags = DAT_801efe6d[channelOffset];
      DAT_801efe70[channelIndex * 10] = volumeValue;
      DAT_801efe6d[channelOffset] = channelFlags | 2;
    }

    DAT_801efe6c[channelOffset] = previousState;
    return;
  }
  return;
}

void FUN_8007a728(char *channelId)

{
  undefined previousState;
  int channelIndex;
  int channelOffset;

  channelIndex = (int)*channelId;
  if (-1 < channelIndex) {
    channelOffset = channelIndex * 0x28;

    previousState = DAT_801efe6c[channelOffset];
    DAT_801efe6c[channelOffset] = 1;

    if ((char *)(&DAT_801efe7c)[channelIndex * 10] == channelId) {
      *(undefined2 *)((char *)&DAT_801efe6e + channelOffset) = 0x100;
    }

    DAT_801efe6c[channelOffset] = previousState;
    return;
  }
  return;
}

void FUN_8007a778(char *channelId)

{
  undefined previousState;
  int channelIndex;
  int channelOffset;

  channelIndex = (int)*channelId;
  if (-1 < channelIndex) {
    channelOffset = channelIndex * 0x28;

    previousState = DAT_801efe6c[channelOffset];
    DAT_801efe6c[channelOffset] = 1;

    if ((char *)(&DAT_801efe7c)[channelIndex * 10] == channelId) {
      *channelId = -1;
      DAT_801efe7c[channelIndex * 10] = 0;
    }

    DAT_801efe6c[channelOffset] = previousState;
    return;
  }
  return;
}

void FUN_8007a7cc(undefined2 *timerParams,int startTime,int endTime,int frequency)

{
  bool isNegative;
  short timeSteps;
  int stepSize;
  ushort hasRemainder;
  int remainder;

  endTime = endTime - startTime;
  if (endTime == 0) {
    *timerParams = 0;
    return;
  }

  isNegative = endTime < 1;
  if (isNegative) {
    endTime = -endTime;
  }

  stepSize = (int)(frequency * (uint)DAT_801f0234) / 1000;
  if (stepSize == 0) {
    stepSize = 1;
  }

  remainder = endTime % stepSize;
  timeSteps = (short)(endTime / stepSize);
  hasRemainder = (ushort)(remainder != 0);

  if (isNegative) {
    timeSteps = -timeSteps;
    hasRemainder = -(ushort)(remainder != 0);
  }

  timerParams[1] = timeSteps;
  timerParams[2] = hasRemainder;
  timerParams[3] = (short)remainder;
  timerParams[4] = (short)stepSize;
  timerParams[5] = (short)(stepSize >> 1);
  *timerParams = (short)stepSize;
  return;
}

int FUN_8007a868(short *timerData)

{
  short stepSize;
  int timerValue;

  if (*timerData == 0) {
    return 0;
  }

  timerValue = (int)timerData[1];
  *timerData = *timerData + -1;

  if (timerData[2] != 0) {
    stepSize = timerData[5];
    timerData[5] = stepSize - timerData[3];
    if (timerData[3] < 0) {
      timerValue = timerValue + timerData[2];
      timerData[5] = (stepSize - timerData[3]) + timerData[4];
    }
  }
  return timerValue;
}

int FUN_8007a938(uint soundType)

{
  bool hasMoreChannels;
  int channelIndex;
  uint *channelData;
  int channelsToCheck;
  uint channelMask;
  undefined *channelPtr;
  uint channelFlags;
  uint channelState;
  int tempChannelIndex;
  int channelOffset;
  uint *bestChannel;
  uint *currentChannel;
  uint tempChannelMask;
  uint tempChannelState;
  uint tempChannelFlags;
  int in_t5;
  uint in_t7;
  uint in_t8;
  uint in_t9;
  uint uVar7;
  uint *puVar3;
  uint uVar5;
  uint param_1;
  int iVar2;
  uint uVar8;
  int iVar9;
  uint *puVar11;
  uint *puVar10;
  bool bVar1;
  int iVar4;
  undefined *puVar6;

  param_1 = soundType;
  iVar2 = -1;
  in_t5 = -1;
  in_t7 = 0;
  in_t8 = 0;
  in_t9 = 0;
  puVar3 = channelData;
  puVar10 = (uint *)0x0;
  iVar4 = channelsToCheck;

  channelIndex = (int)DAT_801efe60;
  channelData = (uint *)(&DAT_801efe68 + channelIndex * 0x28);
  channelsToCheck = 0x17;

  do {
    channelData = channelData + 10;
    if (channelIndex == 0x17) {
      channelData = (uint *)&DAT_801efe68;
      channelIndex = -1;
    }
    channelIndex = channelIndex + 1;

    if ((*(char *)(channelData + 1) == '\0') && (*(char *)channelData == '\0')) {
      *(char *)(channelData + 1) = '\x01';
      if (*(char *)channelData == '\0') goto LAB_8007a99c;
      *(char *)(channelData + 1) = '\0';
    }
    hasMoreChannels = channelsToCheck != 0;
    channelsToCheck = channelsToCheck + -1;
  } while (hasMoreChannels);

  channelsToCheck = 0x17;
  bestChannel = (uint *)0x0;

  do {
    channelData = channelData + 10;
    if (channelIndex == 0x17) {
      channelData = (uint *)&DAT_801efe68;
      channelIndex = -1;
    }
    channelIndex = channelIndex + 1;
    tempChannelIndex = in_t5;
    currentChannel = bestChannel;
    channelMask = in_t7;
    channelState = in_t8;
    uVar7 = in_t9;
    if (*(char *)(puVar3 + 1) == '\0') {
      *(char *)(puVar3 + 1) = '\x01';
      uVar5 = *puVar3;
      if ((uVar5 & 0xff) == 0) {
LAB_8007a99c:
        *(char *)((int)puVar3 + 3) = (char)param_1;
        DAT_801efe60 = (char)iVar2;
        return iVar2;
      }
      uVar7 = uVar5 >> 0x18;
      if (((uVar5 & 0xff) == 1) && (uVar8 = uVar5 >> 0x10 & 0xff, param_1 <= uVar7)) {
        uVar5 = puVar3[6];
        if (uVar8 == 0) {
          uVar8 = (uint)*(byte *)((int)puVar3 + 6);
        }
        iVar9 = iVar2;
        puVar11 = puVar3;
        if (puVar10 != (uint *)0x0) {
          if (((uVar7 == in_t9) && ((int)in_t8 <= (int)uVar8)) && (uVar5 <= in_t7))
          goto LAB_8007aa50;
          *(char *)(puVar10 + 1) = '\0';
        }
      }
      else {
LAB_8007aa50:
        *(char *)(puVar3 + 1) = '\0';
        iVar9 = in_t5;
        puVar11 = puVar10;
        uVar5 = in_t7;
        uVar8 = in_t8;
        uVar7 = in_t9;
      }
    }
    bVar1 = iVar4 == 0;
    iVar4 = iVar4 + -1;
    in_t5 = iVar9;
    puVar10 = puVar11;
    in_t7 = uVar5;
    in_t8 = uVar8;
    in_t9 = uVar7;
    if (bVar1) {
      if (puVar11 != (uint *)0x0) {
        puVar6 = (undefined *)puVar11[5];
        if (puVar6 != (undefined *)0x0) {
          puVar11[5] = 0;
          *puVar6 = 0xff;
        }
        puVar11[1] = 0x1000001;
        DAT_801efe60 = (char)iVar9;
        return iVar9;
      }
      return -1;
    }
  } while( true );
}

void FUN_8007aa94(int channelId,undefined4 *soundData)

{
  byte soundFlags;
  ushort soundParameter;
  ushort audioMultiplier;
  int channelOffset;
  undefined4 soundData1;
  undefined4 soundData2;

  channelOffset = channelId * 0x28;
  DAT_801efe6c[channelOffset] = 2;
  audioMultiplier = DAT_801efe66;
  soundParameter = *(ushort *)(soundData + 3);

  DAT_801efe69[channelOffset] = 0;
  DAT_801efe80[channelId * 10] = 0;
  DAT_801efe88[channelId * 10] = 0;

  soundData1 = soundData[1];
  soundData2 = soundData[2];
  soundFlags = *(byte *)((int)soundData + 0xf);

  DAT_801efe70[channelId * 10] = *soundData;
  *(undefined4 *)((char *)&DAT_801efe74 + channelId * 0x14) = soundData1;
  *(undefined4 *)((char *)&DAT_801efe78 + channelId * 0x14) = soundData2;

  DAT_801efe84[channelId * 10] = (uint)soundParameter * (uint)audioMultiplier;
  DAT_801efe8c[channelOffset] = soundFlags & 1;

  DAT_801efe62 = 1;
  *(undefined4 *)((char *)&DAT_801efe6c + channelOffset) = 0x10700;
  return;
}

undefined4 FUN_8007ab14(code *callbackFunction)

{
  int transferStatus;

  while( true ) {
    FUN_80081c5c();
    FUN_80081f4c();
    FUN_8007c550();
    transferStatus = FUN_80081c94();
    if (transferStatus == 0) break;

    if (callbackFunction != (code *)0x0) {
      (*callbackFunction)();
    }
  }
  return 1;
}

void FUN_8007ab74(undefined4 dataBuffer,int sectorAddress,undefined4 dataSize)

{
  /* Platform CD reader: bypass the PS1 interrupt-driven CD state machine
     and read sectors directly from the BIN file (synchronous). */
  int sector = (sectorAddress << 0xb) >> 0xb;
  if (gt2_cd_reader_is_ready() && dataBuffer != 0) {
    gt2_cd_read_sectors((void *)(uintptr_t)dataBuffer, sector, (int)dataSize);
    return;
  }
  /* Fallback: original CD state machine (unlikely to work without HW interrupts) */
  FUN_8007cfdc(dataBuffer, sector, dataSize, 0);
  DAT_801f0548 = 0;
  FUN_8007ab14(0);
  return;
}

void FUN_8007ab78(undefined4 dataBuffer,int sectorAddress,undefined4 dataSize)

{
  int sector = sectorAddress >> 0xb;
  int byte_offset = (ushort)sectorAddress & 0x7ff;
  /* Platform CD reader: synchronous read from BIN file */
  if (gt2_cd_reader_is_ready() && dataBuffer != 0) {
    /* Read full sectors first, then shift if there is an intra-sector offset */
    int total = (int)dataSize + byte_offset;
    unsigned char tmp_buf[2048];
    unsigned char *dst = (unsigned char *)(uintptr_t)dataBuffer;
    int written = 0;
    int cur_sector = sector;
    int skip = byte_offset;
    while (written < (int)dataSize) {
      int got = gt2_cd_read_sectors(tmp_buf, cur_sector, 2048);
      if (got <= 0) break;
      int usable = got - skip;
      if (usable <= 0) break;
      int need = (int)dataSize - written;
      if (usable > need) usable = need;
      memcpy(dst + written, tmp_buf + skip, (size_t)usable);
      written += usable;
      cur_sector++;
      skip = 0;
    }
    (void)total;
    return;
  }
  /* Fallback: original CD state machine */
  FUN_8007cfdc(dataBuffer, sector, dataSize, 0);
  DAT_801f0548 = (ushort)sectorAddress & 0x7ff;
  FUN_8007ab14(0);
  return;
}

undefined4
FUN_8007abfc(int bufferAddress,uint sectorOffset,int dataSize,int bufferSize,undefined4 callbackData,int startSector,int endSector)

{
  int sectorAlignment;
  uint alignmentMask;
  undefined4 transferStatus;
  undefined *callbackPointer;
  int alignedBufferSize;
  int bufferEnd;
  int transferEnd;
  undefined4 transferFlags;
  int bufferStart;
  int bufferAddress2;
  int sectorCount;
  int transferStart;
  int transferEnd2;

  FUN_800820e0();
  sectorAlignment = -(sectorOffset & 0x7ff);
  alignedBufferSize = bufferSize + (sectorOffset & 0x7ff);
  transferStatus = 0;

  if (sectorAlignment == -0x800) {
    alignmentMask = 0xffffffff;
  }
  else {
    alignmentMask = sectorAlignment + 0x801U & 0xfffffffe;
  }

  transferEnd = alignedBufferSize + alignmentMask;
  sectorCount = bufferAddress + -1;
  callbackPointer = &LAB_8007abb8;
  transferFlags = 0;
  transferStart = startSector;
  transferEnd2 = startSector + endSector;
  DAT_801f0530 = 0;
  bufferEnd = alignedBufferSize;
  bufferStart = bufferAddress;
  bufferAddress2 = bufferAddress;

  FUN_8008217c(bufferSize, callbackData, (int)sectorOffset >> 0xb, sectorOffset + dataSize + 0x7ff >> 0xb);
  FUN_80081f74();
  FUN_80081f4c();
  FUN_80082054();
  FUN_800847d0(&transferStatus);
  FUN_8007c570();
  FUN_8007c550();
  return 1;
}

void FUN_8007ad20(void)

{
  FUN_8007abfc(0, 0, 0, 0, 0, 0, 0);
  return;
}

undefined4 FUN_8007ad58(undefined4 *contextBuffer)

{
  undefined4 savedS0;
  undefined4 savedS1;
  undefined4 savedS2;
  undefined4 savedS3;
  undefined4 savedS4;
  undefined4 savedS5;
  undefined4 savedS6;
  undefined4 savedS7;
  undefined4 savedS8;
  undefined4 savedRetAddr;
  undefined stackBuffer[16];

  *contextBuffer = savedRetAddr;
  contextBuffer[1] = (undefined4)&stackBuffer;  // Use local stack variable instead of register
  contextBuffer[2] = savedS8;
  contextBuffer[3] = savedS0;
  contextBuffer[4] = savedS1;
  contextBuffer[5] = savedS2;
  contextBuffer[6] = savedS3;
  contextBuffer[7] = savedS4;
  contextBuffer[8] = savedS5;
  contextBuffer[9] = savedS6;
  contextBuffer[10] = savedS7;
  contextBuffer[0xb] = 0;
  return 0;
}

undefined4 FUN_8007ad90(undefined4 firstParam,undefined4 secondParam)

{
  return secondParam;
}

void FUN_8007adc8(int *volumeData)

{
  uint *currentValue;
  uint *endValue;

  currentValue = (uint *)(volumeData + 1);
  endValue = currentValue + *volumeData * 2;

  for (; currentValue != endValue; currentValue = currentValue + 2) {

    *currentValue = (*currentValue >> 0xe) * (*currentValue >> 0xe);
  }
  return;
}

undefined8 FUN_8007ae38(undefined4 audioStructure,int *coordinateData,uint transformationValue)

{
  longlong multiplicationResult;
  int xCoordinate;
  uint normalizedValue;
  int zCoordinate;
  int yCoordinate;

  yCoordinate = *coordinateData >> 0xe;
  zCoordinate = coordinateData[2] >> 0xe;
  xCoordinate = coordinateData[1] >> 0xe;

  gte_ldsv_(yCoordinate, xCoordinate, zCoordinate);
  gte_sqr0_b(0);
  read_mt(yCoordinate, xCoordinate, zCoordinate);

  multiplicationResult = (longlong)(yCoordinate + xCoordinate + zCoordinate) * (longlong)(int)transformationValue;
  normalizedValue = (uint)multiplicationResult >> 0xc | (int)((ulonglong)multiplicationResult >> 0x20) << 0x14;

  multiplicationResult = (ulonglong)normalizedValue * (ulonglong)transformationValue;
  xCoordinate = (int)((ulonglong)multiplicationResult >> 0x20) + normalizedValue * ((int)transformationValue >> 0x1f);

  return CONCAT44(xCoordinate >> 0xc, (uint)multiplicationResult >> 0xc | xCoordinate * 0x100000);
}

int FUN_8007aef4(int *sortedArray,uint searchValue)

{
  uint *currentValue;
  bool isValueFound;
  int *arrayPointer;
  int remainingElements;
  uint currentElement;

  arrayPointer = sortedArray + -2;
  remainingElements = *sortedArray;
  currentElement = sortedArray[1];

  do {
    currentValue = (uint *)(arrayPointer + 5);
    isValueFound = currentElement <= searchValue;
    if (remainingElements == 0) {
      return -1;
    }
    remainingElements = remainingElements + -1;
    arrayPointer = arrayPointer + 2;
    currentElement = *currentValue;
  } while (isValueFound);

  return (int)arrayPointer - (int)sortedArray >> 3;
}

void FUN_8007af30(void)

{
  FUN_800821bc();
  FUN_8007c310();
  FUN_800821bc();
  return;
}

void FUN_8007af60(undefined4 *transformationMatrix)

{
  *transformationMatrix = 0x1000;
  transformationMatrix[1] = 0;
  transformationMatrix[2] = 0x1000;
  transformationMatrix[3] = 0;
  transformationMatrix[4] = 0x1000;
  transformationMatrix[5] = 0;
  transformationMatrix[6] = 0;
  transformationMatrix[7] = 0;
  return;
}

void FUN_8007af8c(int audioDataStructure)

{
  FUN_80081374();
  *(undefined4 *)(audioDataStructure + 0x14) = 0;
  *(undefined4 *)(audioDataStructure + 0x18) = 0;
  *(undefined4 *)(audioDataStructure + 0x1c) = 0;
  return;
}

void FUN_8007afc0(undefined4 *destination,undefined4 *source)

{
  undefined4 value1;
  undefined4 value2;
  undefined4 value3;

  value1 = source[1];
  value2 = source[2];
  value3 = source[3];
  *destination = *source;
  destination[1] = value1;
  destination[2] = value2;
  destination[3] = value3;

  value1 = source[5];
  value2 = source[6];
  value3 = source[7];
  destination[4] = source[4];
  destination[5] = value1;
  destination[6] = value2;
  destination[7] = value3;
  return;
}

undefined4 FUN_8007b008(undefined4 audioStructure,int dataOffset)

{
  FUN_8007b050(audioStructure, dataOffset + 0x14);
  FUN_8007b994(audioStructure, audioStructure, dataOffset);
  return audioStructure;
}

int FUN_8007b050(int audioStructure,undefined4 dataField)

{
  FUN_8008220c(audioStructure + 0x14, audioStructure, dataField, audioStructure + 0x14);
  return audioStructure;
}

undefined4 FUN_8007b088(undefined4 audioStructure)

{
  undefined stackBuffer[24];

  FUN_80081374(stackBuffer);
  FUN_8007b994(audioStructure, audioStructure, stackBuffer);
  return audioStructure;
}

undefined4 FUN_8007b0c4(undefined4 audioStructure,uint rotationAngle)

{
  undefined2 matrixElement1;
  undefined2 matrixElement2;
  undefined2 matrixElement3;
  undefined2 matrixElement4;
  undefined2 cosValue;
  short negativeSin;
  undefined2 matrixElement5;
  short sinValue;
  undefined2 matrixElement6;

  cosValue = (&DAT_80093150)[(rotationAngle & 0xfff) + 0x400];
  sinValue = (&DAT_80093150)[rotationAngle & 0xfff];

  matrixElement1 = 0x1000;
  matrixElement2 = 0;
  matrixElement3 = 0;
  matrixElement4 = 0;
  matrixElement5 = 0;
  negativeSin = -sinValue;
  matrixElement6 = cosValue;

  FUN_8007b994(audioStructure, audioStructure, &matrixElement1);
  return audioStructure;
}

undefined4 FUN_8007b14c(undefined4 audioStructure,uint rotationAngle)

{
  undefined2 cosValue;
  undefined2 matrixElement1;
  short sinValue;
  undefined2 matrixElement2;
  undefined2 matrixElement3;
  undefined2 matrixElement4;
  short negativeSin;
  undefined2 matrixElement5;
  undefined2 matrixElement6;

  cosValue = (&DAT_80093150)[(rotationAngle & 0xfff) + 0x400];
  sinValue = (&DAT_80093150)[rotationAngle & 0xfff];

  matrixElement1 = 0;
  matrixElement2 = 0;
  matrixElement3 = 0x1000;
  matrixElement4 = 0;
  matrixElement5 = 0;
  negativeSin = -sinValue;
  matrixElement6 = cosValue;

  FUN_8007b994(audioStructure, audioStructure, &cosValue);
  return audioStructure;
}

undefined4 FUN_8007b1d4(undefined4 audioStructure,uint rotationAngle)

{
  undefined2 cosValue;
  short negativeSin;
  undefined2 matrixElement1;
  short sinValue;
  undefined2 matrixElement2;
  undefined2 matrixElement3;
  undefined2 matrixElement4;
  undefined2 matrixElement5;
  undefined2 matrixElement6;

  cosValue = (&DAT_80093150)[(rotationAngle & 0xfff) + 0x400];
  sinValue = (&DAT_80093150)[rotationAngle & 0xfff];

  matrixElement1 = 0;
  matrixElement3 = 0;
  matrixElement4 = 0;
  matrixElement5 = 0;
  matrixElement6 = 0x1000;
  negativeSin = -sinValue;
  matrixElement2 = cosValue;

  FUN_8007b994(audioStructure, audioStructure, &cosValue);
  return audioStructure;
}

undefined4 FUN_8007b25c(undefined4 audioStructure,int scaleX,int scaleY,int scaleZ)

{
  undefined2 matrixElement1;
  undefined2 matrixElement2;
  undefined2 matrixElement3;
  undefined2 matrixElement4;
  undefined2 matrixElement5;
  undefined2 matrixElement6;
  undefined2 matrixElement7;
  undefined2 matrixElement8;
  undefined2 matrixElement9;

  if (((scaleX != scaleY) || (scaleY != scaleZ)) || (scaleZ != 0x1000)) {
    matrixElement1 = (undefined2)scaleX;
    matrixElement5 = (undefined2)scaleY;
    matrixElement2 = 0;
    matrixElement3 = 0;
    matrixElement4 = 0;
    matrixElement6 = 0;
    matrixElement7 = 0;
    matrixElement8 = 0;
    matrixElement9 = (undefined2)scaleZ;

    FUN_8007b994(audioStructure, audioStructure, &matrixElement1);
  }
  return audioStructure;
}

int FUN_8007b2cc(int coordinateData,int precisionOffset)

{
  int xCoordinate;
  int yCoordinate;
  int zCoordinate;

  yCoordinate = *(int *)(coordinateData + 0x14);
  xCoordinate = *(int *)(coordinateData + 0x18);
  zCoordinate = *(int *)(coordinateData + 0x1c);

  if (yCoordinate < 0) {
    yCoordinate = -yCoordinate;
  }
  if (xCoordinate < 0) {
    xCoordinate = -xCoordinate;
  }
  if (zCoordinate < 0) {
    zCoordinate = -zCoordinate;
  }

  gte_ldLZCS(yCoordinate + precisionOffset | xCoordinate + precisionOffset | zCoordinate + precisionOffset);
  yCoordinate = gte_stLZCR();
  return 0x1f - yCoordinate;
}

void FUN_8007b320(int projectionData,int leftBound,int rightBound,int topBound,int bottomBound,int distance)

{

  *(short *)(projectionData + 0x94) = (short)rightBound - (short)leftBound;
  *(short *)(projectionData + 0x96) = (short)topBound - (short)bottomBound;
  *(short *)(projectionData + 0x98) = (short)distance;

  *(short *)(projectionData + 0x90) = (short)(((leftBound + rightBound >> 1) << 0xc) / distance);
  *(short *)(projectionData + 0x92) = (short)(((bottomBound + topBound >> 1) << 0xc) / distance);
  return;
}

void FUN_8007b374(int projectionData,int viewportWidth,int viewportHeight,int projectionMatrix)

{
  short scaleFactor;
  int heightValue;
  int distanceValue;
  int widthValue;
  int heightShifted;
  int widthShifted;
  undefined2 matrixElement;
  int widthScale;
  int heightScale;
  undefined2 matrixElement1;
  undefined2 matrixElement2;
  undefined2 matrixElement3;
  undefined2 matrixElement4;
  short matrixElement5;
  short matrixElement6;
  undefined2 matrixElement7;
  undefined2 matrixElement8;
  undefined2 matrixElement9;
  short local_20;
  undefined2 local_24;
  short local_1e;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar1;
  uint uVar5;
  uint uVar7;
  short sVar1;
  undefined *psVar8;
  uint param_1;
  uint param_2;
  uint param_3;
  uint param_4;
  undefined4 local_28[4];

  param_1 = projectionData;
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar8 = 0;
  iVar9 = 0;
  iVar10 = 0;
  param_2 = viewportWidth;
  param_3 = viewportHeight;
  param_4 = projectionMatrix;

  widthShifted = (uint)*(ushort *)(projectionData + 4) << 0x10;
  widthValue = widthShifted >> 0x10;
  widthScale = (widthValue << 0xc) / (int)*(short *)(projectionData + 0x94);
  heightShifted = (uint)*(ushort *)(projectionData + 6) << 0x10;
  heightValue = heightShifted >> 0x10;
  heightScale = (heightValue << 0xc) / (int)*(short *)(projectionData + 0x96);
  distanceValue = (int)*(short *)(projectionData + 0x98);

  *(int *)(projectionData + 0x70) = projectionMatrix;
  *(int *)(projectionData + 0x74) = projectionMatrix + 0x417c;

  matrixElement2 = 0;
  matrixElement4 = 0;
  matrixElement7 = 0;
  matrixElement8 = 0;
  matrixElement9 = 0xf000;
  matrixElement1 = (undefined2)widthScale;
  local_20 = -(short)iVar9;
  local_24 = (undefined2)(*(short *)(param_1 + 0x90) * iVar8 >> 0xc);
  local_1e = -(short)(*(short *)(param_1 + 0x92) * iVar9 >> 0xc);
  iVar8 = iVar2;
  if (iVar2 < iVar4) {
    iVar8 = iVar4;
  }
  *(int *)(param_1 + 0x5c) = iVar4 << 0xf;
  *(int *)(param_1 + 0x60) = iVar2 << 0xf;
  *(short *)(param_1 + 0x6a) = (short)(iVar3 >> 1);
  iVar2 = (iVar6 >> 0x11) + param_4;
  param_4 = (iVar5 >> 0x11) + param_4;
  *(short *)(param_1 + 100) = *(short *)(param_1 + 0x98);
  *(ushort *)(param_1 + 0x66) = *(ushort *)(param_1 + 4);
  *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 6);
  *(int *)(param_1 + 0x6c) = param_3;
  *(int *)(param_1 + 0x78) = ((iVar8 >> 1) << 0xc) / iVar3;
  if (iVar2 < iVar3) {
    uVar7 = (undefined2)((iVar2 * 0x1000) / iVar3);
    sVar1 = 0x1000;
  }
  else {
    uVar7 = 0x1000;
    sVar1 = (short)((iVar3 << 0xc) / iVar2);
  }
  *(short *)(param_1 + 0x3a) = -sVar1;
  *(short *)(param_1 + 0x34) = sVar1;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x38) = uVar7;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x3e) = uVar7;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  if (param_4 < iVar3) {
    uVar7 = (undefined2)((param_4 * 0x1000) / iVar3);
    sVar1 = 0x1000;
  }
  else {
    uVar7 = 0x1000;
    sVar1 = (short)((iVar3 << 0xc) / param_4);
  }
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(short *)(param_1 + 0x4a) = sVar1;
  *(undefined2 *)(param_1 + 0x4c) = uVar7;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(short *)(param_1 + 0x50) = -sVar1;
  *(undefined2 *)(param_1 + 0x52) = uVar7;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  iVar8 = *(int *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x28) = -*(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x2c) = -iVar8;
  *(int *)(param_1 + 0x30) = -iVar2;
  FUN_80082324(param_1 + 0x7c);
  FUN_8007b994(param_1 + 8,&local_28,param_1 + 0x7c);
  FUN_800823ac(param_1 + 0x1c,param_1 + 8,param_1 + 0x28);
  return;
}

uint FUN_8007b640(int audioData,SVECTOR *vertexData,int processingFlags)
{
  int param_1;
  param_1 = audioData;
  uint resultFlags;
  int coordinateX;
  int coordinateY;
  int coordinateZ;
  undefined4 gteResult1;
  uint processingMask;
  undefined4 gteResult2;
  short *coordinatePointer;
  int vertexIndex;
  int vertexCount;
  uint visibilityFlags;
  uint clippingFlags;
  uint processingFlags2;
  SVECTOR *param_2;
  int param_3;
  SVECTOR *psVar8;
  bitfield_16_t uVar5;
  undefined4 uVar7;
  uint uVar1;
  int iVar2;
  int iVar4;
  int iVar10;
  uint uVar6;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar3;
  int iVar9;

  param_1 = audioData;
  param_2 = vertexData;
  param_3 = processingFlags;

  gte_ldv0(vertexData);
  processingFlags2 = 0;
  gte_rtps_b();
  clippingFlags = 0xffffffff;
  visibilityFlags = 0xffffffff;
  psVar8 = &param_2[1].vz;
  while (param_3 != 0) {
    uVar5._0_2_ = ((SVECTOR *)(psVar8 + -2))->vx;
    uVar5._2_2_ = ((SVECTOR *)(psVar8 + -2))->vy;
    uVar7 = *(undefined4 *)psVar8;
    iVar10 = gte_stFLAG();
    uVar1 = gte_stIR1();
    iVar2 = gte_stIR2();
    iVar4 = gte_stIR3();
    iVar9 = gte_stSXY2();
    gte_llir_b();
    param_3 = param_3 + -1;
    psVar8 = psVar8 + 4;
    gte_ldVXY1(uVar1 & 0xffff | iVar2 << 0x10);
    gte_ldVZ1(iVar4);
    gte_ldVXY0(uVar5);
    gte_ldVZ0(uVar7);
    iVar2 = gte_stIR1();
    iVar3 = gte_stIR2();
    gte_lcv1_b();
    uVar1 = iVar4 - (uint)*(ushort *)(param_1 + 0x62) >> 0x1f | iVar2 >> 0x1f & 2U |
            iVar3 >> 0x1f & 4U;
    if (iVar10 < 0) {
      uVar1 = uVar1 | 0x20;
    }
    iVar2 = gte_stIR1();
    iVar3 = gte_stIR2();
    gte_rtps_b();
    uVar6 = (int)(short)iVar9 >> 0x1f & 2;
    if ((int)(uint)*(ushort *)(param_1 + 0x5e) <= (int)(short)iVar9) {
      uVar6 = uVar6 | 4;
    }
    if (iVar9 >> 0x10 < 0) {
      uVar6 = uVar6 | 8;
    }
    if ((int)(uint)*(ushort *)(param_1 + 0x60) <= iVar9 >> 0x10) {
      uVar6 = uVar6 | 0x10;
    }
    uVar1 = uVar1 | iVar2 >> 0x1f & 8U | iVar3 >> 0x1f & 0x10U;
    if (iVar10 < 0) {
      uVar6 = 0;
    }
    uVar13 = uVar13 | uVar1;
    uVar12 = uVar12 & uVar1;
    uVar11 = uVar11 & uVar6;
  }
  return uVar12 | uVar11 | uVar13 << 0x10;
}

undefined8 FUN_8007b778(int audioData,int viewportX,int viewportY,int viewportZ)

{
  int adjustedX;
  uint adjustedY;

  adjustedX = (viewportX - viewportY) + -2;
  if (adjustedX < 0) {
    adjustedX = 0;
  }
  adjustedY = (viewportY - viewportZ) + adjustedX;

  *(short *)(audioData + 0x98) = (short)adjustedY;
  *(short *)(audioData + 0x9a) = (short)adjustedX;

  *(int *)(audioData + 0x80) = *(int *)(audioData + 0x1c) >> (adjustedY & 0x1f);
  *(int *)(audioData + 0x78) = *(int *)(audioData + 0x14) >> (adjustedY & 0x1f);
  *(int *)(audioData + 0x7c) = *(int *)(audioData + 0x18) >> (adjustedY & 0x1f);

  FUN_80082530(audioData + 0x84, audioData);

  gte_ldOFX(*(undefined4 *)(audioData + 0x54));
  gte_ldOFY(*(undefined4 *)(audioData + 0x58));
  gte_ldH((uint)*(ushort *)(audioData + 0x5c));
  gte_ldTRX(*(undefined4 *)(audioData + 0x78));
  gte_ldTRY(*(undefined4 *)(audioData + 0x7c));
  gte_ldTRZ(*(undefined4 *)(audioData + 0x80));

  gte_ldR11R12(*(undefined4 *)(audioData + 0x84));
  gte_ldR13R21(*(undefined4 *)(audioData + 0x88));
  gte_ldR22R23(*(undefined4 *)(audioData + 0x8c));
  gte_ldR31R32(*(undefined4 *)(audioData + 0x90));
  gte_ldR33(*(undefined4 *)(audioData + 0x94));

  gte_ldL11L12(*(undefined4 *)(audioData + 0x2c));
  gte_ldL13L21(*(undefined4 *)(audioData + 0x30));
  gte_ldL22L23(*(undefined4 *)(audioData + 0x34));
  gte_ldL31L32(*(undefined4 *)(audioData + 0x38));
  gte_ldL33(*(undefined4 *)(audioData + 0x3c));

  gte_ldLR1LR2(*(undefined4 *)(audioData + 0x40));
  gte_ldLR3LG1(*(undefined4 *)(audioData + 0x44));
  gte_ldLG2LG3(*(undefined4 *)(audioData + 0x48));
  gte_ldLB1LB2(*(undefined4 *)(audioData + 0x4c));
  gte_ldLB3(*(undefined4 *)(audioData + 0x50));
  gte_ldDQA(0x1000);
  gte_ldDQB(0);
  return ((ulonglong)*(undefined4 *)(audioData + 0x4c) << 32) | (ulonglong)*(undefined4 *)(audioData + 0x50);
}

void FUN_8007b8a0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;

  uVar1 = FUN_8007b2cc(param_1,param_2 << (param_3 - param_4 & 0x1fU));
  FUN_8007b778(param_1,uVar1,param_3,param_4);
  return;
}

uint FUN_8007b8f8(int audioData,undefined2 *transformationMatrix1,undefined2 *transformationMatrix2)

{
  undefined2 matrix1Element1;
  undefined2 matrix1Element2;
  undefined2 matrix1Element3;
  undefined2 matrix2Element1;
  undefined2 matrix2Element2;
  undefined2 matrix2Element3;

  matrix1Element1 = *transformationMatrix1;
  matrix1Element2 = transformationMatrix1[1];
  matrix1Element3 = transformationMatrix1[2];
  matrix2Element1 = *transformationMatrix2;
  matrix2Element2 = transformationMatrix2[1];
  matrix2Element3 = transformationMatrix2[2];

  *(undefined2 *)(audioData + 0xa4) = matrix2Element1;
  *(undefined2 *)(audioData + 0xb4) = matrix2Element1;
  *(undefined2 *)(audioData + 0xc4) = matrix2Element1;
  *(undefined2 *)(audioData + 0xd4) = matrix2Element1;
  *(undefined2 *)(audioData + 0xc0) = matrix2Element3;
  *(undefined2 *)(audioData + 200) = matrix2Element3;
  *(undefined2 *)(audioData + 0xd0) = matrix2Element3;
  *(undefined2 *)(audioData + 0xd8) = matrix2Element3;

  *(undefined2 *)(audioData + 0x9c) = matrix1Element1;
  *(undefined2 *)(audioData + 0x9e) = matrix1Element2;
  *(undefined2 *)(audioData + 0xa0) = matrix1Element3;
  *(undefined2 *)(audioData + 0xa6) = matrix1Element2;
  *(undefined2 *)(audioData + 0xa8) = matrix1Element3;
  *(undefined2 *)(audioData + 0xac) = matrix1Element1;
  *(undefined2 *)(audioData + 0xae) = matrix2Element2;
  *(undefined2 *)(audioData + 0xb0) = matrix1Element3;
  *(undefined2 *)(audioData + 0xb6) = matrix2Element2;
  *(undefined2 *)(audioData + 0xb8) = matrix1Element3;
  *(undefined2 *)(audioData + 0xbc) = matrix1Element1;
  *(undefined2 *)(audioData + 0xbe) = matrix1Element2;
  *(undefined2 *)(audioData + 0xc6) = matrix1Element2;
  *(undefined2 *)(audioData + 0xcc) = matrix1Element1;
  *(undefined2 *)(audioData + 0xce) = matrix2Element2;
  *(undefined2 *)(audioData + 0xd6) = matrix2Element2;

  return FUN_8007b640(audioData, audioData + 0x9c, 8);
}

void FUN_8007b994(undefined2 *outputMatrix,undefined4 *rotationMatrix,uint *inputVectors)

{
  undefined4 gteResult1;
  undefined4 gteResult2;
  undefined4 gteResult3;
  uint vectorZ2;
  uint vectorY1;
  uint vectorX1;

  gte_ldR11R12(*rotationMatrix);
  gte_ldR13R21(rotationMatrix[1]);
  gte_ldR22R23(rotationMatrix[2]);
  gte_ldR31R32(rotationMatrix[3]);
  gte_ldR33(rotationMatrix[4]);

  vectorX1 = inputVectors[1];
  gte_ldVXY0(*inputVectors & 0xffff | vectorX1 & 0xffff0000);
  gte_ldVZ0(inputVectors[3]);
  vectorY1 = inputVectors[2];
  gte_rtv0_b();

  gte_ldVZ1(inputVectors[3] >> 0x10);
  gte_ldVXY1(*inputVectors >> 0x10 | vectorY1 << 0x10);
  gteResult1 = gte_stIR1();
  gteResult2 = gte_stIR2();
  gteResult3 = gte_stIR3();
  gte_rtv1_b();

  vectorZ2 = inputVectors[4];
  *outputMatrix = (short)gteResult1;
  outputMatrix[3] = (short)gteResult2;
  outputMatrix[6] = (short)gteResult3;

  gte_ldVXY2(vectorX1 & 0xffff | vectorY1 & 0xffff0000);
  gte_ldVZ2(vectorZ2);
  gteResult1 = gte_stIR1();
  gteResult2 = gte_stIR2();
  gteResult3 = gte_stIR3();
  gte_rtv2_b();

  outputMatrix[1] = (short)gteResult1;
  outputMatrix[4] = (short)gteResult2;
  outputMatrix[7] = (short)gteResult3;

  gteResult1 = gte_stIR1();
  gteResult2 = gte_stIR2();
  gteResult3 = gte_stIR3();
  outputMatrix[2] = (short)gteResult1;
  outputMatrix[5] = (short)gteResult2;
  outputMatrix[8] = (short)gteResult3;
  return;
}

/* FUN_8007ba70: PS1 GPU LoadImage/StoreImage — transfers pixel data via DMA.
   On Linux, no PS1 GPU hardware; audioData may be a truncated pointer causing SIGSEGV.
   Guard against invalid audioData. */
int FUN_8007ba70(int audioData,dword *dataBuffer,int transferMode)

{
  int dataSize;
  uint alignmentMask;
  dword dmaMode1;
  dword dmaMode2;
  uint uVar2;
  dword *param_2;
  int iVar1;
  dword dVar3;
  dword dVar4;

  /* On Linux, audioData may be a truncated 64-bit pointer that can't be safely read.
     If audioData looks like a negative value or small address, skip GPU transfer. */
  if (audioData <= 0 || audioData < 0x1000) {
    DAT_801f06a4 = 0;
    return 0;
  }

  param_2 = dataBuffer;
  iVar1 = dataSize;
  dVar3 = dmaMode1;
  dVar4 = dmaMode2;

  DAT_801f06a4 = 1;
  FUN_8007af30();
  dmaMode2 = 0x4000002;
  dmaMode1 = 0x1000201;
  DAT_801f06a5 = 1;

  if (transferMode != 0) {
    dmaMode2 = 0x4000003;
    dmaMode1 = 0x1000200;
  }

  GPU_REG1 = 0x4000000;
  GPU_REG0 = (int)*(short *)(audioData + 4) | (int)*(short *)(audioData + 6) << 0x10;

  dataSize = (int)*(short *)(audioData + 4) * (int)*(short *)(audioData + 6) + 1;
  alignmentMask = dataSize >> 1 & 0xf;
  dataSize = dataSize >> 5;

  if (alignmentMask != 0) {
    if (transferMode == 0) {
      do {
        GPU_REG0 = *dataBuffer;
        dataBuffer = dataBuffer + 1;
        alignmentMask = alignmentMask - 1;
      } while (alignmentMask != 0);
    }
    else {
      do {
        uVar2 = uVar2 - 1;
        *param_2 = GPU_REG0;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
  }
  if (iVar1 == 0) {
    DAT_801f06a5 = 0;
  }
  else {
    DMA_GPU_BCR = iVar1 << 0x10 | 0x10;
    DMA_GPU_MADR = (dword)param_2;
    DMA_GPU_CHCR = dVar3;
    GPU_REG1 = dVar4;
  }
  DAT_801f06a4 = 0;
  return iVar1;
}

int FUN_8007bbd4(int *audioData,int *outputBuffer)

{
  if (outputBuffer == (int *)0x0) {
    outputBuffer = audioData + 1;
  }
  FUN_8007ba70(outputBuffer, audioData + 3, 0);
  FUN_8007af30();
  return (int)audioData + *audioData;
}

int FUN_8007bc1c(int audioData)

{
  int dataPointer;

  dataPointer = audioData + 8;

  if ((*(uint *)(audioData + 4) >> 3 & 1) == 1) {
    dataPointer = FUN_8007bbd4(audioData + 8, (int *)0x0);
  }
  return dataPointer;
}

void FUN_8007bc58(int audioData)

{
  int dataPointer;

  dataPointer = audioData + 8;

  if ((*(uint *)(audioData + 4) >> 3 & 1) != 0) {
    dataPointer = dataPointer + *(int *)(audioData + 8);
  }
  FUN_8007bbd4((int *)dataPointer, (int *)0x0);
  return;
}

void FUN_8007bca0(undefined4 audioData,undefined4 processingFlags,undefined4 outputBuffer)

{
  undefined4 dataPointer;

  dataPointer = FUN_8007bc1c((int)audioData);
  FUN_8007bbd4((int *)dataPointer, (int *)outputBuffer);
  return;
}

void FUN_8007bcd0(uint audioData,int vertexCount)

{
  bool processingFlag;
  ushort vertexFlags;
  uint *dataPointer;
  byte vertexType;
  int coordinateX;
  uint coordinateY;
  uint coordinateZ;
  uint vertexIndex;
  uint processingMask;
  undefined4 gteResult1;
  undefined2 gteResult2;
  short scaleFactor;
  ushort vertexData;
  int vertexOffset;
  SVECTOR *currentVertex;
  uint processingFlags;
  undefined4 gteResult3;
  undefined4 *bufferPointer;
  short matrixElement;
  undefined4 *outputBuffer;
  uint vertexMask;
  undefined4 gteResult4;
  undefined2 gteResult5;
  int vertexCount2;
  uint vertexFlags2;
  undefined2 *vertexBuffer;
  undefined2 *vertexPointer;
  SVECTOR *vertex1;
  int vertexIndex2;
  short *coordinatePointer;
  SVECTOR *vertex2;
  int vertexIndex3;
  int vertexIndex4;
  SVECTOR *vertex3;
  int vertexIndex5;
  undefined2 *vertexBuffer2;
  short *coordinatePointer2;
  uint processingMask2;
  SVECTOR *vertex4;
  uint processingFlags2;
  SVECTOR *vertex5;
  uint param_1;
  short *psVar30;
  uint uVar2;
  undefined4 *puVar20;
  undefined4 *puVar26;
  undefined4 *puVar27;
  SVECTOR *psVar37;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar11;
  undefined2 uVar23;
  int iVar14;
  int iVar24;
  int iVar33;
  int iVar35;
  uint uVar40;
  uint uVar38;
  undefined4 *puVar36;
  SVECTOR *pSVar15;
  SVECTOR *pSVar34;
  SVECTOR *pSVar41;
  SVECTOR *pSVar39;
  SVECTOR *pSVar28;
  SVECTOR *pSVar31;
  uint uVar16;
  uint uVar21;
  uint uVar25;
  uint uVar9;
  uint uVar8;
  short sVar12;
  short sVar19;
  uint uVar10;
  uint uVar17;
  uint uVar22;
  int iVar29;
  int iVar32;
  uint uVar13;
  undefined4 *puVar18;
  bool bVar4;
  bool bVar1;
  undefined4 *puVar3;

  param_1 = audioData;
  puVar26 = (undefined4 *)0x0;

  coordinatePointer2 = (short *)(audioData + 0xa8);
  vertexBuffer = (undefined2 *)(audioData + 0xe8);
  vertexBuffer2 = vertexBuffer + vertexCount * 0x12;
  processingFlags2 = 0;
  processingMask2 = 0xffffffff;
  psVar30 = (short *)(param_1 + 0xac);
  uVar2 = *(ushort *)(param_1 + 0x62);
  puVar20 = (undefined4 *)(param_1 + 0xd8);
  *(undefined2 **)(param_1 + 0x2e0) = puVar26;
  do {
    puVar27 = puVar26;
    puVar20[6] = *(undefined4 *)(psVar30 + 2);
    puVar20[7] = *(undefined4 *)(psVar30 + 4);
    gte_ldLZCS((int)psVar30[1]);
    gte_ldVXY0(psVar37);
    gte_ldVZ0(psVar30);
    iVar5 = gte_stLZCR();
    gte_rtps_b();
    uVar6 = 0x13 - iVar5;
    uVar7 = -uVar6;
    if ((int)uVar6 < 0) {
      uVar11 = (undefined2)((int)psVar37->vx << (uVar7 & 0x1f));
      uVar23 = (undefined2)((int)psVar30[-1] << (uVar7 & 0x1f));
      iVar5 = (int)*psVar30 << (uVar7 & 0x1f);
    }
    else {
      uVar11 = (undefined2)((int)psVar37->vx >> (uVar6 & 0x1f));
      uVar23 = (undefined2)((int)psVar30[-1] >> (uVar6 & 0x1f));
      iVar5 = (int)*psVar30 >> (uVar6 & 0x1f);
    }
    *puVar27 = uVar11;
    *(undefined2 *)((int)puVar20 + 0x12) = uVar23;
    *(short *)(puVar20 + 5) = (short)iVar5;
    gte_ldVXY0(puVar27);
    gte_ldVZ0(puVar20 + 5);
    iVar14 = gte_stFLAG();
    gte_rtps_b();
    if (iVar14 < 0) {
      gte_stSXY2();
    }
    gte_llv0_b();
    iVar14 = gte_stIR1();
    iVar24 = gte_stIR2();
    gte_lcv0_b();
    iVar33 = gte_stIR1();
    iVar35 = gte_stIR2();
    uVar7 = iVar5 - (uint)uVar2;
    uVar6 = uVar7 >> 0x1f;
    *(short *)((int)puVar20 + 0x2a) = (short)uVar7;
    *(short *)(puVar20 + 0xb) = (short)iVar14;
    if (iVar14 < 0) {
      uVar6 = uVar6 | 2;
    }
    *(short *)((int)puVar20 + 0x2e) = (short)iVar24;
    if (iVar24 < 0) {
      uVar6 = uVar6 | 4;
    }
    *(short *)(puVar20 + 0xc) = (short)iVar33;
    if (iVar33 < 0) {
      uVar6 = uVar6 | 8;
    }
    *(short *)((int)puVar20 + 0x32) = (short)iVar35;
    if (iVar35 < 0) {
      uVar6 = uVar6 | 0x10;
    }
    *(short *)(puVar20 + 10) = (short)uVar6;
    puVar20[0x11] = puVar27;
    puVar20 = puVar20 + 9;
    puVar26 = puVar27 + 0x12;
    uVar40 = uVar40 | uVar6;
    uVar38 = uVar38 & uVar6;
    psVar30 = psVar30 + 8;
    psVar37 = psVar37 + 8;
    *puVar20 = puVar26;
  } while (puVar26 != puVar36);
  *(undefined2 **)(param_1 + 0x2e4) = puVar36;
  if (uVar38 == 0) {
    iVar5 = *(int *)(param_1 + 0x2e0);
    puVar20 = (undefined4 *)(puVar27 + 10);
    *(undefined2 **)(iVar5 + 0x10) = puVar36 + -0x12;
    *(int *)(puVar36 + -8) = iVar5;
    do {
      puVar20[0x11] = puVar26;
      puVar20 = puVar20 + 9;
      puVar26 = puVar26 + 0x12;
      *puVar20 = puVar26;
    } while (puVar26 != (undefined2 *)(param_1 + 700));
    iVar5 = *(int *)(param_1 + 0x2e4);
    *(undefined2 **)(iVar5 + 0x10) = (undefined2 *)(param_1 + 700);
    *(int *)(param_1 + 0x2d0) = iVar5;
    uVar38 = 0;
    while (uVar40 != 0) {
      uVar6 = 1 << (uVar38 & 0x1f);
      uVar7 = uVar40 & uVar6;
      uVar40 = uVar40 - uVar7;
      if (uVar7 != 0) {
        pSVar15 = *(SVECTOR **)(param_1 + 0x2e0);
        pSVar34 = (SVECTOR *)0x0;
        iVar5 = 0;
        iVar14 = uVar38 << 1;
        pSVar41 = pSVar15;
        do {
          pSVar39 = *(SVECTOR **)&pSVar15[2].vz;
          uVar2 = pSVar39[3].vx;
          uVar7 = (ushort)pSVar15[3].vx & uVar6;
          if (uVar7 == 0) {
            *(SVECTOR **)(pSVar15 + 2) = pSVar34;
            psVar30 = &pSVar34[2].vz;
            if (pSVar34 == (SVECTOR *)0x0) {
              psVar30 = (short *)(param_1 + 0x2e0);
            }
            *(SVECTOR **)psVar30 = pSVar15;
            iVar5 = iVar5 + 1;
            pSVar34 = pSVar15;
          }
          if (uVar7 != (uVar2 & uVar6)) {
            pSVar28 = pSVar15;
            pSVar31 = pSVar39;
            if (uVar7 != 0) {
              pSVar28 = pSVar39;
              pSVar31 = pSVar15;
            }
            iVar24 = (int)*(short *)((int)&pSVar28[3].vy + iVar14);
            iVar24 = (iVar24 << 0xc) / (iVar24 - *(short *)((int)&pSVar31[3].vy + iVar14));
            pSVar15 = *(SVECTOR **)(param_1 + 0x2e4);
            iVar5 = iVar5 + 1;
            psVar30 = &pSVar34[2].vz;
            *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)&pSVar15[2].vz;
            *(SVECTOR **)(pSVar15 + 2) = pSVar34;
            if (pSVar34 == (SVECTOR *)0x0) {
              psVar30 = (short *)(param_1 + 0x2e0);
            }
            *(SVECTOR **)psVar30 = pSVar15;
            gte_ldIR0(0x1000 - iVar24);
            gte_ldsv_((int)pSVar28->vx,(int)pSVar28->vy,(int)pSVar28->vz);
            gte_gpf0(0);
            uVar16 = (uint)pSVar31->vx;
            uVar21 = (uint)pSVar31->vy;
            uVar25 = (uint)pSVar31->vz;
            gte_stFLAG();
            gte_ldIR0(iVar24);
            gte_ldsv_(uVar16,uVar21,uVar25);
            gte_gpl0();
            read_mt(uVar16,uVar21,uVar25);
            uVar7 = uVar16;
            if ((int)uVar16 < 0) {
              uVar7 = -uVar16;
            }
            uVar9 = uVar21;
            if ((int)uVar21 < 0) {
              uVar9 = -uVar21;
            }
            uVar8 = uVar25;
            if ((int)uVar25 < 0) {
              uVar8 = -uVar25;
            }
            gte_ldLZCS(uVar7 | uVar9 | uVar8);
            iVar33 = gte_stLZCR();
            uVar9 = 0x13 - iVar33;
            uVar7 = -uVar9;
            if ((int)uVar9 < 0) {
              sVar12 = (short)(uVar16 << (uVar7 & 0x1f));
              sVar19 = (short)(uVar21 << (uVar7 & 0x1f));
              iVar33 = uVar25 << (uVar7 & 0x1f);
            }
            else {
              sVar12 = (short)((int)uVar16 >> (uVar9 & 0x1f));
              sVar19 = (short)((int)uVar21 >> (uVar9 & 0x1f));
              iVar33 = (int)uVar25 >> (uVar9 & 0x1f);
            }
            pSVar15->vx = sVar12;
            pSVar15->vy = sVar19;
            pSVar15->vz = (short)iVar33;
            gte_ldIR0(0x1000 - iVar24);
            gte_ldsv_((uint)*(byte *)&pSVar28[1].vz,(uint)*(byte *)((int)&pSVar28[1].vz + 1),
                      (uint)*(byte *)&pSVar28[1].pad);
            gte_gpf12();
            gte_stFLAG();
            gte_ldIR0(iVar24);
            gte_ldsv_((uint)*(byte *)&pSVar31[1].vz,(uint)*(byte *)((int)&pSVar31[1].vz + 1),
                      (uint)*(byte *)&pSVar31[1].pad);
            gte_gpl12();
            uVar10 = gte_stIR1();
            uVar17 = gte_stIR2();
            uVar22 = gte_stIR3();
            *(char *)&pSVar15[1].vz = (char)uVar10;
            *(char *)((int)&pSVar15[1].vz + 1) = (char)uVar17;
            *(char *)&pSVar15[1].pad = (char)uVar22;
            pSVar34 = pSVar15;
            gte_ldv0(pSVar15);
            gte_rtps_b();
            gte_stSXY2();
            gte_llv0_b();
            iVar24 = gte_stIR1();
            iVar35 = gte_stIR2();
            gte_lcv0_b();
            iVar29 = gte_stIR1();
            iVar32 = gte_stIR2();
            uVar2 = *(ushort *)(param_1 + 0x62);
            pSVar15[3].vz = (short)iVar24;
            iVar33 = iVar33 - (uint)uVar2;
            uVar2 = (ushort)((uint)iVar33 >> 0x10);
            uVar13 = uVar2 >> 0xf;
            pSVar15[3].vy = (short)iVar33;
            if (iVar24 < 0) {
              uVar13 = uVar2 >> 0xf | 2;
            }
            pSVar15[3].pad = (short)iVar35;
            if (iVar35 < 0) {
              uVar13 = uVar13 | 4;
            }
            pSVar15[4].vx = (short)iVar29;
            if (iVar29 < 0) {
              uVar13 = uVar13 | 8;
            }
            pSVar15[4].vy = (short)iVar32;
            if (iVar32 < 0) {
              uVar13 = uVar13 | 0x10;
            }
            pSVar15[3].vx = uVar13;
          }
          pSVar15 = pSVar39;
        } while (pSVar15 != pSVar41);
        iVar14 = *(int *)(param_1 + 0x2e0);
        pSVar34[2].vz = (short)iVar14;
        pSVar34[2].pad = (short)((uint)iVar14 >> 0x10);
        if (pSVar34 == (SVECTOR *)0x0) {
          return;
        }
        *(SVECTOR **)(iVar14 + 0x10) = pSVar34;
        if (iVar5 < 3) {
          return;
        }
      }
      uVar38 = uVar38 + 1;
    }
    iVar33 = *(int *)(param_1 + 0x2e0);
    puVar18 = *(undefined4 **)(param_1 + 0x68);
    bVar4 = (byte)((uint)*(undefined4 *)(param_1 + 0xa0) >> 0x18) & 0xf7;
    iVar5 = *(int *)(iVar33 + 0x10);
    iVar24 = *(int *)(iVar5 + 0x10);
    puVar20 = puVar18;
    iVar14 = *(int *)(iVar33 + 0x14);
    if (*(int *)(iVar33 + 0x14) != iVar5) {
      do {
        puVar20 = puVar18;
        iVar35 = iVar14;
        if (iVar35 == iVar24) {
          *puVar20 = 0x6000000;
          puVar20[2] = *(undefined4 *)(iVar33 + 8);
          puVar20[4] = *(undefined4 *)(iVar5 + 8);
          puVar20[6] = *(undefined4 *)(iVar35 + 8);
          puVar20[1] = *(undefined4 *)(iVar33 + 0xc);
          puVar20[3] = *(undefined4 *)(iVar5 + 0xc);
          uVar10 = *(undefined4 *)(iVar35 + 0xc);
          *(byte *)((int)puVar20 + 7) = bVar4;
          puVar20[5] = uVar10;
          puVar18 = puVar20 + 7;
          break;
        }
        *puVar20 = puVar20 + -0x1dfffff7;
        puVar20[2] = *(undefined4 *)(iVar33 + 8);
        puVar20[4] = *(undefined4 *)(iVar5 + 8);
        puVar20[6] = *(undefined4 *)(iVar35 + 8);
        puVar20[8] = *(undefined4 *)(iVar24 + 8);
        puVar18 = puVar20 + 9;
        puVar20[1] = *(undefined4 *)(iVar33 + 0xc);
        puVar20[3] = *(undefined4 *)(iVar5 + 0xc);
        puVar20[5] = *(undefined4 *)(iVar35 + 0xc);
        uVar10 = *(undefined4 *)(iVar24 + 0xc);
        *(byte *)((int)puVar20 + 7) = bVar4 | 8;
        puVar20[7] = uVar10;
        bVar1 = *(int *)(iVar35 + 0x14) != iVar24;
        iVar5 = iVar24;
        iVar14 = *(int *)(iVar35 + 0x14);
        iVar24 = *(int *)(iVar24 + 0x10);
        iVar33 = iVar35;
      } while (bVar1);
    }
    iVar14 = *(int *)(param_1 + 0x68);
    *(undefined4 **)(param_1 + 0x68) = puVar18;
    uVar38 = *(int *)(param_1 + 0x9c) + 2;
    uVar40 = uVar38 & 3;
    iVar5 = *(int *)(uVar38 - uVar40);
    uVar38 = *(int *)(param_1 + 0x9c) + 2;
    uVar7 = uVar38 & 3;
    puVar3 = (uint *)(uVar38 - uVar7);
    *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | (uint)(iVar14 << 8) >> (3 - uVar7) * 8;
    uVar38 = (int)puVar20 + 2U & 3;
    puVar3 = (uint *)(((int)puVar20 + 2U) - uVar38);
    *puVar3 = *puVar3 & -1 << (uVar38 + 1) * 8 |
              (iVar5 << (3 - uVar40) * 8 | param_1 & 0xffffffffU >> (uVar40 + 1) * 8) >>
              (3 - uVar38) * 8;
  }
  return;
}

void FUN_8007c268(dword sourceAddress,int destinationAddress,int dataSize,int transferMode)

{
  uint spuDelayValue;
  int transferBlocks;
  ushort spuControlValue;

  transferBlocks = dataSize + 0x3f >> 6;
  if (transferBlocks != 0) {

    DMA_SPU_CHCR = 0x1000201;

    spuControlValue = SPU_CTRL_REG_CPUCNT & 0xffcf;
    SPU_CTRL_REG_CPUCNT = spuControlValue | 0x20;

    spuDelayValue = SPU_DELAY & 0xf0ffffff;
    SPU_DELAY = spuDelayValue | 0x20000000;

    DMA_SPU_BCR = (transferBlocks + 1) * 0x10000 | 0x10;

    if (transferMode != 0) {
      DMA_SPU_CHCR = 0x1000200;
      SPU_DELAY = spuDelayValue | 0x22000000;
      SPU_CTRL_REG_CPUCNT = spuControlValue | 0x30;
    }

    SOUND_RAM_DATA_TRANSFER_ADDR = (word)(destinationAddress >> 3);
    DMA_SPU_MADR = sourceAddress;
  }
  return;
}

void FUN_8007c310(void)

{
  int timeoutCounter;

  timeoutCounter = 0x2efb44;
  do {
    timeoutCounter = timeoutCounter + -1;
    if ((DMA_GPU_CHCR & 0x1000000) == 0) {
      return;
    }
  } while (timeoutCounter != 0);
  return;
}

void FUN_8007c320(void)

{
  int timeoutCounter;

  timeoutCounter = 0x2efb44;
  do {
    timeoutCounter = timeoutCounter + -1;
    if ((DMA_SPU_CHCR & 0x1000000) == 0) {
      return;
    }
  } while (timeoutCounter != 0);
  return;
}

void FUN_8007c328(void)

{
  int timeoutCounter;

  timeoutCounter = 0x2efb44;
  do {
    timeoutCounter = timeoutCounter + -1;
    if ((DMA_OTC_CHCR & 0x1000000) == 0) {
      return;
    }
  } while (timeoutCounter != 0);
  return;
}

void FUN_8007c32c(int channelIndex)

{
  int timeoutCounter;

  timeoutCounter = 0x2efb44;
  do {
    timeoutCounter = timeoutCounter + -1;
    if (((&DMA_MDEC_IN_CHCR)[channelIndex * 4] & 0x1000000) == 0) {
      return;
    }
  } while (timeoutCounter != 0);
  return;
}

int FUN_8007c36c(byte *dataBuffer)

{
  return ((uint)(byte)(&DAT_80090924)[*dataBuffer] * 0x3c + (uint)(byte)(&DAT_80090924)[dataBuffer[1]]) *
         0x4b + (uint)(byte)(&DAT_80090924)[dataBuffer[2]] + -0x96;
}

void FUN_8007c3c4(int hashValue,undefined *outputBuffer)

{
  int intermediateValue;

  intermediateValue = (hashValue + 0x96) / 0x4b;
  outputBuffer[2] = (&DAT_800909c0)[(hashValue + 0x96) % 0x4b & 0xff];
  outputBuffer[1] = (&DAT_800909c0)[intermediateValue % 0x3c & 0xff];
  *outputBuffer = (&DAT_800909c0)[intermediateValue / 0x3c & 0xff];
  return;
}

void FUN_8007c43c(void)

{
  FUN_8008ce30(&DAT_801f0510, 0, 0x16c);
  DAT_801f0518 = &LAB_8007cf38;
  DAT_801f051c = 0x30000;
  DAT_801f053c = &LAB_8007c42c;
  DAT_801f0524 = &LAB_8007c434;
  DAT_801f052c = 0x8000;
  DAT_801f052a = 0x8000;
  DAT_801f0528 = 0x8000;
  DAT_801f052e = 0;
  FUN_8007c68c(&DAT_801f0510);
  FUN_8008a088(&LAB_8007caa4);
  FUN_8008a0a8(&LAB_8007cdf4);
  FUN_80083030(&DAT_801f0688, &DAT_801f0510);
  FUN_8007c4f8(&DAT_801f0510, 1);
  return;
}

undefined4 FUN_8007c4ec(undefined4 audioData)

{
  undefined4 interruptState;
  undefined4 result;

  interruptState = FUN_80081cf8(0);
  DAT_801f0675 = 0;
  result = FUN_8007c628(&DAT_801f0510, audioData);
  FUN_80081cf8(interruptState);
  return result;
}

undefined4 FUN_8007c4f8(int audioBuffer,undefined4 audioData)

{
  undefined4 interruptState;
  undefined4 result;

  interruptState = FUN_80081cf8(0);
  *(undefined *)(audioBuffer + 0x165) = 0;
  result = FUN_8007c628(audioBuffer, audioData);
  FUN_80081cf8(interruptState);
  return result;
}

void FUN_8007c550(void)

{
  do {
  } while (DAT_801f0676 != '\0');
  return;
}

void FUN_8007c570(void)

{
  FUN_8007c5f0(0);
  FUN_8007c4f8(&DAT_801f0510, 2);
  return;
}

void FUN_8007c5f0(int audioSystem)

{
  undefined4 interruptState;

  interruptState = FUN_80081cf8(0);
  *(undefined4 *)(audioSystem + 0x68) = 0;
  *(undefined4 *)(audioSystem + 0x4c) = 0;
  FUN_80081cf8(interruptState);
  return;
}

undefined4 FUN_8007c628(int audioBuffer,int audioData)

{
  undefined4 result;

  result = 0;
  if (*(char *)(audioBuffer + 0x166) == '\x03') {
    if (*(char *)(audioBuffer + 0x15f) == '\0') {
      *(undefined **)(audioBuffer + 0x84) = (&PTR_LAB_800903e4)[audioData];
      result = 1;
    }
  }
  else {
    FUN_8007c744(0, (uint **)0x0);
    result = 1;
  }
  return result;
}

void FUN_8007c68c(int volumeData)

{
  int leftVolume;
  int rightVolume;

  rightVolume = (int)((uint)*(ushort *)(volumeData + 0x18) * (uint)*(ushort *)(volumeData + 0x1e)) >> 0xf;
  leftVolume = (int)((uint)*(ushort *)(volumeData + 0x1a) * rightVolume) >> 0xf;
  rightVolume = (int)((uint)*(ushort *)(volumeData + 0x1c) * rightVolume) >> 0xf;

  if (0x7fff < leftVolume) {
    leftVolume = 0x7fff;
  }
  if (leftVolume < -0x8000) {
    leftVolume = 0x8000;
  }
  CD_VOL_L = (word)leftVolume;

  if (0x7fff < rightVolume) {
    rightVolume = 0x7fff;
  }
  if (rightVolume < -0x8000) {
    rightVolume = 0x8000;
  }
  CD_VOL_R = (word)rightVolume;
  return;
}

void FUN_8007c714(int audioBuffer,byte audioParameter)

{
  byte previousValue;

  previousValue = *(byte *)(audioBuffer + 0x74);
  *(byte *)(audioBuffer + 0x74) = audioParameter;

  *(bool *)(audioBuffer + 0x160) = ((previousValue ^ audioParameter) & 0x80) != 0 ||
                                   *(char *)(audioBuffer + 0x160) != '\0';
  *(byte *)(audioBuffer + 0x161) = audioParameter & 0x41;
  return;
}

void FUN_8007c744(int audioBuffer,uint **commandList)

{
  char statusFlag;
  uint *currentCommand;
  uint commandType;
  undefined4 commandData;
  u_char *parameterPointer;
  uint **commandPointer;
  uint **param_2;
  uint ***ppuVar5;
  int param_1;
  uint *puVar2;
  uint uVar3;
  u_char *param;
  uint uVar4;
  char cVar1;
  uint uVar1;

  param_1 = audioBuffer;
  param_2 = commandList;

  /* Guard: callers may pass audioBuffer=0 (e.g. FUN_8007c628 line 3609);
     on PS1 address 0x162 is accessible but on Linux it's unmapped. */
  if (audioBuffer == 0) return;

  *(undefined *)(audioBuffer + 0x162) = 0;
  *(undefined4 *)(audioBuffer + 0x80) = 0;
  *(undefined4 *)(audioBuffer + 0x7c) = 0;
  if (param_2 == (uint **)0x0) goto LAB_8007c784;
switchD_8007c83c_caseD_5:
  while( true ) {
    ppuVar5 = param_2;
    *(undefined *)(param_1 + 0x166) = 1;
    puVar2 = *ppuVar5;
    param_2 = ppuVar5 + 1;
    *(uint **)(param_1 + 0x88) = puVar2;
    if (puVar2 != (uint *)0x0) break;
LAB_8007c784:
    param_2 = *(uint ***)(param_1 + 0x84);
    *(undefined *)(param_1 + 0x166) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    if (param_2 == (uint **)0x0) {
      (**(code **)(param_1 + 0x14))();
      return;
    }
  }
  uVar3 = (uint)puVar2 & 0x1f;
  if (-1 < (int)puVar2) {
    *(uint ***)(param_1 + 0x7c) = param_2;
    param = (u_char *)0x0;
    if (uVar3 == 2) {
      param = (u_char *)(param_1 + 0x6c);
    }
    if (uVar3 == 0xd) {
      param = (u_char *)(param_1 + 0x70);
    }
    if (uVar3 == 0xe) {
      param = (u_char *)(param_1 + 0x74);
    }
    if (uVar3 == 0x14) {
      param = (u_char *)(param_1 + 0x78);
    }
    *(undefined *)(param_1 + 0x166) = 3;
    *(u_char *)(param_1 + 0x162) = (u_char)uVar3;
    CdControlF((u_char)uVar3,param);
    return;
  }
  uVar3 = (uint)puVar2 & 0xffff;
  switch((uint)puVar2 >> 0x1b & 0xf) {
  case 0:
    break;
  case 1:
    *(char *)(param_1 + 0x15e) = (char)uVar3;
    goto switchD_8007c83c_caseD_5;
  case 2:
    FUN_8007c714(param_1,uVar3);
    goto switchD_8007c83c_caseD_5;
  case 3:
    FUN_8007c714(param_1,uVar3 | *(byte *)(param_1 + 0x41));
    goto switchD_8007c83c_caseD_5;
  case 4:
    uVar4 = *(undefined4 *)(param_1 + 0x60);
    if (uVar3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x44);
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    FUN_8007c3c4(uVar4,param_1 + 0x6c);
  default:
    goto switchD_8007c83c_caseD_5;
  }
  switch(uVar3) {
  case 0:
    goto switchD_8007c868_caseD_0;
  case 1:
    cVar1 = *(char *)(param_1 + 0x160);
    break;
  case 2:
    param_2 = (uint **)*param_2;
    goto switchD_8007c83c_caseD_5;
  case 3:
    param_2 = (uint **)*param_2;
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(undefined *)(param_1 + 0x164) = 1;
      param_2 = ppuVar5 + 2;
    }
    goto switchD_8007c83c_caseD_5;
  case 4:
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined *)(param_1 + 0x167) = 1;
    *(undefined *)(param_1 + 0x164) = 0;
    *(undefined *)(param_1 + 0x70) = *(undefined *)(param_1 + 0x42);
    *(undefined *)(param_1 + 0x71) = *(undefined *)(param_1 + 0x43);
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    goto switchD_8007c83c_caseD_5;
  case 5:
    *(undefined *)(param_1 + 0x165) = 1;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x68);
    goto switchD_8007c83c_caseD_5;
  case 6:
    *(undefined2 *)(param_1 + 0x12) = 0x2000;
    goto switchD_8007c83c_caseD_5;
  case 7:
    *(undefined *)(param_1 + 0x16a) = 1;
    *(undefined2 *)(param_1 + 0x12) = 0xe000;
    if (*(short *)(param_1 + 0x1e) == 0) goto switchD_8007c83c_caseD_5;
    cVar1 = *(char *)(param_1 + 0x161);
    break;
  default:
    goto switchD_8007c83c_caseD_5;
  case 9:
    *(undefined *)(param_1 + 0x15f) = 0;
    goto switchD_8007c83c_caseD_5;
  }
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(uint ***)(param_1 + 0x80) = param_2;
    return;
  }
  goto switchD_8007c83c_caseD_5;
switchD_8007c868_caseD_0:
  return;
}

void FUN_8007c9e8(int audioBuffer,undefined4 audioData)

{
  *(undefined4 *)(audioBuffer + 0x7c) = audioData;
  if (*(char *)(audioBuffer + 0x166) != '\x03') {
    FUN_8007c744(audioBuffer, (uint **)0x0);
  }
  return;
}

undefined4 FUN_8007ca18(int audioBuffer)

{
  undefined4 result;

  result = 0;
  if ((*(char *)(audioBuffer + 0x166) != '\x03') && (*(int *)(audioBuffer + 0x84) != 0)) {
    *(undefined4 *)(audioBuffer + 0x84) = 0;
    FUN_8007c744(audioBuffer, (uint **)0x0);
    result = 1;
  }
  return result;
}

void FUN_8007ca58(int param_1)

{
  *(undefined **)(param_1 + 0x7c) = &LAB_800903b8;
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined *)(param_1 + 0x162) = 0;
  *(undefined *)(param_1 + 0x15f) = 1;
  *(undefined ***)(param_1 + 0x80) = &PTR_LAB_800903e4;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined *)(param_1 + 0x166) = 1;
  *(undefined *)(param_1 + 0x163) = 0;
  *(undefined *)(param_1 + 0x15e) = 1;
  *(undefined *)(param_1 + 0x168) = 0;
  *(undefined *)(param_1 + 0x15c) = 0;
  *(undefined *)(param_1 + 0x15d) = 0;
  *(undefined *)(param_1 + 0x169) = 0;
  *(undefined *)(param_1 + 0x161) = 0;
  return;
}



void FUN_8007cfdc(undefined4 dataBuffer,int startSector,int dataSize,int transferMode)

{
  DAT_801f0531 = 0x80;
  DAT_801f0534 = startSector;
  DAT_801f0530 = transferMode != 0;
  DAT_801f0538 = startSector + (dataSize + 0x7ffU >> 0xb);
  DAT_801f053c = &LAB_80082574;
  DAT_801f0540 = dataBuffer;
  DAT_801f0548 = 0;
  DAT_801f0544 = dataSize;
  return;
}

int FUN_8007d024(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 3;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x60000000;
  result = DAT_801c93ec + 8;
  DAT_801c93ec = DAT_801c93ec + 0x10;
  return result;
}

int FUN_8007d060(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 5;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x28000000;
  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x18;
  return result;
}

void FUN_8007d09c(void)

{
  FUN_8008ce30(&DAT_801f0680,0,0x28);
  DAT_801f0688 = 0;
  DMACallback(2,&LAB_8007d2d4);
  VSyncCallback(FUN_8007d294);
  return;
}

void FUN_8007d0f0(uint configurationValue)

{
  GPU_REG1 = configurationValue | 0x8000000;
  DAT_801f0690 = configurationValue;
  return;
}

void FUN_8007d118(int width,int height)

{
  uint pixelFormat;
  uint baseAddress;

  pixelFormat = 4;
  if ((DAT_801f0690 & 0x40) == 0) {
    pixelFormat = DAT_801f0690 & 3;
  }
  baseAddress = (width + (uint)(byte)(&LAB_80090526_2)[pixelFormat]) * (uint)(byte)(&LAB_8009051e_2)[pixelFormat];
  GPU_REG1 = ((height + 3U & 0xfffffffc) * (uint)(byte)(&LAB_8009051e_2)[pixelFormat] + baseAddress) * 0x1000 |
             baseAddress | 0x6000000;
  return;
}

void FUN_8007d1a4(int textureWidth,int textureHeight)

{
  uint adjustedWidth;

  if ((DAT_801f0690 & 4) != 0) {
    textureWidth = textureWidth >> 1;
    textureHeight = textureHeight >> 1;
  }

  adjustedWidth = textureWidth + 0x10;
  if ((DAT_801f0690 & 8) != 0) {
    adjustedWidth = textureWidth + 0x25;
  }

  GPU_REG1 = (textureHeight + adjustedWidth) * 0x400 | adjustedWidth | 0x7000000;
  return;
}

bool FUN_8007d200(void)

{
  /* PS1: busy-wait until GPU_REG1 bit 31 toggles (VSync signal).
     Linux: simulate one frame delay (~16.67ms at 60Hz NTSC). */
  usleep(16667);
  FUN_8007d294();  /* tick the VBlank handler once */
  DAT_801f0684 = 0;
  return (DAT_801f06a0 & 0x80000000) == 0;
}

undefined4 FUN_8007d23c(int frameCount)

{
  if (frameCount < 0) {
    DAT_801f0684 = 0;
    frameCount = 1;
  }
  if (0 < frameCount) {
    DAT_801f06a0 = GPU_REG1;
    /* PS1: busy-wait for VBlank interrupt to increment DAT_801f0684.
       Linux: simulate frame ticks with usleep (~16.67ms per frame at 60Hz). */
    while (DAT_801f0684 < frameCount) {
      usleep(16667);
      FUN_8007d294();  /* tick the VBlank handler */
    }
    DAT_801f0684 = 0;
  }
  return DAT_801f0680;
}

void FUN_8007d294(void)

{
  DAT_801f0680 = DAT_801f0680 + 1;
  DAT_801f0684 = DAT_801f0684 + 1;
  FUN_80083134(&DAT_801f0688);
  return;
}

void FUN_8007d32c(undefined2 *audioStructure)

{
  FUN_8008ce30(audioStructure, 0, 0x80);
  *audioStructure = 0x4353;
  *(undefined *)((int)audioStructure + 3) = 1;
  *(undefined *)(audioStructure + 1) = 0x11;
  return;
}

void FUN_8007d370(int audioBuffer,byte *audioData)

{
  undefined2 convertedData;
  undefined *outputPointer;

  outputPointer = (undefined *)(audioBuffer + 4);
  FUN_8008ce30(outputPointer, 0, 0x40);

  while( true ) {
    if (*audioData == 0) break;
    convertedData = FUN_80085858((*audioData & 0x7f) << 8 | audioData[1] & 0x7f);
    audioData = audioData + 2;
    *outputPointer = (char)((ushort)convertedData >> 8);
    outputPointer[1] = (char)convertedData;
    outputPointer = outputPointer + 2;
  }
  return;
}

void FUN_8007d3e8(int audioSystemId)

{
  FUN_80082814(&DAT_801f0724 + audioSystemId * 0x264);
  return;
}

undefined4 FUN_8007d428(int audioSystemId,undefined4 audioData,int dataSize)

{
  undefined4 interruptState;
  int result;
  int *audioSystemPtr;
  undefined4 statusFlag;
  uint memoryBlocks;

  interruptState = FUN_80081cf8(0);
  statusFlag = 5;
  audioSystemId = audioSystemId * 0x264;
  audioSystemPtr = (int *)(&DAT_801f0724 + audioSystemId);

  if ((((&DAT_801f0981)[audioSystemId] == '\0') && (statusFlag = 1, *audioSystemPtr == 0)) &&
     (statusFlag = 6, (&DAT_801f0984)[audioSystemId] == '\0')) {
    statusFlag = 7;
    result = FUN_80082814(audioSystemPtr, audioData);
    if (result == 0) {
      memoryBlocks = dataSize + 0x1fffU >> 0xd;
      statusFlag = 9;
      if (memoryBlocks <= (byte)(&DAT_801f097e)[audioSystemId]) {
        FUN_8008cedc(&DAT_801c94e8, audioData);
        statusFlag = 0;
        DAT_801f06c8 = 0;
        DAT_801f06de = 5;
        DAT_801f06b0 = audioSystemPtr;
        DAT_801f06d4 = dataSize;
        DAT_801f06d8 = memoryBlocks;
        *audioSystemPtr = (int)&LAB_8007d550;
      }
    }
  }
  FUN_80081cf8(interruptState);
  return statusFlag;
}

undefined4
FUN_8007d658(undefined soundType,int audioSystemId,undefined4 audioData,int volume,int offset,int size,
            undefined4 callback)

{
  undefined4 interruptState;
  int *resultPointer;
  undefined4 statusFlag;
  int *audioSystemPtr;

  interruptState = FUN_80081cf8(0);
  statusFlag = 5;
  audioSystemPtr = (int *)(&DAT_801f0724 + audioSystemId * 0x264);

  if (((&DAT_801f0981)[audioSystemId * 0x264] == '\0') && (statusFlag = 1, *audioSystemPtr == 0)) {
    DAT_801f06d0 = offset;
    DAT_801f06c4 = callback;
    DAT_801f06cc = volume + -0x80;
    DAT_801f06b0 = audioSystemPtr;
    DAT_801f06b4 = soundType;
    resultPointer = (int *)FUN_8008287c(audioSystemPtr, audioData, &DAT_801f06b5);
    statusFlag = 8;
    if (resultPointer != (int *)0x0) {
      DAT_801f06c8 = 0xffff;
      DAT_801f06dd = 0;
      DAT_801f06de = 5;
      if (size == 0) {
        size = *resultPointer - offset;
      }
      statusFlag = 0;
      DAT_801f06d8 = size + 0x80;
      DAT_801f06d4 = size;
      *audioSystemPtr = (int)&LAB_8007d800;
    }
  }
  FUN_80081cf8(interruptState);
  return statusFlag;
}

uint FUN_8007d7b0(int audioDataStructure,uint dataIndex)

{
  return (int)*(char *)(audioDataStructure + ((int)dataIndex >> 6) + 5) << 6 | dataIndex & 0x3f;
}

undefined FUN_8007d7cc(void)

{
  if (DAT_801f06b0 == (undefined4 *)0x0 || *DAT_801f06b0 == 0) {
    return DAT_801f06de;
  }
  return 1;
}

int FUN_8007da44(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 1;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(uint *)(DAT_801c93ec + 4) = commandType | 0xe1000000;
  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 8;
  return result;
}

void FUN_8007da80(undefined4 *destination,undefined4 *source)

{
  undefined4 value1;
  undefined4 value2;

  value1 = source[1];
  value2 = source[2];
  *destination = *source;
  destination[1] = value1;
  destination[2] = value2;
  return;
}

undefined4 FUN_8007daac(int audioData,uint parameterValue)

{
  short currentValue;

  currentValue = *(short *)(audioData + 0x18);
  *(ushort *)(audioData + 0x18) = currentValue + (ushort)*(byte *)(audioData + 8);
  FUN_8007dd3c(audioData, parameterValue & 0xff | 0x100,(int)currentValue,(int)*(short *)(audioData + 0x1a));
  return 0;
}

void FUN_8007db30(undefined4 newCallback)

{
  undefined4 previousCallback;

  previousCallback = DAT_8009314c;
  DAT_8009314c = newCallback;
  FUN_8008d8d4(&LAB_8007da9c);
  DAT_8009314c = previousCallback;
  return;
}

undefined4 FUN_8007db9c(int audioSequence,char *commandStream)

{
  short currentValue;
  int offset;
  uint nextValue;
  uint currentCommand;
  char *commandPointer;
  int currentOffset;

  commandPointer = commandStream + 1;
  currentOffset = (int)*(short *)(audioSequence + 0x18);
  currentValue = *(short *)(audioSequence + 0x1a);
  currentCommand = (int)*commandStream;
  while( true ) {
    if (currentCommand == 0) {
      return 0;
    }
    FUN_8007dd3c(audioSequence, currentCommand & 0xff, currentOffset, (uint)currentValue);
    nextValue = (uint)*commandPointer;
    commandPointer = commandPointer + 1;
    if (nextValue == 0) break;
    offset = FUN_8007dc78(audioSequence, currentCommand, nextValue);
    currentOffset = currentOffset + offset;
    currentCommand = nextValue;
  }
  return 0;
}

void FUN_8007dc40(int audioData,uint pitchAndType)

{
  ushort clampedPitch;

  clampedPitch = (ushort)pitchAndType;
  if ((int)pitchAndType < 0) {
    pitchAndType = (uint)DAT_80093148;
    clampedPitch = (ushort)DAT_80093148;
  }
  *(ushort *)(audioData + 0xc) = (clampedPitch & 0xf) * 4 + ((ushort)pitchAndType & 0x10) * 0x400;
  *(ushort *)(audioData + 0xe) = (ushort)pitchAndType;
  *(undefined *)(audioData + 0x17) = 0;
  return;
}

int FUN_8007dc78(int *audioData,uint param1,uint param2)

{
  uint value1;
  uint value2;
  int value3;
  uint value4;
  uint value5;
  uint value6;
  uint value7;

  value7 = *(uint *)audioData[1];
  value1 = *(uint *)(*audioData + (param1 & 0xff) * 8);
  value3 = *(int *)(*audioData + (param2 & 0xff) * 8 + 4);
  value2 = (int)value1 >> 0x17;
  if (-1 < (int)value1) {
    value6 = value2 & 0xff;
    value2 = value3 >> 0x17;
    if (-1 < value3) {
      value2 = value2 & 0xff;
      value5 = value2 * 4;
      value4 = (int)value7 >> 0x10;
      if ((value4 & 1) != 0) {
        value5 = value2 * 5;
      }
      if ((value4 & 2) != 0) {
        value5 = value5 + value2 * 2;
      }
      value2 = *(int *)((int)(uint *)audioData[1] + value6 * (value7 & 0xff) + ((int)value5 >> 3) + 4) >>
              (value5 & 7) & (1 << (value4 & 0x1f)) - 1U;
      goto LAB_8007dd34;
    }
  }
  value2 = value2 & 0x3f;
LAB_8007dd34:
  return ((uint)*(byte *)((int)audioData + 9) + (value1 & 0x3f)) - value2;
}

void FUN_8007dd3c(int *audioData,uint command,int param3,uint param4)

{
  ushort value1;
  uint *value2;
  uint value3;
  uint value4;
  uint value5;
  uint value6;
  uint value7;
  int value8;
  int value9;
  uint value10;
  int value11;
  int value12;
  uint value13;
  uint value14;
  uint *puVar2;
  int param_1;
  uint param_2;
  uint param_3;
  uint uVar4;
  uint uVar13;
  uint uVar14;
  uint uVar7;
  int iVar12;
  uint param_4;
  uint uVar10;
  uint uVar3;
  uint uVar5;
  int iVar9;
  uint uVar6;
  int iVar11;
  uint uVar1;
  int iVar8;

  param_1 = (int)audioData;
  param_2 = command;
  param_3 = param3;
  param_4 = param4;

  puVar2 = (uint *)(audioData[0] + (param_2 & 0xff) * 8);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  if ((uVar13 & 0x3fc0) != 0) {
    uVar4 = 0;
    if ((param_2 & 0xff00) != 0) {
      if ((param_2 & 0x100) != 0) {
        param_3 = param_3 + ((int)uVar13 >> 0x11 & 0x3fU);
      }
      if ((param_2 & 0x200) != 0) {
        uVar4 = 0xffffffff;
      }
    }
    uVar7 = *(uint *)(((int)(uVar13 & 0x3fc0) >> 6) * 4 + audioData[0] + 0x818);
    iVar12 = param_4 - (uVar14 >> 6 & 0x3f);
    uVar10 = audioData[3];
    uVar3 = uVar7 >> 0x10 & 0x1f;
    param_3 = param_3 - (uVar4 & uVar3);
    uVar5 = audioData[5];
    iVar9 = audioData[4];

    uVar4 = iVar9 + 2;
    uVar6 = uVar4 & 3;
    iVar11 = *(int *)(uVar4 - uVar6);
    *(uint *)(DAT_801c93ec + 4) = (uVar10 >> 0x10) + (uVar7 >> 0x1d) | 0xe1000000;
    *(uint *)(DAT_801c93ec + 8) = uVar5 ^ 0x64000000;
    *(uint *)(DAT_801c93ec + 0xc) = iVar12 * 0x10000 | param_3 + (uVar14 & 0x3f) & 0xffff;
    *(uint *)(DAT_801c93ec + 0x14) = uVar3 << 1 | (uVar7 >> 0x15 & 0x3f) << 0x10;
    *(ushort *)(DAT_801c93ec + 0x12) = ((ushort)(uVar7 >> 0x1b) & 3) + (short)uVar10;
    *(short *)(DAT_801c93ec + 0x10) = (short)uVar7;
    uVar4 = ((uint)DAT_801c93ec + 2U) & 3;
    puVar2 = (uint *)((DAT_801c93ec + 2U) - uVar4);
    *puVar2 = *puVar2 & -1 << (uVar4 + 1) * 8 |
              (iVar11 << (3 - uVar6) * 8 | param_4 & 0xffffffffU >> (uVar6 + 1) * 8) >>
              (3 - uVar4) * 8;
    *(undefined *)(DAT_801c93ec + 3) = 5;
    uVar6 = uVar13 >> 0xe & 7;
    uVar13 = iVar9 + 2;
    uVar4 = uVar13 & 3;
    puVar2 = (uint *)(uVar13 - uVar4);
    *puVar2 = *puVar2 & -1 << (uVar4 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - uVar4) * 8;
    iVar11 = DAT_801c93ec;
    if (uVar6 != 0) {
      uVar4 = *(uint *)(uVar6 * 4 + audioData[0] + 0x7fc);
      iVar11 = DAT_801c93ec + 0x18;
      iVar8 = audioData[4];
      *(uint *)(DAT_801c93ec + 0x1c) =
           (uint)*(ushort *)((int)param_1 + 0xe) + (uVar4 >> 0x1d) ^ 0xe1000000;
      uVar13 = audioData[5];
      *(ushort *)(DAT_801c93ec + 0x24) = (short)param_3 + ((ushort)((int)uVar14 >> 0xc) & 0x3f);
      *(ushort *)(DAT_801c93ec + 0x26) = (short)iVar12 - ((ushort)((int)uVar14 >> 0x12) & 0x1f);
      *(short *)(DAT_801c93ec + 0x28) = (short)uVar4;
      *(uint *)(DAT_801c93ec + 0x20) = uVar13 ^ 0x64000000;
      uVar1 = *(ushort *)(param_1 + 3);
      *(ushort *)(DAT_801c93ec + 0x2c) = (ushort)(uVar4 >> 0xf) & 0x3e;
      *(ushort *)(DAT_801c93ec + 0x2e) = (ushort)(uVar4 >> 0x15) & 0x3f;
      uVar4 = (uint)uVar1 + (uVar4 >> 0x1b & 3);
      *(short *)(DAT_801c93ec + 0x2a) = (short)uVar4;
      uVar13 = iVar8 + 2;
      uVar14 = uVar13 & 3;
      iVar9 = *(int *)(uVar13 - uVar14);
      *(undefined *)(DAT_801c93ec + 0x1b) = 5;
      uVar13 = ((uint)DAT_801c93ec + 0x1aU) & 3;
      puVar2 = (uint *)((DAT_801c93ec + 0x1aU) - uVar13);
      *puVar2 = *puVar2 & -1 << (uVar13 + 1) * 8 |
                (iVar9 << (3 - uVar14) * 8 | uVar4 & 0xffffffffU >> (uVar14 + 1) * 8) >>
                (3 - uVar13) * 8;
      uVar13 = iVar8 + 2;
      uVar14 = uVar13 & 3;
      puVar2 = (uint *)(uVar13 - uVar14);
      *puVar2 = *puVar2 & -1 << (uVar14 + 1) * 8 | (uint)(iVar11 * 0x100) >> (3 - uVar14) * 8;
    }
    DAT_801c93ec = iVar11 + 0x18;
  }
  return;
}

void FUN_8007dfd8(void)

{
  DAT_801c9508 = 0x80;
  DAT_801c950a = 8;
  DAT_801c9510 = 8;
  DAT_801c950e = 0x20;
  DAT_801c9512 = 0x20;
  DAT_801c9504 = (short)((DAT_801c950c & 0xf) << 6);
  DAT_801c9506 = (short)((DAT_801c950c & 0x10) << 4);
  return;
}

void FUN_8007e020(undefined2 spuConfig)

{
  int memoryAddress;
  undefined4 memorySize;
  undefined audioBuffer[2048];

  DAT_80093148 = (undefined)spuConfig;
  FUN_80082a94();

  DAT_801c9500 = audioBuffer;
  DAT_801c950c = spuConfig;

  FUN_8007dfd8();

  memoryAddress = FUN_8005d718(0xc2);
  memoryAddress = DAT_801c93e8 + memoryAddress;
  memorySize = FUN_8005d768(0xc2);

  FUN_8007cfdc(0, memoryAddress, memorySize, 0);

  DAT_801f053c = &LAB_8007df18;
  FUN_8007ab14(FUN_8007dfd8);

  return;
}

uint * FUN_8007e0b0(int commandBuffer,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 8;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x24;
  return (uint *)result;
}

int FUN_8007e0e0(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 4;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x20000000;
  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x14;
  return result;
}

undefined8 FUN_8007e15c(int colorMatrixData)

{
  undefined4 lightMatrix1;

  gte_ldL13L21(lightMatrix1);
  gte_ldL22L23(*(undefined4 *)(colorMatrixData + 0x34));
  gte_ldL31L32(*(undefined4 *)(colorMatrixData + 0x38));
  gte_ldL33(*(undefined4 *)(colorMatrixData + 0x3c));
  gte_ldLR1LR2(*(undefined4 *)(colorMatrixData + 0x40));
  gte_ldLR3LG1(*(undefined4 *)(colorMatrixData + 0x44));
  gte_ldLG2LG3(*(undefined4 *)(colorMatrixData + 0x48));
  gte_ldLB1LB2(*(undefined4 *)(colorMatrixData + 0x4c));
  gte_ldLB3(*(undefined4 *)(colorMatrixData + 0x50));
  return ((ulonglong)*(undefined4 *)(colorMatrixData + 0x4c) << 32) | (ulonglong)*(undefined4 *)(colorMatrixData + 0x50);
}

undefined8 FUN_8007e5e0(undefined4 *transformationMatrix,long *outputCoordinates,int *inputCoordinates,int coordinateCount)

{
  int result;
  uint absX;
  uint absY;
  int rotationMatrixElement;
  uint absZ;
  int flagResult;
  uint precision;
  uint shiftedX;
  uint shiftedY;
  short *outputPointer;
  int *inputPointer;
  int translationZ;
  int translationY;
  int translationX;
  int maxShift;
  int iVar4;
  int iVar1;
  int iVar15;
  int *piVar11;
  short *psVar10;
  uint param_2;
  int *param_3;
  uint param_4;
  uint uVar9;
  int iVar14;
  uint uVar5;
  int iVar13;
  uint uVar8;
  int iVar12;
  uint uVar2;
  uint uVar3;
  uint uVar7;
  int iVar6;

  param_2 = (uint)inputCoordinates;
  param_3 = inputCoordinates;
  param_4 = coordinateCount;
  iVar4 = transformationMatrix[6];
  iVar1 = transformationMatrix[7];
  iVar14 = 0;
  iVar13 = 0;
  iVar12 = 0;

  translationX = transformationMatrix[8];
  translationY = transformationMatrix[9];
  translationZ = transformationMatrix[10];
  gte_ldtr(0,0,0);
  gte_ldR11R12(*transformationMatrix);
  gte_ldR13R21(transformationMatrix[1]);
  rotationMatrixElement = transformationMatrix[3];
  gte_ldR22R23(transformationMatrix[2]);
  result = transformationMatrix[4];
  gte_ldR31R32(iVar4);
  gte_ldR33(iVar1);
  iVar15 = 0x1f;
  piVar11 = param_3 + 2;
  psVar10 = (short *)((int)param_2 + 6);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar9 = *param_3 + iVar14;
    uVar5 = piVar11[-1] + iVar13;
    uVar8 = *piVar11 + iVar12;
    uVar2 = uVar9;
    if ((int)uVar9 < 0) {
      uVar2 = -uVar9;
    }
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = -uVar5;
    }
    uVar7 = uVar8;
    if ((int)uVar8 < 0) {
      uVar7 = -uVar8;
    }
    gte_ldLZCS(uVar2 | uVar3 | uVar7);
    iVar1 = gte_stLZCR();
    uVar3 = (iVar15 - iVar1) - 0xc;
    uVar2 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (int)uVar9 >> (uVar3 & 0x1f);
      uVar5 = (int)uVar5 >> (uVar3 & 0x1f);
      uVar8 = (int)uVar8 >> (uVar3 & 0x1f);
      uVar2 = uVar3;
    }
    gte_ldVXY0(uVar9 & 0xffff | uVar5 << 0x10);
    gte_ldVZ0(uVar8);
    gte_rtps_b();
    gte_stsxy(param_2);
    iVar1 = gte_stIR3();
    iVar6 = gte_stFLAG();
    iVar1 = (iVar1 << (uVar2 & 0x1f)) >> 0xd;
    iVar4 = iVar6 >> 0x1f;
    psVar10[-1] = (short)iVar1;
    *psVar10 = (short)(iVar6 >> 0x1f);
    psVar10 = psVar10 + 4;
    param_2 = param_2 + 2;
    piVar11 = piVar11 + 3;
    param_3 = param_3 + 3;
  }
  return CONCAT44(iVar4,iVar1);
}

int FUN_8007e708(int commandBuffer,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 6;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x1c;
  return result;
}

int FUN_8007e738(int commandBuffer,uint commandType,uint commandData)

{
  uint alignment1;
  uint alignment2;
  uint *alignedPointer;
  int result;

  alignment1 = commandBuffer + 2U & 3;
  result = *(int *)((commandBuffer + 2U) - alignment1);

  *(undefined *)(DAT_801c93ec + 3) = 7;
  alignment2 = ((uint)DAT_801c93ec + 2U) & 3;
  alignedPointer = (uint *)((DAT_801c93ec + 2U) - alignment2);

  *alignedPointer = *alignedPointer & -1 << (alignment2 + 1) * 8 |
                    (result << (3 - alignment1) * 8 | commandData & 0xffffffffU >> (alignment1 + 1) * 8) >> (3 - alignment2) * 8;

  alignment1 = commandBuffer + 2U & 3;
  alignedPointer = (uint *)((commandBuffer + 2U) - alignment1);
  *alignedPointer = *alignedPointer & -1 << (alignment1 + 1) * 8 | (uint)((uint)DAT_801c93ec << 8) >> (3 - alignment1) * 8;

  *(uint *)(DAT_801c93ec + 4) = commandType ^ 0x48000000;
  *(undefined4 *)(DAT_801c93ec + 0x1c) = 0x50005000;
  result = DAT_801c93ec + 4;
  DAT_801c93ec = DAT_801c93ec + 0x20;
  return result;
}
