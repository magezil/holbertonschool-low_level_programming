#include "lists.h"

/**
 * listint_len - function returns the number of elements of a linstint_t list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
