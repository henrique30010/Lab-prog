#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchevetor (float *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand () % 100;
    }
}

float somaelemento (float *vetor, int tam){
    float soma = 0;
    for (int i = 0; i < tam; i++){
        soma += *(vetor + i);
    }
    return soma;
}

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("execução: %s <tamanhovetor>\n", argv[0]);
        return 1;
    }    
    
    int tam = atoi(argv[1]);

    float *vetor = (float *)malloc(tam * sizeof(float));
    if(vetor == NULL){
        printf("Erro ao alocar na memória.\n");
        return 1;
    }

    srand(time(NULL));
    preenchevetor(vetor, tam);
    printf("Vetor: ");
    for (int i = 0; i < tam; i++){
        printf("%.2f ", *(vetor + i));
    }

    printf("\n");

    float soma = somaelemento(vetor, tam);
    printf("Soma dos elementos: %.2f\n", soma);

    free(vetor); 
    
    return 0;

}