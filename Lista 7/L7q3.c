#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *ptrmatriz;
    int qnt;
    float media;
}estrutura;

void preenchevetor(estrutura *vetor, int quantidade){
    vetor -> qnt = quantidade;
    vetor -> ptrmatriz = (int *)malloc(quantidade * sizeof(int));

    srand(time(NULL));

    printf("Vetor: \n");
    for(int i = 0; i < quantidade; i++){
        vetor -> ptrmatriz[i] = rand() % 100;
        printf("%d ", vetor -> ptrmatriz[i]);
    }
    printf("\n");
}

void media(estrutura *vetor){
    int soma = 0;
    for(int i = 0; i < vetor -> qnt; i++){
        soma += vetor -> ptrmatriz[i];
    }
    vetor -> media = (float)soma / vetor -> qnt;
}

int main(){
    estrutura vetor;
    int quantidade;

    printf("Digite a quantidade de elementos do vetor: \n");
    scanf("%d", &quantidade);

    preenchevetor(&vetor, quantidade);
    media(&vetor);

    printf("A média dos elementos do vetor é: %.2f\n", vetor.media);

    free(vetor.ptrmatriz);

    return 0;
}