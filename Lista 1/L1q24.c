#include <stdio.h>

int main() {
    
    int s, hrs, min, s2;

    printf("Digite o tempo total em segundos para obtê-lo em horas minutos e segundos\n");
    scanf("%d", &s);

    hrs = s / 3600;
    s2 = s % 3600;
    min = s2 / 60;
    s2 %= 60;

    printf("O tempo é: %d horas, %d minutos e %d segundos.\n", hrs, min, s2);

    return 0;
}