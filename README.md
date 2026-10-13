# Saint Seiya: The Hades — decompilação

Decompilação matching de **Saint Seiya: The Hades** (PS2, Europa, SLES-54162), com o objetivo de um port
nativo para PC no modelo do [Tenkaichi3Decomp](https://github.com/z3xox/Tenkaichi3Decomp).

Este repositório não contém nada do jogo. Você precisa da sua própria cópia de `SLES_541.62`.

## Estado

- O build reproduz `SLES_541.62` **byte a byte** a partir do assembly gerado pelo splat.
- Compilador do jogo identificado: Metrowerks CodeWarrior PS2 3.0.1 (b198/b205/b210), `-O3`, C++.
- Nenhuma função decompilada ainda. Veja `docs/recon.md` para o mapa do executável.

## Preparação

```sh
tools/setup.sh                      # wibo, compiladores, binutils R5900, venv Python
cp /caminho/para/SLES_541.62 disc/  # do seu disco
.venv/bin/python configure.py       # roda o splat e gera build.ninja
PATH=$PWD/.venv/bin:$PATH ninja     # monta, linka e compara: "OK: build matches the original"
```

Requisitos: Linux x86-64, Python 3, `ninja`, um GCC para compilar o binutils e suporte a programas de 32 bits
(o ee-gcc 2.96 é um binário i386).

## Estrutura

| Caminho | |
|---|---|
| `config/sles_541.62.yaml` | configuração do splat (segmentos, `$gp`) |
| `config/symbol_addrs.txt` | nomes conhecidos (`nome = 0xENDEREÇO; // type:func`) |
| `asm/`, `assets/` | gerados pelo splat (ignorados pelo git) |
| `src/`, `include/` | código decompilado (C++) |
| `tools/fdiff.py` | compila um `.cpp` e compara cada função com o original |
| `tools/recon/` | scripts do reconhecimento (classificação de compiladores, teste de builds) |
| `docs/recon.md` | o que se sabe do executável |

## Decompilando uma função

1. Leia o assembly em `asm/game_*.s` (cada função está entre `glabel` e `endlabel`).
2. Escreva o C++ em `src/…` com o nome `func_XXXXXXXX`, ou dê um nome e registre em `config/symbol_addrs.txt`.
3. `tools/fdiff.py src/arquivo.cpp` até aparecer `OK` para a função.

Os compiladores Metrowerks são software proprietário, arquivado pelo decomp.me. Use só se tiver direito a eles.
