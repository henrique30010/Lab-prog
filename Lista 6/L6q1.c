#include <stdio.h>
#include <stdlib.h>

int soma (int *a, int *b){
    return *a + *b;
}

int multi (int *a, int *b){
    return (*a) * (*b);
}

int main(int argc, char *argv[]){

    if (argc != 4){
        printf("execução: %s <n1> <n2> <op>\n", argv[0]);
        printf("Operações: soma = 1, multplicação = 2\n");
        return 1;
    }

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int op = atoi(argv[3]);

    int *ptr1 = &n1;
    int *ptr2 = &n2;
    
    int result;
    if (op == 1){
        result = soma(ptr1, ptr2);
        printf("Resultado soma: %d\n", result);
    } else if (op == 2){
        result = multi(ptr1, ptr2);
        printf("Resultado multiplicação: %d\n", result);
    } else{
        printf("Operação inválida!");
        return 1;
    }
    return 0;
}



