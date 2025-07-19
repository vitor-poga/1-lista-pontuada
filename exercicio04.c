#include <stdio.h>

int main (){
    
    int altura, espaco, escolhaQuadrado;

    printf("Digite aqui a altura do quadrado: "); 
    scanf ("%d", &altura);

    printf("Voce quer um quadrado preenchido ou vazado ? \n 1 - PREENCHIDO\n 2 - VAZADO\nDigite aqui: ");
    scanf("%d", &escolhaQuadrado);

    espaco = altura - 2;

    if (escolhaQuadrado == 1)
    {
        
        for (int i = 0; i < altura; i++)
        {
            for (int z = 0; z < altura; z++)
            {
                printf ("*");
            }

            printf("\n");            

        }

    } else if (escolhaQuadrado == 2)
    {
        for (int z = 0; z < altura; z++)
            {
                printf("*");
            }
        
        printf("\n");
        
        for (int i = 2; i < altura ; i++)
        {
            
                printf("*");
                for (int w = 0; w < espaco; w++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                
                
        }
         for (int z = 0; z < altura; z++)
            {
                printf("*");
            }
        


    } else {
        printf("Escolha uma opção válida");
    }
    
    

    return 0;
}