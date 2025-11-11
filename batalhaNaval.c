#include <stdio.h>
int main (){

    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // inicializa as posições com 0
        }
    }
    //navio 01 coordenadas:
    tabuleiro[2][2] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[3][2] = 3;

    //nnavio 02 coordenadas:
    tabuleiro[7][3] =3;
    tabuleiro[7][4] =3;
    tabuleiro[7][5] =3;
     printf("Visualização do Tabuleiro (10x10):\n");
    printf("    A   B   C   D   E   F   G   H   I   J \n"); // Cabeçalho de Colunas
   
    for (int i = 0; i < 10; i++) {
        printf(" %d ", i); // Cabeçalho de Linhas
        for (int j = 0; j < 10; j++) {
            // imprime um '3' (Navio),  imprime um '0' (Água)
            
               printf(" [%d]", tabuleiro[i][j]);
        
        }
        printf("\n");




    }


    return 0;

}
