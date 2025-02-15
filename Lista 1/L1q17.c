#include <stdio.h>

int main (){

    float raio,pi=3.14159;
    printf("Digite um raio para obter o diâmetro, o valor da circunferência e a área\n");
    scanf("%f", &raio);

    printf("O diâmetro é igual a: %.2f\n", 2*raio);
    printf("O valor da circunferência é igual a: %.2f\n", 2*pi*raio);
    printf("A área é igual a: %.2f\n", pi*raio*raio);


    return 0;
}