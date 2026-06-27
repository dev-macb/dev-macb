#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Elemento encontrado, retorna o índice
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Elemento não encontrado
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Elemento encontrado no índice %d.\n", result);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}