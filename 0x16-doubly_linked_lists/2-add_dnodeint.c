#include "lists.h"
/**
 * add_dnodeint - add  a new node at the beginning of list
 * @head: pointer to head pointer of list
 * @n: data in new node
 *
 * Return: address of the new node, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode)
		{
			newNode->n = n;
			newNode->prev = NULL;
			newNode->next = *head;
			if (*head)
				(*head)->prev = newNode;
			*head = newNode;
		}
	}
	return (newNode);
}
