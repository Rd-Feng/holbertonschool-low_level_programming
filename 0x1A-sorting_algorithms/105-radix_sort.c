#include "sort.h"
size_t _max(int *array, size_t size);
int *setup_count_array(int *array, size_t size, size_t k);
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
 * _max - find the largest value of an array
 * @array: array
 * @size: size of array
 * Return: return the largest value
 */
size_t _max(int *array, size_t size)
{
	size_t i;
	int max;

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
