#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: addr of head pointer
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = NULL;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	for (i = 0, p = *head; i < index && p; i++, p = p->next)
		;
	if (!p)
		return (-1);
	if (p == *head)
		*head = p->next;
	if (p->prev)
		p->prev->next = p->next;
	if (p->next)
		p->next->prev = p->prev;
	free(p);
	return (1);
}
