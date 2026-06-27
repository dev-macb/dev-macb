// Declaração de Bilbliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    unsigned int entrada, soma_par = 0, soma_impar = 0, quantidade_pares = 0, quantidade_impares = 0;
    double media_par, media_impar;

    do
    {
        // Entrada
        scanf("%u", &entrada);

        if(entrada % 2 == 0)
        {
            if(entrada != 0)
            {
                quantidade_pares++;
                soma_par += entrada;
            }
        }
        else
        {
            quantidade_impares++;
            soma_impar += entrada;
        }
    } while (entrada != 0);
    
    if(quantidade_pares != 0) { media_par = soma_par / quantidade_pares; }
    if(quantidade_impares != 0) { media_impar = soma_impar / quantidade_impares; }
    
    // Saida
    printf("MEDIA PAR = %.2lf\n", media_par);
    printf("MEDIA IMPAR = %.2lf\n", media_impar);
    return 0;
}
