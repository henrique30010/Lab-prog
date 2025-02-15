#include <stdio.h>


int main (){

    unsigned char x, y;

    printf("Digite um valor x (0 até 255)\n");
    scanf("%hhu", &x);
    printf("Digite um valor y maior ou igual a 5\n");
    scanf("%hhu", &y);

    if (y < 5){
        printf("Digite um númeor maior ou igual 5\n");
        return 1;
    }

    unsigned char bits[8];
    for (int i = 0; i < 8; i++){
        bits[i] = (x >> i) & 1;
    }

    unsigned char memoria[256];
    for (int i = 0; i < 256; i++){
        memoria[i] = i;
    }

    for ( int i = 0; i < 4; i++){
        memoria [y - (i+1)] = (memoria[ y - (i+1)] & 0xFE) | bits[i];
        memoria [y + (i+1)] = (memoria[ y + (i+1)] & 0xFE) | bits[i+4];
    }

    printf("Valores antes e depois de y após a mudança:\n");
    for(int i = -4; i <= 4; i++){
        if (i != 0){
            printf("memoria[%d] = %u\n", y + i, memoria[y+i]);
        }
    }


    return 0;
}