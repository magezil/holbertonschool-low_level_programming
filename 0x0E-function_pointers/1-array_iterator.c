#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes given function on each element of given array
 * @array: array to operate on
 * @size: size of array
 * @action: function to use on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
