/*
 * The release's setup for the Saint Seiya: The Hades PC port.
 *
 * The release is the port's executable (sstheh) without anything from the game: the player brings
 * their own disc image of the European release (SLES-54162). This program
 *   - checks the image: ISO 9660, its SYSTEM.CNF boots SLES_541.62, and that executable is exactly
 *     the one the port was translated from (SHA-1); the whole image's SHA-1 is compared with the
 *     known good dump (Redump) only to tell the player;
 *   - copies it next to the game (disc/game.iso) and writes the executable out (disc/SLES_541.62),
 *     where the game looks for them;
 *   - downloads the font the game's texts are drawn with (fonts/, M PLUS Rounded 1c, OFL);
 *   - keeps the widescreen choice where the game reads it, and can make a shortcut;
 *   - starts the game.
 * Without a window: SaintSeiyaDecomp-setup --install <image.iso> [--no-font] [--no-shortcut] [--4-3].
 * The window speaks Portuguese on a Portuguese system, English otherwise.
 *
 * On Windows it is built with MinGW-w64 (g++, libstdc++) against Qt's llvm-mingw build (libc++): no
 * std:: type crosses into Qt (folders are made with std::filesystem, the copy runs on a std::thread).
 */
#include <QApplication>
#include <QCheckBox>
#include <QConicalGradient>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QFontMetrics>
#include <QFrame>
#include <QMimeData>
#include <QPainter>
#include <QStyle>
#include <QStyleFactory>
#include <QTemporaryDir>
#include <QCryptographicHash>
#include <QDir>
#include <QEventLoop>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QLocale>
#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QProcess>
#include <QProgressBar>
#include <QPushButton>
#include <QSaveFile>
#include <QStandardPaths>
#include <QStorageInfo>
#include <QVBoxLayout>
#include <cstdio>
#include <filesystem>
#include <functional>
#include <thread>

static const char *const ELF_SHA1 = "7ba6b0a1c05a94f28452840fcb73c204e46e79e6";     /* config/SLES_541.62.sha1 */
static const char *const ISO_SHA1 = "6da748b0a966a884fc08b3d0d56ffb1bf51848c7";     /* Redump: (Europe) (En,Ja,Fr,Es,It) */
static const char *const FONT_FILE = "MPLUSRounded1c-Bold.ttf";
static const char *const FONT_URL = "https://raw.githubusercontent.com/google/fonts/main/ofl/mplusrounded1c/MPLUSRounded1c-Bold.ttf";
static const char *const TITLE = "Saint Seiya: The Hades — PC Port";
#ifndef SETUP_VERSION
#define SETUP_VERSION "dev"                     /* the release's version (tools/release.sh passes git describe) */
#endif

static bool portuguese;
static QString T(const char *en, const char *pt) { return QString::fromUtf8(portuguese ? pt : en); }

/* ------------------------------------------------------------------------------------- places */

static void make_path(const QString &dir) {
    std::error_code e;
    std::filesystem::create_directories(std::filesystem::path(dir.toStdWString()), e);
}

static QString game_dir;                                  /* where the game is: the setup's folder */
static QString install_dir;                               /* where disc/ and fonts/ go: the same, or SSTHEH_INSTALL_DIR
                                                             (the AppImage: ~/.local/share/sstheh, where the game looks too) */

static QString game_exe() {
#ifdef Q_OS_WIN
    return game_dir + "/sstheh.exe";
#else
    return game_dir + "/sstheh";
#endif
}
static QString disc_dir() { return install_dir + "/disc"; }
static QString fonts_dir() { return install_dir + "/fonts"; }

/* where the game keeps its settings (port/runtime/platform.c: ~/.local/share/sstheh, %APPDATA%\sstheh) */
static QString config_dir() {
#ifdef Q_OS_WIN
    QString d = qEnvironmentVariable("APPDATA") + "/sstheh";
#else
    QString d = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation) + "/sstheh";
#endif
    make_path(d);
    return d;
}

/* ------------------------------------------------------------------------------- the disc image */

struct Disc {
    bool ok = false;
    QString message;            /* why not, or what it is */
    QByteArray elf;             /* SLES_541.62 */
    qint64 size = 0;
};

/* a file in the image's root directory: its first sector and size */
static bool find_root(QFile &f, const char *name, quint32 *lsn, quint32 *size) {
    f.seek(16 * 2048);
    QByteArray pvd = f.read(2048);
    if (pvd.size() < 2048 || pvd.mid(1, 5) != "CD001") return false;
    auto u32 = [](const QByteArray &b, int o) {
        return quint32((uchar)b[o]) | quint32((uchar)b[o + 1]) << 8 | quint32((uchar)b[o + 2]) << 16 | quint32((uchar)b[o + 3]) << 24;
    };
    quint32 rl = u32(pvd, 156 + 2), rs = u32(pvd, 156 + 10);
    f.seek(qint64(rl) * 2048);
    QByteArray d = f.read(rs);
    for (int off = 0; off < d.size();) {
        int n = (uchar)d[off];
        if (!n) { off = (off / 2048 + 1) * 2048; continue; }
        int nl = (uchar)d[off + 32];
        QString fn = QString::fromLatin1(d.mid(off + 33, nl)).section(';', 0, 0).toUpper();
        if (fn == name) { *lsn = u32(d, off + 2); *size = u32(d, off + 10); return true; }
        off += n;
    }
    return false;
}

