#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers starting 1, 2
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long n, m, tmp;
	int i;

	n = 1;
	m = 2;
	printf("%lu, ", n);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", m);
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
			tmp = n + m;
			n = m;
			m = tmp;
		}
	}
	return (0);
}
