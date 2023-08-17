#ifndef MAIN_H
#define MAIN_H

/* _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, -1 is returned.
 */
int _putchar(char c);

/* _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c);

/* _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c);

/* mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b);

/* print_numbers - Prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void);

/* print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void);

/* more_numbers - Prints the numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void);

/* print_line - Prints a line of n length using '_'
 * @n: The length of the line
 *
 * Return: void
 */
void print_line(int n);

/* print_diagonal - Draws a diagonal line of n length
 * @n: The length of the diagonal
 *
 * Return: void
 */
void print_diagonal(int n);

/* print_square - Prints a square of a given size
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size);

#endif /* MAIN_H */