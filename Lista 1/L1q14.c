#include <stdio.h>

int main (){

    int d;
    float sal, sab;
    printf("digite o número de dias trabalhos pelo vendedor\n");
    scanf("%d", &d);

    if (d>20){
        sab=50.25*d+((50.25*d)*30/100);
    } else if (d>10 && d<=20){
        sab=50.25*d+((50.25*d)*20/100);
    } else{
        sab=50.25*d;
    }

    sal = sab * 90/100;

    printf("O salário líquido a ser recebido é: %.2f", sal);




    return 0;
}