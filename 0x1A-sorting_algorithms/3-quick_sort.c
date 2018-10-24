#include "sort.h"
void swap(int *array, int i, int j, size_t size);
/**
 * quick_sort - quick sort array
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int p_idx = size - 1, i = 0, j = 0;
	int pivot;

	if (size < 2)
		return;
	p_idx = size - 1;
	while (p_idx >= 0)
	{
		i = 0;
		pivot = array[p_idx];
		for (j = 0; j < p_idx; j++)
		{
			if (array[j] < array[p_idx])
			{
				if (i != j)
					swap(array, i, j, size);
				i++;
			}
		}
		if (i != p_idx)
			swap(array, i, p_idx, size);
		if (array[p_idx] == pivot)
		{
			p_idx--;
			pivot = array[p_idx];
		}
	}
}
/**
 * swap - swap two elements and print array
 * @array: array
 * @i: i
 * @j: j
 * @size: size
 */
void swap(int *array, int i, int j, size_t size)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}
