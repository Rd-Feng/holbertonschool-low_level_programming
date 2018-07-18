#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of this program
 * @ac: argument count
 * @av: arguments
 *
 * Return: pointer to resulting string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *res = NULL;
	int len = 0, argLen, i;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* len - total number of chars in arguments, excluding null bytes */
	for (i = 0; i < ac; i++)
	{
		argLen = 0;
		while (av[i][argLen] != '\0')
			argLen++;
		len += argLen;
	}
	/* characters of arguments + null byte + 1 new line each arg */
	res = (char *) malloc(sizeof(char) * (len + ac + 1));
	if (res)
	{
		len = 0;
		for (i = 0; i < ac; i++)
		{
			for (argLen = 0; av[i][argLen] != '\0'; argLen++)
			{
				*(res + len++) = av[i][argLen];
			}
			*(res + len++) = '\n';
		}
		*(res + len) = '\0';
	}
	return (res);
}
