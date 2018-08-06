#include "lists.h"

/**
 * sum_listint - return sum of all data in list
 * @head: pointer to first element of list
 *
 * Return: sum of data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
