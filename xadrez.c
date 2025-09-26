#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    const int bispo_movimentos = 5;
    const int torre_movimentos = 5;
    const int rainha_movimentos = 8;

    // Implementação de Movimentação do Bispo usando for
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= bispo_movimentos; i++) {
        printf("Bispo se move para cima e para direita (Movimento: %d)\n", i);
    }

    // Implementação de Movimentação da Torre usando while
    printf("\nMovimentação da Torre:\n");
    int j = 1;
    while (j <= torre_movimentos) {
        printf("Torre se move para a direita (Movimento: %d)\n", j);
        j++;
    }

    // Implementação de Movimentação da Rainha usando do-while
    printf("\nMovimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Rainha se move para a esquerda (Movimento: %d)\n", k);
        k++;
    } while (k <= rainha_movimentos);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
