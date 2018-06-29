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

	/* eliminate  factor 2 */
	/* if this loop reduces num to 1, num only has factor 2 */
	while (!(num % 2))
	{
		num /= 2;
	}
	if (num == 1)
	{
		printf("%d\n", 2);
		return (0);
	}
	/* num has factors other than two */
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
