/*
 * Saint Seiya: The Hades, native: entry point.
 *
 *     sstheh [SLES_541.62] [--iso game.iso] [-q | -v]
 *
 * Loads the executable's data into guest RAM (the code itself is the recompiled C linked into this
 * program) and starts the main thread at the ELF entry point.
 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"

int cdvd_open(const char *path);
int display_window(void);
int display_shots(const int *at, int n);
void display_set_presses(const char *spec);

static u32 entry;

static void *game_main(void *arg) {
    (void)arg;
    kernel_init();
    kernel_run(entry);
    return NULL;
}

int main(int argc, char **argv) {
    const char *elf = "disc/SLES_541.62", *iso = "disc/game.iso";
    int shots[64], nshots = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-q")) rt_verbose = 0;
        else if (!strcmp(argv[i], "-v")) rt_verbose = 2;
        else if (!strcmp(argv[i], "-vv")) rt_verbose = 3;
        else if (!strcmp(argv[i], "--trace")) rt_trace_on = 1;
        else if (!strcmp(argv[i], "--press") && i + 1 < argc) display_set_presses(argv[++i]);
        else if (!strcmp(argv[i], "--shot") && i + 1 < argc) {
            /* --shot 100,200,300: save the picture at those vertical blanks, no window */
            for (char *p = argv[++i]; *p && nshots < 64; p++) {
                shots[nshots++] = (int)strtol(p, &p, 10);
                if (!*p) break;
            }
        }
        else if (!strcmp(argv[i], "--iso") && i + 1 < argc) iso = argv[++i];
        else elf = argv[i];
    }
    if (cdvd_open(iso)) {
        fprintf(stderr, "cannot open the disc image %s (use --iso <file>)\n", iso);
        return 1;
    }
    memory_init();
    if (memory_load_elf(elf, &entry)) {
        fprintf(stderr, "cannot load %s\n", elf);
        return 1;
    }
    rt_log("main", "loaded %s, entry %08X", elf, entry);
    /* the game runs on host threads of its own; this thread shows the picture */
    pthread_t game;
    pthread_attr_t a;
    pthread_attr_init(&a);
    pthread_attr_setstacksize(&a, 64 << 20);
    pthread_create(&game, &a, game_main, NULL);
    if (nshots) return display_shots(shots, nshots);
    return display_window();
}
