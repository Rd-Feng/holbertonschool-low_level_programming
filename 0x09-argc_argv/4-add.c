#include <stdlib.h>
#include <stdio.h>

/**
 * all_digits - check if string s only contains digits
 * @s: string
 *
 * Return: 0 if true, 1 otherwise
 */
int all_digits(char *s)
{
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - add all numbers
 * @argc: number of arguments
 * @argv: numbers
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!all_digits(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
