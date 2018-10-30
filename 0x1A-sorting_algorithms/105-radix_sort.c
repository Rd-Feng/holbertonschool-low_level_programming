#include "sort.h"
size_t _max(int *array, size_t size, int ex);
int *setup_count_array(int *array, size_t size, size_t k);
/**
 * radix_sort - radix sort on array
 * @array: array
 * @size: size of array
 */
void radix_sort(int *array, size_t size)
{
	int max_num, max_ex, tmp;

	if (!array || size < 2)
		return;
	for (tmp = 0, max_num = array[0]; tmp < size; tmp++)
		if (array[i] > max_num)
			max_num = array[i];
	for (tmp = max_num, max_ex = 0; tmp > 10; max_ex++)
		tmp /= 10;
	for (tmp = 0; tmp <= max_ex; tmp++)
		counting_sort(array, size, tmp);
}
/**
 * counting_sort - counting sort on array
 * @array: array
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	int *count_array = NULL, *tmp = NULL;
	size_t i, k;

	if (!array || size < 2)
		return;
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return;
	for (i = 0; i < size; i++)
		tmp[i] = array[i];
	k = _max(array, size);
	count_array = setup_count_array(array, size, k);
	for (i = 0; i < size; i++)
		array[--count_array[tmp[i]]] = tmp[i];
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
int *setup_count_array(int *array, size_t size, size_t k)
{
	int *countArray = NULL;
	size_t i;

	countArray = malloc(sizeof(int) * (k + 1));
	if (!countArray)
		return (NULL);
	for (i = 0; i < k + 1; i++)
		countArray[i] = 0;
	for (i = 0; i < size; i++)
		countArray[array[i]] += 1;
	for (i = 0; i < k; i++)
		countArray[i + 1] = countArray[i] + countArray[i + 1];
	print_array(countArray, k + 1);
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
	size_t i;
	int max, factor;

	for (factor = 1; ex > 0; factor *= 10)
		;
	max = array[0] / factor % 10;
	for (i = 0; i < size; i++)
	{
		if (array[i] / factor % 10 > max)
			max = array[i] / factor % 10;
	}
	return (max);
}
