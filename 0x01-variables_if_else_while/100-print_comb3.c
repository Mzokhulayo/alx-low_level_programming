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
int i = 0;
while (i < 100)
{
int j = i + 1;
while (j < 100)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(',');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');

if (i < 98)
{
putchar(',');
putchar(' ');
}

j++;

if (j % 10 == 0)
j += 10 - 1;
}
i++;

if (i % 10 == 0)
i += 10 - 1;
}

putchar('\n');

return (0);
}

