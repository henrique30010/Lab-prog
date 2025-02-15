#include <stdio.h>
#include <string.h>
#define TAM 50

int main (){

    char str1[TAM], str2[TAM];
    int temp = 1;

    puts("Digite uma string");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    puts("Digite uma segunda string para verificar se elas são iguais");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0';

//SEM STRCMP

    if (strlen(str1) != strlen(str2)){
        temp = 0;
    } else{
        for (int i = 0; i < strlen(str1); i++){
            if (str1[i] != str2[i]){
                temp = 0;
                break;
            }
        }
    }
    
    if (temp){
        printf("As strings são iguais\n");
    } else{
        printf("As strings são diferentes\n");
    }

 //COM STRCMP

    if ( strcmp(str1 , str2) == 0){
        printf("As strings são iguais\n");
    } else{
        printf("As strings são diferentes\n");
    }
   
    return 0;
}