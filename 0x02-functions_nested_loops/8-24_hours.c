#include "holberton.h"

/**
 * jack_bauer - prints every minute of a day
 */
void jack_bauer(void)
{
	int h, m;
	int i, j; /* hold the two digits in a number */

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			/* calculate and print hour */
			i = h / 10;
			j = h % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			/* calculate and print minute */
			i = m / 10;
			j = m % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar('\n');
		}
	}
}
