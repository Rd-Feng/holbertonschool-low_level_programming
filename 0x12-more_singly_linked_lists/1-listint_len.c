#include "lists.h"

/**
 * listint_len - return number of elements in a linked listint_t list
 * @h: first element in list
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
