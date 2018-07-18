#include "holberton.h"
#include <stdlib.h>

/**
 * getWord - get one word starting at given index of a string
 * The word is put into a new allocated memory block
 * @i: starting index of the word
 * @s: string
 *
 * Return: address of memory block allocated to the word, NULL on error
 */
char *getWord(int i, char *s)
{
	int n, endIndex = i;
	char *ptr = NULL;

	while (*(s + endIndex) != ' ' && *(s + endIndex) != '\0')
	{
		endIndex++;
	}
	ptr = (char *) malloc(sizeof(char) * (endIndex - i + 1));
	if (ptr)
	{
		for (n = i; n < endIndex; n++)
		{
			*(ptr + n - i) = *(s + n);
		}
	}
	*(ptr + n - i) = '\0';
	return (ptr);
}

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

	if (str == NULL || *str == '\0')
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
					*(ptr + found) = getWord(i, str);
					if (!*(ptr + found++))
						error = 1;
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
