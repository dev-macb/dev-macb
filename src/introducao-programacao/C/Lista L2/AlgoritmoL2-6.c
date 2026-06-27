//  Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, n, vetor[5000], soma = 0;

    // Entrada
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    // Saída
    printf("%d\n", soma);
    
    return 0;
}
