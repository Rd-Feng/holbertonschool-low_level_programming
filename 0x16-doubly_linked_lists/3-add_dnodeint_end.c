#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: pointer to head pointer of list
 * @n: data in new node
 *
 * Return: address of new node, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode)
		{
			newNode->n = n;
			newNode->next = NULL;
			newNode->prev = *head;
			if (!*head)
			{
				*head = newNode;
				return (newNode);
			}
			/* make prev points to last node in the list */
			while (newNode->prev->next)
				newNode->prev = newNode->prev->next;
			newNode->prev->next = newNode;
		}
	}
	return (newNode);
}
