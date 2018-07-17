#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a new allocated block of memory
 * @str: string
 *
 * Return: pointer to duplicated string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int len = 0; /* index of terminating null byte */
	char *ptr = NULL;

	if (!str)
		return (NULL);
	while (*str)
	{
		len++;
		str++;
	}
	if ((ptr = (char *) malloc(sizeof(char) * (len + 1))))
	{
		while (len >= 0)
			*(ptr + len--) = *(str--);
	}
	return (ptr);
}
