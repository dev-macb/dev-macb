//Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, k, l, m, aux = 0, num, quant_de_frac;
    int vetor[100];

    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
        scanf("%d", &quant_de_frac);
        for(j = 0; j < quant_de_frac * 2; j += 2)
        {
            scanf("%d/%d", &vetor[j], &vetor[j+1]);
        }
        
        // Verificar equivalencia
        printf("Caso teste %d\n", i + 1);
        for(j = 0, k = 0; j < quant_de_frac - 1; j++, k += 2)
        {
            for(l = 0, m = k+2; l < quant_de_frac; l++, m += 2)
            {
                if((vetor[k] / (double)vetor[k+1]) == (vetor[m] / (double)vetor[m+1]))
                {
                    printf("%d/%d equivalente a %d/%d\n", vetor[k], vetor[k+1], vetor[m], vetor[m+1], j, j+1, m, m+1);
                    aux++;
                }     
            }
        }
        if(!aux) { printf("Nao ha fracoes equivalentes na sequencia\n"); }
    }
    return 0;
}
