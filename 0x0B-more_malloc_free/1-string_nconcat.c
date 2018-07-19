#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up
 * @s1: string 1
 * @s2: string 2
 * @n: use only the first n bytes from string 2
 *
 * Return: 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *ptr = NULL;

	if (s1)
		while (*(s1 + len1))
			len1++;
	if (s2)
		while (*(s2 + len2))
			len2++;
	len2 = n < len2 ? n : len2;
	ptr = malloc(sizeof(*ptr) * (len1 + len2 + 1));
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
