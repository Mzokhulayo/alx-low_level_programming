#include <stdio.h>

/**
 * _putchar - Prints a character to stdout.
 * @c: The character to be printed.
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
return (putchar(c));
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{

_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}