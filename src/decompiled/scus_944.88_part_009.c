// Include common types and global variables
#include "gt2_types.h"
#include "gt2_global_vars_clean.h"
#include "scus_944.88_part_009.h"
#include "scus_944.88_part_006.h"
#include "ps1_stubs.h"
#include <SDL3/SDL.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// VSync callback implementation for Linux
static void (*vsync_callback)(void) = NULL;

// Suppress pedantic warnings for object pointer to function pointer conversions
// This is necessary for PS1 code that stores function pointers in data structures
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"

// CONCAT11 macro: Concatenate 1 byte with 1 byte into a 16-bit value
#define CONCAT11(byte1, byte2) \
    (((uint16_t)(byte1) << 8) | ((uint16_t)(byte2)))

// Forward declarations for functions used in this file
int CheckCallback(void);
int VSync(int mode);
#define FUN_8007e864(context, data) FUN_8007e864_wrapper(context, data)
// Note: FUN_8007d024 is declared in scus_944.88_part_006.h as int FUN_8007d024(int commandBuffer,uint commandType,uint commandData)
// This wrapper function provides the interface for calls with 2 arguments (commandType is used as commandData, commandData defaults to 0)
static inline int FUN_8007d024_wrapper_2args(int commandBuffer, uint commandType) {
    extern int FUN_8007d024(int commandBuffer,uint commandType,uint commandData);
    return FUN_8007d024(commandBuffer, commandType, 0);
}
#define FUN_8007d024_2args(buffer, type) FUN_8007d024_wrapper_2args(buffer, type)
// Note: FUN_8007da44 is declared in scus_944.88_part_006.h as int FUN_8007da44(int commandBuffer,uint commandType,uint commandData)
// This wrapper function provides the interface for calls with 2 arguments (commandType is used, commandData defaults to 0)
static inline int FUN_8007da44_wrapper_2args(int commandBuffer, uint commandType) {
    extern int FUN_8007da44(int commandBuffer,uint commandType,uint commandData);
    return FUN_8007da44(commandBuffer, commandType, 0);
}
#define FUN_8007da44_2args(buffer, type) FUN_8007da44_wrapper_2args(buffer, type)

// External declarations for PS1 hardware registers
extern uint CDROM_REG0;
extern uint CDROM_REG1;
extern uint CDROM_REG2;
extern uint CDROM_REG3;
extern uint CURR_MAIN_VOL_L;
extern uint CURR_MAIN_VOL_R;
/* SPU_MAIN_VOL_L is macro (spu_voice_register_block[48]) in gt2_global_vars_clean.h */
extern uint SPU_MAIN_VOL_R;
extern uint CD_VOL_L;
extern uint CD_VOL_R;
extern uint SPU_CTRL_REG_CPUCNT;
extern uint COMMON_DELAY;

// Function pointer type for CD-ROM callbacks
typedef void (*code_int_ptr)(int, void *);
// Function pointer type for VSync callbacks: int (*)(int, func *)
typedef int (*code_vsync_callback)(int, func *);
// Function pointer type that returns int: int (*)(void)
typedef int (*code_int_ret)(void);

// External declarations for global variables used in this file
extern code_int_ptr DAT_800a7810;
extern code_int_ptr DAT_800a780c;
extern undefined4 DAT_801c9840;
extern undefined4 DAT_801c9838;
extern undefined4 DAT_801c9850;
extern undefined4 DAT_801c9854;
extern char *DAT_801c9858;
extern byte DAT_800a7829;
extern byte DAT_800a7ae8;
extern byte DAT_800a7ae9;
extern byte DAT_800a7aea;
extern undefined4 DAT_800a781c;
extern undefined4 DAT_800a7818;
extern undefined4 DAT_800a7828;
extern undefined4 *PTR_DAT_800a7aec;

// Additional external declarations for variables used in this file
extern uint DMA_CDROM_CHCR;
extern undefined4 *PTR_s_CdlSync_800a7830;
extern undefined4 *PTR_s_NoIntr_800a78b0;
extern undefined4 DAT_800a7ab4;
extern undefined4 DAT_800a7b14;
extern undefined4 DAT_801c9868;
extern code_int_ret SUB_000000b0;
extern undefined4 PATCHGTE_OBJ_AC;
extern undefined4 PATCHGTE_OBJ_C4;
extern code LAB_000000c0;
extern undefined4 DAT_800a8cb8;
extern undefined4 DAT_800a8cbc;
extern undefined4 DAT_801c9898;
extern code LAB_8008dea4;
extern undefined4 _LAB_80092e6a_2;
extern undefined4 _LAB_80092e6e_2;
extern undefined4 DAT_801d58b4;
extern undefined4 DAT_801d5860;
extern undefined4 DAT_801d5864;
extern undefined4 DAT_801d5867;
extern undefined4 DAT_801d5868;
extern undefined4 DAT_801d586a;
extern undefined4 DAT_801d5869;
extern undefined4 DAT_801d586b;
extern undefined4 DAT_801d58a0;
extern undefined4 DAT_801d5dd8;
extern undefined4 DAT_801d5dde;
extern undefined4 DAT_801d5de0;
extern undefined4 DAT_801d5de2;
extern undefined4 DAT_801d5ddc;
extern undefined4 DAT_801d5de4;
extern undefined4 DAT_801d585c;
extern undefined DAT_801d58b6;
extern undefined4 DAT_801d586c;
extern undefined4 DAT_801cd554;
extern undefined4 PTR_DAT_arcade__8002678c_arcade__80027470;
extern undefined4 DAT_arcade__800274b0;
extern code LAB_arcade__800267ca_2;
extern code LAB_arcade__800267ce_2;
extern code LAB_arcade__800267d4;
extern undefined1 UNK_801d58e9[];
extern undefined1 UNK_801d58e8[];
extern undefined1 UNK_801d5880[];
extern undefined1 UNK_801d58de[];
extern undefined1 UNK_801d58ea[];
extern undefined1 UNK_801d58eb[];
extern undefined1 UNK_801d58ec[];
extern undefined4 DAT_801d5d98;
extern undefined4 DAT_801c336c;
extern undefined4 DAT_801c3510;
extern undefined4 DAT_801c3594;
extern undefined4 DAT_801c3618;
extern undefined4 DAT_801c31fe;
extern undefined4 DAT_801c31f8;
extern undefined4 DAT_801c31fa;
extern undefined4 DAT_801c31fc;
extern uint JOY_MCD_CTRL;
extern uint _I_MASK;
extern uint _I_STAT;
extern code *DAT_800a8be8;
extern code_vsync_callback DAT_800a8bf8;
extern undefined4 DAT_800a7b7e;
extern uint I_MASK;
extern uint I_STAT;
extern undefined2 *INTR_OBJ_194(void);
extern undefined4 DAT_800a7bb4;
extern undefined4 DAT_800a7bb8;
extern undefined4 LAB_800a8b94;
extern void HookEntryInt(undefined4 *);
extern code_vsync_callback startIntrVSync(void);
extern code *startIntrDMA(void);
extern undefined4 DAT_800a7bac;
extern undefined4 DAT_800a7b80;
extern undefined4 DAT_800a8c14;
extern undefined4 DAT_800a7bae;
extern undefined4 DAT_800a7bb0;
extern undefined4 DAT_800a8c34;
extern undefined4 DAT_800a8c38;
extern undefined4 DAT_800a8c64;
extern uint DMA_DPCR;
extern uint DMA_DICR;
extern uint DMA_MDEC_IN_MADR;
extern uint GPU_REG1;
extern uint TMR_HRETRACE_VAL;
extern uint TMR_HRETRACE_MODE;
// ChangeClearRCnt is declared in header - forward declaration not needed here
extern undefined4 Status;

undefined4 BIOS_1_OBJ_D78(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;

  while( true ) {

    if (in_v0 != 0) {
      return 0xffffffff;
    }

    iVar3 = CheckCallback();
    bVar7 = CDROM_REG0;

    if (iVar3 != 0) {
      bVar7 = CDROM_REG0 & 3;

      while( true ) {
        uVar4 = BIOS_1_OBJ_0();
        if (uVar4 == 0) break;

        if (((uVar4 & 4) != 0) && (DAT_800a7810 != (code_int_ptr)0x0)) {
          (*DAT_800a7810)(*unaff_s4,&DAT_801c9840);
        }

        if (((uVar4 & 2) != 0) && (DAT_800a780c != (code_int_ptr)0x0)) {
          (*DAT_800a780c)(*unaff_s2,&DAT_801c9838);
        }
      }
    }

    CDROM_REG0 = bVar7;

    if (*unaff_s2 != 0) break;

    iVar3 = VSync(-1);

    if (((int)DAT_801c9850 < iVar3) ||
       (iVar3 = DAT_801c9854 + 1, bVar2 = 0x3c0000 < DAT_801c9854, DAT_801c9854 = iVar3, bVar2)) {

      FUN_8008e00c("CD timeout: ");
      {
        void *syncPtr = (void *)(uintptr_t)(*(undefined4 *)(void *)(uintptr_t)((uint)DAT_800a7829 * 4 + (uintptr_t)unaff_s5));
        void *readyPtr1 = (void *)(uintptr_t)(*(undefined4 *)(void *)(uintptr_t)((uint)*unaff_s2 * 4 + (uintptr_t)unaff_s3));
        void *readyPtr2 = (void *)(&PTR_s_NoIntr_800a78b0)[DAT_800a7ae9];
        printf("%s:(%p) Sync=%p, Ready=%p\n",DAT_801c9858, syncPtr, readyPtr1, readyPtr2);
      }

      CD_flush();
      uVar5 = BIOS_1_OBJ_D78();
      return uVar5;
    }
    in_v0 = 0;
  }

  puVar6 = (undefined1 *)&DAT_801c9838;
  iVar3 = 7;

  if (unaff_s6 != (undefined *)0x0) {
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
      *unaff_s6 = uVar1;
      unaff_s6 = unaff_s6 + 1;
    } while (iVar3 != -1);
  }

  uVar5 = 0;
  if (DAT_800a7ae8 == '\x05') {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

undefined4 BIOS_1_OBJ_DA8(void)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte unaff_s1;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;

  do {

    while( true ) {
      uVar4 = BIOS_1_OBJ_0();
      bVar3 = unaff_s1;
      if (uVar4 == 0) break;

      if (((uVar4 & 4) != 0) && (DAT_800a7810 != (code_int_ptr)0x0)) {
        (*DAT_800a7810)(*unaff_s4,&DAT_801c9840);
      }

      if (((uVar4 & 2) != 0) && (DAT_800a780c != (code_int_ptr)0x0)) {
        (*DAT_800a780c)(*unaff_s2,&DAT_801c9838);
      }
    }

    do {
      CDROM_REG0 = bVar3;

      if (*unaff_s2 != 0) {

        puVar7 = (undefined1 *)&DAT_801c9838;
        iVar6 = 7;

        if (unaff_s6 != (undefined *)0x0) {
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s6 = uVar1;
            unaff_s6 = unaff_s6 + 1;
          } while (iVar6 != -1);
        }

        uVar5 = 0;
        if (DAT_800a7ae8 == '\x05') {
          uVar5 = 0xffffffff;
        }
        return uVar5;
      }

      iVar6 = VSync(-1);

      if (((int)DAT_801c9850 < iVar6) ||
         (iVar6 = DAT_801c9854 + 1, bVar2 = 0x3c0000 < DAT_801c9854, DAT_801c9854 = iVar6, bVar2)) {

        FUN_8008e00c("CD timeout: ");
        {
          void *syncPtr = (void *)(uintptr_t)(*(undefined4 *)(void *)(uintptr_t)((uint)DAT_800a7829 * 4 + (uintptr_t)unaff_s5));
          void *readyPtr1 = (void *)(uintptr_t)(*(undefined4 *)(void *)(uintptr_t)((uint)*unaff_s2 * 4 + (uintptr_t)unaff_s3));
          void *readyPtr2 = (void *)(&PTR_s_NoIntr_800a78b0)[DAT_800a7ae9];
          printf("%s:(%p) Sync=%p, Ready=%p\n",DAT_801c9858, syncPtr, readyPtr1, readyPtr2);
        }

        CD_flush();
        uVar5 = BIOS_1_OBJ_D78();
        return uVar5;
      }

      iVar6 = CheckCallback();
      bVar3 = CDROM_REG0;
    } while (iVar6 == 0);

    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}

void BIOS_1_OBJ_E90(void)

{
  return;
}






void BIOS_1_OBJ_1320(void)

{
  return;
}


undefined4 BIOS_1_OBJ_1448(void)

{
  bool bVar1;
  int iVar2;
  int in_v0;
  undefined4 uVar3;
  int unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;

  while (((uVar3 = 0xffffffff, in_v0 == 0 && (uVar3 = 0, (DMA_CDROM_CHCR & 0x1000000) != 0)) &&
         (uVar3 = 1, unaff_s2 == 0))) {

    iVar2 = VSync(-1);

    if (((int)DAT_801c9850 < iVar2) ||
       (iVar2 = DAT_801c9854 + 1, bVar1 = (int)unaff_s4 < (int)DAT_801c9854, DAT_801c9854 = iVar2, bVar1)) {

      FUN_8008e00c("CD timeout: ");
      {
        void *syncPtr = (void *)(uintptr_t)(*(undefined4 *)(void *)(uintptr_t)((uint)DAT_800a7829 * 4 + (uintptr_t)unaff_s3));
        void *readyPtr1 = (void *)(uintptr_t)(*(undefined4 *)(void *)(uintptr_t)((uint)*unaff_s1 * 4 + (uintptr_t)unaff_s0));
        void *readyPtr2 = (void *)(&PTR_s_NoIntr_800a78b0)[DAT_800a7ae9];
        printf("%s:(%p) Sync=%p, Ready=%p\n",DAT_801c9858, syncPtr, readyPtr1, readyPtr2);
      }

      CD_flush();
      uVar3 = BIOS_1_OBJ_1448();
      return uVar3;
    }
    in_v0 = 0;
  }
  return uVar3;
}

void CD_set_test_parmnum(undefined4 param_1)

{
  DAT_800a7ab4 = param_1;
  return;
}

void BIOS_1_OBJ_14A4(void)

{
  uint uVar1;
  byte bVar2;

  bVar2 = CDROM_REG0 & 3;

  while( true ) {
    uVar1 = BIOS_1_OBJ_0();
    if (uVar1 == 0) break;

    if (((uVar1 & 4) != 0) && (DAT_800a7810 != (code_int_ptr)0x0)) {
      (*DAT_800a7810)(DAT_800a7ae9,&DAT_801c9840);
    }

    if (((uVar1 & 2) != 0) && (DAT_800a780c != (code_int_ptr)0x0)) {
      (*DAT_800a780c)(DAT_800a7ae8,&DAT_801c9838);
    }
  }

  CDROM_REG0 = bVar2;
  return;
}

void BIOS_1_OBJ_14D8(void)

{
  uint uVar1;
  undefined *unaff_s1;
  byte unaff_s2;
  undefined *unaff_s3;

  while( true ) {
    uVar1 = BIOS_1_OBJ_0();
    if (uVar1 == 0) break;

    if (((uVar1 & 4) != 0) && (DAT_800a7810 != (code_int_ptr)0x0)) {
      (*DAT_800a7810)(*unaff_s1,&DAT_801c9840);
    }

    if (((uVar1 & 2) != 0) && (DAT_800a780c != (code_int_ptr)0x0)) {
      (*DAT_800a780c)(*unaff_s3,&DAT_801c9838);
    }
  }

  CDROM_REG0 = unaff_s2;
  return;
}

void InitGeom(void)

{
  undefined4 unaff_retaddr;

  DAT_800a7b14 = unaff_retaddr;

  _patch_gte();

  setCopReg(0,Status,Status | 0x40000000,0);

  gte_ldZSF3(0x155);
  gte_ldZSF4(0x100);
  gte_ldH(1000);
  gte_ldDQA(0xffffef9e);
  gte_ldDQB(0x1400000);
  gte_ldOFX(0);
  gte_ldOFY(0);
  return;
}

