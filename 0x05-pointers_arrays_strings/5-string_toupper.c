#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
	char *ptr;

	for (ptr = s; *ptr != '\0'; ptr++)
	{
		if (*ptr <= 'z' && *ptr >= 'a')
			*ptr -= 32;
	}

	return (s);
}
