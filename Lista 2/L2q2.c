#include <stdio.h>

int main (){

    char x;

    do {
        puts("Digite um número de 1 a 7 para obter um dia da semana (ou 0 para sair):");
        scanf(" %c", &x); 

        if (x == '0') {
            printf("Programa encerrado.\n");
            break; 
        }
    
        switch (x){
        case '1':
            printf("Seu dia = domingo!\n");
             break;
        case '2':
            printf("Seu dia = segunda!\n");
            break;
        case '3':
            printf("Seu dia = terça!\n");
            break;
        case '4':
            printf("Seu dia = quarta!\n");
            break;
        case '5':
            printf("Seu dia = quinta!\n");
            break;
        case '6':
            printf("Seu dia = sexta!\n");
            break;
        case '7':
            printf("Seu dia = sabado!\n");
            break;
        default:
        printf("Número inválido\n");
        }
    } while (x != 0);
    return 0;
}