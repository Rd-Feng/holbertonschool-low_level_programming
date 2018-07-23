#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - make new coppy of string
 * @str: string
 *
 * Return: pointer to new copy of string
 */
char *_strcpy(char *str)
{
	int len = 0;
	char *ptr = NULL;

	while (*(str + len))
		len++;
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (ptr)
	{
		while (len >= 0)
		{
			*(ptr + len) = *(str + len);
			len--;
		}
	}
	return (ptr);
}

/**
 * new_dog - create new dog using malloc
 * @name: dog name, string
 * @age: dog age, float
 * @owner: owner name, string
 *
 * Return: 0 on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;

	ptr = malloc(sizeof(dog_t));
	if (ptr)
	{
		if (name == NULL || owner == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->name = _strcpy(name);
		ptr->age = age;
		ptr->owner = _strcpy(owner);
		if (!ptr->name || !ptr->owner)
		{
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
