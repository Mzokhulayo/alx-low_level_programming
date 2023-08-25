#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program calculates and prints the first 98 Fibonacci numbers.
 * The numbers are separated by commas and spaces, and are printed
 * followed by a newline.
 *
 * Return: Always 0 (Success).
 */

int main() {
unsigned int a = 1;
unsigned int b = 2;

printf("1, 2, ");

for (unsigned int i = 3; i <= 98; ++i) {
unsigned int c = a + b;
printf("%u", c);

if (i < 98) {
printf(", ");
}

a = b;
b = c;
}

printf("\n");

return 0;
}


