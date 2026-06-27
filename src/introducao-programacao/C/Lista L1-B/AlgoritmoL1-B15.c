// Declaração de Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Função Principal
int main () 
{
    // Declaração de variáveis
    int normal, invertido = 0, auxiliar;

    // Entrada
    scanf("%d", &normal);


    if(normal > 0 && normal < 100000)
    {
        auxiliar = normal;

        // Criar número invertido
        while (auxiliar > 0) 
        {
            invertido = (invertido*10) + (auxiliar % 10);
            auxiliar /= 10;
        }

        if (normal == invertido) { printf("PALINDROMO\n"); }
        else { printf("NAO PALINDROMO\n"); }
    }
    else
    {
        printf("NUMERO INVALIDO\n");
    }
    
    return 0;
}