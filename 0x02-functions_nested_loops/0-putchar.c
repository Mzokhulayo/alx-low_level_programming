#include <stdio.h>

/**
 * _putChar - Prints a null-terminated string followed by a newline character
 * to the standard output.
 * @str: Pointer to the null-terminated string to be printed.
 * Return: Always returns 0 to indicate successful execution.
 */
int _putChar(const char *str)
{
printf("%s\n", str);
return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0 upon successful completion.
 */
int main(void)
{
const char *value = "_putchar"
_putChar(value);
return (0);
}
