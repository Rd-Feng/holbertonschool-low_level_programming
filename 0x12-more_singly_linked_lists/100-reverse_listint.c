#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: address of head pointer
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (!head || !(*head)) /* error input or list is empty */
		return (NULL);
	next = (*head)->next;
	while (1)
	{
		(*head)->next = prev;
		prev = *head;
		if (!next)
			break;
		*head = next;
		next = (*head)->next;
	}
	return (*head);
}
