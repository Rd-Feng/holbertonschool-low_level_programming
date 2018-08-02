#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - insert node at the beginning of a list
 * @head: pointer to pointer of first element in list
 * @str: string in new inserted node
 *
 * Return: 0 on success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
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
			newNode->next = *head ? *head : NULL;
			*head = newNode;
		}
	}
	return (newNode);
}
