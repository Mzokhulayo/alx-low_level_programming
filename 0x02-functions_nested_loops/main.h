#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c);

/**
 * print_alphabet - Prints the lowercase alphabet characters
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints the lowercase alphabet characters ten times
 */
void print_alphabet_x10(void);

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 if n is positive, -1 if n is negative, 0 if n is zero
 */
int print_sign(int n);

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value for
 * Return: The absolute value of n
 */
int _abs(int);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 * Return: The last digit of n
 */
int print_last_digit(int);

/**
 * jack_bauer - Prints a 24-hour time table in the format "HH:MM"
 */
void jack_bauer(void);

/**
 * times_table - Prints a multiplication table
 */
void times_table(void);

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */
int add(int, int);

/**
 * print_to_98 - Prints a sequence of numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n);

/**
 * print_times_table - Prints the multiplication table for a given integer n
 * @n: The integer for which the multiplication table is to be printed
 */
void print_times_table(int n);

#endif /* MAIN_H */
