#include "lists.h"

/**
 * get_nodeint_at_index - return node at n index, index starts at 0
 * @head: pointer to first element in list
 * @index: index
 *
 * Return: node at index n, NULL if node DNE
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i;

	for (i = 0; head && (i < index); i++, head = head->next)
		;
	node = head;
	return (node);
}
