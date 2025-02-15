#include <stdio.h>


int main (){

    printf("Os quadrados dos múltiplos de 4 entre 15 e 90 são:");

    for (int i=16; i < 91; i++){
        if (i % 4 == 0){
            printf("%d, ", i*i);
        } else{
            continue;
        }

    }

    return 0;
}