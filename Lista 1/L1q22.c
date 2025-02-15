#include <stdio.h>

int main() {

    int x, i,cen,dez,uni;

    printf("Digite um número de três dígitos para obtê-lo na ordem inversa: ");
    scanf("%d", &x);

    cen = x / 100;
    dez = (x / 10) % 10;
    uni = x % 10;

    i = uni * 100 + dez * 10 + cen;

    printf("O número na ordem inversa é: %d\n", i);

    return 0;
}