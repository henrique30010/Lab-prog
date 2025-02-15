#include <stdio.h>
#include <math.h>

int main (){

    int x=3;
    

    printf("potências do valor de base 3, elevadas de 0 a 7.\n");

    printf("expoente 0: %d\n", (int) pow(x, 0));
    printf("expoente 1: %d\n", (int) pow(x, 1));
    printf("expoente 2: %d\n", (int) pow(x, 2));
    printf("expoente 3: %d\n", (int) pow(x, 3));
    printf("expoente 4: %d\n", (int) pow(x, 4));
    printf("expoente 5: %d\n", (int) pow(x, 5));
    printf("expoente 6: %d\n", (int) pow(x, 6));
    printf("expoente 7: %d\n", (int) pow(x, 7));

    return 0;
}