#include "myHeader.h"
#include <stdio.h>

/**
 * replace_rot13 - Replaces a character with its ROT13 counterpart.
 * @c: The character to be replaced.
 *
 * Return: The ROT13 version of the character, or the original character if not in the lookup.
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
