#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create an array of chars and initialize with specific char
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to new array (success) or NULL (failure)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
