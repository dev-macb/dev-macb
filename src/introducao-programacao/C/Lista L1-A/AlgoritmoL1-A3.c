// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double custo, raio, altura, area, pi = 3.14159;

    //Entrada.
    scanf("%lf", &raio);
    scanf("%lf", &altura);

    // Área total do cilindro.
    area = (2 * pi * raio * raio) + (2 * pi * raio * altura);

    // Valor do custo total.
    custo = area * 100.00;
    
    // Saída.
    printf("O VALOR DO CUSTO E = %.2lf\n", custo);

    return 0;
}
