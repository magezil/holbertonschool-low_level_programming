#include "search_algos.h"
#include <math.h>

/**
 * jump_list - use jump search to find a value in a singly linked list
 * @list: pointer to first element in linked list to search
 * @size: size of array
 * @value: value to find
 *
 * Return: node with value or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, jumpi;
	listint_t *prev, *current;

	if (list == NULL)
		return (NULL);
	jump = sqrt(size);
	jumpi = 0;
	current = list;
	for (i = 0; i < size; i++)
	{
		if (current->index == jumpi)
		{
			if (current->n >= value)
			{
				break;
			}
			printf("Value checked at index [%lu] = [%d]\n", i, current->n);
			jumpi += jump;
			prev = current;
		}
		current = current->next;
	}
	printf("Value found between indices [%lu] and [%lu]\n", prev->index, i);
	for (i = prev->index; prev->index <= current->index; prev = prev->next, i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
