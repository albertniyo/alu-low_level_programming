#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @p: pointer to initialize struct dog
 * @name: pointer to the dog's name
 * @age: float for the dog's age
 * @owner: pointer for the owner's name.
 */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
