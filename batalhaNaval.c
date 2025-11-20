#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    //Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Navios de tamanho 3 
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // Novos navios diagonais
    int navioDiagonal1[3] = {3, 3, 3}; //diagonal principal (linha++ / coluna++)
    int navioDiagonal2[3] = {3, 3, 3}; // diagonal secundaria (linha++ / coluna++)


    //Coordenadas iniciais
    int linhaH = 2, colunaH =4;
    int linhaV = 5, colunaV = 7;

    //Coordenadas dos navios diagonais
    int linhaD1 = 0, colunaD1 = 0; //diagonal principal
    int linhaD2 = 0, colunaD2 = 9; //diagonal secundária


    // Coloca navio Horizontal
    for (int k = 0; k < 3; k++) {
        tabuleiro[linhaH][colunaH + k] = navioHorizontal[k];
    }

    // Coloca Navio Vertical
    for (int k = 0; k < 3; k++) {
        tabuleiro[linhaV + k][colunaV] = navioVertical[k];
    }

    // Coloca Navio diagonal principal (linha++, coluna++)
    for (int k = 0; k < 3; k++) {
        tabuleiro[linhaD1 + k][colunaD1 + k] = navioDiagonal1[k];
    }

    //Coloca Navio diagonal secundaria (linha++, coluna--)
    for (int k = 0; k<3; k++) {
        tabuleiro[linhaD2 + k][colunaD2 - k] = navioDiagonal2[k];
    }

    //Imprimir tabuleiro com cabeçalho A-J
    printf("    A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {
        // Linhas numeradas de 1 a 10 (alinhadas)
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}