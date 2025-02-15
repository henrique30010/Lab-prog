#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptrx, *ptry, x, y, *soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Digite outro número inteiro: ");
    scanf("%d", &y);

    ptrx = &x;
    ptry = &y;

    soma = (int *) malloc(sizeof(int));
    if(soma == NULL){
        printf("erro ao alocar memória\n");
        return 1;
    }

    *soma = *ptrx + *ptry;

    printf("A soma é: %d\n", *soma);
    printf("O enderenço da soma é: %p\n", soma);

    free(soma);


    return 0;

}