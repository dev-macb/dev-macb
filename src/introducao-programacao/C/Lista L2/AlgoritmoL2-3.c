// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declarção de Variáveis
    int n, i, vetor[5000];

    // Entrada
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for(n; n > 0; n--)
    {
        printf("%d ", vetor[n-1]);
    }
    printf("\n");
    return 0;
}