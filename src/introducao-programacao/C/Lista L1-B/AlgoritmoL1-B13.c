// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int cc, dr, rt, pontos = 7;

    //Entrada
    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);

    if(cc < 7)  // Primeiro Teste
    {
        pontos++;
        if(dr > 50)  // Segundo Teste
        {
            pontos++;
            if(rt > 80000)  // Terceiro Teste
            {
                pontos++;
            }
        }
    }
    
    // Saída
    printf("ACO DE GRAU = %d\n", pontos);

    return 0;
}