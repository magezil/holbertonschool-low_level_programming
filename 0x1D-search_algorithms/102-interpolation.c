#include "search_algos.h"

/**
 * interpolation_search - use interpolation search to find a value
 * @array: pointer to first element in array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (interpolation_recursive(array, 0, size, value));
}

/**
 * interpolation_recursive - use recursion to perform interpolation search
 * @array: pointer to first element in array to search
 * @low: index of lower value
 * @high: index of higher value
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int interpolation_recursive(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (low >= high)
		return (-1);
	high--;
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	if (pos > high)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	if (value > array[pos])
		return (interpolation_recursive(array, pos + 1, high, value));
	return (interpolation_recursive(array, low, pos, value));
}