void _patch_gte(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_retaddr;

  DAT_801c9868 = unaff_retaddr;

  FUN_8008c918();

  iVar1 = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  piVar2 = (int *)(void *)(uintptr_t)((*(int *)(void *)(uintptr_t)((uintptr_t)iVar1 + 0x18)) + 0x28);

  piVar3 = (int *)&PATCHGTE_OBJ_AC;
  piVar4 = piVar2;

  do {
    iVar1 = *piVar3;
    iVar5 = *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    if (iVar1 != iVar5) goto PATCHGTE_OBJ_88;
  } while (piVar3 != (int *)&PATCHGTE_OBJ_C4);

  piVar4 = (int *)&PATCHGTE_OBJ_C4;
  do {
    *piVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (piVar4 != (int *)(void *)(uintptr_t)PATCHGTE_OBJ_DC);

PATCHGTE_OBJ_88:

  FlushCache();
  FUN_8008c948();
  return;
}

void PATCHGTE_OBJ_DC(void)

{
  INTR_OBJ_194();
  return;
}

int ResetCallback(void)

{
  int iVar1;

  iVar1 = (int)(uintptr_t)INTR_OBJ_194();
  return iVar1;
}

void InterruptCallback(void)

{
  // Note: INTR_OBJ_43C requires arguments, but InterruptCallback() is called without arguments
  // This is a stub that should be implemented properly
  return;
}

void DMACallback(void)

{
  (*DAT_800a8be8)();
  return;
}

int VSyncCallback(f *f)

{
  // Store the callback for simulation
  vsync_callback = (void (*)(void))f;
  return 0; // Stub return
}

void VSyncCallbacks(void)

{
  // DAT_800a8bf8 is code_vsync_callback which requires 2 arguments
  // Call with default arguments (0, NULL) when called without arguments
  if (DAT_800a8bf8 != NULL) {
    (*DAT_800a8bf8)(0, NULL);
  }
  return;
}

// Simulate VSync frames for Linux compatibility
void simulate_vsync_frames(int frames) {
    for(int i = 0; i < frames; i++) {
        if(vsync_callback) vsync_callback();
        // Wait ~16.67ms (60 FPS) using SDL
        SDL_WaitEventTimeout(NULL, 16);
    }
}

int StopCallback(void)

{
  int iVar1;

  iVar1 = (int)(uintptr_t)INTR_OBJ_584();
  return iVar1;
}

int RestartCallback(void)

{
  int iVar1;

  iVar1 = INTR_OBJ_624();
  return iVar1;
}

int CheckCallback(void)

{
  return (uint)DAT_800a7b7e;
}

word GetIntrMask(void)

{
  return I_MASK;
}

word SetIntrMask(word param_1)

{
  word wVar1;

  wVar1 = I_MASK;
  I_MASK = param_1;
  return wVar1;
}

undefined2 * INTR_OBJ_194(void)

{
  undefined2 *puVar1;
  int iVar2;

  puVar1 = (undefined2 *)0x0;

  if (DAT_800a7b7c == 0) {

    I_MASK = 0;
    I_STAT = 0;
    DMA_DPCR = 0x33333333;

    INTR_OBJ_69C(&DAT_800a7b7c,0x41a);

    iVar2 = FUN_8007ad58(&DAT_800a7bb4);
    if (iVar2 != 0) {
      INTR_OBJ_26C();
    }

    DAT_800a7bb8 = (undefined4)(uintptr_t)&LAB_800a8b94;
    HookEntryInt(&DAT_800a7bb4);

    DAT_800a7b7c = 1;

    DAT_800a8bf8 = startIntrVSync();
    DAT_800a8be8 = startIntrDMA();

    FUN_8008cc90();
    puVar1 = (undefined2 *)&DAT_800a7b7c;
    FUN_8008c948();
  }
  return puVar1;
}

void INTR_OBJ_26C(void)

{
  bool isTimeoutReached;
  uint activeInterrupts;
  int timeoutCounter;
  uint interruptIndex;
  code **interruptCallback;

  if (DAT_800a7b7c == 0) {
    printf("unexpected interrupt(%04x)\n",(uint)I_STAT);
    ReturnFromException();
  }

  DAT_800a7b7e = 1;

  activeInterrupts = (uint)(I_MASK & DAT_800a7bac & I_STAT);

  if (activeInterrupts != 0) {
    do {

      interruptCallback = (code **)&DAT_800a7b80;

      for (interruptIndex = 0; (activeInterrupts != 0 && ((int)interruptIndex < 0xb)); interruptIndex = interruptIndex + 1) {

        if ((activeInterrupts & 1) != 0) {

          I_STAT = ~(ushort)(1 << (interruptIndex & 0x1f));

          if (*interruptCallback != (code *)0x0) {
            (**interruptCallback)();
          }
        }

        interruptCallback = interruptCallback + 1;

        activeInterrupts = activeInterrupts >> 1;
      }

      activeInterrupts = (uint)(I_MASK & DAT_800a7bac & I_STAT);
    } while (activeInterrupts != 0);
  }

  if ((I_STAT & I_MASK) == 0) {

    DAT_800a8c14 = 0;
  }
  else {

    timeoutCounter = DAT_800a8c14 + 1;
    isTimeoutReached = 0x800 < DAT_800a8c14;
    DAT_800a8c14 = timeoutCounter;

    if (isTimeoutReached) {
      printf("intr timeout(%04x:%04x)\n",(uint)I_STAT,(uint)I_MASK);
      DAT_800a8c14 = 0;
      I_STAT = 0;
      INTR_OBJ_410();
      return;
    }
  }

  DAT_800a7b7e = 0;
  ReturnFromException();
  return;
}

void INTR_OBJ_410(void)

{

  DAT_800a7b7e = 0;

  ReturnFromException();
  return;
}

int INTR_OBJ_43C(uint interruptType,int callbackFunction)

{
  ushort interruptMask;
  int *callbackPointer;
  word originalMask;
  int previousCallback;

  originalMask = I_MASK;

  callbackPointer = (int *)(void *)(uintptr_t)((uintptr_t)&DAT_800a7b80 + (interruptType * sizeof(int)));
  previousCallback = *callbackPointer;

  if ((callbackFunction != previousCallback) && (DAT_800a7b7c != 0)) {

    I_MASK = 0;

    if (callbackFunction != 0) {

      *callbackPointer = callbackFunction;

      DAT_800a7bac = DAT_800a7bac | (ushort)(1 << (interruptType & 0x1f));

      previousCallback = INTR_OBJ_4EC();
      return previousCallback;
    }

    interruptMask = ~(ushort)(1 << (interruptType & 0x1f));
    *callbackPointer = 0;

    originalMask = originalMask & interruptMask;
    DAT_800a7bac = DAT_800a7bac & interruptMask;

    if (interruptType == 0) {

      ChangeClearPAD(1);
      ChangeClearRCnt(3,1);
    }
    if (interruptType == 4) {

      ChangeClearRCnt(0,1);
    }
    if (interruptType == 5) {

      ChangeClearRCnt(1,1);
    }
    if (interruptType == 6) {

      ChangeClearRCnt(2,1);
    }
  }

  I_MASK = originalMask;
  return previousCallback;
}

int INTR_OBJ_4EC(void)

{
  int interruptType;
  int enableClear;
  word interruptMask;

  if (interruptType == 0) {

    ChangeClearPAD((uint)(enableClear == 0));
    ChangeClearRCnt(3,(uint)(enableClear == 0));
  }
  if (interruptType == 4) {

    ChangeClearRCnt(0,enableClear == 0);
  }
  if (interruptType == 5) {

    ChangeClearRCnt(1,enableClear == 0);
  }
  if (interruptType == 6) {

    ChangeClearRCnt(2,enableClear == 0);
  }

  I_MASK = interruptMask;
  return 0;
}

undefined2 * INTR_OBJ_584(void)

{
  undefined2 *initializationFlag;

  initializationFlag = (undefined2 *)0x0;

  if (DAT_800a7b7c != 0) {

    FUN_8008c918();

    DAT_800a7bae = I_MASK;
    DAT_800a7bb0 = DMA_DPCR;

    I_MASK = 0;
    I_STAT = 0;

    DMA_DPCR = DMA_DPCR & 0x77777777;

    ResetEntryInt();

    DAT_800a7b7c = 0;

    initializationFlag = (undefined2 *)&DAT_800a7b7c;
  }

  return initializationFlag;
}

undefined4 INTR_OBJ_624(void)

{
  undefined2 *initializationFlag;

  if (DAT_800a7b7c == 0) {

    HookEntryInt(&DAT_800a7bb4);

    DAT_800a7b7c = 1;

    I_MASK = DAT_800a7bae;
    DMA_DPCR = DAT_800a7bb0;

    FUN_8008c948();

    INTR_OBJ_68C();
    initializationFlag = (undefined2 *)&DAT_800a7b7c;
    return (undefined4)(uintptr_t)initializationFlag;
  }

  return 0;
}

void INTR_OBJ_68C(void)

{
  return;
}

void INTR_OBJ_69C(undefined4 *arrayPointer,int elementCount)

{
  int remainingElements;

  remainingElements = elementCount + -1;

  if (elementCount != 0) {
    do {

      *arrayPointer = 0;

      remainingElements = remainingElements + -1;
      arrayPointer = arrayPointer + 1;
    } while (remainingElements != -1);
  }
  return;
}

int VSync(int mode)

{
  dword gpuStatusRegister;
  uint horizontalRetraceValue;
  int syncParameter;

  horizontalRetraceValue = TMR_HRETRACE_VAL - DAT_800a8c34;

  if (mode < 0) {

    syncParameter = VSYNC_OBJ_164();
    return syncParameter;
  }

  if (mode != 1) {
    if (0 < mode) {

      syncParameter = VSYNC_OBJ_A4();
      return syncParameter;
    }

    syncParameter = 0;
    if (0 < mode) {
      syncParameter = mode + -1;
    }

    VSYNC_OBJ_178(DAT_800a8c38, syncParameter);

    gpuStatusRegister = GPU_REG1;

    VSYNC_OBJ_178(DAT_800a8c64 + 1, 1);

    if (((gpuStatusRegister & 0x400000) != 0) && (-1 < (int)(gpuStatusRegister ^ GPU_REG1))) {

      do {
      } while (((gpuStatusRegister ^ GPU_REG1) & 0x80000000) == 0);
    }

    DAT_800a8c38 = DAT_800a8c64;
    DAT_800a8c34 = TMR_HRETRACE_VAL;
  }

  return horizontalRetraceValue & 0xffff;
}

int VSYNC_OBJ_A4(void)

{
  dword gpuStatusRegister;

  VSYNC_OBJ_178(0, 0);

  gpuStatusRegister = GPU_REG1;

  VSYNC_OBJ_178(DAT_800a8c64 + 1, 1);

  if (((gpuStatusRegister & 0x400000) != 0) && (-1 < (int)(gpuStatusRegister ^ GPU_REG1))) {

    do {
    } while (((gpuStatusRegister ^ GPU_REG1) & 0x80000000) == 0);
  }

  DAT_800a8c38 = DAT_800a8c64;
  DAT_800a8c34 = TMR_HRETRACE_VAL;
  return 0;
}

int VSYNC_OBJ_164(void)

{
  return 0;
}

void VSYNC_OBJ_178(int targetFrame,int timeoutValue)

{

  timeoutValue = timeoutValue << 0xf;

  do {

    if (targetFrame <= (int)DAT_800a8c64) {
      return;
    }

    timeoutValue = timeoutValue + -1;
  } while (timeoutValue != -1);

  FUN_8008e00c("VSync: timeout\n");

  ChangeClearPAD(0);
  ChangeClearRCnt(3, 0);

  VSYNC_OBJ_200();
  return;
}

void VSYNC_OBJ_200(void)

{
  return;
}

code_vsync_callback startIntrVSync(void)

{

  TMR_HRETRACE_MODE = 0x100;

  DAT_800a8c64 = 0;

  INTR_VB_OBJ_F0(&DAT_800a8c44, 8);

  INTR_OBJ_43C(0, (int)(uintptr_t)INTR_VB_OBJ_58);

  return (code_vsync_callback)(void *)(uintptr_t)INTR_VB_OBJ_C4;
}

void INTR_VB_OBJ_58(void)

{
  code **callbackPointer;
  int callbackIndex;

  callbackIndex = 0;
  callbackPointer = (code **)&DAT_800a8c44;

  DAT_800a8c64 = DAT_800a8c64 + 1;

  do {

    if (*callbackPointer != (code *)0x0) {
      (**callbackPointer)();
    }

    callbackIndex = callbackIndex + 1;
    callbackPointer = callbackPointer + 1;
  } while (callbackIndex < 8);

  return;
}

void INTR_VB_OBJ_C4(int callbackIndex,int callbackFunction)

{

  if (callbackFunction != (int)(uintptr_t)DAT_800a8c44[callbackIndex]) {
    DAT_800a8c44[callbackIndex] = (undefined4)(uintptr_t)callbackFunction;
  }
  return;
}

void INTR_VB_OBJ_F0(undefined4 *tablePointer,int entryCount)

{
  int remainingEntries;

  remainingEntries = entryCount + -1;

  if (entryCount != 0) {
    do {

      *tablePointer = 0;

      remainingEntries = remainingEntries + -1;
      tablePointer = tablePointer + 1;
    } while (remainingEntries != -1);
  }
  return;
}

code * startIntrDMA(void)

{

  INTR_DMA_OBJ_278(&DAT_800a8c78, 8);

  DMA_DICR = 0;

  INTR_OBJ_43C(3, (int)(uintptr_t)INTR_DMA_OBJ_4C);

  return (code *)(void *)(uintptr_t)INTR_DMA_OBJ_1CC;
}

void INTR_DMA_OBJ_4C(void)

{
  int dmaChannelIndex;
  int channelCounter;
  uint activeDmaChannels;
  code **callbackPointer;

  activeDmaChannels = DMA_DICR >> 0x18 & 0x7f;

  if (activeDmaChannels != 0) {
    do {

      callbackPointer = (code **)&DAT_800a8c78;

      for (dmaChannelIndex = 0; (activeDmaChannels != 0 && (dmaChannelIndex < 7)); dmaChannelIndex = dmaChannelIndex + 1) {

        if ((activeDmaChannels & 1) != 0) {

          DMA_DICR = DMA_DICR & (1 << ((dmaChannelIndex + 0x18U) & 0x1f) | 0xffffffU);

          if (*callbackPointer != (code *)0x0) {
            (**callbackPointer)();
          }
        }

        callbackPointer = callbackPointer + 1;

        activeDmaChannels = activeDmaChannels >> 1;
      }

      activeDmaChannels = DMA_DICR >> 0x18 & 0x7f;
    } while (activeDmaChannels != 0);
  }

  if (((DMA_DICR & 0xff000000) == 0x80000000) || ((DMA_DICR & 0x8000) != 0)) {

    printf("DMA bus error: code=%08x\n", DMA_DICR);

    channelCounter = 0;
    do {
      int nextChannel = channelCounter + 1;
      printf("MADR[%d]=%08x\n", channelCounter, (&DMA_MDEC_IN_MADR)[channelCounter * 4]);
      channelCounter = nextChannel;
    } while (channelCounter < 7);
  }

  return;
}

int INTR_DMA_OBJ_1CC(int dmaChannel,int callbackFunction)

{
  int *callbackPointer;
  int previousCallback;

  callbackPointer = (int *)(void *)(uintptr_t)((uintptr_t)&DAT_800a8c78 + (dmaChannel * sizeof(int)));
  previousCallback = *callbackPointer;

  if (callbackFunction != previousCallback) {
    if (callbackFunction != 0) {

      *callbackPointer = callbackFunction;

      DMA_DICR = (DMA_DICR & 0xffffff) | (1 << ((dmaChannel + 0x10U) & 0x1f)) | 0x800000U;

      INTR_DMA_OBJ_270();
      return previousCallback;
    }

    *callbackPointer = 0;

    DMA_DICR = ((DMA_DICR & 0xffffff) | 0x800000) & ~(1 << ((dmaChannel + 0x10U) & 0x1f));
  }

  return previousCallback;
}

void INTR_DMA_OBJ_270(void)

{
  return;
}

void INTR_DMA_OBJ_278(undefined4 *tablePointer,int entryCount)

{
  int remainingEntries;

  remainingEntries = entryCount + -1;

  if (entryCount != 0) {
    do {

      *tablePointer = 0;

      remainingEntries = remainingEntries + -1;
      tablePointer = tablePointer + 1;
    } while (remainingEntries != -1);
  }
  return;
}

void FlushCache(void)

{

  (*(code_int_ret)(void *)(uintptr_t)&LAB_000000a0)();
  return;
}

void FUN_8008c918(void)

{

  syscall(1);

  return;
}

long OpenEvent(ulong eventClass,long eventSpec,long eventMode,func *eventHandler)

{
  long eventHandle;

  (void)eventClass;
  (void)eventSpec;
  (void)eventMode;
  (void)eventHandler;
  eventHandle = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return eventHandle;
}

long EnableEvent(long eventHandle)

{
  long operationResult;

  (void)eventHandle;
  operationResult = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return operationResult;
}

void FUN_8008c948(void)

{

  syscall(2);

  return;
}

long CloseEvent(long eventHandle)

{
  long operationResult;

  (void)eventHandle;
  operationResult = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return operationResult;
}

void GPU_cw(void)

{

  (*(code_int_ret)(void *)(uintptr_t)&LAB_000000a0)();
  return;
}

long Krom2RawAdd(ulong kromAddress)

{
  long rawAddress;

  (void)kromAddress;
  rawAddress = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return rawAddress;
}

void _exit(void)

{

  (*(code_int_ret)(void *)(uintptr_t)&LAB_000000a0)();
  return;
}

void ChangeClearPAD(long clearMode)

{
  (void)clearMode;

  (*(code *)&SUB_000000b0)();
  return;
}

void SetInitPadFlag(undefined4 initFlag)

{
  DAT_800a8ca4 = initFlag;
  return;
}

undefined4 ReadInitPadFlag(void)

{
  return DAT_800a8ca4;
}

void PAD_init(undefined4 padType1,undefined4 padType2,undefined4 padType3,undefined4 padType4)

{

  _remove_ChgclrPAD();

  FUN_8008c918();

  _patch_pad();

  FUN_8008c948();

  ChangeClearPAD(0);

  PAD_OBJ_16C();

  PAD_init2(padType1, padType2, padType3, padType4);

  DAT_800a8ca4 = 1;
  return;
}

long InitPAD(char *param_1,long param_2,char *param_3,long param_4)

{
  _remove_ChgclrPAD();
  FUN_8008c918();
  _patch_pad();
  FUN_8008c948();
  ChangeClearPAD(0);
  PAD_OBJ_16C();
  InitPAD2(param_1,param_2,param_3,param_4);
  DAT_800a8ca4 = 1;
  return 1;
}

long StartPAD(void)

{
  StartPAD2();
  ChangeClearPAD(0);
  EnablePAD();
  return 1;
}

undefined4 PAD_OBJ_16C(void)

{
  FUN_8008c918();
  DAT_801f0d54 = (undefined4)(uintptr_t)PAD_OBJ_1E4;
  DAT_801f0d58 = (undefined4)(uintptr_t)PAD_OBJ_24C;
  DAT_801f0d50 = 0;
  DAT_801f0d5c = 0;
  SysDeqIntRP(1,&DAT_801f0d50);
  SysEnqIntRP(1,&DAT_801f0d50);
  FUN_8008c948();
  return 1;
}

undefined4 PAD_OBJ_1E4(void)

{
  int delayCounter;

  JOY_MCD_CTRL = 0;
  delayCounter = 9;
  do {
    delayCounter = delayCounter + -1;
  } while (delayCounter != -1);
  return 0;
}

undefined4 PAD_OBJ_24C(void)

{
  undefined4 interruptStatus;

  interruptStatus = 0;
  if (((_I_MASK & 1) != 0) && (interruptStatus = 1, (_I_STAT & 1) == 0)) {

    interruptStatus = 0;
  }
  return interruptStatus;
}

void SysDeqIntRP(int param_1, void *param_2)

{
  (void)param_1;
  (void)param_2;
  (*(code *)(void *)(uintptr_t)&LAB_000000c0)();
  return;
}

void SysEnqIntRP(int param_1, void *param_2)

{
  (void)param_1;
  (void)param_2;
  (*(code *)(void *)(uintptr_t)&LAB_000000c0)();
  return;
}

void ChangeClearRCnt(int param_1, int param_2)

{
  (void)param_1;
  (void)param_2;
  (*(code *)(void *)(uintptr_t)&LAB_000000c0)();
  return;
}

void DeliverEvent(ulong param_1,ulong param_2)

{
  (void)param_1;
  (void)param_2;
  (*(code *)(void *)(uintptr_t)&SUB_000000b0)();
  return;
}


void FUN_8008cc90(void)

{

  (*(code_int_ret)&LAB_000000a0)();

  return;
}

void ReturnFromException(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}

void ResetEntryInt(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}

void _remove_ChgclrPAD(void)

{
  int systemCallResult;
  undefined4 *dataPointer;
  int loopCounter;
  undefined4 returnAddress;

  DAT_801c9878 = returnAddress;
  FUN_8008c918();
  systemCallResult = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  loopCounter = 9;
  dataPointer = (undefined4 *)(void *)(uintptr_t)((*(int *)(void *)(uintptr_t)((uintptr_t)systemCallResult + 0x16c)) + 0x62c);
  do {
    *dataPointer = 0;
    dataPointer = dataPointer + 1;
    loopCounter = loopCounter + -1;
  } while (loopCounter != 0);
  FlushCache();
  FUN_8008c948();
  return;
}

void EnablePAD(void)

{

  (*DAT_801c9890)();
  return;
}

void DisablePAD(void)

{

  (*DAT_801c9894)();
  return;
}

void _patch_pad(void)

{
  int systemCallResult;
  int loopCounter;
  undefined4 returnAddress;

  DAT_801c9888 = returnAddress;
  FUN_8008c918();
  systemCallResult = (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  systemCallResult = *(int *)(void *)(uintptr_t)((uintptr_t)systemCallResult + 0x16c);
  loopCounter = 0xb;
  DAT_801c9890 = (code *)(void *)(uintptr_t)(systemCallResult + 0x884);
  DAT_801c9894 = (code *)(void *)(uintptr_t)(systemCallResult + 0x894);
  do {
    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)systemCallResult + 0x594) = 0;
    systemCallResult = systemCallResult + 4;
    loopCounter = loopCounter + -1;
  } while (loopCounter != 0);
  FlushCache();
  return;
}

