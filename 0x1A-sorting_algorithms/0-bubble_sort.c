#include "sort.h"

/**
 * bubble_sort - sorts elements in ascending order with bubble sort algorithm
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	int x;
	int n;
	int temp;
	int swapped;

	for (n = size - 1; swapped; n--)
	{
		swapped = 0;
		for (x = 0; x < n; x++)
		{
			if (array[x] > array[x + 1])
			{
				swapped = 1;
				temp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
