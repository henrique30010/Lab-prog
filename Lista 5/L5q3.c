#include <stdio.h>

int main (){

    int x, *ptrx, menor;
    
    printf("Digite um número inteiro (ou um número negativo para encerrar o programa)\n");
    scanf("%d", &x);

    menor = x;

    while(1){
        printf("Digite um número inteiro (ou um número negativo para encerrar o programa)\n");
        scanf("%d", &x);

        if (x < 0){
            printf("Programa encerrado.\n");
            break;
        }

        ptrx = &x;

        if(*ptrx < menor){
            menor = *ptrx;
        }

        printf("O menor valor até o momento é: %d\n", menor);
    }

    return 0;
}