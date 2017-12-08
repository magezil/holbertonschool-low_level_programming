#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of dlistint_t list
 * @index: index of node to return
 *
 * Return: address of `n`th node or `NULL` if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; head != NULL && n < index; n++)
	{
		head = head->next;
	}
	return (head);
}