void PAD_init2(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
  (void)param_1;
  (void)param_2;
  (void)param_3;
  (void)param_4;
  (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return;
}

void InitPAD2(char *param_1, long param_2, char *param_3, long param_4)

{
  (void)param_1;
  (void)param_2;
  (void)param_3;
  (void)param_4;
  (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return;
}

void StartPAD2(void)

{
  (*(code *)(void *)(uintptr_t)&SUB_000000b0)();
  return;
}

void FUN_8008ce08(void)

{
  FUN_8008ddb4();
  FUN_80010998();
  return;
}

uint * FUN_8008ce30(uint *param_1,undefined param_2,uint param_3)

{
  undefined *bytePointer;
  uint *wordPointer;
  uint fillPattern;
  int byteCount;
  uint alignmentMask;

  if (param_3 == 0) {
    return param_1;
  }
  if (param_3 < 4) {
    byteCount = param_3 - 1;
    wordPointer = param_1;
    if (byteCount != -1) {
      do {
        *(undefined *)wordPointer = param_2;
        byteCount = byteCount + -1;
        wordPointer = (uint *)(void *)(uintptr_t)((uintptr_t)wordPointer + 1);
      } while (byteCount != -1);
      return param_1;
    }
  }
  else {
    fillPattern = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (((uintptr_t)param_1 & 3) != 0) {
      alignmentMask = (uint)(uintptr_t)param_1 & 3;
      *(uint *)(void *)(uintptr_t)((uintptr_t)param_1 - alignmentMask) =
           (*(uint *)(void *)(uintptr_t)((uintptr_t)param_1 - alignmentMask) & (0xffffffffU >> ((4 - alignmentMask) * 8))) | (fillPattern << (alignmentMask * 8));
      byteCount = 4 - ((uint)(uintptr_t)param_1 & 3);
      param_1 = (uint *)(void *)(uintptr_t)((uintptr_t)param_1 + byteCount);
      param_3 = param_3 - byteCount;
    }
    alignmentMask = param_3 >> 2;
    wordPointer = param_1;
    while (alignmentMask = alignmentMask - 1, alignmentMask != 0xffffffff) {
      *wordPointer = fillPattern;
      wordPointer = wordPointer + 1;
    }
    if ((param_3 & 3) != 0) {
      bytePointer = (undefined *)(void *)(uintptr_t)((uintptr_t)wordPointer + ((param_3 & 3) - 1));
      alignmentMask = (uint)(uintptr_t)bytePointer & 3;
      wordPointer = (uint *)(void *)(uintptr_t)((uintptr_t)bytePointer - alignmentMask);
      *wordPointer = (*wordPointer & ((uint)-1 << ((alignmentMask + 1) * 8))) | (fillPattern >> ((3 - alignmentMask) * 8));
    }
  }
  return param_1;
}

char * FUN_8008cedc(char *param_1,char *param_2)

{
  char currentChar;
  char *destinationPointer;

  destinationPointer = param_1;
  do {
    currentChar = *param_2;
    param_2 = param_2 + 1;
    *destinationPointer = currentChar;
    destinationPointer = destinationPointer + 1;
  } while (currentChar != '\0');
  return param_1;
}

uint FUN_8008cf00(char *param_1,char *param_2)

{
  char firstChar;
  char secondChar;
  int charDifference;

  do {
    firstChar = *param_1;
    param_1 = param_1 + 1;
    secondChar = *param_2;
    param_2 = param_2 + 1;
    charDifference = (int)firstChar - (int)secondChar;
    if (charDifference != 0) {
      return charDifference >> 0x1f | 1;
    }
  } while (firstChar != 0);
  return 0;
}

void FUN_8008cf34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 localParameter3;

  localParameter3 = param_3;
  FUN_8008dec4(param_1,param_2,&localParameter3);
  return;
}

uchar * FUN_8008cf64(uchar *param_1,uchar *param_2,uint param_3)

{
  int sourceLength;
  uint copyLength;

  sourceLength = FUN_8008cfc4((char *)param_2);
  copyLength = sourceLength + 1U;
  if (param_3 < sourceLength + 1U) {
    copyLength = param_3;
  }
  memcpy(param_1, param_2, copyLength);
  return param_1;
}

int FUN_8008cfc4(char *param_1)

{
  char currentChar;
  int stringLength;

  stringLength = -1;
  do {
    currentChar = *param_1;
    param_1 = param_1 + 1;
    stringLength = stringLength + 1;
  } while (currentChar != '\0');
  return stringLength;
}

undefined * FUN_8008cfe0(undefined *param_1,undefined *param_2,int param_3)

{
  undefined currentByte;
  undefined *destinationPointer;

  param_3 = param_3 + -1;
  destinationPointer = param_1;
  if (param_2 != param_1) {
    for (; param_3 != -1; param_3 = param_3 + -1) {
      currentByte = *param_2;
      param_2 = param_2 + 1;
      *destinationPointer = currentByte;
      destinationPointer = destinationPointer + 1;
    }
    return param_1;
  }
  return param_1;
}

int FUN_8008d020(int param_1,undefined4 param_2)

{
  int destinationLength;

  destinationLength = FUN_8008cfc4((char *)0x0);
  FUN_8008cedc((char *)(void *)(uintptr_t)((uintptr_t)param_1 + destinationLength), (char *)(void *)(uintptr_t)param_2);
  return param_1;
}

int FUN_8008d060(char *param_1,char *param_2,int param_3)

{
  int firstChar;
  int secondChar;

  if (param_3 != 0) {
    do {
      secondChar = (int)*param_1;
      param_1 = param_1 + 1;
      firstChar = (int)*param_2;
      param_2 = param_2 + 1;
      if (secondChar - 0x61U < 0x1a) {
        secondChar = (secondChar + -0x20) * 0x1000000 >> 0x18;
      }
      if (firstChar - 0x61U < 0x1a) {
        firstChar = (firstChar + -0x20) * 0x1000000 >> 0x18;
      }
      if (secondChar != firstChar) {
        return secondChar - firstChar;
      }
      param_3 = param_3 + -1;
    } while ((secondChar != 0) && (param_3 != 0));
  }
  return 0;
}

int FUN_8008d0d0(int param_1)

{
  int currentBlock;
  int bestBlock;

  bestBlock = 0;
  currentBlock = (int)(uintptr_t)DAT_800a8d50;
  if (DAT_800a8d50 != 0) {
    do {
      if (((*(int *)(void *)(uintptr_t)((uintptr_t)currentBlock + 0xc) == 0) && (((param_1 + 0xfU) & 0xfffffff0) <= *(uint *)(void *)(uintptr_t)((uintptr_t)currentBlock + 8)))
         && ((bestBlock == 0 || (*(uint *)(void *)(uintptr_t)((uintptr_t)currentBlock + 8) < *(uint *)(void *)(uintptr_t)((uintptr_t)bestBlock + 8))))) {

        bestBlock = currentBlock;
      }
      currentBlock = *(int *)(void *)(uintptr_t)((uintptr_t)currentBlock + 4);
    } while (currentBlock != 0);
  }
  if (bestBlock == 0) {
    bestBlock = 0;
  }
  else {
    FUN_8008df04((undefined4 *)(void *)(uintptr_t)bestBlock, 0);
    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)bestBlock + 0xc) = 1;
    bestBlock = bestBlock + 0x10;
  }
  return bestBlock;
}

int FUN_8008d180(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}

undefined4 FUN_8008d194(byte *param_1,byte *param_2,int param_3)

{
  byte firstByte;
  byte secondByte;

  if (param_3 != 0) {
    do {
      firstByte = *param_1;
      param_1 = param_1 + 1;
      secondByte = *param_2;
      param_2 = param_2 + 1;
      if (firstByte < secondByte) {
        return 0xffffffff;
      }
      param_3 = param_3 + -1;
      if (secondByte < firstByte) {
        return 1;
      }
    } while (param_3 != 0);
  }
  return 0;
}

int FUN_8008d1e4(code_output_func outputFunction,uint formatFlags,int fieldWidth,int precision,char *inputString)

{
  int stringLength;
  int outputResult;
  int loopCounter;
  undefined4 paddingChar;
  int totalOutput;
  int currentCount;

  currentCount = 0;
  totalOutput = 0;

  stringLength = FUN_8008cfc4(inputString);

  if ((-1 < precision) && (precision < stringLength)) {
    stringLength = precision;
  }

  fieldWidth = fieldWidth - stringLength;
  if (fieldWidth < 0) {
    fieldWidth = 0;
  }

  if ((formatFlags & 1) == 0) {
    currentCount = fieldWidth;
    fieldWidth = 0;
  }

  paddingChar = 0x20;
  if ((formatFlags & 4) != 0) {
    paddingChar = 0x30;
  }

  loopCounter = 0;
  if (0 < currentCount) {
    do {
      outputResult = (*outputFunction)(paddingChar);
      loopCounter = loopCounter + 1;
      if (outputResult < 0) {
        return -1;
      }
      totalOutput = totalOutput + 1;
    } while (loopCounter < currentCount);
  }

  currentCount = 0;
  if (0 < stringLength) {
    do {
      outputResult = (*outputFunction)((int)*inputString);
      inputString = inputString + 1;
      if (outputResult < 0) {
        return -1;
      }
      currentCount = currentCount + 1;
      totalOutput = totalOutput + 1;
    } while (currentCount < stringLength);
  }

  stringLength = 0;
  if (0 < fieldWidth) {
    do {
      currentCount = (*outputFunction)(0x20);
      stringLength = stringLength + 1;
      if (currentCount < 0) {
        return -1;
      }
      totalOutput = totalOutput + 1;
    } while (stringLength < fieldWidth);
  }

  return totalOutput;
}

int FUN_8008d338(code_output_func outputFunction,uint formatFlags,int fieldWidth,int precision,char signChar,char *numberString,
                uint numberLength,uint base)

{
  char hexChar;
  uint combinedLength;
  int outputResult;
  int totalOutput;
  char *currentChar;
  uint paddingCount;
  int prefixLength;
  int loopCounter;
  int rightPadding;
  char prefixBuffer [64];

  loopCounter = 0;
  prefixLength = 0;
  totalOutput = 0;

  if (fieldWidth < 0) {
    fieldWidth = 0;
  }
  if (precision < 0) {
    precision = 1;
  }

  if ((int)base < 0xb) {
    if ((signChar != '-') && ((formatFlags & 2) != 0)) {
      signChar = '+';
    }
    if (signChar != '\0') {
      prefixBuffer[0] = signChar;
      prefixLength = 1;
    }
  }

  if ((formatFlags & 0x10) != 0) {
    if (7 < (int)base) {
      prefixBuffer[prefixLength] = '0';
      prefixLength = prefixLength + 1;
    }
    if (0xf < (int)base) {
      currentChar = prefixBuffer + prefixLength;
      prefixLength = prefixLength + 1;
      if ((base & 1) == 0) {
        hexChar = 'x';
      }
      else {
        hexChar = 'X';
      }
      *currentChar = hexChar;
    }
  }

  paddingCount = precision - numberLength;
  combinedLength = numberLength | paddingCount;
  if ((int)paddingCount < 0) {
    paddingCount = 0;
    combinedLength = numberLength;
  }
  rightPadding = loopCounter;
  if (combinedLength == 0) {
    prefixLength = 0;
  }
  else {
    outputResult = (fieldWidth - (prefixLength + numberLength)) - paddingCount;
    fieldWidth = totalOutput;
    if (outputResult < 0) {
      paddingCount = paddingCount + outputResult;
      if ((int)paddingCount < 1) {
        paddingCount = (uint)(numberLength == 0);
      }
    }
    else {
      rightPadding = outputResult;
      if (((formatFlags & 1) == 0) && (fieldWidth = outputResult, rightPadding = loopCounter, (formatFlags & 4) != 0)) {
        paddingCount = paddingCount + outputResult;
        fieldWidth = totalOutput;
      }
    }
  }

  loopCounter = 0;
  totalOutput = 0;
  if (0 < fieldWidth) {
    do {
      outputResult = (*outputFunction)(0x20);
      loopCounter = loopCounter + 1;
      if (outputResult < 0) {
        return -1;
      }
      totalOutput = totalOutput + 1;
    } while (loopCounter < fieldWidth);
  }

  loopCounter = 0;
  if (prefixLength != 0) {
    currentChar = prefixBuffer;
    do {
      outputResult = (*outputFunction)((int)*currentChar);
      currentChar = currentChar + 1;
      if (outputResult < 0) {
        return -1;
      }
      loopCounter = loopCounter + 1;
      totalOutput = totalOutput + 1;
    } while (loopCounter < prefixLength);
  }

  prefixLength = 0;
  if (0 < (int)paddingCount) {
    do {
      loopCounter = (*outputFunction)(0x30);
      prefixLength = prefixLength + 1;
      if (loopCounter < 0) {
        return -1;
      }
      totalOutput = totalOutput + 1;
    } while (prefixLength < (int)paddingCount);
  }

  prefixLength = 0;
  if (0 < (int)numberLength) {
    do {
      loopCounter = (*outputFunction)((int)*numberString);
      numberString = numberString + 1;
      if (loopCounter < 0) {
        return -1;
      }
      prefixLength = prefixLength + 1;
      totalOutput = totalOutput + 1;
    } while (prefixLength < (int)numberLength);
  }

  prefixLength = 0;
  if (0 < rightPadding) {
    do {
      loopCounter = (*outputFunction)(0x20);
      prefixLength = prefixLength + 1;
      if (loopCounter < 0) {
        return -1;
      }
      totalOutput = totalOutput + 1;
    } while (prefixLength < rightPadding);
  }

  return totalOutput;
}

int FUN_8008d590(code_output_func outputFunction,uint formatFlags,int fieldWidth,int precision,uint mantissaHigh,
                 uint mantissaLow,char signChar,int exponent)

{
  bool hasSignificantDigit;
  int digitCount;
  char *bufferPos;
  char currentDigit;
  uint powerOf10High;
  uint powerOf10Low;
  int position;
  int maxPrecision;
  int bufferIndex;
  int nextPosition;
  char digitBuffer [64];

  if (((exponent == 0) || (precision < 0)) || (maxPrecision = 0x12 - precision, maxPrecision < 0)) {
    maxPrecision = 0x13;
  }
  hasSignificantDigit = false;
  bufferIndex = 0;
  digitCount = 0;
  position = 0;

  do {

    powerOf10High = *(uint *)(void *)(uintptr_t)((uintptr_t)&DAT_800a8cb8 + (digitCount * sizeof(uint)));
    powerOf10Low = *(uint *)(void *)(uintptr_t)((uintptr_t)&DAT_800a8cbc + (digitCount * sizeof(uint)));
    digitCount = 0;
    nextPosition = position + 1;

    for (; (powerOf10Low <= mantissaLow && ((powerOf10Low != mantissaLow || (powerOf10High <= mantissaHigh))));
        mantissaHigh = mantissaHigh - powerOf10High) {
      digitCount = digitCount + 1;
      mantissaLow = (mantissaLow - powerOf10Low) - (uint)(mantissaHigh < powerOf10High);
    }

    currentDigit = (char)digitCount + '0';

    if (((hasSignificantDigit) || (digitCount != 0)) || (position == maxPrecision)) {
      bufferPos = digitBuffer + bufferIndex;
      if (position == maxPrecision) {
        *bufferPos = currentDigit;
        bufferIndex = bufferIndex + 1;
        currentDigit = '.';
        bufferPos = digitBuffer + bufferIndex;
      }
      *bufferPos = currentDigit;
      bufferIndex = bufferIndex + 1;
      hasSignificantDigit = true;
    }

    digitCount = nextPosition * 8;
    position = nextPosition;
  } while (nextPosition < 0x13);

  return FUN_8008d338(outputFunction,formatFlags,fieldWidth,precision,(int)signChar,digitBuffer,bufferIndex,10);
}

int FUN_8008d6e4(code_output_func outputFunction,uint formatFlags,int fieldWidth,int precision,uint mantissaHigh,uint mantissaLow,uint signChar)

{
  bool hasSignificantDigit;
  uint currentDigit;
  uint bitPosition;
  int bufferIndex;
  uint numberHigh;
  uint numberLow;
  char digitBuffer [64];

  (void)formatFlags;
  (void)fieldWidth;
  (void)precision;
  numberHigh = mantissaHigh;
  numberLow = mantissaLow;
  bufferIndex = 1;
  bitPosition = 0x3f;
  digitBuffer[0] = (char)signChar;
  hasSignificantDigit = false;

  do {

    if ((int)(bitPosition << 0x1a) < 0) {

      currentDigit = numberLow >> (bitPosition & 0x1f);
    }
    else {

      currentDigit = numberHigh >> (bitPosition & 0x1f);
      if (bitPosition << 0x1a != 0) {
        currentDigit = currentDigit | numberLow << (-bitPosition & 0x1f);
      }
    }

    if ((hasSignificantDigit) || ((currentDigit & 7) != 0)) {
      hasSignificantDigit = true;
      digitBuffer[bufferIndex] = (char)(currentDigit & 7) + '0';
      bufferIndex = bufferIndex + 1;
    }

    bitPosition = bitPosition - 3;
  } while (-1 < (int)bitPosition);

  FUN_8008d338(outputFunction, formatFlags, fieldWidth, precision, (char)signChar, digitBuffer, bufferIndex, 8);
  return 0;
}

int FUN_8008d7a4(code_output_func outputFunction,uint formatFlags,int fieldWidth,int precision,uint mantissaHigh,uint mantissaLow,int hexChar)

{
  bool hasSignificantDigit;
  uint currentDigit;
  char *bufferPos;
  uint bitPosition;
  int bufferIndex;
  char *hexChars;
  uint numberHigh;
  uint numberLow;
  int caseFlag;
  char digitBuffer [64];

  numberHigh = mantissaHigh;
  numberLow = mantissaLow;
  caseFlag = hexChar;
  bufferIndex = 0;

  if (caseFlag == 0x78) {
    hexChars = "0123456789abcdef";
  }
  else {
    hexChars = "0123456789ABCDEF";
  }
  hasSignificantDigit = false;
  bitPosition = 0x3c;

  do {

    if ((int)(bitPosition << 0x1a) < 0) {

      currentDigit = numberLow >> (bitPosition & 0x1f);
    }
    else {

      currentDigit = numberHigh >> (bitPosition & 0x1f);
      if (bitPosition << 0x1a != 0) {
        currentDigit = currentDigit | numberLow << (-bitPosition & 0x1f);
      }
    }

    if ((hasSignificantDigit) || ((currentDigit & 0xf) != 0)) {
      hasSignificantDigit = true;
      bufferPos = digitBuffer + bufferIndex;
      bufferIndex = bufferIndex + 1;
      *bufferPos = hexChars[currentDigit & 0xf];
    }

    bitPosition = bitPosition - 4;
  } while (-1 < (int)bitPosition);

  return FUN_8008d338(outputFunction, formatFlags, fieldWidth, precision, (char)0, digitBuffer, bufferIndex, 16);
}

int FUN_8008d888(char **stringPointer)

{
  char currentChar;
  char *stringPos;
  int result;

  stringPos = *stringPointer;
  result = 0;
  currentChar = *stringPos;

  while ((int)currentChar - 0x30U < 10) {

    result = result * 10 + -0x30 + (int)currentChar;
    stringPos = stringPos + 1;
    currentChar = *stringPos;
  }

  *stringPointer = stringPos;
  return result;
}

int FUN_8008d8d4(code_output_func outputFunction,byte *formatString,uint *argumentList)

