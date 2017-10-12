#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates given amount of memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: pointer to allocated memory (success) or NULL (fail)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
