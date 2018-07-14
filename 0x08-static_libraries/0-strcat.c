#include "holberton.h"

/**
 * _strcat - concatenates second string to first string
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *head = dest;

	while (*head != '\0')
		head++;
	while (*src != '\0')
		*(head++) = *(src++);
	*head = '\0';

	return (dest);
}
