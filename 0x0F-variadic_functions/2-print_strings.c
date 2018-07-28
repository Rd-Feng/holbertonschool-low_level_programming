#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings separated by separator
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *str = NULL;

	va_start(params, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(params, char*);
		if (str == NULL)
		{
			printf("(nil)\n");
			break;
		}
		else
		{
			if (i == n)
				printf("%s\n", str);
			else
				printf("%s%s", str,
				       separator ? separator : "");
		}
	}
	va_end(params);
}
