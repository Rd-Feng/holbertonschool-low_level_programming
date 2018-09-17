#include "holberton.h"

/**
 * _strncpy - copy n bytes from src to dest
 * If length of src is less then n, write additional null bytes
 * to ensure total of n bytes are copied
 * @dest: pointer to dest buffer
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to dest buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
		*(dest + i++) = *(src++);
	while (i < n)
		*(dest + i++) = '\0';

	return (dest);
}
