// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int matriz[100][100];
    int i, j, k, borda, tam_linha, tam_coluna;
    
    // Entrada
    scanf("%d %d %d %d", &tam_linha, &tam_coluna , &k, &borda);

    // Atribuir Valores na Matriz
    for(i = 0; i < tam_linha; i++)
    {
        for(j = 0; j < tam_coluna; j++)
        {
            matriz[i][j] = 0;
            if(i < k) { matriz[i][j] = borda; }
            if(j < k) { matriz[i][j] = borda; }
            if(i > tam_linha - k - 1) { matriz[i][j] = borda; }
            if(j > tam_coluna - k - 1){ matriz[i][j] = borda; }
        }
    }

    // Imprimir Matriz
    printf("P2\n%d %d\n255\n", tam_coluna, tam_linha);
    for(i = 0; i < tam_linha; i++)
    {
        for(j = 0; j < tam_coluna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
