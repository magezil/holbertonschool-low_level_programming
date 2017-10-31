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

	while (fast != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
			break;
	}
	if (fast == NULL)
		return (NULL);
	fast = fast->next;
	while (head != fast)
	{
		while (fast != slow)
		{
			if (head == fast)
				return (head);
			fast = fast->next;
		}
		fast = fast->next;
		head = head->next;
	}
	return (head);
}
