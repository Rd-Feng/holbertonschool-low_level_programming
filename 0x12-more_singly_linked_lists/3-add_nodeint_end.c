#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: address of pointer pointing to first element in list
 * @n: integer in new node
 *
 * Return: pointer to new node, null on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL, *ptr = NULL;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode)
		{
			newNode->n = n;
			newNode->next = NULL;
			ptr = *head;
			if (ptr)
			{
				while (ptr->next)
					ptr = ptr->next;
				ptr->next = newNode;
			}
			else
			{
				*head = newNode;
			}
		}
	}
	return (newNode);
}
