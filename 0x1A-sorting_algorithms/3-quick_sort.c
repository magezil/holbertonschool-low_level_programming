#include "sort.h"

/**
 * quick_sort - implement quick sort on an array
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	quick_recursive(array, 0, size - 1, size);
}

/**
 * quick_recursive - recursive helper method
 *
 * @array: array of integers to sort
 * @start: starting index for section to sort
 * @pivot: index for pivot (starts at end of list)
 * @size: size of array
 */
void quick_recursive(int *array, size_t start, size_t pivot, size_t size)
{
	size_t p;

	if (pivot == 0 || pivot <= start)
		return;
	p = partition(array, start, pivot, size);
	if (p != 0 && p > start)
		quick_recursive(array, start, p - 1, size);
	if (p < size - 1)
		quick_recursive(array, p + 1, pivot, size);
}

/**
 * partition - partitions array around pivot
 *
 * @array: array of integers to sort
 * @compare: index to compare against
 * @pivot: index for pivot
 * @size: size of array
 *
 * Return: pivot index
 */
size_t partition(int *array, size_t compare, size_t pivot, size_t size)
{
	int temp;
	size_t i;

	for (i = compare; i < pivot; i++)
	{
		if (array[i] < array[pivot])
		{
			if (i != compare)
			{
				temp = array[compare];
				array[compare] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			compare++;
		}
	}
	if (array[compare] > array[pivot])
	{
		temp = array[compare];
		array[compare] = array[pivot];
		array[pivot] = temp;
		pivot = compare;
		print_array(array, size);
	}
	return (pivot);
}
