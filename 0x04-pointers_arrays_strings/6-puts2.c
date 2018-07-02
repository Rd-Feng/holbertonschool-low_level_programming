#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string
 */
void puts2(char *str)
{
	int last_index;
	int i;

	last_index = 0;
	while (str[++last_index] != '\0')
		;
	for (i = 0; i < last_index; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
