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
int tens;
int ones;

for (tens = 0; tens <= 9; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(tens + '0');
putchar(ones + '0');

if (tens < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
