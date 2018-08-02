#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory allocated to list
 * @head: pointer to first element in list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
