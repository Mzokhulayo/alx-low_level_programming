#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a formatted way.
 * @b: The input buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", (unsigned char)b[i + j]);
else
printf("  ");

if (j % 2 != 0)
printf(" ");
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (c >= 32 && c <= 126)
putchar(c);
else
putchar('.');
}
else
putchar(' ');
}

printf("\n");
}
}

