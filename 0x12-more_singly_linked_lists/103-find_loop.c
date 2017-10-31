#include "lists.h"

/**
 * find_listint_loop - function finds the loop in a linked list
 * @head: pointer to head of linked list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (head == NULL)
		return (NULL);

	while (fast != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
			break;
	}
	if (fast == NULL)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
