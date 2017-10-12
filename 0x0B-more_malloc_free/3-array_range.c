#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create array of integers
 * @min: minimum value to include
 * @max: maximum value to include
 *
 * Return: pointer to new array (success) or NULL (fail)
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		arr[i] = min + i;
	return (arr);
}
