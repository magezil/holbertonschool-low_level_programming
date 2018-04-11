#include "search_algos.h"
#include <math.h>

/**
 * jump_search - use jump search to find a number in an array
 * @array: pointer to first element in array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indices [%lu] and [%lu]\n", i - jump, i);
	if (i == size)
		jump = 0;
	for (i -= jump; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (value);
	}
	return (-1);
}
