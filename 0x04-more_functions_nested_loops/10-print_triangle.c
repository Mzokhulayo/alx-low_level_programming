#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int row, col;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (col = 1; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

