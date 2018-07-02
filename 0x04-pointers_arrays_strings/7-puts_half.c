#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[++len] != '\0')
		;
	for (i = 0; i < (len / 2); i++)
		_putchar(str[len - len / 2 + i]);
	_putchar('\n');
}
