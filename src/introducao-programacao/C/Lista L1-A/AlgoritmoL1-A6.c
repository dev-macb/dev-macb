// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int horas, minutos, segundos, tempo_total;

    //Entrada.
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    // Horas para segundos.
    tempo_total = horas * 3600;

    // Minutos para segundos.
    tempo_total += minutos * 60;

    // Tempo total em segundos.
    tempo_total += segundos;

    // Saída.
    printf("O TEMPO EM SEGUNDOS E = %d\n", tempo_total);

    return 0;
}