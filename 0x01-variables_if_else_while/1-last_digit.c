#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and prints information
 * about the last digit of the generated number.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(0));
    n = rand();

    printf("Last digit of %d is ", n);

    lastDigit = n % 10;

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5\n", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("%d and is 0\n", lastDigit);
    }
    else
    {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

    return (0);
}
