#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of dlistint_t list
 * @head: head of dlistint_t list
 * @n: value of node to add
 *
 * Return: address of new element or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
