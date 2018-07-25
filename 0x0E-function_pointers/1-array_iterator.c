#include "function_pointers.h"

/**
 * array_iterator - executes a function on element of an array
 * @array: array
 * @size: number of elements
 * @action: function to execute on elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size > 0 && action)
		for (i = 0; (unsigned int) i < size; i++)
			action(*(array + i));
}
