#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free a grid of memory
 * @grid: pointer to the grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	if (grid)
	{
		while (height > 0)
		{
			free(*(grid + --height));
			*(grid + height) = NULL;
		}
	}
	free(grid);
	grid = NULL;
}
