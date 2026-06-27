// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int i, n, fatorial = 1;

    //Entrada
    scanf("%d", &n);

    i = n;
    for(fatorial; i > 1; i--)
    {
        fatorial *= i;
    }
    printf("%d!  = %d", n, fatorial);
    return 0;
}