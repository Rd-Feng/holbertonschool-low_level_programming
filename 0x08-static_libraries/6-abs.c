#include "holberton.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: original integer
 *
 * Return: 0 on success
 */
int _abs(int n)
{
	return (n >= 0 ? (n) : (n * -1));
}
