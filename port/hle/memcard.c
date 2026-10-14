/*
 * The memory card, as a folder: ~/.local/share/sstheh/memcard1 (or $XDG_DATA_HOME/sstheh/memcard1;
 * SSTHEH_MEMCARD=dir to choose another).
 *
 * The game uses libmc2. Its EE side keeps the asynchronous API (requests in D_0050BDC0, a worker
 * thread, sceMc2CheckAsync) and implements the card's file system itself over raw page I/O done by
 * MC2_D.IRX on the IOP. The worker runs one synchronous function per command; those are replaced
 * here by native ones working on files, so the API, the worker and the game's save code are
 * unchanged. Results: 0 = done, or a libmc2 error (the game looks at the low 16 bits):
 * 0x81010002 no such file, 0x81010017 exists already, 0x81010013 no card.
 *
 *   cmd  function    arguments
 *   2    0x00132320  socket, info { type (2: PS2 card), formatted, free clusters (1 KB) }
 *   3    0x001326B0  socket                                    format
 *   4    0x00132FA8  socket                                    unformat
 *   5    0x001337D8  socket, name, buffer, start, size         read
 *   6    0x001347F0  socket, name, buffer, start, size         write
 *   7/B  0x00134230  socket, name, mode (0x8417 file, 0x8427 directory)   create
 *   8    0x00134D10  socket, name                              delete
 *   9    0x00135690  socket, name, new name                    rename
 *   A    0x00135108  socket, pattern, offset, max, entries, &count   list (0x38-byte entries:
 *                    created, modified (8 bytes each), size, mode (u16), name[32] at 0x18)
 *   C    0x00134F80  socket, path, pwd                         change directory
 *   D    0x00135578  socket, name, mode                        change mode
 *   E    0x00133320  socket, name, raw entry, 0, 0             look up (raw card directory entry:
 *                    mode u16 +0, size +4, created +8, modified +0x18, name +0x40)
 * Times are the card's: { 0, seconds, minutes, hours, day, month, u16 year }.
 */
#define _GNU_SOURCE
#include <dirent.h>
#include <errno.h>
#include <fnmatch.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#include "r5900.h"
#include "runtime.h"

#define MC_OK 0
#define MC_NOENT 0x81010002u
#define MC_EXIST 0x81010017u
#define MC_NOCARD 0x81010013u
#define FREE_CLUSTERS 7000

static char root[PATH_MAX];
static char cwd[PATH_MAX] = "/";          /* on the card */

static void setup(void) {
    if (root[0]) return;
    const char *e = getenv("SSTHEH_MEMCARD");
    if (e && *e) snprintf(root, sizeof root, "%s", e);
    else {
        const char *d = getenv("XDG_DATA_HOME"), *h = getenv("HOME");
        char base[PATH_MAX - 32];
        if (d && *d) snprintf(base, sizeof base, "%s", d);
        else snprintf(base, sizeof base, "%s/.local/share", h ? h : "/tmp");
        char p[PATH_MAX];
        snprintf(p, sizeof p, "%s/sstheh", base);
        mkdir(base, 0755);
        mkdir(p, 0755);
        snprintf(root, sizeof root, "%s/memcard1", p);
    }
    mkdir(root, 0755);
    rt_log("mc", "memory card in %s", root);
}

/* Only slot 1 has a card (the socket numbers of slot 1 are learned from the first ones seen). */
static int card_in(u32 socket) {
    static int logged[16];
    if (socket < 16 && !logged[socket]++) rt_log("mc", "socket %u used", socket);
    return 1;
}

static void guest_str(Ctx *c, u32 a, char *out, size_t n) {
    size_t i = 0;
    for (; i + 1 < n; i++) { char ch = (char)rd8(c, a + (u32)i); out[i] = ch; if (!ch) break; }
    out[n - 1] = 0;
}

/* A card path (absolute or relative to the current directory) to a host path. */
static void host_path(const char *card, char *out, size_t n) {
    char full[PATH_MAX];
    if (card[0] == '/') snprintf(full, sizeof full, "%s", card);
    else snprintf(full, sizeof full, "%s%s%s", cwd, cwd[strlen(cwd) - 1] == '/' ? "" : "/", card);
    /* drop "." and resolve ".." */
    char parts[64][64];
    int np = 0;
    for (char *t = strtok(full, "/"); t; t = strtok(NULL, "/")) {
        if (!strcmp(t, ".")) continue;
        if (!strcmp(t, "..")) { if (np) np--; continue; }
        if (np < 64) snprintf(parts[np++], 64, "%s", t);
    }
    size_t len = (size_t)snprintf(out, n, "%s", root);
    for (int i = 0; i < np && len < n; i++) len += (size_t)snprintf(out + len, n - len, "/%s", parts[i]);
}

