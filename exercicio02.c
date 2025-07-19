#include <stdio.h>

int main() {
    int n, linha, numero, espacos;

    do {
        printf("Digite o valor de N (maior ou igual a 2): ");
        scanf("%d", &n);
        if (n < 2) {
            printf("Valor inválido. Tente novamente.\n");
        }
    } while (n < 2);

    for (linha = 1; linha <= n; linha++) {
        for (espacos = 1; espacos <= n - linha; espacos++) {
            printf("    ");
        }

        for (numero = 1; numero <= linha; numero++) {
            printf("%4d", numero);
        }

        for (numero = linha - 1; numero >= 1; numero--) {
            printf("%4d", numero);
        }

        printf("\n");
    }

    return 0;
}