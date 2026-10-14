/*
 * The disc: libcdvd's public EE functions, reimplemented over the ISO image.
 *
 * The game (and CRI's sector reader "SRD") use the standard libcdvd API. Each function here replaces
 * the guest one at the address listed in port/hle.txt. Reads complete immediately, so sceCdSync
 * always reports "done".
 *
 * ISO 9660: the primary volume descriptor is sector 16; directory records hold the extent (LBA) at
 * +2, the size at +10, flags at +25 (bit 1: directory), the name length at +32 and the name at +33.
 */
#include <ctype.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"

#define SECTOR 2048

static FILE *iso;
static int last_error;

int cdvd_open(const char *path) {
    iso = fopen(path, "rb");
    if (!iso) return -1;
    rt_log("cdvd", "disc image %s", path);
    return 0;
}

static pthread_mutex_t iso_lock = PTHREAD_MUTEX_INITIALIZER;   /* the EE and the IOP's modules both read */

static int read_sectors(u32 lsn, u32 count, u8 *out) {
    if (!iso) return -1;
    pthread_mutex_lock(&iso_lock);
    int ok = !fseeko(iso, (off_t)lsn * SECTOR, SEEK_SET) && fread(out, SECTOR, count, iso) == count;
    pthread_mutex_unlock(&iso_lock);
    return ok ? 0 : -1;
}

static u32 le32(const u8 *p) { return p[0] | p[1] << 8 | p[2] << 16 | (u32)p[3] << 24; }

/* Look a path up ("\\DATA\\AFSDATA.AFS;1"); fills lsn/size, and the record's date if wanted. */
static int iso_find(const char *path, u32 *lsn, u32 *size, u8 date[7]) {
    u8 pvd[SECTOR];
    if (read_sectors(16, 1, pvd) || memcmp(pvd + 1, "CD001", 5)) return 0;
    u32 dir_lsn = le32(pvd + 156 + 2), dir_size = le32(pvd + 156 + 10);

    char want[256];
    snprintf(want, sizeof want, "%s", path);
    for (char *p = want; *p; p++) {
        if (*p == '/') *p = '\\';
        *p = toupper((unsigned char)*p);
    }
    char *semi = strchr(want, ';');
    if (semi) *semi = 0;

    char *save = NULL;
    for (char *part = strtok_r(want, "\\", &save); part; part = strtok_r(NULL, "\\", &save)) {
        int found = 0;
        u8 *dir = malloc(dir_size + SECTOR);
        if (read_sectors(dir_lsn, (dir_size + SECTOR - 1) / SECTOR, dir)) { free(dir); return 0; }
        for (u32 off = 0; off < dir_size;) {
            u8 len = dir[off];
            if (len == 0) { off = (off / SECTOR + 1) * SECTOR; continue; }
            u8 nlen = dir[off + 32];
            char name[256];
            memcpy(name, dir + off + 33, nlen);
            name[nlen] = 0;
            char *s = strchr(name, ';');
            if (s) *s = 0;
            for (char *q = name; *q; q++) *q = toupper((unsigned char)*q);
            if (!strcmp(name, part)) {
                dir_lsn = le32(dir + off + 2);
                dir_size = le32(dir + off + 10);
                if (date) memcpy(date, dir + off + 18, 7);
                found = 1;
                break;
            }
            off += len;
        }
        free(dir);
        if (!found) return 0;
    }
    *lsn = dir_lsn;
    *size = dir_size;
    return 1;
}

/* For the IOP's modules (port/iop/lle): find a file, read sectors. */
int cdvd_find(const char *path, u32 *lsn, u32 *size) { return iso_find(path, lsn, size, NULL); }
int cdvd_read(u32 lsn, u32 count, u8 *out) { return read_sectors(lsn, count, out); }

/* ------------------------------------------------------------------------------- libcdvd */

void hle_sceCdInit(Ctx *c) { rt_log("cdvd", "sceCdInit(%u)", RW(4)); SET64(2, 1); }
void hle_sceCdMmode(Ctx *c) { SET64(2, 1); }
void hle_sceCdDiskReady(Ctx *c) { SET64(2, 2); }            /* SCECdComplete */
void hle_sceCdGetDiskType(Ctx *c) { SET64(2, 0x14); }       /* SCECdPS2DVD */
void hle_sceCdGetError(Ctx *c) { SET64(2, last_error); }
void hle_sceCdBreak(Ctx *c) { SET64(2, 1); }
void hle_sceCdSync(Ctx *c) { SET64(2, 0); }                 /* every command has already completed */

/* int sceCdRead(u32 lsn, u32 sectors, void *buf, sceCdRMode *mode) */
void hle_sceCdRead(Ctx *c) {
    u32 lsn = RW(4), n = RW(5), buf = RW(6);
    static u8 tmp[SECTOR * 64];
    last_error = 0;
    for (u32 done = 0; done < n;) {
        u32 k = n - done < 64 ? n - done : 64;
        if (read_sectors(lsn + done, k, tmp)) {
            rt_log("cdvd", "read error at sector %u", lsn + done);
            last_error = 0x32;                              /* SCECdErREAD */
            break;
        }
        u8 *dst = rt_ptr(buf + done * SECTOR);
        if (dst) memcpy(dst, tmp, k * SECTOR);
        done += k;
    }
    if (rt_verbose > 1) rt_log("cdvd", "sceCdRead(%u, %u, %08X)", lsn, n, buf);
    SET64(2, 1);
}

/* int sceCdSearchFile(sceCdlFILE *fp, const char *name): fills { lsn, size, name[16], date[8] } */
void hle_sceCdSearchFile(Ctx *c) {
    u32 fp = RW(4), namep = RW(5);
    char name[256];
    u32 i = 0;
    for (; i < sizeof name - 1; i++) if (!(name[i] = rd8(c, namep + i))) break;
    name[i] = 0;
    u32 lsn, size;
    u8 date[7] = {0};
    int ok = iso_find(name, &lsn, &size, date);
    rt_log("cdvd", "sceCdSearchFile(\"%s\") -> %s lsn %u size %u", name, ok ? "found" : "NOT FOUND", ok ? lsn : 0,
           ok ? size : 0);
    if (ok) {
        wr32(c, fp + 0, lsn);
        wr32(c, fp + 4, size);
        const char *base = strrchr(name, '\\');
        base = base ? base + 1 : name;
        for (int k = 0; k < 16; k++) wr8(c, fp + 8 + k, k < (int)strlen(base) ? base[k] : 0);
        /* date: seconds, minutes, hours, day, month, year (2 bytes) */
        u8 d[8] = {date[5], date[4], date[3], 0, date[2], date[1], (u8)((1900 + date[0]) & 0xFF),
                   (u8)((1900 + date[0]) >> 8)};
        for (int k = 0; k < 8; k++) wr8(c, fp + 24 + k, d[k]);
    }
    SET64(2, ok);
}
