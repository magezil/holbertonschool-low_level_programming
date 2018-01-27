#include "sort.h"

/**
 * selection_sort - use selection sort algorithm on an array
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void selection_sort(int *array, size_t size)
{
	unsigned i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min == i)
			continue;
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
