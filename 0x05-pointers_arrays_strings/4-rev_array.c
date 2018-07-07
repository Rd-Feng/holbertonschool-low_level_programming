#include "holberton.h"

/**
 * reverse_array - reverse the content of array of integers
 * @a: pointer to array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int head, tail, tmp;

	for (head = 0, tail = n - 1; tail - head > 0; head++, tail--)
	{
		tmp = *(a + head);
		*(a + head) = *(a + tail);
		*(a + tail) = tmp;
	}
}
