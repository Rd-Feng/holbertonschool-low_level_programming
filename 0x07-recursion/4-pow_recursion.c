#include "holberton.h"

/**
 * _pow_recursion - calculate x to the power of y
 * @x: base
 * @y: power
 *
 * Return: x to the power of y, -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
