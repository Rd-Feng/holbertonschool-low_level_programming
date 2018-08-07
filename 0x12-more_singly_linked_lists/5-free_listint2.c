#include "lists.h"

/**
 * free_listint2 - free memory of a list and set its head to NULL
 * @head: address of pointer to first element in list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (head)
	{
		ptr = *head;
		while (*head)
		{
			ptr = (*head)->next;
			free(*head);
			*head = ptr;
		}
		*head = NULL;
	}
}
