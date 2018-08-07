#include "lists.h"
#include <stdio.h>

l_printed *add_printed(l_printed **head, const unsigned long addr);
int contain(l_printed *head, const unsigned long addr);
void free_printed(l_printed *head);

/**
 * print_listint_safe - print a singly linked list
 * Stop at the already printed node if there is a loop
 * in the list
 * @head: pointer to head node of list
 *
 * Return: number of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *ptr = (listint_t *)head;
	l_printed *printed = NULL, *status = NULL;

	while (ptr)
	{
		/* node already printed */
		if (contain(printed, (unsigned long)ptr))
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			break;
		}
		/* node not printed yet */
		else
		{
			count++;
			status = add_printed(&printed, (unsigned long)ptr);
			if (!status)
			{
				free_printed(printed);
				exit(98);
			}
			printf("[%p] %d\n", (void *)ptr, ptr->n);
		}
		ptr = ptr->next;
	}
	free_printed(printed);
	return (count);
}
/**
 * add_printed - add a printed address into the printed list
 * @head: address of head pointer
 * @addr: address
 *
 * Return: added node, NULL on fail
 */
l_printed *add_printed(l_printed **head, const unsigned long addr)
{
	l_printed *newNode = NULL;

	if (head)
	{
		newNode = malloc(sizeof(l_printed));
		if (newNode)
		{
			newNode->addr = addr;
			newNode->next = *head;
			*head = newNode;
		}
	}
	return (newNode);
}
/**
 * contain - check if an address is in the list
 * @head: pointer to head node
 * @addr: address
 *
 * Return: 1 if is in list, 0 otherwise
 */
int contain(l_printed *head, const unsigned long addr)
{
	int res = 0;

	while (head)
	{
		if (head->addr == addr)
		{
			res = 1;
			break;
		}
		head = head->next;
	}
	return (res);
}

/**
 * free_printed - free memory allocated to the list
 * @head: pointer to head node
 */
void free_printed(l_printed *head)
{
	l_printed *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
