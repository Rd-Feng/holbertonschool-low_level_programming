#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of first element for which the cmp function does not return 0
 * If no matches found or size is less or equal to 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res = -1, i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(*(array + i)))
			{
				res = i;
				break;
			}
	return (res);
}
