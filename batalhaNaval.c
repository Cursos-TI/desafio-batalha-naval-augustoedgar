#include <stdio.h>

int main() {

    int tabuleiro[5][5]; // matriz 5x5 representando o tabuleiro
    int i, j;

    // Inicializa o tabuleiro com 0 (sem navio)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++) {
        tabuleiro[i][1] = 1; // 1 representa parte do navio
        printf("Navio Vertical - Parte %d: Linha %d, Coluna %d\n", i + 1, i, 1);
    }

    for (j = 2; j < 5; j++) {
        tabuleiro[4][j] = 1;
        printf("Navio Horizontal - Parte %d: Linha %d, Coluna %d\n", j - 1, 4, j);
    }

    return 0;
}
