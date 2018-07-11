#include "holberton.h"

/**
 * get_tail - get the terminating null byte of a string
 * @s: string
 *
 * Return: index of the null byte
 */
int get_tail(char *s)
{
	if (*s == '\0')
		return (-1);
	else
		return (1 + get_tail(s + 1));
}

/**
 * helper - check palindrome
 * @h: index of head byte
 * @t: index of tail byte
 * @s: string
 *
 * Return: 1 if true, 0 otherwise
 */
int helper(int h, int t, char *s)
{
	if (h > t)
	{
		return (1);
	}
	else
	{
		if (*(s + h) != *(s + t))
			return (0);
		else
			return (helper(h + 1, t - 1, s));
	}
}

/**
 * is_palindrome - check if string s is a palindrome
 * @s: string
 *
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (helper(0, get_tail(s), s));
}
