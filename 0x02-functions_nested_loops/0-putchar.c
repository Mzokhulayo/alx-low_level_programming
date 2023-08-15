#include <stdio.h>

/**
 * _putChar - Prints "_putchar" followed by a new line.
 *
 * Description: This function prints the string "_putchar" 
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int _putChar(void)
{
printf("_putchar\n");
return (0);
}

/**
 * main - Entry point of the program.
 *
 * Description: This function calls the _putchar function to print "_putChar".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
_putChar();
return (0);
}
