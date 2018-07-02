#include "holberton.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	do {
		_putchar(*(str++));
	} while (*str != '\0');
	_putchar('\n');
}
