// Declaração de Bibliotecas.
#include <stdio.h>
#include <math.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int numero, resultado, contador = 2;

    // Entrada
    scanf("%d", &numero);
    if(numero > 5 && numero < 2000)
    {
        while(contador <= numero)
        {
            resultado = pow(contador, 2);
            printf("%d^2 = %d\n", contador, resultado);
            contador += 2;
        }

    }
    return 0;
}
