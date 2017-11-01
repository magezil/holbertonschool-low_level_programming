#include "lists.h"

/**
 * get_nodeint_at_index - function returns the node at the given index
 * of a linked list
 * @head: pointer to head of linked list
 * @index: index of node to return
 *
 * Return: node at given index or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index > 0 && head != NULL)
	{
		index--;
		head = head->next;
	}
	return (head);
}
