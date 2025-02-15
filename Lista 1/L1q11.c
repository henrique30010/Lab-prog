#include <stdio.h>
#include <math.h>

int main (){

    float x, y;
    printf("digite 2 números para obter sua soma, subtração, produto, quociente e o resto da divisão\n");
    scanf("%f", &x);
    scanf("%f", &y);

    printf("Soma: %.1f\n", x+y);
    printf("Subtração: %.1f\n", x-y);
    printf("Produto: %.1f\n", x*y);
    printf("Quociente: %.1f\n", x/y);
    printf("Resto da divisão: %.1f\n", fmod(x,y));
    return 0;
}