static void card_time(Ctx *c, u32 a, time_t t) {
    struct tm tm;
    localtime_r(&t, &tm);
    wr8(c, a, 0);
    wr8(c, a + 1, (u8)tm.tm_sec);
    wr8(c, a + 2, (u8)tm.tm_min);
    wr8(c, a + 3, (u8)tm.tm_hour);
    wr8(c, a + 4, (u8)tm.tm_mday);
    wr8(c, a + 5, (u8)(tm.tm_mon + 1));
    wr16(c, a + 6, (u16)(tm.tm_year + 1900));
}

static u16 mode_of(const struct stat *st) { return S_ISDIR(st->st_mode) ? 0x8427 : 0x8497; }

/* A directory's size on the card is its number of entries, "." and ".." included. */
static u32 size_of(const char *path, const struct stat *st) {
    if (!S_ISDIR(st->st_mode)) return (u32)st->st_size;
    u32 n = 2;
    DIR *d = opendir(path);
    if (d) {
        for (struct dirent *de; (de = readdir(d));)
            if (strcmp(de->d_name, ".") && strcmp(de->d_name, "..")) n++;
        closedir(d);
    }
    return n;
}

#define RET(v) do { SET64(2, (s64)(s32)(u32)(v)); return; } while (0)

void hle_mc2_getinfo(Ctx *c) {               /* socket, info */
    setup();
    u32 info = RW(5);
    if (!card_in(RW(4))) RET(MC_NOCARD);
    if (info) { wr32(c, info, 2); wr32(c, info + 4, 1); wr32(c, info + 8, FREE_CLUSTERS); }
    RET(MC_OK);
}

void hle_mc2_format(Ctx *c) { setup(); (void)c; RET(MC_OK); }
void hle_mc2_unformat(Ctx *c) { setup(); (void)c; RET(MC_OK); }

static void file_io(Ctx *c, int write) {      /* socket, name, buffer, start, size */
    setup();
    char name[256], path[PATH_MAX];
    guest_str(c, RW(5), name, sizeof name);
    host_path(name, path, sizeof path);
    u32 buf = RW(6), start = RW(7), size = RW(8);
    FILE *f = fopen(path, write ? "r+b" : "rb");
    if (!f) { rt_log("mc", "%s %s: no such file", write ? "write" : "read", name); RET(MC_NOENT); }
    fseek(f, start, SEEK_SET);
    u8 tmp[4096];
    for (u32 done = 0; done < size;) {
        u32 n = size - done < sizeof tmp ? size - done : (u32)sizeof tmp;
        if (write) {
            for (u32 i = 0; i < n; i++) tmp[i] = rd8(c, buf + done + i);
            fwrite(tmp, 1, n, f);
        } else {
            size_t got = fread(tmp, 1, n, f);
            if (got < n) memset(tmp + got, 0, n - got);
            for (u32 i = 0; i < n; i++) wr8(c, buf + done + i, tmp[i]);
        }
        done += n;
    }
    fclose(f);
    rt_log("mc", "%s %s: %u bytes at %u", write ? "write" : "read", name, size, start);
    RET(MC_OK);
}

void hle_mc2_read(Ctx *c) { file_io(c, 0); }
void hle_mc2_write(Ctx *c) { file_io(c, 1); }

void hle_mc2_create(Ctx *c) {               /* socket, name, mode */
    setup();
    char name[256], path[PATH_MAX];
    guest_str(c, RW(5), name, sizeof name);
    host_path(name, path, sizeof path);
    struct stat st;
    if (!stat(path, &st)) RET(MC_EXIST);
    if ((RW(6) & 0x20) || (RW(6) & 0xFFFF) == 0x8427) {
        if (mkdir(path, 0755)) RET(MC_NOENT);
    } else {
        FILE *f = fopen(path, "wb");
        if (!f) RET(MC_NOENT);
        fclose(f);
    }
    rt_log("mc", "create %s (mode %X)", name, RW(6));
    RET(MC_OK);
}

void hle_mc2_delete(Ctx *c) {               /* socket, name */
    setup();
    char name[256], path[PATH_MAX];
    guest_str(c, RW(5), name, sizeof name);
    host_path(name, path, sizeof path);
    if (remove(path)) RET(MC_NOENT);
    rt_log("mc", "delete %s", name);
    RET(MC_OK);
}

void hle_mc2_rename(Ctx *c) {               /* socket, name, new name */
    setup();
    char name[256], to[256], path[PATH_MAX], path2[PATH_MAX];
    guest_str(c, RW(5), name, sizeof name);
    guest_str(c, RW(6), to, sizeof to);
    host_path(name, path, sizeof path);
    char dir[PATH_MAX];
    snprintf(dir, sizeof dir, "%s", path);
    char *slash = strrchr(dir, '/');
    if (slash) *slash = 0;
    snprintf(path2, sizeof path2, "%s/%s", dir, to);
    if (rename(path, path2)) RET(MC_NOENT);
    RET(MC_OK);
}

void hle_mc2_chmod(Ctx *c) { setup(); (void)c; RET(MC_OK); }

