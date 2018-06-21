#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* first and second digit */
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			/*
			 * if i reaches 8
			 * check if j reaches 9
			 * in which case the all unique
			 * combinations have been considered
			 */
			if (i == 56)
			{
				if (j == 57)
				{
					putchar('\n');
				}
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
