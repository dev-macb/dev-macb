// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double temp_f, temp_c, chuva_p, chuva_m;

    //Entrada
    scanf("%lf", &temp_f);
    scanf("%lf", &chuva_p);

    // Converter Fº para Cº.
    temp_c = (5*(temp_f - 32)) / 9;

    // Converter Polegada para milímetro.
    chuva_m = chuva_p * 25.4;

    // Saída
    printf("O VALOR EM CELSIUS = %.2lf\n", temp_c);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", chuva_m);

    return 0;
}