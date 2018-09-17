#include "holberton.h"
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
