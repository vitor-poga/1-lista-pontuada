#include <stdio.h>

int main(){

    int altura, escolhaTriangulo;

    printf("Digite aqui a altura do triangulo: "); 
    scanf ("%d", &altura);

    printf("Voce quer um triangulo preenchido ou vazado ? \n 1 - PREENCHIDO\n 2 - VAZADO\nDigite aqui: ");
    scanf("%d", &escolhaTriangulo);

    if (escolhaTriangulo == 1)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int z = 0; z <= i; z++)
            {
                printf("*");
            }
            printf("\n");
        }
    
    } else if (escolhaTriangulo == 2)
    {
       for (int i = 0; i < altura; i++)
       {
            for (int z = 0; z <= i; z++)
            {
                if (z == 0 || z == i || i == altura - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
       }
        
    } else {
        printf ("Escolha uma opcao valida\n");
    }

    return 0;
}