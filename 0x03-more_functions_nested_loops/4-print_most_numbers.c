#include "holberton.h"

/**
 * print_most_numbers - prints from 0  to 9 but not 2 nor 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
