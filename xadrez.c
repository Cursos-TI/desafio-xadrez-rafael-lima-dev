#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo com loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) { // movimento "vertical"
        for (int j = 0; j < 1; j++) { // movimento "horizontal"
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Função para movimentar o Cavalo com loops complexos
void moverCavalo() {
    const int movimentos_verticais = 2;
    const int movimentos_horizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0, j = 0; i <= movimentos_verticais; i++) {
        if (i < movimentos_verticais) {
            printf("Cima\n");
            continue; // Pula o resto do loop enquanto sobe
        }

        // Executa apenas no último passo
        while (j < movimentos_horizontais) {
            if (j == 0) {
                printf("Direita\n");
            } else {
                break;
            }
            j++;
        }
    }
}

int main() {
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Bispo (recursivo com loops aninhados)
    printf("Movimento do Bispo (%d casas na diagonal cima direita):\n", casas_bispo);
    moverBispo(casas_bispo);
    
    printf("\n");

    // Torre (recursivo)
    printf("Movimento da Torre (%d casas para a direita):\n", casas_torre);
    moverTorre(casas_torre);

    printf("\n");

    // Rainha (recursivo)
    printf("Movimento da Rainha (%d casas para a esquerda):\n", casas_rainha);
    moverRainha(casas_rainha);

    printf("\n");

    // Cavalo (loops complexos)
    moverCavalo();

    return 0;
}
