#include "sort.h"

/**
 * counting_sort - implements counting sort on array of integers
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void counting_sort(int *array, size_t size)
{
	size_t max, i;
	int *count, *new;
	int counter, oc;

	if (array == NULL || size <= 1)
		return;
	new = malloc(sizeof(*array) * size);
	if (new == NULL)
		return;
	max = get_max(array, size) + 1;
	for (i = 0; i < size; i++)
		new[i] = array[i];
	count = create_counting(max);
	if (count == NULL)
	{
		free(new);
		return;
	}
	for (i = 0; i < size; i++)
		count[array[i]]++;
	counter = 0;
	for (i = 0; i < max; i++)
	{
		oc = count[i];
		count[i] += counter;
		counter += oc;
	}
	print_array(count, max);
	for (i = 0; i < size; i++)
	{
		array[count[new[i]] - 1] = new[i];
		count[new[i]]--;
	}
	free(count);
	free(new);
}

/**
 * create_counting - creates the counting array
 *
 * @size: size of array to create
 *
 * Return: counting array of zeros with size elements
 */
int *create_counting(int size)
{
	int i;
	int *count;

	count = malloc(sizeof(*count) * size);
	if (count == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		count[i] = 0;
	return (count);
}

/**
 * get_max - gets the maximum value in the array
 *
 * @array: array of integers
 * @size: number of elements in array
 *
 * Return: maximum value in array
 */
unsigned int get_max(int *array, size_t size)
{
	int max_value;
	size_t i;

	for (max_value = 0, i = 0; i < size; i++)
		if (array[i] > max_value)
			max_value = array[i];
	return (max_value);
}
