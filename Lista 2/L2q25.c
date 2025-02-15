#include <stdio.h>

int main (){

    int t, sinal=1, denominador=1;
    double pi = 0;

    printf("Termos    valor de pi aproximadamente\n");
    for (t= 1; t<=50; t++){
        pi += sinal * 4.0 / denominador;
        printf("%4d              %.5f\n", t, pi);
        sinal = -sinal;
        denominador += 2;
    }



    return 0;
}