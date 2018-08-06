#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: address of pointer to first element in list
 * @index: index
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *ptr = *head;
	unsigned int i = 0;

	if (head && *head)
	{
		for (i = 0; head && ptr && (i < index); i++, ptr = ptr->next)
			prev = ptr;
		if (i == index) /* successfully reached index node */
		{
			if (i == 0)
			{
				*head = (*head)->next;
				free(ptr);
				return (1);
			}
			if (ptr)
			{
				prev->next = ptr->next;
				free(ptr);
				return (1);
			}
		}
	}
	return (-1);
}
