#include "holberton.h"

/**
 * more_numbers - prints from 0  to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
		{
			_putchar('0' + i);
		}
		else
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
	}
	_putchar('\n');
}
