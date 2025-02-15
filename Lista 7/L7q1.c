#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float n1;
    float n2;
    float media;
} Aluno;

void preencheestruct( Aluno *a){
    printf("Digite a primeira nota: ");
    scanf("%f", &a -> n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &a -> n2);

    a -> media = (a -> n1 + a -> n2)/2;
}

int main(){  

    Aluno a1;
    preencheestruct(&a1);

    printf("\nNota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\n", a1.n1, a1.n2, a1.media);

    return 0;
}