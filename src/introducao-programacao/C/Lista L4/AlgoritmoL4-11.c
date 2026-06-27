// Declaração de Bibliotecas
#include <stdio.h>
#include <math.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int linha, coluna, num_linhas, num_colunas, membros = 0;
    int matriz[100][100];

    // Entrada
    scanf("%d", &num_linhas);
    scanf("%d", &num_colunas);
    for(linha = 0; linha < num_linhas; linha++)
    {
        for(coluna = 0; coluna < num_colunas; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < num_linhas; linha++)
    {
        for(coluna = 0; coluna < num_colunas; coluna++)
        {
            if(matriz[linha][coluna] == 1111)
            {
                membros = 0;
                membros++;
                // Localizar Wally
                int x = (linha - 1) % num_linhas;
                printf("%d\n", (abs(linha - 1) % num_linhas));
                if(matriz[(linha - 1) % num_linhas][coluna] == 4) { membros++; }
                if(matriz[(linha + 1) % num_linhas][coluna] == 8) { membros++; }
                if(matriz[linha][(coluna - 1) % num_colunas] == 0){ membros++; }
                if(matriz[linha][(coluna + 1) % num_colunas] == 0){ membros++; }

                // Saída
                if(membros == 5) { printf("%d %d\n", linha, coluna); }
                printf("m = %d ", membros);
            }
        }
    }
    if(membros < 5) { printf("WALLY NAO ESTA NA MATRIZ\n"); }
    return 0;
}
