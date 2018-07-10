#include "holberton.h"
#define NULL 0

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
	return (NULL);
}
