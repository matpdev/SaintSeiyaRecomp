/* Linux / Windows differences: see platform.h */
#include "platform.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <malloc.h>
#else
#include <unistd.h>
#endif

int platform_exe_dir(char *out, size_t n) {
#ifdef _WIN32
    char exe[1024];
    DWORD k = GetModuleFileNameA(NULL, exe, sizeof exe);
    if (!k || k >= sizeof exe) return -1;
    for (char *c = exe; *c; c++) if (*c == '\\') *c = '/';
#else
    char exe[1024];
    ssize_t k = readlink("/proc/self/exe", exe, sizeof exe - 1);
    if (k <= 0) return -1;
    exe[k] = 0;
#endif
    char *slash = strrchr(exe, '/');
    if (!slash) return -1;
    *slash = 0;
    snprintf(out, n, "%s", exe);
    return 0;
}

void platform_data_dir(char *out, size_t n) {
    char base[1024];
#ifdef _WIN32
    const char *a = getenv("APPDATA");
    snprintf(base, sizeof base, "%s", a && *a ? a : ".");
    for (char *c = base; *c; c++) if (*c == '\\') *c = '/';
#else
    const char *d = getenv("XDG_DATA_HOME"), *h = getenv("HOME");
    if (d && *d) snprintf(base, sizeof base, "%s", d);
    else snprintf(base, sizeof base, "%s/.local/share", h ? h : "/tmp");
#endif
    mkdir(base, 0755);
    snprintf(out, n, "%s/sstheh", base);
    mkdir(out, 0755);
}

void *platform_aligned_alloc(size_t align, size_t size) {
#ifdef _WIN32
    return _aligned_malloc(size, align);
#else
    return aligned_alloc(align, (size + align - 1) / align * align);
#endif
}

void platform_aligned_free(void *p) {
#ifdef _WIN32
    _aligned_free(p);
#else
    free(p);
#endif
}

int platform_match(const char *p, const char *s) {
    for (; *p; p++, s++) {
        if (*p == '*') {
            while (p[1] == '*') p++;
            for (const char *t = s;; t++) {
                if (platform_match(p + 1, t)) return 1;
                if (!*t) return 0;
            }
        }
        if (!*s || (*p != '?' && *p != *s)) return 0;
    }
    return !*s;
}

double platform_cpu_seconds(void) {
#ifdef _WIN32
    FILETIME c, e, k, u;
    if (!GetProcessTimes(GetCurrentProcess(), &c, &e, &k, &u)) return 0;
    ULARGE_INTEGER a, b;
    a.LowPart = k.dwLowDateTime; a.HighPart = k.dwHighDateTime;
    b.LowPart = u.dwLowDateTime; b.HighPart = u.dwHighDateTime;
    return (double)(a.QuadPart + b.QuadPart) / 1e7;
#else
    struct timespec ts;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts);
    return ts.tv_sec + ts.tv_nsec / 1e9;
#endif
}

void platform_sleep_until(const struct timespec *when) {
#ifdef _WIN32
    static HANDLE timer;
    if (!timer) {
        timer = CreateWaitableTimerExW(NULL, NULL, 0x00000002 /* CREATE_WAITABLE_TIMER_HIGH_RESOLUTION */, TIMER_ALL_ACCESS);
        if (!timer) timer = CreateWaitableTimerW(NULL, TRUE, NULL);
    }
    for (;;) {
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        long long left = (long long)(when->tv_sec - now.tv_sec) * 1000000000LL + (when->tv_nsec - now.tv_nsec);
        if (left <= 0) return;
        if (left > 1500000 && timer) {                 /* the timer, then the last bit by yielding */
            LARGE_INTEGER due;
            due.QuadPart = -(left - 1000000) / 100;    /* relative, in 100 ns */
            if (SetWaitableTimer(timer, &due, 0, NULL, NULL, FALSE)) WaitForSingleObject(timer, INFINITE);
        } else SwitchToThread();
    }
#else
    clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, when, NULL);
#endif
}

void platform_sleep_forever(void) {
#ifdef _WIN32
    for (;;) Sleep(INFINITE);
#else
    for (;;) pause();
#endif
}
