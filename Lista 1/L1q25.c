#include <stdio.h>
#include <math.h>

int main (){
    
    float x1, x2, y1, y2,d;
    
    printf("Digite o ponto x da primeira coordenada\n");
    scanf("%f", &x1);
    printf("Digite o ponto y da primeira coordenada\n");
    scanf("%f", &y1);

    printf("Digite o ponto x da segunda coordenada\n");
    scanf("%f", &x2);
    printf("Digite o ponto y da segunda coordenada\n");
    scanf("%f", &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos das duas coordenadas é: %.2f\n", d);

    return 0;
}