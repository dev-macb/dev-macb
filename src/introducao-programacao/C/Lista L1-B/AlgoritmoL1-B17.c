// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int i, j;
    double auxiliar, vetor[4];

    //Entrada
    scanf("%lf", &vetor[0]);
    scanf("%lf", &vetor[1]);
    scanf("%lf", &vetor[2]);
    scanf("%lf", &vetor[3]);
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(vetor[i] <= vetor[j])  //Caso em ordem decrescente utilizar >=
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    // Saída
    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", vetor[0], vetor[1], vetor[2], vetor[3]);
    return 0;
}