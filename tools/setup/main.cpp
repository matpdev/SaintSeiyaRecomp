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

static bool portuguese;
static QString T(const char *en, const char *pt) { return QString::fromUtf8(portuguese ? pt : en); }

/* ------------------------------------------------------------------------------------- places */

static void make_path(const QString &dir) {
    std::error_code e;
    std::filesystem::create_directories(std::filesystem::path(dir.toStdWString()), e);
}

static QString game_dir;                                  /* where the game is: the setup's folder */

static QString game_exe() {
#ifdef Q_OS_WIN
    return game_dir + "/sstheh.exe";
#else
    return game_dir + "/sstheh";
#endif
}
static QString disc_dir() { return game_dir + "/disc"; }
static QString fonts_dir() { return game_dir + "/fonts"; }

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
    f.write(QString("[Desktop Entry]\nType=Application\nName=Saint Seiya: The Hades (PC Port)\n"
                    "Comment=PC port of the PS2 game, from your own disc\nExec=\"%1\"\nPath=%2\n"
                    "Icon=applications-games\nTerminal=false\nCategories=Game;\n").arg(game_exe(), game_dir).toUtf8());
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

class Window : public QWidget {
public:
    Window() {
        setWindowTitle(QString::fromUtf8(TITLE));
        auto *v = new QVBoxLayout(this);
        auto *title = new QLabel(QString::fromUtf8(TITLE));
        QFont tf = title->font();
        tf.setPointSizeF(tf.pointSizeF() * 1.6);
        tf.setBold(true);
        title->setFont(tf);
        v->addWidget(title);
        auto *intro = new QLabel(T("Choose the disc image (ISO) of your own copy of <b>Saint Seiya: The Hades</b>, European "
                                   "release (SLES-54162). It is checked and copied next to the game; nothing from the game "
                                   "comes with this port.",
                                   "Escolha a imagem do disco (ISO) da sua cópia de <b>Saint Seiya: The Hades</b>, versão "
                                   "europeia (SLES-54162). Ela é conferida e copiada para junto do jogo; nada do jogo vem "
                                   "com este port."));
        intro->setWordWrap(true);
        v->addWidget(intro);
        auto *row = new QHBoxLayout;
        path = new QLineEdit;
        path->setPlaceholderText(T("Disc image (.iso)", "Imagem do disco (.iso)"));
        auto *browse = new QPushButton(T("Browse…", "Procurar…"));
        row->addWidget(path, 1);
        row->addWidget(browse);
        v->addLayout(row);
        status = new QLabel;
        status->setWordWrap(true);
        v->addWidget(status);
        auto *opts = new QGroupBox(T("Options", "Opções"));
        auto *ov = new QVBoxLayout(opts);
        font = new QCheckBox(T("Download the HD font for the texts (M PLUS Rounded 1c, free license, ~3.5 MB)",
                               "Baixar a fonte HD dos textos (M PLUS Rounded 1c, licença livre, ~3,5 MB)"));
        wide = new QCheckBox(T("Widescreen 16:9 (F2 switches in the game)", "Widescreen 16:9 (F2 troca no jogo)"));
        shortcut = new QCheckBox(T("Make a shortcut to the game", "Criar um atalho para o jogo"));
        font->setChecked(true);
        wide->setChecked(true);
        shortcut->setChecked(true);
        ov->addWidget(font);
        ov->addWidget(wide);
        ov->addWidget(shortcut);
        v->addWidget(opts);
        bar = new QProgressBar;
        bar->setRange(0, 1000);
        bar->setValue(0);
        bar->setTextVisible(false);
        v->addWidget(bar);
        step = new QLabel;
        v->addWidget(step);
        auto *buttons = new QHBoxLayout;
        install = new QPushButton(T("Install", "Instalar"));
        play = new QPushButton(T("Play", "Jogar"));
        auto *quit = new QPushButton(T("Close", "Fechar"));
        play->setDefault(true);
        buttons->addStretch(1);
        buttons->addWidget(install);
        buttons->addWidget(play);
        buttons->addWidget(quit);
        v->addLayout(buttons);
        setMinimumWidth(640);
        ov->setSpacing(6);

        connect(browse, &QPushButton::clicked, this, [this] {
            QString f = QFileDialog::getOpenFileName(this, T("Disc image", "Imagem do disco"), QDir::homePath(),
                                                     T("Disc images (*.iso);;All files (*)", "Imagens de disco (*.iso);;Todos os arquivos (*)"));
            if (!f.isEmpty()) { path->setText(f); check(); }
        });
        connect(path, &QLineEdit::editingFinished, this, [this] { check(); });
        connect(install, &QPushButton::clicked, this, [this] { run(); });
        connect(play, &QPushButton::clicked, this, [this] {
            if (!QProcess::startDetached(game_exe(), {}, game_dir))
                QMessageBox::warning(this, QString::fromUtf8(TITLE), T("The game could not be started (%1).", "O jogo não pôde ser aberto (%1).").arg(game_exe()));
            else close();
        });
        connect(quit, &QPushButton::clicked, this, &QWidget::close);

        if (installed()) {
            path->setText(disc_dir() + "/game.iso");
            status->setText(T("The game is installed: press Play. To use another image, choose it and install again.",
                              "O jogo está instalado: aperte Jogar. Para usar outra imagem, escolha-a e instale de novo."));
            install->setEnabled(false);
        } else {
            play->setEnabled(false);
            install->setEnabled(false);
        }
        adjustSize();
        if (!QFileInfo(game_exe()).exists())
            step->setText(T("The game (%1) is not next to this setup: keep the release's files together.",
                            "O jogo (%1) não está junto deste instalador: mantenha os arquivos do release juntos.").arg(game_exe()));
    }

