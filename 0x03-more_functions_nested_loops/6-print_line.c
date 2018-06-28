#include "holberton.h"

/**
 * print_line - prints a straight line with _
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n--)
		_putchar('_');
	_putchar('\n');
}
