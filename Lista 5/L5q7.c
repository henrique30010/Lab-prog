#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM_MAX 100

void concatenar(char *str1, char *str2, char *resultado){
    while(*str1 != '\0'){
        *resultado = *str1;
        str1++;
        resultado++;
    }

    while(*str2 != '\0'){
        *resultado = *str2;
        str2++;
        resultado++;
    }

    *resultado = '\0';
}

int main (){

    char str1[TAM_MAX], str2[TAM_MAX], *resultado;

    puts("Digite a primeira string:");
    fgets(str1, TAM_MAX, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    puts("Digite a segunda string para concatenar com a primeira:");
    fgets(str2, TAM_MAX, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    resultado = (char *)malloc(strlen(str1) + strlen(str2) + 1);
    if(resultado == NULL){
        printf("Erro ao alocar na memória");
        return 1;
    }

    concatenar(str1, str2, resultado);

    printf("Strings concatenadas: %s\n", resultado);

    free(resultado);

    return 0;
}