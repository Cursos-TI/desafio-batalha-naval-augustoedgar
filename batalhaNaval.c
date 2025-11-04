#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for (i = 1; i < 4; i++) {
        tabuleiro[i][2] = 3;
    }

    for (j = 4; j < 7; j++) {
        tabuleiro[7][j] = 3;
    }

    for (i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    for (i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }


    printf("===== TABULEIRO BATALHA NAVAL 10x10 =====\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n"); 
    }

    printf("\n===== POSIÇÕES DOS NAVIOS =====\n");

    printf("\nNavio Vertical (coluna 2):\n");
    for (i = 1; i < 4; i++) {
        printf("Linha %d, Coluna 2\n", i);
    }

    printf("\nNavio Horizontal (linha 7):\n");
    for (j = 4; j < 7; j++) {
        printf("Linha 7, Coluna %d\n", j);
    }

    printf("\nNavio Diagonal Principal (↘):\n");
    for (i = 0; i < 3; i++) {
        printf("Linha %d, Coluna %d\n", i, i);
    }

    printf("\nNavio Diagonal Secundária (↙):\n");
    for (i = 0; i < 3; i++) {
        printf("Linha %d, Coluna %d\n", i, 9 - i);
    }

    return 0;
}
