#include "search_algos.h"
/**
 * linear_search - linear search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;

	while (array && size--)
	{
		printf("Value checked array[%d] = [%d]\n", idx, *array);
		if (*array++ == value)
		return (idx);
		idx++;
	}
	return (-1);
}
