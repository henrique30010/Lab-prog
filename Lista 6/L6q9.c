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

void printamatriz(int **matriz, int dim, char *nome){
    printf("Matriz %s: \n", nome);
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

void binarizar (int **M, int **S, int dim, int t){
    for (int i = 0; i < dim ; i++){
        for(int j = 0; j < dim; j++){
            S[i][j] = (M[i][j] > t) ? 1 : 0;
        }
    }
}

void freem (int **matriz, int dim){
    for( int i = 0; i < dim; i++){
        free(matriz[i]);
    }
    free(matriz);
}

int main (int argc, char *argv[]){

    if (argc != 3){
        printf("execução: %s <dimensõesmatriz> <limiar> \n", argv[0]);
        return 1;
    }
    
    int dim = atoi(argv[1]);
    int t = atoi(argv[2]);

    srand(time(NULL));
    int **M = alocamatriz(dim);
    int **S = alocamatriz(dim);

    preenchematriz(M, dim);
    binarizar(M, S, dim, t);

    printamatriz(M, dim, "Matriz original");
    printamatriz(S, dim, "S binarizada"); 

    freem(M,dim);
    freem(S, dim);
    
    return 0;
}