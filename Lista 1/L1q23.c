#include <stdio.h>

int main (){

    int x, n, result;

    printf("Digite um valor x\n");
    scanf("%d", &x);

    printf("Digite um valor n\n");
    scanf("%d", &n);

    result = x << n;

    printf("O resultado de %d * 2^%d é: %d\n", x, n, result);



    return 0;
}