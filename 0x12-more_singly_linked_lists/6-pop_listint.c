#include "lists.h"

/**
 * pop_listint - delete head node of a list and return its data
 * @head: address of pointer to head node of a list
 *
 * Return: head node date, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *ptr = NULL;

	if (head && *head)
	{
		data = (*head)->n;
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	return (data);
}
