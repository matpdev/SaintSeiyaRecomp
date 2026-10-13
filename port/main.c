/*
 * Saint Seiya: The Hades, native: entry point.
 *
 *     sstheh <path to SLES_541.62> [-q]
 *
 * Loads the executable's data into guest RAM (the code itself is the recompiled C linked into this
 * program) and starts the main thread at the ELF entry point.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"

int main(int argc, char **argv) {
    const char *elf = "disc/SLES_541.62";
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-q")) rt_verbose = 0;
        else elf = argv[i];
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
