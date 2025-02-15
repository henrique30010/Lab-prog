#include <stdio.h>
#define TAM 15

int main (){

    float v[TAM], maior, menor;
    int cont=0;
    printf("Digite 15 valores para obter a soma do maior e do menor elemento\n");
        
    for(int i = 0; i < TAM; i++){
        scanf("%f", &v[i]);
    }

    for (int i = 0; i < TAM; i++){
        cont +=1;
        if (cont == 1){
            maior = v[i];   
            menor = v[i];
        } else{
            if (v[i] > maior){
                maior = v[i];
            } if (v[i] < menor){
                menor = v[i];
            }
        }
    }

    printf("A soma do maior e do menor elemento do vetor é: %f\n", maior + menor);

    return 0;
}