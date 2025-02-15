#include <stdio.h>

int main (){

   int a, b, i=0, qnt=0;
   
    printf("Digite, respectivamente, 2 números A e B para obter a quantidade de números divisíveis por 3 entre eles\n");
    scanf("%d", &a);
    scanf("%d", &b);

   if (a > b){
       for (i = b; i <= a; i++){
            if (i % 3 == 0) {
              qnt += 1;
            } else{
                continue;
            }
    
        }
    } else if (b > a){
        for (i = a; i <= b; i++){
            if (i % 3 == 0){
                qnt += 1;
            } else{
                continue;
            }
        }
    }
    
    printf("O resultado do somatório é: %d", qnt);

    return 0;
}