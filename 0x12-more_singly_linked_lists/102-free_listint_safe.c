#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * (including lists with loops)
 * @head: pointer to pointer to list to print
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count;
	size_t i;
	listint_t *temp1;
	listint_t *temp2;
	listint_t *temp3;

	if (head == NULL)
		return (0);
	count = 0;
	temp1 = *head;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1);
		count++;
		temp1 = temp2;
		temp3 = *head;
		for (i = 0; i < count; i++)
		{
			if (temp1 == temp3)
			{
				*head = NULL;
				return (count);
			}
			temp3 = temp3->next;
		}
	}
	*head = NULL;
	return (count);
}
