#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: pointer to encrypted string
 */
char *rot13(char *s)
{
	char *ptr;
	int i;
	char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		    'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		    'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
		    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char r[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		    'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		    'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		    'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
		    'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	for (ptr = s; *ptr != '\0'; ptr++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*ptr == c[i])
			{
				*ptr = r[i];
				break;
			}
		}
	}

	return (s);
}
