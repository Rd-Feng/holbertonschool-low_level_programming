#include "sort.h"
void swap(int *array, size_t i, size_t j, size_t size);
void helper(int *array, size_t size, size_t lo, size_t hi);
size_t partition(int *array, size_t size, size_t lo, size_t hi);
/**
 * quick_sort - quick sort array
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	helper(array, size, 0, size - 1);
}
/**
 * helper - helper of quick_sort function
 * @array: new array to sort
 * @size: size of new array
 * @lo: lower bound
 * @hi: upper bound
 */
void helper(int *array, size_t size, size_t lo, size_t hi)
{
	size_t p;

	if (lo < hi)
	{
		p = partition(array, size, lo, hi);
		if (p > 0)
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
size_t partition(int *array, size_t size, size_t lo, size_t hi)
{
	int pivot;
	size_t i, j;

	for (i = lo, j = lo, pivot = array[hi]; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
				swap(array, i, j, size);
			i++;
		}
	}
	if (i != hi && array[i] != array[hi])
		swap(array, i, hi, size);
	return (i);
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
