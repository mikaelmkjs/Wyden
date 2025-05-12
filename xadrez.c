#include <stdio.h>

// Movimento da torre com recursividade
void torre(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    torre(passos - 1);
}

// Movimento do bispo com recursividade
void bispoRec(int passos) {
    if (passos <= 0) return;
    printf("Diagonal superior direita\n");
    bispoRec(passos - 1);
}

// Movimento do bispo com loops aninhados
void bispoLoops(int passos) {
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < passos; j++) {
            if (i == j) {
                printf("Diagonal inferior esquerda\n");
            }
        }
    }
}

// Movimento da rainha (mistura torre e bispo) com recursividade
void rainha(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    printf("Diagonal superior direita\n");
    rainha(casas - 1);
}

// Movimento do cavalo com laços mais complexos
void cavalo(int tentativas) {
    for (int cima = 1; cima <= tentativas; cima++) {
        for (int direita = 1; direita <= tentativas; direita++) {
            if (cima == 2 && direita == 1) {
                printf("Cavalo: 2 para cima e 1 para a direita\n");
                break;
            }
        }
    }
}

int main() {
    int n = 3;

    printf("=== Torre ===\n");
    torre(n);

    printf("\n=== Bispo (recursivo) ===\n");
    bispoRec(n);

    printf("\n=== Bispo (loops aninhados) ===\n");
    bispoLoops(n);

    printf("\n=== Rainha ===\n");
    rainha(n);

    printf("\n=== Cavalo ===\n");
    cavalo(n);

    return 0;
}