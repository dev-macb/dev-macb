#include <stdio.h>

unsigned long long int factorialIterativo(int n) {
    unsigned long long int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

unsigned long long int factorialRecursivo(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int main() {
    int n = 10;

    unsigned long long int resultado_iterativo = factorialIterativo(n);
    printf("%d! = %llu  (iterativo)\n", n, resultado_iterativo);

    unsigned long long int resultado_recursivo = factorialRecursivo(n);
    printf("%d! = %llu  (recursivo)\n", n, resultado_recursivo);

    return 0;
}