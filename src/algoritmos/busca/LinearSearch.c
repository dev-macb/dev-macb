#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Elemento encontrado, retorna o índice
        }
    }
    return -1; // Elemento não encontrado
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Elemento encontrado no índice %d.\n", result);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}