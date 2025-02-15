#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM_MAX 50

void ordenacaobolha(int *v, int size){
    int *i,*j, aux;

    for(i = v; i < v + size - 1; i++){
        for(j = v; j < v + size - (i - v) - 1; j++){
            if (*j > *(j + 1)){
                aux = *j;
                *j = *(j + 1);
                *(j + 1) = aux;
            }
        }
    }
}

int main (){

    int v[TAM_MAX];

    srand(time(NULL));
    for(int i = 0; i < TAM_MAX; i++){
        v[i] = rand () % TAM_MAX;
    }

    ordenacaobolha(v, TAM_MAX);

    printf("Vetor ordenado:\n");
    for(int i = 0; i < TAM_MAX; i++){
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}