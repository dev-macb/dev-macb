// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double salario, reajuste;

    //Entrada
    scanf("%lf", &salario);

    if(salario <= 300)
    {
        reajuste = salario * 1.5;
        printf("SALARIO COM REAJUSTE = %.2lf\n", reajuste);
    }
    else
    {
        reajuste = salario * 1.3;
        printf("SALARIO COM REAJUSTE = %.2lf\n", reajuste);
    }

    return 0;
}