#include "holberton.h"

/**
 * _strncat - concatenates two up to n bytes from src to dest
 * @dest: dest string
 * @src: source string
 * @n: number of byte(s) to concatenate
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int offset = 0;
	char *head = dest;

	while (*head != '\0')
		head++;
	while (*(src + offset) != '\0' && offset < n)
		*(head++) = *(src + (offset++));
	*head = '\0';

	return (dest);
}
