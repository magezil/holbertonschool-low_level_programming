#include "sort.h"

/**
 * quick_sort - implement quick sort on an array
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
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
	if (pivot == 0 || pivot <= start)
		return;
	pivot = partition(array, start, pivot, size);
	if (pivot != 0 && pivot > start + 1)
		quick_recursive(array, start, pivot - 1, size);
	if (pivot + 1 < size - 1)
		quick_recursive(array, pivot + 1, size - 1, size);
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
