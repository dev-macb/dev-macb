//  Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, n, vetor[5000];

    // Entrada
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Saída

    return 0;
}
