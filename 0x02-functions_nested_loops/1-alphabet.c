#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the English alphabet in lowercase.
 *
 * This function prints the 26 lowercase letters of the English alphabet
 * in consecutive order to the standard output, separated by spaces.
 * The output is displayed on a single line.
 *
 * Usage:
 *   print_alphabet();
 */
void print_alphabet(void)
{
char first_letter = 'a';
while (first_letter <= 'z')
{
_putChar(first_letter);
first_letter++;
}
_putChar('\n');
}

/**
 * main - Entry point of the program.
 *
 * This function calls the `print_alphabet` function to print the
 * English alphabet
 * in lowercase and then returns 0 to indicate successful execution.
 *
 * Return: Always returns 0 upon successful completion.
 */
int main(void)
{
print_alphabet();
return (0);
}