static Disc check_disc(const QString &path) {
    Disc r;
    QFile f(path);
    if (!f.open(QIODevice::ReadOnly)) { r.message = T("The file can't be opened.", "O arquivo não pode ser aberto."); return r; }
    r.size = f.size();
    quint32 lsn, size;
    f.seek(16 * 2048);
    if (f.read(6).mid(1, 5) != "CD001") { r.message = T("This is not a disc image (ISO 9660).", "Isto não é uma imagem de disco (ISO 9660)."); return r; }
    if (find_root(f, "SYSTEM.CNF", &lsn, &size)) {
        f.seek(qint64(lsn) * 2048);
        if (!f.read(size).contains("SLES_541.62")) {
            r.message = T("This disc is another game or another region: the European release (SLES-54162) is needed.",
                          "Este disco é de outro jogo ou outra região: é preciso a versão europeia (SLES-54162).");
            return r;
        }
    }
    if (!find_root(f, "SLES_541.62", &lsn, &size)) {
        r.message = T("This disc is another game or another region: the European release (SLES-54162) is needed.",
                      "Este disco é de outro jogo ou outra região: é preciso a versão europeia (SLES-54162).");
        return r;
    }
    f.seek(qint64(lsn) * 2048);
    r.elf = f.read(size);
    if (QCryptographicHash::hash(r.elf, QCryptographicHash::Sha1).toHex() != ELF_SHA1) {
        r.message = T("This disc's executable is another build (a modified or translated version, like the Brazilian "
                      "fan translation): the port needs the original European release.",
                      "O executável deste disco é outro build (uma versão modificada ou traduzida, como a tradução "
                      "brasileira de fãs): o port precisa da versão europeia original.");
        return r;
    }
    r.ok = true;
    r.message = T("Saint Seiya: The Hades, European release (SLES-54162): OK.",
                  "Saint Seiya: The Hades, versão europeia (SLES-54162): OK.");
    return r;
}

/* ------------------------------------------------------------------------------------ installing */

struct Options {
    bool font = true, shortcut = true, widescreen = true;
};

/* Copies the image into disc/ (the executable too); progress(done, total). The whole image's SHA-1 in
 * *sha1. Empty: done; else what went wrong. */
static QString copy_disc(const QString &iso, const Disc &disc, QByteArray *sha1, const std::function<void(qint64, qint64)> &progress) {
    make_path(disc_dir());
    QSaveFile elf(disc_dir() + "/SLES_541.62");
    if (!elf.open(QIODevice::WriteOnly) || elf.write(disc.elf) != disc.elf.size() || !elf.commit())
        return T("Can't write into %1.", "Não foi possível gravar em %1.").arg(disc_dir());
    QString dst = disc_dir() + "/game.iso";
    QFile in(iso);
    if (!in.open(QIODevice::ReadOnly)) return T("The image can't be opened.", "A imagem não pode ser aberta.");
    QCryptographicHash h(QCryptographicHash::Sha1);
    if (QFileInfo(iso).canonicalFilePath() == QFileInfo(dst).canonicalFilePath()) {   /* already there: only its SHA-1 */
        for (qint64 done = 0; !in.atEnd();) {
            QByteArray b = in.read(8 << 20);
            h.addData(b);
            progress(done += b.size(), disc.size);
        }
        *sha1 = h.result().toHex();
        return QString();
    }
    QStorageInfo st(disc_dir());
    QFile old(dst);
    if (st.isValid() && st.isReady() && st.bytesAvailable() > 0 &&     /* a measure that failed doesn't stop it: the copy would */
        st.bytesAvailable() + (old.exists() ? old.size() : 0) < disc.size + (64 << 20))
        return T("Not enough free space in %1 (%2 GB needed).", "Não há espaço livre suficiente em %1 (são precisos %2 GB).")
            .arg(disc_dir()).arg(disc.size / 1e9, 0, 'f', 1);
    QFile out(dst + ".part");
    if (!out.open(QIODevice::WriteOnly)) return T("Can't write into %1.", "Não foi possível gravar em %1.").arg(disc_dir());
    qint64 done = 0;
    while (!in.atEnd()) {
        QByteArray b = in.read(8 << 20);
        if (b.isEmpty() || out.write(b) != b.size()) {
            out.remove();
            return T("Copying the image failed (disk full?).", "A cópia da imagem falhou (disco cheio?).");
        }
        h.addData(b);
        progress(done += b.size(), disc.size);
    }
    out.close();
    QFile::remove(dst);
    if (!out.rename(dst)) return T("Can't write into %1.", "Não foi possível gravar em %1.").arg(disc_dir());
    *sha1 = h.result().toHex();
    return QString();
}

