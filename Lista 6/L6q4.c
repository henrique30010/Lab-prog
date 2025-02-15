#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchevetor(int *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand() % 100;
    }
}

void minmax(int *vetor, int tam, int *min, int *max){
    *min = *max = vetor[0];
    for(int i = 1; i < tam; i++){
        if(vetor[i] < *min){
            *min = vetor[i];
        } 
        if (vetor[i] > *max){
            *max = vetor[i];
        }
    }
}

void normalizar(int *vetor, float *vetornormalizado, int tam, int min, int max){
    if (min == max){
        for (int i = 0; i < tam; i++){
            vetornormalizado[i] = 0.0;
        } 
    } else{
        for (int i = 0; i < tam; i++){
            vetornormalizado[i] = (float) (vetor[i] - min) / (max - min);
        }
    }
}

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("execução: %s <tamanhovetor>\n",argv[0]);
        return 1;
    }

    int tam = atoi(argv[1]);

    int *vetor = (int *)malloc(tam * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar na memória");
        return 1;
    }
    
    float *vetornormalizado = (float *)malloc(tam * sizeof(float));
    if(vetornormalizado == NULL){
        printf("Erro ao alocar na memória");
        return 1;
    }

    srand(time(NULL));
    preenchevetor(vetor, tam);
    printf("Vetor: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", *(vetor + i));
    }

    printf("\n");

    int min, max;

    minmax(vetor, tam, &min, &max);
    normalizar(vetor, vetornormalizado, tam, min, max);

    printf("Vetor normalizado: ");
    for (int i = 0; i < tam; i++) {
        printf("%.2f ", vetornormalizado[i]);
    }
    printf("\n");

    free(vetor);
    free(vetornormalizado);

    return 0;
}