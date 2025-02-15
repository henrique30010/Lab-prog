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

// MÉTODO DE ORDENAÇÃO POR SELEÇÃO
    for (int i = 0; i < TAM; i++){
        int indicemenor = i;
        for (int j = i + 1; j < TAM; j++){
            if (v[j]< v[indicemenor]){
                indicemenor = j;
            }
        }
        int aux = v[i];
        v[i] = v[indicemenor];
        v[indicemenor] = aux;
    }

    printf("vetor ordenado em ordem crescente: \n");
    for (int i = 0; i < TAM; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}