# Saint Seiya: The Hades — port nativo e decompilação

Port nativo para PC (Linux) de **Saint Seiya: The Hades** (PS2, Europa, SLES-54162), feito por
recompilação estática, com uma decompilação matching avançando em paralelo. O modelo é o
[Tenkaichi3Decomp](https://github.com/z3xox/Tenkaichi3Decomp).

Este repositório não contém nada do jogo. Você precisa da sua própria cópia do disco.

## Estado

O jogo **roda nativamente**: tela de título, menus e lutas em 3D, com som e controle.

| Parte | Estado |
|---|---|
| Build matching | `SLES_541.62` reconstruído **byte a byte** a partir do assembly gerado pelo splat |
| Recompilador | as 13.855 funções do executável traduzidas de MIPS R5900 para C (`tools/recomp/`) |
| CPU / kernel | registradores de 128 bits, FPU do PS2, VU0 em modo macro; threads, semáforos, interrupções, timers |
| IOP | SIF/RPC, leitura do disco a partir do ISO, controle (PADMAN), som RSSD e CRI ADXI |
| Gráficos | DMAC → VIF → GIF → GS; renderer Vulkan (SDL3 GPU) e GS em software; programas de VU1 traduzidos para código nativo |
| Imagem | escala de renderização pela resolução da tela, supersampling, filtro anisotrópico, 60 Hz (modo NTSC do próprio jogo) com quadros interpolados |
| Decompilação | compilador identificado (Metrowerks CodeWarrior PS2 3.0.1, `-O3`, C++), 327 funções de biblioteca nomeadas; nenhuma função do jogo decompilada ainda |
| Falta | vídeos (Sofdec/MPEG-2 via IPU), memory card, testes do começo ao fim, Windows/macOS |

Detalhes em [`docs/roadmap.md`](docs/roadmap.md) e [`docs/recon.md`](docs/recon.md).

## Preparação

Requisitos: Linux x86-64, Python 3, `ninja`, GCC, SDL3, `glslc` (shaderc), um driver Vulkan e suporte a
programas de 32 bits (o ee-gcc 2.96 da etapa matching é um binário i386).

```sh
tools/setup.sh                       # wibo, compiladores, binutils R5900, venv Python
cp /caminho/para/SLES_541.62 disc/   # o executável, do seu disco
cp /caminho/para/imagem.iso disc/game.iso
.venv/bin/python configure.py        # roda o splat e gera build.ninja
PATH=$PWD/.venv/bin:$PATH ninja      # build matching: "OK: build matches the original"
PATH=$PWD/.venv/bin:$PATH ninja port # port nativo: build/sstheh
./build/sstheh
```

SHA-1 esperado do `SLES_541.62`: `7ba6b0a1c05a94f28452840fcb73c204e46e79e6`. A tradução brasileira de fãs é
outro build (comprimido com SjCRUNCH) e não serve.

## Jogando

| Tecla | Botão do PS2 |
|---|---|
| Setas | direcional |
| Z / X / A / S | ✕ / ○ / □ / △ |
| Q / W / E / R | L1 / R1 / L2 / R2 |
| Enter / Backspace | Start / Select |
| F3 | painel de desempenho |
| F4 | liga/desliga o vsync |

Controles de jogo (gamepad) são reconhecidos ao serem conectados.

Opções: `--iso <arquivo>` (padrão `disc/game.iso`), `-q` / `-v` / `-vv` (log), `--shot N,M` (salva capturas
nos vblanks indicados, sem janela). Variáveis de ambiente úteis:

| Variável | Efeito |
|---|---|
| `SSTHEH_GS=sw` | GS em software em vez de Vulkan |
| `SSTHEH_VSYNC=1` | começa com vsync |
| `SSTHEH_SCALE=n` | escala de renderização fixa (1 a 8) |
| `SSTHEH_PAD2=1` | segundo controle |
| `SSTHEH_50HZ=1` | modo PAL original (50 Hz) |

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
