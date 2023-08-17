#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int n)
{
int x;
int y;

if (n <= 0)
{
_putchar('\n');
}
else
{

for (x = 0; x < n; x++)
{
for (y = 0; y < n; y++)
{
_putchar(35);

_putchar('\n');
}
	}
}
}
