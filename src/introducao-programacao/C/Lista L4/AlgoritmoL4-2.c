// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, num, matriz[100][100];

    // Entrada
    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Saída
    for (i = 0; i < num; i++) { printf("%d\n", matriz[i][i]); }
    
    return 0;
}