/* the font into fonts/, with its license; empty: done */
static QString download_font() {
    if (QFileInfo(fonts_dir() + "/" + FONT_FILE).size() > 0) return QString();
    QNetworkAccessManager net;
    QNetworkRequest rq{QUrl(QString::fromLatin1(FONT_URL))};
    rq.setAttribute(QNetworkRequest::RedirectPolicyAttribute, QNetworkRequest::NoLessSafeRedirectPolicy);
    QNetworkReply *reply = net.get(rq);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();
    QByteArray data = reply->readAll();
    QString error = reply->error() != QNetworkReply::NoError ? reply->errorString() : QString();
    reply->deleteLater();
    if (!error.isEmpty() || data.size() < 100000)
        return T("The font could not be downloaded (%1): the texts keep the disc's font.",
                 "A fonte não pôde ser baixada (%1): os textos ficam com a fonte do disco.").arg(error.isEmpty() ? "?" : error);
    make_path(fonts_dir());
    QSaveFile f(fonts_dir() + "/" + FONT_FILE);
    if (!f.open(QIODevice::WriteOnly) || f.write(data) != data.size() || !f.commit())
        return T("Can't write into %1.", "Não foi possível gravar em %1.").arg(fonts_dir());
    QFile lic(fonts_dir() + "/OFL.txt");
    if (lic.open(QIODevice::WriteOnly)) {
        lic.write("M PLUS Rounded 1c (MPLUSRounded1c-Bold.ttf), from https://github.com/google/fonts/tree/main/ofl/mplusrounded1c\n"
                  "Copyright 2016 The Rounded M+ Project Authors.\n\n");
        QFile ofl(game_dir + "/licenses/OFL-1.1.txt");
        if (ofl.open(QIODevice::ReadOnly)) lic.write(ofl.readAll());
        else lic.write("Licensed under the SIL Open Font License, Version 1.1: https://openfontlicense.org\n");
    }
    return QString();
}

static void write_settings(const Options &o) {
    QFile f(config_dir() + "/widescreen");
    if (f.open(QIODevice::WriteOnly)) f.write(o.widescreen ? "1\n" : "0\n");
}

/* the game in the applications menu (Linux) or on the desktop and in the Start menu (Windows) */
static void make_shortcut() {
#ifdef Q_OS_WIN
    QString name = "Saint Seiya - The Hades.lnk";
    QFile::link(game_exe(), QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/" + name);
    QFile::link(game_exe(), QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation) + "/" + name);
#else
    QString dir = QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation);
    make_path(dir);
    QFile f(dir + "/saintseiyadecomp.desktop");
    if (!f.open(QIODevice::WriteOnly)) return;
    QString appimage = qEnvironmentVariable("APPIMAGE");      /* run from the AppImage: the shortcut opens it */
    f.write(QString("[Desktop Entry]\nType=Application\nName=Saint Seiya: The Hades (PC Port)\n"
                    "Comment=PC port of the PS2 game, from your own disc\nExec=\"%1\"\nPath=%2\n"
                    "Icon=applications-games\nTerminal=false\nCategories=Game;\n")
                .arg(appimage.isEmpty() ? game_exe() : appimage, appimage.isEmpty() ? game_dir : QFileInfo(appimage).absolutePath()).toUtf8());
    f.close();
    f.setPermissions(f.permissions() | QFileDevice::ExeOwner);
#endif
}

static QString sha1_note(const QByteArray &sha1) {
    return sha1 == ISO_SHA1 ? T("The whole image matches the known good dump (Redump).",
                                "A imagem inteira confere com o dump de referência (Redump).")
                            : T("The image differs from the known good dump (Redump), but its executable is the right one: "
                                "if something goes wrong, try a clean dump.",
                                "A imagem difere do dump de referência (Redump), mas o executável é o certo: se algo der "
                                "errado, tente um dump limpo.");
}

static bool installed() {
    if (!QFileInfo(disc_dir() + "/game.iso").exists()) return false;
    QFile f(disc_dir() + "/SLES_541.62");
    return f.open(QIODevice::ReadOnly) && QCryptographicHash::hash(f.readAll(), QCryptographicHash::Sha1).toHex() == ELF_SHA1;
}

/* ------------------------------------------------------------------------------- without a window */

