#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of two digits.
 * Numbers are separated by ", " and are printed in ascending order.
 * Duplicates like 01, 02, ..., 09 are skipped.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i = 1;

while (i < 100)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');

if (i < 89)
{
putchar(',');
putchar(' ');
}

i++;


if (i % 10 == 0)
i += 10 - 1;
}

putchar('\n');

return (0);
}
