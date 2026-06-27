#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define LETTERS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define MAX_MESSAGE_LENGTH 1000

void checkValidKey(const char *key);
char* encryptMessage(const char *key, const char *message);
char* decryptMessage(const char *key, const char *message);
char* translateMessage(const char *key, const char *message, const char *mode);
char* getRandomKey();
void shuffleKey(char *key);

int main() {
    char message[MAX_MESSAGE_LENGTH];
    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove newline character

    const char *key = "LFWOAYUISVKMNXPBDCRJTQEGHZ";
    char resp[2];
    printf("Encrypt/Decrypt [e/d]: ");
    fgets(resp, sizeof(resp), stdin);

    checkValidKey(key);

    char *translated;
    if (tolower((unsigned char)resp[0]) == 'e') {
        translated = encryptMessage(key, message);
    } else if (tolower((unsigned char)resp[0]) == 'd') {
        translated = decryptMessage(key, message);
    }

    printf("\n%sion:\n%s\n", resp[0] == 'e' ? "Encrypt" : "Decrypt", translated);

    free(translated);
    return 0;
}

void checkValidKey(const char *key) {
    char keyList[27];
    strcpy(keyList, key);

    char lettersList[] = LETTERS;

    size_t keyLen = strlen(keyList);
    size_t lettersLen = strlen(lettersList);

    qsort(keyList, keyLen, sizeof(char), strcmp);
    qsort(lettersList, lettersLen, sizeof(char), strcmp);

    if (strncmp(keyList, lettersList, keyLen) != 0) {
        fprintf(stderr, "Error in the key or symbol set.\n");
        exit(EXIT_FAILURE);
    }
}

char* encryptMessage(const char *key, const char *message) {
    return translateMessage(key, message, "encrypt");
}

char* decryptMessage(const char *key, const char *message) {
    return translateMessage(key, message, "decrypt");
}

char* translateMessage(const char *key, const char *message, const char *mode) {
    char *translated = (char*)malloc(MAX_MESSAGE_LENGTH);
    if (translated == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    const char *charsA = LETTERS;
    const char *charsB = key;

    if (strcmp(mode, "decrypt") == 0) {
        charsA = key;
        charsB = LETTERS;
    }

    size_t messageLen = strlen(message);
    for (size_t i = 0; i < messageLen; i++) {
        char symbol = message[i];
        if (toupper((unsigned char)symbol) == symbol && strchr(charsA, symbol) != NULL) {
            size_t symIndex = strchr(charsA, symbol) - charsA;
            translated[i] = (symbol == toupper((unsigned char)symbol)) ? toupper((unsigned char)charsB[symIndex]) : tolower((unsigned char)charsB[symIndex]);
        } else {
            translated[i] = symbol;
        }
    }

    translated[messageLen] = '\0';
    return translated;
}

char* getRandomKey() {
    char *key = (char*)malloc(27);
    if (key == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    strcpy(key, LETTERS);
    shuffleKey(key);
    return key;
}

void shuffleKey(char *key) {
    srand((unsigned int)time(NULL));
    size_t keyLen = strlen(key);

    for (size_t i = keyLen - 1; i > 0; i--) {
        size_t j = rand() % (i + 1);
        char temp = key[i];
        key[i] = key[j];
        key[j] = temp;
    }
}