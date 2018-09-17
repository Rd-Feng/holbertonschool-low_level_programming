#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	char c;
	int len;

	len = 0;
	for (c = *s; c != '\0'; c = *(++s))
	{
		len++;
	}
	return (len);
}
