#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <signal.h>
#include <sys/syscall.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_opengl.h>
#include <psyz.h>
#include "gt2_global_vars_clean.h"
#include "gt2_types.h"
#include "disk_path.h"

/* Forward declaration of start() function from decompiled code */
extern undefined4 start(undefined4 param_1, undefined4 param_2);

/* No-op for DMA callback so DMACallback() does not call NULL (Linux has no PS1 DMA) */
static void dma_callback_noop(void) {}
static code dma_callback_storage = (code)dma_callback_noop;

/* #region agent log - use syscall(SYS_write) so handler is async-signal-safe and avoids psyz write macro */
static int g_debug_log_fd = -1;
static void segv_handler(int sig, siginfo_t *si, void *uc) {
    (void)uc;
    if (g_debug_log_fd >= 0 && si && sig == SIGSEGV) {
        const char msg[] = "{\"event\":\"SIGSEGV\",\"fault_addr\":\"0x";
        write(g_debug_log_fd, msg, sizeof(msg) - 1);
        uintptr_t a = (uintptr_t)si->si_addr;
        char hex[20];
        int i, n = 0;
        for (i = 0; i < 16; i++) { hex[15 - i] = "0123456789abcdef"[a & 0xf]; a >>= 4; }
        hex[16] = '\0';
        for (i = 0; i < 16 && hex[i] == '0'; i++) n++;
        write(g_debug_log_fd, hex + n, 16 - n);
        write(g_debug_log_fd, "\"}\n", 3);
    }
    signal(sig, SIG_DFL);
    raise(sig);
}
/* #endregion agent log */

/* Stub for HookEntryInt - PS1 exception handler setup */  
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
    
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) {
        fprintf(stderr, "SDL initialization failed: %s\n", SDL_GetError());
        return 1;
    }
    
    // Set OpenGL attributes
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    
    // Create window
    SDL_Window* window = SDL_CreateWindow("GT2 Linux Port", 640, 480, SDL_WINDOW_OPENGL);
    if (!window) {
        fprintf(stderr, "Window creation failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    
    // Create OpenGL context
    SDL_GLContext context = SDL_GL_CreateContext(window);
    if (!context) {
        fprintf(stderr, "OpenGL context creation failed: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    
    // Basic OpenGL setup
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    
    // Allocate memory for DAT_800a8d5c (used as a large buffer)
    // Size based on disassembly: 0x120654 bytes needed
    DAT_800a8d5c = malloc(0x120654 + 1024); // Add some extra space
    if (DAT_800a8d5c == NULL) {
        fprintf(stderr, "Failed to allocate memory for DAT_800a8d5c\n");
        SDL_GL_DeleteContext(context);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    fprintf(stderr, "Allocated buffer at %p for DAT_800a8d5c\n", DAT_800a8d5c);
    
    // Allocate memory for DAT_800a7b7c (used as a buffer by INTR_OBJ_69C)
    // Size based on usage: 0x41a bytes needed
    DAT_800a7b7c = malloc(0x41a + 1024); // Add some extra space
    if (DAT_800a7b7c == NULL) {
        fprintf(stderr, "Failed to allocate memory for DAT_800a7b7c\n");
        free(DAT_800a8d5c);
        SDL_GL_DeleteContext(context);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    fprintf(stderr, "Allocated buffer at %p for DAT_800a7b7c\n", DAT_800a7b7c);
    
    /* Resolve disk image (CUE or ISO) for PSY-Z CD emulation; optional */
    char disk_path[GT2_DISK_PATH_MAX];
    int disk_rc = gt2_resolve_disk_path(argc, argv, disk_path, sizeof(disk_path));
    if (disk_rc == 0) {
        if (Psyz_SetDiskPath(disk_path) == 0) {
            fprintf(stderr, "GT2: Using disk image: %s\n", disk_path);
        } else {
            fprintf(stderr, "GT2: Failed to set disk path: %s\n", disk_path);
        }
    } else if (disk_rc == -1) {
        fprintf(stderr, "GT2: Disk path resolution failed\n");
    }

    /* Set DMA callback to no-op so DMACallback() does not segfault (no real DMA on Linux) */
    DAT_800a8be8 = &dma_callback_storage;

    /* Initialize parameters for start(); on PS1 these would come from BIOS */
    undefined4 param_1 = 0;
    undefined4 param_2 = 0;

    /* Call the original start() function */
    undefined4 result = start(param_1, param_2);
    
    fprintf(stderr, "GT2 Linux Port - Exited with code: %u\n", (unsigned int)result);
    
    // Cleanup
    free(DAT_800a7b7c);
    free(DAT_800a8d5c);
    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return (int)result;
}
