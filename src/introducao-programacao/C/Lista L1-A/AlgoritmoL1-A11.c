// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int numero, dig1, dig2, dig3;

    // Entrada.
    scanf("%d", &numero);

    // Separando os algarismos.
    dig1 = numero / 100;
    dig2 = (numero - (dig1 * 100)) / 10;
    dig3 = (numero - (dig1 * 100 + dig2 * 10));

    // if(numero % 10 != 0 && numero != 0)
    if(dig3 != 0)
    {
        // Saída.
        printf("%d%d%d\n", dig3, dig2, dig1);
    }
    
    return 0;
}