#include "holberton.h"

/**
 * factorial - calculate factorial of a given number
 *
 * Return: factorial of a number, -1 on error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
