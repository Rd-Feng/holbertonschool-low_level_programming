#include "sort.h"
/**
 * selection_sort -  sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: unsorted array that need to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, min_idx;
	int cur_min;

	for (i = 0; i < size - 1; i++)
	{
		cur_min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (cur_min > array[j])
			{
				cur_min = array[j];
				min_idx = j;
			}
		}
		if (cur_min != array[i])
		{
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
