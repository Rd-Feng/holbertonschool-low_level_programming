#include "lists.h"

listint_t *floyd_cycle_find(listint_t *head);

/**
 * find_listint_loop - find start of loop in a list
 * @head: pointer to head node
 *
 * Return: start of loop, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (floyd_cycle_find(head))
	{
		while (head)
		{
			/* head is start of loop */
			if (floyd_cycle_find(head) == head)
				return (head);
			head = head->next;
		}
	}
	return (NULL);
}
/**
 * floyd_cycle_find - implementation of Floyd's Cycle-Finding Algorithm
 * Detect loop in a linked list.
 * @head: pointer to head node
 *
 * Return: node where slow and fast pointer meet, NULL if no loop
 */
listint_t *floyd_cycle_find(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head)
	{
		do {
			slow = slow->next;
			fast = fast->next;
			if (fast && fast->next)
				fast = fast->next;
			else
				return (NULL);
			if (slow == fast)
				return (slow);
		} while (slow && fast);
	}
	return (NULL);
}
