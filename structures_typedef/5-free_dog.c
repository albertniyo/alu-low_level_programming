#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to struct dog
 * @d: pointer to the dog_t structure
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
