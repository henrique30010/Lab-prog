#include <stdio.h>


int main (){

   int i=0, som3=0, som5=0;
   
    for (i = 0; i <= 200; i++){
        if (i >= 0 && i < 100 && i % 3 == 0) {
            som3 += i;
        } else if (i > 100 && i <= 200 && i % 5 == 0){
            som5 += i;
        }
    }

    printf("Soma dos números divisíveis por 3 de 0 até 100: %d\n", som3);
    printf("Soma dos números divisíveis por 5 de 100 até 200: %d\n", som5);
    return 0;
}