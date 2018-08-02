#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add new node at the end of list
 * @head: pointer to pointer of first element in list
 * @str: string in new element
 *
 * Return: pointer to new node, NULL when fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL, *ptr = NULL;
	char *newStr = NULL;
	unsigned int i = 0;

	if (str)
		newStr = strdup(str);
	if (head && newStr)
	{
		newNode = malloc(sizeof(list_t));
		if (newNode)
		{
			newNode->str = newStr;
			while (newStr[i])
				i++;
			newNode->len = i;
			newNode->next = NULL;
			/* add node to the end */
			ptr = *head;
			if (ptr)
			{
				while (ptr->next)
					ptr = ptr->next;
				ptr->next = newNode;
			}
			else
			{
				*head = newNode;
			}
		}
	}
	return (newNode);
}
