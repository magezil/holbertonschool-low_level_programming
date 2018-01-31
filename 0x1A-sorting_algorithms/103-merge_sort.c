#include "sort.h"
#include <stdio.h>

/**
 * merge_sort - implement merge sort on an array of integers
 *
 * @array: array of integers
 * @size: number of elements in array
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (array == NULL || size <= 1)
		return;
	temp = malloc(sizeof(array));
	if (temp == NULL)
		return;
	merge_recursive(array, temp, 0, size);
/*	free(temp);*/
}

/**
 * merge_recursive - recursive helper function for merge sort
 *
 * @array: array of integers to sort
 * @temp: temporary array to store sorted integers
 * @low: low index for part of array to sort
 * @high: high index for part of array to sort
 */
void merge_recursive(int *array, int *temp, size_t low, size_t high)
{
	size_t mid;
	size_t i, ilow, ihigh;

	if (high - low <= 1)
		return;
	mid = (high + low) / 2;
	merge_recursive(array, temp, low, mid);
	merge_recursive(array, temp, mid, high);
	printf("Merging...\n");
	print_segment(array, "left", low, mid);
	print_segment(array, "right", mid, high);
	ilow = low;
	ihigh = mid;
	for (i = low; i < high; i++)
	{
		if (ilow < mid && (ihigh >= high || array[ilow] < array[ihigh]))
		{
			temp[i] = array[ilow];
			ilow++;
		}
		else
		{
			temp[i] = array[ihigh];
			ihigh++;
		}
	}
	print_segment(temp, "Done", low, high);
	for (i = low; i < high; i++)
		array[i] = temp[i];
}

/**
 * print_segment - prints certain segment of array
 *
 * @array: array to print
 * @side: side of array to print
 * @start: index to start print
 * @end: index to stop print
 */
void print_segment(int *array, char *side, size_t start, size_t end)
{
	size_t i;

	printf("[%s]: ", side);
	for (i = start; i < end; i++)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
