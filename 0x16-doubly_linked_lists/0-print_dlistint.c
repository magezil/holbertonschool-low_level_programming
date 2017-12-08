#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of doubly linked list
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
