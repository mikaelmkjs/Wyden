#include <stdio.h>

#define TAMANHO 10

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void colocarNavioHorizontalVertical(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, char orientacao) {
    for (int i = 0; i < tamanho; i++) {
        if (orientacao == 'H') {
            tabuleiro[linha][coluna + i] = 3;
        } else if (orientacao == 'V') {
            tabuleiro[linha + i][coluna] = 3;
        }
    }
}

void colocarNavioDiagonal(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, char orientacao) {
    for (int i = 0; i < tamanho; i++) {
        if (orientacao == 'D') {
            tabuleiro[linha + i][coluna + i] = 3;
        } else if (orientacao == 'A') {
            tabuleiro[linha + i][coluna - i] = 3;
        }
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    colocarNavioHorizontalVertical(tabuleiro, 1, 1, 3, 'H');
    colocarNavioHorizontalVertical(tabuleiro, 4, 4, 3, 'V');
    colocarNavioDiagonal(tabuleiro, 0, 0, 3, 'D');
    colocarNavioDiagonal(tabuleiro, 6, 9, 3, 'A');

    exibirTabuleiro(tabuleiro);

    return 0;
}