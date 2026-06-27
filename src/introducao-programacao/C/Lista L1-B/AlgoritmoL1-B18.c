// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double a, b, c, area;

    //Entrada
    scanf("%lf %lf %lf", &a, &b, &c);

    area = ((a + b) * c) / 2;

    if(a > abs(b-c) && a < b+c)
    {
        if(b > abs(a-c) && b < a+c)
        {
            if(c > abs(a-b) && c < a+b)
            {
                // É um triângulo
                printf("Perimetro = %.1lf", a + b + c);

            } else { printf("Area = %.1lf", area); }
        } else { printf("Area = %.1lf", area); }
    } else { printf("Area = %.1lf", area); }
    
    // Saída
    return 0;
}