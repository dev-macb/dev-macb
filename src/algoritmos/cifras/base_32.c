#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to encode a string to base32
void encodeBase32(char *input, char *output) {
    const char base32Chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567";
    size_t inputLen = strlen(input);

    for (size_t i = 0, j = 0; i < inputLen; j += 8) {
        int byte = 0;

        for (int k = 0; k < 8 && i < inputLen; ++k, ++i) {
            byte = (byte << 8) | input[i];
        }

        for (int k = 35; k >= 0; k -= 5) {
            output[j + (35 - k) / 8] = base32Chars[(byte >> k) & 0x1F];
        }
    }

    output[(inputLen * 8 + 4) / 5] = '\0';
}

// Function to decode a base32 string
void decodeBase32(char *input, char *output) {
    size_t inputLen = strlen(input);

    for (size_t i = 0, j = 0; i < inputLen; j += 5) {
        int byte = 0;

        for (int k = 0; k < 8 && i < inputLen; ++k, ++i) {
            byte = (byte << 5) | strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ234567", input[i]) - base32Chars;
        }

        for (int k = 24; k >= 0; k -= 8) {
            output[j + (24 - k) / 8] = (byte >> k) & 0xFF;
        }
    }

    output[(inputLen * 5 + 7) / 8] = '\0';
}

int main() {
    char input[256];
    printf("-> ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove newline character

    char base32encoded[8 * strlen(input) / 5 + 1];
    encodeBase32(input, base32encoded);

    printf("%s\n", base32encoded);

    char base32decoded[5 * strlen(input) / 8 + 1];
    decodeBase32(base32encoded, base32decoded);

    printf("%s\n", base32decoded);

    return 0;
}