    void choose(const QString &f) { path->setText(f); check(); }

private:
    QLineEdit *path;
    QLabel *status, *step;
    QCheckBox *font, *wide, *shortcut;
    QProgressBar *bar;
    QPushButton *install, *play;
    Disc disc;

    void show_status(const QString &text, bool good) {
        status->setText(text);
        status->setStyleSheet(good ? "color: #2e7d32;" : "color: #c62828;");
    }

    void check() {
        if (path->text().isEmpty()) return;
        disc = check_disc(path->text());
        show_status(disc.message, disc.ok);
        install->setEnabled(disc.ok);
        install->setText(installed() ? T("Install again", "Instalar de novo") : T("Install", "Instalar"));
    }

    void run() {
        if (!disc.ok) return;
        Options o;
        o.font = font->isChecked();
        o.widescreen = wide->isChecked();
        o.shortcut = shortcut->isChecked();
        for (QWidget *w : findChildren<QWidget *>()) if (w != bar && w != step && w != status) w->setEnabled(false);
        step->setText(T("Copying the image…", "Copiando a imagem…"));
        QString iso = path->text();
        Disc d = disc;
        auto *sha1 = new QByteArray;
        std::thread([this, iso, d, sha1, o] {
            QString err = copy_disc(iso, d, sha1, [this](qint64 done, qint64 total) {
                int v = int(done * 1000 / (total ? total : 1));
                QMetaObject::invokeMethod(bar, [this, v] { bar->setValue(v); }, Qt::QueuedConnection);
            });
            QMetaObject::invokeMethod(this, [this, err, sha1, o] { copied(err, sha1, o); }, Qt::QueuedConnection);
        }).detach();
    }

    /* after the copy, on the window's thread */
    void copied(const QString &err, QByteArray *sha1, const Options &o) {
        {
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
                step->setText(T("Done.", "Pronto."));
                bar->setValue(1000);
                show_status(T("Installed. ", "Instalado. ") + notes.join(' '), true);
            } else {
                step->setText(QString());
                show_status(err, false);
            }
            delete sha1;
            for (QWidget *w : findChildren<QWidget *>()) w->setEnabled(true);
            play->setEnabled(installed() && QFileInfo(game_exe()).exists());
            install->setEnabled(disc.ok);
        }
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
        if (at + 1 >= args.size()) { fprintf(stderr, "usage: %s --install <image.iso> [--no-font] [--no-shortcut] [--4-3]\n", argv[0]); return 1; }
        Options o;
        o.font = !args.contains("--no-font");
        o.shortcut = !args.contains("--no-shortcut");
        o.widescreen = !args.contains("--4-3");
        return install_cli(args[at + 1], o);
    }
    QApplication app(argc, argv);
    game_dir = QCoreApplication::applicationDirPath();
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
