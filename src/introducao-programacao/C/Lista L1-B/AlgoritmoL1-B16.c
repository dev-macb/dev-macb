// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int ordem[3];
    char x, y, z;
    int i, j, auxiliar;
    
    //Entrada
    scanf("%d %d %d\n", &ordem[0], &ordem[1], &ordem[2]);
    scanf("%c%c%c", &x, &y, &z);
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(ordem[i] <= ordem[j])  //Caso em ordem decrescente utilizar >=
            {
                auxiliar = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = auxiliar;
            }
        }
    }

    if(x == 'A')
    {
        if(y == 'B')
        {
            printf("%d %d %d\n", ordem[0], ordem[1], ordem[2]);  // A B C
        }
        else // c2 == 'C'
        {
            printf("%d %d %d\n", ordem[0], ordem[2], ordem[1]);  // A C B
        }
    }
    else if(x == 'B')
    {
        if(y == 'A')
        {
            printf("%d %d %d\n", ordem[1], ordem[0], ordem[2]);  // B A C
        }
        else // c2 == 'C'
        {
            printf("%d %d %d\n", ordem[1], ordem[2], ordem[0]);  // B C A
        }
    }
    else if(x == 'C')
    {
        if(y == 'A')
        {
            printf("%d %d %d\n", ordem[2], ordem[0], ordem[1]);  // C A B
        }
        else // c2 == 'B'
        {
            printf("%d %d %d\n", ordem[2], ordem[1], ordem[0]);  // C B A
        }
    }
    return 0;
}