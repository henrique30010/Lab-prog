#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
}professor;

typedef struct {
    char nomedisciplina[50];
    professor prof;
}disciplina;

void preencheprofessor(professor *prof){
    puts("Digite o nome do(a) professor(a): ");
    fgets(prof -> nome, sizeof(prof -> nome), stdin);
    prof -> nome[strcspn(prof -> nome, "\n")] = '\0';

    printf("Digite a idade do(a) professor(a): \n");
    scanf("%d", &(prof -> idade));
    while (getchar() != '\n');
}

void preenchedisciplina( disciplina *d){
    puts("Digite o nome da disciplina do(a) professor(a): ");
    fgets(d -> nomedisciplina, sizeof(d -> nomedisciplina), stdin);
    d -> nomedisciplina[strcspn(d -> nomedisciplina, "\n")] = '\0';

    printf("Dados do professor: \n");
    preencheprofessor(&(d -> prof));
}
    
void exibir(disciplina *d){
    printf("Disciplina: %s\n", d -> nomedisciplina);
    printf("Nome do(a) professor(a): %s\n", d -> prof.nome);
    printf("Idade do(a) professor(a): %d\n", d -> prof.idade);
}

int main(){
    disciplina d;

    preenchedisciplina(&d);

    exibir(&d);

    return 0;
}