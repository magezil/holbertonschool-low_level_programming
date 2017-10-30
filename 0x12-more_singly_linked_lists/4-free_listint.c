#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
