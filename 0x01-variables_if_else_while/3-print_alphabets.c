#include <stdio.h>

/**
 * main - Print alphabet in lowercase then in uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		/* jump to uppercase when finishing lowercase */
		if (letter == 'z')
		{
			letter = 'A';
			break;
		}
		letter++;
	}
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
