#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 100

char *buscacaractere(char *str, char caractere){
    while(*str != '\0'){
        if(*str == caractere){
            return str;
        }
        str++;
    }
    return NULL;
}

int main(){

    char *str = NULL, *resultado, x;
    size_t max_size = TAM_MAX;

    str = (char *)malloc(max_size * sizeof(char));
    if (str == NULL){
        printf("Erro ao alocar na memória.\n");
        return 1;
    }

    puts("Digite uma string:");
    fgets(str, TAM_MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &x);

    resultado = buscacaractere(str, x);

    if(resultado != NULL){
        printf("Caractere %c encontrado na posição: %ld\n", x, resultado - str + 1);
    } else{
        printf("Caracetere %c não foi encontrado na string\n", x);
    }

    free(str);

    return 0;
}