#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to pointer to head of linked list
 * @index: index to insert new node
 * @n: data(n) for new node
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (index > 1 && temp != NULL)
	{
		index--;
		temp = temp->next;
	}
	if (index > 1)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
