#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum = 0;

	for (i = 0; i < size; i++)
		sum += *(a + size * i + i);
	printf("%ld, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += *(a + size * i + size - i - 1);
	printf("%ld\n", sum);
}