static int install_cli(const QString &iso, const Options &o) {
    auto say = [](const QString &s) { fprintf(stdout, "%s\n", s.toUtf8().constData()); fflush(stdout); };
    Disc d = check_disc(iso);
    say(d.message);
    if (!d.ok) return 2;
    QByteArray sha1;
    int last = -1;
    QString err = copy_disc(iso, d, &sha1, [&](qint64 done, qint64 total) {
        int pct = int(done * 100 / (total ? total : 1));
        if (pct / 10 != last / 10) { last = pct; say(T("copying the image: %1%", "copiando a imagem: %1%").arg(pct)); }
    });
    if (!err.isEmpty()) { say(err); return 3; }
    say(sha1_note(sha1));
    if (o.font) { QString e = download_font(); say(e.isEmpty() ? T("Font ready.", "Fonte pronta.") : e); }
    write_settings(o);
    if (o.shortcut) make_shortcut();
    say(T("Ready: run %1", "Pronto: rode %1").arg(game_exe()));
    return 0;
}

/* --------------------------------------------------------------------------------- the window */

/* The look: night blue and gold, as the icon; drawn here, nothing from the game. The same on Linux and
 * Windows (Fusion style with this palette and style sheet). */
namespace look {
const QColor night(0x0f, 0x0e, 0x24), card(0x17, 0x15, 0x3a), line(0x2a, 0x27, 0x60);
const QColor text(0xe4, 0xe1, 0xf5), muted(0x8f, 0x8b, 0xbd), gold(0xd9, 0xb4, 0x4a), good(0x7e, 0xd4, 0x92), bad(0xff, 0x8a, 0x80);
const char *const sheet = R"(
QWidget#root { background: #0f0e24; }
QLabel { color: #e4e1f5; background: transparent; }
QLabel#muted { color: #8f8bbd; }
QLabel#cardTitle { color: #d9b44a; font-weight: 600; }
QLabel#status[state="ok"] { color: #7ed492; }
QLabel#status[state="bad"] { color: #ff8a80; }
QFrame#card { background: #17153a; border: 1px solid #2a2760; border-radius: 12px; }
QFrame#drop { background: #121031; border: 2px dashed #3d3986; border-radius: 10px; }
QFrame#drop:hover, QFrame#drop[hot="true"] { border-color: #d9b44a; background: #1a1745; }
QCheckBox { color: #e4e1f5; spacing: 10px; padding: 3px 0; background: transparent; }
QCheckBox::indicator { width: 16px; height: 16px; border-radius: 4px; border: 1px solid #4a4596; background: #0f0e24; }
QCheckBox::indicator:hover { border-color: #d9b44a; }
QCheckBox::indicator:checked { background: #d9b44a; border-color: #d9b44a; image: url(%CHECK%); }
QProgressBar { background: #0f0e24; border: 1px solid #2a2760; border-radius: 5px; max-height: 10px; min-height: 10px; }
QProgressBar::chunk { border-radius: 4px; background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #a8822a, stop:1 #f2d473); }
QPushButton { color: #e4e1f5; background: #1f1c4a; border: 1px solid #34307a; border-radius: 9px; padding: 10px 24px; }
QPushButton:hover { background: #29255f; }
QPushButton:disabled { color: #5e5a8a; background: #151333; border-color: #221f4e; }
QPushButton#primary { color: #1d1500; font-weight: 700; background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f2d473, stop:1 #c4982c); border: none; padding: 10px 34px; }
QPushButton#primary:hover { background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f7e08f, stop:1 #d4a83a); }
QPushButton#primary:disabled { color: #6b6440; background: #2e2a1c; }
QPushButton#outline { color: #d9b44a; background: transparent; border: 1px solid #d9b44a; }
QPushButton#outline:hover { background: #2a2540; }
QPushButton#outline:disabled { color: #5e5a8a; border-color: #34307a; }
QToolTip { color: #e4e1f5; background: #17153a; border: 1px solid #2a2760; }
)";

void apply(QApplication &app) {
    app.setStyle(QStyleFactory::create("Fusion"));
    QPalette p;
    p.setColor(QPalette::Window, night);
    p.setColor(QPalette::WindowText, text);
    p.setColor(QPalette::Base, night);
    p.setColor(QPalette::AlternateBase, card);
    p.setColor(QPalette::Text, text);
    p.setColor(QPalette::Button, card);
    p.setColor(QPalette::ButtonText, text);
    p.setColor(QPalette::Highlight, gold);
    p.setColor(QPalette::HighlightedText, night);
    p.setColor(QPalette::ToolTipBase, card);
    p.setColor(QPalette::ToolTipText, text);
    p.setColor(QPalette::PlaceholderText, muted);
    p.setColor(QPalette::Disabled, QPalette::Text, muted);
    p.setColor(QPalette::Disabled, QPalette::WindowText, muted);
    app.setPalette(p);
    /* the check mark, drawn into a file the style sheet can name */
    static QTemporaryDir dir;
    QString check = dir.path() + "/check.png";
    QPixmap pm(32, 32);
    pm.setDevicePixelRatio(2);
    pm.fill(Qt::transparent);
    {
        QPainter g(&pm);
        g.setRenderHint(QPainter::Antialiasing);
        g.setPen(QPen(night, 2.2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        g.drawPolyline(QPolygonF({QPointF(3.5, 8.5), QPointF(6.5, 11.5), QPointF(12.5, 4.5)}));
    }
    pm.save(check);
    app.setStyleSheet(QString::fromLatin1(sheet).replace("%CHECK%", check));
}

/* the icon (as tools/appimage/saintseiyadecomp.png): gold "SS" on night blue */
QIcon icon() {
    QIcon ic;
    for (int n : {16, 32, 48, 64, 128, 256}) {
        QPixmap pm(n, n);
        pm.fill(QColor(0x1c, 0x1a, 0x45));
        QPainter g(&pm);
        g.setRenderHint(QPainter::Antialiasing);
        g.setPen(QPen(gold, qMax(1.0, n / 32.0)));
        g.drawRect(QRectF(n * 0.05, n * 0.05, n * 0.9, n * 0.9));
        QFont f;
        f.setPixelSize(int(n * 0.42));
        g.setFont(f);
        g.drawText(QRectF(0, 0, n, n * 0.78), Qt::AlignCenter, "SS");
        if (n >= 48) {
            f.setPixelSize(int(n * 0.12));
            g.setFont(f);
            g.setPen(Qt::white);
            g.drawText(QRectF(0, n * 0.62, n, n * 0.2), Qt::AlignCenter, "HADES");
        }
        g.end();
        ic.addPixmap(pm);
    }
    return ic;
}
} // namespace look

/* The top of the window: a night sky with a constellation (Pegasus), the title, the version */
class Banner : public QWidget {
public:
    Banner() { setFixedHeight(150); }
protected:
    void paintEvent(QPaintEvent *) override {
        QPainter g(this);
        g.setRenderHint(QPainter::Antialiasing);
        const double w = width(), h = height();
        QLinearGradient sky(0, 0, w, h);
        sky.setColorAt(0, QColor(0x22, 0x1c, 0x5c));
        sky.setColorAt(0.55, QColor(0x14, 0x12, 0x38));
        sky.setColorAt(1, look::night);
        g.fillRect(rect(), sky);
        QRadialGradient glow(w * 0.80, h * 0.35, h * 1.1);
        glow.setColorAt(0, QColor(0xd9, 0xb4, 0x4a, 70));
        glow.setColorAt(1, QColor(0xd9, 0xb4, 0x4a, 0));
        g.fillRect(rect(), glow);
        quint32 seed = 0x5eed1u;                                   /* the same stars every time */
        auto rnd = [&seed] { seed = seed * 1664525u + 1013904223u; return (seed >> 8) / double(1 << 24); };
        for (int i = 0; i < 90; i++) {
            double x = rnd() * w, y = rnd() * h, r = 0.4 + rnd() * 1.1;
            g.setPen(Qt::NoPen);
            g.setBrush(QColor(255, 255, 255, int(60 + rnd() * 150)));
            g.drawEllipse(QPointF(x, y), r, r);
        }
        /* Pegasus: the Great Square and its neck, in the right half */
        const QPointF st[] = {{0.70, 0.30}, {0.80, 0.27}, {0.82, 0.55}, {0.71, 0.58}, {0.62, 0.70}, {0.55, 0.62},
                              {0.88, 0.18}, {0.93, 0.36}};
        auto at = [&](int i) { return QPointF(st[i].x() * w, st[i].y() * h); };
        g.setPen(QPen(QColor(0xd9, 0xb4, 0x4a, 110), 1.2));
        const int links[][2] = {{0, 1}, {1, 2}, {2, 3}, {3, 0}, {3, 4}, {4, 5}, {1, 6}, {2, 7}};
        for (auto &l : links) g.drawLine(at(l[0]), at(l[1]));
        for (int i = 0; i < 8; i++) {
            QRadialGradient star(at(i), 7);
            star.setColorAt(0, QColor(0xff, 0xf1, 0xc2));
            star.setColorAt(0.35, QColor(0xf2, 0xd4, 0x73, 200));
            star.setColorAt(1, QColor(0xf2, 0xd4, 0x73, 0));
            g.setPen(Qt::NoPen);
            g.setBrush(star);
            g.drawEllipse(at(i), 7, 7);
        }
        QFont t = font();
        t.setPixelSize(34);
        t.setWeight(QFont::Bold);
        t.setLetterSpacing(QFont::PercentageSpacing, 108);
        g.setFont(t);
        g.setPen(look::gold);
        g.drawText(QRectF(28, 30, w, 44), Qt::AlignLeft | Qt::AlignVCenter, "SAINT SEIYA");
        QFont s = font();
        s.setPixelSize(16);
        s.setLetterSpacing(QFont::PercentageSpacing, 125);
        g.setFont(s);
        g.setPen(look::text);
        g.drawText(QRectF(30, 76, w, 24), Qt::AlignLeft | Qt::AlignVCenter, "THE HADES  ·  PC PORT");
        QFont v = font();
        v.setPixelSize(12);
        g.setFont(v);
        g.setPen(look::muted);
        g.drawText(QRectF(30, 104, w, 20), Qt::AlignLeft | Qt::AlignVCenter,
                   T("Setup  ·  version %1", "Instalador  ·  versão %1").arg(QString::fromUtf8(SETUP_VERSION)));
        g.setPen(QPen(QColor(0xd9, 0xb4, 0x4a, 90), 1));
        g.drawLine(QPointF(0, h - 0.5), QPointF(w, h - 0.5));
    }
};

/* Where the image goes: click to browse, or drop the file on it */
class DropZone : public QFrame {
public:
    std::function<void()> clicked;
    std::function<void(const QString &)> dropped;
    QLabel *icon, *name, *where;
    DropZone() {
        setObjectName("drop");
        setAcceptDrops(true);
        setCursor(Qt::PointingHandCursor);
        setMinimumHeight(86);
        auto *h = new QHBoxLayout(this);
        h->setContentsMargins(18, 12, 18, 12);
        h->setSpacing(16);
        icon = new QLabel;
        icon->setFixedSize(46, 46);
        icon->setPixmap(disc_pixmap(46));
        h->addWidget(icon);
        auto *v = new QVBoxLayout;
        v->setSpacing(2);
        name = new QLabel;
        QFont f = name->font();
        f.setPointSizeF(f.pointSizeF() * 1.12);
        f.setWeight(QFont::DemiBold);
        name->setFont(f);
        where = new QLabel;
        where->setObjectName("muted");
        where->setTextFormat(Qt::PlainText);
        v->addWidget(name);
        v->addWidget(where);
        h->addLayout(v, 1);
        empty();
    }
    void empty() {
        name->setText(T("Drop your ISO here, or click to choose it", "Arraste a sua ISO para cá, ou clique para escolher"));
        where->setText(T("Saint Seiya: The Hades, European release (SLES-54162), .iso",
                         "Saint Seiya: The Hades, versão europeia (SLES-54162), .iso"));
    }
    void file(const QString &path) {
        QFileInfo fi(path);
        name->setText(fi.fileName());
        where->setText(QFontMetrics(where->font()).elidedText(QDir::toNativeSeparators(fi.absolutePath()), Qt::ElideMiddle, 520));
    }
    static QPixmap disc_pixmap(int n) {                    /* a disc, drawn */
        QPixmap pm(n * 2, n * 2);
        pm.setDevicePixelRatio(2);
        pm.fill(Qt::transparent);
        QPainter g(&pm);
        g.setRenderHint(QPainter::Antialiasing);
        QConicalGradient c(n / 2.0, n / 2.0, 30);
        c.setColorAt(0, QColor(0xf2, 0xd4, 0x73));
        c.setColorAt(0.25, QColor(0x8e, 0x84, 0xe0));
        c.setColorAt(0.5, QColor(0xd9, 0xb4, 0x4a));
        c.setColorAt(0.75, QColor(0x6c, 0xc4, 0xd8));
        c.setColorAt(1, QColor(0xf2, 0xd4, 0x73));
        g.setPen(Qt::NoPen);
        g.setBrush(c);
        g.drawEllipse(QRectF(1, 1, n - 2, n - 2));
        g.setBrush(look::night);
        g.drawEllipse(QPointF(n / 2.0, n / 2.0), n * 0.14, n * 0.14);
        g.setBrush(Qt::NoBrush);
        g.setPen(QPen(QColor(255, 255, 255, 90), 1));
        g.drawEllipse(QPointF(n / 2.0, n / 2.0), n * 0.24, n * 0.24);
        return pm;
    }
protected:
    void mousePressEvent(QMouseEvent *) override { if (clicked && isEnabled()) clicked(); }
    static QString local_file(const QMimeData *m) {
        if (!m->hasUrls() || m->urls().size() != 1 || !m->urls()[0].isLocalFile()) return QString();
        return m->urls()[0].toLocalFile();
    }
    void hot(bool on) { setProperty("hot", on); style()->unpolish(this); style()->polish(this); }
    void dragEnterEvent(QDragEnterEvent *e) override {
        if (isEnabled() && !local_file(e->mimeData()).isEmpty()) { e->acceptProposedAction(); hot(true); }
    }
    void dragLeaveEvent(QDragLeaveEvent *) override { hot(false); }
    void dropEvent(QDropEvent *e) override {
        hot(false);
        QString f = local_file(e->mimeData());
        if (!f.isEmpty() && dropped) { e->acceptProposedAction(); dropped(f); }
    }
};

static QFrame *card(const QString &number, const QString &title, QVBoxLayout **body) {
    auto *c = new QFrame;
    c->setObjectName("card");
    auto *v = new QVBoxLayout(c);
    v->setContentsMargins(20, 16, 20, 18);
    v->setSpacing(10);
    auto *t = new QLabel(number + "   " + title.toUpper());
    t->setObjectName("cardTitle");
    QFont f = t->font();
    f.setLetterSpacing(QFont::PercentageSpacing, 110);
    t->setFont(f);
    v->addWidget(t);
    *body = v;
    return c;
}

class Window : public QWidget {
public:
    Window() {
        setObjectName("root");
        setWindowTitle(QString::fromUtf8(TITLE));
        setWindowIcon(look::icon());
        auto *root = new QVBoxLayout(this);
        root->setContentsMargins(0, 0, 0, 0);
        root->setSpacing(0);
        root->addWidget(new Banner);

        auto *body = new QVBoxLayout;
        body->setContentsMargins(24, 20, 24, 20);
        body->setSpacing(14);
        root->addLayout(body, 1);

        QVBoxLayout *v1;
        body->addWidget(card("1", T("Your disc", "Seu disco"), &v1));
        drop = new DropZone;
        v1->addWidget(drop);
        status = new QLabel;
        status->setObjectName("status");
        status->setWordWrap(true);
        v1->addWidget(status);

        QVBoxLayout *v2;
        body->addWidget(card("2", T("Options", "Opções"), &v2));
        font = new QCheckBox(T("HD font for the texts (M PLUS Rounded 1c, free license, ~3.5 MB download)",
                               "Fonte HD nos textos (M PLUS Rounded 1c, licença livre, download de ~3,5 MB)"));
        wide = new QCheckBox(T("Widescreen 16:9 (F2 switches in the game)", "Widescreen 16:9 (F2 troca no jogo)"));
        shortcut = new QCheckBox(T("Shortcut to the game", "Atalho para o jogo"));
        for (QCheckBox *c : {font, wide, shortcut}) { c->setChecked(true); v2->addWidget(c); }

        bar = new QProgressBar;
        bar->setRange(0, 1000);
        bar->setValue(0);
        bar->setTextVisible(false);
        QSizePolicy sp = bar->sizePolicy();
        sp.setRetainSizeWhenHidden(true);               /* shown while installing; its place kept */
        bar->setSizePolicy(sp);
        bar->hide();
        body->addWidget(bar);
        step = new QLabel;
        step->setObjectName("muted");
        step->setWordWrap(true);
        body->addWidget(step);
        body->addStretch(1);

        auto *buttons = new QHBoxLayout;
        auto *quit = new QPushButton(T("Close", "Fechar"));
        install = new QPushButton(T("Install", "Instalar"));
        install->setObjectName("outline");
        play = new QPushButton(T("Play", "Jogar"));
        play->setObjectName("primary");
        play->setDefault(true);
        for (QPushButton *b : {quit, install, play}) b->setCursor(Qt::PointingHandCursor);
        buttons->addWidget(quit);
        buttons->addStretch(1);
        buttons->addWidget(install);
        buttons->addWidget(play);
        body->addLayout(buttons);
        setFixedWidth(720);

        drop->clicked = [this] {
            QString f = QFileDialog::getOpenFileName(this, T("Disc image", "Imagem do disco"), QDir::homePath(),
                                                     T("Disc images (*.iso);;All files (*)", "Imagens de disco (*.iso);;Todos os arquivos (*)"));
            if (!f.isEmpty()) choose(f);
        };
        drop->dropped = [this](const QString &f) { choose(f); };
        connect(install, &QPushButton::clicked, this, [this] { run(); });
        connect(play, &QPushButton::clicked, this, [this] {
            if (!QProcess::startDetached(game_exe(), {}, game_dir))
                QMessageBox::warning(this, QString::fromUtf8(TITLE), T("The game could not be started (%1).", "O jogo não pôde ser aberto (%1).").arg(game_exe()));
            else close();
        });
        connect(quit, &QPushButton::clicked, this, &QWidget::close);

        install->setEnabled(false);
        play->setEnabled(false);
        if (installed()) {
            drop->file(disc_dir() + "/game.iso");
            show_status(T("✓  Installed: press Play. To use another image, drop it above and install again.",
                          "✓  Instalado: aperte Jogar. Para usar outra imagem, solte-a acima e instale de novo."), true);
            play->setEnabled(QFileInfo(game_exe()).exists());
        } else {
            step->setText(T("Choose your disc image to begin.", "Escolha a imagem do seu disco para começar."));
        }
        if (!QFileInfo(game_exe()).exists())
            step->setText(T("The game (%1) is not next to this setup: keep the release's files together.",
                            "O jogo (%1) não está junto deste instalador: mantenha os arquivos do release juntos.")
                              .arg(QFileInfo(game_exe()).fileName()));
        setFixedHeight(sizeHint().height() + 24);       /* room for a two-line message */
    }

    void choose(const QString &f) {
        drop->file(f);
        disc = check_disc(f);
        iso = f;
        show_status((disc.ok ? "✓  " : "✕  ") + disc.message, disc.ok);
        install->setEnabled(disc.ok);
        install->setText(installed() ? T("Install again", "Instalar de novo") : T("Install", "Instalar"));
        if (disc.ok && !installed()) step->setText(T("Ready to install.", "Pronto para instalar."));
    }

private:
    DropZone *drop;
    QLabel *status, *step;
    QCheckBox *font, *wide, *shortcut;
    QProgressBar *bar;
    QPushButton *install, *play;
    Disc disc;
    QString iso;

    void show_status(const QString &text, bool good) {
        status->setText(text);
        status->setProperty("state", good ? "ok" : "bad");
        status->style()->unpolish(status);
        status->style()->polish(status);
    }

    void run() {
        if (!disc.ok) return;
        Options o;
        o.font = font->isChecked();
        o.widescreen = wide->isChecked();
        o.shortcut = shortcut->isChecked();
        for (QWidget *w : findChildren<QWidget *>()) if (w != bar && w != step && w != status) w->setEnabled(false);
        step->setText(T("Copying the image…", "Copiando a imagem…"));
        bar->setValue(0);
        bar->show();
        Disc d = disc;
        auto *sha1 = new QByteArray;
        std::thread([this, path = iso, d, sha1, o] {
            QString err = copy_disc(path, d, sha1, [this](qint64 done, qint64 total) {
                int v = int(done * 1000 / (total ? total : 1));
                QMetaObject::invokeMethod(bar, [this, v] {
                    bar->setValue(v);
                    step->setText(T("Copying the image…  %1%", "Copiando a imagem…  %1%").arg(v / 10));
                }, Qt::QueuedConnection);
            });
            QMetaObject::invokeMethod(this, [this, err, sha1, o] { copied(err, sha1, o); }, Qt::QueuedConnection);
        }).detach();
    }

    /* after the copy, on the window's thread */
    void copied(const QString &err, QByteArray *sha1, const Options &o) {
        QStringList notes;
        if (err.isEmpty()) {
            notes << sha1_note(*sha1);
            if (o.font) {
                step->setText(T("Downloading the font…", "Baixando a fonte…"));
                QString e = download_font();
                if (!e.isEmpty()) notes << e;
            }
            write_settings(o);
            if (o.shortcut) make_shortcut();
            bar->setValue(1000);
            step->setText(notes.join(' '));
            show_status(T("✓  Installed: press Play.", "✓  Instalado: aperte Jogar."), true);
        } else {
            step->setText(QString());
            show_status("✕  " + err, false);
        }
        delete sha1;
        for (QWidget *w : findChildren<QWidget *>()) w->setEnabled(true);
        play->setEnabled(installed() && QFileInfo(game_exe()).exists());
        install->setEnabled(disc.ok);
        if (play->isEnabled()) play->setFocus();
    }
};

int main(int argc, char **argv) {
    portuguese = QLocale::system().language() == QLocale::Portuguese;
    QStringList args;
    for (int i = 1; i < argc; i++) args << QString::fromLocal8Bit(argv[i]);
    int at = args.indexOf("--install");
    if (at >= 0) {
        QCoreApplication app(argc, argv);
        game_dir = QCoreApplication::applicationDirPath();
        install_dir = qEnvironmentVariable("SSTHEH_INSTALL_DIR", game_dir);
        if (at + 1 >= args.size()) { fprintf(stderr, "usage: %s --install <image.iso> [--no-font] [--no-shortcut] [--4-3]\n", argv[0]); return 1; }
        Options o;
        o.font = !args.contains("--no-font");
        o.shortcut = !args.contains("--no-shortcut");
        o.widescreen = !args.contains("--4-3");
        return install_cli(args[at + 1], o);
    }
    QApplication app(argc, argv);
    look::apply(app);
    app.setWindowIcon(look::icon());
    game_dir = QCoreApplication::applicationDirPath();
    install_dir = qEnvironmentVariable("SSTHEH_INSTALL_DIR", game_dir);
    Window w;
    w.show();
    int shot = args.indexOf("--screenshot");          /* tests: the window into a PNG, with an image chosen */
    if (shot >= 0 && shot + 1 < args.size()) {
        int iso = args.indexOf("--iso");
        if (iso >= 0 && iso + 1 < args.size()) w.choose(args[iso + 1]);
        app.processEvents();
        w.grab().save(args[shot + 1]);
        return 0;
    }
    return app.exec();
}
