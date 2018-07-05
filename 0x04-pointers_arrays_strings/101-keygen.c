#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - output random string that pass crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;
	int sum = 0;
	int target = 2772;

	srand(time(NULL));
	while (sum <= target)
	{
		c = rand() % 128;
		if ((sum + (int) c) <= target)
		{
			putchar(c);
			sum += (int) c;
		}
		if ((sum + (int) c) == target)
		{
			break;
		}
	}
	return (0);
}
