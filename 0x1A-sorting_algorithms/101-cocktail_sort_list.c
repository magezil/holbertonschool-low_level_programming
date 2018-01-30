#include "sort.h"

/**
 * cocktail_sort_list - use cocktail shaker sort on a doubly linked list
 *
 * @list: head of doubly linked list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	char swapped;
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		for (current = *list; current->next != NULL; current = current->next)
		{
			if (current->n > current->next->n)
			{
				swapped = swap_nodes(list, current->next, current);
				current = current->prev;
			}
		}
		if (!swapped)
			return;
		swapped = 0;
		for (; current->prev != NULL; current = current->prev)
		{
			if (current->n < current->prev->n)
			{
				swapped = swap_nodes(list, current, current->prev);
				current = current->next;
			}
		}
	}
}

/**
 * swap_nodes - swaps two nodes
 *
 * @list: linked list to sort
 * @first: node that will be earlier in the list
 * @second: node that will be next in the list
 *
 * Return: 1 if success, 0 otherwise
 */
char swap_nodes(listint_t **list, listint_t *first, listint_t *second)
{
	first->prev = second->prev;
	if (first->next != NULL)
		first->next->prev = second;
	second->next = first->next;
	first->next = second;
	if (second->prev != NULL)
		second->prev->next = first;
	else
		*list = first;
	second->prev = first;
	print_list(*list);
	return (1);
}
