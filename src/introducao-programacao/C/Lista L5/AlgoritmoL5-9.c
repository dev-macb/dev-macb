// Declaração de Bibliotecas
#include <stdio.h>
#include <math.h>

//Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, num;
    double distancia, vetor[500];
    
    // Entrada
    scanf("%d", &num);
    for(i = 0, j = 0; i < num; i++, j += 4) 
    { 
        scanf("%lf %lf %lf %lf", &vetor[j], &vetor[j+1], &vetor[j+2], &vetor[j+3]); 
    }

    // Calcular distância
    for(i = 0, j = 0; i < (num-1); i++, j += 4)
    {
        distancia = sqrt(pow((vetor[j] - vetor[j+4]), 2) + pow((vetor[j+1] - vetor[j+5]), 2) + pow((vetor[j+2] - vetor[j+6]), 2) + pow((vetor[j+3] - vetor[j+7]), 2));
        // Saída
        printf("%.2lf\n", distancia);
    }
    return 0;
}