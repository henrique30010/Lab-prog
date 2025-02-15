#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int op, i, x, armario, escolhido;
    unsigned char ctrl = 0;
    
    srand(time(NULL));

    while (1){
        puts("\nDisponibilidade dos armários: ");
        for(i=0; i<8; i++){
            printf("armário %d: %s\n", i+1, (ctrl &(1<<i)) ? "ocupado" : "livre");       
        }
        puts("\nESCOLHA UMA DAS OPÇÕES DO MENU: ");
        puts("1-OCUPAR ARMÁRIO");
        puts("2-LIBERAR ARMÁRIO");
        puts("3-SAIR");
        scanf("%d", &op);
        if (op ==1){
            int armarioslivres[8], alivrescont=0;
            for(x=0; x < 8; x++){
                if(!(ctrl &(1<<x))){
                    armarioslivres[alivrescont++]=x;
                }
            }

            if (alivrescont==0) {
                puts("Todos os armários estão ocupados");
            } else {
                escolhido = armarioslivres[rand() % alivrescont];
                ctrl|= (1<<escolhido);
                printf("O armário %d foi ocupado\n", escolhido +1);
            }
        } else if (op==2){
            printf("Digite um um número de 1-8 para liberar o armário desejado: ");
            scanf("%d", &armario);
            
            if (armario<1||armario>8){
                puts("Número de armário inválido");
            } else if (!(ctrl &(1<<(armario-1)))){
                printf("Armário %d já está livre\n", armario);
            } else{
                ctrl&= ~(1<<(armario-1));
                printf("Armário %d foi liberado\n", armario);
            }
        }else if (op==3) {
            printf("Saindo do programa.\n");
            break;
        } else {
                printf("Opção inválida\n");
        }
    }
    return 0;
}