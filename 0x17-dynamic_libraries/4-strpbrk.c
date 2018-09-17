#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in string accept
 * @s: string
 * @accept: accept string
 *
 * Return: pointer to first byte in s that is in accept string
 * NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (is_in_set(*s, accept))
			return (s);
		s++;
	}
	return (0);
}
