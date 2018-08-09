#include "holberton.h"
/**
 * flip_bits - returns the number of bits needed to bet flipped
 * to get from number n to number m
 * @n: number1
 * @m: number2
 *
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int i, count = 0, size = sizeof(n) * 8;

	for (i = 0; i < size; i++)
		count += (diff >> i) & 1;
	return (count);
}
