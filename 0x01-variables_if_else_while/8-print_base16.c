#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* ASCII encoding of char */
	int n;

	/* Print 0 - 9 */
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	/* Print a - f */
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
