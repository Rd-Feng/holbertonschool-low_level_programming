#include "lists.h"
#include <stdio.h>

l_printed *add_printed(l_printed **head, const unsigned long addr);
int contain(l_printed *head, const unsigned long addr);
void free_printed(l_printed *head);

/**
 * free_listint_safe - free a singly linked list
 * Stop at the already freed node if there is a loop
 * in the list
 * @h: pointer to head node of list
 *
 * Return: number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *ptr = *h, *tmp = NULL;
	l_printed *printed = NULL, *status = NULL;

	while (ptr)
	{
		/* node already freed */
		if (contain(printed, (unsigned long)ptr))
			break;
		/* node not freed yet */
		else
		{
			count++;
			status = add_printed(&printed, (unsigned long)ptr);
			if (!status)
			{
				free_printed(printed);
				exit(98);
			}
			tmp = ptr->next;
			free(ptr);
			ptr = tmp;
		}
	}
	free_printed(printed);
	*h = NULL;
	return (count);
}
