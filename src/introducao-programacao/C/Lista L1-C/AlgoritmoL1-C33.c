// Declaração de Bibliotecas
#include <stdio.h>
#include <string.h>

int fatorar(unsigned int numero)
{
    // Declaração de Variáveis
    int i, primo = 2;
    int decomposicao[1000];

    for(i = 0; numero != 1; i++)
    {
        if(!(numero % primo))
        {
            decomposicao[i] = primo;
            numero /= primo;
        }
        else
        {
            primo++;
        } 
    }
    return decomposicao;
}

// Função Principal
int main()
{
    // Declaração de Variáveis
    int j, numero;
    int decomposicao[1000];

    // Entrada
    scanf("%d", &numero);
    
    if(numero > 0)
    {
        decomposicao = fatorar(numero);
        printf("%d = ")
        for(j = 0; i < strlen(decomposicao); j++)
        {
            printf("%d x ", decomposicao[j]);
        }
    }
    else
    {
        printf("Fatoracao nao e possivel para o numero %d!", numero);
    }
    return 0;
}