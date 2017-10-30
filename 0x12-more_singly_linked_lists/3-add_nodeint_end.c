#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list
 * @head: pointer to pointer to list
 * @n: n for new node
 *
 * Return: address to new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
