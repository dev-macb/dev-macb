//  Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, entrada, vetor[10000], maior, indice;

    do
    {
        // Entrada
        scanf("%d", &entrada);
        if(entrada > 0 || entrada < 1000)
        {
            for(i = 0; i < entrada; i++)
            {
                scanf("%d", &vetor[i]);
            }
            maior = vetor[0];
            indice = 0;
            for(i = 1; i < entrada; i++)
            {
                if(maior < vetor[i])
                {
                    maior = vetor[i];
                    indice = i;
                }
            }
            if(entrada != 0)
            {
                // Saída
                printf("%d %d\n", indice, maior);
            }
            
        }
    } while(entrada != 0);

    return 0;
}
