#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int side_lenght)
{
int row;
int column;

if (side_lenght <= 0)
{
_putchar('\n');
}
else
{

for (row = 0; row < side_lenght; row++)
{
for (column = 0; column < side_lenght; column++)
{
_putchar('#');

}
_putchar('\n');
}
}
}
