#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 * @c: ASCII encoding of the character being checked
 *
 * Return: 1 if char is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
