#include "sort.h"
void heaplify(int *array, size_t size, int cur_idx);
void siftdown(int *array, size_t heap_size);
void swap(int *array, int e1, int e2);
/**
 * heap_sort - sorts an array of integers in ascending order using the
 * Heap sort algorithm
 * @array: unsorted array that need to sort
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	heaplify(array, size, 0);
}
void heaplify(int *array, size_t size, int cur_idx)
{
	int l_idx = 2 * cur_idx + 1;
	int r_idx = 2 * cur_idx + 2;
	int max_idx = cur_idx;

	if (l_idx < size)
		heaplify(array, size, l_idx);
	if (r_idx < size)
		heaplify(array, size, r_idx);

	if (l_idx < size && array[cur_idx] < array[l_idx])
		max_idx = l_idx;
	if (r_idx < size && array[max_idx] < array[r_idx])
		max_idx = r_idx;
	if (max_idx != cur_idx)
	{
		swap(array, cur_idx, max_idx);
		heaplify(array, size, max_idx);
	}
}