{
  byte currentChar;
  uint formatFlags;
  int outputResult;
  int totalOutput;
  int iVar4;
  uint uVar13;
  byte *local_res4 [1];
  byte *param_2;
  uint uVar3;
  uint *param_3;
  int iVar14;
  byte bVar1 __attribute__((unused));
  byte *pbVar6;
  byte *pbVar5;
  uint uVar10;
  uint uVar9;
  byte bVar2;
  uint uVar7;
  uint uVar8;
  uint uVar11;
  uint uVar12;

  totalOutput = 0;
  currentChar = *formatString;
  formatString = formatString + 1;
  param_2 = formatString;
  param_3 = argumentList;
  iVar14 = 0;

joined_r0x8008d90c:
  outputResult = (int)(char)currentChar;
  if (outputResult == 0) {
    return totalOutput;
  }

  formatFlags = (uint)(outputResult == 0x25);
  if (*formatString != 0x25) {
    formatFlags = 0;
  }
  (void)formatFlags;  // Used indirectly via uVar13
  iVar4 = outputResult;
  uVar3 = 0;
  if ((iVar4 == 0x25) && (uVar13 = 0, local_res4[0] = param_2, uVar3 == 0)) {
    do {
      iVar4 = (int)(char)*local_res4[0];
      switch((int)((*local_res4[0] - 0x20) * 0x1000000) >> 0x18) {
      case 0:
        uVar13 = uVar13 | 8;
        break;
      default:
        goto switchD_8008d9b0_caseD_1;
      case 3:
        uVar13 = uVar13 | 0x10;
        break;
      case 0xb:
        uVar13 = uVar13 | 2;
        break;
      case 0xd:
        uVar13 = uVar13 | 1;
        break;
      case 0x10:
        uVar13 = uVar13 | 4;
      }
      local_res4[0] = local_res4[0] + 1;
    } while( true );
  }
  local_res4[0] = param_2 + uVar3;
  iVar4 = (*outputFunction)(iVar4);
  if (iVar4 != 0) {
    return -1;
  }
  iVar14 = iVar14 + 1;
  totalOutput = totalOutput + 1;
  param_2 = local_res4[0];
  goto LAB_8008dd34;
switchD_8008d9b0_caseD_1:
  uVar3 = 0xffffffff;
  if (iVar4 - 0x30U < 10) {
    uVar3 = FUN_8008d888((char **)local_res4);
    bVar1 = *local_res4[0];
LAB_8008da30:
    iVar4 = (int)(char)bVar1;
  }
  else if (iVar4 == 0x2a) {
    uVar3 = *param_3;
    param_3 = param_3 + 1;
    bVar1 = local_res4[0][1];
    local_res4[0] = local_res4[0] + 1;
    goto LAB_8008da30;
  }
  uVar10 = 0xffffffff;
  if (iVar4 == 0x2e) {
    pbVar6 = local_res4[0] + 1;
    if ((int)(char)*pbVar6 - 0x30U < 10) {
      local_res4[0] = local_res4[0] + 1;
      uVar10 = FUN_8008d888((char **)local_res4);
    }
    else {
      pbVar5 = local_res4[0] + 2;
      local_res4[0] = local_res4[0] + 1;
      if ((char)*pbVar6 == 0x2a) {
        uVar3 = *param_3;
        param_3 = param_3 + 1;
        local_res4[0] = pbVar5;
      }
    }
  }
  bVar1 = *local_res4[0];
  pbVar6 = local_res4[0] + 1;
  if (bVar1 == 0x68) {
    uVar9 = 1;
  }
  else if ((char)bVar1 < 'i') {
    uVar9 = 3;
    if (bVar1 != 0x4c) {
LAB_8008dad8:
      uVar9 = 0;
      pbVar6 = local_res4[0];
    }
  }
  else {
    uVar9 = 2;
    if (bVar1 != 0x6c) goto LAB_8008dad8;
  }
  local_res4[0] = pbVar6;
  bVar1 = *local_res4[0];
  iVar4 = (int)(char)bVar1;
  bVar2 = *local_res4[0];
  local_res4[0] = local_res4[0] + 1;
  switch((int)((bVar2 - 0x45) * 0x1000000) >> 0x18) {
  case 0:
  case 2:
  case 0x20:
  case 0x21:
  case 0x22:
    if (1 < uVar9) {
      param_3 = param_3 + 2;
      param_2 = local_res4[0];
      break;
    }
  case 0x29:
  case 0x2b:
    param_3 = param_3 + 1;
    param_2 = local_res4[0];
    break;
  case 0x13:
  case 0x1f:
  case 0x24:
  case 0x2a:
  case 0x2f:
  case 0x30:
  case 0x33:
    if (uVar9 == 1) {
      uVar9 = (uint)*(ushort *)param_3 << 0x10;
      uVar7 = (int)uVar9 >> 0x10;
      uVar8 = 0xffff;
LAB_8008dba4:
      param_3 = param_3 + 1;
      uVar9 = (int)uVar9 >> 0x1f;
      uVar8 = uVar7 & uVar8;
      uVar11 = 0;
    }
    else {
      if (uVar9 != 3) {
        uVar7 = *param_3;
        uVar8 = 0xffffffff;
        uVar9 = uVar7;
        goto LAB_8008dba4;
      }
      uVar7 = *param_3;
      uVar9 = param_3[1];
      param_3 = param_3 + 2;
      uVar8 = uVar7;
      uVar11 = uVar9;
    }
    uVar12 = 0;
    if (((int)uVar9 < 0) && (((iVar4 == 100 || (iVar4 == 0x69)) || (iVar4 == 0x74)))) {
      uVar8 = -uVar7;
      uVar11 = -(uint)(uVar8 != 0) - uVar9;
      uVar12 = 0x2d;
    }
    switch(bVar1) {
    case 0x58:
    case 0x78:
      iVar4 = FUN_8008d7a4(outputFunction,uVar13,uVar3,uVar10,uVar8,uVar11,iVar4);
      break;
    default:
      iVar4 = 0;
      break;
    case 100:
    case 0x75:
      iVar4 = FUN_8008d590(outputFunction,uVar13,uVar3,uVar10,uVar8,uVar11,uVar12,0);
      break;
    case 0x69:
    case 0x6f:
      iVar4 = FUN_8008d6e4(outputFunction,uVar13,uVar3,uVar10,uVar8,uVar11,uVar12);
      break;
    case 0x74:
      iVar4 = FUN_8008d590(outputFunction,uVar13,uVar3,uVar10,uVar8,uVar11,uVar12,1);
    }
    iVar14 = iVar14 + iVar4;
    param_2 = local_res4[0];
    if (iVar4 < 0) {
      return -1;
    }
    break;
  case 0x1e:
    iVar4 = (*outputFunction)((int)*(char *)param_3);
    param_3 = param_3 + 1;
    if (iVar4 < 0) {
      return -1;
    }
    iVar14 = iVar14 + 1;
    param_2 = local_res4[0];
    break;
  case 0x2e:
    iVar4 = FUN_8008d1e4(outputFunction,uVar13,uVar3,uVar10,(char *)(void *)(uintptr_t)*param_3);
    param_3 = param_3 + 1;
    if (iVar4 < 0) {
      return -1;
    }
    iVar14 = iVar14 + iVar4;
    param_2 = local_res4[0];
  }
LAB_8008dd34:
  local_res4[0] = param_2;
  bVar1 = *local_res4[0];
  param_2 = local_res4[0] + 1;
  goto joined_r0x8008d90c;
}

void FUN_8008dd74(undefined4 *poolPointer,uint poolSize)

{
  int availableSize;

  if (poolSize < 0x10) {
    availableSize = 0;
  }
  else {
    availableSize = poolSize - 0x10;
  }

  DAT_800a8d50 = (undefined4)(uintptr_t)poolPointer;
  DAT_800a8d54 = poolSize;

  *poolPointer = 0;
  poolPointer[1] = 0;
  poolPointer[2] = availableSize;
  poolPointer[3] = 0;
  return;
}

void FUN_8008ddb4(void)

{
  uint memoryAddress;
  int poolSize;

  poolSize = 0;

  memoryAddress = (((uintptr_t)DAT_80091168 & 0xfffffff0) - 0x10000) | 0x80000000;

  if (-0x7fe0f2a0 < (int)memoryAddress) {
    poolSize = memoryAddress + 0x7fe0f2a0;
  }

  FUN_8008dd74(&DAT_801f0d60,poolSize);
  return;
}

void FUN_8008de24(int blockAddress)

{
  undefined4 *nextBlock;
  undefined4 *currentBlock;
  undefined4 *previousBlock;

  *(undefined4 *)(void *)(uintptr_t)((uintptr_t)blockAddress - 4) = 0;

  nextBlock = *(undefined4 **)(void *)(uintptr_t)((uintptr_t)blockAddress - 0x10);
  previousBlock = (undefined4 *)(void *)(uintptr_t)((uintptr_t)blockAddress - 0x10);

  while ((currentBlock = nextBlock, currentBlock != (undefined4 *)0x0 && (currentBlock[3] == 0))) {
    previousBlock = currentBlock;
    nextBlock = (undefined4 *)(void *)(uintptr_t)*currentBlock;
  }

  while ((previousBlock[1] != 0 && (*(int *)(void *)(uintptr_t)((uintptr_t)previousBlock[1] + 0xc) == 0))) {
    FUN_8008df80((int)(uintptr_t)previousBlock);
  }
  return;
}

void FUN_8008dec4(int param_1, int param_2, undefined4 *param_3)

{
  int outputLength;

  (void)param_2;
  (void)param_3;
  DAT_801c9898 = param_1;

  outputLength = FUN_8008d8d4((code_output_func)(void *)(uintptr_t)&LAB_8008dea4, (byte *)0x0, (uint *)0x0);

  *(undefined *)(void *)(uintptr_t)((uintptr_t)param_1 + outputLength) = 0;
  return;
}

void FUN_8008df04(undefined4 *poolPointer,int requestedSize)

{
  int newBlockSize;
  int *previousBlock;
  int newBlockAddress;

  if (requestedSize + 0x20U <= (uint)poolPointer[2]) {

    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x10) = *poolPointer;
    newBlockAddress = (int)(uintptr_t)poolPointer + requestedSize + 0x10;
    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x14) = poolPointer[1];
    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x18) = poolPointer[2];
    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x1c) = poolPointer[3];

    previousBlock = (int *)(void *)(uintptr_t)poolPointer[1];
    poolPointer[2] = requestedSize;
    newBlockSize = *(int *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x18);
    poolPointer[1] = (undefined4)(uintptr_t)newBlockAddress;
    *(undefined4 **)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x10) = poolPointer;
    *(undefined4 *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x1c) = 0;
    *(int *)(void *)(uintptr_t)((uintptr_t)poolPointer + requestedSize + 0x18) = (newBlockSize + -0x10) - requestedSize;

    if (previousBlock != (int *)0x0) {
      *previousBlock = newBlockAddress;
    }
  }
  return;
}

void FUN_8008df80(int blockPointer)

{
  int *nextBlockPointer;
  int nextBlockAddress;

  nextBlockAddress = *(int *)(void *)(uintptr_t)((uintptr_t)blockPointer + 4);
  if (nextBlockAddress != 0) {

    nextBlockPointer = *(int **)(void *)(uintptr_t)((uintptr_t)nextBlockAddress + 4);
    if (nextBlockPointer != (int *)0x0) {
      *nextBlockPointer = blockPointer;
    }
    *(int **)(void *)(uintptr_t)((uintptr_t)blockPointer + 4) = nextBlockPointer;

    *(int *)(void *)(uintptr_t)((uintptr_t)blockPointer + 8) = *(int *)(void *)(uintptr_t)((uintptr_t)blockPointer + 8) + 0x10 + *(int *)(void *)(uintptr_t)((uintptr_t)nextBlockAddress + 8);
  }
  return;
}

// Note: bcopy, strncmp, printf are standard library functions
// These implementations are stubs that will be replaced by standard library
// Using #undef to avoid conflicts with standard library declarations
#undef bcopy
#undef strncmp
#undef printf

static void * bcopy_stub(uchar *source,uchar *destination,int size)

{
  void *result;

  (void)source;
  (void)destination;
  (void)size;
  result = (void *)(uintptr_t)(*(code_int_ret)(void *)(uintptr_t)&LAB_000000a0)();
  return result;
}

static int strncmp_stub(char *string1,char *string2,int maxLength)

{
  int result;

  (void)string1;
  (void)string2;
  (void)maxLength;
  result = (*(code_int_ret)(void *)(uintptr_t)&LAB_000000a0)();
  return result;
}

void * bzero_stub(uchar *memory,int size)

{
  void *result;

  (void)memory;
  (void)size;
  result = (void *)(uintptr_t)(*(code_int_ret)(void *)(uintptr_t)&LAB_000000a0)();
  return result;
}

// printf is declared in stdio.h - this is a stub implementation
int printf_stub(char *formatString,...)

{
  int iVar1;
  (void)formatString;  // Parameter unused but required by call sites
  iVar1 = (*(code_int_ret)&LAB_000000a0)();
  return iVar1;
}

void FUN_8008e00c(char *param_1)

{
  (void)param_1;  // Parameter unused but required by call sites
  (*(code_int_ret)(void *)(uintptr_t)&SUB_000000b0)();
  return;
}

void FUN_80092424(void)

{

  syscall(0);

  halt_baddata();
}

void FUN_80094f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 in_v0;
  undefined4 in_v1;
  undefined4 in_t2;
  undefined4 in_t3;
  undefined4 in_t6;
  undefined4 in_t7;
  undefined4 unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int in_t9;
  int in_k0;
  int in_k1;
  int unaff_s8;
  int unaff_retaddr;

  (void)param_1;
  (void)param_2;

  uVar1 = getCopReg(2,unaff_s4);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s3 - 0x592) = uVar1;
  uVar1 = getCopReg(2,0);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s4 - 0x586) = uVar1;
  uVar1 = getCopReg(2,in_t3);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s4 - 0x57b) = uVar1;
  uVar1 = getCopReg(2,unaff_s7);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s4 - 0x56f) = uVar1;
  uVar1 = getCopReg(2,in_v1);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s5 - 0x563) = uVar1;
  uVar1 = getCopReg(2,in_t7);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s5 - 0x557) = uVar1;
  uVar1 = getCopReg(2,in_k1);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s5 - 0x54b) = uVar1;
  uVar1 = getCopReg(2,param_4);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s6 - 0x53f) = uVar1;
  uVar1 = getCopReg(2,unaff_s2);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s6 - 0x533) = uVar1;
  uVar1 = getCopReg(2,unaff_s8);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s6 - 0x528) = uVar1;
  uVar1 = getCopReg(2,in_t2);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s7 - 0x51c) = uVar1;
  uVar1 = getCopReg(2,unaff_s6);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s7 - 0x510) = uVar1;
  uVar1 = getCopReg(2,in_v0);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_t8 - 0x504) = uVar1;
  uVar1 = getCopReg(2,in_t6);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_t8 - 0x4f8) = uVar1;
  uVar1 = getCopReg(2,in_k0);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_t8 - 0x4ec) = uVar1;
  uVar1 = getCopReg(2,param_3);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_t9 - 0x4e0) = uVar1;
  uVar1 = getCopReg(2,unaff_s2);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_t9 - 0x4d4) = uVar1;
  uVar1 = getCopReg(2,unaff_s8);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_t9 - 0x4c8) = uVar1;
  uVar1 = getCopReg(2,in_t2);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_k0 - 0x4bc) = uVar1;
  uVar1 = getCopReg(2,unaff_s6);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_k0 - 0x4b0) = uVar1;
  uVar1 = getCopReg(2,in_v0);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_k1 - 0x4a4) = uVar1;
  uVar1 = getCopReg(2,in_t6);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_k1 - 0x498) = uVar1;
  uVar1 = getCopReg(2,in_k0);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)in_k1 - 0x48c) = uVar1;
  (void)getCopReg(2,param_3);
  (void)getCopReg(2,unaff_s2);
  (void)getCopReg(2,unaff_s8);
  (void)getCopReg(2,in_t2);
  (void)getCopReg(2,unaff_s6);
  uVar1 = getCopReg(2,in_v1);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s8 - 0x443) = uVar1;
  uVar1 = getCopReg(2,in_t7);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s8 - 0x437) = uVar1;
  uVar1 = getCopReg(2,in_k1);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_s8 - 0x42b) = uVar1;
  uVar1 = getCopReg(2,param_4);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_retaddr - 0x41f) = uVar1;
  uVar1 = getCopReg(2,unaff_s3);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_retaddr - 0x413) = uVar1;
  uVar1 = getCopReg(2,unaff_retaddr);
  *(undefined8 *)(void *)(uintptr_t)((uintptr_t)unaff_retaddr - 0x407) = uVar1;

  halt_baddata();
}

void FUN_8009539c(void)

{
  int in_t8;

  if (in_t8 < 0x705) {
    trap();
  }

  halt_baddata();
}

void FUN_80095a22(void)

{

  halt_baddata();
}

void FUN_80095a82(void)

{
  int in_v0;
  undefined in_t4;
  undefined *in_t5;
  undefined unaff_s0;

  *(undefined *)(void *)(uintptr_t)((uintptr_t)in_v0 - 0x7ff7) = in_t4;
  *in_t5 = unaff_s0;

  halt_baddata();
}

void FUN_80095e90(void)

{

  halt_unimplemented();
}

void FUN_80096500(void)

