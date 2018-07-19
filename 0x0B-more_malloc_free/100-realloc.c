#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: old block
 * @old_size: size of the old block
 * @new_size: size of the new block
 *
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr = NULL;
	int num;

	if (old_size == 0 && new_size != 0)
	{
		free(ptr);
		return (malloc(new_size));
	}
	else if (old_size != 0 && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (old_size == 0 && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* none of old_size and new_size are 0 */
	num = old_size < new_size ? old_size : new_size;
	newPtr = malloc(new_size);
	if (newPtr)
	{
		while (--num >= 0)
			*(newPtr + num) = *((char *)ptr + num);
		free(ptr);
	}
	return (newPtr);
}
