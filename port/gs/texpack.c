/*
 * Texture packs: the game's textures saved as PNG files, and PNG files used in their place.
 *
 * A texture is named by its decoded content (RGBA pixels and size, 16 hex digits), the same
 * whatever GS memory it was read from and from one run to the next:
 *   SSTHEH_TEX_DUMP=1   each texture decoded for the first time is saved as
 *                       ~/.local/share/sstheh/textures/dump/<name>.png (dump/ of the folder
 *                       SSTHEH_TEXTURES names, when it names one)
 *   textures/<name>.png is used instead of that texture, at any size (a 4x upscale, a repaint):
 *                       draws keep addressing it in the original's texels, so nothing else changes.
 * SSTHEH_TEXTURES=0 turns replacements off; SSTHEH_TEXTURES=<folder> takes them from elsewhere.
 * PNG alpha is 0..255; the GS's is 0..0x80 (1.0), converted both ways.
 *
 * Everything here runs on the GS thread (gs.c decodes textures there).
 */
#include <SDL3/SDL.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "r5900.h"
#include "runtime.h"
#include "platform.h"

void display_config_path(char *p, size_t n, const char *name);     /* display.c */

/* PNG files need SDL 3.4 (SDL_LoadPNG, SDL_SavePNG); with an older SDL (the AppImage's, Debian 13's
 * 3.2) there are no texture packs */
#if !SDL_VERSION_ATLEAST(3, 4, 0)
static SDL_Surface *SDL_LoadPNG(const char *path) { (void)path; SDL_SetError("texture packs need SDL 3.4"); return NULL; }
static bool SDL_SavePNG(SDL_Surface *s, const char *path) { (void)s; (void)path; SDL_SetError("texture packs need SDL 3.4"); return false; }
#endif

static char dir[1024];               /* replacements */
static int inited, dump_on, packs_off;
static u64 *names;                   /* replacements present, sorted */
static u32 nnames;

typedef struct { u64 name; u32 w, h; u32 *px; } Loaded;
static Loaded *loaded;               /* replacements read so far (kept: textures come back) */
static u32 nloaded, cap_loaded;

static int cmp_u64(const void *a, const void *b) {
    u64 x = *(const u64 *)a, y = *(const u64 *)b;
    return x < y ? -1 : x > y;
}

static void init(void) {
    inited = 1;
    const char *e = getenv("SSTHEH_TEX_DUMP");
    dump_on = e && atoi(e);
    e = getenv("SSTHEH_TEXTURES");
    if (e && *e && strcmp(e, "0")) snprintf(dir, sizeof dir, "%s", e);
    else display_config_path(dir, sizeof dir, "textures");
    if (e && !strcmp(e, "0")) { packs_off = 1; return; }
    mkdir(dir, 0755);
    DIR *d = opendir(dir);
    if (!d) return;
    u32 cap = 0;
    for (struct dirent *de; (de = readdir(d));) {
        u64 n;
        char tail[8];
        if (strlen(de->d_name) != 20 || sscanf(de->d_name, "%16llx%7s", (unsigned long long *)&n, tail) != 2) continue;
        if (strcmp(tail, ".png")) continue;
        if (nnames == cap) names = realloc(names, (cap = cap ? cap * 2 : 256) * sizeof *names);
        names[nnames++] = n;
    }
    closedir(d);
    qsort(names, nnames, sizeof *names, cmp_u64);
    if (nnames) rt_log("tex", "%u replacement textures in %s", nnames, dir);
}

u64 texpack_name(const u32 *px, u32 w, u32 h) {
    u64 a = 0x9E3779B97F4A7C15ull ^ ((u64)w << 32 | h), b = 0xC2B2AE3D27D4EB4Full;
    u32 n = w * h, i = 0;
    for (; i + 1 < n; i += 2) {
        a = (a ^ px[i]) * 0x100000001B3ull;
        b = (b ^ px[i + 1]) * 0xFF51AFD7ED558CCDull;
    }
    if (i < n) a = (a ^ px[i]) * 0x100000001B3ull;
    return (a ^ (b >> 29) ^ (b << 7)) * 0x9E3779B97F4A7C15ull;
}

