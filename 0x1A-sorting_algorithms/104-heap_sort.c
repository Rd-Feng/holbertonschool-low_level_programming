#include "sort.h"
void heaplify(int *array, size_t size, size_t cur_idx);
void siftdown(int *array, size_t size, size_t heap_size);
void swap(int *array, size_t size, size_t e1, size_t e2);
/**
 * heap_sort - heap sort on array
 * @array: array
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	size_t heap_size = size;

	if (!array || size < 2)
		return;
	heaplify(array, size, 0);
	while (heap_size > 1)
	{
		swap(array, size, 0, heap_size - 1);
		heap_size--;
		siftdown(array, size, heap_size);
	}
}
/**
 * heaplify - change array to max heap
 * @array: array
 * @size: size
 * @cur_idx: root
 */
void heaplify(int *array, size_t size, size_t cur_idx)
{
	size_t l_idx = 2 * cur_idx + 1;
	size_t r_idx = 2 * cur_idx + 2;
	size_t max_idx = cur_idx;

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
		swap(array, size, cur_idx, max_idx);
		heaplify(array, size, max_idx);
	}
}
/**
 * siftdown - sift down
 * @array: array
 * @heap_size: current heap size
 * @size: size of array
 */
void siftdown(int *array, size_t size, size_t heap_size)
{
	size_t cur = 0, target = 0;
	size_t left, right;

	left = cur * 2 + 1;
	right = cur * 2 + 2;
	while (left < heap_size || right < heap_size)
	{
		if (left < heap_size && array[cur] < array[left])
			target = left;
		if (right < heap_size && array[target] < array[right])
			target = right;
		if (target != cur)
			swap(array, size, cur, target);
		else
			break;
		cur = target;
		left = cur * 2 + 1;
		right = cur * 2 + 2;
	}
}
/**
 * swap - swap two elements in an array and print array
 * @array: array
 * @e1: index of first element
 * @e2: index of second element
 * @size: size of array
 */
void swap(int *array, size_t size, size_t e1, size_t e2)
{
	int tmp;

	if (e1 != e2 && array[e1] != array[e2])
	{
		tmp = array[e1];
		array[e1] = array[e2];
		array[e2] = tmp;
		print_array(array, size);
	}
}
