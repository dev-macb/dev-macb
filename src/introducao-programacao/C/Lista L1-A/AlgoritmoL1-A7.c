// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double a, b, c, x, semi_perimetro, area;

    //Entrada.
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    // Valor do semi-perimetro.
    semi_perimetro = (a + b + c) / 2;

    // Valor da área.
    area = sqrt(semi_perimetro * (semi_perimetro - a) * (semi_perimetro - b) * (semi_perimetro - c));

    // Saída.
    printf("A AREA DO TRIANGULO E = %.2lf\n", area);

    return 0;
}

