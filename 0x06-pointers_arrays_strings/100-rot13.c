#include "myHeader.h"
#include <stdio.h>

/**
 * replace_rot13 - Replaces a character with its ROT13 counterpart.
 * @c: The character to be replaced.
 *
 * Return: The ROT13 version of the character, or the original
 * character if not in the lookup.
 */
char replace_rot13(char c)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int j;

for (j = 0; j <= 51; j++)
{
if (c == a[j])
{
return (rot[j]);
}
}
return (c);
}

/**
 * rot13 - Change letters to ROT13.
 * @s: The string to be encoded.
 *
 * Return: String with all letters in ROT13.
 */
char *rot13(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = replace_rot13(s[i]);
}
i++;
}
return (s);
}