void hle_mc2_chdir(Ctx *c) {                /* socket, path, pwd */
    setup();
    char name[256], path[PATH_MAX];
    guest_str(c, RW(5), name, sizeof name);
    host_path(name, path, sizeof path);
    struct stat st;
    if (stat(path, &st) || !S_ISDIR(st.st_mode)) RET(MC_NOENT);
    /* the card path of it: what follows root */
    snprintf(cwd, sizeof cwd, "%s", path[strlen(root)] ? path + strlen(root) : "/");
    if (RW(6)) for (u32 i = 0; i <= strlen(cwd); i++) wr8(c, RW(6) + i, (u8)cwd[i]);
    rt_log("mc", "chdir %s -> %s", name, cwd);
    RET(MC_OK);
}

/* One listing entry (0x38 bytes) for a host file. */
static void put_entry(Ctx *c, u32 e, const char *path, const char *name, const struct stat *st) {
    card_time(c, e, st->st_ctime);
    card_time(c, e + 8, st->st_mtime);
    wr32(c, e + 0x10, size_of(path, st));
    wr16(c, e + 0x14, mode_of(st));
    wr16(c, e + 0x16, 0);
    for (int i = 0; i < 32; i++) wr8(c, e + 0x18 + (u32)i, (u8)(i < (int)strlen(name) ? name[i] : 0));
}

void hle_mc2_getdir(Ctx *c) {               /* socket, pattern, offset, max, entries, &count */
    setup();
    char pat[256], path[PATH_MAX];
    guest_str(c, RW(5), pat, sizeof pat);
    u32 offset = RW(6), max = RW(7), out = RW(8), count_at = RW(9);
    host_path(pat, path, sizeof path);
    char dir[PATH_MAX], glob[256];
    snprintf(dir, sizeof dir, "%s", path);
    char *slash = strrchr(dir, '/');
    snprintf(glob, sizeof glob, "%s", slash ? slash + 1 : dir);
    if (slash) *slash = 0;
    if (strlen(dir) < strlen(root)) snprintf(dir, sizeof dir, "%s", root);
    u32 n = 0, seen = 0;
    DIR *d = opendir(dir);
    if (!d) { if (count_at) wr32(c, count_at, 0); rt_log("mc", "list %s: no directory", pat); RET(MC_NOENT); }
    for (struct dirent *de; (de = readdir(d));) {
        if (!strcmp(de->d_name, ".") || !strcmp(de->d_name, "..")) continue;
        if (fnmatch(glob, de->d_name, 0)) continue;
        if (seen++ < offset) continue;
        if (n >= max) break;
        char p[PATH_MAX];
        struct stat st;
        snprintf(p, sizeof p, "%s/%s", dir, de->d_name);
        if (stat(p, &st)) continue;
        if (out) put_entry(c, out + n * 0x38, p, de->d_name, &st);
        n++;
    }
    closedir(d);
    if (count_at) wr32(c, count_at, n);
    rt_log("mc", "list %s: %u", pat, n);
    RET(MC_OK);
}

void hle_mc2_lookup(Ctx *c) {               /* socket, name, raw entry, 0, 0 */
    setup();
    char name[256], path[PATH_MAX];
    guest_str(c, RW(5), name, sizeof name);
    host_path(name, path, sizeof path);
    struct stat st;
    if (stat(path, &st)) { rt_log("mc", "look up %s: no such file", name); RET(MC_NOENT); }
    u32 e = RW(6);
    if (e) {
        for (u32 i = 0; i < 0x200; i += 4) wr32(c, e + i, 0);
        wr16(c, e, mode_of(&st));
        wr32(c, e + 4, size_of(path, &st));
        card_time(c, e + 8, st.st_ctime);
        card_time(c, e + 0x18, st.st_mtime);
        const char *base = strrchr(path, '/');
        base = base ? base + 1 : path;
        for (int i = 0; i < 32 && base[i]; i++) wr8(c, e + 0x40 + (u32)i, (u8)base[i]);
    }
    rt_log("mc", "look up %s: found", name);
    RET(MC_OK);
}

/* void mc2_request(void) (0x001374F0): wakes the worker for the request in D_0050BDC0 (logged). */
void hle_mc2_request(Ctx *c) {
    u32 cmd = rd32(c, 0x0050BDC4);
    char name[128];
    guest_str(c, 0x0050BDC0 + 0x41C, name, sizeof name);
    rt_log("mc", "request %u (%s) args %08X %08X %08X %08X", cmd, cmd == 2 || cmd == 3 || cmd == 4 ? "" : name,
           rd32(c, 0x0050BDCC), rd32(c, 0x0050BDD0), rd32(c, 0x0050BDD4), rd32(c, 0x0050BDD8));
    SET64(4, (s32)rd32(c, 0x0051E184));
    rt_call(c, 0x0010F680);                        /* SignalSema */
}
