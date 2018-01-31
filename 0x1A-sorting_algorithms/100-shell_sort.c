#include "sort.h"

/**
 * shell_sort - implement shell sort algorithm on an array
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t i, j;
	int temp;

	if (array == NULL)
		return;
	while (gap < size)
		gap = gap * 3 + 1;
	for (gap = (gap - 1) / 3; gap >= 1; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
		print_array(array, size);
	}
}
