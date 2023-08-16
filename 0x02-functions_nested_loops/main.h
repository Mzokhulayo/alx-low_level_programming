#ifndef MAIN_H
#define MAIN_H

/**
 * Prints a null-terminated string followed by a newline character to the standard output.
 *
 * @param str Pointer to the null-terminated string to be printed.
 * @return Always returns 0 to indicate successful execution.
 */

int _putChar(const char *str);

/**
 * Prints the English alphabet in lowercase.
 *
 * This function prints the 26 lowercase letters of the English alphabet
 * in consecutive order to the standard output, separated by spaces.
 * The output is displayed on a single line.
 *
 * Usage:
 *   print_alphabet();
 */
void print_alphabet(void);

#endif /* MAIN_H */