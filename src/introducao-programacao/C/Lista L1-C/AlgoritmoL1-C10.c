// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double n, k, i, s;

    //Entrada
    scanf("%lf", &n);  // Numero primario
    scanf("%lf", &k);  // Numero secundario
    scanf("%lf", &i);  // Quantidades
    scanf("%lf", &s);  // Incremento

    printf("Tabuada de soma:\n");
    {
        double a = n, b = k, c = i, d = s;
        for(c; c > 0; c--)
        {
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a+b);
            b += d;
        }
    }

    printf("Tabuada de subtracao:\n");
    {
        double a = n, b = k, c = i, d = s;
        for(c; c > 0; c--)
        {
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a-b);
            b += d;
        }
    }

    printf("Tabuada de multiplicacao:\n");
    {
        double a = n, b = k, c = i, d = s;
        for(c; c > 0; c--)
        {
            printf("%.2lf x %.2lf = %.2lf\n", a, b, a*b);
            b += d;
        }
    }

    printf("Tabuada de divisao:\n");
    {
        double a = n, b = k, c = i, d = s;
        for(c; c > 0; c--)
        {
            printf("%.2lf / %.2lf = %.2lf\n", a, b, a/b);
            b += d;
        }
    }
    return 0;
}
