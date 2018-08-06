#include "lists.h"

/**
 * free_listint - free memory allocated to list
 * @head: pointer to first element in list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
