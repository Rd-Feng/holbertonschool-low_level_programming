#include "holberton.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: 0 on success
 */
int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
