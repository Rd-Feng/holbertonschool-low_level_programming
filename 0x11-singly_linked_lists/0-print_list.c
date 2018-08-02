#include <stdio.h>
#include "lists.h"

unsigned int _strlen(char *s);

/**
 * print_list - prints all elements of a list
 * @h: first node in list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%u] %s\n", _strlen(h->str),
		       (h->str) ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * _strlen - get number of characters in a string excluding null byte
 * @s: string
 *
 * Return: lenth of string, 0 if string is empty or null
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s)
		while (s[i])
			i++;
	return (i);
}
