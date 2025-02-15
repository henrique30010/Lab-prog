#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main (){

    int v[TAM];
    int RANGE_TAM;

    printf("Digite um número limite para ser gerado aleatoriamente: \n");
    scanf("%d", &RANGE_TAM);

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        v[i] = rand() % RANGE_TAM;
    }

// MÉTODO DE ORDENAÇÃO BOLHA
    for (int i = 0; i < TAM - 1; i++){
        for (int j = 0; j < TAM - i - 1; j++){
            if (v[j] > v[j + 1]){
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("vetor ordenado em ordem crescente: \n");
    for (int i = 0; i < TAM; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}