#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: 0 on success
 */
int print_alphabet(void);

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 * Return: 0 on success
 */
int print_alphabet_x10(void);

/**
 * _islower - Checks for lowercase character
 * @c: ASCII encoding of the character being checked
 *
 * Return: 1 if char is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - Checks if a char is an alphabetic character
 * @c: ASCII encodin of char being checked
 *
 * Return: 1 if is a letter, 0 otherwise
 */
int _isalpha(int c);

#endif /* _HOLBERTON_H_ */
