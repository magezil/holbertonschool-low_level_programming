#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory location allocated by malloc
 * @old_size: size of old memory location
 * @new_size: new size of memory to be allocated
 *
 * Return: pointer to reallocated memory (success) or NULL (fail)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int i;

	if (ptr == NULL)
	{
		newp = malloc(new_size);
		/* return newp - if NULL, will return NULL; else return newp */
		return (newp);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}

	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		newp[i] = *((char *)ptr + i);
	free(ptr);
	return (newp);
}
