#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 1000

char* encrypt(const char* strng, int key) {
    char* encrypted = (char*)malloc(MAX_STRING_LENGTH);
    int i = 0;

    while (strng[i] != '\0') {
        int indx = (strng[i] + key) % 256;
        if (indx > 126) {
            indx = indx - 95;
        }
        encrypted[i] = (char)indx;
        i++;
    }

    encrypted[i] = '\0';
    return encrypted;
}

char* decrypt(const char* strng, int key) {
    char* decrypted = (char*)malloc(MAX_STRING_LENGTH);
    int i = 0;

    while (strng[i] != '\0') {
        int indx = (strng[i] - key) % 256;
        if (indx < 32) {
            indx = indx + 95;
        }
        decrypted[i] = (char)indx;
        i++;
    }

    decrypted[i] = '\0';
    return decrypted;
}

void brute_force(const char* strng) {
    int key = 1;
    char decrypted[MAX_STRING_LENGTH];

    while (key <= 94) {
        int i = 0;
        while (strng[i] != '\0') {
            int indx = (strng[i] - key) % 256;
            if (indx < 32) {
                indx = indx + 95;
            }
            decrypted[i] = (char)indx;
            i++;
        }

        decrypted[i] = '\0';
        printf("Key: %d\t| Message: %s\n", key, decrypted);

        key++;
    }
}

int main() {
    while (1) {
        printf("----------\n**Menu**\n----------\n");
        printf("1.Encrypt\n");
        printf("2.Decrypt\n");
        printf("3.BruteForce\n");
        printf("4.Quit\n");

        int choice;
        printf("What would you like to do?: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice, please enter a valid choice\n");
        } else if (choice == 1) {
            char strng[MAX_STRING_LENGTH];
            printf("Please enter the string to be encrypted: ");
            scanf(" %[^\n]s", strng);
            int key;
            printf("Please enter off-set between 1-94: ");
            scanf("%d", &key);
            if (key >= 1 && key <= 94) {
                printf("%s\n", encrypt(strng, key));
            }
        } else if (choice == 2) {
            char strng[MAX_STRING_LENGTH];
            printf("Please enter the string to be decrypted: ");
            scanf(" %[^\n]s", strng);
            int key;
            printf("Please enter off-set between 1-94: ");
            scanf("%d", &key);
            if (key >= 1 && key <= 94) {
                printf("%s\n", decrypt(strng, key));
            }
        } else if (choice == 3) {
            char strng[MAX_STRING_LENGTH];
            printf("Please enter the string to be decrypted: ");
            scanf(" %[^\n]s", strng);
            brute_force(strng);
        } else if (choice == 4) {
            printf("Goodbye.\n");
            break;
        }
    }

    return 0;
}