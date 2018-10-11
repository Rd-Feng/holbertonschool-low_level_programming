#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieve value associated with key
 * @ht: hash table
 * @key: key
 *
 * Return: value, NULL if key DNE
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr = NULL;

	if (!ht || !key || *key == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	for (ptr = ht->array[index]; ptr; ptr = ptr->next)
		if (!strcmp(ptr->key, key))
			return (ptr->value);
	return (NULL);
}
