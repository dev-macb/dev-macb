// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double preco_fabrica, per_distribuidor, per_imposto, preco_final;

    //Entrada.
    scanf("%lf", &preco_fabrica);
    scanf("%lf", &per_distribuidor);
    scanf("%lf", &per_imposto);

    // Descobrir a porcentagem do distribuidor e imposto.
    per_distribuidor = preco_fabrica * (per_distribuidor / 100 );
    per_imposto = preco_fabrica * (per_imposto / 100);

    // Valor final do carro.
    preco_final = preco_fabrica + per_distribuidor + per_imposto;

    // Saída.
    printf("O VALOR DO CARRO E = %.2lf\n", preco_final);

    return 0;
}
