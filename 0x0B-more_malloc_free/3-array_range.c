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
	if (size > 0)
	{
		ptr = malloc((size + 1) * sizeof(*ptr));
		if (ptr)
		{
			for (i = min; i <= max; i++)
				*(ptr + i - min) = i;
		}
	}
	return (ptr);
}
