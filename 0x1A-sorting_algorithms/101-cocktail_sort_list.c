#include "sort.h"
void swap(listint_t **list, listint_t *p1, listint_t *p2);
/**
 * cocktail_sort_list - cock tail sort on linked list
 * @list: list
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped = 1;
	listint_t *h = NULL, *t = NULL, *p = NULL;

	if (!list || !*list || !(*list)->next)
		return;
	for (p = *list, h = *list; swapped; h = h->next, p = h)
	{
		swapped = 0;
		while (p->next && p != t)
		{
			if (p->n > p->next->n)
			{
				if (p == h)
					h = p->next;
				if (p->next == t)
					t = p;
				swap(list, p, p->next);
				swapped = 1;
				p = p->prev;
			}
			p = p->next;
		}
		t = p->prev;
		p = t;
		while (p->prev && p != h)
		{
			if (p->n < p->prev->n)
			{
				if (p == t)
					t = p->prev;
				if (p->prev == h)
					h = p;
				swap(list, p->prev, p);
				swapped = 1;
				p = p->next;
			}
			p = p->prev;
		}
	}
}
/**
 * swap - swap adjacent two nodes from a doubly linked list
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
	print_list((const listint_t *) *list);
}
