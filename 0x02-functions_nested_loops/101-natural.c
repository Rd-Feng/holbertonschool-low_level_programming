#include <stdio.h>

/**
 * main - prints sum of multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i * 3 < 1024; i++)
	{
		if (i * 3 % 5 != 0)
		{
			sum += i * 3;
		}
	}
	for (i = 0; i * 5 < 1024; i++)
	{
		sum += i * 5;
	}
	printf("%d\n", sum);
	return (0);
}
