#include "sort.h"
void helper(int *array, int *tmp, int lo, int hi);
void merge(int *array, int *tmp, int llo, int lhi, int rlo, int rhi);
void print_sublist(int *arr, int size);
/**
 * merge_sort - merge_sort on an array
 * @array: array
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *tmp = malloc(sizeof(int) * size);

	if (!tmp)
		return;
	if (size > 1)
		helper(array, tmp, 0, size - 1);
}
/**
 * helper - merge sort helper
 * @array: array
 * @tmp: buffer
 * @lo: low index of sub array
 * @hi: high index of sub array
 */
void helper(int *array, int *tmp, int lo, int hi)
{
	if (hi > lo)
	{
		helper(array, tmp, lo, (lo + hi + 1) / 2 - 1);
		helper(array, tmp, (lo + hi + 1) / 2, hi);
		merge(lo, (lo + hi + 1) / 2 - 1,
		      (lo + hi + 1) / 2, hi,
		      array, tmp);
	}
}
/**
 * merge - merge two sub list
 * @array: array
 * @tmp: buffer
 * @llo: low index of left sub list
 * @lhi: high index of left sub list
 * @rlo: low index of right sub list
 * @rhi: high index of right sub list
 */
void merge(int *array, int *tmp, int llo, int lhi, int rlo, int rhi)
{
	int lhead = llo, lsize = lhi - llo + 1;
	int rhead = rlo, rsize = rhi - rlo + 1;
	int i = llo;

	printf("Merging...\n");
	printf("[left]: ");
	print_sublist(array + lhead, lsize);
	printf("[right]: ");
	print_sublist(array + rhead, rsize);
	while (llo <= lhi && rlo <= rhi)
	{
		if (array[llo] <= array[rlo])
			tmp[i++] = array[llo++];
		else
			tmp[i++] = array[rlo++];
	}
	while (llo <= lhi)
		tmp[i++] = array[llo++];
	while (rlo <= rhi)
		tmp[i++] = array[llo++];
	for (i = lhead; i <= rhi; i++)
		array[i] = tmp[i];
	printf("[Done]: ");
	print_sublist(array + rhead, lsize + rsize);
}
