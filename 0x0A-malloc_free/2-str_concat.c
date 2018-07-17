#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and put result in newly
 * allocated space in memory
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0; /* exclude null byte */
	char *ptr = NULL;
	unsigned int i;

	if (s1)
		while (*(s1 + len1))
			len1++;
	if (s2)
		while (*(s2 + len2))
			len2++;
	ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr)
	{
		if (s1)
			for (i = 0; i < len1; i++)
				*(ptr + i) = *(s1 + i);
		if (s2)
			for (i = len1; i < len1 + len2; i++)
				*(ptr + i) = *(s2 + i - len1);
		*(ptr + i) = '\0';
	}
	return (ptr);
}
