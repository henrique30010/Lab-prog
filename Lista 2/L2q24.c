#include <stdio.h>

int main (){

    int c1, c2, h;

    printf("Todas as triplas de pitágoras até 500:\n");

        for (c1 = 1; c1 <= 500; c1++){
            for (c2 = c1 ; c2 <= 500; c2++){
                for (h = c2; h <= 500; h++){
                    if (c1*c1 + c2*c2 == h*h){
                        printf("(%d, %d, %d)\n", c1, c2, h);
                    }
                }
            }
        }



    return 0;
}