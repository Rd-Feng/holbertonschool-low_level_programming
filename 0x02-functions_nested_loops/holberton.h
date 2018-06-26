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

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n);

/**
 * _abs - Computes absolute value of an integer
 * @int: original integer
 * Return: 0 on success
 */
int _abs(int);

/**
 * print_last_digit - Prints the last digit of a number
 * @int: number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of a day
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table starting 0
 *
 * Return: 0 on success
 */
void times_table(void);

/**
 * add - adds two integers
 * @int: first integer
 * @int: second integer
 *
 * Return: result of addition
 */
int add(int, int);
#endif /* _HOLBERTON_H_ */
