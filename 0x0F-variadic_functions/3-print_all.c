#include "variadic_functions.h"
#include <stdio.h>

/**
 * _puts - print a string using printf
 * print (nil) if the string is null
 * @str: pointer to string
 */
void _puts(char *str)
{
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - print all parameters separated by a comma and a space
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list params;

	va_start(params, format);
	if (format)
	{
		i = 0;
		while (*(format + i))
		{
			switch (*(format + i))
			{
			case 'c':
				printf("%c", va_arg(params, int));
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				break;
			case 's':
				_puts(va_arg(params, char*));
				break;
			default:
				i++;
				continue;
			}
			if (!*(format + i + 1))
			{
				printf("\n");
				break;
			}
			printf(", ");
			i++;
		}
	}
	va_end(params);
}
