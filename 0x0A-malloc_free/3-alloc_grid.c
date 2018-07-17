#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2 dimensional array and initialize to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array, NULL on failure or errors
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j,  error = 0;

	if (width > 0 && height > 0)
	{
		ptr = (int **) malloc(sizeof(int *) * height);
		/* allocate memory for array */
		if (ptr)
		{
			for (i = 0; i < height; i++)
			{
				*(ptr + i) =
					(int *) malloc(sizeof(int) * width);
				if (!*((ptr + i)))
				{
					error = 1;
					break;
				}
			}
			/* if error occurs, free allocated memory and return */
			if (error)
			{
				while (i >= 0)
				{
					free(*(ptr + i));
					*(ptr + i) = NULL;
					i--;
				}
				free(ptr);
				ptr = NULL;
			}
		}
		if (ptr)
		{
			for (i = 0; i < height; i++)
				for (j = 0; j < width; j++)
					ptr[i][j] = 0;
		}
	}
	return (ptr);
}
