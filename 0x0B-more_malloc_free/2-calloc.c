#include <stdlib.h>

/**
 * _calloc - allocate and initialize memory
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: pointer to allocated memory, NULL on error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i = 0;

	if (nmemb * size)
	{
		ptr = malloc(size * nmemb);
		if (ptr)
			while (i < nmemb)
				*((char *)ptr + i++) = 0;
	}
	return (ptr);
}
