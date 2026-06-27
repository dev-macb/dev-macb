#include <stdio.h>
#include <stdbool.h>

void imprimePrimos(int limite) {
    bool ehPrimo[limite + 1];
    for (int i = 0; i <= limite; i++) {
        ehPrimo[i] = true;
    }

    for (int p = 2; p * p <= limite; p++) {
        if (ehPrimo[p] == true) {
            for (int i = p * p; i <= limite; i += p) {
                ehPrimo[i] = false;
            }
        }
    }

    printf("Números primos até %d: ", limite);
    for (int i = 2; i <= limite; i++) {
        if (ehPrimo[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int limite = 50; // Limite para encontrar números primos
    imprimePrimos(limite);

    return 0;
}