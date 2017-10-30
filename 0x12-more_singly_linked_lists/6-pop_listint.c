#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list
 * and returns head node's data
 * @head: pointer to pointer to head node of list
 *
 * Return: n from deleted head node of linked list, 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
