#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gt2_global_vars_clean.h"
#include "gt2_types.h"

// Forward declaration of start() function from decompiled code
extern undefined4 start(undefined4 param_1, undefined4 param_2);

// Stub for HookEntryInt - PS1 exception handler setup  
// This is used to set up exception handlers for interrupts on PS1
void HookEntryInt(uint32_t *contextBuffer) {
    if (contextBuffer != NULL) {
        // On Linux, we don't need to set up CPU exception handlers
        // Just initialize the context buffer to dummy data to prevent crashes
        memset(contextBuffer, 0, 128);
    }
}

int main(int argc, char *argv[]) {
    fprintf(stderr, "GT2 Linux Port - Starting...\n");
    fprintf(stderr, "Arguments: %d\n", argc);
    
    // Allocate memory for DAT_800a8d5c (used as a large buffer)
    // Size based on disassembly: 0x120654 bytes needed
    DAT_800a8d5c = malloc(0x120654 + 1024); // Add some extra space
    if (DAT_800a8d5c == NULL) {
        fprintf(stderr, "Failed to allocate memory for DAT_800a8d5c\n");
        return 1;
    }
    fprintf(stderr, "Allocated buffer at %p for DAT_800a8d5c\n", DAT_800a8d5c);
    
    // Allocate memory for DAT_800a7b7c (used as a buffer by INTR_OBJ_69C)
    // Size based on usage: 0x41a bytes needed
    DAT_800a7b7c = malloc(0x41a + 1024); // Add some extra space
    if (DAT_800a7b7c == NULL) {
        fprintf(stderr, "Failed to allocate memory for DAT_800a7b7c\n");
        return 1;
    }
    fprintf(stderr, "Allocated buffer at %p for DAT_800a7b7c\n", DAT_800a7b7c);
    
    // Initialize parameters for start() function
    // On PS1, these would be passed from the BIOS
    // For Linux, we use default values
    undefined4 param_1 = 0;
    undefined4 param_2 = 0;
    
    // Handle command line arguments if needed
    if (argc > 1) {
        // Could parse arguments here if needed
        fprintf(stderr, "Note: Command line arguments are not yet fully supported\n");
    }
    
    // Call the original start() function
    undefined4 result = start(param_1, param_2);
    
    fprintf(stderr, "GT2 Linux Port - Exited with code: %u\n", (unsigned int)result);
    
    return (int)result;
}
