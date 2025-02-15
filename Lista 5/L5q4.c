#include <stdio.h>
#define TAM 10

int main (){

    int v[TAM],*ptrv;

    printf("Digite 10 números para compor um vetor\n");
    for(int i = 0; i < TAM; i++){
        scanf("%d", &v[i]);    
    }
    
    ptrv = v;

    printf("Vetor:[ ");
    for(int i = 0; i < TAM; i++){
        printf("%d ", v[i]);
    }

    printf("]\n");

    for(int i = 0; i < TAM; i++){
        printf("Valor %d tem endereço %p\n", *(ptrv + i), (ptrv + i));
    }

    return 0;
}