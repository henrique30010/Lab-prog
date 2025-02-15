#include <stdio.h>

int main (){

    float x;
    printf("digite um número real para obtê-lo com uma casa decimal ");
    scanf(" %f", &x);

    printf(" %.1f", x);


    return 0;
}