#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 != 0) && (num % 5 != 0))
		{
			printf("%d", num);
		}
		else
		{
			if (num % 3 == 0)
				printf("Fizz");
			if (num % 5 == 0)
				printf("Buzz");
		}
		if (num == 100)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
