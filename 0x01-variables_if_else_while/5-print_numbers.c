#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");

	return (0);
}
