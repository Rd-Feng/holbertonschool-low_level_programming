#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: pointer to resulting string
 */
char *leet(char *s)
{
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int num_in_set = 10;
	char *ptr;
	int i;

	for (ptr = s; *ptr != '\0'; ptr++)
	{
		for (i = 0; i < num_in_set; i++)
		{
			if (*ptr == c[i])
			{
				*ptr = l[i];
				break;
			}
		}
	}
	return (s);
}
