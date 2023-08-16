#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * This function prints the lowercase alphabet characters from 'a' to 'z',
 * followed by a newline character ('\n').
 *
 * Return: void
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');
}

