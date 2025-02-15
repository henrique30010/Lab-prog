#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void preenchevetor (float *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand() % 100;
    }
}

void printavetor(float *vetor, int tam, char nome){
    printf("Vetor %c: ", nome);
    for (int i = 0; i < tam; i++){
        printf("%.1f ", *(vetor + i));
    }
    printf("\n");
}

float MSE(float *a, float *b, int tam){
    float soma = 0;
    for(int i = 0; i < tam; i++){
        float diff = a[i] - b[i];
        soma += diff*diff; 
    }
    return soma/tam; 
}

float MAE(float *a, float *b, int tam){
    float soma = 0;
    for (int i = 0; i < tam; i++){
        soma += fabs(a[i] - b[i]);
    }
    return soma/tam;
}

float calculaerro(float *a, float *b, int tam, float (*funcErro)(float *, float *, int)){
    return funcErro(a, b, tam);
}

int main (){
    
    int tam, op;

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

    printavetor(a, tam, 'A');
    printavetor(b, tam, 'B');

    printf("Escolha a métrica de erro:\n1-Erro Médio Quadrático\n2-Erro Absoluto Médio\n");
    printf("Operação: ");
    scanf("%d", &op);

    float erro;
    if(op == 1){
        erro = calculaerro(a, b, tam, MSE);
        printf("erro médio quadratico: %.2f\n", erro);
    } else if (op == 2){
        erro = calculaerro(a, b, tam, MAE);
        printf("erro absoluto médio: %.2f\n", erro);
    } else{
        printf("operação inválida.\n");
    }

    free(a);
    free(b);

    return 0;
}