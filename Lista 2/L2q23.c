#include <stdio.h>

int main (){

    int x = 2, pre, pos;
    printf("Número antes do pré-incremento: %d\n", x);
    pre = --x;
    printf("Número após o pré-incremento: %d\n", x);
    x = 2;
    printf("Número antes do pós incremento: %d\n", x);
    pos= x--;
    printf("Número após o pós-incremento: %d\n", x);


    return 0;
}