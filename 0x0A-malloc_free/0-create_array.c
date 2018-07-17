#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars
 * @size: size of array
 * @c: char to initialize the array with
 *
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(char));
	unsigned int i = 0;
	if (ptr)
	{
		while (i < size)
			*(ptr + i++) = c;
	}
	return (ptr);
}
