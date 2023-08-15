#include <stdio.h>

void print_alphabet()
{
char first_letter = 'a';
while (first_letter <='z') {
	putchar(first_letter);
	first_letter ++;
	}
	putchar('\n');
  }

int main(void) 
{
print_alphabet();
return (0);
}
