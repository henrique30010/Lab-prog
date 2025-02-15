#include <stdio.h>

int main (){

    int ja=150, pa=110, cont=0;

    while(ja>=pa){
        ja= ja + 2;
        pa= pa + 3;
        cont++;
    }

    printf("Pedro será maior que José em %d anos", cont);

    return 0;
}