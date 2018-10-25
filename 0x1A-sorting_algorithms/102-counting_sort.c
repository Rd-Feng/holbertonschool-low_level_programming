#include "sort.h"
int _max(int *array, size_t size);
int *setup_count_array(int *array, size_t size, int k);

void counting_sort(int *array, size_t size)
{
	int i, k, *count_array = NULL, tmp = NULL;

	/* make a copy of origin array */
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return;
	for (i = 0; i < size; i++)
		tmp[i] = array[i];

	k = _max(array, size);
	count_array = setup_count_array(array, size, k);
	for (i = 0; i < size; i++)
		array[count_array[tmp[i]]--] = tmp[i];
	free(tmp);
	free(count_array);
}

int *setup_count_array(int *array, size_t size, int k)
{
	int *countArray = NULL;

	countArray = malloc(sizeof(int) * (k + 1));
	if (!countArray)
		return (NULL);
	

	
}
/**
 * _max - find the largest value of an array
 * @array: array
 * @size: size of array
 * Return: return the largest value
 */
int _max(int *array, size_t size)
{
	int i, max;

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max)
}
