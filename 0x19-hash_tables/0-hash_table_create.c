#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of size
 * @size: size
 *
 * Return: pointer to hash table, NULL on error
 * If size is 0, an empty table of size 0 is created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size != 0)
		ht = malloc(sizeof(*ht));
	if (ht)
	{
		ht->size = size;
		ht->array = malloc(sizeof(*ht->array) * size);
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
		while (size--)
			ht->array[size] = NULL;
	}
	return (ht);
}
