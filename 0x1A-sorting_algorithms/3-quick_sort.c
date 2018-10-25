#include "sort.h"
void swap(int *array, int i, int j, size_t size);
void helper(int *array, size_t size, int lo, int hi);
int partition(int *array, size_t size, int lo, int hi);
/**
 * quick_sort - quick sort array
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	helper(array, size, 0, size - 1);
}
/**
 * helper - helper of quick_sort function
 * @array: new array to sort
 * @size: size of new array
 * @lo: lower bound
 * @hi: upper bound
 */
void helper(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, size, lo, hi);
		helper(array, size, lo, p - 1);
		helper(array, size, p + 1, hi);
	}
}
/**
 * partition - place pivot and partition the array
 * @array: array
 * @size: size
 * @lo: lower bound
 * @hi: upper bound
 *
 * Return: pivot index
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int i, pivot, j;

	for (i = lo - 1, j = lo, pivot = array[hi]; j < hi; j++)
	{
		if (array[j] < pivot && i++)
			if (i != j)
				swap(array, i, j, size);
	}
	if (i + 1 != hi)
		swap(array, i + 1, hi, size);
	return (i + 1);
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
