
#include <stdio.h>

int main() {
    int tabuleiro[10][10]; // Matriz 10x10

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int linha_navio_horizontal = 2;
    int coluna_navio_horizontal = 4;

    int linha_navio_vertical = 5;
    int coluna_navio_vertical = 7;

    int tamanho_navio = 3;

    // Posiciona navio horizontal 
    if (coluna_navio_horizontal + tamanho_navio <= 10) {
        int pode_posicionar = 1;
        for (int i = 0; i < tamanho_navio; i++) {
            if (tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] != 0) {
                pode_posicionar = 0;
                break;
            }
        }
        if (pode_posicionar) {
            for (int i = 0; i < tamanho_navio; i++) {
                tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 3;
            }
        }
    }

    // Posiciona navio vertical 
    if (linha_navio_vertical + tamanho_navio <= 10) {
        int pode_posicionar = 1;
        for (int i = 0; i < tamanho_navio; i++) {
            if (tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] != 0) {
                pode_posicionar = 0;
                break;
            }
        }
        if (pode_posicionar) {
            for (int i = 0; i < tamanho_navio; i++) {
                tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = 3;
            }
        }
    }

    // Exibe o tabuleiro
    printf("Tabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
