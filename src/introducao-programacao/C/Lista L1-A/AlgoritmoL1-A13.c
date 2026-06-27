// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double a, b, c, d, e, f, x, y;

    // Entrada.
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    // Valor de X e Y
    y = (a*f - d*c) / (a*e - d*b);
    x = (c - b*y) / a;

    // Saída.
    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);

    return 0;
}