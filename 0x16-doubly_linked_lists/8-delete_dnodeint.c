#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head of dlistint_t list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
