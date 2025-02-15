#include <stdio.h>

int main (){

    float ent, pre, pro;

    printf("Digite o valor da mercadoria:\n");
    scanf("%f", &pro);

    ent = pro / 3;
    pre = ent;
    ent = (int) ent;
    
    if (pro - (ent + 2 * pre)> 0){
        ent++;
    }

    printf("Valor da entrada: %.2f\n", ent);
    printf("Valor das prestações: %.2f\n", pre);


    return 0;
}