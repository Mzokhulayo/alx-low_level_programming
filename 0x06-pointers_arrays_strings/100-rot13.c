#include "myHeader.h"
#include <stdio.h>

char *rot13(char *s) {
    char *start = s;
    char letter;

    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            letter = (*s <= 'Z') ? 'A' : 'a';
            *s = ((*s - letter + 13) % 26) + letter;
        }
        s++;
    }

    return start;
}