/* SSTHEH_TEX_DUMP=1: textures/dump/<name>.png, once */
void texpack_dump(u64 name, const u32 *px, u32 w, u32 h) {
    if (!inited) init();
    if (!dump_on) return;
    static u64 *seen;
    static u32 nseen, cap_seen;
    for (u32 i = 0; i < nseen; i++)
        if (seen[i] == name) return;
    if (nseen == cap_seen) seen = realloc(seen, (cap_seen = cap_seen ? cap_seen * 2 : 1024) * sizeof *seen);
    seen[nseen++] = name;
    char path[1200];
    snprintf(path, sizeof path, "%s", dir);
    mkdir(path, 0755);
    strcat(path, "/dump");
    mkdir(path, 0755);
    snprintf(path + strlen(path), sizeof path - strlen(path), "/%016llx.png", (unsigned long long)name);
    struct stat st;
    if (stat(path, &st) == 0) return;
    SDL_Surface *s = SDL_CreateSurface((int)w, (int)h, SDL_PIXELFORMAT_ABGR8888);
    if (!s) return;
    for (u32 y = 0; y < h; y++) {
        u32 *row = (u32 *)((u8 *)s->pixels + (size_t)y * s->pitch);
        for (u32 x = 0; x < w; x++) {
            u32 c = px[y * w + x], a = c >> 24;
            a = a >= 0x80 ? 255 : a * 255 / 128;
            row[x] = (c & 0xFFFFFF) | a << 24;
        }
    }
    if (!SDL_SavePNG(s, path)) rt_log("tex", "%s: %s", path, SDL_GetError());
    SDL_DestroySurface(s);
}

/* ---- pictures
 * The game's TIM2 pictures (tools/tex_extract.py writes <pack>/index.txt from the disc image) are
 * found inside the textures decoded: a texture is often larger than its picture (the rest of GS
 * memory is garbage), so a texture's name changes from one run to the next while its picture's
 * does not. A picture's name hashes its rows (each a polynomial of its texels, then mixed), folded
 * in order, with its size: the same in tex_extract.py. Replacements: <pack>/hd/<name>.png, of any
 * size, drawn in place of the picture's texels (gs.c redirects the draws inside the picture). */
typedef struct { u64 name; u32 w, h; } Pic;
static Pic *pics;                          /* sorted by name */
static u32 npics;
static u64 *row0s;                         /* (first row's hash, width) keys, sorted */
typedef struct { u32 w, maxh; } PicWidth;
static PicWidth *widths;                   /* the pictures' widths, ascending */
static u32 nwidths;
static u64 *hd_names;                      /* pictures with a replacement in hd/, sorted */
static u32 nhd;
static int pics_inited;

#define ROW_K 0x9E3779B97F4A7C15ull
static u64 kpow[1024];

static u64 fmix(u64 h) {
    h ^= h >> 33; h *= 0xFF51AFD7ED558CCDull;
    h ^= h >> 33; h *= 0xC4CEB9FE1A85EC53ull;
    return h ^ h >> 33;
}
static u64 row_hash(const u32 *px, u32 w) {
    u64 s = 0;
    for (u32 x = 0; x < w; x++) s += (u64)px[x] * kpow[x];
    return fmix(s);
}
static u64 row0_key(u64 r0, u32 w) { return fmix(r0 ^ (u64)w * ROW_K); }
static int cmp_pic(const void *a, const void *b) { return cmp_u64(&((const Pic *)a)->name, &((const Pic *)b)->name); }

static void pics_init(void) {
    pics_inited = 1;
    if (!inited) init();
    if (packs_off) return;
    u64 k = 1;
    for (u32 i = 0; i < 1024; i++, k *= ROW_K) kpow[i] = k;
    char path[1200];
    snprintf(path, sizeof path, "%s/index.txt", dir);
    FILE *f = fopen(path, "r");
    u32 cap = 0;
    char line[512];
    while (f && fgets(line, sizeof line, f)) {
        unsigned long long n, r0;
        u32 w, h;
        if (sscanf(line, "%llx %u %u %llx", &n, &w, &h, &r0) != 4 || !w || !h || w > 1024 || h > 1024) continue;
        if (npics == cap) {
            cap = cap ? cap * 2 : 1024;
            pics = realloc(pics, cap * sizeof *pics);
            row0s = realloc(row0s, cap * sizeof *row0s);
        }
        row0s[npics] = row0_key(r0, w);
        pics[npics++] = (Pic){n, w, h};
        u32 k = 0;
        while (k < nwidths && widths[k].w != w) k++;
        if (k == nwidths) {
            widths = realloc(widths, (nwidths + 1) * sizeof *widths);
            widths[nwidths++] = (PicWidth){w, 0};
        }
        if (h > widths[k].maxh) widths[k].maxh = h;
    }
    if (f) fclose(f);
    qsort(pics, npics, sizeof *pics, cmp_pic);
    qsort(row0s, npics, sizeof *row0s, cmp_u64);
    for (u32 i = 1; i < nwidths; i++)              /* ascending widths */
        for (u32 j = i; j > 0 && widths[j - 1].w > widths[j].w; j--) {
            PicWidth t = widths[j]; widths[j] = widths[j - 1]; widths[j - 1] = t;
        }
    snprintf(path, sizeof path, "%s/hd", dir);
    DIR *d = opendir(path);
    u32 hcap = 0;
    for (struct dirent *de; d && (de = readdir(d));) {
        unsigned long long n;
        char tail[8];
        if (strlen(de->d_name) != 20 || sscanf(de->d_name, "%16llx%7s", &n, tail) != 2 || strcmp(tail, ".png")) continue;
        if (nhd == hcap) hd_names = realloc(hd_names, (hcap = hcap ? hcap * 2 : 256) * sizeof *hd_names);
        hd_names[nhd++] = n;
    }
    if (d) closedir(d);
    qsort(hd_names, nhd, sizeof *hd_names, cmp_u64);
    rt_log("tex", "%u pictures (%u widths) in %s, %u with a replacement", npics, nwidths, path, nhd);
}