{
  int in_v0;
  int in_a3;

  if (in_a3 != in_v0) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_800966a0(void)

{

  halt_baddata();
}

void FUN_80096960(void)

{
  int in_at;
  int in_t0;

  if (in_t0 != in_at) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_80096b64(void)

{

  halt_baddata();
}

void FUN_80096dae(void)

{
  int in_at;
  int in_t0;

  if (in_t0 != in_at) {

    halt_baddata();
  }

  halt_baddata();
}

void FUN_80097320(void)

{

  halt_baddata();
}

void FUN_800987c4(void)

{

  halt_baddata();
}

void FUN_800987d4(void)

{

  halt_baddata();
}

void FUN_80098a74(void)

{

  halt_baddata();
}

void FUN_8009a718(void)

{
  int in_zero;

  *(undefined *)(void *)(uintptr_t)((uintptr_t)in_zero + 0x10) = 0;

  halt_baddata();
}

void FUN_8009aad0(void)

{

  halt_baddata();
}

void FUN_8009abe8(void)

{

  halt_baddata();
}

void FUN_8009ade0(void)

{

  halt_unimplemented();
}

void FUN_8009b2be(void)

{

  halt_baddata();
}

void FUN_8009b3f0(void)

{

  halt_baddata();
}

void FUN_8009b460(void)

{

  halt_baddata();
}

void FUN_8009b518(void)

{

  halt_unimplemented();
}

void FUN_8009b6c4(void)

{

  halt_baddata();
}

void FUN_8009be02(undefined4 param_1,undefined4 param_2,int param_3)

{
  (void)param_1;
  (void)param_2;
  prefetch((void *)(uintptr_t)(param_3 + 0x2460),0xd);

  halt_baddata();
}

void FUN_8009ca54(void)

{

  halt_baddata();
}

void FUN_8009d6e6(void)

{

  halt_baddata();
}

void FUN_8009d94c(void)

{

  halt_baddata();
}

void FUN_8009d9bc(void)

{

  halt_unimplemented();
}

void FUN_8009dace(void)

{
  (*(code *)0x0)();
  return;
}

void FUN_8009de5a(void)

{
  (*(code *)0x0)();
  return;
}

void FUN_8009ebf8(void)

{

  halt_baddata();
}

void FUN_8009f244(void)

{

  halt_baddata();
}

void FUN_8009f4f8(void)

{
  undefined4 in_t0 = 0;

  func_0x80410040(in_t0);

  halt_baddata();
}

void FUN_8009f568(void)

{

  halt_unimplemented();
}

void FUN_8009fc30(void)

{
  uint in_at;

  gte_ldVXY0((undefined4 *)(void *)(uintptr_t)((int)*(char *)(void *)(uintptr_t)((0 << (in_at & 0x1f)) + 0x20)));

  halt_baddata();
}

void FUN_8009fdd8(void)

{

  halt_baddata();
}

void FUN_8009fe06(void)

{

  halt_baddata();
}

void FUN_800a0018(void)

{

  halt_baddata();
}

undefined4 FUN_arcade__80010000(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = (int)(uintptr_t)_LAB_80092e6a_2 + 0x108;

  if (param_2 == 1) {
    iVar1 = (int)(uintptr_t)_LAB_80092e6a_2 + 0x110;
  }

  FUN_800780f8(iVar1, (undefined4 *)&param_1);
  return (undefined4)iVar1;
}

int FUN_arcade__8001003c(undefined4 param_1,int param_2)

{
  undefined auStack_10 [4];
  int local_c;

  FUN_80060bec(param_1, (int *)auStack_10, &local_c);

  return (int)*(char *)(void *)(uintptr_t)((uintptr_t)local_c + param_2);
}

int FUN_arcade__80010074(int value1,int value2,int value3)

{

  if (value2 < value1) {

    if (value1 < value3) {
      return value3;
    }
  }
  else {

    value1 = value3;

    if (value3 <= value2) {
      return value2;
    }
  }

  return value1;
}

int FUN_arcade__800100b0(int value1,int value2,int value3)

{

  if (value1 < value2) {

    if (value3 < value1) {
      return value3;
    }
  }
  else {

    value1 = value3;

    if (value2 <= value3) {
      return value2;
    }
  }

  return value1;
}

void FUN_arcade__800100ec(uint rgbColor,undefined2 *outputBuffer)

{
  bool isWithinRange __attribute__((unused));
  uint maxChannelValue;
  int colorCalculation1;
  int colorCalculation2;
  int saturationValue;
  uint greenChannel;
  uint blueChannel;
  uint redChannel;
  int redCalculation;
  int greenCalculation;
  int iVar3;
  byte bVar1 __attribute__((unused));
  int iVar4;
  int iVar5;
  uint uVar2;

  // Initialize variables
  iVar4 = 0;
  iVar5 = 0;
  uVar2 = 0;

  redChannel = rgbColor & 0x1f;
  greenChannel = (rgbColor & 0x3e0) >> 5;
  blueChannel = (rgbColor & 0x7c00) >> 10;

  maxChannelValue = FUN_arcade__80010074(redChannel, greenChannel, blueChannel);
  iVar3 = FUN_arcade__800100b0(redChannel, greenChannel, blueChannel);

  if (maxChannelValue == 0) {
    saturationValue = 0;
  }
  else {

    saturationValue = (int)((maxChannelValue - iVar3) * 0x20) / (int)maxChannelValue;
  }

  colorCalculation2 = 0;

  if (saturationValue != 0) {
    colorCalculation1 = maxChannelValue - iVar3;

    redCalculation = (int)((maxChannelValue - redChannel) * 0x20) / colorCalculation1;
    greenCalculation = (int)((maxChannelValue - greenChannel) * 0x20) / colorCalculation1;
    colorCalculation1 = (int)((maxChannelValue - blueChannel) * 0x20) / colorCalculation1;

    if (redChannel == maxChannelValue) {

      colorCalculation2 = colorCalculation1 - greenCalculation;
    }
    if (greenChannel == maxChannelValue) {

      colorCalculation2 = redCalculation - (colorCalculation1 + -0x40);
    }
    colorCalculation1 = colorCalculation2 << 4;

    if (blueChannel == maxChannelValue) {

      colorCalculation2 = greenCalculation - (redCalculation + -0x80);
      colorCalculation1 = colorCalculation2 * 0x10;
    }

    colorCalculation2 = (colorCalculation1 - colorCalculation2) * 4;

    isWithinRange = colorCalculation2 < 0x2d00;
    if (colorCalculation2 < 0) {

      do {
        colorCalculation2 = colorCalculation2 + 0x2d00;
      } while (colorCalculation2 < 0);
      isWithinRange = colorCalculation2 < 0x2d00;
    }
    iVar4 = colorCalculation2;
    while (iVar4 >= 0x2d00) {
      iVar4 = iVar4 - 0x2d00;
    }
    iVar5 = (int)(colorCalculation2 / 0x2d00);
    uVar2 = saturationValue;
  }
  *outputBuffer = (short)(iVar4 >> 5);
  outputBuffer[1] = (short)iVar5;
  outputBuffer[2] = (short)uVar2;
  return;
}

ushort FUN_arcade__80010238
                 (undefined4 *outputData,undefined4 dataOffset,undefined4 dataTable,undefined4 *randomSeed,int *parameterArray,
                 int parameterCount)

{
  ushort parameterValue;
  undefined2 colorValue;
  uint dataTableSize;
  uint dataEntry;
  undefined4 *dataPointer;
  int dataIndex;
  int *parameterPointer;
  uint randomValue;
  char characterValue;
  uint dataId;
  int *currentParameter;
  int parameterIndex;
  undefined4 processedData;
  int retryCounter;
  undefined colorBuffer[2];
  short colorThreshold;
  int colorDataPointer1;
  int colorDataPointer2;
  ushort colorType;

  if (DAT_80092878 == 2) {
    dataOffset = DAT_80092870 + 0x10;
  }
  else {
    dataOffset = dataOffset + 0x100;
  }

  retryCounter = 0x40;

  dataTableSize = FUN_80078138((int)(uintptr_t)dataTable);
  if ((int)dataTableSize < 1) {
    return 0;
  }

  do {
    do {

      dataEntry = FUN_80083ae0(randomSeed);
      dataEntry = *(uint *)(void *)(uintptr_t)((uintptr_t)dataTable + (dataEntry % dataTableSize) * 4 + 4);
      dataId = dataEntry & 0xffff;
      colorType = (ushort)(dataEntry >> 0x1a);

      dataPointer = FUN_80078038((int)(uintptr_t)dataOffset, dataId - 1);
      dataIndex = FUN_80060b70(*dataPointer);
      parameterIndex = 0;
    } while (dataIndex != 1);

    currentParameter = parameterArray;

    while( true ) {
      if (parameterCount <= parameterIndex) {

        dataPointer = FUN_80078038((int)(uintptr_t)dataOffset, (dataEntry & 0xffff) - 1);
        processedData = *dataPointer;

        if (colorType != 0) {

          characterValue = "-0123456789abcdefghijklmnopqrstuvwxyz"[colorType];
          colorValue = FUN_80060d28(processedData, (int)characterValue);
          goto LAB_arcade__80010454;
        }

        dataTableSize = FUN_80060bec(processedData, &colorDataPointer1, &colorDataPointer2);
        retryCounter = 0;
        goto LAB_arcade__800103f0;
      }

      parameterValue = *(ushort *)(currentParameter + 2);
      parameterPointer = (int *)FUN_80078038((int)(uintptr_t)dataOffset, dataId - 1);

      if ((parameterValue == dataId || *currentParameter == *parameterPointer) &&
         (randomValue = FUN_80083ae0(randomSeed), (randomValue & 0x1f) < 0x1d && 0 < retryCounter)) {
        break;
      }

      currentParameter = currentParameter + 3;
      parameterIndex = parameterIndex + 1;
    }

    retryCounter = retryCounter + -1;
  } while( true );

  while (retryCounter < 2) {
LAB_arcade__800103f0:

    dataId = FUN_80083ae0(randomSeed);
    dataIndex = (dataId % dataTableSize) * 2;

    FUN_arcade__800100ec(*(undefined2 *)(void *)(uintptr_t)((uintptr_t)dataIndex + colorDataPointer1), (undefined2 *)colorBuffer);
    retryCounter = retryCounter + 1;

    if (5 < colorThreshold) break;
  }

  characterValue = *(char *)(void *)(uintptr_t)((uintptr_t)colorDataPointer2 + (dataId % dataTableSize));
  colorValue = *(undefined2 *)(void *)(uintptr_t)((uintptr_t)dataIndex + colorDataPointer1);

LAB_arcade__80010454:

  *outputData = processedData;
  *(char *)(void *)(uintptr_t)((uintptr_t)outputData + 5) = characterValue;
  *(undefined2 *)(void *)(uintptr_t)((uintptr_t)outputData + 6) = colorValue;
  *(short *)(void *)(uintptr_t)((uintptr_t)outputData + 2) = (short)dataEntry;

  return colorType;
}

void FUN_arcade__800104a8(int outputBuffer,undefined4 colorData,uint colorType,undefined4 randomSeed)

{
  char characterCode;
  undefined2 colorValue;
  uint dataSize;
  uint randomIndex;
  int colorDataPointer1;
  int colorDataPointer2;

  if (colorType == 0) {

    dataSize = FUN_80060bec(colorData,&colorDataPointer1,&colorDataPointer2);
    randomIndex = FUN_80083ae0((uint *)&randomSeed);
    colorValue = *(undefined2 *)(void *)(uintptr_t)((randomIndex % dataSize) * 2 + colorDataPointer1);
    *(undefined *)(void *)(uintptr_t)((uintptr_t)outputBuffer + 5) = *(undefined *)(void *)(uintptr_t)(colorDataPointer2 + randomIndex % dataSize);
  }
  else {

    characterCode = "-0123456789abcdefghijklmnopqrstuvwxyz"[colorType & 0x3f];
    colorValue = FUN_80060d28(colorData,(int)characterCode);
    *(char *)(void *)(uintptr_t)((uintptr_t)outputBuffer + 5) = characterCode;
  }

  *(undefined2 *)(void *)(uintptr_t)((uintptr_t)outputBuffer + 6) = colorValue;
  return;
}

undefined4 *
FUN_arcade__80010554
          (int processingMode,int dataSource,undefined2 *dataStructure,undefined4 param4,uint *paramArray1,
          undefined4 param6,uint *paramArray2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint local_88 [2];
  uint local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  uint *local_34;
  int local_30;
  int param_1;
  int param_2;
  undefined4 *param_3;
  undefined4 param_4;
  uint *param_5;
  undefined4 param_6;
  uint *param_7;
  undefined4 _LAB_80092e6e_2;
  undefined4 DAT_801d58b6;
  undefined4 DAT_801d586c;

  param_1 = processingMode;
  param_2 = dataSource;
  param_3 = (undefined4 *)dataStructure;
  param_4 = param4;
  param_5 = paramArray1;
  param_6 = param6;
  param_7 = paramArray2;

  local_3c = _LAB_80092e6a_2;
  if (param_2 != 0) {
    local_3c = _LAB_80092e6e_2;
  }

  if (param_1 == 0) {
    DAT_801d58b4 = 0;
    local_38 = (undefined2 *)param_3;
    local_40 = FUN_8007d23c(0);
    FUN_8008ce30(&DAT_801d585c,0,0x58c);

    {
      undefined1 temp_byte;
      memcpy(&temp_byte, &DAT_801c98e1, sizeof(undefined1));
      DAT_801d585c = (undefined4)temp_byte;
      memcpy(&temp_byte, &DAT_801c98e5, sizeof(undefined1));
      DAT_801d5860 = (undefined4)temp_byte;
    }
    DAT_801d5864 = 2;
    DAT_801d5865 = 2;
    DAT_801d5866 = 4;
    DAT_801d5867 = 5;
    DAT_801d5868 = 0;
    DAT_801d586a = 0;
    DAT_801d5869 = *(char *)(param_3 + 0x22) == '\0';
    DAT_801d586b = *(undefined *)(void *)(uintptr_t)((uintptr_t)param_3 + 0x45);

    uVar4 = FUN_8007816c(local_3c,*param_3);
    FUN_8005e548(&DAT_801d585c,uVar4);
    uVar4 = FUN_8007816c(local_3c,param_3[1]);
    FUN_8005e5f0(&DAT_801d585c,uVar4);
    uVar4 = FUN_8007816c(local_3c,param_3[0x4a]);
    FUN_8008cedc((char *)(void *)(uintptr_t)&DAT_801d58a0, (char *)(void *)(uintptr_t)uVar4);

    DAT_801d5dd8 = 0xffff;
    DAT_801d5dde = 0xffff;
    DAT_801d5de0 = 0xffff;
    DAT_801d5de2 = 0;
    DAT_801d5ddc = 0;
    DAT_801d5de4 = (DAT_801d5de4 & 0xfffffff9) | 1;

    if (param_5 != (uint *)0x0) {
      local_88[0] = *param_5;
      local_88[1] = param_5[1];
      local_80[0] = param_5[2] & 0xffff0000;
    }

    uVar18 = (uint)(param_5 != (uint *)0x0);
    uVar17 = uVar18;

    if (param_7 != (uint *)0x0) {
      uVar17 = uVar18 + 1;
      uVar9 = param_7[1];
      uVar10 = param_7[2];
      local_88[uVar18 * 3] = *param_7;
      local_80[uVar18 * 3 + -1] = uVar9;
      local_80[uVar18 * 3] = uVar10;
      *(undefined2 *)(local_80 + uVar18 * 3) = 0;
    }

    FUN_80078138((int)(uintptr_t)param_3);
    iVar16 = 0;
    puVar13 = local_88;
    DAT_801d58b6 = 6;
    local_30 = 0x5c;
    bVar3 = true;
    local_34 = puVar13;

    while (iVar14 = local_30, uVar4 = 0, bVar3) {
      bVar15 = 1;
      puVar12 = (uint *)(void *)(uintptr_t)((uintptr_t)&DAT_801d585c + local_30);

      if (iVar16 == 0) {
        if (param_5 != (uint *)0x0) {
          bVar15 = 3;
        }
      }
      else if ((iVar16 == 1) && (param_7 != (uint *)0x0)) {
        bVar15 = 4;
      }

      FUN_8008ce30(puVar12,0,0xd0);
      uVar18 = uVar17;

      if ((int)uVar17 <= iVar16) {
        uVar18 = uVar17 + 1;
        uVar4 = FUN_arcade__80010238(puVar13,local_3c,(undefined4)(uintptr_t)local_38,&local_40,(int *)local_34,uVar17);
        *(undefined *)(puVar13 + 1) = 0;
      }

      *puVar12 = *puVar13;
      cVar2 = *(char *)(void *)(uintptr_t)((uintptr_t)puVar13 + 5);
      UNK_801d58e9[iVar14] = '\x06' - ((char)iVar16 + '\x01');
      UNK_801d58e8[iVar14] = 1;
      *(int *)(void *)(uintptr_t)((uintptr_t)&DAT_801d5860 + iVar14) = (int)cVar2;

      if ((bVar15 < 2) || ((uVar5 = param_4, 3 < bVar15 && (uVar5 = param_6, bVar15 != 4)))) {

        uVar5 = FUN_800768c0(*(undefined2 *)(puVar13 + 2));
        FUN_80076f5c(uVar5,&DAT_801d5864 + iVar14);
        iVar6 = FUN_80076f2c(5,*(undefined2 *)(UNK_801d5880 + iVar14));
        if (*(char *)(void *)(uintptr_t)((uintptr_t)iVar6 + 0xe) != '\0') {
          uVar17 = *(uint *)(void *)(uintptr_t)((uintptr_t)iVar6 + 8);
          *puVar12 = uVar17;
          FUN_arcade__800104a8((int)(uintptr_t)puVar13,uVar17,uVar4,local_40);
          *(int *)(void *)(uintptr_t)((uintptr_t)&DAT_801d5860 + iVar14) = (int)*(char *)(void *)(uintptr_t)((uintptr_t)puVar13 + 5);
        }
      }
      else {

        FUN_80076fc0(uVar5,&DAT_801d5864 + iVar14);
      }

      if (param_2 != 0) {
        UNK_801d58de[iVar14] = UNK_801d58de[iVar14] | 0x40;
      }

      UNK_801d58ea[iVar14] = bVar15;
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 3;
      local_30 = local_30 + 0xd0;
      uVar17 = *puVar12;
      iVar16 = iVar16 + 1;
      UNK_801d58eb[iVar14] = *(undefined *)puVar1;
      uVar4 = FUN_80060ae8(uVar17);
      FUN_8008cedc((char *)(void *)(uintptr_t)(UNK_801d58ec + iVar14), (char *)(void *)(uintptr_t)uVar4);
      bVar3 = iVar16 < 6;
      uVar17 = uVar18;
    }
  }
  else {

    param_3 = (undefined4 *)FUN_8007830c(local_3c,&DAT_801d586c);
  }

  puVar8 = &DAT_801c98a0;
  puVar7 = (undefined4 *)(void *)(uintptr_t)((uintptr_t)param_3 + 0x22);

  if (((uintptr_t)puVar7 & 3) == 0) {

    do {
      uVar5 = puVar7[1];
      uVar11 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar5;
      puVar8[2] = uVar11;
      puVar8[3] = uVar4;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar7 != (undefined4 *)(param_3 + 0x42));
  }
  else {

    do {
      uVar11 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar11;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar7 != (undefined4 *)(param_3 + 0x42));
  }

  iVar14 = 0x14fda;
  iVar16 = 0x5c;
  for (iVar6 = 0; iVar6 < (int)(uint)DAT_801d58b6; iVar6 = iVar6 + 1) {
    FUN_800771ac(&DAT_801d5864 + iVar16,&DAT_801c98e0 + iVar14);
    iVar14 = iVar14 + 0x1c0;
    iVar16 = iVar16 + 0xd0;
  }

  return &DAT_801d585c;
}

undefined4 *
FUN_arcade__80010a34
          (int param_1,int param_2,int param_3,undefined param_4,undefined param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 stringPointer;
  undefined4 *dataStructure;

  dataStructure = (undefined4 *)(void *)(uintptr_t)(param_1 + param_2 * 0xd0 + 0x5c);
  if (-1 < param_3) {
    FUN_8008ce30(dataStructure,0,0xd0);
    *(undefined *)(dataStructure + 0x23) = 1;
    *(char *)(void *)(uintptr_t)((uintptr_t)dataStructure + 0x8d) = (char)param_3;
  }
  *(undefined *)(void *)(uintptr_t)((uintptr_t)dataStructure + 0x8e) = param_4;
  *dataStructure = param_6;
  *(undefined *)(void *)(uintptr_t)((uintptr_t)dataStructure + 0x8f) = param_5;
  dataStructure[1] = param_7;
  stringPointer = FUN_80060ae8(param_6);
  FUN_8008cedc((char *)(void *)(uintptr_t)(dataStructure + 0x24), (char *)(void *)(uintptr_t)stringPointer);
  FUN_80076fc0(param_8, (undefined4 *)(void *)(uintptr_t)(dataStructure + 2));
  FUN_800771ac((undefined4 *)(void *)(uintptr_t)(dataStructure + 2), (undefined4 *)(void *)(uintptr_t)(&DAT_801de8ba + param_2 * 0x70));
  return dataStructure;
}

void FUN_arcade__80010c84(undefined4 stringParam1,undefined4 stringParam2,char *inputString)

{
  char carType;
  short dataIndex;
  undefined2 tempValue;
  undefined2 *dataPointer;
  undefined4 *sourceData;
  undefined4 *tempSourceData;
  undefined4 *destData;
  int loopCounter;
  undefined4 dataValue1;
  undefined4 dataValue2;
  undefined4 dataValue3;
  undefined4 dataValue4;
  uint arrayIndex;
  undefined4 *carDataStructure;
  int dataOffset;
  char *inputPointer;
  int loopIndex;
  char *inputPointer2;
  undefined4 dataBuffer [66];
  undefined4 tempData;
  char tempChar __attribute__((unused));
  undefined tempByte __attribute__((unused));
  undefined4 flag1;
  int flag2;
  int flag3;
  undefined2 *pointer1;
  undefined2 *pointer2;

  dataValue2 = _LAB_80092e6a_2;
  flag1 = 0;
  flag2 = 0;
  flag3 = 0;
  pointer1 = (undefined2 *)0x0;
  pointer2 = (undefined2 *)0x0;

  carType = inputString[2];

  if (carType == '\x04') {

    dataValue2 = (undefined4)(uintptr_t)FUN_8007830c(_LAB_80092e6a_2,
                          (undefined4 *)(void *)(uintptr_t)((uintptr_t)(&PTR_DAT_arcade__8002678c_arcade__80027470) + (*inputString * 4 + (int)inputString[1])));

    dataOffset = (int)*(short *)(inputString + 6);

    if (dataOffset < 0) {

      tempData = *(undefined4 *)(inputString + 0x10);
      tempByte = FUN_arcade__8001003c
                           (*(undefined4 *)(inputString + 0x10),(int)*(short *)(inputString + 0x16));
      tempChar = inputString[0x18];
      dataValue3 = FUN_arcade__80010000(*(undefined4 *)(inputString + 0x10),(int)inputString[0x14]);

      carDataStructure = FUN_arcade__80010554(0,0,(undefined2 *)(void *)(uintptr_t)dataValue2,dataValue3,&tempData,0,0);

      FUN_80076fc0(dataValue3,dataBuffer);

      *(undefined *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 9) = 0;
    }
    else {

      carDataStructure = FUN_arcade__80010554(0,0,(undefined2 *)(void *)(uintptr_t)dataValue2,0,0,0,0);
      dataIndex = *(short *)(inputString + 8);
      destData = dataBuffer;

      sourceData = (undefined4 *)(&DAT_801cd554 + dataOffset * 0x2014 + dataIndex * 0x52 + 6);

      do {
        dataValue2 = sourceData[1];
        dataValue3 = sourceData[2];
        dataValue4 = sourceData[3];
        *destData = *sourceData;
        destData[1] = dataValue2;
        destData[2] = dataValue3;
        destData[3] = dataValue4;
        sourceData = sourceData + 4;
        destData = destData + 4;
      } while (sourceData != (undefined4 *)(&DAT_801cd554 + dataOffset * 0x2014 + dataIndex * 0x52 + 0x46));

      flag1 = 1;
      *destData = *sourceData;
      flag2 = 1;
      pointer1 = (undefined2 *)(void *)(uintptr_t)((uintptr_t)&DAT_801cd554 + dataOffset * 0x2014 + *(short *)(void *)(uintptr_t)((uintptr_t)inputString + 8) * 0x52 + 2);
      *(undefined *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 9) = 0;
    }

    *(char *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 10) = inputString[2];

    tempValue = *(undefined2 *)(void *)(uintptr_t)((uintptr_t)inputString + 4);
    *(undefined *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 0x5a) = 6;
    *(char *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 0xf) = (char)tempValue;

    FUN_8005e590(carDataStructure,*(undefined4 *)(void *)(uintptr_t)((uintptr_t)inputString + 0x1b8));

    *(char *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 0x57e) = (char)*(undefined2 *)(void *)(uintptr_t)((uintptr_t)inputString + 0x1bc);
    *(undefined *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 0x57f) = (&DAT_arcade__800274b0)[(int)*inputString];
  }

  else if (carType < '\x05') {

    if (carType == '\0') {

      dataOffset = (int)(uintptr_t)FUN_8007830c(_LAB_80092e6a_2,(undefined4 *)&LAB_arcade__800267ca_2);
      carDataStructure = &DAT_801d585c;

      FUN_8008ce30(&DAT_801d585c,0,0x58c);

      {
        undefined1 temp_byte;
        memcpy(&temp_byte, &DAT_801c98e1, sizeof(undefined1));
        DAT_801d585c = (undefined4)temp_byte;
        memcpy(&temp_byte, &DAT_801c98e5, sizeof(undefined1));
        DAT_801d5860 = (undefined4)temp_byte;
      }
      DAT_801d5864 = 2;
      DAT_801d5865 = 0;
      DAT_801d5866 = 0;
      DAT_801d5869 = 1;
      DAT_801d586a = 0;
      sourceData = dataBuffer;
      DAT_801d586b = (undefined)*(undefined2 *)(inputString + 4);

      FUN_8005e548(&DAT_801d585c,(undefined4)(uintptr_t)&LAB_arcade__800267ce_2);
      FUN_8005e590(&DAT_801d585c,*(undefined4 *)(inputString + 0x1b8));

      dataValue2 = FUN_8007816c(dataValue2,*(undefined2 *)(void *)(uintptr_t)((uintptr_t)dataOffset + 0x94));
      FUN_8008cedc((char *)(void *)(uintptr_t)&DAT_801d58a0, (char *)(void *)(uintptr_t)dataValue2);

      DAT_801d58b6 = 2;
      DAT_801d5dde = 0xffff;
      DAT_801d5de0 = 0xffff;
      DAT_801d5de2 = 0;
      DAT_801d5ddc = 0;
      DAT_801d5de4 = (DAT_801d5de4 & 0xfffffff8) | (uint)(*(int *)(void *)(uintptr_t)((uintptr_t)inputString + 0x2cc) != 1);

      inputPointer = inputString;
      inputPointer2 = inputString;

      for (loopIndex = 0; loopIndex < 2; loopIndex = loopIndex + 1) {

        loopCounter = (int)*(short *)(inputPointer + 0xa0);

        if (loopCounter < 0) {

          dataValue2 = FUN_arcade__80010000(*(undefined4 *)(inputPointer2 + 0xa8),(int)inputString[loopIndex + 0xb0]);
          dataValue3 = FUN_arcade__8001003c
                             (*(undefined4 *)(inputPointer2 + 0xa8),(int)*(short *)(inputPointer + 0xb2));

          FUN_arcade__80010a34
                    ((int)(uintptr_t)&DAT_801d585c,loopIndex,loopIndex,loopIndex + 3,(int)inputString[loopIndex + 0xb6],
                     *(undefined4 *)(void *)(uintptr_t)((uintptr_t)inputPointer2 + 0xa8),dataValue3,dataValue2);

          FUN_80076fc0(dataValue2,sourceData);
        }
        else {

          dataIndex = *(short *)(inputPointer + 0xa4);
          tempSourceData = (undefined4 *)(&DAT_801cd554 + loopCounter * 0x2014 + dataIndex * 0x52 + 6);
          destData = sourceData;

          do {
            dataValue2 = tempSourceData[1];
            dataValue3 = tempSourceData[2];
            dataValue4 = tempSourceData[3];
            *destData = *tempSourceData;
            destData[1] = dataValue2;
            destData[2] = dataValue3;
            destData[3] = dataValue4;
            tempSourceData = tempSourceData + 4;
            destData = destData + 4;
          } while (tempSourceData != (undefined4 *)(&DAT_801cd554 + loopCounter * 0x2014 + dataIndex * 0x52 + 0x46));

          *destData = *tempSourceData;
          flag1 = 1;

          if (loopIndex == 0) {
            flag2 = 1;
            pointer1 = (undefined2 *)(void *)(uintptr_t)((uintptr_t)&DAT_801cd554 + loopCounter * 0x2014 + *(short *)(void *)(uintptr_t)((uintptr_t)inputString + 0xa4) * 0x52 + 2);
          }
          else {
            flag3 = 1;
            pointer2 = (undefined2 *)(void *)(uintptr_t)((uintptr_t)&DAT_801cd554 + loopCounter * 0x2014 + *(short *)(void *)(uintptr_t)((uintptr_t)inputPointer + 0xa4) * 0x52 + 2);
          }
        }

        inputPointer = inputPointer + 2;
        sourceData = sourceData + 0x21;
        inputPointer2 = inputPointer2 + 4;
      }

      destData = &DAT_801c98a0;
      sourceData = (undefined4 *)(void *)(uintptr_t)((uintptr_t)dataOffset + 0x44);

      if (((uintptr_t)sourceData & 3) == 0) {

        do {
          dataValue2 = sourceData[1];
          dataValue3 = sourceData[2];
          dataValue4 = sourceData[3];
          *destData = *sourceData;
          destData[1] = dataValue2;
          destData[2] = dataValue3;
          destData[3] = dataValue4;
          sourceData = sourceData + 4;
          destData = destData + 4;
        } while (sourceData != (undefined4 *)(void *)(uintptr_t)((uintptr_t)dataOffset + 0x84U));
      }
      else {

        do {
          dataValue2 = sourceData[1];
          dataValue3 = sourceData[2];
          dataValue4 = sourceData[3];
          *destData = *sourceData;
          destData[1] = dataValue2;
          destData[2] = dataValue3;
          destData[3] = dataValue4;
          sourceData = sourceData + 4;
          destData = destData + 4;
        } while (sourceData != (undefined4 *)(void *)(uintptr_t)((uintptr_t)dataOffset + 0x84U));
      }
    }
  }

  else if (carType == '\x06') {

    dataPointer = FUN_8007830c(_LAB_80092e6a_2,(undefined4 *)&LAB_arcade__800267ca_2);
    destData = &DAT_801c98a0;
    sourceData = (undefined4 *)(dataPointer + 0x22);

    if (((uintptr_t)sourceData & 3) == 0) {

      do {
        dataValue1 = sourceData[1];
        dataValue3 = sourceData[2];
        dataValue4 = sourceData[3];
        *destData = *sourceData;
        destData[1] = dataValue1;
        destData[2] = dataValue3;
        destData[3] = dataValue4;
        sourceData = sourceData + 4;
        destData = destData + 4;
      } while (sourceData != (undefined4 *)(dataPointer + 0x42));
    }
    else {

      do {
        dataValue3 = sourceData[1];
        dataValue4 = sourceData[2];
        dataValue1 = sourceData[3];
        *destData = *sourceData;
        destData[1] = dataValue3;
        destData[2] = dataValue4;
        destData[3] = dataValue1;
        sourceData = sourceData + 4;
        destData = destData + 4;
      } while (sourceData != (undefined4 *)(dataPointer + 0x42));
    }

    carDataStructure = &DAT_801d585c;
    FUN_8008ce30(&DAT_801d585c,0,0x58c);

    {
      undefined1 temp_byte;
      memcpy(&temp_byte, &DAT_801c98e1, sizeof(undefined1));
      DAT_801d585c = (undefined4)temp_byte;
      memcpy(&temp_byte, &DAT_801c98e5, sizeof(undefined1));
      DAT_801d5860 = (undefined4)temp_byte;
    }
    DAT_801d5864 = 2;
    DAT_801d5866 = 6;
    DAT_801d5865 = 0;
    DAT_801d5869 = 0;
    DAT_801d586a = 0;
    DAT_801d586b = 100;

    dataValue3 = FUN_8007816c(dataValue2,*dataPointer);
    FUN_8005e548(&DAT_801d585c,dataValue3);
    FUN_8005e590(&DAT_801d585c,*(undefined4 *)(inputString + 0x1b8));

    dataValue2 = FUN_8007816c(dataValue2,dataPointer[0x4a]);
    FUN_8008cedc((char *)(void *)(uintptr_t)&DAT_801d58a0, (char *)(void *)(uintptr_t)dataValue2);

    DAT_801d58b6 = 1;
    DAT_801d5dde = 0xffff;
    DAT_801d5de0 = 0xffff;
    DAT_801d5de2 = 0;
    DAT_801d5ddc = 0;
    DAT_801d5de4 = (DAT_801d5de4 & 0xfffffff8) | (uint)(*(int *)(void *)(uintptr_t)((uintptr_t)inputString + 0x2cc) != 1);

    dataOffset = FUN_8005e764();
    dataOffset = *(int *)(void *)(uintptr_t)((uintptr_t)dataOffset + 0x14);
    FUN_8008cedc((char *)(void *)(uintptr_t)&DAT_801d5d98, (char *)(void *)(uintptr_t)&LAB_arcade__800267d4);

    if (dataOffset != 0) {
      dataValue2 = FUN_80060ae8(dataOffset);
      FUN_8008cedc((char *)(void *)(uintptr_t)&DAT_801d5d98, (char *)(void *)(uintptr_t)dataValue2);
    }

    dataOffset = (int)*(short *)(inputString + 6);
    sourceData = dataBuffer;

    if (dataOffset < 0) {

      dataValue2 = FUN_arcade__80010000(*(undefined4 *)(inputString + 0x10),(int)inputString[0x14]);
      dataValue3 = FUN_arcade__8001003c(*(undefined4 *)(inputString + 0x10),(int)*(short *)(inputString + 0x16));

      FUN_arcade__80010a34
                ((int)(uintptr_t)&DAT_801d585c,0,0,3,(int)inputString[0x18],*(undefined4 *)(void *)(uintptr_t)((uintptr_t)inputString + 0x10),dataValue3,
                 dataValue2);

      FUN_80076fc0(dataValue2,dataBuffer);
    }
    else {

      dataIndex = *(short *)(inputString + 8);
      destData = (undefined4 *)(&DAT_801cd554 + dataOffset * 0x2014 + dataIndex * 0x52 + 6);

      do {
        dataValue2 = destData[1];
        dataValue3 = destData[2];
        dataValue4 = destData[3];
        *sourceData = *destData;
        sourceData[1] = dataValue2;
        sourceData[2] = dataValue3;
        sourceData[3] = dataValue4;
        destData = destData + 4;
        sourceData = sourceData + 4;
      } while (destData != (undefined4 *)(&DAT_801cd554 + dataOffset * 0x2014 + dataIndex * 0x52 + 0x46));

      flag1 = 1;
      *sourceData = *destData;
      flag2 = 1;
      pointer1 = (undefined2 *)(void *)(uintptr_t)((uintptr_t)&DAT_801cd554 + dataOffset * 0x2014 + *(short *)(void *)(uintptr_t)((uintptr_t)inputString + 8) * 0x52 + 2);
    }
  }

  sourceData = &DAT_801c336c;
  destData = dataBuffer;
  do {
    dataValue2 = destData[1];
    dataValue3 = destData[2];
    dataValue4 = destData[3];
    *sourceData = *destData;
    sourceData[1] = dataValue2;
    sourceData[2] = dataValue3;
    sourceData[3] = dataValue4;
    destData = destData + 4;
    sourceData = sourceData + 4;
  } while (destData != dataBuffer + 0x20);
  *sourceData = *destData;

  sourceData = &DAT_801c3510;
  destData = dataBuffer;
  do {
    dataValue2 = destData[1];
    dataValue3 = destData[2];
    dataValue4 = destData[3];
    *sourceData = *destData;
    sourceData[1] = dataValue2;
    sourceData[2] = dataValue3;
    sourceData[3] = dataValue4;
    destData = destData + 4;
    sourceData = sourceData + 4;
  } while (destData != dataBuffer + 0x20);
  *sourceData = *destData;

  sourceData = &DAT_801c3594;
  destData = dataBuffer;
  do {
    dataValue3 = destData[1];
    dataValue4 = destData[2];
    dataValue2 = destData[3];
    *sourceData = *destData;
    sourceData[1] = dataValue3;
    sourceData[2] = dataValue4;
    sourceData[3] = dataValue2;
    destData = destData + 4;
    sourceData = sourceData + 4;
  } while (destData != dataBuffer + 0x20);
  *sourceData = *destData;

  DAT_801c3618 = flag1;
  FUN_8008cedc((char *)(void *)(uintptr_t)&DAT_801c31fe, (char *)(void *)(uintptr_t)((uintptr_t)inputString + 0xb8));

  dataOffset = 0;
  DAT_801c31f8 = *(undefined2 *)(inputString + 0x2cc);
  DAT_801c31fa = (short)inputString[2];
  loopIndex = 0x5c;
  DAT_801c31fc = (ushort)*(byte *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 0x5a);
  DAT_801c31f0 = stringParam1;
  DAT_801c31f4 = stringParam2;

  do {

    sourceData = (undefined4 *)(void *)(uintptr_t)((uintptr_t)carDataStructure + loopIndex);

    if ((int)(uint)*(byte *)(void *)(uintptr_t)((uintptr_t)carDataStructure + 0x5a) <= dataOffset) {
      DAT_801c3340 = *(undefined4 *)(inputString + 0x2d0);
      return;
    }

    arrayIndex = (uint)*(byte *)(void *)(uintptr_t)((uintptr_t)sourceData + 0x8d);

    if (dataOffset == 0) {

      if (flag2 == 0) goto LAB_arcade__800116ec;
      destData = &DAT_801c31f0 + arrayIndex * 2;
      (&DAT_801c3240)[arrayIndex * 2] = *(undefined4 *)(pointer1 + 0x46);
      dataValue2 = *(undefined4 *)(pointer1 + 0x46);
      dataValue3 = *(undefined4 *)(pointer1 + 2);
    }
    else if ((dataOffset == 1) && (flag3 != 0)) {

      destData = &DAT_801c31f0 + arrayIndex * 2;
      (&DAT_801c3240)[arrayIndex * 2] = *(undefined4 *)(pointer2 + 0x46);
      dataValue2 = *(undefined4 *)(pointer2 + 0x46);
      dataValue3 = *(undefined4 *)(pointer2 + 2);
    }
    else {
LAB_arcade__800116ec:

      destData = &DAT_801c31f0 + arrayIndex * 2;
      (&DAT_801c3240)[arrayIndex * 2] = *sourceData;
      dataValue2 = *sourceData;
      dataValue3 = sourceData[1];
    }

    loopIndex = loopIndex + 0xd0;
    tempValue = FUN_80060d28(dataValue2,dataValue3);
    *(undefined2 *)(destData + 0x15) = tempValue;
    dataOffset = dataOffset + 1;
  } while( true );
}

void FUN_arcade__80011954(void)

{
  uint dataCount;
  undefined4 *sourcePointer;
  undefined4 *destPointer;
  undefined4 dataValue1;
  undefined4 dataValue2;
  undefined4 dataValue3;
  undefined4 sourceBuffer [196];
  undefined4 destBuffer [1380];

  FUN_80082fac((undefined4 *)&LAB_arcade__800267f4,sourceBuffer);

  dataCount = (uint)DAT_801c98e0;

  destPointer = &DAT_800f84e0;

  sourcePointer = sourceBuffer + dataCount * 0xc5;

  do {
    dataValue1 = sourcePointer[1];
    dataValue2 = sourcePointer[2];
    dataValue3 = sourcePointer[3];
    *destPointer = *sourcePointer;
    destPointer[1] = dataValue1;
    destPointer[2] = dataValue2;
    destPointer[3] = dataValue3;
    sourcePointer = sourcePointer + 4;
    destPointer = destPointer + 4;
  } while (sourcePointer != destBuffer + dataCount * 0xc5);

  *destPointer = *sourcePointer;
  return;
}

void FUN_arcade__80011a50(undefined4 graphicsParam __attribute__((unused)),short *coordinateData)

{
  short coordinate1;
  short coordinate2;
  uint *graphicsBuffer;
  uint colorValue1;
  uint colorValue2;

  colorValue1 = *(uint *)(coordinateData + 4);
  colorValue2 = *(uint *)(coordinateData + 6);

  graphicsBuffer = (uint *)FUN_8007e0b0(0, 0);

  colorValue1 = colorValue1 | colorValue1 << 8 | colorValue1 << 0x10 | 0x3a000000;
  graphicsBuffer[4] = colorValue1;
  *graphicsBuffer = colorValue1;

  colorValue1 = colorValue2 | colorValue2 << 8 | colorValue2 << 0x10;
  graphicsBuffer[6] = colorValue1;
  graphicsBuffer[2] = colorValue1;

  coordinate1 = *coordinateData;
  *(short *)(graphicsBuffer + 5) = coordinate1;
  *(short *)(graphicsBuffer + 1) = coordinate1;

  coordinate1 = *coordinateData;
  coordinate2 = coordinateData[2];
  *(short *)(graphicsBuffer + 7) = coordinate1 + coordinate2;
  *(short *)(graphicsBuffer + 3) = coordinate1 + coordinate2;

  coordinate1 = coordinateData[1];
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 0xe) = coordinate1;
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 6) = coordinate1;

  coordinate1 = coordinateData[1];
  coordinate2 = coordinateData[3];
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 0x1e) = coordinate1 + coordinate2;
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 0x16) = coordinate1 + coordinate2;

  return;
}

