#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
