#include "holberton.h"
/**
 * _abs - get absolute value of int n
 * @n: int
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	return (n >= 0 ? n : -n);
}

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	if (n > -10 && n < 10)
	{
		if (n < 0)
		{
			_putchar('-');
		}
		_putchar(_abs(n) + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(_abs(n % 10) + '0');
	}
}
