#include "holberton.h"

/**
 * times_table - prints the 9 times table starting 0
 *
 * Return: 0 on success
 */
void times_table(void)
{
	int i, j; /* array index */
	int d1, d2; /* hold digits in a number */
	int num; /* number to be printed */

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			if (num < 10)
			{
				_putchar('0' + num);
			}
			else
			{
				d1 = num / 10;
				d2 = num % 10;
				_putchar('0' + d1);
				_putchar('0' + d2);
			}
			if (j != 9)
			{
				_putchar(',');
				/* check next number printed */
				if ((num + i) < 10)
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
