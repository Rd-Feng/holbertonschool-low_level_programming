#include <stdio.h>

/**
 * main - print sum of even fibonacci numbers starting 1, 2 under 4m
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long n, m, tmp;
	unsigned long sum;

	n = 1;
	m = 2;
	sum = 0;
	while (m < 4000000)
	{
		if (m % 2 == 0)
		{
			sum += m;
		}
		tmp = n + m;
		n = m;
		m = tmp;
	}
	printf("%lu\n", sum);
	return (0);
}
