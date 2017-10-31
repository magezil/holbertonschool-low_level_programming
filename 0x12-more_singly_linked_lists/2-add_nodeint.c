#include "lists.h"

/**
 * add_nodeint - function adds a new node to the beginning of a listint_t list
 * @head: pointer to pointer to list
 * @n: n for new node
 *
 * Return: address to new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->visited = 0;
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
