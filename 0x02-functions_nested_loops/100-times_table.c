#include "holberton.h"

/**
 * print_times_table - prints the n times table starting 0
 * @n: n
 *
 */
void print_times_table(int n)
{
	int d1, d2, d3;
	int num;
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (num < 10)
			{
				_putchar('0' + num);
			}
			else if (num < 100)
			{
				d1 = num / 10;
				d2 = num % 10;
				_putchar('0' + d1);
				_putchar('0' + d2);
			}
			else
			{
				d1 = num / 100;
				d2 = (num % 100) / 10;
				d3 = num % 10;
				_putchar('0' + d1);
				_putchar('0' + d2);
				_putchar('0' + d3);
			}
			if (j != n)
			{
				_putchar(',');
				if ((num + i) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((num + i) < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
