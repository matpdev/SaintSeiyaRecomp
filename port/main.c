/*
 * Saint Seiya: The Hades, native: entry point.
 *
 *     sstheh [SLES_541.62 | SLPS_257.44] [--iso game.iso] [-q | -v]
 *     sstheh --compile-vu     compile the VU1 programs ahead of time, then exit
 *     sstheh --gs-replay file [warm]   replay a recording of the GS thread's work (port/gs/gsrec.c)
 *
 * Loads the executable's data into guest RAM (the code itself is the recompiled C linked into this
 * program: the European release's and the Japanese one's, picked by the executable, port/hle/game.c)
 * and starts the main thread at the ELF entry point.
 */
#define _GNU_SOURCE   /* pthread_setname_np */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"
#include "platform.h"
#include "../hle/game.h"

int cdvd_open(const char *path);
int cdvd_find(const char *path, u32 *lsn, u32 *size);
int cdvd_read(u32 lsn, u32 count, u8 *out);
int display_window(void);
void prof_start(void);
void perf_calibrate(void);
int display_shots(const int *at, int n);
void display_set_presses(const char *spec);
int vu_jit_ahead(int wait, int *queued);
int gsrec_replay(const char *path, int warm);

static u32 entry;

/* The executable the disc boots (SYSTEM.CNF: BOOT2 = cdrom0:\NAME;1), for disc/NAME: with both releases'
 * executables in disc/, the one of the image opened. NULL when it can't be read. */
static const char *boot_name(void) {
    static char name[32];
    u32 lsn, size;
    u8 buf[2048];
    if (!cdvd_find("\\SYSTEM.CNF;1", &lsn, &size) || cdvd_read(lsn, 1, buf)) return NULL;
    buf[size < sizeof buf ? size : sizeof buf - 1] = 0;
    const char *p = strstr((const char *)buf, "cdrom0:\\");
    if (!p) return NULL;
    p += 8;
    int n = 0;
    while (p[n] && p[n] != ';' && p[n] != '\r' && p[n] != '\n' && n < (int)sizeof name - 1) { name[n] = p[n]; n++; }
    name[n] = 0;
    return n ? name : NULL;
}

/* which release the executable is (port/hle/game.c): 0, or 1 when it is none the port was made from */
static int select_release(const char *elf) {
    FILE *f = fopen(elf, "rb");
    if (!f) return 1;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    u8 *b = malloc(n > 0 ? (size_t)n : 1);
    int ok = n > 0 && fread(b, 1, (size_t)n, f) == (size_t)n && game_select(b, (u32)n) >= 0;
    free(b);
    fclose(f);
    if (!ok) fprintf(stderr, "%s is not an executable this port was made from: the European (SLES_541.62) "
                             "or the Japanese (SLPS_257.44) release, unmodified\n", elf);
    return !ok;
}

static void *game_main(void *arg) {
    (void)arg;
    kernel_init();
    kernel_run(entry);
    return NULL;
}

/* disc/<name> where the game is: the folder it is run from, else next to the executable (a release:
 * the setup puts disc/ there), else one folder up (build/sstheh in the repository), else in the
 * settings folder (~/.local/share/sstheh/disc: the AppImage, which can't hold it) */
static const char *disc_file(const char *name) {
    static char paths[2][1100];
    static int k;
    char *out = paths[k++ & 1], exe[1024];
    snprintf(out, 1100, "disc/%s", name);
    if (access(out, R_OK) == 0) return out;
    if (platform_exe_dir(exe, sizeof exe)) return out;
    snprintf(out, 1100, "%s/disc/%s", exe, name);
    if (access(out, R_OK) == 0) return out;
    snprintf(out, 1100, "%s/../disc/%s", exe, name);
    if (access(out, R_OK) == 0) return out;
    platform_data_dir(exe, sizeof exe);
    snprintf(out, 1100, "%s/disc/%s", exe, name);
    if (access(out, R_OK) == 0) return out;
    snprintf(out, 1100, "disc/%s", name);
    return out;
}

int main(int argc, char **argv) {
    const char *elf = NULL, *iso = disc_file("game.iso");
    int shots[64], nshots = 0, compile_vu = 0, warm = 30;
    const char *replay = NULL;
    const char *gen_vu = NULL;          /* the build: the game's VU1 programs written as C (port/gs/vu_jit.c) */
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
        else if (!strcmp(argv[i], "--compile-vu")) compile_vu = 1;
        else if (!strcmp(argv[i], "--gen-vu") && i + 1 < argc) gen_vu = argv[++i];
        else if (!strcmp(argv[i], "--gs-replay") && i + 1 < argc) {
            replay = argv[++i];
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') warm = atoi(argv[++i]);
        }
        else elf = argv[i];
    }
    if (gen_vu && !elf) elf = disc_file("SLES_541.62");
    if (gen_vu) {                       /* only the executable is needed */
        int vu_jit_generate(const char *dir);
        memory_init();
        if (memory_load_elf(elf, &entry)) { fprintf(stderr, "cannot load %s\n", elf); return 1; }
        if (select_release(elf)) return 1;
        return vu_jit_generate(gen_vu);
    }
    if (cdvd_open(iso)) {
        fprintf(stderr, "cannot open the disc image %s (use --iso <file>)\n", iso);
        return 1;
    }
    if (!elf) {                         /* the executable the disc boots: disc/SLES_541.62 or disc/SLPS_257.44 */
        const char *b = boot_name();
        elf = disc_file(b ? b : "SLES_541.62");
    }
    memory_init();
    if (memory_load_elf(elf, &entry)) {
        fprintf(stderr, "cannot load %s\n", elf);
        return 1;
    }
    if (select_release(elf)) return 1;
    rt_log("main", "loaded %s, entry %08X", elf, entry);
    {
        /* the VU1 programs not compiled yet are compiled in the background from the start */
        int queued, n = vu_jit_ahead(compile_vu, &queued);
        if (compile_vu) {
            printf("%d VU1 programs, %d compiled now\n", n, queued);
            return n ? 0 : 1;
        }
    }
    perf_calibrate();
    if (replay) return gsrec_replay(replay, warm);
    prof_start();
    {
        extern int gpu_on;
        const char *r = getenv("SSTHEH_GS");
        gpu_on = !(r && !strcmp(r, "sw"));
    }
    /* the game runs on host threads of its own; this thread shows the picture */
    pthread_t game;
    pthread_attr_t a;
    pthread_attr_init(&a);
    pthread_attr_setstacksize(&a, 64 << 20);
    pthread_create(&game, &a, game_main, NULL);
    pthread_setname_np(game, "game");
    if (nshots) return display_shots(shots, nshots);
    return display_window();
}
