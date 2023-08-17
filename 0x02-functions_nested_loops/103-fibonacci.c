#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program calculates and prints the sum of even-valued Fibonacci numbers
 * that do not exceed 4 million. It starts with 1 and 2, and each subsequent
 * number is the sum of the previous two numbers in the Fibonacci sequence.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;
while (k + j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("%ld\n", sum);
return (0);
}
