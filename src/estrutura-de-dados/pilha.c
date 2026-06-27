#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node* top, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = top;
    return newNode;
}

struct Node* pop(struct Node* top) {
    if (top == NULL) {
        printf("A pilha está vazia.\n");
        return NULL;
    }

    struct Node* temp = top;
    top = top->next;
    free(temp);
    return top;
}

void display(struct Node* top) {
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    struct Node* top = NULL;

    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);

    printf("Elementos da pilha: ");
    display(top);

    top = pop(top);
    printf("Após a operação de pop: ");
    display(top);

    return 0;
}