#include <stdlib.h>

/**
 * malloc_checked - allocates b bytes of memory
 * @b: number of byte(s)
 *
 * Return: pointer to allocated memory, exit process with status 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
