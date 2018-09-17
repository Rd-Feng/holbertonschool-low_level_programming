#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int less than, equal to, or greater than 0 if s1 is, respectively
 * less than, equal to, or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int res = *s1 - *s2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		res = *(s1++) - *(s2++);
		if (res == 0)
			continue;
		else
			break;
	}

	return (res);
}
