#include <stdio.h>
#include <string.h>
#define TAM 50

int main (){

    char str[TAM];
    int cont=0;

    puts("Digite uma string para saber quantos caracteres ela tem");
    fgets(str, TAM, stdin);

    while (str [cont] != '\0'){
        cont++;
    }

    printf("A quantidade de caracteres da string é: %d\n", cont);

    return 0;
}