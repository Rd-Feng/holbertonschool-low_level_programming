#include "holberton.h"

/**
 * swap_int - swaps values that a and b are pointing to
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
