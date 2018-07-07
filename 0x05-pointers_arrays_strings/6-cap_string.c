#include "holberton.h"


/**
 * is_separator - check if a character is a separator
 * @c: candidate character
 *
 * Return: 0 for false, 1 otherwise
 */
int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';')
		return (1);
	else if (c == '.' || c == '!' || c == '?' || c == '\"')
		return (1);
	else if (c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * words are string seperated by:
 * space, tabulation, new line, ',', ;, ., !, ?, ", (, ), {, and }
 * @s: string
 *
 * Return: pointer to resulting string
 */
char *cap_string(char *s)
{
	char *ptr;

	if (*s <= 'z' && *s >= 'a')
		*s -= 32;
	for (ptr = s; *ptr != '\0'; ptr++)
	{
		if (is_separator(*ptr))
		{
			if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
				*(ptr + 1) -= 32;
		}
	}

	return (s);
}
