#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchevetor (float *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand() % 100;
    }
}

float MSE(float *a, float *b, int tam){
    float soma = 0;
    for(int i = 0; i < tam; i++){
        float diff = a[i] - b[i];
        soma += diff*diff; 
    }
    return soma/tam; 
}

int main (){
    
    int tam;

    printf("Digite o tamanho dos vetores A e B\n");
    scanf("%d", &tam);
    
    float *a = (float *)malloc(tam * sizeof(int));
    float *b = (float *)malloc(tam * sizeof(int));
    if(a == NULL){
        printf("Erro ao alocar na memória\n");
        return 1;
    }

    if(b == NULL){
        printf("Erro ao alocar na memória\n");
        return 1;
    }

    srand(time(NULL));
    preenchevetor(a, tam);
    preenchevetor(b, tam);

    printf("Vetor A: ");
    for (int i = 0; i < tam; i++){
        printf("%.1f ", *(a + i));
    }

    printf("\n");

    printf("Vetor B: ");
    for (int i = 0; i < tam; i++){
        printf("%.1f ", *(b + i));
    }

    printf("\n");

    float mse = MSE(a, b, tam);
    printf("Erro médio quadrático: %.2f\n", mse);

    free(a);
    free(b);

    return 0;
}