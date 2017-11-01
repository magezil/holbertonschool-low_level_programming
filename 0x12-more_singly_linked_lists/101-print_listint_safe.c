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
	unsigned int buff_size = 100;
	listint_t **visited;
	listint_t *temp;

	if (head == NULL)
		return (0);
	visited = create_array(buff_size);
	if (visited == NULL)
		exit(98);

	count = 0;
	temp = (listint_t *) head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (count >= buff_size)
		{
			visited = _realloc(visited, buff_size, buff_size + 100);
			buff_size += 100;
		}
		visited[count] = temp;
		count++;
		temp = temp->next;
		if (temp != NULL && !checker(temp, visited, buff_size))
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			free(visited);
			exit(98);
		}
	}
	free(visited);
	return (count);
}

/**
 * create_array - create an array of pointers to linked list nodes
 * @size: size of array
 *
 * Return: pointer to new array (success) or NULL (failure)
 */
listint_t **create_array(unsigned int size)
{
	listint_t **ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(listint_t *) * size);
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < size; i++)
		ptr[i] = NULL;
	return (ptr);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory location allocated by malloc
 * @old: size of old memory location
 * @new: new size of memory to be allocated
 *
 * Return: pointer to reallocated memory (success) or NULL (fail)
 */
listint_t **_realloc(listint_t **ptr, unsigned int old, unsigned int new)
{
	listint_t **newp;
	unsigned int i;

	if (ptr == NULL)
	{
		newp = malloc(sizeof(listint_t) * new);
		/* return newp - if NULL, will return NULL; else return newp */
		return (newp);
	}
	if (old == new)
		return (ptr);
	if (new == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}

	newp = malloc(new);
	if (newp == NULL)
		return (NULL);

	for (i = 0; i < old && i < new; i++)
		newp[i] = ptr[i];
	free(ptr);
	return (newp);
}

/**
 * checker - function checks if given address is in given list
 * @node: address of current node
 * @list: list of addresses
 * @size: size of list
 *
 * Return: 1 if current is not found, 0 otherwise
 */
int checker(listint_t *node, listint_t **list, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (node == list[i])
			return (0);
	}
	return (1);
}
