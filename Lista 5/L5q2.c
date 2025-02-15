#include <stdio.h>

int main (){

    int x, y, temp, *ptrx, *ptry;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Digite outro número inteiro: ");
    scanf("%d", &y);

    ptrx = &x;
    ptry = &y;

    printf("Valores antes da troca: x=%d e y=%d\n", *ptrx, *ptry);
    
    temp = *ptrx;
    *ptrx = *ptry;
    *ptry = temp;
    
    printf("Valores após a troca: x=%d e y=%d\n", *ptrx,*ptry);

    return 0;
}