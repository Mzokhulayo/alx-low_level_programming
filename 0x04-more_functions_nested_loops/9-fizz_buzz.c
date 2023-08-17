#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the numbers from 1 to 100,
 * replacing multiples of 3 with "Fizz",
 * multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("FIZZBUZZ ");
}
else if (i % 3 == 0)
{
printf("FIZZ ");
}
else if (i % 5 == 0)
{
printf("BUZZ ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
