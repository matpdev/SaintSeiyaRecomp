/*
 * Saint Seiya: The Hades, native: entry point.
 *
 *     sstheh [SLES_541.62] [--iso game.iso] [-q | -v]
 *
 * Loads the executable's data into guest RAM (the code itself is the recompiled C linked into this
 * program) and starts the main thread at the ELF entry point.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"

int cdvd_open(const char *path);

int main(int argc, char **argv) {
    const char *elf = "disc/SLES_541.62", *iso = "disc/game.iso";
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-q")) rt_verbose = 0;
        else if (!strcmp(argv[i], "-v")) rt_verbose = 2;
        else if (!strcmp(argv[i], "--iso") && i + 1 < argc) iso = argv[++i];
        else elf = argv[i];
    }
    if (cdvd_open(iso)) {
        fprintf(stderr, "cannot open the disc image %s (use --iso <file>)\n", iso);
        return 1;
    }
    memory_init();
    u32 entry;
    if (memory_load_elf(elf, &entry)) {
        fprintf(stderr, "cannot load %s\n", elf);
        return 1;
    }
    rt_log("main", "loaded %s, entry %08X", elf, entry);
    kernel_init();
    kernel_run(entry);
    return 0;
}
