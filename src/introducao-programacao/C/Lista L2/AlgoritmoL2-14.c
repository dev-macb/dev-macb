//  Declaração de Bibliotecas
#include <stdio.h>
 
// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, n, ordem[100000], auxiliar;
    double mediana;
    
    // Entrada
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ordem[i]);
    }
 
    // Odena o vetor
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(ordem[i] <= ordem[j]) // Caso em ordem decrescente utilizar >=
            {
                auxiliar = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = auxiliar;
            }
        }
    }

    if(n % 2 == 0) { mediana = (ordem[(n/2)-1] + ordem[n/2]) / (double)2; }
    else { mediana = ordem[n/2]; }
    
    // Saída
    printf("%.2lf\n", mediana);
    
    return 0;
}