#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print passed in numbers separated by separator string
 * @separator: separator string
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	va_start(params, n);
	for (i = 1; i <= n; i++)
	{
		if (i == n)
			printf("%d\n", va_arg(params, int));
		else
			printf("%d%s", va_arg(params, int),
			       separator ? separator : "");
	}
	va_end(params);
}
