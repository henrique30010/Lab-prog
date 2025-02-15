#include <stdio.h>

int main(){

    float c, f, i;

    for (i = 0; i <= 100; i += 10){
        c = i;
        f = 1.8*c+32;

        printf("Temperatura em Celsius: %.1f\n", c);
        printf("Temperatura em Fahrenheit: %.1f\n", f);
    }

    return 0;
}