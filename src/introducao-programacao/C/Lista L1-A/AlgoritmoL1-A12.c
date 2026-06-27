// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int dinheiro, nota100, nota50, nota10, moeda1;

    // Entrada.
    scanf("%d", &dinheiro);

    // Máximo valor de notas de 100 e posteriormente de 50 e assim por diante.
    nota100 = dinheiro / 100;
    nota50 = (dinheiro - (nota100 * 100)) / 50;
    nota10 = (dinheiro - (nota100 * 100 + nota50 * 50)) / 10;
    moeda1 = (dinheiro - (nota100 * 100 + nota50 * 50 + nota10 * 10)) / 1;

    // Saída.
    printf("NOTAS DE 100 = %d\n", nota100);
    printf("NOTAS DE 50 = %d\n", nota50);
    printf("NOTAS DE 10 = %d\n", nota10);
    printf("MOEDAS DE 1 = %d\n", moeda1);
    
    return 0;
}
