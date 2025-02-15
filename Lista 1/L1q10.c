#include <stdio.h>

int main (){

    float d,r;
    printf("digite o valor da cotação do dólar e o valor em reais a ser convertido, respectivamente\n");
    scanf("%f", &d);
    scanf("%f", &r);

    printf("O valor convertido é: %f", r/d);
    return 0;
}