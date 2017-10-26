#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list_t list
 * @head: pointer to pointer to list
 * @str: string to include in new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	char *cpy;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str != NULL)
	{
		cpy = strdup(str);
		new->str = cpy;
		new->len = _strlen(cpy);
	}
	else
	{
		new->str = NULL;
		new->len = 0;
	}
	/* new will be last, so next = NULL */
	new->next = NULL;
	if (head == NULL)
		return (new);
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int count;

	if (s == NULL)
		return (0);

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
