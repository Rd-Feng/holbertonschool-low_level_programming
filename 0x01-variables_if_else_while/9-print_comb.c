#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* ASCII encoding of char */
	int n;
	/* lower and upper bounds for digit in ASCII table */
	int lower, upper;

	lower = 48;
	upper = 57;
	for (n = lower; n <= upper; n++)
	{
		putchar(n);
		if (n == upper)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
