#include "myHeader.h"
#include <stdio.h>

char *rot13(char *input) {
    char *output = input;

    for (; *input != '\0'; input++) {
        char original = *input;
        char offset = (original >= 'A' && original <= 'Z') ? 'A' : (original >= 'a' && original <= 'z') ? 'a' : 0;
        
        if (offset != 0) {
            char rotated = (original - offset + 13) % 26 + offset;
            *input = rotated;
        }
    }

    return output;
}

