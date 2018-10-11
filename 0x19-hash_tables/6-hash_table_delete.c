#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL, *tmp = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				free(ptr->key);
				free(ptr->value);
				tmp = ptr;
				ptr = ptr->next;
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
