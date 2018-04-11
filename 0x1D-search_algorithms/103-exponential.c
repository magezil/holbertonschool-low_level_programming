#include "search_algos.h"

/**
 * exponential_search - Use exponential search to find an element in a list
 * @array: pointer to first element in array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);
	for (bound = 1; bound < size && array[bound] < value; bound *= 2)
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	if (bound < size)
		size = bound + 1;
	bound /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n", bound, size - 1);
	return (bin_search_recursive(array, bound, size, value));
}

/**
 * bin_search_recursive - recursively use binary search to find a number
 * @array: pointer to first element in array to search
 * @start: start index
 * @end: end index
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int bin_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;
	char *delim;

	if (start >= end)
		return (-1);
	printf("Searching in array:");
	delim = " ";
	for (i = start; i < end; i++)
	{
		printf("%s%d", delim, array[i]);
		delim = ", ";
	}
	printf("\n");
	mid = (end - start - 1) / 2 + start;
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (bin_search_recursive(array, mid + 1, end, value));
	return (bin_search_recursive(array, start, mid, value));
}
