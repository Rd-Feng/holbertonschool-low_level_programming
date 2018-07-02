#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len++] != '\0');
	len--;
	while (len > 0)
		_putchar(s[--len]);
	_putchar('\n');
}
