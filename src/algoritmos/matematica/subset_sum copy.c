#include <stdio.h>

// O(1)
int max(int a, int b) {
    return (a > b) ? a : b;
}


// O(n^2 + n + n^2) = O(n)
void subsetSum(int pesos[], int n, int C) {
    int tabela[n + 1][C + 1];

    for (int i = 0; i <= n; i++) {
        for (int capacidade = 0; capacidade <= C; capacidade++) {
            if (i == 0 || capacidade == 0)
                tabela[i][capacidade] = 0;
            else if (pesos[i - 1] <= capacidade)
                tabela[i][capacidade] = max(pesos[i - 1] + tabela[i - 1][capacidade - pesos[i - 1]], tabela[i - 1][capacidade]);
            else
                tabela[i][capacidade] = tabela[i - 1][capacidade];
        }
    }

    int resultado = tabela[n][C];

    // Reconstruir o subconjunto ótimo
    printf("\nSubconjunto Otimo:\n\tS = { ");
    int capacidade = C;
    for (int i = n; i > 0 && resultado > 0; i--) {
        if (resultado != tabela[i - 1][capacidade]) {
            printf("%d, ", pesos[i - 1]);
            resultado -= pesos[i - 1];
            capacidade -= pesos[i - 1];
        }
    }
    printf("}\n");

    // Imprimir tabela
    printf("Tabela:\n");
    for (int i = 0; i <= n; i++) {
        printf("\t");
        for (int j = 0; j <= C; j++) {
            printf("%d ", tabela[i][j]);
        }
        printf("\n");
    }  
}


int main() {
    int C = 5;
    int pesos[] = {2, 3, 4};
    int n = sizeof(pesos) / sizeof(pesos[0]);
    
    printf("PROBLEMA DA SOMA DOS SUBCONJUNTOS\n");
    subsetSum(pesos, n, C);

    return 0;
}