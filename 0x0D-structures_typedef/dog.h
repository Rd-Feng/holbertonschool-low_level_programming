#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Description: a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
