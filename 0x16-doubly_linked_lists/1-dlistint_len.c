#include "lists.h"

/**
 * dlistint_len - counds number of nodes in a doubly linked list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
