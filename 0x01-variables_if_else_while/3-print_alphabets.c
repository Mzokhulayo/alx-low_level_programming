#include <stdio.h>

/**
 * main - Prints the alphabetic in both lower/upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}

putchar('\n');

return (0);
}
