#include <stdio.h>
#include <stdlib.h>
#include "gt2_global_vars_clean.h"
#include "gt2_types.h"

// Forward declaration of start() function from decompiled code
extern undefined4 start(undefined4 param_1, undefined4 param_2);

int main(int argc, char *argv[]) {
    fprintf(stderr, "GT2 Linux Port - Starting...\n");
    fprintf(stderr, "Arguments: %d\n", argc);
    
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