void FUN_arcade__80011b18(undefined4 graphicsParam __attribute__((unused)),short *coordinateData)

{
  short coordinate1;
  short coordinate2;
  uint *graphicsBuffer;
  uint colorValue;

  graphicsBuffer = (uint *)FUN_8007e0b0(0, 0);

  colorValue = *(uint *)(coordinateData + 4);
  graphicsBuffer[4] = colorValue | 0x3a000000;
  *graphicsBuffer = colorValue | 0x3a000000;

  colorValue = *(uint *)(coordinateData + 6);
  graphicsBuffer[6] = colorValue;
  graphicsBuffer[2] = colorValue;

  coordinate1 = *coordinateData;
  *(short *)(graphicsBuffer + 5) = coordinate1;
  *(short *)(graphicsBuffer + 1) = coordinate1;

  coordinate1 = *coordinateData;
  coordinate2 = coordinateData[2];
  *(short *)(graphicsBuffer + 7) = coordinate1 + coordinate2;
  *(short *)(graphicsBuffer + 3) = coordinate1 + coordinate2;

  coordinate1 = coordinateData[1];
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 0xe) = coordinate1;
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 6) = coordinate1;

  coordinate1 = coordinateData[1];
  coordinate2 = coordinateData[3];
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 0x1e) = coordinate1 + coordinate2;
  *(short *)(void *)(uintptr_t)((uintptr_t)graphicsBuffer + 0x16) = coordinate1 + coordinate2;

  return;
}

