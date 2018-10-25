#include "sort.h"
/**
 * shell_sort - sorts an array of integers in ascending order using the
 * Shell sort algorithm
 * @array: unsorted array that need to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int gaps, low;
 
	gaps = gap(size);
	for (; gaps >= 0; gaps = (gaps - 1) / 3)
	{
		for (low = 0; low <= gaps; low++)
			sort_sublist(array, gaps, size, low);
		print_array(array, size);
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
	return ((n - 1) / 3)
}
