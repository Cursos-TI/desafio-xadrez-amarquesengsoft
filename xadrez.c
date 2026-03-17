#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Código de recursividade para movimentação da torre:
void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas -1);
    }
}

//Código de recursividade para movimentação do bispo
void moverBispo(int casasBispo){
    if(casasBispo > 0){
        printf("Direita\n");
        printf("Cima\n");
        moverBispo(casasBispo - 1);
    }
}

//Código de recursividade para movimentação da rainha
void moverRainha(int casasRainha){
    if(casasRainha > 0){
        printf("Esquerda\n");
        moverRainha(casasRainha - 1);
    }
}

int main() {
    // Nível Mestre - Movimentação das Peças
    // Implementação de Movimentação do Bispo
    // Utilização de estrutura de repetição com loop aninhado "for" para simular a movimentação do Bispo em diagonal.

        printf("Movimento do Bispo com Loop aninhado:\n");

        int casasBispo2 = 5;
        for (int cima = 1; cima <= casasBispo2; cima++)
        {
            for ( int direita = 1; direita <= 1; direita++){
                printf("Direita\n");
            }
            printf("Cima\n");    
        }
        

    // Implementação de recursividade para simulação do movimento do Bispo em diagonal:

        printf("Movimentação do Bispo com Recursividade:\n");

        moverBispo(5);
        
    // Implementação de Movimentação da Torre
    // Implementação de recursividade para simulação do movimento da Torre para a direita.

        printf("Movimento da Torre com recursividade:\n");

        moverTorre(5);

    // Implementação de Movimentação da Rainha
    // Implementação de recursividade para simulação do movimento da Rainha para a esquerda.

        printf("Movimento da Rainha com recursividade:\n");

        moverRainha(8);

    // Implementação de Movimentação do Cavalo
    // Utilização de estrutura de repetição complexa "for" para simular a movimentação do Cavalo, 
    //sendo duas casas para cima e uma casa para direita .

    printf("Movimento do Cavalo com Loop aninhado:\n");

        for (int cima = 1, direita = 1; cima <= 2 && direita <= 1; cima++) {

        printf("Cima\n");

        if (cima == 2) {
            printf("Direita\n");
            direita++;
        }
    }

    return 0;
}
