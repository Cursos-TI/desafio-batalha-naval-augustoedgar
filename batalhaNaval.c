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

    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i && i < 3)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i + j >= 2) && (i + j <= 6) && (i - j <= 2) && (j - i <= 2))
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    int origemConeLinha = 2, origemConeColuna = 5;
    int origemCruzLinha = 5, origemCruzColuna = 5;
    int origemOctaedroLinha = 8, origemOctaedroColuna = 2;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int linha = origemConeLinha - 2 + i;
                int coluna = origemConeColuna - 2 + j;

                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] == 0)
                        tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int linha = origemCruzLinha - 2 + i;
                int coluna = origemCruzColuna - 2 + j;

                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] == 0)
                        tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                int linha = origemOctaedroLinha - 2 + i;
                int coluna = origemOctaedroColuna - 2 + j;

                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] == 0)
                        tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLEGENDA:\n");
    printf("0 = Água\n3 = Navio\n5 = Área de habilidade\n");

    return 0;
}
