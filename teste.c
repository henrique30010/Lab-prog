#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h> // gera o diretório

void resultsfolder(){
    struct stat st = {0}; // armazena info do diretório
    if (stat("results", &st) == -1) { 
        mkdir("results", 0700); // cria a pasta com leitura, escrita, e execução permitidas
    }
}

void namefile(char *buffer , const char *name, int k){
    sprintf(buffer, "results/%s_k%d.pgm", name, k);
}

void kmeans(const char *imageEn, int k){
    char exitname[100]; //armazena o nome do arquivo de saída
    namefile(exitname, "imagem", k); // gera o nome do arquivo de saída

    //simulação
    printf("Executando k-means com k = %d\n", k);

    FILE *fp = fopen(exitname, "w"); //criando e salvando a imagem segmentada
    if (fp){
        fprintf(fp, "P2\n# Imagem segmentada com k=%d\n10 10\n255\n", k);
        for (int i = 0; i < 100; i++) fprintf(fp, "%d ", (i % k) * (255/k)); //simulação de pixels
        fclose(fp);
        printf("Imagem segmentada salva em %s\n", exitname);
    } else {
        printf("Erro ao salvar imagem segmentada\n");
    }
}

int main (){
    resultsfolder();

    int k[] = {2, 3, 5, 10, 20}; //valores para testar
    int n = sizeof(k) / sizeof(k[0]); //tamanho do vetor

    for (int i = 0; i < n; i++){
        kmeans("imagem.pgm", k[i]); //executa o k-means para cada valor de k
    }

    printf("Fim dos testes!\n");
    return 0;
}