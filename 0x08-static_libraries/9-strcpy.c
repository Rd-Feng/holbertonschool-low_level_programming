#include "holberton.h"

/**
 * _strcpy - copies the string including terminating byte
 * @dest: return pointer
 * @src: original string
 * Return: dest, pointer to the new string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len++] != '\0')
		;
	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
