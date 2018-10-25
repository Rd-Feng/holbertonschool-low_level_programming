#include "sort.h"
int _max(int *array, size_t size);
int *count_array(int *array, size_t size, int k);

void counting_sort(int *array, size_t size)
{










}

int *count_array(int *array, size_t size, int k)
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
