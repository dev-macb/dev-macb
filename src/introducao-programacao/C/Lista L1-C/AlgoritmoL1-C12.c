// Declaração de Bilbliotecas
#include <stdio.h>
 
// Função Principal
int main()
{
    // Declaração de Variáveis
    unsigned int n, i, numero, numero_anterior, contador = 0, final;
 
    // Entrada
    scanf("%u", &n);
    if(n > 0)
    {
        scanf("%u", &numero);
        for(i = 1; i < n; i++)
        {
            numero_anterior = numero;
            scanf("%u", &numero);
            if(numero == numero_anterior)
            {
                if(contador == 0)
                {
                    contador++;
                }
                contador++;
                if(i+1==n)
                {
                    if(final < contador)
                    {
                        final = contador;
                    }
                }
            }
            else
            {
                if(final < contador)
                {
                    final = contador;
                    contador = 0;
                }
                else
                {
                    contador = 0;
                }
            }
        }   
    }
    // Saída
    
    printf("A maior subsequencia de elementos iguais possui %u elementos.\n", final);
    return 0;
}