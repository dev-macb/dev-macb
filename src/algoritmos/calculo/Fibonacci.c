#include <stdio.h>

unsigned long long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    unsigned long long int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

unsigned long long int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main() {
    int n = 10;
    
    printf("Sequência de Fibonacci até o %dº termo:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%llu ", fibonacci(i));
    }
    printf("\n");

    printf("Sequência de Fibonacci até o %dº termo:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%llu ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}