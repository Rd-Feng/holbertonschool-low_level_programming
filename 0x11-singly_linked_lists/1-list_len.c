#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in a list
 * @h: first element of the list
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
