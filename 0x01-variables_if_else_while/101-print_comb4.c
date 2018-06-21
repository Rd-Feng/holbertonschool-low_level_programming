#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* first second and third digit */
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				/*
				 * if the number is 789
				 * all unique
				 * combinations have been considered
				 *
				 */
				if (i == 55)
				{
					if (j == 56)
					{
						if (k == 57)
						{
							putchar('\n');
						}
					}
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
