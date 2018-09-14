#include "lists.h"
/**
 * sum_dlistint - sum all data of a linked list
 * @head: head node
 *
 * Return: result, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
