// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int horas, a, b;
    double preco_final;

    //Entrada
    scanf("%d", &horas);

    a = horas / 3;
    b = horas % 3;
    preco_final = a * 10 + b * 5;

    // Saída
    printf("O VALOR A PAGAR E = %.2lf\n", preco_final);

    return 0;
}