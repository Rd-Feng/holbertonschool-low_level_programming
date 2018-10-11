#include "hash_tables.h"
/**
 * key_index - returns index of a key
 * @key: key
 * @size: size of hash table
 *
 * Return: index where the key is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
