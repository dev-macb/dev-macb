// Declaração de Bibliotecas
#include <stdio.h>

//Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, n, indice, auxiliar, nota_frequente, quantidade;
    int notas[1000], vetor[1000];
    
    // Entrada
    scanf("%d", &n);
    for(i = 0; i < n; i++) { scanf("%d", &notas[i]); }

    // Igualar dois vetores
    for(i = 0; i < n; i++) { vetor[i] = notas[i]; }

    // Ordenar vetor
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vetor[i] >= vetor[j])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }

    // Indice do maior número
    for(i = 0; i < n; i++) 
    {
        if(vetor[0] == notas[i])
        {
            indice = i;
            break;
        }
    }

    // Número mais frequente
    nota_frequente = vetor[0];
    for(i = 0; i < n; i++)
    {
        if(nota_frequente == vetor[i])
        {
            quantidade++;
        }
    }
    for()

    // Saída
    for(i = 0; i < n; i++) {printf("%d ", vetor[i]);}
    printf("\n");
    printf("Nota %d, %d vezes\n", nota_frequente, quantidade);
    printf("Nota %d, indice %d\n", vetor[0], indice);

    return 0;
}