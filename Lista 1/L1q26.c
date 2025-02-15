#include <stdio.h>
#include <math.h>

int main() {
    
    float x,y,z,mediaa,mediag;

    printf("Digite o primeiro número\n");
    scanf("%f", &x);

    printf("Digite o segundo número\n");
    scanf("%f", &y);

    printf("Digite o terceiro número\n");
    scanf("%f", &z);

    mediaa = (x + y + z) / 3;

    mediag = pow((x * y * z), 1 / 3);

    printf("Média aritmética: %.2f\n", mediaa);
    printf("Média geométrica: %.2f\n", mediag);

    return 0;
}