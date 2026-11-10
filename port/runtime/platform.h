/*
 * What differs between Linux, Windows (MinGW-w64) and macOS, in one place.
 *
 * Windows: built with MinGW-w64 from Linux (configure.py --windows); winpthreads gives the
 * threads, clock_gettime, usleep; directories (dirent.h) come with MinGW. macOS (Apple Silicon):
 * built with clang (configure.py on the Mac); POSIX, without /proc and the absolute clock_nanosleep.
 * The rest is here.
 */
#pragma once
#include <pthread.h>
#include <stddef.h>
#include <sys/stat.h>

/* the folder the executable is in, without the trailing slash; 0: found */
int platform_exe_dir(char *out, size_t n);

/* where the settings and the memory card live, created if missing: ~/.local/share/sstheh
 * ($XDG_DATA_HOME/sstheh) on Linux, %APPDATA%\sstheh on Windows, ~/Library/Application Support/sstheh
 * on macOS ($XDG_DATA_HOME/sstheh there too when it is set) */
void platform_data_dir(char *out, size_t n);

/* the folder for caches (the VU1 programs compiled at run time), without the sstheh part:
 * $XDG_CACHE_HOME or ~/.cache on Linux, ~/Library/Caches on macOS */
void platform_cache_base(char *out, size_t n);

/* aligned memory: freed with platform_aligned_free */
void *platform_aligned_alloc(size_t align, size_t size);
void platform_aligned_free(void *p);

/* does name match a pattern of * and ? (fnmatch without flags) */
int platform_match(const char *pattern, const char *name);

/* CPU time used by the process, in seconds (the F3 panel) */
double platform_cpu_seconds(void);

struct timespec;
/* sleeps until a CLOCK_MONOTONIC time (the vertical blank's timer); on Windows winpthreads'
 * clock_nanosleep doesn't wait for an absolute time */
void platform_sleep_until(const struct timespec *when);

/* names a thread for debuggers and profilers (Linux, Windows; macOS lets a thread name only itself:
 * there the names are left out) */
void platform_thread_name(pthread_t t, const char *name);

/* sleeps for good (the main thread once the game runs on its own threads) */
void platform_sleep_forever(void);

#ifdef _WIN32
#include <direct.h>
#define mkdir(path, mode) _mkdir(path)
#endif
