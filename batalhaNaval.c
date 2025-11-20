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

    //Coordenadas iniciais
    int linhaH = 2, colunaH =4;
    int linhaV = 5, colunaV = 7;

    // Coloca navio Horizontal
    for (int k = 0; k < 3; k++) {
        tabuleiro[linhaH][colunaH + k] = navioHorizontal[k];
    }

    // Coloca Navio Vertical
    for (int k = 0; k < 3; k++) {
        tabuleiro[linhaV + k][colunaV] = navioVertical[k];
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