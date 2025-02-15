#include <stdio.h>

int main (){

    int num, x, digito=0, cont=0;

    printf("Digite um número inteiro para verificar quantos algarismos '7' ele tem\n");
    scanf("%d", &num);

    x = num;

    while (num > 0){
        digito = num % 10;
        num /= 10;

        if (digito == 7){
            cont += 1;
        } else{
            continue;
        }
    }

    printf("%d contém %d algarismos '7'.", x, cont);

    return 0;
}