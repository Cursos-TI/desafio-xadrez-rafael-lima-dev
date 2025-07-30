#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
     const int casas_torre = 5;
     const int casas_bispo = 5;
     const int casas_rainha = 8;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimento do bispo(%d Casas da diagonal cima direita:\n)", casas_bispo);
    int B = 0;
    while(B < casas_bispo){
        printf("Cima Direita\n");
        B++;
    }

     printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre (%d casas para a direita):\n", casas_torre);
    for (int T = 0; T < casas_torre; T++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha (%d casas para a esquerda):\n", casas_rainha);
    int R = 0;
    do {
        printf("Esquerda\n");
        R++;
    } while (R < casas_rainha);


    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    const int movimentos_verticais = 2;
    const int movimentos_horizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos_verticais; i++) {
        printf("Baixo\n");

        int j = 0;
        while (j < movimentos_horizontais && i == movimentos_verticais - 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
