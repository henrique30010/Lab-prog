#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5  // Altura da imagem
#define M 5  // Largura da imagem

// Gera uma matriz NxM com valores aleatórios entre 0 e 255
void geraimag(unsigned char imagem[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            imagem[i][j] = rand() % 256;
        }
    }
}

void exibirimag(unsigned char imagem[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%3d ", imagem[i][j]);
        }
        printf("\n");
    }
}


void LBP(unsigned char imagem[N][M], unsigned char lbp[N][M]) {
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            unsigned char central = imagem[i][j];
            unsigned char lbpValor = 0;

            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                unsigned char vizinho = (ni >= 0 && ni < N && nj >= 0 && nj < M) ? imagem[ni][nj] : 0;
                lbpValor |= (vizinho >= central) << (7 - k);
            }
            lbp[i][j] = lbpValor;
        }
    }
}

void calculahist(unsigned char lbp[N][M], int histograma[256]) {
    for (int i = 0; i < 256; i++)
        histograma[i] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            histograma[lbp[i][j]]++;
        }
    }
}


void exibirhist(int histograma[256]) {
    printf("\nHistograma LBP:\n");
    for (int i = 0; i < 256; i++) {
        if (histograma[i] > 0) {
            printf("Valor %d: %d vezes\n", i, histograma[i]);
        }
    }
}

int main() {
    srand(time(NULL));

    unsigned char imagem[N][M];
    unsigned char lbp[N][M];
    int histograma[256];

    geraimag(imagem);

    printf("Imagem de Entrada:\n");
    exibirimag(imagem);

    LBP(imagem, lbp);

    printf("\nImagem LBP:\n");
    exibirimag(lbp);

    calculahist(lbp, histograma);
    exibirhist(histograma);

    return 0;
}