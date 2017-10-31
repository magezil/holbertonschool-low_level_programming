#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t linked list
 * @head: pointer to pointer of head of linked list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *prev;

	if (head == NULL)
		return (NULL);
	temp = (*head)->next;
	prev = NULL;
	while (temp != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		if (temp != NULL)
			*head = temp;
	}
	return (*head);
}
