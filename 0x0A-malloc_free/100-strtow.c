#include "holberton.h"
#include <stdlib.h>


/**
 * strtow - split string to words. words are separated by spaces
 * @str: string
 *
 * Return: 0 on success
 */
char **strtow(char *str)
{
	/* len: index of null byte */
	int i = 0, found = 0, len = 0, count = 0;
	int inWord = 0, error = 0;
	char **ptr = NULL;
	int endIndex, n;
	if (!str || !*str)
		return (NULL);
	/*
	 * count number of words
	 * and number of characters
	 */
	while (*(str + len))
	{
		if (*(str + len) != ' ')
		{
			if (!inWord)
			{
				count++;
				inWord = 1;
			}
		}
		else
		{
			if (inWord)
				inWord = 0;
		}
		len++;
	}
	ptr = (char **) malloc(sizeof(char *) * (count + 1));
	if (ptr)
	{
		inWord = 0;
		for (i = 0; found < count; i++)
		{
			if (*(str + i) != ' ')
			{
				if (!inWord)
				{
					inWord = 1;
					/* get a word and allocate memory */
					endIndex = i;
					while (*(str + endIndex) != ' '
					       && *(str + endIndex) != '\0')
					{
						endIndex++;
					}
					ptr[found] = (char *)
						malloc(sizeof(char)*
						       (endIndex - i + 1));
					if (!ptr[found])
						error = 1;
					else
					{
						for (n = i; n < endIndex; n++)
						{
							ptr[found][n - i] =
								str[n];
						}
						ptr[found++][n - i] = '\0';
					}
				}
			}
			else
			{
				if (inWord)
					inWord = 0;
			}

		}
		*(ptr + found) = NULL;
		/* if there is an error, free all memory */
		if (error)
		{
			for (i = 0; i < count + 1; i++)
			{
				free(*(ptr + i));
			}
			free(ptr);
			ptr = NULL;
		}
	}
	return (ptr);
}
