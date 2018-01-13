#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of array
 *
 * Return: pointer to newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
		ht->shead = NULL;
		ht->stail = NULL;
	}
	return (ht);
}

/**
 * shash_table_set - adds key/value pairs in sorted linked list
 * @ht: hash table to add to
 * @key: key (sorted by ASCII value)
 * @value: value associated with key
 *
 * Return: 1 if success, 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;
	shash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	for (current = ht->array[index]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			if (strcmp(current->value, value) != 0)
			{
				free(current->value);
				current->value = strdup(value);
			}
			return (1);
		}
	}
	new = snode_create(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	new->sprev = NULL;
	new->snext = NULL;
	if (node_sadd(ht, new) == NULL)
		return (0);
	return (1);
}

/**
 * node_sadd - adds hash node to sorted linked list of hash table
 * @ht: hash table to add to
 * @node: new node to add
 *
 * Return: newly added node
 */
shash_node_t *node_sadd(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;
	shash_node_t *previous;

	if (ht == NULL || node == NULL)
		return (NULL);
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = ht->shead;
		return (node);
	}
	temp = ht->shead;
	if (strcmp(temp->key, node->key) > 0)
	{
		node->snext = ht->shead;
		temp->sprev = node;
		ht->shead = node;
		return (node);
	}
	while (temp != ht->stail && strcmp(temp->key, node->key) < 0)
	{
		previous = temp;
		temp = temp->snext;
	}
	if (temp == ht->stail && strcmp(temp->key, node->key) < 0)
	{
		temp->snext = node;
		node->sprev = temp;
		ht->stail = node;
		return (node);
	}
	previous->snext = node;
	node->sprev = temp->sprev;
	temp->sprev = node;
	node->snext = temp;
	return (node);
}

/**
 * snode_create - creates a new hash node
 * @key: key to add
 * @value: value to add
 *
 * Return: pointer to new node, or NULL if fail
 */
shash_node_t *snode_create(const char *key, const char *value)
{
	shash_node_t *new;

	if (key == NULL || value == NULL || strcmp(key, "") == 0)
		return (NULL);
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to retrieve from
 * @key: key to look for
 *
 * Return: value associated with key or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	current = ht->shead;
	while (current != NULL && strcmp(current->key, key) < 0)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned int comma;

	if (ht == NULL)
		return;
	printf("{");
	comma = 0;
	for (temp = ht->shead; temp != NULL; temp = temp->snext)
	{
		if (comma == 0)
			comma = 1;
		else
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned int comma;

	if (ht == NULL)
		return;
	printf("{");
	comma = 0;
	for (temp = ht->stail; temp != NULL; temp = temp->sprev)
	{
		if (comma == 0)
			comma = 1;
		else
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;
	shash_node_t *next;

	if (ht == NULL)
		return;
	for (temp = ht->shead; temp != NULL; temp = next)
	{
		next = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
