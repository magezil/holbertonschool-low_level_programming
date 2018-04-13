#include "search_algos.h"

/**
 * linear_skip - find a value in a skip linked list
 * @list: pointer to first element in linked list to search
 * @value: value to find
 *
 * Return: skip linked list node with value or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (list == NULL)
		return (NULL);

	for (current = list; current != NULL; current = current->express)
	{
		if (current->n >= value)
		{
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index,
			current->n);
		prev = current;
	}
	if (current == NULL)
	{
		for (current = prev; current->next != NULL; )
			current = current->next;
	}
	printf("Value found between indices [%lu] and [%lu]\n", prev->index,
		current->index);
	for (; prev->index <= current->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
