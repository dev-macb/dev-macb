// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    char saida[102];
    int numero, milhar, centena, dezena, unidade;

    //Entrada
    scanf("%d", &numero);

    if(numero < 10000 && numero >= 1000)
    {
        // Decomposição
        milhar  = numero / 1000;
        centena = (numero % 1000) / 100;
        dezena  = ((numero % 10000) % 100) / 10;
        unidade = ((numero % 10000) % 100) % 10;
        // Formatar de acordo com número
        sprintf(saida, "(quarta ordem) %d = %d unidade%c", numero, milhar, milhar > 1 ? 's' : NULL);
        sprintf(saida, "%s de milhar", saida);
        if(centena != 0) { sprintf(saida, "%s + %d centena%c", saida, centena, centena > 1 ? 's' : NULL); }
        if(dezena  != 0) { sprintf(saida, "%s + %d dezena%c" , saida, dezena, dezena > 1 ? 's' : NULL); } 
        if(unidade != 0) { sprintf(saida, "%s + %d unidade%c", saida, unidade, unidade > 1 ? 's' : NULL); }
        // Soma
        sprintf(saida, "%s = %d", saida, milhar * 1000);
        if(centena != 0) { sprintf(saida, "%s + %d", saida, centena * 100); }
        if(dezena  != 0) { sprintf(saida, "%s + %d", saida, dezena * 10); } 
        if(unidade != 0) { sprintf(saida, "%s + %d", saida, unidade); }
        // Saída
        printf("%s\n", saida);
    }
    else if(numero < 1000 && numero >= 100)
    {
        // Decomposição
        centena = numero / 100;
        dezena  = (numero % 100) / 10;
        unidade = (numero % 100) % 10;
        // Formatar de acordo com número
        sprintf(saida, "(terceira ordem) %d = %d centena%c", numero, centena, centena > 1 ? 's' : NULL);
        if(dezena  != 0) { sprintf(saida, "%s + %d dezena%c" , saida, dezena, dezena > 1 ? 's' : NULL); } 
        if(unidade != 0) { sprintf(saida, "%s + %d unidade%c", saida, unidade, unidade > 1 ? 's' : NULL); }
        // Soma
        sprintf(saida, "%s = %d", saida, centena * 100);
        if(dezena  != 0) { sprintf(saida, "%s + %d", saida, dezena * 10); } 
        if(unidade != 0) { sprintf(saida, "%s + %d", saida, unidade); } 
        // Saída
        printf("%s\n", saida);
    }
    else if(numero < 100 && numero >= 10)
    {
        // Decomposição
        dezena  = numero / 10;
        unidade = numero % 10;
        // Formatar de acordo com número
        sprintf(saida, "(segunda ordem) %d = %d dezena%c", numero, dezena, dezena > 1 ? 's' : NULL);
        if(unidade != 0) { sprintf(saida, "%s + %d unidade%c", saida, unidade, unidade > 1 ? 's' : NULL); }
        // Soma
        sprintf(saida, "%s = %d", saida, dezena * 10);
        if(unidade != 0) { sprintf(saida, "%s + %d", saida, unidade); } 
        // Saída
        printf("%s\n", saida);
    }
    /*else if(numero < 10 && numero >= 0)
    {
        printf("(primeira ordem) %d = %d unidade%c", numero, numero, numero > 1 ? 's' : NULL);
    }*/
    else
    {
        printf("Numero invalido!\n");
    }
    return 0;
}
