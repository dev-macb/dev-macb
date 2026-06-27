// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double n, k = 1, somatorio;

    //Entrada
    scanf("%lf", &n);

    if(n > 1)
    {
        for(k ; k < n+1; k++)
        {
            somatorio += 1 / k;
        }
        printf("%.6lf\n", somatorio);
    }
    else
    {
        printf("Numero invalido!\n");
    }
    
    return 0;
}