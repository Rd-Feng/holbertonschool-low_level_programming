#include "dog.h"
#include <stdlib.h>

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
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
	return (ptr);
}
