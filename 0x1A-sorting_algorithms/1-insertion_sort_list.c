#include "sort.h"
/**
 * insertion_sort_list - insertion sort
 * @list: pointer to list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cand = NULL, *p = NULL, *nc = NULL, *np = NULL;

	if (!list || !*list || !(*list)->next)
		return;
	nc = *list;
	for (cand = (*list)->next; nc; cand = nc)
	{
		nc = cand->next;
		np = cand;
		for (p = cand->prev; np; p = np)
		{
			np = p->prev;
			if (cand->n < p->n)
			{
				cand->prev = p->prev;
				p->next = cand->next;
				if (p->prev)
					p->prev->next = cand;
				if (cand->next)
					cand->next->prev = p;
				p->prev = cand;
				cand->next = p;
				if (!cand->prev)
					*list = cand;
				print_list(*list);
			}
		}
	}
}
