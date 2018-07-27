#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);

	return (sum);
}
