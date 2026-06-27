// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int ano;

    //Entrada
    scanf("%d", &ano);

    if(ano > 1582 && ano % 4 == 0)
    {
        if(ano % 100 == 0)
        {
            if(ano % 400 == 0)
            {
                printf("ANO BISSEXTO");
            }
            else
            {
                printf("ANO NAO BISSEXTO");
            }
        }
        else
        {
            printf("ANO BISSEXTO");
        }
    }
    else
    {
        printf("ANO NAO BISSEXTO");
    }

    return 0;
}