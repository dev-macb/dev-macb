#include <stdio.h>

// Função para ajustar um heap máximo
void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        // Trocar o maior elemento com o elemento atual
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Chamar recursivamente para o subárvore afetada
        maxHeapify(arr, n, largest);
    }
}

// Função principal do HeapSort
void heapSort(int arr[], int n) {
    // Construir um heap máximo
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    // Extrair elementos um por um do heap
    for (int i = n - 1; i > 0; i--) {
        // Mover a raiz atual para o final
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Chamar maxHeapify no heap reduzido
        maxHeapify(arr, i, 0);
    }
}

// Função para imprimir um array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Exemplo de uso
int main() {
    int arr[] = {10, 12, 1, 14, 6, 5, 8, 15, 3, 9, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array antes do HeapSort: \n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("Array ordenado pelo HeapSort: \n");
    printArray(arr, n);

    return 0;
}