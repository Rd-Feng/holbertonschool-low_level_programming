#include "sort.h"
void helper(int *array, int *tmp, size_t lo, size_t hi);
void merge(int *a, int *tmp, size_t llo, size_t lhi, size_t rlo, size_t rhi);
/**
 * merge_sort - merge_sort on an array
 * @array: array
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *tmp = NULL;

	if (!array || size < 2)
		return;
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return;
	if (size > 1)
		helper(array, tmp, 0, size - 1);
	free(tmp);
}
/**
 * helper - merge sort helper
 * @array: array
 * @tmp: buffer
 * @lo: low index of sub array
 * @hi: high index of sub array
 */
void helper(int *array, int *tmp, size_t lo, size_t hi)
{
	if (hi > lo)
	{
		helper(array, tmp, lo, (lo + hi + 1) / 2 - 1);
		helper(array, tmp, (lo + hi + 1) / 2, hi);
		merge(array, tmp, lo, (lo + hi + 1) / 2 - 1,
		      (lo + hi + 1) / 2, hi);
	}
}
/**
 * merge - merge two sub list
 * @a: array
 * @tmp: buffer
 * @llo: low index of left sub list
 * @lhi: high index of left sub list
 * @rlo: low index of right sub list
 * @rhi: high index of right sub list
 */
void merge(int *a, int *tmp, size_t llo, size_t lhi, size_t rlo, size_t rhi)
{
	size_t lhead = llo, lsize = lhi - llo + 1;
	size_t rhead = rlo, rsize = rhi - rlo + 1;
	size_t i = llo;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(a + lhead, lsize);
	printf("[right]: ");
	print_array(a + rhead, rsize);
	while (llo <= lhi && rlo <= rhi)
	{
		if (a[llo] <= a[rlo])
			tmp[i++] = a[llo++];
		else
			tmp[i++] = a[rlo++];
	}
	while (llo <= lhi)
		tmp[i++] = a[llo++];
	while (rlo <= rhi)
		tmp[i++] = a[rlo++];
	for (i = lhead; i <= rhi; i++)
		a[i] = tmp[i];
	printf("[Done]: ");
	print_array(a + lhead, lsize + rsize);
}
