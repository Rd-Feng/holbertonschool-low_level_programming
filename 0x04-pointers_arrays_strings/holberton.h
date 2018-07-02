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
 * reset_to_98 - updates the value n points to to 98
 * @n: pointer that points to the int to be reset
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps values that a and b are pointing to
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string s
 */
int _strlen(char *s);

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s);

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str);

#endif /* _HOLBERTON_H_ */
