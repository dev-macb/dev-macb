// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double altura, aresta, area_base, volume;

    //Entrada.
    scanf("%lf %lf", &altura, &aresta);

    // Área da base.
    area_base = (3 * pow(aresta, 2) * sqrt(3)) / 2;

    // Volume da pirâmide
    volume = (area_base * altura) / 3;

    // Saída.
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

    return 0;
}