// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int x, y, i = 0, saida;

    //Entrada
    scanf("%d %d", &x, &y);

    if(x % 2 == 0)
    {
        do
        {
            printf("%d ", x);
            x += 2;
            i++;
        } while (i<y);
        printf("\n");
    }
    else
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    

}