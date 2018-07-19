#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: int
 * @max: int
 *
 * Return: 0 on success
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	unsigned long size = 0;
	int i = 0;

	size = max - min;
	if (max >= min)
	{
		ptr = malloc(sizeof(*ptr) * size + sizeof(*ptr));
		if (ptr)
		{
			for (i = min; i <= max; i++)
				*(ptr + i - min) = i;
		}
	}
	return (ptr);
}
