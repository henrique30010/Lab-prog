#include <stdio.h>

int main (){

    int n, maior, menor,cont=0;
    
    
    while (1){
        printf("Digite um número inteiro (ou um negativo e par para encerrar o laço)\n");
        scanf("%d", &n);
        cont += 1;

        if (n < 0 && n % 2 == 0){
            break;
        }
        
        if (cont == 1){
            maior = n;
            menor = n;
        }

        if(n > maior){
            maior = n;
        }

        if (n < menor){
            menor = n;
        } 
    }

    printf("O produto entre o maior e o menor inteiro é: %d\n", maior*menor);


    return 0;
}