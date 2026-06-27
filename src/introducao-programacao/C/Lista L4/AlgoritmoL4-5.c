// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, linhas, colunas, auxiliar = 1, matriz[10][10];

    // Entrada
    scanf("%d %d", &linhas, &colunas);

    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            // Saída
            if(i % 2 == 0)
            {
                if(j % 2 == 0) { printf("1"); }
                else           { printf("0"); }
            }
            else
            {
                if(j % 2 == 0) { printf("0"); }
                else           { printf("1"); }
            }
        }
        printf("\n");
    }
    return 0;
}
