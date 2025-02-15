#include <stdio.h>

int main (){

    float sab, sal, vlr, inss;
    int hrs;

    printf("Digite o número de horas trabalhadas no mês\n");
    scanf("%d", &hrs);

    printf("Digite o valor da hora da aula\n");
    scanf("%f", &vlr);

    printf("Digite o percentual de desconto do INSS\n");
    scanf("%f", &inss);

    sab = vlr*hrs;
    sal = (vlr*hrs)*(100-inss)/100;

    printf("Salário Bruto: %.2f", sab);
    printf("Salário Líquido: %.2f", sal);




    return 0;
}