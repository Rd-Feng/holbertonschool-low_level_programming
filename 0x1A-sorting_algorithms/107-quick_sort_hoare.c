#include "sort.h"
void swap(int *array, int i, int j, size_t size);
void h_helper(int *array, size_t size, int lo, int hi);
int h_partition(int *array, size_t size, int lo, int hi);
/**
 * quick_sort_hoare - quick sort array
 * @array: array
 * @size: size of array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	h_helper(array, size, 0, size - 1);
}
/**
 * h_helper - helper of quick_sort function
 * @array: new array to sort
 * @size: size of new array
 * @lo: lower bound
 * @hi: upper bound
 */
void h_helper(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo < hi)
	{
		p = h_partition(array, size, lo, hi);
		if (p > lo)
			h_helper(array, size, lo, p);
		h_helper(array, size, p + 1, hi);
	}
}
/**
 * h_partition - place pivot and partition the array
 * @array: array
 * @size: size
 * @lo: lower bound
 * @hi: upper bound
 *
 * Return: pivot index
 */
int h_partition(int *array, size_t size, int lo, int hi)
{
	int pivot = array[hi];
	/*int l = lo - 1, r = hi + 1;*/
	int l = lo, r = hi;

	while (1)
	{
		while (array[l] < pivot)
			l++;
		while (array[r] > pivot)
			r--;

		if (l < r)
			swap(array, l++, r--, size);
		else
		{
			if (l != r)
				return (r);
			return (r - 1);
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
