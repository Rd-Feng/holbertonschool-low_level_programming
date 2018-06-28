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
 * _isupper - checks for uppercase character
 * @c: character to
 *
 * Return: 1 when c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first int
 * @b: second int
 *
 * Return: result
 */
int mul(int a, int b);

/**
 * printf_numbers - prints from 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints from 0 to 9 but not 2 nor 4
 */
void print_most_numbers(void);

#endif /* _HOLBERTON_H_ */
