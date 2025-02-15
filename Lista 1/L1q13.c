#include <stdio.h>

int main (){

    float c,f;
    printf("digite uma temperatura e graus Celsius para obter a conversão em Fahrenheit\n");
    scanf("%f", &c);

    f=(9 * c + 160)/5;  

    printf("Temperatura em Fahrenheit: %f", f);

    return 0;
}