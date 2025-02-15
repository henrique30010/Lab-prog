#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
#define RANGE 101

int main (){

    int m[TAM][TAM];
    int x, cont=0;

    srand(time(NULL));
    printf("Matriz gerada aleatoriamente:\n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            m[i][j]= rand() % RANGE;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Digite um número para verificar se ele está presente na matriz aleatório\n");
    scanf("%d", &x);

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            if (m[i][j] == x){
                cont++;
            }
        }
    }

    printf("O valor %d aprece %d vez(es) na matriz\n", x, cont);


    return 0;
}