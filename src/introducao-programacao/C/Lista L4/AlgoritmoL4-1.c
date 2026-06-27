// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j;
    double determinante, matriz[2][2];

    // Entrada
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    // Saída
    printf("%.2lf\n", determinante);
    return 0;
}