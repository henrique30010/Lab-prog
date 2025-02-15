#include <stdio.h>

int main (){

    int ti=0,ta=1, tn;
    

    printf("Os vinte primeiros termos de fibonacci:");

    
    for (int i = 1; i < 21; i++){
        printf("%d ", ta);
        tn = ti + ta;
        ti= ta;
        ta = tn;
    }

    return 0;
}