#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list_t list
 * @head: pointer to pointer to list
 * @str: string to include in new node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
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
