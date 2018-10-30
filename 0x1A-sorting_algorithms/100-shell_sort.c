#include "sort.h"
size_t gap(size_t size);
void sort_sublist(int *array, size_t gap, size_t size, size_t lo);
/**
 * shell_sort - sorts an array of integers in ascending order using the
 * Shell sort algorithm
 * @array: unsorted array that need to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gaps, low;

	if (!array || size < 2)
		return;
	gaps = gap(size);
	while (gaps > 0)
	{
		for (low = 0; low < gaps; low++)
			sort_sublist(array, gaps, size, low);
		print_array(array, size);
		gaps = (gaps - 1) / 3;
	}

}
/**
 * sort_sublist - sort the sub list
 * @array: array
 * @gap: gap
 * @size: size of array
 * @lo: lo index
 */
void sort_sublist(int *array, size_t gap, size_t size, size_t lo)
{
	size_t p, next_cand, next_p;
	int tmp;
	size_t cand;

	for (cand = gap + lo; cand < size; cand = next_cand)
	{

		next_cand = cand + gap;

		for (p = cand - gap; p >= lo; p = next_p)
		{
			next_p = p - gap;
			if (array[cand] < array[p])
			{
				tmp = array[p];
				array[p] = array[cand];
				array[cand] = tmp;
				cand = p;
			}
			if (gap > p)
				break;
		}
	}
}
/**
 * gap - find the number of gap
 * @size: size of array
 * Return: return the number of gap
 */
size_t gap(size_t size)
{
	size_t n = 1;

	while (n <= size)
		n = n * 3 - 1;
	return ((n - 1) / 3);
}
