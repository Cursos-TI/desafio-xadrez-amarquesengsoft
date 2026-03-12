#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração das variáveis constantes para representar o número de casas que cada peça pode se mover.

        int torre = 5, bispo = 5, rainha = 8;
        int i;

    // Implementação de Movimentação do Bispo
    // Utilização de estrutura de repetição "while" para simular a movimentação do Bispo em diagonal.

        printf("Movimento do Bispo:\n");

        i = 1;
        while (i <= bispo)
        {
            printf("Cimma/Direita\n");
            i++;
        }
        
    // Implementação de Movimentação da Torre
    // Utilização de estrutura de repetição "for" para simular a movimentação da Torre para a direita.

        printf("Movimento da Torre:\n");

        for (i = 1; i <= torre; i++)
        {
            printf("Direita\n");
        }
        

    // Implementação de Movimentação da Rainha
    // Utilize de estrutura de repetição "do while" para simular a movimentação da Rainha para a esquerda.

        printf("Movimento da Rainha\n");

        i = 1;
        do
        {
            printf("Esquerda\n");
            i++;
        } while (i <= rainha);
        

    //Realização do Desafio Nível Aventureiro
    //Implementação do código para movimentação do Cavalo com loop for

        printf("Movimento do Cavalo Com Loop For\n");


        for(int movimentoCavalo = 1; movimentoCavalo <= 1; movimentoCavalo++)
        {
            for (int movimentoCavalo2 = 1; movimentoCavalo2 <= 2; movimentoCavalo2++)
            {
                printf("Cima com For\n");
            }
            printf("Lado com For\n");
        }

    //Implementação do código para movimentação do cavalo como loop while

        
        printf("Movimento do Cavalo Com Loop While\n");

        int movimentoCavaloWhile = 1;
        int movimentoCavaloWhile2 = 1;

        while (movimentoCavaloWhile <= 1)
        {
            while (movimentoCavaloWhile2 <= 2)
            {
                printf("Cima com While\n");
                movimentoCavaloWhile2++;
            }
                printf("Lado com While\n");
                movimentoCavaloWhile++;
        }
        
        

    return 0;
}
