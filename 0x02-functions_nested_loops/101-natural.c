#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program calculates the sum of all the multiples of 3 or 5 below 1024
 * and prints the result.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int i, z = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);
}
