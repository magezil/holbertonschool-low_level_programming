#include "sort.h"
#include <stdio.h>

/**
 * quick_sort_hoare - implement quick sort on an array
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	quick_recursive_hoare(array, 0, size - 1, size);
}

/**
 * quick_recursive_hoare - recursive helper method
 *
 * @array: array of integers to sort
 * @start: starting index for section to sort
 * @pivot: index for pivot (starts at end of list)
 * @size: size of array
 */
void quick_recursive_hoare(int *array, size_t start, size_t pivot, size_t size)
{
	size_t p;

	if (pivot == 0 || pivot <= start)
		return;

	p = partition_hoare(array, start, pivot, size);
	if (p != 0 && (p > start && p < size))
		quick_recursive_hoare(array, start, p, size);
	if (p < size - 1)
		quick_recursive_hoare(array, p + 1, pivot, size);
}

/**
 * partition_hoare - partitions array around pivot
 *
 * @array: array of integers to sort
 * @compare: index to compare against
 * @end: index for pivot
 * @size: size of array
 *
 * Return: pivot index
 */
size_t partition_hoare(int *array, size_t compare, size_t end, size_t size)
{
	size_t i, j;
	int pivot = array[end];

	i = compare - 1;
	j = end + 1;
	while (1)
	{
		do
			i++;
		while (i < size && array[i] < pivot);
		do
			j--;
		while (j < size && array[j] > pivot);
		if (i > j)
			return (j);
		if (i == j)
			return (j - 1);
		swap(array, size, i, j);
	}
}

/**
 * swap - swaps two elements in array then prints array
 *
 * @array: array of integers
 * @size: number of elements in array
 * @index0: first index to swap
 * @index1: second index to swap
 */
void swap(int *array, size_t size, size_t index0, size_t index1)
{
	int temp;

	temp = array[index0];
	array[index0] = array[index1];
	array[index1] = temp;
	print_array(array, size);
}
