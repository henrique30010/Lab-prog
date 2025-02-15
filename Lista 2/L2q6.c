#include <stdio.h>

int main(){

    int votos, p=0, r=0, b=0, n=0, total=0;
    
    
    while(1){
        printf("Votação para presidente\n");
        printf("Digite 0 para votar branco\n");
        printf("Digite 5 para votar em Paulo\n");
        printf("Digite 7 para votar em Renata\n");
        printf("Digite um número negativo para encerrar a contagem\n");

        scanf("%d", &votos);

        if (votos < 0){
            printf("\nVotação encerrada\n");
            break;
        }
        
        switch (votos){
            case 0:
                b += 1;
                break;
            case 5:
                p += 1;
                break;
            case 7:
                r += 1;
                break;
            default:
                n += 1;
                break;
        }
        
        total +=1;
        
    }

    printf("!!Resultados!!\n");
    printf("Porcentagem de votos dos candidatos %%\n");
    printf("Paulo\t\tRenata\n");
    printf("%.2f%%\t\t%.2f%%\n", ((float)p / total) * 100, ((float)r / total) * 100);
    printf("%d votos foram em branco\n", b);
    printf("%d votos foram nulos\n", n);

    if( p > r){
        printf("Paulo superou Renata e foi eleito!");
    } else if (r > p){
        printf("Renata superou Paulo e foi eleita!");
    } else{
        printf("Os candidatos empataram");
    }

    return 0;
}