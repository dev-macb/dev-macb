// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double a, b, c;

    //Entrada
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if(a > b)  // A > B
    {
        if(b > c)  // A > B > C
        {
            printf("%.2lf, %.2lf, %.2lf", c, b, a);
        }
        else  // A > B, B <= C
        {
            if(a > c)  // A > C >= B
            {
                printf("%.2lf, %.2lf, %.2lf", b, c, a);
            }
            else  // C >= A > B
            {
                printf("%.2lf, %.2lf, %.2lf", b, a, c);
            }   
        }
    }
    else  // B >= A
    {
        if(b > c)  // B >= A, B > C
        {
            if(a > c)  // B >= A > C
            {
                printf("%.2lf, %.2lf, %.2lf", c, a, b);
            }
            else // B > C >= A
            {
                printf("%.2lf, %.2lf, %.2lf", a, c, b);
            }  
        }
        else  // C >= B >= A
        {
            printf("%.2lf, %.2lf, %.2lf", a, b, c);
        }
    }
    return 0;
}
