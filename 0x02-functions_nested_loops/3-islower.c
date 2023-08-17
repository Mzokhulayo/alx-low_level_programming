#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @a: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int a)
{
if (a >= 97 && a <= 122)
{
return (1);
}
return (0);
}
