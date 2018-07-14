#include "holberton.h"

/**
 * _isalpha - Checks if a char is an alphabetic character
 * @c: ASCII encodin of char being checked
 *
 * Return: 1 if is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
