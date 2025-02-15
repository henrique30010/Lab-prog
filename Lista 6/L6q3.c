#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void preenchervetor (int *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand() % 100;
    }
}

void menoremaiorend(int *vetor, int tam, int **maioremenor){
    maioremenor[0] = vetor; // menor
    maioremenor[1] = vetor; // maior

    for (int i = 1; i < tam; i++){
        if (*(vetor + i) < *(maioremenor[0])){
            maioremenor[0] = vetor + i;
        }
        if (*(vetor + i) > *(maioremenor[1])){
            maioremenor[1] = vetor + i;
        }
    }
}

int main (int argc, char *argv[]){
    
    if (argc != 2){
        printf("execução: %s <tamanhovetor>\n", argv[0]);
        return 1;
    }

    int tam = atoi(argv[1]);
  
    int *vetor = (int *)malloc(tam * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar na memória\n");
        return 1;
    }

    srand(time(NULL));
    preenchervetor(vetor, tam);
    printf("Vetor: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", *(vetor + i));
    }

    printf("\n");

    int *maioremenor[2];
    menoremaiorend(vetor, tam, maioremenor);
    printf("Menor valor: %d\n", *(maioremenor[0]));
    printf("Maior valor: %d\n", *(maioremenor[1]));
    printf("endereço de %d: %p\n",*(maioremenor[0]), (void *) maioremenor[0]);
    printf("endereço de %d: %p\n",*(maioremenor[1]), (void *) maioremenor[1]);

    free(vetor); 
    
    return 0;

}