// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j;
    double matriz[2][2], a2[2][2];

    // Entrada
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) { scanf("%lf", &matriz[i][j]); }
    }

    // Saída
    a2[0][0] = (matriz[0][0] * matriz[0][0]) + (matriz[0][1] * matriz[1][0]);
    a2[0][1] = (matriz[0][0] * matriz[0][1]) + (matriz[0][1] * matriz[1][1]);
    a2[1][0] = (matriz[1][0] * matriz[0][0]) + (matriz[1][1] * matriz[1][1]);
    a2[1][1] = (matriz[1][0] * matriz[0][1]) + (matriz[1][1] * matriz[1][1]);

    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) { printf("%.3lf ", a2[i][j]); }
        printf("\n");
    }
    return 0;
}
