// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double a, b, c, delta;

    //Entrada.
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    // Valor do Delta.
    delta = (b * b) - (4 * a * c);

    // Saída.
    printf("O VALOR DE DELTA E = %.2lf\n", delta);

    return 0;
}
