#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: value of the bit, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;

	if (index >= size)
		return (-1);
	return (((int)((n >> index) & 1)));
}
