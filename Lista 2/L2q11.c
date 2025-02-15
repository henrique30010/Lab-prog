#include <stdio.h>

int main (){

    int a, b, i=0;

    printf("Digite 2 valores A e B:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Os quadrados dos múltiplos de 4 entre %d e %d são:\n", a, b);


    if(a > b){
       for (i = b; i < a; i++){
            if (i % 4 == 0){
                printf("%d, ", i*i);
            } else{
                continue;
            }
        }
    } else if (b > a){
        for (i = a ; i < b; i++){
            if (i % 4 == 0){
                printf("%d ", i*i);
            } else{
                continue;
            }
        }
    }

    
    

    return 0;
}