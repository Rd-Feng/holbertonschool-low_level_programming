#include <stdio.h>

/**
 * main - Print alphabet in lowercase then in uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* first and second digit */
	int i, j;

	/* i = j = 0 */
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
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
