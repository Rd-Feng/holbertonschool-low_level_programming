#include <stdio.h>

/**
 * main - Print alphabet in lowercase then in uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* ASCII encoding of digits */
	int letter;

	for (letter = 48; letter <= 57; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
