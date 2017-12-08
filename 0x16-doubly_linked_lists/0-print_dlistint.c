#include "lists.h"

/**
 * print_dlistint - prints a dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
