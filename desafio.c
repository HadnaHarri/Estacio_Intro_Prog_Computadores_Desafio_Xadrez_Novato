#include <stdio.h>

int main() {
    int movimentos;

    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (movimentos = 1; movimentos <= 5; movimentos++) {
        printf("Direita %d\n", movimentos);
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    movimentos = 1;
    while (movimentos <= 5) {
        printf("Cima, Direita %d\n", movimentos);
        movimentos++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    movimentos = 1;
    do {
        printf("Esquerda %d\n", movimentos);
        movimentos++;
    } while (movimentos <= 8);

    return 0;
}