void FUN_arcade__80011bb0(char *outputString,int number)

{
  int digitValue;
  int digitCount;
  int *powerTable;
  int powerValue;

  digitCount = 7;
  powerTable = (int *)(void *)(uintptr_t)&DAT_arcade__800274d0;
  do {
    if (*powerTable <= number) break;
    digitCount = digitCount + -1;
    powerTable = powerTable + -1;
  } while (0 < digitCount);

  if (0 < digitCount) {
    powerTable = (int *)(UNK_arcade__800274b4 + digitCount * 4);
    do {
      powerValue = *powerTable;
      digitValue = number / powerValue;
      powerTable = powerTable + -1;
      digitCount = digitCount + -1;
      *outputString = (char)digitValue + '0';
      outputString = outputString + 1;
      number = number - digitValue * powerValue;
    } while (0 < digitCount);
  }

  *outputString = (char)number + '0';
  outputString[1] = '\0';
  return;
}

void FUN_arcade__80011c48
               (undefined4 graphicsContext,char *primitiveData,short xCoordinate,short yCoordinate,uint colorValue,
               int scaleFactor)

{
  short width;
  uint * graphicsBuffer;
  char tempChar;
  short scaledWidth;
  short height;

  width = *(short *)(primitiveData + 4);
  height = *(short *)(primitiveData + 6);

  graphicsBuffer = FUN_8007e864((undefined4 *)(void *)(uintptr_t)graphicsContext,colorValue | colorValue << 8 | colorValue << 0x10);

  width = (short)((uint)(width * scaleFactor) >> 8);
  scaledWidth = xCoordinate - width;
  xCoordinate = xCoordinate + width;

  *(short *)(graphicsBuffer + 0x14) = scaledWidth;
  *(short *)(graphicsBuffer + 4) = scaledWidth;
  *(short *)(graphicsBuffer + 0x1c) = xCoordinate;
  *(short *)(graphicsBuffer + 0xc) = xCoordinate;

  width = (short)((uint)(height * scaleFactor) >> 8);
  height = yCoordinate - width;
  yCoordinate = yCoordinate + width;

  *(short *)(graphicsBuffer + 0xe) = height;
  *(short *)(graphicsBuffer + 6) = height;

  *(short *)(graphicsBuffer + 0x1e) = yCoordinate;
  *(short *)(graphicsBuffer + 0x16) = yCoordinate;

  tempChar = *primitiveData;
  *(char *)(graphicsBuffer + 0x18) = tempChar;
  *(char *)(graphicsBuffer + 8) = tempChar;
  {
    char cVar3;
    uint * iVar2 = graphicsBuffer;
    cVar3 = *primitiveData + primitiveData[4] + -1;
    *(char *)(iVar2 + 0x20) = cVar3;
    *(char *)(iVar2 + 0x10) = cVar3;
    cVar3 = primitiveData[1];
    *(char *)(iVar2 + 0x11) = cVar3;
    *(char *)(iVar2 + 9) = cVar3;
    cVar3 = primitiveData[1] + primitiveData[6] + -1;
    *(char *)(iVar2 + 0x21) = cVar3;
    *(char *)(iVar2 + 0x19) = cVar3;
    *(undefined2 *)(iVar2 + 10) = *(undefined2 *)(primitiveData + 2);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(primitiveData + 8);
  }
  return;
}

void FUN_arcade__80011d74
               (undefined4 graphicsContext,char *primitiveData,short xCoordinate,short yCoordinate,uint colorValue,
               int scaleFactor,ushort additionalParam)

{
  short widthScaled;
  uint * primitiveBuffer;
  char textureCoord;
  short leftEdge;
  short heightScaled;

  widthScaled = *(short *)(primitiveData + 4);
  heightScaled = *(short *)(primitiveData + 6);

  primitiveBuffer = FUN_8007e864((undefined4 *)(void *)(uintptr_t)graphicsContext, colorValue | colorValue << 8 | colorValue << 0x10 | 0x2000000);

  widthScaled = (short)((uint)(widthScaled * scaleFactor) >> 8);
  leftEdge = xCoordinate - widthScaled;
  xCoordinate = xCoordinate + widthScaled;

  *(short *)(primitiveBuffer + 0x14) = leftEdge;
  *(short *)(primitiveBuffer + 4) = leftEdge;
  *(short *)(primitiveBuffer + 0x1c) = xCoordinate;
  *(short *)(primitiveBuffer + 0xc) = xCoordinate;

  heightScaled = (short)((uint)(heightScaled * scaleFactor) >> 8);
  short topEdge = yCoordinate - heightScaled;
  yCoordinate = yCoordinate + heightScaled;

  *(short *)(primitiveBuffer + 0xe) = topEdge;
  *(short *)(primitiveBuffer + 6) = topEdge;
  *(short *)(primitiveBuffer + 0x1e) = yCoordinate;
  *(short *)(primitiveBuffer + 0x16) = yCoordinate;

  textureCoord = *primitiveData;
  *(char *)(primitiveBuffer + 0x18) = textureCoord;
  *(char *)(primitiveBuffer + 8) = textureCoord;

  textureCoord = *primitiveData + primitiveData[4] + -1;
  *(char *)(primitiveBuffer + 0x20) = textureCoord;
  *(char *)(primitiveBuffer + 0x10) = textureCoord;

  textureCoord = primitiveData[1];
  *(char *)(primitiveBuffer + 0x11) = textureCoord;
  *(char *)(primitiveBuffer + 9) = textureCoord;

  textureCoord = primitiveData[1] + primitiveData[6] + -1;
  *(char *)(primitiveBuffer + 0x21) = textureCoord;
  *(char *)(primitiveBuffer + 0x19) = textureCoord;

  *(undefined2 *)(primitiveBuffer + 10) = *(undefined2 *)(primitiveData + 2);
  *(ushort *)(primitiveBuffer + 0x12) = *(ushort *)(primitiveData + 8) | additionalParam;
  return;
}

void FUN_arcade__80011ebc(undefined2 *destination,undefined2 *source)

{
  undefined2 tempValue;

  destination[3] = *source;
  destination[4] = source[1];
  *(undefined4 *)(destination + 8) = *(undefined4 *)(source + 2);
  *(undefined4 *)(destination + 10) = *(undefined4 *)(source + 4);
  *(undefined4 *)(destination + 0xc) = *(undefined4 *)(source + 6);
  destination[6] = source[9];
  tempValue = source[8];
  *destination = 0xffff;
  destination[5] = tempValue;
  return;
}

void FUN_arcade__80011f18(undefined2 *dataStructure)

{

  *dataStructure = 0;
  return;
}

void FUN_arcade__80011f20(ushort *dataStructure)

{

  *dataStructure = ~dataStructure[5];
  return;
}

void FUN_arcade__80011f34(short *counterPointer)

{
  short newValue;

  if (*counterPointer < 0) {
    if (*counterPointer < -1) {
      *counterPointer = *counterPointer + 1;
      return;
    }
  }
  else {

    newValue = *counterPointer + 1;
    *counterPointer = newValue;
    if (counterPointer[5] <= newValue) {
      *counterPointer = counterPointer[5];
    }
  }
  return;
}

void FUN_arcade__80011f84(short *colorData,undefined4 graphicsContext,short xCoordinate,short yCoordinate)

{
  byte redStart;
  byte redEnd;
  byte greenStart;
  byte greenEnd;
  byte blueStart;
  byte blueEnd;
  byte redStart2;
  byte greenStart2;
  byte blueStart2;
  byte alphaValue;
  short width;
  short height;
  uint *primitiveBuffer;
  int startValue;
  int endValue;
  int progressValue;
  uint color1;
  uint color2;
  short leftEdge;

  width = colorData[3];
  height = colorData[4];

  startValue = (int)*colorData;
  endValue = (int)colorData[5];

  if (startValue != -1) {

    progressValue = endValue - startValue;
    if (startValue < 0) {
      progressValue = endValue + 1 + startValue;
    }

    leftEdge = xCoordinate - width;
    if ((colorData[6] & 1U) == 0) {
      leftEdge = xCoordinate;
      xCoordinate = xCoordinate + width;
    }

    redStart = *(byte *)(colorData + 8);
    redEnd = *(byte *)(colorData + 0xc);
    greenStart = *(byte *)((int)colorData + 0x11);
    greenEnd = *(byte *)((int)colorData + 0x19);
    blueStart = *(byte *)(colorData + 9);
    blueEnd = *(byte *)(colorData + 0xd);
    redStart2 = *(byte *)(colorData + 10);
    greenStart2 = *(byte *)(void *)(uintptr_t)((uintptr_t)colorData + 0x15);
    blueStart2 = *(byte *)(colorData + 0xb);

    width = (short)((width * progressValue) / endValue);
    leftEdge = leftEdge - width;
    xCoordinate = xCoordinate + width;

    alphaValue = *(byte *)(void *)(uintptr_t)((uintptr_t)colorData + 0x13);

    primitiveBuffer = FUN_8007e0b0_with_context((undefined4 *)(void *)(uintptr_t)graphicsContext);

    color1 = (alphaValue | 0x38) << 0x18 |
             (uint)redStart + (int)(((uint)redEnd - (uint)redStart) * progressValue) / endValue |
             ((uint)greenStart + (int)(((uint)greenEnd - (uint)greenStart) * progressValue) / endValue) * 0x100 |
             ((uint)blueStart + (int)(((uint)blueEnd - (uint)blueStart) * progressValue) / endValue) * 0x10000;

    color2 = (uint)redStart2 + (int)(((uint)redEnd - (uint)redStart2) * progressValue) / endValue |
             ((uint)greenStart2 + (int)(((uint)greenEnd - (uint)greenStart2) * progressValue) / endValue) * 0x100 |
             ((uint)blueStart2 + (int)(((uint)blueEnd - (uint)blueStart2) * progressValue) / endValue) * 0x10000;

    primitiveBuffer[4] = color1;
    *primitiveBuffer = color1;
    primitiveBuffer[6] = color2;
    primitiveBuffer[2] = color2;

    *(short *)(primitiveBuffer + 5) = leftEdge;
    *(short *)(primitiveBuffer + 1) = leftEdge;
    *(short *)(primitiveBuffer + 7) = xCoordinate;
    *(short *)(primitiveBuffer + 3) = xCoordinate;

    *(short *)((int)primitiveBuffer + 0xe) = yCoordinate;
    *(short *)((int)primitiveBuffer + 6) = yCoordinate;
    *(short *)((int)primitiveBuffer + 0x1e) = yCoordinate + height;
    *(short *)((int)primitiveBuffer + 0x16) = yCoordinate + height;
  }
  return;
}

void FUN_arcade__800121e0(undefined *destination,undefined2 *source)

{

  if (source != (undefined2 *)0x0) {
    *(undefined2 *)(destination + 6) = *source;
    *(undefined2 *)(destination + 8) = source[1];
    *(undefined4 *)(destination + 0x10) = *(undefined4 *)(source + 0xe);
    destination[10] = *(undefined *)(source + 2);
    destination[0xb] = *(undefined *)((int)source + 5);
    destination[0xc] = *(undefined *)(source + 3);
    *(undefined2 *)(destination + 0x20) = source[4];
    *(undefined2 *)(destination + 0x22) = source[5];
    *(undefined2 *)(destination + 0x24) = source[6];
    *(undefined4 *)(destination + 0x14) = *(undefined4 *)(source + 8);
    *(undefined4 *)(destination + 0x18) = *(undefined4 *)(source + 10);
    *(undefined4 *)(destination + 0x1c) = *(undefined4 *)(source + 0xc);
  }

  *destination = 1;
  destination[1] = 0x14;
  *(undefined2 *)(destination + 0x30) = 0xffff;
  *(undefined2 *)(destination + 0x42) = 0x5f;
  return;
}

void FUN_arcade__800122a4(int dataStructure)

{

  FUN_arcade__80012368(dataStructure);
  *(undefined2 *)(dataStructure + 0x30) = 0;
  *(short *)(dataStructure + 0x42) = *(char *)(dataStructure + 1) + 0x4b;
  return;
}

void FUN_arcade__800122e0(int dataStructure)

{

  *(undefined2 *)(dataStructure + 0x30) = 0xffff;
  return;
}

void FUN_arcade__800122ec(int dataStructure)

{

  if (0 < *(short *)(dataStructure + 0x30)) {
    *(undefined2 *)(dataStructure + 0x30) = 0xfff0;
  }
  return;
}

void FUN_arcade__80012308(int dataStructure)

{
  short newValue;

  if (*(short *)(dataStructure + 0x30) < 0) {
    if (*(short *)(dataStructure + 0x30) < -1) {
      *(short *)(dataStructure + 0x30) = *(short *)(dataStructure + 0x30) + 1;
      return;
    }
  }
  else {

    newValue = *(short *)(dataStructure + 0x30) + 1;
    *(short *)(dataStructure + 0x30) = newValue;
    if (*(short *)(dataStructure + 0x42) < newValue) {
      *(short *)(dataStructure + 0x30) = *(char *)(dataStructure + 1) + 0xf;
    }
  }
  return;
}

void FUN_arcade__80012368(int dataStructure)

{
  short calculatedValue1;
  short calculatedValue2;
  int divisor;

  divisor = 0x14;
  if (300 < *(short *)(dataStructure + 0x22)) {
    divisor = 0x32;
  }

  calculatedValue1 = (short)(((*(short *)(dataStructure + 0x22) * 0xb) / 10) / divisor) + 1;
  *(short *)(dataStructure + 0x36) = (short)divisor;
  *(short *)(dataStructure + 0x34) = calculatedValue1;
  *(short *)(dataStructure + 0x32) = calculatedValue1 * (short)divisor;

  divisor = 2;
  if (400 < *(short *)(dataStructure + 0x24)) {
    divisor = 5;
  }

  calculatedValue2 = (short)(((((*(short *)(dataStructure + 0x24) * 0xc) / 10) * 0xb) / 10) / (divisor * 10)) + 1;
  *(short *)(dataStructure + 0x3c) = (short)divisor;
  *(short *)(dataStructure + 0x3a) = calculatedValue2;
  *(short *)(dataStructure + 0x38) = calculatedValue2 * (short)divisor;

  calculatedValue1 = (short)((*(short *)(dataStructure + 0x20) * 0xb) / 10000) + 1;
  *(short *)(dataStructure + 0x3e) = calculatedValue1;
  *(short *)(dataStructure + 0x40) = calculatedValue1 * 4;

  return;
}

void FUN_arcade__800124a0(char *dataStructure,undefined4 processingParam,int value1,int value2)

{
  byte redComponent;
  byte greenComponent;
  byte blueComponent;
  short width;
  short *dataPointer;
  int calculatedValue;
  short height;
  uint colorValue;
  short dimension3;
  int offsetValue;
  int loopCounter1;
  int loopCounter2;
  uint colorValue5;
  int calculatedValue2;
  int calculatedValue3;
  undefined tempBuffer [256];
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  int local_30;
  int local_2c;
  char *param_1 = dataStructure;
  undefined4 param_2 = processingParam;
  int param_3 = value1;
  int param_4 = value2;
  byte bVar1 __attribute__((unused));
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar7;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar14;
  int iVar15;
  int iVar6;
  uint uVar8;
  uint uVar13;
  short *psVar5;
  undefined auStack_160 [256];

  local_58 = (int)*(short *)(param_1 + 8);

  if (param_4 == 0) {

    local_38 = &DAT_800f85a3;
    bVar1 = param_1[0x14];
    bVar2 = param_1[0x15];
    bVar3 = param_1[0x16];
    sVar7 = *(short *)(param_1 + 0x36);
    sVar9 = *(short *)(param_1 + 0x34);
    sVar4 = *(short *)(param_1 + 0x32);
    iVar10 = (int)*(short *)(param_1 + 2);
  }
  else {

    local_38 = &DAT_800f85a6;
    bVar1 = param_1[0x18];
    bVar2 = param_1[0x19];
    bVar3 = param_1[0x1a];
    sVar7 = *(short *)(param_1 + 0x3c);
    sVar9 = *(short *)(param_1 + 0x3a);
    sVar4 = *(short *)(param_1 + 0x38);
    iVar10 = (int)*(short *)(param_1 + 2) + (int)*(short *)(param_1 + 6) + -2;
  }

  local_4c = (uint)bVar3;
  local_50 = (uint)bVar2;
  local_54 = (uint)bVar1;

  local_5c = (int)sVar4;
  local_60 = (int)sVar7;
  iVar12 = (int)sVar9;

  sVar7 = *(short *)(param_1 + 4);
  bVar1 = param_1[0xc];

  *(undefined4 *)(param_3 + 0x10) = param_2;
  local_3c = (int)sVar7 + ((int)((uint)bVar1 << 0x18) >> 0x19);

  FUN_8007da80(param_3,*(undefined4 *)(param_1 + 0x10));
  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | ((int)*param_1 & 3U) << 0x15;

  local_44 = local_58 / iVar12 + -2;
  if (local_44 < 1) {
    local_44 = 1;
  }

  local_34 = -0x77777777;
  local_30 = 0xff - local_4c;
  local_40 = *(short *)(param_1 + 4) + local_58;
  local_2c = local_60;

  for (iVar11 = 1;
      (iVar11 <= iVar12 &&
      (iVar6 = (int)*(short *)(param_1 + 0x30) - (param_1[1] * iVar11) / iVar12, -1 < iVar6));
      iVar11 = iVar11 + 1) {

    iVar6 = 0xf - iVar6;
    if (iVar6 < 0) {
      iVar6 = 0;
    }

    iVar14 = (0xff - local_54) * iVar6;
    iVar15 = (0xff - local_50) * iVar6;
    iVar6 = local_30 * iVar6;

    iVar15 = local_50 +
             (((int)((ulonglong)((longlong)iVar15 * (longlong)local_34) >> 0x20) + iVar15 >> 3) -
             (iVar15 >> 0x1f));
    uVar8 = local_54 +
            (((int)((ulonglong)((longlong)iVar14 * (longlong)local_34) >> 0x20) + iVar14 >> 3) -
            (iVar14 >> 0x1f));
    iVar6 = local_4c +
            (((int)((ulonglong)((longlong)iVar6 * (longlong)local_34) >> 0x20) + iVar6 >> 3) -
            (iVar6 >> 0x1f));

    uVar13 = uVar8 | iVar15 * 0x100 | iVar6 * 0x10000 | 0x2000000;
    local_48 = (int)uVar8 >> 1 | (iVar15 >> 1) << 8 | (iVar6 >> 1) << 0x10 | 0x2000000;

    iVar15 = (*(short *)(param_1 + 4) + local_58) - (local_58 * local_2c) / local_5c;

    psVar5 = (short *)FUN_8007d024_wrapper_2args(param_2,uVar13);

    sVar7 = (short)iVar10;
    *psVar5 = sVar7;
    sVar9 = (short)iVar15;
    psVar5[1] = sVar9;
    psVar5[2] = 2;
    psVar5[3] = (short)local_44;

    iVar6 = (uint)(byte)param_1[0xc] << 0x18;
    iVar15 = iVar15 + (iVar6 >> 0x19);

    if (iVar15 < local_40 && local_3c + (iVar6 >> 0x18) + (iVar6 >> 0x1a) < iVar15) {

      FUN_arcade__80011bb0(auStack_160,local_2c);
      iVar14 = iVar10 + 4;

      if (param_4 == 0) {

        iVar14 = FUN_8006b044(param_3,auStack_160,1,0);
        iVar14 = iVar10 - (iVar14 + 4);
        sVar7 = sVar7 + -2;
      }
      else {

        sVar7 = sVar7 + 2;
      }

      *(uint *)(param_3 + 0x14) = local_48;
      FUN_8006af40(param_3,auStack_160,iVar14,iVar15,1,(int)param_1[0xb],0);

      psVar5 = (short *)FUN_8007d024_wrapper_2args(param_2,uVar13);
      *psVar5 = sVar7;
      psVar5[1] = sVar9;
      psVar5[2] = 2;
      psVar5[3] = 1;

      local_40 = (iVar15 - (iVar6 >> 0x18)) - (int)param_1[10];
    }

    if (iVar11 == iVar12) {
      iVar6 = iVar10 + 3;
      if (param_4 == 0) {

        iVar6 = FUN_8006ad3c(param_3,local_38,1);
        iVar6 = iVar10 - (iVar6 + 2);
      }

      *(uint *)(param_3 + 0x14) = local_48;
      FUN_8006ac90(param_3,local_38,iVar6,local_3c,1);
    }

    local_2c = local_2c + local_60;
  }
  return;
}

