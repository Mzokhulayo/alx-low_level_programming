#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 *
 * This program finds and prints the largest prime factor of a given number.
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
unsigned long x = 612852475143;
unsigned long max_prime_factor = 2;
unsigned long i;
while (x % 2 == 0)
{
x /= 2;
}

for (i = 3; i <= sqrt(x); i += 2)
{
while (x % i == 0)
{
max_prime_factor = i;
x /= i;
}
}
if (x > 2)
{
max_prime_factor = x;
}
printf("%lu\n", max_prime_factor);
return (0);
}

