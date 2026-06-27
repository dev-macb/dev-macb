#include <stdio.h>

int calcularMDC(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularMDC(b, a % b);
    }
}

int calcularMMC(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / calcularMDC(a, b);
}

int main() {
    int num1 = 12; // Substitua pelos números para os quais você deseja calcular o MMC
    int num2 = 18;
    int mmc = calcularMMC(num1, num2);
    printf("MMC de %d e %d é: %d\n", num1, num2, mmc);
    return 0;
}