#include <stdio.h>

int main(){

    char s;
    float altura, pi;
    printf("digite seu sexo (m ou f) e sua altura, respectivamente, para obter seu peso ideal\n");
    scanf("%c\n", &s);
    scanf("%f", &altura);

    if (s=='m'){
        pi=72.7 * altura - 58;
    } else if (s=='f'){
        pi=62.1 * altura - 44.7;
    } else {
        printf("Sexo inválido");
    }

    printf("seu peso ideal é: %.2f", pi);

    return 0;
}