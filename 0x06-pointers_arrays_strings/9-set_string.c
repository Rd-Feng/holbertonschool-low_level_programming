#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: address of targetd pointer
 * @to: destination char
 * Return: 0 on success
 */
void set_string(char **s, char *to)
{
	*s = to;
}
