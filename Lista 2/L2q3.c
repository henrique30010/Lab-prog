#include <stdio.h>

int main(){
    int x;
    int fatorial=1;
    printf("Digite um número para obter seu fatorial\n");
    scanf("%d", &x);

    printf("O fatorial de %d:", x);

    for (int i = x; i >=1 ; i--){
        fatorial*=i;
    }

    printf(" %d", fatorial);


    return 0;
}
