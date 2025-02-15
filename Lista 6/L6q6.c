#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchevetor(int *vetor, int tam){
    for (int i = 0; i < tam; i++){
        *(vetor + i) = rand () % 100;
    }
}

float media(int *vetor, int tam){
    float soma = 0;
    int cont = 0;
    for(int i = 0; i < tam; i++){
        soma+= *(vetor + i);
        cont++;
    }
    float media = soma/cont;
    return media;
}

int comparar(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

float mediana(int *vetor, int tam){
    
    qsort(vetor, tam, sizeof(int), comparar);   

    if(tam % 2 != 0){
        return vetor[tam/2];
    }else{
        return (((vetor[tam/2]) - 1) + (vetor[tam/2]))/ 2;
    }
}

int moda(int *vetor, int tam){
    int moda = 0, maxfreq= 0;

    for(int i = 0; i < tam; i++){
        int cont = 0;
        for(int j = 0; j < tam; j++){
            if(vetor[i]==vetor[j]){
                cont++;
            }
        }
        if(cont>maxfreq){
            maxfreq = cont;
            moda = vetor[i];
        }
    }

    if(maxfreq == 1){
        return -1;
    }

    return moda;
}

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("execução: %s <tamanhovetor>\n", argv[0]);
        return 1;
    }

    int tam = atoi(argv[1]);

    int *vetor = (int *)malloc(tam * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar na memória.\n");
        return 1;
    }

    srand(time(NULL));
    preenchevetor(vetor, tam);
    printf("Vetor: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", *(vetor + i));
    }

    printf("\n");

    float mediaa = media(vetor, tam);
    float medianaa = mediana(vetor, tam);
    int modaa= moda (vetor, tam);

    printf("Media aritmetica do vetor: %.2f\n", mediaa);
    printf("Mediana do vetor: %.2f\n", medianaa);
    printf("Moda do vetor: %d\n", modaa); 
    
    free(vetor);
    return 0;
}