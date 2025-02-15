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

    char *str = NULL;
    size_t max_size = TAM_MAX;
    size_t a_size;

    str = (char *)malloc(max_size * sizeof(char));

    if (str == NULL){
        printf("Erro na alocação da memória\n");
        return 1;
    }

    puts("Digite uma string:");
    fgets(str, TAM_MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    a_size = medirtamanho(str);
    if(str[a_size] == '\n'){
        str[a_size] = '\0';
    }

    int size = medirtamanho(str);

    printf("O tamanho da string é: %d\n", size);

    free(str);


    return 0;
} // olhar se tem redundancia dps!!!!!!!!!!!!!!!!!!!!!!!!!