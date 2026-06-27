#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Loop através de todos os elementos do array
    for (i = 0; i < n - 1; i++) {
        // Encontre o índice do elemento mínimo no subarray não classificado
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Troque o elemento mínimo encontrado com o primeiro elemento não classificado
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}