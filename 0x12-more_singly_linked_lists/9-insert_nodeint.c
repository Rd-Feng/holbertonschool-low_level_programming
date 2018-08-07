#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: address of pointer to first list element
 * @idx: index to add new node
 * @n: integer in new node
 *
 * Return: address of the new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev = *head, *newNode = NULL, *ptr = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (i = 0; head && ptr && (i < idx); i++, ptr = ptr->next)
		prev = ptr;
	if (i == idx) /* successfully reached index node */
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode)
		{
			newNode->n = n;
			newNode->next = ptr;
			if (idx != 0)
				prev->next = newNode;
			else
				*head = newNode;
		}
	}
	return (newNode);
}
