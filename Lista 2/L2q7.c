#include <stdio.h>

int main(){

    float n1, n2;

    printf("Digite 2 números para obter a divisão do primeiro pelo segundo\n");
    printf("Numerador: ");
    scanf("%f", &n1);
    printf("Denominador:");
    scanf("%f", &n2);

    while(n2==0){
        printf("Denominador não pode ser 0, digite outro número\n");
        scanf("%f", &n2);
    }

    printf("Resultado da divisão: %.2f", n1/n2);

    return 0;
}