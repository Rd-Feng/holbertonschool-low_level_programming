#include "sort.h"
#define up 1
#define down 0
void bs_helper(int *array, size_t size, size_t subsize, size_t idx, int dir);
void bs_merge(int *array, size_t size, size_t subsize, size_t idx, int dir);
void cmpswap(int *array, size_t i, size_t j, int dir);
/**
 * bitonic_sort - bitonic sort on array
 * @array: array
 * @size: size
 */
void bitonic_sort(int *array, size_t size)
{
}
/**
 * bs_helper - bitonic sort helper
 * @array: array
 * @size: size of array
 * @subsize: size of sub array
 * @idx: start index of sub array
 * @dir: direction (up or down)
 */
void bs_helper(int *array, size_t size, size_t subsize, size_t idx, int dir)
{
	size_t sub = subsize / 2;

	if (subsize > 1)
	{
		printf("Merging [%d/%d] (%s):\n", subsize, size, dir ? "UP" : "DOWN");
		bs_helper(array, size, sub, idx, up);
		bs_helper(array, size, sub, idx + sub, down);
		bs_merge(array, size, subsize, idx, dir);
	}
}
/**
 * bs_merge - bs merger
 * @array: array
 * @size: size of array
 * @subsize: size of sub array
 * @idx: start index of sub array
 * @dir: direction
 */
void bs_merge(int *array, size_t size, size_t subsize, size_t idx, int dir)
{
}
/**
 * cmpswap - compare and swap
 * @array: array
 * @i: i
 * @j: j
 * @dir: direction
 */
void cmpswap(int *array, size_t i, size_t j, int dir)
{
}
