#include <stdio.h>

int main (){

    int i;
    
    printf("Decimal\t\tBinário\t\tOctal\t\tHexadecimal\n");

    for (i= 1; i <= 256; i++){
        printf("Decimal: %3d\t", i);
        printf("Binário: ");
        for (int bit = 7; bit >= 0; bit--){
            printf("%d", (i >> bit) & 1);
        }
        printf("\tOctal: %o\t", i);
        printf("Hexadecimal: %x\n", i);

    }

    return 0;
}