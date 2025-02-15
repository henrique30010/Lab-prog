#include <stdio.h>

int main (){

    int a, b, cont=0, som=0;
    
    printf("Digite 2 números A e B para obter a média aritmética do números existentes entre eles\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b){
        for (int i = b; i <= a; i++){
            som += i;
            cont += 1;
        }
    } else if (b > a){
        for (int i = a; i <= b; i++){
            som += i;
            cont += 1;
        }
    }

    printf("A média aritmética dos números entre %d e %d é: %d", a, b, som/cont);

    return 0;
}