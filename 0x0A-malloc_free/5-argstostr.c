#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings and put result in newly
 * allocated space in memory. String 1 will be added a new line char,
 * followed by string 2, followed by a null byte
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	/* index of terminating null byte, number of chars excluding null */
	unsigned int len1 = 0, len2 = 0;
	char *ptr = NULL;
	unsigned int i;

	if (s1)
		while (*(s1 + len1))
			len1++;
	if (s2)
		while (*(s2 + len2))
			len2++;
	ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 2));
	if (ptr)
	{
		for (i = 0; i < len1; i++)
			*(ptr + i) = *(s1++);
		for (; i < len1 + len2; i++)
			*(ptr + i) = *(s2++);
		*(ptr + i) = '\n';
		*(ptr + i + 1) = '\0';
	}
	return (ptr);
}

/**
 * argstostr - concatenates all arguments of this program
 * @ac: argument count
 * @av: arguments
 *
 * Return: pointer to resulting string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *res = NULL, *tmp;

	if (ac == 0 || !av)
		return (NULL);
	/* initialize the res string */
	if (*av)
		res = str_concat(*av, "");
	if (res)
	{
		for (i = 1; i < ac; i++)
		{
			if (!*(av + i))
			{
				free(res);
				res = NULL;
				return (NULL);
			}
			tmp = str_concat(res, *(av + i));
			free(res);
			res = tmp;
			if (!tmp)
				return (NULL);
		}
	}
	return (res);
}
