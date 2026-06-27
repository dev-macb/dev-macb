// Declarção de Bibliotecas
#include <stdio.h>
#include <string.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, inicio, final, quantidade;
    char saida[24442];

    scanf("%d", &quantidade);
    for(j = 0; j < quantidade; j++)
    {
        for(i = 0; i < strlen(saida); i++)
        {
            saida[i] = 0;
        }
        scanf("%d %d", &inicio, &final);
        
        if(inicio < final)
        {
            for (i = inicio; i <= final; i++)
            {
                sprintf(saida, "%s%d", saida, i);
            }
            for (i = final; i >= inicio; i--)
            {
                sprintf(saida, "%s%d", saida, i);
            }
            printf("%s\n", saida);
        }
    }
    return 0;
}
