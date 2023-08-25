#include "myHeader.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
char *start = s;
int i;

for (i = 0; s[i]; i++)
{
if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
char letter;

if (s[i] >= 'A' && s[i] <= 'Z')
letter = 'A';
else
letter = 'a';

s[i] = ((s[i] - letter + 13) % 26) + letter;
}
}

return (start);
}

