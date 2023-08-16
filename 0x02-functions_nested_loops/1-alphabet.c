#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the English alphabet in lowercase.
 *
 * This function prints the 26 lowercase letters of the English alphabet
 * in consecutive order to the standard output, separated by spaces.
 * The output is displayed on a single line.
 *
 * Usage:
 *   print_alphabet();
 */
void print_alphabet(void)
{
char first_letter = 'a';
char letter_string[2];

while (first_letter <= 'z')
{
letter_string[0] = first_letter;
letter_string[1] = '\0';
_putChar(letter_string);
first_letter++;
}
_putChar("\n");
}

