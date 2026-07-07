#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: pointer for the dog's name
 * @age: float representing the dog's age
 * @owner: pointer for the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
