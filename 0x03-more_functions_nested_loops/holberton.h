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

/**
 * more_numbers - prints from 0 to 14
 */
void more_numbers(void);

/**
 * print_line - prints a straight line with _
 * @n: number of times _ should be printed
 */
void print_line(int n);

/**
 * print_diagonal - prints a diagonal line with '\'
 * @n: number of times '\' should be printed
 */
void print_diagonal(int n);

/**
 * print_square - print a size x size square
 * @size: size of the square
 */
void print_square(int size);

/**
 * print_triangle - print triangle with base length of size
 * @size: base length
 */
void print_triangle(int size);

/**
 * print_number - Prints an interger
 * @n: the integer to print
 */
void print_number(int n);

#endif /* _HOLBERTON_H_ */
