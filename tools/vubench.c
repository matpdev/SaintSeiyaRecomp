/*
 * VU1 bench: runs again, through the translated programs (port/gs/vu_jit.c), the VU1 programs
 * recorded in a game with SSTHEH_VUREC=file, and checks or times them.
 *
 *     gcc -O2 -march=native -ffp-contract=off -rdynamic -Iport/runtime -Iport/gs -o build/vubench tools/vubench.c \
 *         port/gs/vu_jit.c port/gs/vu_exec.c -lm
 *     build/vubench rec.bin check      each run ends as it did in the game (registers, data memory)
 *     build/vubench rec.bin time [N]   cycles per program entry (best of N runs, default 5)
 *
 * SCRAMBLE=1 with check: start each run with other flags (the ones a program inherits). The programs
 * are compiled as the game does (in ~/.cache/sstheh/vu, or $XDG_CACHE_HOME/sstheh/vu), and they need
 * the sources: build/vubench finds them next to it, as the game does. XGKICK draws nothing here.
 */
#define _GNU_SOURCE
#include <fcntl.h>
#include <stdarg.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <x86intrin.h>

#include "perf.h"
#include "vu.h"
#include "vu_internal.h"

int vu_jit_run(Vu *v);
void vu_jit_code_changed(void);

/* what vu_jit.c and vu_exec.c need from the rest of the game */
u8 vu1_mem[0x4000] __attribute__((aligned(16))), vu1_code[0x4000] __attribute__((aligned(16)));
u8 vu0_mem[0x1000] __attribute__((aligned(16))), vu0_code[0x1000] __attribute__((aligned(16)));
u8 *rt_ram;
PerfCounters perf;
volatile int perf_timing;
double perf_tsc_ns;
int rt_verbose;
u32 kernel_vblank_count(void) { return 0; }
void rt_log(const char *area, const char *fmt, ...) {
    if (!getenv("VUBENCH_LOG")) return;
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "[%s] ", area);
    vfprintf(stderr, fmt, ap);
    fputc('\n', stderr);
    va_end(ap);
}

void gif_path1(const u8 *mem, u32 addr) { (void)mem; (void)addr; }

/* a record: Vu, data and code memories, TOP, ITOP as the program starts; Vu, data memory as it ends */
#define REC_SIZE (2 * sizeof(Vu) + 3 * 0x4000 + 8)

static Vu v __attribute__((aligned(64)));

static void load(const u8 *r, int scramble, size_t k) {
    static u8 code[0x4000];
    static int have_code;
    if (!have_code || memcmp(code, r + sizeof v + 0x4000, 0x4000)) {
        memcpy(code, r + sizeof v + 0x4000, 0x4000);
        memcpy(vu1_code, code, 0x4000);
        vu_jit_code_changed();
        have_code = 1;
    }
    memcpy(&v, r, sizeof v);
    memcpy(vu1_mem, r + sizeof v, 0x4000);
    memcpy(&vu1_top, r + sizeof v + 0x8000, 4);
    memcpy(&vu1_itop, r + sizeof v + 0x8004, 4);
    v.mem = vu1_mem;
    v.code = vu1_code;
    if (scramble) {
        u32 x = (u32)k * 2654435761u;
        v.mac = x & 0xFF;
        v.status = (x >> 8) & 0xFFF;
        v.clip = (x >> 8) & 0xFFFFFF;
        for (int j = 0; j < 4; j++) {
            v.fl_mac[j] = (x >> j) & 0xFF;
            v.fl_status[j] = (x >> (j + 3)) & 0xFFF;
            v.fl_clip[j] = (x >> (j + 5)) & 0xFFFFFF;
        }
    }
}

int main(int argc, char **argv) {
    if (argc < 3) { fprintf(stderr, "vubench rec.bin check | time [N]\n"); return 2; }
    int fd = open(argv[1], O_RDONLY);
    struct stat st;
    if (fd < 0 || fstat(fd, &st)) { perror(argv[1]); return 2; }
    size_t n = (size_t)st.st_size / REC_SIZE;
    const u8 *recs = mmap(NULL, (size_t)st.st_size, PROT_READ, MAP_PRIVATE | MAP_POPULATE, fd, 0);
    int timing = !strcmp(argv[2], "time"), reps = timing && argc > 3 ? atoi(argv[3]) : 5;
    int scramble = getenv("SCRAMBLE") != NULL;

    /* the programs compile in the background: run everything until they are all there */
    for (int pass = 0; pass < 30; pass++) {
        size_t missing = 0;
        for (size_t k = 0; k < n; k++) {
            load(recs + k * REC_SIZE, 0, k);
            if (!vu_jit_run(&v)) missing++;
        }
        if (!missing) break;
        fprintf(stderr, "%zu runs not native yet: waiting for the compiler\n", missing);
        sleep(5);
    }

    u32 csr = _mm_getcsr();
    _mm_setcsr(csr | 0x8040);                           /* FTZ | DAZ, as vu_start() */
    static double cycles[0x800];
    static u32 runs[0x800];
    double total = 0;
    size_t interpreted = 0, differ = 0;
    for (size_t k = 0; k < n; k++) {
        const u8 *r = recs + k * REC_SIZE;
        u32 entry = 0;
        u64 best = ~0ull;
        for (int i = 0; i < (timing ? reps : 1); i++) {
            load(r, scramble, k);
            entry = (v.pc & 0x3FFF) / 8;
            u64 t0 = __rdtsc();
            int done = vu_jit_run(&v);
            u64 dt = __rdtsc() - t0;
            if (dt < best) best = dt;
            if (!done) interpreted++;
        }
        if (timing) {
            cycles[entry] += (double)best;
            runs[entry]++;
            total += (double)best;
            continue;
        }
        const u8 *end = r + sizeof v + 0x8008;
        Vu ev;
        memcpy(&ev, end, sizeof ev);
        if (memcmp(vu1_mem, end + sizeof ev, 0x4000) || memcmp(v.vf, ev.vf, sizeof v.vf) || memcmp(v.vi, ev.vi, sizeof v.vi)) {
            if (differ++ < 10) fprintf(stderr, "run %zu (from %03X) ends differently\n", k, entry * 8);
        }
    }
    _mm_setcsr(csr);
    if (timing) {
        printf("%zu runs, %zu not native, %.1f Mcycles\n", n, interpreted / reps, total / 1e6);
        for (int e = 0; e < 0x800; e++)
            if (runs[e]) printf("  from %03X: %6u runs, %8.2f Mcycles\n", e * 8, runs[e], cycles[e] / 1e6);
    } else printf("%zu runs, %zu not native, %zu end differently from the game\n", n, interpreted, differ);
    return differ != 0;
}
