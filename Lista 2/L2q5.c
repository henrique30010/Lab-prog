#include <stdio.h>

int main(){

    int n, maior, menor;

    printf("Digite um valor n (ou 0 se desejar encerrar o programa)\n");
    scanf("%d", &n);

    if (n==0){
        printf("Programa encerrado.\n");
        return 0;
    }
    maior = menor = n;
    while(1){
        printf("Digite um valor n (ou 0 se desejar encerrar o programa)\n");
        scanf("%d", &n);

        if (n==0){
            printf("Programa encerrado.\n");
            break;
        }

        if (n > maior){
            maior = n;
        }
       
       if (n < menor){
        menor = n;
       }

       printf("Maior valor: %d\n", maior);
       printf("Menor valor: %d\n", menor);
    }

    return 0;
}