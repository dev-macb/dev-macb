// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int x, y;

    //Entrada
    scanf("%d", &x);

    if(x == 1)
    {
        y = 0;
        printf("Y = %d", y);
    }
    else if(x > 1)
    {
        y = x*x;
        printf("Y = %d", y);
    }
    else if(x < 1)
    {
        y = x;
        printf("Y = %d", y);
    }

    return 0;
}