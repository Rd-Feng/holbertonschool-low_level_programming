#include "holberton.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int n = 0x41; /* character 'A' */
	void *ptr = &n;

	return ((*(char *)ptr) == 'A' ? 1 : 0);
}
