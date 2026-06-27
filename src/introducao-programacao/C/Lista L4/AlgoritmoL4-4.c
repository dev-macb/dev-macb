// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, linhas, colunas, auxiliar = 1, matriz[10][10];

    // Entradas
    while(auxiliar)
    {
        scanf("%d", &linhas);
        if(linhas >= 1 && linhas <= 10)
        {
            while(auxiliar)
            {
                scanf("%d", &colunas);
                if(colunas >= 1 && colunas <= 10)
                {
                    for(i = 0; i < linhas; i++)
                    {
                        for (j = 0; j < colunas; j++)
                        {
                            scanf("%d", &matriz[i][j]);
                        }
                    }
                    auxiliar = 0;
                }
            }
        }
    }

    // Saídas
    for(i = 0; i < linhas; i++)
    {
        printf("linha %d:  ", i+1);
        for (j = 0; j < colunas; j++)
        {
            if(j == colunas-1) { printf("%d", matriz[i][j]); }
            else               { printf("%d,", matriz[i][j]); }
        }
        printf("\n");
    }
    return 0;
}

