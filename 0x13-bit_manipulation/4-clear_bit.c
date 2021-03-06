#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: unsigned long
 * @index: index
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int controller = 1;

	if (index >= (sizeof(*n) * 8) || !n)
		return (-1);
	*n = *n & (~(controller << index));
	return (1);
}
