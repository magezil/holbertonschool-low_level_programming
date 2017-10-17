#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
