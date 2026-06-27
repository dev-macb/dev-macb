// Declaração de Bibliotecas.
#include <stdio.h>

int main()
{
    // Declaração de Variáveis.
    double salario_minimo, kw_gasto, custo_kw, custo_consumo, custo_desconto, x;

    //Entrada
    scanf("%lf", &salario_minimo);
    scanf("%lf", &kw_gasto);

    // Descobrir valor de 1kW.
    x = salario_minimo * 0.7;
    custo_kw = x / 100;

    // Valor do consumo gasto.
    custo_consumo = custo_kw * kw_gasto;

    // Valor gasto com desconto.
    custo_desconto = custo_consumo * 0.9;

    // Saída
    printf("Custo por kW: R$ %.2lf\n", custo_kw);
    printf("Custo do consumo:  R$ %.2lf\n", custo_consumo);
    printf("Custo com desconto:  R$ %.2lf\n", custo_desconto);

    return 0;
}
