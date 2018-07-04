#include "holberton.h"
#include <stdio.h>

/**
 * isDigit - check if character is a digit
 * @c: char to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - convert a string to integer
 * @s: string
 *
 * Return: integer in string, 0 if no integer found
 */
int _atoi(char *s)
{
	int res;
	int num_digit;
	int is_positive;
	int i, j, head;
	int exp;

	res = 0;
	is_positive = 1;
	num_digit = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			is_positive = !is_positive;
		if (isDigit(s[i]))
		{
			head = i;
			for (j = head; isDigit(s[j]); j++)
			{
				num_digit++;
			}
			break;
		}
	}
	exp = 1;
	for (i = head + num_digit - 1; i >= head; i--)
	{
		res += (s[i] - '0') * exp;
		if (i != head)
			exp *= 10;
	}
	return (is_positive ? res : -res);
}
