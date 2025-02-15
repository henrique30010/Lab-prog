#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int n, N;
    
    printf("Digite o número de termos que o vetor X terá:\n");
    scanf("%d", &n);

    printf("E o valor limite dos números que podem ser adicionados a ele:\n ");
    scanf("%d", &N);
    
    int *x = (int *)malloc(n * sizeof(int));
    int *f = (int *)calloc(N, sizeof(int));

    if( x == NULL || f == NULL){
        printf("Erro de alocação da memória\n");
        return 1;
    }

    srand(time(NULL));
    printf("Vetor X:\n");
    for(int i = 0; i < n; i++){
        x[i] = rand () % N;
        printf("%d ", x[i]);
        f[x[i]]++;
    }

    printf("\n");

    printf("Vetor F:\n");
    for (int i =0; i < N; i++){
        printf("F[%d] = %d\n", i, f[i]);
    }

    free(x);
    free(f);

    return 0;
}