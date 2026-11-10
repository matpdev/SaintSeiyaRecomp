# Reconhecimento do executável (2026-10-13)

English: [recon.md](recon.md). Tudo aqui foi medido em `disc/SLES_541.62` (Europa, SHA-1 `7ba6b0a1…e79e6`).
Quando algo é dedução, diz que é.

## Formato

- ELF de 32 bits, R5900, flags `eabi64`, sem símbolos. As seções foram fundidas: um único `PT_LOAD` em
  `0x100000` com 0x400080 bytes de arquivo e 0x43C100 de memória.
- `crt0` em `0x100008`. Zera o `.bss` de `0x500080` a `0x53C100`, define `$gp = 0x507770`, chama `main` em
  `0x137510` (argc/argv de `0x500480`) e depois `exit` em `0x1254E0`.

## Mapa de memória

| Endereço | Conteúdo | Compilador |
|---|---|---|
| `0x100000–0x104518` | crt0 + inicialização Metrowerks | MW / asm |
| `0x104518–0x1374A0` | Bibliotecas Sony (IPU/MPEG, DMA, …) | ee-gcc |
| `0x1374A0–0x1376A0` | `main` | MW |
| `0x1376A0–0x138B20` | uma biblioteca pequena (30 funções) | ee-gcc |
| `0x138B20–0x240BD0` | **jogo** | MW |
| `0x240BD0–0x29C790` | CRI (ADX, CVFS, Sofdec/MWSFD), Sony | ee-gcc |
| `0x29C790–0x3C6F80` | **jogo** + runtime Metrowerks | MW |
| `0x3C6F80–0x3D6500` | microcódigo da VU1: 62 pacotes VIF `MPG` | — |
| `0x3D6500–0x4BE700` | `.data`/`.rodata`; inclui rotinas do kernel da libkernl (`0x3D6900–0x3D7F14`) | — |
| `0x4BE700–0x4C86B0` | inicializadores estáticos C++ (44 funções) | MW |
| `0x4C86B0–0x500080` | `.data`, `.sdata` | — |
| `0x500080–0x53C100` | `.sbss`/`.bss` | — |

Distinguindo os compiladores: a Metrowerks salva `s0`–`s7` com `sq` e alinha funções em 16 bytes; o ee-gcc usa
`sd` e alinha em 8. `tools/recon/classify.py` aplica isso função a função.

O splat encontra 13.855 funções: game_a 5.588, game_b 3.943, cri 3.209, sdk_ipu 969, start 65, sinit 44,
sdk_b 30, main 7. As regiões "game" ainda incluem o runtime da Metrowerks (MSL, C++), ainda não separado.

## Compilador

- O `.comment` diz `MW MIPS C Compiler (2.4.1.01)`. Só os builds 2.4, 3.0, 3.0.1-020123 e 3.0.3 escrevem esse
  texto, mas **nenhum deles reproduz o código**. Palpite não verificado: o `.comment` veio do primeiro objeto
  ligado (crt0), não do código do jogo.
- `tools/recon/probe/probe.cpp`: 8 funções reescritas à mão e compiladas com os 21 builds em 7 níveis de
  otimização (`tools/recon/probe/probe.py`).
  - **3.0.1 b198, b205 e b210 com `-O3`, como C++:** 7 de 8 batem byte a byte. Os outros builds batem 4 ou menos.
  - Os três vencedores produzem o mesmo código até agora. O `tools/fdiff.py` usa o b210.
- Por que C++ e `-O3`: compilado como C, o compilador faz tail calls que o jogo não faz. `-O4` e `,p`
  desenrolam laços que o jogo mantém.
- Vetores são copiados com `lq`/`sq` por um tipo de 128 bits (`mode(TI)`), não float a float.
- `0x17BE30` (um laço) ainda não bate. É a forma do código-fonte, não o compilador.

## Bibliotecas

- CRI: ADXT 9.38s281, ADXF 7.28, CVFS 2.38, MWSFD 3.33s281, SFD 1.946 (builds de outubro de 2004 e janeiro de
  2005, `GCC2096 SCE2810`).
- SDK Sony 2.8 (`PsIIlib*2800`): kernl, graph, dma, ipu, vu0, pad, mc2, cdvd, dbc.
- Módulos do IOP no disco (`MODULES/`): `CRI_ADXI.IRX`, `LIBSD`, `MCMAN`, `PADMAN`, `MTAPMAN`, `SIO2MAN`,
  `SSD`, `RSSD`, `IOPRP280.IMG`, …
