// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de variáveis
    int i, quantidades;
    double celcius, fahrenheit;

    // Entrada
    scanf("%d", &quantidades);

    for(i = 0; i<quantidades; i++)
    {
        // Entrada temperatura
        scanf("%lf", &fahrenheit);
        // Fahrenheit para celcius
        celcius = (5*(fahrenheit - 32)) / 9;
        // Saída
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit, celcius);
    }
    return 0;
}
