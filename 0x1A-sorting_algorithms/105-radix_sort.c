#include "sort.h"

#define NUM_BUCKETS 10

/**
 * radix_sort - implement radix sort on an array of integers
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void radix_sort(int *array, size_t size)
{
	listint_t *buckets[10];
	size_t i;
	char success;
	unsigned int sig_dig, max;

	if (array == NULL)
		return;
	for (i = 0; i < NUM_BUCKETS; i++)
		buckets[i] = NULL;
	max = get_max(array, size);
	for (sig_dig = 1; sig_dig <= max; sig_dig *= 10)
	{
		success = bucketize(array, size, buckets, sig_dig);
		if (success == 0)
			return;
		listize(array, buckets);
		print_array(array, size);
	}
}

/**
 * bucketize - put values from array into buckets
 *
 * @array: array of integers to sort
 * @size: number of elements in array
 * @buckets: array of buckets for each digit
 * @sig_dig: significant digit
 *
 * Return: 1 if success, 0 otherwise
 */
char bucketize(int *array, size_t size, listint_t **buckets, int sig_dig)
{
	size_t i;
	size_t key;
	listint_t *current, *new;
	int *temp;

	for (i = 0; i < size; i++)
	{
		key = (array[i] / sig_dig) % 10;
		current = buckets[key];
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (0);
		temp = (int *)&new->n;
		*temp = array[i];
		new->next = NULL;
		if (current == NULL)
		{
			buckets[key] = new;
			new->prev = NULL;
			continue;
		}
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (1);
}

/**
 * listize - turn buckets back into an array
 *
 * @array: array to replace with bucket content
 * @buckets: buckets to turn into list
 */
void listize(int *array, listint_t **buckets)
{
	size_t i, ai;
	listint_t *current, *temp;

	for (i = 0, ai = 0; i < NUM_BUCKETS; i++)
	{
		for (current = buckets[i]; current != NULL; current = temp)
		{
			temp = current->next;
			array[ai] = current->n;
			ai++;
			free(current);
		}
		buckets[i] = NULL;
	}
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
