#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to start of the memory area
 * @b: data to fill the memory area
 * @n: number of bytes to fill
 *
 * Return: pointer to start of the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
