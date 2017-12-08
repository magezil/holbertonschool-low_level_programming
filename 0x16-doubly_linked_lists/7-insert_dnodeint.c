#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of linked list
 * @idx: index to insert node
 * @n: n of new node
 *
 * Return: address of new node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0, temp = *h; temp != NULL && i < idx; i++)
		temp = temp->next;
	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (temp != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		temp->prev->next = new;
		new->prev = temp->prev;
		temp->prev = new;
		new->next = temp;
		return (new);
	}
	return (NULL);
}
