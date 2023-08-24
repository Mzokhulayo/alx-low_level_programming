#include <stdio.h>

char *rot13(char *input) {
    char *output = input;

    for (; *input != '\0'; input++) {
        if ((*input >= 'A' && *input <= 'Z') || (*input >= 'a' && *input <= 'z')) {
            if (*input >= 'A' && *input <= 'Z') {
                *input = ((*input - 'A' + 13) % 26) + 'A';
            } else if (*input >= 'a' && *input <= 'z') {
                *input = ((*input - 'a' + 13) % 26) + 'a';
            }
        }
    }

    return output;
}

int main() {
    char text[] = "Hello, World!";
    printf("Original: %s\n", text);

    char *encoded = rot13(text);
    printf("Encoded:  %s\n", encoded);

    return 0;
}

