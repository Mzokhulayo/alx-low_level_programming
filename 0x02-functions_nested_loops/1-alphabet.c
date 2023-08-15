#include <stdio.h>

void print_alphabet()
{
char first_letter = 'a';
while (first_letter <='z') {
	_putChar(first_letter);
	first_letter ++;
	}
	_putChar('\n');
  }

int main(void) 
{
print_alphabet();
return (0);
}
