#include "sort.h"
void swap(listint_t **list, listint_t *p1, listint_t *p2);
/**
 * swap_node - swap adjacent two nodes from a doubly linked list
 * @list: linked list
 * @p1: node 1
 * @p2: node 2
 */
void swap(listint_t **list, listint_t *p1, listint_t *p2)
{

	p2->prev = p1->prev;
	p1->next = p2->next;
	if (p1->prev)
		p1->prev->next = p2;
	if (p2->next)
		p2->next->prev = p1;
	p1->prev = p2;
	p2->next = p1;
	if (!p2->prev)
		*list = p2;
}
