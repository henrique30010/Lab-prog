#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 3
#define RANGE 20


int main (){

    float meda, medg;
    int v[TAM], soma = 0, produto = 1;

    printf("Números do vetor aleatório:\n");
    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        v[i] = rand() % RANGE;
        soma += v[i];
        produto *= v[i];
        printf("%d\n", v[i]);
    }

    meda = (float) soma / TAM;
    medg = pow(produto, 1/TAM);

    printf("Média aritmética: %.2f\n", meda);
    printf("Média geométrica: %.2f\n", medg);




    return 0;
}