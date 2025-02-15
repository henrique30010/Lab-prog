#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void preenchematriz(int **matriz, int dim){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            matriz[i][j] = rand() % 101;
        }
    }
}

void printamatriz(int **matriz, int dim){
    printf("Matriz: \n");
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int **alocamatriz(int dim){
    int **matriz = (int **)malloc(dim * sizeof(int *));
    for( int i = 0; i < dim; i++){
        matriz[i] = (int *)malloc(dim * sizeof(int));
    }
    return matriz;
}

int sum(int **matriz, int dim){
    int soma = 0;
    for(int i = 0; i < dim; i++){
        soma+= matriz[i][i];
    }
    return soma;
}

void freem (int **matriz, int dim){
    for( int i = 0; i < dim; i++){
        free(matriz[i]);
    }
    free(matriz);
}


int main(){

    int dim;
    printf("Digite a dimensão NxN da matriz:\n");
    scanf("%d", &dim);

    srand(time(NULL));
    int **matriz = alocamatriz(dim);

    preenchematriz(matriz, dim);
    printamatriz(matriz, dim);

    int soma = sum(matriz, dim);
    printf("O somatório da diagonal principal é: %d\n", soma);

    if(soma % 2 == 0){
        printf("O somatório é par.\n");
    } else{
        printf("O somatório da diagonal principal é ímpar.\n");
    }

    freem(matriz, dim);

    return 0;
}