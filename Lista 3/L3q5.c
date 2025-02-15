#include <stdio.h>
#include <string.h>
#define TAM 50

int main (){

    char str1[TAM], str2 [TAM];

    puts("Digite uma string");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    puts("Digite uma segunda string para concatenar com a primeira");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0';

// COM STRCAT
    printf(strcat(str1, str2));

//SEM STRCAT
    int tam_str1 = strlen(str1);

    for(int i = 0; str2[i] = '\0'; i++){
        str1[tam_str1 +i] = str2[i];
    }

    str1[tam_str1 + strlen(str2)] = '\0';
    printf("\n");
    printf(str1);

    return 0;
}