#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nomePeca[50];
    int nmrPeca;
    float preco;
    int nmrpedido;
} estoque;

void preencheestoque  (estoque *item){
    puts("Digite o nome do item: ");
    fgets(item -> nomePeca, sizeof(item -> nomePeca), stdin);
    item -> nomePeca[strcspn(item -> nomePeca, "\n")] = '\0';

    printf("Digite o número da peça: \n");
    scanf("%d", &(item -> nmrPeca));

    printf("Digite o preço da peça: \n");
    scanf("%f", &(item -> preco));

    printf("Digite o número do pedido: \n");
    scanf("%d", &(item -> nmrpedido));

    printf("\n");
}

void printaestoque(estoque *item){
    printf("Nome da peça: %s\n", item -> nomePeca);
    printf("Número da peça: %d\n", item -> nmrPeca);
    printf("Preço da peça: %.2f\n", item -> preco);
    printf("Número do pedido: %d\n", item -> nmrpedido);
}

int main(){
    estoque *item = (estoque *)malloc(sizeof(estoque));
    
    preencheestoque(item);

    printaestoque(item);

    free(item);

    return 0;
}