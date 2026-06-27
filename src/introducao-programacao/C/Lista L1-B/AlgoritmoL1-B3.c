// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int numero;

    //Entrada.
    scanf("%d", &numero);

    // ou if(numero % 3 == 0 && numero % 5 ==0)
    if(numero % 15 == 0)
    {
        printf("O NUMERO E DIVISIVEL\n");
    }
    else
    {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }

    return 0;
}