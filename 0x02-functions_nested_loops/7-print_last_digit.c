#include "holberton.h"
#include "6-abs.c"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int tmp;

	tmp = n % 10;
	if (tmp < 0)
	{
		tmp = _abs(n);
	}
	_putchar('0' + tmp);
	return (tmp);
}
