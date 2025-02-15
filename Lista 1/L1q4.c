#include <stdio.h>


int main(){

    float total, dezpc, conta;

    printf("digite o valor da conta para ser acrescido os 10%%\n");
    scanf("%f", &conta);

    dezpc =(conta*10/100);
    total = conta + dezpc;
    printf("\no valor total a ser pago é: %f", total);

    return 0;
}