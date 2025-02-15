#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 100

void copystring(char *original, char *copia){
    while (*original != '\0'){
        *copia = *original;
        original++;
        copia++;
    }
    *copia = '\0';
}

int main (){

    char *original = NULL, *copia = NULL;
    size_t max_size = TAM_MAX;

    original = (char *)malloc(max_size * sizeof(char));
    if (original == NULL){
        printf("Erro de alocação da memória.\n");
        return 1;
    }

    copia = (char *)malloc(max_size * sizeof(char));
    if (copia == NULL){
        printf("Erro de alocação da memória.\n");
        free(original);
        return 1;
    }

    puts("Digite uma string:");
    fgets(original, TAM_MAX, stdin);
    original[strcspn(original, "\n")] = '\0';

    copystring(original, copia);

    printf("String original: %s\n", original);

    printf("String copiada: %s\n", copia);

    free(original);
    free(copia);
    
    return 0;
}