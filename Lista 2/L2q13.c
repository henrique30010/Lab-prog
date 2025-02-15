#include <stdio.h>

int main (){

   int a, b, i=0, som=0;
   
    printf("Digite, respectivamente, 2 números A e B para obter o somatório de todos os números pares entre eles\n");
    scanf("%d", &a);
    scanf("%d", &b);

   if (a > b){
       for (i = b; i <= a; i++){
            if (i % 2 == 0) {
              som += i;
            } else{
                continue;
            }
    
        }
    } else if (b > a){
        for (i = a; i <= b; i++){
            if (i % 2 == 0){
                som += i;
            } else{
                continue;
            }
        }
    }
    
    printf("O resultado do somatório é: %d", som);

    return 0;
}