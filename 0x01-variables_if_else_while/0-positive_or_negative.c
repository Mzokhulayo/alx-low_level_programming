#include <stdlib.h>
#include <time.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and prints whether
 * it is positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */
 
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	
printf("%d\n", n);

if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
