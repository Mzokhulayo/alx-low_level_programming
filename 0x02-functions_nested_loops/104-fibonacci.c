#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program calculates and prints the first 98 Fibonacci numbers.
 * The numbers are separated by commas and spaces, and are printed
 * followed by a newline.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
unsigned long int i, j, k, temp;
j = 1;
k = 2;
printf("%lu, %lu, ", j, k);
for (i = 3; i <= 98; i++)
{
temp = j + k;
if (i < 98)
printf("%lu, ", temp);
else
printf("%lu\n", temp);
j = k;
k = temp;
}
return (0);
}

