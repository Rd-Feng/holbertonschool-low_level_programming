#include "sort.h"
int gap(size_t size);
void sort_sublist(int *array, int gap, size_t size, int lo);
/**
 * shell_sort - shell sort using Knuth sequence
 * @array: array
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int gaps, low;

	gaps = gap(size);
	for (; gaps > 0; gaps = (gaps - 1) / 3)
	{
		for (low = 0; low < gaps; low++)
			sort_sublist(array, gaps, size, low);
		print_array(array, size);
	}

}
/**
 * sort_sublist - sort the sub list
 * @array: array
 * @gap: gap
 * @size: size of array
 * @lo: lo index
 */
void sort_sublist(int *array, int gap, size_t size, int lo)
{
	int p, tmp, next_cand, next_p;
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
		}
	}
}
/**
 * gap - find the number of gap
 * @size: size of array
 * Return: return the number of gap
 */
int gap(size_t size)
{
	size_t n = 1;

	while (n < size)
		n = n * 3 - 1;
	return ((n - 1) / 3);
}
