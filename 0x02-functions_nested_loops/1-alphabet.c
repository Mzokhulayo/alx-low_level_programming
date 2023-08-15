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

void print_alphabet(void);

int main(void) 
{
print_alphabet();
return (0);
}
