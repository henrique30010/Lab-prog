#include <stdio.h>

int main (){

    int num, x, xi=0, digito;

    printf("Digite um número de 5 algarismos para verificar se ele é um palíndromo ou não\n");
    scanf("%d", &num);

    x = num;

    while (num > 0){
        digito = num % 10;
        xi = xi * 10 + digito;
        num /= 10;
    }

    if (x == xi){
        printf("%d é palíndromo.\n", x);
    } else{
        printf("%d não é palíndromo.\n", x);
    }


    return 0;
}