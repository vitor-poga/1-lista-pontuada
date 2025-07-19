#include <stdio.h>

int main() {
    int largura, i, j;

    do {
        printf("Digite a largura central do losango (deve ser um número ímpar): ");
        scanf("%d", &largura);
        if (largura % 2 == 0) {
            printf("Valor inválido. A largura precisa ser ímpar.\n");
        }
    } while (largura % 2 == 0);

    for (i = 1; i <= largura; i += 2) {
        for (j = 0; j < (largura - i) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }

    for (i = largura - 2; i >= 1; i -= 2) {
        for (j = 0; j < (largura - i) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}