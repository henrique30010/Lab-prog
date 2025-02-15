#include <stdio.h>
#define TAM 50
#include <string.h>

int main (){

    char str[TAM], x;

    puts("Digite uma frase qualquer");
    fgets (str, TAM, stdin);

    puts("digite um caractere para verificar se ele está presente na string");
    scanf("%c", &x);

    for (int i = 0; i < strlen(str); i++){
        if (str[i] == x){
            printf("O caractere '%c' está presente na frase\n", x);
            break;
        } else{
            printf("O caractere '%c' não está presente na frase\n", x);
            break;
        }
    }

    return 0;
}