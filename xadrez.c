#include <stdio.h>

int main() {
// Simulação da movimentação de peças no tabuleiro de xadrez
// Cada peça usará uma estrutura de repetição diferente

// === Torre ===
// A torre se move em linha reta: horizontal ou vertical.
// Neste caso, vamos simular a torre se movendo 5 casas para a direita usando FOR.
int casasTorre = 5;
printf("Movimento da Torre (5 casas para a Direita):\n");
for (int i = 1; i <= casasTorre; i++) {
printf("Casa %d: Direita\n", i);
}

// === Bispo ===
// O bispo se move nas diagonais.
// Simularemos o bispo se movendo 5 casas para cima e à direita usando WHILE.
int casasBispo = 5;
int contadorBispo = 1;
printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
while (contadorBispo <= casasBispo) {
printf("Casa %d: Cima Direita\n", contadorBispo);
contadorBispo++;
}

// === Rainha ===
// A rainha se move em todas as direções.
// Neste caso, simulará o movimento de 8 casas para a esquerda usando DO-WHILE.
int casasRainha = 8;
int contadorRainha = 1;
printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
do {
printf("Casa %d: Esquerda\n", contadorRainha);
contadorRainha++;
} while (contadorRainha <= casasRainha);

return 0;
}