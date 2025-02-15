#include <stdio.h>
#include <string.h>

#define TAM 50

int main(){

    char str[TAM];

    puts("Digite uma string");
    fgets(str, TAM, stdin);

    printf("A string invertida: \n");
    for (int i = strlen(str) - 1; i >= 0; i--){
        printf("%c", str[i]);
    }


    return 0;
}