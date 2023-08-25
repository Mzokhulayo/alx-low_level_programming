#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0;
int j;

while (*(s + i) != '\0')
{
for (j = 0; j <= 51; j++)
{
if (*(s + i) == a[j])
{
*(s + i) = rot[j];
break;
}
}
i++;
}
return (s);
}
