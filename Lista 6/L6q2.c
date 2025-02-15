#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void preenchervetor (int *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand() % 100;
    }
}

void menor(int *vetor, int tam, int **menorptr, int *menorvalor){
    *menorptr = vetor;
    *menorvalor = *vetor;

    for (int i = 1; i < tam; i++){
        if(*(vetor + i) < *menorvalor){
            *menorptr = vetor + i;
            *menorvalor = *(vetor + i);
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

    int *menorptr;
    int menorvalor;
    menor(vetor, tam, &menorptr, &menorvalor);
    printf("menor valor: %d\n", menorvalor);
    printf("endereço de %d: %p\n", menorvalor, (void *)menorptr);

    free(vetor); 
    
    return 0;

}