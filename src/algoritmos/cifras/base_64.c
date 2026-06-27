#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *encodeBase64(const char *text) {
    const char base64chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    int len = strlen(text);
    int padding = (3 - len % 3) % 3;
    int resultLen = 4 * ((len + padding) / 3);

    char *result = (char *)malloc(resultLen + 1);  // +1 for the null terminator
    if (result == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    int i = 0, j = 0;
    while (i < len) {
        if (i > 0 && ((i / 3 * 4) % 76) == 0) {
            result[j++] = '\r';
            result[j++] = '\n';
        }

        int n = (text[i] << 16) + (text[i + 1] << 8) + text[i + 2];

        result[j++] = base64chars[(n >> 18) & 63];
        result[j++] = base64chars[(n >> 12) & 63];
        result[j++] = base64chars[(n >> 6) & 63];
        result[j++] = base64chars[n & 63];

        i += 3;
    }

    // Add padding
    for (int k = 0; k < padding; k++) {
        result[resultLen - k - 1] = '=';
    }

    result[resultLen] = '\0';
    return result;
}

char *decodeBase64(const char *text) {
    const char base64chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    int len = strlen(text);
    char *result = (char *)malloc(len);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    int i = 0, j = 0;
    while (i < len) {
        int n = (base64chars[(unsigned char)text[i]] << 18) +
                (base64chars[(unsigned char)text[i + 1]] << 12) +
                (base64chars[(unsigned char)text[i + 2]] << 6) +
                base64chars[(unsigned char)text[i + 3]];

        result[j++] = (n >> 16) & 255;
        result[j++] = (n >> 8) & 255;
        result[j++] = n & 255;

        i += 4;
    }

    // Remove padding
    while (j > 0 && result[j - 1] == '=') {
        j--;
    }

    result[j] = '\0';
    return result;
}

int main() {
    const char *input = "WELCOME to base64 encoding";
    char *encoded = encodeBase64(input);
    printf("%s\n", encoded);

    char *decoded = decodeBase64(encoded);
    printf("%s\n", decoded);

    free(encoded);
    free(decoded);

    return 0;
}