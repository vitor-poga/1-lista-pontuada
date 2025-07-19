#include <stdio.h>

int main() {
    int altura, linha, espacos, numero, coluna;

    printf("Digite a altura do Triângulo de Pascal: ");
    scanf("%d", &altura);

    if (altura < 0) {
        printf("A altura deve ser um valor não negativo.\n");
        return 1;
    }

    for (linha = 0; linha < altura; linha++) {
        for (espacos = 0; espacos < altura - linha; espacos++) {
            printf("  ");
        }

        numero = 1;
        for (coluna = 0; coluna <= linha; coluna++) {
            printf("%4d", numero);
            numero = numero * (linha - coluna) / (coluna + 1);
        }
        printf("\n");
    }

    return 0;
}