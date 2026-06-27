// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double nota;

    //Entrada.
    scanf("%lf", &nota);

    if(nota >= 0 && nota < 6)
    {
        printf("NOTA = %.1lf CONCEITO = D\n", nota);
    }
    else if(nota >= 6 && nota < 7.5)
    {
        printf("NOTA = %.1lf CONCEITO = C\n", nota);
    }
    else if(nota >= 7.5 && nota < 9)
    {
        printf("NOTA = %.1lf CONCEITO = B\n", nota);
    }
    else if(nota >= 9 && nota < 10)
    {
        printf("NOTA = %.1lf CONCEITO = A\n", nota);
    }

    return 0;
}