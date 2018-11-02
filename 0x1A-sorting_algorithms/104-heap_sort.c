#include "sort.h"
void heaplify(int *array, size_t size, size_t cur_idx, size_t s);
void siftdown(int *array, size_t size, size_t heap_size, size_t root);
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
	heaplify(array, size, 0, size);
	while (heap_size > 1)
	{
		swap(array, size, 0, heap_size - 1);
		heap_size--;
		siftdown(array, size, heap_size, 0);
	}
}
/**
 * heaplify - change array to max heap
 * @array: array
 * @size: size
 * @cur_idx: root
 * @s: array full size
 */
void heaplify(int *array, size_t size, size_t cur_idx, size_t s)
{
	size_t i;
	(void) s;

	for (i = (size - 2) / 2; i >= cur_idx; i--)
	{
		siftdown(array, size, size - 1, i);
		if (i == 0)
			break;
	}
}
/**
 * siftdown - sift down
 * @array: array
 * @heap_size: current heap size
 * @size: size of array
 * @root: root index
 */
void siftdown(int *array, size_t size, size_t heap_size, size_t root)
{
	size_t target = root;
	size_t left, right;

	left = root * 2 + 1;
	right = root * 2 + 2;
	while (left < heap_size || right < heap_size)
	{
		if (left < heap_size && array[root] < array[left])
			target = left;
		if (right < heap_size && array[target] < array[right])
			target = right;
		if (target != root)
			swap(array, size, root, target);
		else
			break;
		root = target;
		left = root * 2 + 1;
		right = root * 2 + 2;
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

	tmp = array[e1];
	array[e1] = array[e2];
	array[e2] = tmp;
	print_array(array, size);
}
