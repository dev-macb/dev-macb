// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int matriz[100][100];
    int linha, coluna, num_linhas, num_colunas, maior_num, menor_num, quant_maior = 0, quant_menor = 0;
    double p_maior, p_menor;

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
    
    // Definir maior e menor número
    menor_num = matriz[0][0];
    maior_num = matriz[0][0];
    for(linha = 0; linha < num_linhas; linha++)
    {
        for(coluna = 0; coluna < num_colunas; coluna++)
        {
            if(matriz[linha][coluna] > maior_num) { maior_num = matriz[linha][coluna]; }
            if(matriz[linha][coluna] < menor_num) { menor_num = matriz[linha][coluna]; }
        }
    }

    // Quantificar as repetições
    for(linha = 0; linha < num_linhas; linha++)
    {
        for(coluna = 0; coluna < num_colunas; coluna++)
        {
            if(matriz[linha][coluna] == maior_num) { quant_maior++; }
            if(matriz[linha][coluna] == menor_num) { quant_menor++; }
        }
    }
    
    // Calcular a frequência
    p_menor = (quant_menor * 100) / (double)(num_linhas * num_colunas);
    p_maior = (quant_maior * 100) / (double)(num_linhas * num_colunas);

    // Saída
    printf("%d %.2lf%%\n", menor_num, p_menor);
    printf("%d %.2lf%%\n", maior_num, p_maior);
    return 0;
}