// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declarção de Variáveis
    int i, n, k, vetor[1000], contador = 0;

    do
    {
        // Entrada
        scanf("%d", &n);
    } 
    while(n < 1 || n > 1000);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &k);

    for(i = 0; i < n; i++)
    {
        if(vetor[i] >= k)
        {
            contador++;
        }
    }

    // Saída
    printf("%d", contador);

    return 0;
}