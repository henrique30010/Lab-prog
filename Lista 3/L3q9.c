#include <stdio.h>
#define TAM 3

int main (){

    int m[TAM][TAM];

    printf("Preencha a matriz 3x3\n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("Linha [%d] Coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("Elementos da diagonal principal:\n");
    for(int i = 0; i < TAM; i++){
        printf("%d ", m[i][i]);
    }


    return 0;
}