/* The largest picture of the index at the top left of a tw x th texture: its name (0: none) and
   size. Widths whose first row is no picture's are skipped after one row. */
u64 texpack_identify(const u32 *px, u32 tw, u32 th, u32 *pw, u32 *ph) {
    if (!pics_inited) pics_init();
    u64 best = 0;
    u32 best_area = 0;
    for (u32 k = 0; k < nwidths && widths[k].w <= tw; k++) {
        u32 w = widths[k].w, maxh = widths[k].maxh < th ? widths[k].maxh : th;
        if ((u64)w * maxh <= best_area) continue;
        u64 r = row_hash(px, w), key = row0_key(r, w);
        if (!bsearch(&key, row0s, npics, sizeof *row0s, cmp_u64)) continue;
        u64 a = fmix(0x5EEDull ^ w);
        for (u32 y = 0; y < maxh; y++) {
            if (y) r = row_hash(px + (size_t)y * tw, w);
            a = fmix((a ^ r) * 0x100000001B3ull);
            Pic key2 = {fmix(a ^ (u64)(y + 1) << 32), 0, 0};
            Pic *p = bsearch(&key2, pics, npics, sizeof *pics, cmp_pic);
            if (p && p->w == w && p->h == y + 1 && w * (y + 1) > best_area) {
                best = p->name;
                best_area = w * (y + 1);
                *pw = w;
                *ph = y + 1;
            }
        }
    }
    return best;
}

/* The name of the w x h picture at x, y of a texture's texels (stride texels a row) */
u64 texpack_rect_name(const u32 *px, u32 stride, u32 x, u32 y, u32 w, u32 h) {
    if (!pics_inited) pics_init();
    u64 a = fmix(0x5EEDull ^ w);
    for (u32 r = 0; r < h; r++) a = fmix((a ^ row_hash(px + (size_t)(y + r) * stride + x, w)) * 0x100000001B3ull);
    return fmix(a ^ (u64)h << 32);
}

int texpack_known(u64 pic) {
    Pic key = {pic, 0, 0};
    return npics && bsearch(&key, pics, npics, sizeof *pics, cmp_pic) != NULL;
}

/* pictures are looked for (uploads noted, textures searched): there is an index of the disc's
   pictures, replacements of pictures, or the dump is on */
int texpack_pictures_on(void) {
    if (!pics_inited) pics_init();
    return npics || nhd || dump_on;
}

/* SSTHEH_TEX_DUMP=1: a picture found by its upload but not in the index: saved as
   dump/<name>.png, once, and listed in dump/index.txt (texture pack tools take both) */
void texpack_dump_picture(u64 pic, const u32 *px, u32 stride, u32 x, u32 y, u32 w, u32 h) {
    if (!dump_on) return;
    static u64 *seen;
    static u32 nseen, cap_seen;
    for (u32 i = 0; i < nseen; i++)
        if (seen[i] == pic) return;
    if (nseen == cap_seen) seen = realloc(seen, (cap_seen = cap_seen ? cap_seen * 2 : 1024) * sizeof *seen);
    seen[nseen++] = pic;
    u32 *tmp = malloc((size_t)w * h * 4);
    for (u32 r = 0; r < h; r++) memcpy(tmp + (size_t)r * w, px + (size_t)(y + r) * stride + x, (size_t)w * 4);
    char path[1200];
    snprintf(path, sizeof path, "%s/dump/index.txt", dir);
    struct stat st;
    char png[1200];
    snprintf(png, sizeof png, "%s/dump/%016llx.png", dir, (unsigned long long)pic);
    if (stat(png, &st) != 0) {
        texpack_dump(pic, tmp, w, h);                       /* (it saves only while the dump is on) */
        FILE *f = fopen(path, "a");
        if (f) {
            fprintf(f, "%016llx %u %u %016llx dump/%016llx.png\n", (unsigned long long)pic, w, h,
                    (unsigned long long)row_hash(tmp, w), (unsigned long long)pic);
            fclose(f);
        }
    }
    free(tmp);
}

