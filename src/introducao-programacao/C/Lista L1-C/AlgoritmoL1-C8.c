// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int a, b, anos = 0;

    // Entrada.
    scanf("%d", &a);
    scanf("%d", &b);

    while(a <= b)
    {
        a *= 1.03;
        b *= 1.015;
        anos++; 
    }
    // Saída.
    printf("ANOS = %d", anos);
    return 0;
}