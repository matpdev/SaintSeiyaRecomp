# Contribuindo

Toda ajuda é bem-vinda: decompilar funções, melhorar o port ou testar e relatar problemas.

## Regra principal

**Nada do jogo entra no repositório**: nem o executável, nem a ISO, nem arquivos extraídos dela
(texturas, sons, modelos). O `.gitignore` já exclui `disc/`, `asm/`, `assets/` e `build/`. Confira o
`git status` antes de cada commit.

## Testando

Rode o port (veja o README) e abra uma issue com:

- o que aconteceu e onde (tela, personagem, modo de jogo);
- a GPU, o driver e a distribuição;
- a saída do terminal (`./build/sstheh -v 2> log.txt` dá mais detalhes);
- se o problema some com `SSTHEH_GS=sw` (renderer em software).

## Decompilando uma função

O objetivo é C++ que, compilado com o mesmo compilador do jogo, gere **exatamente** as mesmas instruções.

1. Escolha uma função em `asm/game_*.s` (cada uma fica entre `glabel` e `endlabel`). Funções pequenas e
   folhas (que não chamam outras) são o melhor começo. `tools/recon/xref.py` mostra quem a chama e que
   strings ela usa.
2. Escreva o C++ em `src/…` com o nome `func_XXXXXXXX`, ou dê um nome e registre em
   `config/symbol_addrs.txt`.
3. Rode `tools/fdiff.py src/arquivo.cpp` até aparecer `OK` para a função.
4. Rode `ninja`: o build tem que continuar terminando em `OK: build matches the original`.

O [decomp.me](https://decomp.me) ajuda a experimentar: use o compilador Metrowerks CodeWarrior PS2 3.0.1
com `-O3`.

## Mexendo no port

- O código nativo fica em `port/`; o recompilador, em `tools/recomp/recomp.py`.
- Para trocar uma função do jogo por uma nativa, adicione o endereço em `port/hle.txt` e implemente em
  `port/hle/`.
- Siga o estilo do arquivo que estiver editando (C, comentários curtos explicando o hardware do PS2).
- Confira que o jogo ainda chega à tela de título e a uma luta. `--shot N,M` salva capturas sem abrir
  janela, útil para comparar antes e depois.

## Pull requests

- Um assunto por PR, com uma descrição curta do que muda e de como foi testado.
- Commits com mensagens no imperativo ou descritivas, como as do histórico.
