#include "holberton.h"

/**
 * print_triangle - print triangle with base length of size
 * @size: base length
 */
void print_triangle(int size)
{
	int i, j;
	/* line index */
	int L;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (L = 0; size > L; L++)
	{
		for (i = 0; i < size - L - 1; i++)
			_putchar(' ');
		for (j = 0; j < L + 1; j++)
			_putchar('#');
		_putchar('\n');
	}
}
