#include <stdio.h>

int main(){

    int h, m, s, ts;

    printf("digite o número de horas, minutos e segundos,respectivamente, para obter o total de segundos\n");
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);

    ts= (h*3600)+(m*60)+(s);

    printf("O tempo total em segundos é: %d", ts);

    return 0;
}