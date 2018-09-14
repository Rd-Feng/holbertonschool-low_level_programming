#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to head node address
 * @idx: index to insert
 * @n: data in new node
 *
 * Return: addr of new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL, *newNode = NULL;

	if (h)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		for (ptr = *h; idx > 1 && ptr; idx--, ptr = ptr->next)
			;
		if (ptr)
		{
			newNode = malloc(sizeof(dlistint_t));
			if (newNode)
			{
				newNode->n = n;
				newNode->next = ptr->next;
				newNode->prev = ptr;
				ptr->next = newNode;
			}
		}
	}
	return (newNode);
}
