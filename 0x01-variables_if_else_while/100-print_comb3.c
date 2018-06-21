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
			 * if number is 89
			 * then all unique
			 * combinations have been considered
			 */
			if (i == 56 && j == 57)
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
