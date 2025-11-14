#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    int navioG[3] = {3,3,3}; //navio Gabriel
    int navioV[3] = {3,3,3}; //Navio Vitor
    
    // Inicializar o tabuleiro com água (0)
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas dos navios
    int linhaG = 2, colunaG = 4; // horizontal
    int linhaV = 5, colunaV = 1; // vertical

    // Posicionar navio horizontal
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaG][colunaG + i] = navioG[i];
    }

    // Posicionar navio vertical
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    // Mostrar o tabuleiro
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
