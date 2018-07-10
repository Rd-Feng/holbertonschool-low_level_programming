#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to where memory is copied
 * @src: pointer to where memory is copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*(dest + n) = *(src + n);
	return (dest);
}
