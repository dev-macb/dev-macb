// Declarção de Bibliotecas
#include <stdio.h>
#include <string.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i = 0, numero;
    char string1[50], string2[50], saida[100] = "", aux;

    // Entrada
    scanf("%d", &numero);
    
    scanf("%s %s", string1, string2);
    


    
    printf("%s - %s - %s", string1, string2, saida);



    /*i, j = 0;
    while(numero != 0)
    {
        scanf("%s %s", &string1, &string2);
        strcat(saida, string1[i]);
    }
*/
    /*for(i = 0; i < numero; i++)
    {
        scanf("%s %s", &string1, &string2);
        strcat(string1, string2);
        // Saída
        printf("%s\n", string1);
    }*/
    return 0;
}
/*
1 - letra 0 da string1
2 - letra 0 da string2

3 - letra 1 string1
4 - letra 1 string2
....
*/