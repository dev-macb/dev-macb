// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declarção de Variáveis
    unsigned int i, quantidade, num1, num2;

    // Entrada
    scanf("%u", &quantidade);

    for(i = 0; i < quantidade; i++)
    {
        scanf("%u %u", &num1, &num2);
        num1 = inverter(num1);
        num2 = inverter(num2);
        
        if(num1 == 0 || num2 == 0) // Exceção: quando há zeros
        {
            return 0;
        }

        if(num1 > num2)
        {
            printf("%u\n", num1);
        }
        else
        {
            printf("%u\n", num2);
        }
    }
    return 0;
}

// Função para inverter os numeros
int inverter(unsigned int numero)
{
    // Declarção de Variáveis
    unsigned int novo_numero, centena, dezena, unidade;
    
    // Decomposição do número
    centena = numero / 100;
    dezena  = (numero % 100) / 10;
    unidade = (numero % 100) % 10;

    if(centena, dezena, unidade == 0)
    {
        return 0;  // O numero possui 0
    }
    novo_numero = (unidade * 100) + (dezena * 10) + centena;
    return novo_numero;
}