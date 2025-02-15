#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int N;

    printf("Digite um número N\n");
    scanf("%d", &N);

    int *vx = (int *)malloc(N * sizeof(int));
    int *vy = (int *)malloc(N * sizeof(int));
    int **matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++){
        matriz[i] =  (int *)malloc(N * sizeof(int));
    }

    for( int i = 0; i < N; i++){
        for ( int j = 0; j < N; j++){
            matriz[i][j] = 0;
        }
    }

    srand(time(NULL));
    printf("Vetor X:");
    for(int i = 0; i < N; i++){
        vx[i] = rand () % (N - 1);
        printf(" %d", vx[i]);
    }

    printf("\n");

    printf("Vetor Y:");
    for(int i = 0; i < N; i++){
        vy[i] = rand () % (N - 1);
        printf(" %d", vy[i]);
    }

    printf("\n");
    
    for(int i =0; i < N; i++){
        matriz[vx[i]][vy[i]]++;
    }

    printf("\nMatriz:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free (vx);
    free (vy);
    for (int i = 0; i < N; i++){
        free(matriz[i]);
    }
    free (matriz);

    return 0;
}