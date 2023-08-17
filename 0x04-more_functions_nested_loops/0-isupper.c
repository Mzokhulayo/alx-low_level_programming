#include <stdio.h>
#include "main.h"

/*_isupper - Checks if a given character is uppercase
* @c : The character we want to check
*
* Return: 1 if the c is uppercase, 0 if not
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

