#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 50

int medirtamanho(char *str){
    int size = 0;

    while (*str != '\0'){
        size++;
        str++;   
    }

    return size;
}

int main(){

    char *str = (char *)malloc(TAM_MAX * sizeof(char));

    if (str == NULL){
        printf("Erro na alocação da memória\n");
        return 1;
    }

    puts("Digite uma string:");
    fgets(str, TAM_MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    int size = medirtamanho(str);

    printf("O tamanho da string é: %d\n", size);

    free(str);


    return 0;
} 