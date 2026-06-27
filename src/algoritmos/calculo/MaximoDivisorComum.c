#include <stdio.h>

int calcularMDC(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularMDC(b, a % b);
    }
}

int main() {
    int num1 = 48; // Substitua pelos números para os quais você deseja calcular o MDC
    int num2 = 18;
    int mdc = calcularMDC(num1, num2);
    printf("MDC de %d e %d é: %d\n", num1, num2, mdc);
    return 0;
}