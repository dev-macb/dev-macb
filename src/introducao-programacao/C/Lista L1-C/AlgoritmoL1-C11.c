// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int i, n, elemento, elemento_anterior, tamanho_maximo = 0, tamanho_corrente = 1;

    // Entrada
    scanf("%u", &n);
    if(n > 0)
    {
        scanf("%u", &elemento);
        for (i = 1; i < n; i++)
        {
            elemento_anterior = elemento;
            scanf("%u", &elemento);
            if(elemento > elemento_anterior)
            {
                tamanho_corrente = tamanho_corrente + 1;
            }
            else
            {
                if(tamanho_corrente > tamanho_maximo)
                {
                    tamanho_maximo = tamanho_corrente;
                }
                tamanho_corrente = 1;
            }
        }
        if(tamanho_corrente > tamanho_maximo)
        {
            tamanho_maximo = tamanho_corrente;
        }
        printf("O comprimento do segmento crescente maximo e:  %d\n", tamanho_maximo - 1);
    }
    return 0;
}
