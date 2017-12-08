#include "lists.h"

/**
 * dlistint_len - counts number of nodes in a dlistint_t
 * @h: head of dlistint_t list
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
