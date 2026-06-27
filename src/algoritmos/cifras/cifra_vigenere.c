#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LETTERS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define MAX_MESSAGE_LENGTH 1000

void encryptDecryptMessage(const char *key, const char *message, char *result, const char *mode);
void translateMessage(const char *key, const char *message, char *result, const char *mode);

int main() {
    char message[MAX_MESSAGE_LENGTH];
    char key[MAX_MESSAGE_LENGTH];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove newline character

    printf("Enter key [alphanumeric]: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';  // Remove newline character

    char mode[2];
    printf("Encrypt/Decrypt [e/d]: ");
    fgets(mode, sizeof(mode), stdin);

    char translated[MAX_MESSAGE_LENGTH];

    if (tolower((unsigned char)mode[0]) == 'e') {
        encryptDecryptMessage(key, message, translated, "encrypt");
    } else if (tolower((unsigned char)mode[0]) == 'd') {
        encryptDecryptMessage(key, message, translated, "decrypt");
    }

    printf("\n%sed message:\n%s\n", mode[0] == 'e' ? "Encrypt" : "Decrypt", translated);

    return 0;
}

void encryptDecryptMessage(const char *key, const char *message, char *result, const char *mode) {
    size_t messageLen = strlen(message);
    result[0] = '\0';

    for (size_t i = 0; i < messageLen; i++) {
        translateMessage(key, &message[i], &result[i], mode);
    }
}

void translateMessage(const char *key, const char *message, char *result, const char *mode) {
    char letters[] = LETTERS;
    size_t keyIndex = 0;

    int num = -1;
    if (isalpha((unsigned char)*message)) {
        num = toupper((unsigned char)*message) - 'A';

        if (tolower((unsigned char)*message) == *message) {
            *result = tolower(letters[(num + (mode[0] == 'e' ? key[keyIndex] : -key[keyIndex]) + 26) % 26]);
        } else {
            *result = letters[(num + (mode[0] == 'e' ? key[keyIndex] : -key[keyIndex]) + 26) % 26];
        }

        keyIndex = (keyIndex + 1) % strlen(key);
    } else {
        *result = *message;
    }
}