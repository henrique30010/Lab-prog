#include <stdio.h>

int main (){

    unsigned long long som=0, i;

    for (i=0; i <= 63; i++){
        som += (1ULL << i);
    }

    printf("O tabuleiro suporta %llu grãos de trigo\n", som);

    return 0;
}