#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a linked list_t list
 * @h: pointer to list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;
	const list_t *current;

	if (h == NULL)
		return (0);
	current = h;
	count = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] (nil)\n", current->len);
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
