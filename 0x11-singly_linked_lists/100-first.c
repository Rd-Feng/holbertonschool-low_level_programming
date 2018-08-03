#include <stdio.h>
__attribute__ ((__constructor__))
/**
 * premain - function execute before main
 */
void premain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
