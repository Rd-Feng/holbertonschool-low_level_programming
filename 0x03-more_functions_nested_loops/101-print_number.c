#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int digit;
	int div;
	int i;
	int print_zero;

	print_zero = 0;
	div = 1000000000;
	if (n < 0)
		_putchar('-');
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 10; i++)
	{
		digit = n / div;
		if (digit < 0)
			digit *= -1;
		if (digit != 0)
		{
			_putchar('0' + digit);
			print_zero = 1;
		}
		else
		{
			if (print_zero)
				_putchar('0');
		}
		n %= div;
		div /= 10;
	}
}
