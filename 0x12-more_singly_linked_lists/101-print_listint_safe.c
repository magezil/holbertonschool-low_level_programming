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
	unsigned int count;
	unsigned int i;
	listint_t *temp1;
	listint_t *temp2;

	if (head == NULL)
		return (0);
	count = 0;
	temp1 = (listint_t *) head;
	while (temp1 != NULL)
	{
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		count++;
		temp1 = temp1->next;
		for (i = 0, temp2 = (listint_t *) head; i < count; i++)
		{
			if (temp1 == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp1, temp1->n);
				exit(98);
			}
			temp2 = temp2->next;
		}
	}
	return (count);
}
