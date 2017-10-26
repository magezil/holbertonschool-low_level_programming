#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list_t list
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count;
	list_t *current;

	if (h == NULL)
		return (0);
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (0);
	*current = *h;
	for (count = 0; current != NULL; count++)
		current = current->next;
	free(current);
	return (count);
}
