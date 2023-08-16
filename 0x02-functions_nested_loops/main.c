#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * This function calls the _putChar function to print "_putchar" and calls the
 * `print_alphabet` function to print the
 * English alphabet in lowercase and then returns 0 to indicate successful
 * execution.
 *
 * Return: Always returns 0 upon successful completion.
 */
int main(void)
{
const char *value = "_putchar";
_putChar(value);
print_alphabet();
return (0);
}