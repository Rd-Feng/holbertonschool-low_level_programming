#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;
	int isFirst = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (ptr = ht->array[i]; ptr; ptr = ptr->next)
		{
			if (isFirst)
			{
				isFirst = 0;
				printf("\'%s\': ", ptr->key);
			}
			else
				printf(", \'%s\': ", ptr->key);
			printf("\'%s\'", ptr->value);
		}
	}
	printf("}\n");
}
