// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, numero_decimal, numero_binario[32];

    while( scanf("%d", &numero_decimal) != EOF)
    {
        i = 0;
        if(numero_decimal == 0)
        {
            numero_binario[i] = 0;
            i++;
        }
        else
        {
            while(numero_decimal > 0)
            {
                numero_binario[i] = numero_decimal % 2;
                i++;
                numero_decimal = numero_decimal / 2;
            }
        }

        for(j = (i-1); j >= 0; j--)
        {
            // Saída
            printf("%d", numero_binario[j]);
        }
	    printf("\n");
    }
	return 0;
}