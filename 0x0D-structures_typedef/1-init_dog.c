#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
