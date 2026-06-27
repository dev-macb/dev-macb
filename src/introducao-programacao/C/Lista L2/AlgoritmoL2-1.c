// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declarção de Variáveis
    int n, m, i, j, chave, numero, lista[100000];

    // Entrada
    scanf("%u", &n);
    for(i = 0; i < n; i++) { scanf("%d", &lista[i]); }
    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        chave = 0;
        scanf("%d", &numero);
        for(j = 0; j < n; j++)
        {
            if(numero == lista[j]) { chave = 1; }
        }
        if(chave == 1) { printf("ACHEI\n"); }
        else { printf("NAO ACHEI\n"); }
    }
    return 0;
}
