// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double massa, velocidade, tempo, aceleracao, espaco_percorrido, trabalho;

    //Entrada.
    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    // Velocidade do avião.
    velocidade = aceleracao * 3.6 * tempo;

    // Espaço percorrido pelo avião.
    espaco_percorrido = (aceleracao * tempo * tempo) / 2;

    // Trabalho realizado pelo avião.
    trabalho = (massa * 1000 * velocidade/3.6 * velocidade/3.6) / 2;

    // Saída.
    printf("VELOCIDADE = %.2lf\n", velocidade);
    printf("ESPACO PERCORRIDO = %.2lf\n", espaco_percorrido);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalho);

    return 0;
}