// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    unsigned int entrada, dia, mes, ano;

    //Entrada
    scanf("%u", &entrada);

    dia = entrada / 1000000;
    mes = (entrada % 1000000) / 10000;
    ano = (entrada % 1000000) % 10000;

    // Verifica se são dias existentes
    if(dia == 0 || dia > 31 || mes == 0 || mes > 12) { printf("Data invalida!\n"); }
    else
    {
        if(dia > 28 && mes == 2)  // Limite de fevereiro
        {
            printf("Data invalida!\n"); 
            return 0;
        }  
        if(dia > 30)  // Limite dos meses com 30 dias
        {
            if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                printf("Data invalida!\n"); 
                return 0;
            }  
        }
        switch(mes)
        {
            case 1:
                printf("%d de janeiro de %d", dia, ano);
                break;
            case 2:
                printf("%d de fevereiro de %d", dia, ano);
                break;
            case 3:
                printf("%d de marco de %d", dia, ano);
                break;
            case 4:
                printf("%d de abril de %d", dia, ano);
                break;
            case 5:
                printf("%d de maio de %d", dia, ano);
                break;
            case 6:
                printf("%d de junho de %d", dia, ano);
                break;
            case 7:
                printf("%d de julho de %d", dia, ano);
                break;
            case 8:
                printf("%d de agosto de %d", dia, ano);
                break;
            case 9:
                printf("%d de setembro de %d", dia, ano);
                break;
            case 10:
                printf("%d de outubro de %d", dia, ano);
                break;
            case 11:
                printf("%d de novembro de %d", dia, ano);
                break;
            case 12:
                printf("%d de dezembro de %d", dia, ano);
                break;
        }
    }
    return 0;
}