int texpack_has_hd(u64 pic) {
    if (!pics_inited) pics_init();
    return nhd && bsearch(&pic, hd_names, nhd, sizeof *hd_names, cmp_u64) != NULL;
}

/* A picture's replacement, read from hd/<name>.png: RGBA (malloc'd, GS alpha) and its size, or NULL. */
u32 *texpack_load_hd(u64 pic, u32 *w, u32 *h) {
    char path[1200];
    snprintf(path, sizeof path, "%s/hd/%016llx.png", dir, (unsigned long long)pic);
    SDL_Surface *s = SDL_LoadPNG(path), *c = s ? SDL_ConvertSurface(s, SDL_PIXELFORMAT_ABGR8888) : NULL;
    if (s) SDL_DestroySurface(s);
    if (!c || c->w > 8192 || c->h > 8192) {
        rt_log("tex", "%s: %s", path, c ? "larger than 8192" : SDL_GetError());
        if (c) SDL_DestroySurface(c);
        return NULL;
    }
    *w = (u32)c->w;
    *h = (u32)c->h;
    u32 *out = malloc((size_t)*w * *h * 4);
    for (u32 y = 0; y < *h; y++) {
        const u32 *row = (const u32 *)((const u8 *)c->pixels + (size_t)y * c->pitch);
        for (u32 x = 0; x < *w; x++) {
            u32 p = row[x], a = p >> 24;
            out[y * *w + x] = (p & 0xFFFFFF) | ((a * 128 + 127) / 255) << 24;
        }
    }
    SDL_DestroySurface(c);
    return out;
}

/* The replacement for a texture: new RGBA pixels (malloc'd, GS alpha) and their size, or NULL. */
u32 *texpack_find(u64 name, u32 *w, u32 *h) {
    if (!inited) init();
    if (!nnames || !bsearch(&name, names, nnames, sizeof *names, cmp_u64)) return NULL;
    Loaded *l = NULL;
    for (u32 i = 0; i < nloaded; i++)
        if (loaded[i].name == name) l = &loaded[i];
    if (!l) {
        char path[1200];
        snprintf(path, sizeof path, "%s/%016llx.png", dir, (unsigned long long)name);
        SDL_Surface *s = SDL_LoadPNG(path), *c = s ? SDL_ConvertSurface(s, SDL_PIXELFORMAT_ABGR8888) : NULL;
        if (s) SDL_DestroySurface(s);
        if (nloaded == cap_loaded) loaded = realloc(loaded, (cap_loaded = cap_loaded ? cap_loaded * 2 : 64) * sizeof *loaded);
        l = &loaded[nloaded++];
        *l = (Loaded){name, 0, 0, NULL};
        if (!c || c->w > 8192 || c->h > 8192) {
            rt_log("tex", "%s: %s", path, c ? "larger than 8192" : SDL_GetError());
            if (c) SDL_DestroySurface(c);
            return NULL;
        }
        l->w = (u32)c->w;
        l->h = (u32)c->h;
        l->px = malloc((size_t)l->w * l->h * 4);
        for (u32 y = 0; y < l->h; y++) {
            const u32 *row = (const u32 *)((const u8 *)c->pixels + (size_t)y * c->pitch);
            for (u32 x = 0; x < l->w; x++) {
                u32 p = row[x], a = p >> 24;
                l->px[y * l->w + x] = (p & 0xFFFFFF) | ((a * 128 + 127) / 255) << 24;
            }
        }
        SDL_DestroySurface(c);
        rt_log("tex", "replaced %016llx (%ux%u)", (unsigned long long)name, l->w, l->h);
    }
    if (!l->px) return NULL;
    u32 *out = malloc((size_t)l->w * l->h * 4);
    memcpy(out, l->px, (size_t)l->w * l->h * 4);
    *w = l->w;
    *h = l->h;
    return out;
}
