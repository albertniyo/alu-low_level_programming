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

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
