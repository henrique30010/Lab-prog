#include <stdio.h>

int main (){

    int x,y;
    printf("Digite um número inteiro\n");
    scanf("%d", &x);

    printf("Digite outro número inteiro\n");
    scanf("%d", &y);

    (x % y == 0) ? printf("O primeiro é múltiplo do segundo") : printf("O primeiro não é múltiplo do segundo");

    return 0;
}