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
char letter;

while (*s)
{
if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
{
letter = (*s <= 'Z') ? 'A' : 'a';
*s = ((*s - letter + 13) % 26) + letter;
}
s++;
}

return (start);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void) {
char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
char *p;

p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
return (0);
}

