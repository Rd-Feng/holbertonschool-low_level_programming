#include "holberton.h"

/**
 * is_in_set - check if a character is in a given set
 * @c: candidate
 * @s: set
 *
 * Return: 1 if true, 0 otherwise
 */
int is_in_set(char c, char *s)
{
	while (*s)
		if (c == *(s++))
			return (1);
	return (0);
}

/**
 * _strspn - calculates the length of the initial segment of s
 * which consists entirely of bytes in a given set
 * @s: string
 * @accept: set of accepted characters
 *
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;

	while (*s && is_in_set(*s, accept))
	{
		res++;
		s++;
	}
	return (res);
}
