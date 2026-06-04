#include <stdio.h>

// Torre
void torre(int casas) {

    if (casas <= 0) {
        return;
    }

    printf("Direita\n");
    torre(casas - 1);
}

// Rainha
void rainha(int casas) {

    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");
    rainha(casas - 1);
}

// Bispo
void bispo(int casas) {

    if (casas <= 0) {
        return;
    }

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    bispo(casas - 1);
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    torre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    bispo(casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    rainha(casasRainha);

    printf("\n");

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= 2; i++) {

        for (int j = 1; j <= 1; j++) {

            if (i == 1) {
                printf("Cima\n");
                continue;
            }

            printf("Direita\n");
        }
    }

    return 0;
}