#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int isLeadZero = 1;
	int i;
	char c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		c = (n >> i & 1) ? '1' : '0';
		if (!(c == '0' && isLeadZero))
		{
			_putchar(c);
			isLeadZero = 0;
		}
	}
}
