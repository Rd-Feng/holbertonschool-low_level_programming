#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: first node in list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int i;

	while (h)
	{
		i = 0;
		while (h->str && h->str[i])
			i++;
		printf("[%u] %s\n", i, (h->str) ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
