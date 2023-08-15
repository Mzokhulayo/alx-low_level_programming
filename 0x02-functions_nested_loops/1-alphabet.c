#include <stdio.h>

void print_alphabet()
{
char 1st_letter = 'a';
while (1st_letter <='z') {
	_putChar(1st_letter);
	1st_letter ++;
	}
	_putChar('\n');
  }

int main(void) 
{
print_alphabet();
return (0);
}
