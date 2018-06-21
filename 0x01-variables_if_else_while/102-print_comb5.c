#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			int i, j;

			/* print first number */
			i = n / 10;
			j = n % 10;
			putchar(i + 48);
			putchar(j + 48);
			putchar(' ');
			/* print second number */
			i = m / 10;
			j = m % 10;
			putchar(i + 48);
			putchar(j + 48);

			if (n == 98 && m == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
