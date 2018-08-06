#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a listint_t list
 * @head: address of pointer to first element in list
 * @n: integer in the new node
 *
 * Return: pointer to new node on success, NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode)
		{
			newNode->n = n;
			newNode->next = *head;
			*head = newNode;
		}
	}
	return (newNode);
}
