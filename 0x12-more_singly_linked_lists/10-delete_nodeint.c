#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at given index of a
 * listint_t linked list
 * @head: pointer to pointer to head of linked list
 * @index: index to insert new node
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp0;
	listint_t *temp1;

	if (head == NULL || *head == NULL)
		return (-1);
	temp0 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp0);
		return (1);
	}
	temp1 = (*head)->next;
	while (index > 1 && temp1 != NULL)
	{
		temp0 = temp1;
		temp1 = temp1->next;
		index--;
	}
	if (temp1 == NULL)
		return (-1);
	temp0->next = temp1->next;
	free(temp1);
	return (1);
}
