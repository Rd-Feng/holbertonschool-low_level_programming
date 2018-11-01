#include "sort.h"
void swap(int *array, size_t i, size_t j, size_t size);
void h_helper(int *array, size_t size, size_t lo, size_t hi);
size_t h_partition(int *array, size_t size, size_t lo, size_t hi);
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
void h_helper(int *array, size_t size, size_t lo, size_t hi)
{
	size_t p;

	if (lo < hi)
	{
		p = h_partition(array, size, lo, hi);
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
size_t h_partition(int *array, size_t size, size_t lo, size_t hi)
{
	int pivot = array[hi];
	size_t L = lo, R = hi;

	while (1)
	{
		while (array[L] <= pivot && L < size - 1)
			L++;
		while (array[R] > pivot && R > lo)
			R--;
		if (L < R)
			swap(array, L, R, size);
		else
		{
			if (hi != R)
				return (R);
			return (R - 1);
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
void swap(int *array, size_t i, size_t j, size_t size)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}
