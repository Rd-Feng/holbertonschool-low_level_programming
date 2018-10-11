#include "hash_tables.h"
/**
 * hash_djb2 - an implementation of djb2 hashing algorithm
 * @str: hash key
 *
 * Return: hash table index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while (str && (c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
