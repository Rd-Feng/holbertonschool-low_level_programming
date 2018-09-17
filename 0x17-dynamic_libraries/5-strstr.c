#include "holberton.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr_h, *ptr_n;
	int len_h = 0, len_n = 0;
	int i, j, found;

	/* len doesn't count the terminating byte */
	while (*(haystack + len_h))
		len_h++;
	while (*(needle + len_n))
		len_n++;

	if (len_h < len_n)
	{
		return (NULL);
	}
	for (i = 0; i <= len_h - len_n; i++)
	{
		found = 1;
		ptr_n = needle;
		ptr_h = haystack + i;
		for (j = 0; j < len_n; j++)
		{
			if (*(ptr_n + j) != *(ptr_h + j))
			{
				found = 0;
				break;
			}
		}
		if (found)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
