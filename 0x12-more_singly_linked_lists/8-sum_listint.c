#include "lists.h"

/**
 * sum_listint - function returns the sum of all n of a listint_t linked list
 * @head: pointer to head of linked list
 *
 * Return: sum of linked list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
