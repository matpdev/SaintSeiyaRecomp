# Saint Seiya: The Hades — port nativo e decompilação

Port nativo para PC (Linux) de **Saint Seiya: The Hades** (PS2, Europa, SLES-54162), feito por
recompilação estática, com uma decompilação matching avançando em paralelo. O modelo é o
[Tenkaichi3Decomp](https://github.com/z3xox/Tenkaichi3Decomp).

Este repositório não contém nada do jogo. Você precisa da sua própria cópia do disco.

## Estado

O jogo **roda nativamente**: tela de título, menus, modo história e lutas da Guerra dos Mil Dias, com música,
vozes e controle.

| Parte | Estado |
|---|---|
| Build matching | `SLES_541.62` reconstruído **byte a byte** a partir do assembly gerado pelo splat |
| Recompilador | as 13.855 funções do executável traduzidas de MIPS R5900 para C (`tools/recomp/`) |
| CPU / kernel | registradores de 128 bits, FPU do PS2, VU0 em modo macro; threads, semáforos, interrupções, timers |
| IOP | SIF/RPC, leitura do disco a partir do ISO, controle (PADMAN), CRI ADXI (som), RSSD (só o protocolo) |
| Gráficos | DMAC → VIF → GIF → GS em thread própria; renderer Vulkan (SDL3 GPU) e GS em software; programas de VU1 traduzidos para código nativo |
| Imagem | resolução interna pela resolução da tela, supersampling, filtro anisotrópico |
| Taxa de quadros | 60 Hz (modo NTSC do próprio jogo, com a região europeia); quadros interpolados entre os do jogo, sem limite (ou vsync, F4) |
| Som | **música e vozes** (CRI ADX) tocam; **efeitos sonoros** (driver RSSD da Dimps: golpes, passos, menus) ainda não |
| Decompilação | compilador identificado (Metrowerks CodeWarrior PS2 3.0.1, `-O3`, C++), 327 funções de biblioteca nomeadas; nenhuma função do jogo decompilada ainda |
| Falta | efeitos sonoros, vídeos (Sofdec/MPEG-2 via IPU), memory card, testes do começo ao fim, Windows/macOS |

Detalhes em [`docs/roadmap.md`](docs/roadmap.md) e [`docs/recon.md`](docs/recon.md).

## Jogar (só o port)

Você precisa da **sua própria cópia** do jogo: Saint Seiya: The Hades, **versão europeia (SLES-54162)**. Nada do
jogo está neste repositório. A tradução brasileira de fãs é outro build (comprimido com SjCRUNCH) e não serve.

### 1. Requisitos (Linux x86-64)

- GCC, Python 3, `ninja`, `glslc` (pacote `shaderc`), SDL3 (3.2 ou mais nova) e um driver Vulkan
  - Arch: `sudo pacman -S gcc python ninja shaderc sdl3 vulkan-icd-loader` (mais o driver da sua placa)
  - Debian/Ubuntu: `sudo apt install gcc python3-venv ninja-build glslc libsdl3-dev libvulkan1`
- o GCC também é usado **enquanto o jogo roda**: os programas de VU1 são compilados para código nativo na primeira
  vez que aparecem e guardados em `~/.cache/sstheh/vu` (os primeiros segundos de cada efeito novo podem engasgar)

### 2. Arquivos do seu disco

Faça uma imagem ISO do seu disco (por exemplo com `dd if=/dev/sr0 of=game.iso` ou o programa que preferir) e
copie o executável de dentro dela:

```sh
git clone <este repositório> SaintSeiyaDecomp && cd SaintSeiyaDecomp
cp /caminho/para/game.iso disc/game.iso          # ou: ln -s /caminho/para/game.iso disc/game.iso
7z e disc/game.iso SLES_541.62 -odisc/           # ou: bsdtar -xf disc/game.iso -C disc SLES_541.62
sha1sum disc/SLES_541.62                         # deve dar 7ba6b0a1c05a94f28452840fcb73c204e46e79e6
```

### 3. Compilar e rodar

```sh
python3 -m venv .venv
.venv/bin/pip install 'splat64[mips]' spimdisasm rabbitizer ninja-syntax pyyaml pyelftools ninja
.venv/bin/python configure.py                    # roda o splat e gera build.ninja
PATH=$PWD/.venv/bin:$PATH ninja port             # gera build/sstheh (a primeira vez leva alguns minutos)
./build/sstheh                                   # rode de dentro da pasta do repositório
```

Na primeira execução o jogo pede o idioma e avisa que não há memory card (o memory card ainda não é emulado: o
progresso não é salvo).

### Controles

| Tecla | Botão do PS2 |
|---|---|
| Setas | direcional |
| Z / X / A / S | ✕ / ○ / □ / △ |
| Q / W / E / R | L1 / R1 / L2 / R2 |
| Enter / Backspace | Start / Select |
| F3 | painel de desempenho (fps da lógica e da tela, uso de CPU) |
| F4 | liga/desliga o vsync |

Controles de jogo (gamepad) são reconhecidos ao serem conectados.

### Opções

`--iso <arquivo>` (padrão `disc/game.iso`), `-q` / `-v` / `-vv` (log), `--shot N,M` (salva capturas nos vblanks
indicados, sem janela). Variáveis de ambiente:

| Variável | Efeito |
|---|---|
| `SSTHEH_VSYNC=1` | começa com vsync (padrão: sem limite de fps) |
| `SSTHEH_SCALE=n` | escala de renderização fixa (1 a 8; padrão: pela resolução da tela, até 4) |
| `SSTHEH_INTERP=0` | sem quadros interpolados (mostra só os quadros do jogo) |
| `SSTHEH_50HZ=1` | modo PAL original (50 Hz) |
| `SSTHEH_30FPS_SCENES=1` | menus e telas 2D a 30 fps, como no disco |
| `SSTHEH_PAD2=1` | segundo controle (modos de dois jogadores) |
| `SSTHEH_AUDIO=0` | sem som |
| `SSTHEH_GS=sw` | GS em software em vez de Vulkan (lento) |
| `SSTHEH_VUJIT=0`, `SSTHEH_GSTHREAD=0`, `SSTHEH_UPLOAD_DEDUP=0` | desligam otimizações (para comparar se algo sair errado) |
| `SSTHEH_PERF_LOG=1` | escreve no terminal o que o painel F3 mostra |

### Problemas conhecidos

- efeitos sonoros não tocam (só música e vozes)
- vídeos não tocam; o memory card não existe (nada é salvo)
- o primeiro uso de cada efeito visual pode engasgar enquanto o código do VU1 compila
- se algo quebrar, rode com `-v` e anexe o log ao relato, junto com o que estava fazendo na hora

## Decompilação (build matching)

Para trabalhar na decompilação, instale a cadeia completa (compiladores Metrowerks, ee-gcc 2.96 e binutils
R5900):

```sh
tools/setup.sh                       # wibo, compiladores, binutils R5900, venv Python
.venv/bin/python configure.py
PATH=$PWD/.venv/bin:$PATH ninja      # build matching: "OK: build matches the original"
```

O ee-gcc 2.96 é um binário i386: é preciso suporte a programas de 32 bits.

## Estrutura

| Caminho | |
|---|---|
| `config/sles_541.62.yaml` | configuração do splat (segmentos, `$gp`) |
| `config/symbol_addrs.txt` | nomes conhecidos (`nome = 0xENDEREÇO; // type:func`) |
| `asm/`, `assets/` | gerados pelo splat (ignorados pelo git) |
| `src/`, `include/` | código decompilado (C++) |
| `tools/recomp/` | recompilador estático MIPS → C |
| `port/runtime/`, `port/kernel/` | CPU, memória, timers, syscalls do kernel |
| `port/iop/`, `port/hle/` | serviços do IOP e funções do SDK substituídas por nativas (lista em `port/hle.txt`) |
| `port/gs/` | DMA, VIF, VU, GS e renderer Vulkan |
| `tools/fdiff.py` | compila um `.cpp` e compara cada função com o original |
| `tools/recon/` | scripts de reconhecimento (classificação de compiladores, referências cruzadas) |

## Contribuindo

Veja [`CONTRIBUTING.md`](CONTRIBUTING.md). Dá para ajudar decompilando funções, melhorando o port ou só
testando e relatando o que quebra.

## Licenças

Partes do renderer vêm do Tenkaichi3Decomp (MIT, em `licenses/`). Os compiladores Metrowerks são software
proprietário, arquivado pelo decomp.me; use-os só se tiver direito a eles.
