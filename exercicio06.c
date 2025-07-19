#include <stdio.h>

int main() {
    int b, l, a, i, j;

    do {
        printf("Digite o número de asteriscos na base (B, ímpar e maior ou igual a 3): ");
        scanf("%d", &b);
        if (b < 3 || b % 2 == 0) {
            printf("Valor inválido.\n");
        }
    } while (b < 3 || b % 2 == 0);

    do {
        printf("Digite a largura do tronco (L, ímpar e menor ou igual a metade de B): ");
        scanf("%d", &l);
        if (l < 1 || l % 2 == 0 || l > b / 2) {
            printf("Valor inválido.\n");
        }
    } while (l < 1 || l % 2 == 0 || l > b / 2);

    do {
        printf("Digite a altura do tronco (A, maior ou igual a 2 e menor ou igul a metade de B): ");
        scanf("%d", &a);
        if (a < 2 || a > b / 2) {
            printf("Valor inválido.\n");
        }
    } while (a < 2 || a > b / 2);

    printf("\n");

    for (i = 1; i <= b; i += 2) {
        for (j = 0; j < (b - i) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < (b - l) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < l; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}