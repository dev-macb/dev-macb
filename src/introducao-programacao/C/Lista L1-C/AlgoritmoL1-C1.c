// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int i, casos, ingressos;
    double popular, geral, arquibancada, cadeiras, renda;

    // Entrada
    scanf("%d", &casos);

    for(i=0; i<casos; i++)
    {
        scanf("%d %lf %lf %lf %lf", &ingressos, &popular, &geral, &arquibancada, &cadeiras);
        renda = ingressos*(popular/100)*1 + ingressos*(geral/100)*5 + ingressos*(arquibancada/100)*10 + ingressos*(cadeiras/100)*20;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i+1, renda);

    }
    return 0;    
}