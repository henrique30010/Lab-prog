#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float n1;
    float n2;
    float media;
} Aluno;

void preencheestruct( Aluno *a, int qnt){
    for(int i = 0; i < qnt; i++){
        printf("Aluno %d\n", i+1);
        printf("Digite a primeira nota: ");
        scanf("%f", &a -> n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &a -> n2);

        a -> media = (a -> n1 + a -> n2)/2;
    }
    
}

void media(Aluno *a, int qnt){
    for(int i = 0; i < qnt; i++){
        printf("\nA média dos aluno %d é: %.2f\n", i+1, a -> media);
    }
}

int main(){  

    int qnt = 3;
    Aluno *a = (Aluno *)malloc(qnt * sizeof(Aluno));

    preencheestruct(a, qnt);

    media (a, qnt);

    free(a);
    return 0;
}