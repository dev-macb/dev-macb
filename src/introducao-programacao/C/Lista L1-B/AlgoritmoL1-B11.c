// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double a, b, c, x1, x2, delta;

    //Entrada
    scanf("%lf %lf %lf", &a, &b, &c);

    // Valor de delta
    delta = pow(b, 2) - (4 * a * c);

    if(delta < 0)
    {
        printf("RAIZES IMAGINARIAS\n");
    }
    else if(delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        if(x1 < x2)
        {
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
        }
        else
        {
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x2, x1);
        }
    }
    else  // Delta = 0
    {
        x1 = -b / (2 * a);
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    }
    return 0;
}
