#include <stdio.h>

int main (){

    int x;
    printf("Digite um número inteiro para saber se ele é par ou ímpar\n");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("O número é par\n") : printf("O número é ímpar\n");

    return 0;
}