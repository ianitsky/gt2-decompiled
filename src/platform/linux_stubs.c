// Linux stubs for PS1 BIOS functions that aren't available on Linux
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// Stub for HookEntryInt - PS1 exception handler setup
// This is used to set up exception handlers for interrupts
void HookEntryInt(uint32_t *contextBuffer) {
    if (contextBuffer != NULL) {
        // On Linux, we don't need to set up CPU exception handlers
        // Just fill the context with dummy data to prevent crashes
        memset(contextBuffer, 0, 128);
    }
}

// Stub for INTR_OBJ_26C - Interrupt related function
void INTR_OBJ_26C(void) {
    // Stub - no operation needed on Linux
}

// Stub for INTR_OBJ_69C - Initialize interrupt object
void INTR_OBJ_69C(void *buffer, uint32_t size) {
    if (buffer != NULL) {
        memset(buffer, 0, size);
    }
}

