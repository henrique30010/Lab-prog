#include <stdio.h>

int main(){

    int x;
    printf("digite um número inteiro para obter seu antecessor e seu sucessor\n");
    scanf("%d", &x);

    printf("o sucessor e o antecessor de %d são: %d e %d", x, x+1, x-1);
    return 0;
}