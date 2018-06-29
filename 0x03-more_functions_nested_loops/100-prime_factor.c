#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long num;
	int i, highest;

	num = 612852475143;
	i = 3;
	highest = i;

	while (!(num % 2))
	{
		num /= 2;
	}
	if (num == 1)
	{
		printf("%d\n", 2);
		return (0);
	}

	while (1)
	{
		while (num % i == 0)
		{
			num /= i;
			highest = i;
		}
		if (num == 1)
			break;
		i += 2;
	}
	printf("%d\n", highest);
	return (0);
}