void FUN_arcade__80012948(char *renderData,undefined4 graphicsContext,int outputBuffer)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined auStack_148 [256];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  char *param_1 = renderData;
  undefined4 param_2 = graphicsContext;
  int param_3 = outputBuffer;

  iVar11 = (int)*(short *)(param_1 + 0x3e);

  *(undefined4 *)(param_3 + 0x10) = param_2;
  FUN_8007da80(param_3,*(undefined4 *)(param_1 + 0x10));
  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xff9fffff | ((int)*param_1 & 3U) << 0x15;

  local_48 = (uint)(byte)param_1[0x1c];
  local_44 = (uint)(byte)param_1[0x1d];
  local_40 = (uint)(byte)param_1[0x1e];

  iVar10 = 0;
  local_2c = (int)*(short *)(param_1 + 2);
  local_30 = (int)*(short *)(param_1 + 4) + (int)*(short *)(param_1 + 8) + param_1[0xc] + 3;
  local_34 = (int)*(short *)(param_1 + 6) / iVar11 + -1;

  while( true ) {

    if (iVar11 <= iVar10) {
      return;
    }

    iVar6 = (int)*(short *)(param_1 + 0x30) - (param_1[1] * iVar10) / iVar11;
    if (iVar6 < 0) break;
    if (0xf < iVar6) {
      iVar6 = 0xf;
    }

    uVar3 = (int)(local_48 * iVar6) / 0xf;
    iVar5 = (int)(local_44 * iVar6) / 0xf;
    iVar7 = (int)(local_40 * iVar6) / 0xf;

    local_3c = (int)uVar3 >> 1 | (iVar5 >> 1) << 8 | (iVar7 >> 1) << 0x10 | 0x2000000;
    local_38 = (int)uVar3 >> 2 | (iVar5 >> 2) << 8 | (iVar7 >> 2) << 0x10 | 0x2000000;

    iVar9 = (int)*(short *)(param_1 + 2) + (*(short *)(param_1 + 6) * iVar10) / iVar11;

    puVar4 = (undefined2 *)FUN_8007d024_wrapper_2args(param_2,uVar3 | iVar5 * 0x100 | iVar7 * 0x10000);

    uVar8 = (undefined2)iVar9;
    *puVar4 = uVar8;
    sVar1 = *(short *)(param_1 + 4);
    sVar2 = *(short *)(param_1 + 8);
    puVar4[3] = 2;
    puVar4[2] = (undefined2)local_34;
    puVar4[1] = sVar1 + sVar2;

    FUN_arcade__80011bb0(auStack_148,iVar10);

    iVar5 = FUN_8006ad3c(param_3,auStack_148,(int)param_1[0xb]);
    iVar7 = (iVar9 - (iVar5 >> 1)) + -1;

    if (local_2c < iVar7) {

      *(uint *)(param_3 + 0x14) = local_3c;
      FUN_8006ac90(param_3,auStack_148,iVar7,local_30,(int)param_1[0xb]);

      local_2c = iVar7 + iVar5 + 1;

      puVar4 = (undefined2 *)FUN_8007f7f4(param_2,local_38);
      puVar4[2] = uVar8;
      *puVar4 = uVar8;

      puVar4[1] = *(short *)(param_1 + 4) +
                  (short)(((int)*(short *)(param_1 + 8) * (((0xf - iVar6) * (0xf - iVar6)) / 0xf)) /
                         0xf);
      puVar4[3] = *(short *)(param_1 + 4) + *(short *)(param_1 + 8);
    }

    if (iVar10 == iVar11 + -1) {

      *(uint *)(param_3 + 0x14) = local_3c;

      iVar6 = FUN_8006ad3c(param_3,&DAT_800f85ac,1);
      FUN_8006ac90(param_3,&DAT_800f85ac,
                   (((int)*(short *)(param_1 + 2) + (int)*(short *)(param_1 + 6)) - iVar6) + -5,
                   (int)*(short *)(param_1 + 4) + (int)*(short *)(param_1 + 8) + -2,1);
    }

    iVar10 = iVar10 + 1;
  }
  return;
}

void FUN_arcade__80012d38(int renderData,undefined4 graphicsContext,undefined4 additionalParam,int renderMode)

{
  byte bVar1 __attribute__((unused));
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined2 *puVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined2 local_30;
  int param_1 = renderData;
  undefined4 param_2 = graphicsContext;
  undefined4 param_3 = additionalParam;
  int param_4 = renderMode;

  sVar4 = *(short *)(param_1 + 8);

  if (param_4 == 0) {

    bVar1 = *(byte *)(param_1 + 0x14);
    bVar2 = *(byte *)(param_1 + 0x15);
    bVar3 = *(byte *)(param_1 + 0x16);
    iVar11 = (int)*(short *)(param_1 + 0x32);
    psVar8 = *(short **)(param_1 + 0x28);
  }
  else {

    bVar1 = *(byte *)(param_1 + 0x18);
    bVar2 = *(byte *)(param_1 + 0x19);
    bVar3 = *(byte *)(param_1 + 0x1a);
    psVar8 = *(short **)(param_1 + 0x2c);
    iVar11 = *(short *)(param_1 + 0x38) * 10;
  }

  sVar5 = *(short *)(param_1 + 0x40);
  iVar12 = 0;

  if (0 < *(short *)(param_1 + 0x40)) {

    iVar13 = 0;
    iVar10 = 0;
    iVar14 = 0;
    uVar16 = 0;

    do {

      iVar6 = (int)*(short *)(param_1 + 0x30) - (*(char *)(param_1 + 1) * iVar12) / (int)sVar5;
      iVar9 = 0xf - iVar6;
      if (iVar6 < 0) {
        return;
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }

      iVar6 = iVar10;
      iVar15 = iVar14;
      uVar17 = uVar16;

      if (iVar13 <= *(short *)(param_1 + 0x20)) {

        uVar17 = (uint)~(int)*psVar8 >> 0x1f;

        iVar6 = (int)*(short *)(param_1 + 2) + (*(short *)(param_1 + 6) * iVar12) / (int)sVar5;

        iVar15 = ((int)*(short *)(param_1 + 4) + (int)sVar4) -
                 ((((int)sVar4 * (int)*psVar8) / iVar11) * (((0xf - iVar9) * (0xf - iVar9)) / 0xf))
                 / 0xf;

        if ((0 < iVar12) && ((uVar17 & uVar16) != 0)) {

          puVar7 = (undefined2 *)
                   FUN_8007f7f4(param_2,(uint)bVar1 + (int)((0xff - (uint)bVar1) * iVar9) / 0xf |
                                        ((uint)bVar2 + (int)((0xff - (uint)bVar2) * iVar9) / 0xf) *
                                        0x100 | ((uint)bVar3 +
                                                (int)((0xff - (uint)bVar3) * iVar9) / 0xf) * 0x10000
                               );

          *puVar7 = (short)iVar10;
          puVar7[2] = (short)iVar6;
          local_30 = (undefined2)iVar14;
          puVar7[3] = (short)iVar15;
          puVar7[1] = local_30;
        }
      }

      psVar8 = psVar8 + 1;
      iVar12 = iVar12 + 1;
      sVar5 = *(short *)(param_1 + 0x40);
      iVar13 = iVar13 + 0xfa;

      iVar10 = iVar6;
      iVar14 = iVar15;
      uVar16 = uVar17;
    } while (iVar12 < *(short *)(param_1 + 0x40));
  }
  return;
}

void FUN_arcade__80013050(char *renderData,undefined4 graphicsContext,undefined4 outputBuffer)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  int local_20;
  int local_1c;
  char *param_1 = renderData;
  undefined4 param_2 = graphicsContext;
  undefined4 param_3 = outputBuffer;

  uVar3 = (uint)*(short *)(param_1 + 0x30);

  if (uVar3 != 0xffffffff) {
    uVar4 = ~uVar3;

    if ((int)uVar3 < -1) {

      iVar5 = (int)*(short *)(param_1 + 8) + (int)param_1[0xc] >> 1;
      iVar2 = (int)((int)*(short *)(param_1 + 6) * (0xf - uVar4)) / 0xf;

      local_24 = (short)(iVar2 >> 1);
      local_28 = *(short *)(param_1 + 2) + local_24;
      sVar1 = (short)iVar2;
      local_24 = (*(short *)(param_1 + 6) + sVar1) - local_24;

      local_26 = (short)((int)(iVar5 * uVar4) / 0xf);
      local_22 = local_26 * 2;
      local_20 = 0;
      local_26 = (*(short *)(param_1 + 4) + (short)iVar5) - local_26;

      iVar2 = (int)(uVar4 * 0xc0) / 0xf;
      local_1c = iVar2;

      FUN_arcade__80011a50(param_2,&local_28);

      local_1c = 0;
      local_28 = *(short *)(param_1 + 2) - sVar1;
      local_20 = iVar2;

      FUN_arcade__80011a50(param_2,&local_28);

      iVar2 = 0x20;
    }
    else {

      FUN_arcade__800124a0(param_1,param_2,param_3,0);
      FUN_arcade__800124a0(param_1,param_2,param_3,1);
      FUN_arcade__80012948(param_1,param_2,param_3);
      FUN_arcade__80012d38(param_1,param_2,param_3,0);
      FUN_arcade__80012d38(param_1,param_2,param_3,1);

      iVar2 = (int)*param_1;
    }

    FUN_8007da44_wrapper_2args(param_2,iVar2);
  }
  return;
}

undefined * FUN_arcade__8001336c(void)

{

  return &DAT_800bf4a8;
}

void FUN_arcade__80013378
               (undefined4 *destination,undefined4 sourceParam1,undefined4 sourceParam2,undefined4 *sourceData)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *param_1 = destination;
  undefined4 param_2 = sourceParam1;
  undefined4 param_3 = sourceParam2;
  undefined4 *param_4 = sourceData;

  puVar1 = param_1 + 2;
  puVar2 = param_4 + 0x20;

  *param_1 = param_2;
  param_1[1] = param_3;

  do {

    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];

    *puVar1 = *param_4;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;

    param_4 = param_4 + 4;
    puVar1 = puVar1 + 4;
  } while (param_4 != puVar2);

  *puVar1 = *param_4;
  return;
}

bool FUN_arcade__800133c0(short *dataStructure)

{
  int currentValue;

  currentValue = (int)*dataStructure;

  if (currentValue < 100) {
    undefined4 *dataPtr = (undefined4 *)(dataStructure + currentValue * 0x52 + 2);
    FUN_arcade__80013378(dataPtr, 0, 0, dataPtr);

    *dataStructure = *dataStructure + 1;
  }

  return currentValue < 100;
}

void FUN_arcade__8001363c(undefined4 functionParam1,undefined4 functionParam2)

{

  FUN_8005d8a0(functionParam2,functionParam1);
  FUN_8005d768(functionParam2);
  return;
}

void FUN_arcade__80013674(int dataPointer,uint processingValue)

{
  int calculatedOffset;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint param_2 = processingValue;
  int iVar1 = calculatedOffset;

  calculatedOffset = dataPointer + 8;

  if ((*(uint *)(dataPointer + 4) >> 3 & 1) != 0) {

    calculatedOffset = calculatedOffset + *(int *)(dataPointer + 8);
  }
  iVar1 = calculatedOffset;
  local_10 = (undefined2)((param_2 & 0xf) << 6);
  local_e = (undefined2)((param_2 & 0x10) << 4);
  local_c = *(undefined2 *)(iVar1 + 8);
  local_a = *(undefined2 *)(iVar1 + 10);
  FUN_8007bbd4(iVar1,&local_10);
  FUN_8007af30();
  return;
}

void FUN_arcade__800136f0(undefined2 *dataPointer)

{
  *dataPointer = 0;
  return;
}

undefined4 FUN_arcade__800136f8(short *param_1,int param_2)

{
  short currentState;
  int dataOffset;
  undefined tempBuffer [8];

  dataOffset = FUN_8005d718(0xc);
  dataOffset = DAT_801c93e8 + dataOffset;
  FUN_8005d768(0xc);

  currentState = *param_1;

  if (currentState != 1) {
    if (1 < currentState) {
      if (currentState != 2) {
        return 1;
      }

      dataOffset = FUN_arcade__80015960(param_2 + 0x224,tempBuffer);
      if (dataOffset == 0) {
        *param_1 = 1;
        return 1;
      }
      if (dataOffset != 2) {
        return 1;
      }
      *(undefined *)(param_2 + 0x226) = 0;
      goto LAB_arcade__80013808;
    }
    if (currentState != 0) {
      return 1;
    }

    if (*(char *)(param_2 + 0x226) != '\0') {
      return 0;
    }
    *(undefined *)(param_2 + 0x226) = 1;
    *param_1 = *param_1 + 1;
  }

  dataOffset = FUN_arcade__80015840(param_2 + 0x224,&DAT_80129860,dataOffset);
  if (dataOffset == 0) {
    return 1;
  }

LAB_arcade__80013808:
  *param_1 = *param_1 + 1;
  return 1;
}

void FUN_arcade__80013844(int param_1,int param_2,int param_3,int param_4)

{
  int dataOffset;
  short *graphicsBuffer;
  uint *colorBuffer;
  short coordinate1;
  short coordinate2;
  uint colorValue;
  int graphicsContext;
  int graphicsOffset;
  int textWidth;
  int textHeight;
  int renderData;
  short tempValue;
  void (*func_ptr)(int, int);

  graphicsContext = *(int *)(param_3 + 8);
  renderData = *(int *)(param_1 + 0x1c4);
  graphicsOffset = graphicsContext + 0x10;

  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {

      FUN_8007da80(renderData,&DAT_80129830);
      *(int *)(renderData + 0x10) = graphicsOffset;

      textHeight = 0x22 - (param_4 >> 2);
      dataOffset = FUN_8006ad3c(renderData,*(undefined4 *)(param_2 + 0x10),textHeight);
      textWidth = 0x160 - dataOffset >> 1;

      graphicsBuffer = (short *)FUN_8007d024_wrapper_2args(graphicsOffset,param_4 * 0xf5 >> 7 | (param_4 * 0x5c >> 7) << 8 |
                                           (param_4 * 0x19 >> 7) << 0x10);
      *graphicsBuffer = (short)textWidth + 1;
      graphicsBuffer[1] = 0x4e;
      tempValue = (short)dataOffset;
      graphicsBuffer[3] = 2;
      graphicsBuffer[2] = tempValue;

      *(int *)(renderData + 0x14) =
           param_4 * 0xf5 >> 8 | (param_4 * 0x5c >> 8) << 8 | (param_4 * 0x19 >> 8) << 0x10;

      FUN_8006ac90(renderData,*(undefined4 *)(param_2 + 0x10),textWidth,0x4c,textHeight);
      *(undefined4 *)(renderData + 0x14) = 0;
      FUN_8006ac90(renderData,*(undefined4 *)(param_2 + 0x10),textWidth + 3,0x4f,textHeight);

      colorValue = *(uint *)(param_2 + 0xc);
      graphicsContext = graphicsContext + 0x18;
      colorBuffer = FUN_8007e0b0_with_context((undefined4 *)(void *)(uintptr_t)graphicsContext);

      colorBuffer[6] = 0;
      colorBuffer[4] = 0;
      *(undefined2 *)(colorBuffer + 5) = 0;
      *(undefined2 *)(colorBuffer + 1) = 0;
      *(undefined2 *)(colorBuffer + 7) = 0x160;
      *(undefined2 *)(colorBuffer + 3) = 0x160;

      colorValue = (int)((colorValue & 0xff) * param_4) >> 7 |
              ((int)((colorValue >> 8 & 0xff) * param_4) >> 7) << 8 |
              ((int)((colorValue >> 0x10 & 0xff) * param_4) >> 7) << 0x10 | 0x3a000000;
      colorBuffer[2] = colorValue;
      *colorBuffer = colorValue;

      coordinate2 = (short)(param_4 * 0x2d >> 7);
      coordinate1 = 0x2d - coordinate2;
      *(short *)((int)colorBuffer + 0xe) = coordinate1;
      *(short *)((int)colorBuffer + 6) = coordinate1;
      coordinate2 = coordinate2 + 0x2d;
      *(short *)((int)colorBuffer + 0x1e) = coordinate2;
      *(short *)((int)colorBuffer + 0x16) = coordinate2;

      FUN_8007da44_wrapper_2args(graphicsContext,0x220);
    }

    *(int *)(param_1 + 0x1c8) = param_2;
    if (*(code **)(param_2 + 8) != (code *)0x0) {
      func_ptr = (void (*)(int, int))*(code **)(param_2 + 8);
      func_ptr(param_1,param_3);
    }
  }
  return;
}

// Implementation of FUN_8007e0b0_wrapper
uint * FUN_8007e0b0_wrapper(void) {
    // This is a wrapper that calls the graphics buffer allocation function
    // The actual implementation should return a pointer to a graphics buffer
    // For now, return NULL as this needs proper implementation
    return (uint *)0;
}

#pragma GCC diagnostic pop

