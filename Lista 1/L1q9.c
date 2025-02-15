#include <stdio.h>

int main (){

    float l,c,a;
    printf("digite o valor da largura, do comprimento e da altura, respectivamente, para obter o volume de uma caixa\n");
    scanf("%f", &l);
    scanf("%f", &c);
    scanf("%f", &a);

    printf("O volume é: %f", l*c*a);
    
    return 0;
}