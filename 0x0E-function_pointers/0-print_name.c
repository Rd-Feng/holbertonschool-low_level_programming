#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: string containing a name
 * @f: customized print name function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
