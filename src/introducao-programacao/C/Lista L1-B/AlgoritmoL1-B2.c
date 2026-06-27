// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int conta;
    char tipo_de_consumidor;
    double consumo, preco_final;

    // Entrada.
    scanf("%d %lf %c", &conta, &consumo, &tipo_de_consumidor);

    // Tipo de Consumidor.
    if(tipo_de_consumidor == 'c' || tipo_de_consumidor == 'C')
    {
        if(consumo <= 80)
        {
            preco_final = 500;
            // Saída.
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", preco_final);
        }
        else
        {
            consumo -= 80;
            preco_final = 500 + (consumo * 0.25);
            // Saída.
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", preco_final);
        }
    }
    else if(tipo_de_consumidor == 'i' || tipo_de_consumidor == 'I')
    {
        if(consumo <= 800)
        {
            preco_final = 800;
            // Saída.
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", preco_final);
        }
        else
        {
            consumo -= 100;
            preco_final = 800 + (consumo * 0.04);
            // Saída.
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", preco_final);
        }
    }
    else if(tipo_de_consumidor == 'r' || tipo_de_consumidor == 'R')
    {
        preco_final = 5 + (consumo * 0.05);
        // Saída.
        printf("CONTA = %d\n", conta);
        printf("VALOR DA CONTA = %.2lf\n", preco_final);
    }
    else
    {
        printf("Erro\n");
    }

    return 0;
}