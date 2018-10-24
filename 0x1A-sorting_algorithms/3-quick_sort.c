#include "sort.h"
void swap(int *array, int i, int j, size_t size);
/**
 * quick_sort - quick sort array
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int p_idx, chk, tmp;

	if (size < 2)
		return;
}

void swap(int *array, int i, int j, size_t size)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}
