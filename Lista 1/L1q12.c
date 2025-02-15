#include <stdio.h>

int main (){

    int a, b, x=0;
    printf("digite dois valores inteiros A e B, respecitvamente, para serem trocados entre si\n");
    scanf("%d", &a);
    scanf("%d", &b);

    x = a;
    a = b;
    b = x;

    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d", b);



    return 0;
}