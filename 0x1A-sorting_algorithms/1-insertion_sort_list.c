#include "sort.h"

/**
 * insertion_sort_list - uses insertion sort algorithm on a doubly linked list
 *
 * @list: pointer to head of doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *unsorted;

	for (current = (*list)->next; current != NULL; current = unsorted)
	{
		unsorted = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
	}
}
