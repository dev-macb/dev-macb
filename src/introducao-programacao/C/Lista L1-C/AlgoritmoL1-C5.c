// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int a1, an, sn, n, r;

    //Entrada
    scanf("%d %d %d", &a1, &r, &n);

    an = a1 + ((n-1) * r);
    sn = (a1 + an) * n / 2;

    printf("%d", sn);

    return 0;
}