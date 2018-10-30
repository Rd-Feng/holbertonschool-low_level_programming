#include "sort.h"
size_t _max(int *array, size_t size, int ex);
int *setup_count_array(int *array, size_t size, size_t k, int ex);
void _counting_sort(int *array, size_t size, int ex);
/**
 * radix_sort - radix sort on array
 * @array: array
 * @size: size of array
 */
void radix_sort(int *array, size_t size)
{
	int max_num, max_ex, n;
	size_t i;

	if (!array || size < 2)
		return;
	for (i = 0, max_num = array[0]; i < size; i++)
		if (array[i] > max_num)
			max_num = array[i];
	for (n = max_num, max_ex = 0; n > 10; max_ex++)
		n /= 10;
	for (n = 0; n <= max_ex; n++, print_array(array, size))
	{
		printf("b4 count sort\n");
		_counting_sort(array, size, n);
		printf("af count sort\n");
	}
}
/**
 * _counting_sort - counting sort on array
 * @array: array
 * @size: size of array
 * @ex: exponent
 */
void _counting_sort(int *array, size_t size, int ex)
{
	int *count_array = NULL, *tmp = NULL;
	size_t i, k, factor;

	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return;
	for (i = 0; i < size; i++)
		tmp[i] = array[i];
	printf("b4 max ex%d\n ", ex);
	k = _max(array, size, ex);
	printf("af max\n");
	printf("b4 countarrray\n");
	count_array = setup_count_array(array, size, k, ex);
	for (factor = 1; ex > 0; factor *= 10, ex--)
		;
	for (i = 0; i < size; i++)
		array[--count_array[tmp[i] / factor % 10]] = tmp[i];
	free(tmp);
	free(count_array);
}
/**
 * setup_count_array - setup the count array for counting sort
 * @array: origin array
 * @size: size of origin array
 * @k: largest num in array
 *
 * Return: pointer to count array
 */
int *setup_count_array(int *array, size_t size, size_t k, int ex)
{
	int *countArray = NULL;
	size_t i;
	int d = 0, factor = 1, j;

	countArray = malloc(sizeof(int) * (k + 1));
	for (j = 0; j < ex; factor *= 10, j++)
		;
	printf("factor %d\n", factor);
	if (!countArray)
		return (NULL);
	for (i = 0; i < k + 1; i++)
		countArray[i] = 0;
	for (i = 0, d = 0; i < size; i++, d = 0)
	{
		if (array[i] >= factor)
		{
			d = array[i]/ factor % 10;
			printf("d = %d array[%lu] = %d factor %d\n", d, i, array[i], factor);
		}
		printf("d = %d\n", d);
		countArray[d] += 1;
	}
	printf("-----count array in setup ----\n");
	print_array(countArray, size);
	printf("-----count array in setup ----end\n");
	for (i = 0; i < k; i++)
		countArray[i + 1] = countArray[i] + countArray[i + 1];
	return (countArray);
}
/**
 * _max - find the largest value based on the ex-th significent digit
 * @array: array
 * @size: size of array
 * @ex: exponent
 * Return: return the largest value
 */
size_t _max(int *array, size_t size, int ex)
{
	size_t i, max, factor;

	for (factor = 1; ex > 0; factor *= 10, ex--)
		;
	max = array[0] / factor % 10;
	for (i = 0; i < size; i++)
	{
		if (array[i] / factor % 10 > max)
			max = array[i] / factor % 10;
	}
	return (max);
}
