#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *temp;
	if (head == NULL)
		return;
	temp = head->next;
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = temp;
		if (temp != NULL)
			temp = temp->next;
	}
}
