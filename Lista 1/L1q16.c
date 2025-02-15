#include <stdio.h>
#include <stdlib.h>

int main (){

    int x, va;

    puts("Digite um número inteiro para obter seu módulo:");
    scanf("%d", &x);

    va= abs(x);

    printf("O valor absoluto de %d é: %d\n", x, va);



    return 0;
}