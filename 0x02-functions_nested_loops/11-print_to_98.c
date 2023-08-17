#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98.
 * @n: The starting number.
 *
 * This function prints a sequence of numbers starting from n and
 * counting towards 98. If n is greater than or equal to 98, it counts
 * down to 98.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
