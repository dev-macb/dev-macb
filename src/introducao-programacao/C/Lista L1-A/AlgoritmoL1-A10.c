// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int numero, dig1, dig2, dig3, dig4;

    // Entrada.
    scanf("%d", &numero);

    // Separando os algarismos.
    dig1 = numero / 100;
    dig2 = (numero - (dig1 * 100)) / 10;
    dig3 = (numero - (dig1 * 100 + dig2 * 10));

    // Novo dígito.
    dig4 = (dig1 + dig2 * 3 + dig3 * 5) % 7;

    // Saída.
    printf("O NOVO NUMERO E = %d%d\n", numero, dig4);

    return 0;
}
