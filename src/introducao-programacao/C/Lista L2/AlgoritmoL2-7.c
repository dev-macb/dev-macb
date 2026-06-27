//  Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, n, ordem[10000], contador, auxiliar;

    while(n != 0)
    {
        contador = 0;

        // Entrada
        scanf("%d", &n);
        if(n != 0)
        {
            // Entrada
            for(i = 0; i < n; i++) { scanf("%d", &ordem[i]); }

            // Ordena a lista
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

            for(i = 0; i <= ordem[n-1]; i++)
            {
                for(j = 0; j < n; j++)
                {
                    if(i == ordem[j])
                    {
                        contador++;
                    }
                }
                printf("(%d) %d\n", i, contador);
            }
        }
    }
    return 0;
}
