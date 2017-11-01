#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t list
 * (including lists with loops)
 * @head: pointer to list to print
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	unsigned int i;
	const listint_t *temp1;
	const listint_t *temp2;

	if (head == NULL)
		return (0);
	count = 0;
	temp1 = head;
	while (temp1 != NULL)
	{
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		count++;
		temp1 = temp1->next;
		temp2 = head;
		for (i = 0; i < count; i++)
		{
			if (temp1 == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp1, temp1->n);
				return (count);
			}
			temp2 = temp2->next;
		}
	}
	return (count);
}
