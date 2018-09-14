#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
