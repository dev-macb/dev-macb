#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encodeBase16(char *input, char *output) {
    const char hexChars[] = "0123456789ABCDEF";
    size_t inputLen = strlen(input);

    for (size_t i = 0, j = 0; i < inputLen; ++i, j += 2) {
        output[j] = hexChars[(input[i] >> 4) & 0xF];
        output[j + 1] = hexChars[input[i] & 0xF];
    }
    output[inputLen * 2] = '\0';
}

void decodeBase16(char *input, char *output) {
    size_t inputLen = strlen(input);

    for (size_t i = 0, j = 0; i < inputLen; i += 2, ++j) {
        char hex[3];
        hex[0] = input[i];
        hex[1] = input[i + 1];
        hex[2] = '\0';

        output[j] = strtol(hex, NULL, 16);
    }
    output[inputLen / 2] = '\0';
}

int main() {
    char input[256];
    printf("-> ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove newline character

    char base16encoded[2 * strlen(input) + 1];
    encodeBase16(input, base16encoded);

    printf("%s\n", base16encoded);

    char base16decoded[strlen(input) + 1];
    decodeBase16(base16encoded, base16decoded);

    printf("%s\n", base16decoded);

    return 0;
}